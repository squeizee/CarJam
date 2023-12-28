using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11 {

    [DefaultExecutionOrder(100)]
    [ExecuteInEditMode]
    public class EPPolarGrid : ExtendedShape {

        public TextMeshLabelsArray RadialLabels = new TextMeshLabelsArray();
        public TextMeshLabelsArray LinearLabels = new TextMeshLabelsArray();

        [A_ExpColor32("Lines color")]
        public ExpColor32 LinesColor = new ExpColor32(Color.white);

        [A_ExpFloat(0, 128, "Radius")]
        public ExpFloat Radius = new ExpFloat(1);

        [A_ExpInt(0,128, "Radial lines count")]
        public ExpInt RadiusesCount = 7;

        [A_ExpFloat(0, 1f, "Radiuses width")]
        public ExpFloat RadiusesWidth = new ExpFloat(0.01f);

        [A_ExpInt(0, 128, "Circles count")]
        public ExpInt CirclesCount = 7;

        [A_ExpFloat(0, 1f, "Circles width")]
        public ExpFloat CirclesWidth = new ExpFloat(0.01f);

        [A_ExpInt(4, 256, "Circle segments")]
        public ExpInt Segments = 64;

        [HideInInspector]
        public List<Circle> circles = new List<Circle>();
        [HideInInspector]
        public List<Line> lines = new List<Line>();

        public override bool isTopologyChanged {
            get {
                bool result = RadiusesCount.isChanged | CirclesCount.isChanged | Segments.isChanged  | RadialLabels.Enabled.isChanged | LinearLabels.Enabled.isChanged;
                if (points == null) {
                    result = true;
                }
                return result;
            }
        }

        public override bool isSizeChanged {
            get {
                return Radius.isChanged | RadiusesWidth.isChanged | CirclesWidth.isChanged;
            }
        }

        public override bool isColorsChanged {
            get {
                return LinesColor.isChanged  ;
            }
        }

        public override bool isLabelsChanged {
            get {
                return RadialLabels.isParamsChanged | LinearLabels.isParamsChanged;
             }
        }

        public override IEnumerable<Spline> Splines() {
            for (int i = 0; i<circles.Count; i++) {
                yield return circles[i];
            }
            for (int i = 0; i < lines.Count; i++) {
                yield return lines[i];
            }
        }

        public override int SplinesCount () {
           return circles.Count + lines.Count;
        }

        public override void SetTopology() {
            circles.Clear();
            for (int i = 0; i < CirclesCount; i++) {
                Circle c = new Circle(Segments);
                c.OnTopologyChanged(this);
                circles.Add(c);
            }
            lines.Clear();
            for (int i = 0; i < RadiusesCount; i++) {
                Line line = new Line();
                line.OnTopologyChanged(this);
                lines.Add(line);
            }

            if (RadialLabels.Enabled) {
                RadialLabels.SetCount(RadiusesCount, transform);
             } else {
                 RadialLabels.SetCount(  0, transform);
            }

            if (LinearLabels.Enabled) {
                LinearLabels.SetCount(CirclesCount , transform);
            } else {
                LinearLabels.SetCount(0, transform);
            }

        }

        public override void SetSize() {
            float circlesStep = Radius /  CirclesCount ;
            for (int c = 1; c<=circles.Count; c++) {
                Circle circle = circles[c-1];
                circle.Radius.Set( circlesStep * c );
                circle.Width = CirclesWidth;
                circle.OnSizeChanged(this);
            }

            float radiusStep = (Mathf.PI * 2) / RadiusesCount;
            for (int i = 0; i<lines.Count; i++) {
                Spline line = lines[i];
                line.Width = RadiusesWidth;
                
                float azimuth = i * radiusStep;
                if (i % 2 == 0) {
                    line.points[1].Position = new Vector3(0, 0, 0);
                    line.points[0].Position = new Vector3(Mathf.Cos(azimuth) * Radius,  0, Mathf.Sin(azimuth) * Radius );
                } else {
                    line.points[0].Position = new Vector3(0, 0, 0);
                    line.points[1].Position = new Vector3(Mathf.Cos(azimuth) * Radius,  0, Mathf.Sin(azimuth) * Radius );
                }
                
                line.OnSizeChanged(this);
            }


        }

        public override void SetLabels() {
            for (int i = 0; i < RadialLabels.items.Length; i++) {
                float a = Mathf.PI * 2 * i / (float)RadiusesCount;
                float r = Radius + RadialLabels.Offset.x; 
                Vector3 pos = new Vector3(Mathf.Cos(a) * r ,  RadialLabels.Offset.y,  Mathf.Sin(a) * r );
                Quaternion rotation = Quaternion.identity;
                Vector2 dir = pos.XyZtoXY();
                Edge2d.Rotate90(dir);
                rotation = Quaternion.LookRotation(-Vector3.up, -dir.XYtoXyZ());
                RadialLabels.items[i].SetPositionAndSize(RadialLabels, pos, rotation);
            }

            for (int i = 0; i <  LinearLabels.items.Length; i++) {
                float xPos = (Radius / LinearLabels.items.Length) * (i+1) + LinearLabels.Offset.x;
                LinearLabels.items[i].SetPositionAndSize(LinearLabels, new Vector3(xPos, 0, LinearLabels.Offset.y)  );
            }
 
        }

        public override void SetColors() {
            if (circles.Count > 0) {
                Circle lastCircle = circles[0];
                lastCircle.prevPoint0.SetColorKeyable(LinesColor);
            }
        }

        public override void ApplyInherited() {
            RadialLabels.UpdateStrings();
            LinearLabels.UpdateStrings();
        }

        public static EPPolarGrid Create() {
            GameObject go = new GameObject("New PolarGrid");
            EPPolarGrid result = go.AddComponent<EPPolarGrid>();
            result.Apply();
            return result;
        }

    }


}
