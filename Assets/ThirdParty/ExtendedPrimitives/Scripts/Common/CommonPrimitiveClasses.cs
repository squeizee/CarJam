using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ExtendedPrimitives_11.Internal {

    [System.Serializable]
    public class ColliderClass {
        public ExtendedPrimitive ep;

        public ColliderDetalizationEnum Detalization = ColliderDetalizationEnum.OneHalf;
        public ColliderDetalizationEnum _detalization = ColliderDetalizationEnum.Full;
        public bool DrawGizmo;
        [HideInInspector]
        public int vertsCounter;
        public List<ColliderVertex> Vertices = new List<ColliderVertex>();
        public List<ColliderFace> Faces = new List<ColliderFace>();
        public List<ColliderEdge> Edges = new List<ColliderEdge>();
        ColliderVertex[] _vertices;
        ColliderFace[] _faces;
        ColliderEdge[] _edges;
    
        Vector3[] mcVertices;
        int[] mcTriangles;
        Mesh ColliderMesh;

        public void ClearTopology(ExtendedPrimitive _ep) {
            ep = _ep;
            vertsCounter = 0;
            Vertices.Clear();
            Faces.Clear();
            Edges.Clear();
        }

        public void ConvertToArrays() {
            _vertices = Vertices.ToArray();
            _faces = Faces.ToArray();
            _edges = Edges.ToArray();

            Vertices.Clear();
            Faces.Clear();
            Edges.Clear();
        }

        public void DoDrawGizmo(ExtendedPrimitive ep) {
            if (_edges == null) {
                //ep.Apply();
                return;
            }
            Gizmos.color = new Color(0, 1, 0.5f, 1f);
            for (int e = 0; e < _edges.Length; e++) {
                Vector3 a = _edges[e].A.Parent.Pos;
                Vector3 b = _edges[e].B.Parent.Pos;
                Gizmos.DrawLine(a, b);
            }
        }

        public void CreateMeshCollider( ExtendedPrimitive ep) {
            if (mcVertices == null || mcVertices.Length != _vertices.Length) {
                mcVertices = new Vector3[_vertices.Length];
            }

            for (int i = 0; i<mcVertices.Length; i++) {
                mcVertices[i] =  _vertices[i].Parent.Pos  ;
               
            }

            MeshCollider mc = ep.GetComponent<MeshCollider>();
            if (mc == null) {
                mc = ep.gameObject.AddComponent<MeshCollider>();
            }

            if (ColliderMesh == null) {
                ColliderMesh = new Mesh();
                
            } else {
                ColliderMesh.Clear();
            }
            ColliderMesh.name = string.Format("meshCollider {0}", ep.name);

            int trisArrLength = _faces.Length * 3;
            if (mcTriangles == null || mcTriangles.Length != trisArrLength) {
                mcTriangles = new int[trisArrLength];
            }

            for (int f = 0; f<_faces.Length; f++) {
                int ti = f * 3;
                mcTriangles[ti] = _faces[f].A.ThisIdx ;
                mcTriangles[ti+1] = _faces[f].B.ThisIdx ;
                mcTriangles[ti+2] = _faces[f].C.ThisIdx;
            }

            ColliderMesh.vertices = mcVertices;
            ColliderMesh.triangles = mcTriangles;
            ColliderMesh.bounds = ep.bounds;
            mc.sharedMesh = ColliderMesh;
         }

        public bool Raycast(Ray r ) {
            Vector3 hit = Vector3.zero;
            float hitDist = 0;
            return Raycast(r, ref hit, ref hitDist);
        }

        public bool Raycast(  Ray r, ref Vector3 hit, ref float hitDistance) {
            ep.Statistic.Raycast.BeginSample();
            if (_vertices == null) {
                ep.Apply();
            }
            bool result = false;
            Ray rWorld = r;
            Matrix4x4 epLTW = ep.transform.localToWorldMatrix;
            Matrix4x4 epWTL = ep.transform.worldToLocalMatrix;

            r.origin = epWTL.MultiplyPoint3x4(r.origin);
            r.direction = epWTL.MultiplyVector(r.direction);

            if (!ep.bounds.IntersectRay(r)) {
                ep.Statistic.Raycast.EndSample();
                return false;
            }

            Vector2 zero = Vector2.zero;
            Matrix4x4 rayTM = Matrix4x4.TRS(r.origin, Quaternion.LookRotation(r.direction), Vector3.one).inverse;
            Vector3 bary = Vector3.zero;
 

            for (int i = 0; i < _vertices.Length; i++) {
                Vector3 point = _vertices[i].Parent.Pos;
                _vertices[i].Point2d.x = rayTM.m00 * point.x + rayTM.m01 * point.y + rayTM.m02 * point.z + rayTM.m03;
                _vertices[i].Point2d.y = rayTM.m10 * point.x + rayTM.m11 * point.y + rayTM.m12 * point.z + rayTM.m13;
            }

            float minDist = float.MaxValue;
 
            for (int f = 0; f < _faces.Length; f ++) {
                ColliderFace face = _faces[f];
                Vector2 a = face.A.Point2d;
                Vector2 b = face.B.Point2d;
                Vector2 c = face.C.Point2d;

                if (Triangle2d.PointTest(a, b, c, zero, ref bary )  ) {
                    Vector3 wA = epLTW.MultiplyPoint3x4( face.A.Parent.Pos );
                    Vector3 wB = epLTW.MultiplyPoint3x4( face.B.Parent.Pos );
                    Vector3 wC = epLTW.MultiplyPoint3x4( face.C.Parent.Pos );
                    Vector3 _hit = wA * bary.x + wB * bary.y + wC * bary.z;


                    hitDistance = Vector3.Distance(_hit, rWorld.origin);
                    if (hitDistance < minDist) {
                        hit = _hit;
                        minDist = hitDistance;
                    }
                    result = true;
 
                }
            }
            ep.Statistic.Raycast.EndSample();
            return result;
        }

    }

    [System.Serializable]
    public class ConstraintsClass {
        public Transform Top;
        public Transform Bottom;
        public Transform Side;
    }

    [System.Serializable]
    public struct TextureChannelParams {
        public UpdateTextureCoordsModeEnum UpdateMode;
        public MappingMethodEnum MappintType;
        public Vector2 Scale;
        public Vector2 Offset;
        public Transform TopTransform;
        public Transform BottomTransform;


        public Matrix4x4[] PlanarTMs;

        public void UpdatePlanarTMs(Transform tr) {
            Matrix4x4 m = Matrix4x4.TRS(new Vector3(Offset.x, Offset.y, 0), Quaternion.identity, new Vector3(Scale.x, Scale.y, 1)).inverse;
            if (TopTransform != null) {
                PlanarTMs[0] = TopTransform.worldToLocalMatrix * tr.localToWorldMatrix;
            } else {
                PlanarTMs[0] = m;
            }
            if (BottomTransform != null) {
                PlanarTMs[1] = BottomTransform.worldToLocalMatrix * tr.localToWorldMatrix;
            } else {
                PlanarTMs[1] = m;
            }
        }

        public TextureChannelParams(MappingMethodEnum mappingType, UpdateTextureCoordsModeEnum updateMode) {
            UpdateMode = updateMode;
            MappintType = mappingType;
            Scale = Vector2.one;
            Offset = Vector2.zero;
            TopTransform = null;
            BottomTransform = null;

            PlanarTMs = new Matrix4x4[2] { Matrix4x4.identity, Matrix4x4.identity };
        }

        public void ChangeCheck(ref TextureChannelParams previosVersion, Transform epTransform, ref bool topoChanged, ref bool changed) {
            if (previosVersion.UpdateMode != UpdateMode) {
                if (UpdateMode == UpdateTextureCoordsModeEnum.None && previosVersion.UpdateMode != UpdateTextureCoordsModeEnum.None) {
                    topoChanged = true;
                } else if (UpdateMode != UpdateTextureCoordsModeEnum.None && previosVersion.UpdateMode == UpdateTextureCoordsModeEnum.None) {
                    topoChanged = true;
                } else if (UpdateMode == UpdateTextureCoordsModeEnum.LiveUpdate && previosVersion.UpdateMode != UpdateTextureCoordsModeEnum.LiveUpdate) {
                    changed = true;
                }
                previosVersion.UpdateMode = UpdateMode;
            }
            if (UpdateMode == UpdateTextureCoordsModeEnum.None) {
                return;
            }

            if (MappintType == MappingMethodEnum.Planar) {
                //Matrix4x4 m = Matrix4x4.TRS(new Vector3(Offset.x, Offset.y, 0), Quaternion.identity, new Vector3(Scale.x, Scale.y, 1)).inverse;
                if (TopTransform != null) {
                    PlanarTMs[0] = TopTransform.worldToLocalMatrix * epTransform.localToWorldMatrix;

                } else {
                    PlanarTMs[0].SetColumn(0, Vector3.right * Scale.x);
                    PlanarTMs[0].SetColumn(1, Vector3.forward * Scale.y);
                    PlanarTMs[0].SetColumn(2, Vector3.up);
                    PlanarTMs[0].SetColumn(3, new Vector4(Offset.x, 0, Offset.y, 1));
                    PlanarTMs[0] = PlanarTMs[0].inverse;
                }
                if (BottomTransform != null) {
                    PlanarTMs[1] = BottomTransform.worldToLocalMatrix * epTransform.localToWorldMatrix;
                } else {
                    PlanarTMs[1].SetColumn(0, Vector3.right * Scale.x);
                    PlanarTMs[1].SetColumn(1, Vector3.forward * Scale.y);
                    PlanarTMs[1].SetColumn(2, Vector3.up);
                    PlanarTMs[1].SetColumn(3, new Vector4(Offset.x, 0, Offset.y, 1));
                    PlanarTMs[1] = PlanarTMs[1].inverse;
                }

                if (previosVersion.PlanarTMs[0] != PlanarTMs[0]) {
                    changed = true;
                    previosVersion.PlanarTMs[0] = PlanarTMs[0];
                }
                if (previosVersion.PlanarTMs[1] != PlanarTMs[1]) {
                    changed = true;
                    previosVersion.PlanarTMs[1] = PlanarTMs[1];
                }
            }



            if (previosVersion.MappintType != MappintType) {
                previosVersion.MappintType = MappintType;
                changed = true;
            }

            if (!Mathf.Approximately(previosVersion.Scale.x, Scale.x) || !Mathf.Approximately(previosVersion.Scale.y, Scale.y)) {
                previosVersion.Scale = Scale;
                changed = true;
            }

            if (!Mathf.Approximately(previosVersion.Offset.x, Offset.x) || !Mathf.Approximately(previosVersion.Offset.y, Offset.y)) {
                previosVersion.Offset = Offset;
                changed = true;
            }



        }
    }

    [System.Serializable]
    public class StatisticClass {
        public string Name;
        public int VerticesCount;
        public int TrianglesCount;

        public int ColliderVerticesCount;
        public int ColliderFacesCount;

        public DiagnosticHelper Apply;
        public DiagnosticHelper Topology;
        public DiagnosticHelper Size;
        public DiagnosticHelper TextureCoordinates;
        public DiagnosticHelper Tangents;
        public DiagnosticHelper Raycast;

        public bool DrawObjectGizmo;
        public bool DrawBounds;
        public float NormalsGizmoLength;
        public float TangentsGizmoLength;

        public StatisticClass(string name) {
            Name = name;
            Apply = new DiagnosticHelper("Apply");
            Topology = new DiagnosticHelper("Topology");
            Size = new DiagnosticHelper("Size");
            TextureCoordinates = new DiagnosticHelper("Texture coordinates");
            Tangents = new DiagnosticHelper("Tangents");
            Raycast = new DiagnosticHelper("Raycast");
        }

        public void CheckUpdated() {
            Topology.Updated = Topology.UpdatedAtFrame == Apply.UpdatedAtFrame;
            Size.Updated = Size.UpdatedAtFrame == Apply.UpdatedAtFrame;
            TextureCoordinates.Updated = TextureCoordinates.UpdatedAtFrame == Apply.UpdatedAtFrame;
            Tangents.Updated = Tangents.UpdatedAtFrame == Apply.UpdatedAtFrame;
        }
    }

    [System.Serializable]
    public class DiagnosticHelper {
        public string Name;
        public bool Updated;
        public float Average;
        public int UpdatedAtFrame = -1;
        System.Diagnostics.Stopwatch sw;


        public DiagnosticHelper(string name) {
            Name = name;
            sw = new System.Diagnostics.Stopwatch();
        }

        public void BeginSample() {
            sw.Reset();
            sw.Start();
        }


        public void EndSample() {
            sw.Stop();
            float ms = (sw.ElapsedTicks / 10000f);
            Average = ms;
            UpdatedAtFrame = Time.frameCount;
        }


    }

    public class UVGuidesGrid {
        float[] xGuides;
        float[] yGuides;
        int counterX;
        int counterY;


        public UVGuidesGrid(int lengthX, int lengthY) {
            xGuides = new float[lengthX];
            yGuides = new float[lengthY];
        }

        public Vector2 this[int x, int y] {
            get {
                return new Vector2(xGuides[x], yGuides[y]);
            }
        }

        public void Clear() {
            counterX = 0;
            counterY = 0;
        }

        public void AddX(float x) {
            if (counterX > 0) {
                xGuides[counterX] = xGuides[counterX - 1] + x;
            } else {
                xGuides[counterX] = x;
            }
            counterX++;
        }

        public void AddY(float y) {
            if (counterY > 0) {
                yGuides[counterY] = yGuides[counterY - 1] + y;
            } else {
                yGuides[counterY] = y;
            }
            counterY++;
        }

        public void Print() {
            for (int x = 0; x < xGuides.Length; x++) {
                Debug.LogFormat("x #{0}:{1}", x, xGuides[x]);
            }
        }
    }

    [System.Serializable]
    public class FloatValuesArray {
        [SerializeField]
        private int Capacity;
        [SerializeField]
        float[] items;

        [SerializeField]
        private int _count;
        public int Count {
            get {
                return _count;
            }

            set {
                _count = Mathf.Clamp(value, 3, Capacity);
            }
        }

        public float this[int idx] {
            get {
                return items[idx];
            }

            set {
                 items[idx] = value;
            }
        }

        public float this[int idx, bool repeated] {
            get {
                if (repeated) {
                    idx = (idx + Count) % Count;
                }
                return items[idx];
            }

            set {
                if (repeated) {
                    idx = (idx + Count) % Count;
                }
                items[idx] = value;
            }
        }

        public FloatValuesArray() {
            Capacity = 256;
            items = new float[Capacity];
        }

        public FloatValuesArray( float[] _items ) {
            Capacity = 256;
            items = new float[Capacity];
            Count = _items.Length;
            _items.CopyTo(items, 0);
        }

        public bool IsEquals(FloatValuesArray other) {
            if (Count != other.Count) {
                return false;
            }

            for (int i = 0; i<Count; i++) {
                if (items[i] != other.items[i]) {
                    return false;
                } 
            }
            return true;
        }

        public void SetData(float[] data) {
 
            float countStep = 1f / Count;

            for (int i = 0; i<Count; i++) {
                float t = i * countStep;
                items[i] = data.GetValue(t);
            }
        }
 

        public void CopyFrom(FloatValuesArray other) {
            Count = other.Count;
            other.items.CopyTo(items, 0);
        }
    }
}
