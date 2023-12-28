using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11 {

    [HelpURL("http://polyflow.studio/ExtendedPrimitivesDocumentation/ExtendedPrimitives_Documentation.html")]
    public abstract class ExtendedShape : MonoBehaviour {
 
        public class Point {
            public bool IsWeightKeyable;
            public bool IsColorKeyable;
            public Color _Color;
            public float Width;
            public int Global;
            public float Distance;
            public float Time;
            Vector3 prevPosition;
            public Vector3 Position;

            public void SetColorKeyable( Color c ) {
                _Color = c;
                IsColorKeyable = true;
            }

            public static implicit operator int(Point i) {
                return i.Global;
            }

            public static implicit operator Vector3(Point i) {
                return i.Position;
            }

            public bool IsModyfied {
                get {
                    if (Position != prevPosition) {
                        prevPosition = Position;
                        return true;
                    }
                    return false;
                }
            }
        }

        [System.Serializable]
        public class Spline {
            float prevWidth;
            public float Width = 1f;

            public Point prevPoint2 = new Point();
            public Point prevPoint1 = new Point();
            public Point prevPoint0 = new Point();

            public List<Point> points = new List<Point>();

            public Point postPoint0 = new Point();
            public Point postPoint1 = new Point();
            public Point postPoint2 = new Point();
 
            public virtual void OnSizeChanged(ExtendedShape parent) {
                for (int p = 0; p < points.Count; p++) {
                    points[p].Width = Width;
                }
                prevPoint0.Width = Width * 0.66f;
                postPoint1.Width = 0;
                postPoint2.Width = 0;
                prevPoint0.Width = Width * 0.66f;
                postPoint1.Width = 0;
                postPoint2.Width = 0 ;

                if (points.Count > 1) {
                    Vector3 first = points[0].Position;
                    Vector3 second = points[1].Position;
                    Vector3 lastButOne = points[points.Count - 2].Position;
                    Vector3 last = points[points.Count - 1].Position;

                    Vector3 prevDir = (first - second).normalized * Width ;
                    Vector3 postDir = (last - lastButOne).normalized * Width  ;

                    prevPoint0.Position = first + prevDir * 0.33f;
                    prevPoint1.Position = first + prevDir * 0.66f ;
                    prevPoint2.Position = first + prevDir;

                    postPoint0.Position = last + postDir * 0.33f;
                    postPoint1.Position = last + postDir * 0.66f;
                    postPoint2.Position = last + postDir ;
                }
            }

            public virtual void OnTopologyChanged(ExtendedShape parent) {
                prevPoint2.IsWeightKeyable = true;
                prevPoint1.IsWeightKeyable = true;
                prevPoint0.IsWeightKeyable = true;

                points[0].IsWeightKeyable = true;
                points[points.Count - 1].IsWeightKeyable = true;

                postPoint0.IsWeightKeyable = true;
                postPoint1.IsWeightKeyable = true;
                postPoint2.IsWeightKeyable = true;

                parent.AddPoint(prevPoint2);
                parent.AddPoint (prevPoint1);
                parent.AddPoint( prevPoint0);
                for (int i = 0; i < points.Count; i++) {
                    parent.AddPoint(points[i]);
                }
                parent.AddPoint(postPoint0);
                parent.AddPoint(postPoint1);
                parent.AddPoint(postPoint2);
                
                parent.keyablePointsCount += 8;
 
            }

            public int pointsCount {
                get {
                    return points.Count + 2;
                }
            }
        }

        [System.Serializable]
        public class Circle : Spline {
            public ExpFloat Radius;
            public ExpInt Segments;

            public Circle( int segments ) {
                Segments.Set( segments );
            }

            public override void OnSizeChanged( ExtendedShape parent ) {
                float step = 1f/Segments;
                for (int i = 0; i<points.Count; i++) {
                    float a = step * i * Mathf.PI * 2;
                    points[i].Position = new Vector3(Mathf.Cos(a) * Radius,  0, Mathf.Sin(a) * Radius );
                }
                base.OnSizeChanged(parent);
            }

            public override void OnTopologyChanged( ExtendedShape parent ) {
                points.Clear() ;
                for (int i = 0; i<=Segments; i++) {
                    points.Add(new Point());
                }
                base.OnTopologyChanged(parent);
            }

            public bool IsTopologyChanged {
                get {
                    bool result = false;
                    if (points == null) {
                        result = true;
                    }
                    if (Segments.isChanged) {
                        result = true;
                    }
                    return result;
                }
            }

            public bool IsSizeChanged {
                get {
                    bool result = false;
                    if (Radius.isChanged) {
                        result = true;
                    }
                    return result;
                }
            }
        }

        [System.Serializable]
        public class Line : Spline {

            public Line() {
                points.Add(new Point());
                points.Add(new Point());
            }
        }

        LineRenderer lr;
        internal LineRenderer LR {
            get {
                if (lr == null) {
                    lr = GetComponent<LineRenderer>();
                    if (lr == null) {
                        lr = gameObject.AddComponent<LineRenderer>();
                    }
                    lr.useWorldSpace = false;
                    lr.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
                    lr.receiveShadows = false;
                    if (lr.sharedMaterial == null) {
                        lr.sharedMaterial = Resources.Load("ExtendedPrimitives_ExtendedShapeMaterial") as Material;
                    }
                }
 
                return lr;
            }
        }
 
        internal List<Point> points ;
        AnimationCurve wc;
        internal Vector3[] positions;
        Keyframe[] keys;
 
        Gradient colorGradient;
        internal Gradient ColorGradient {
            get {
                if (colorGradient == null) {
                    colorGradient = new Gradient();
                }
                return colorGradient;
            }
        }

        int keyablePointsCount;

        public void SetTopologyBegin() {
            points = new List<Point>();
            keyablePointsCount = 0;
        }

        public void SetTopologyEnd() {
            positions = new Vector3[points.Count];
            LR.positionCount = points.Count;
            keys = new Keyframe[keyablePointsCount];
 
        }

        public void SetSizeEnd() {
            float distance = 0;
            for (int i = 0; i < points.Count; i++) {
                positions[points[i]] = points[i];
                if (i > 0) {
                    float d = Vector3.Distance(points[i], points[i - 1]);
                    distance += d;
                }
                points[i].Distance = distance;
            }

 
            int keyableCounter = 0;
            for (int i = 0; i < points.Count; i++) {
                points[i].Time = points[i].Distance / distance;
                if (points[i].IsWeightKeyable) {
                    keys[keyableCounter] = new Keyframe(points[i].Time, points[i].Width);
                    keyableCounter++;
                }
            }

            LR.SetPositions(positions);
            for (int i = 1; i < keys.Length - 1; i++) {
                float inTangent = 0;
                float outTangent = 0;
                GetLinearTangents(keys[i - 1], keys[i], keys[i + 1], ref inTangent, ref outTangent);
                keys[i].inTangent = inTangent;
                keys[i].outTangent = outTangent;
            }

            LR.widthCurve = new AnimationCurve(keys );
 
        }

        void SetColorsEnd() {
            List<GradientColorKey> colorKeysList = new List<GradientColorKey>();
            List<GradientAlphaKey> alphaKeysList = new List<GradientAlphaKey>();

            foreach (Point p in points) {
                if (p.IsColorKeyable) {
                    colorKeysList.Add( new GradientColorKey( p._Color, p.Time  ));
                    alphaKeysList.Add( new GradientAlphaKey( p._Color.a, p.Time ));
                }
            }
            ColorGradient.mode = GradientMode.Fixed;
            ColorGradient.SetKeys(colorKeysList.ToArray(), alphaKeysList.ToArray());
            LR.colorGradient = ColorGradient; 

 
        }

        void GetLinearTangents(Keyframe k0, Keyframe k1, Keyframe k2, ref float inTangent, ref float outTangent) {
            inTangent = 1f / (k1.time - k0.time) * (k1.value - k0.value);
            outTangent = 1f / (k2.time - k1.time) * (k2.value - k1.value);
        }

        void Update() {
            Apply();
        }

        public void Apply() {
            bool sizeChanged = false;
            bool colorsChanged = false;
            bool labelsChanged = false;

            if (isTopologyChanged) {
                SetTopologyBegin();
                SetTopology();
                SetTopologyEnd();
                sizeChanged = true;
                colorsChanged = true;
                labelsChanged = true;
            }

            if (isSizeChanged | sizeChanged) {
                labelsChanged = true;
                UnityEngine.Profiling.Profiler.BeginSample("OnSize_Changed");
                SetSize();
                SetSizeEnd();
                UnityEngine.Profiling.Profiler.EndSample();
            }

            if (isColorsChanged | colorsChanged) {
                SetColors();
                SetColorsEnd();
            }

            if (labelsChanged | isLabelsChanged) {
                SetLabels();
            }

            ApplyInherited();
        }

        public virtual void ApplyInherited() { }

        public abstract bool isTopologyChanged {
            get;
        }

        public abstract bool isSizeChanged {
            get;
        }

        public abstract bool isColorsChanged {
            get;
        }

        public abstract bool isLabelsChanged {
            get;
        } 

        public abstract void SetSize();

        public abstract void SetTopology();

        public abstract void SetColors();

        public abstract void SetLabels();

        public abstract IEnumerable<Spline> Splines ();

        public abstract int SplinesCount();

        internal void AddPoint(Point item) {
            item.Global = points.Count;
            points.Add(item);
        }
    }
}
