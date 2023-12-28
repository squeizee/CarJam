using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using ExtendedPrimitives_11.Internal;


namespace ExtendedPrimitives_11 {

    [HelpURL("http://polyflow.studio/products/extended-primitives/ep-guide/")]
    public abstract class ExtendedPrimitive : MonoBehaviour {
        [A_Statistic]
        public StatisticClass Statistic = new StatisticClass("Extended primitive");
 
        [Tooltip("Determines when parameters will be applyed. Select  None  if the primitive are controlled by other script. Call Apply() function after setting parameters.")]
        public UpdateModeEnum UpdateMode;

        internal TangentRecalculationModeEnum _tangentsMode = TangentRecalculationModeEnum.None;
        public TangentRecalculationModeEnum TangentsMode = TangentRecalculationModeEnum.None;

        [A_Collider]
        public ColliderClass Collider = new ColliderClass();

        internal List<Element> Elements = new List<Element>();
        internal List<Element> Top = new List<Element>();
        internal List<Element> Side = new List<Element>();
        internal List<Element> Bottom = new List<Element>();

        Mesh m;
        public Mesh SharedMesh {
            get {
                if (m == null) {
                    m = new Mesh();
                    m.MarkDynamic();
                    m.name = string.Format("ExtendedPrimitive id{0}", this.GetHashCode());
                }
                return m;
            }
        }

        MeshRenderer _meshRenderer;
        public MeshRenderer _MeshRenderer {
            get {
                if (_meshRenderer == null) {
                    _meshRenderer = GetComponent<MeshRenderer>();
                }
                return _meshRenderer;
            }
        }

        MeshFilter _meshFilter;
        public MeshFilter _MeshFilter {
            get {
                if (_meshFilter == null) {
                    _meshFilter = GetComponent<MeshFilter>();
                }
                return _meshFilter;
            }

        }

        public List<MeshEdge> MEdges = new List<MeshEdge>();
        public List<Face> Faces = new List<Face>();
 
        internal Vector3[] mvertices;
        internal Vector3[] mnormals;
        internal Color[] mcolors;
        internal Vector2[] muv;
        internal Vector2[] muv2;
        internal Vector4[] mtangents;
        internal int[] trisIndeces;
        internal Bounds bounds;
        internal int vertsCounter = 0;
 
        internal const float r90 = 1.5707963f;
        internal const float r180 = 3.1415926f;
        internal const float r270 = 4.7123889f;
        internal const float r360 = 6.2831852f;

        internal float BoundsInflateMultiplier = 1.01f;
        internal Color ObjectGizmoColor = new Color(0, 1, 1, 0.5f); 

        public ConstraintsClass Constraints = new ConstraintsClass();

        internal TextureChannelParams _UV0 = new TextureChannelParams(MappingMethodEnum.UnfoldA, UpdateTextureCoordsModeEnum.None);
        [A_TextureChannelParams] 
        public TextureChannelParams UV0 = new TextureChannelParams(MappingMethodEnum.UnfoldA, UpdateTextureCoordsModeEnum.None);

        internal TextureChannelParams _UV2 = new TextureChannelParams(MappingMethodEnum.UnfoldB, UpdateTextureCoordsModeEnum.None);
        [A_TextureChannelParams]
        public TextureChannelParams UV2 = new TextureChannelParams(MappingMethodEnum.UnfoldB, UpdateTextureCoordsModeEnum.None);

        [HideInInspector]
        public float[] UVInspectorParams = new float[3] { 1, 0, 0 };

        internal void ApplyTriangles() {
            trisIndeces = new int[ Faces.Count * 3 ];
            for ( int i = 0; i<Faces.Count; i++ ) {
                int it = i * 3;
                trisIndeces[it] = Faces[i].v0;
                trisIndeces[it+1] = Faces[i].v1;
                trisIndeces[it+2] = Faces[i].v2;
            }
            SharedMesh.triangles = trisIndeces;
        }

        internal void RecalculateTangentsBlended() {
 
            for (int f = 0; f < Faces.Count; f++) {
                Faces[f].UV0.SetUV(muv);
                Faces[f].UV2.SetUV(muv2);
                Faces[f].UV0.UpdateTangents(mvertices);
                Faces[f].UV2.UpdateTangents(mvertices);
            }

            for (int e = 0; e < Elements.Count; e++) {
                if (!Elements[e].Displayed) {
                    continue;
                }

                for (int v = 0; v < Elements[e].vertices.Length; v++) {
                    Vertex vert = Elements[e].vertices[v];

                    Vector3 tanUV0 = Vector3.zero;
                    Vector3 tanUV2 = Vector3.zero;
					for (int a = 0; a < vert.AdjacentFaces.Count; a++) {
                        tanUV0 += vert.AdjacentFaces[a].UV0.tangent * vert.AdjacentMult;
                        tanUV2 += vert.AdjacentFaces[a].UV2.tangent * vert.AdjacentMult;
                    }

                    Vector3 tan = Vector3.LerpUnclamped(tanUV0, tanUV2, vert.Col.a);
 
                    Vector3.OrthoNormalize(ref vert.Normal, ref tan);
                    vert.Tangent = new Vector4(tan.x, tan.y, tan.z, -1);
                    mtangents[vert.Global] = vert.Tangent;
                }
            }
            SharedMesh.tangents = mtangents;
        }

        internal void RecalculateTangentsUV0() {
            for (int f = 0; f < Faces.Count; f++) {
                Faces[f].UV0.SetUV(muv);
                Faces[f].UV0.UpdateTangents(mvertices);
            }
           

            Vector3 tanUV0 = Vector3.zero;
            for (int e = 0; e < Elements.Count; e++) {
                if (!Elements[e].Displayed) {
                    continue;
                }
                for (int v = 0; v < Elements[e].vertices.Length; v++) {
                    Vertex vert = Elements[e].vertices[v];
                    tanUV0.Set(0,0,0);

					for (int a = 0; a < vert.AdjacentFaces.Count; a++) {
                        tanUV0 += vert.AdjacentFaces[a].UV0.tangent * vert.AdjacentMult;
                    }

                    tanUV0 = Vector3.Cross( Vector3.Cross(vert.Normal, tanUV0), vert.Normal ) ;

                    vert.Tangent = new Vector4(tanUV0.x, tanUV0.y, tanUV0.z, -1);
                    mtangents[vert.Global] = vert.Tangent;
                }
            }
            SharedMesh.tangents = mtangents;
         }

        internal void RecalculateTangentsUV2() {
            for (int f = 0; f < Faces.Count; f++) {
                Faces[f].UV2.SetUV(muv2);
                Faces[f].UV2.UpdateTangents(mvertices);
            }
            
            for (int e = 0; e < Elements.Count; e++) {
                for (int v = 0; v < Elements[e].vertices.Length; v++) {
                    Vertex vert = Elements[e].vertices[v];


                    Vector3 tanUV2 = Vector3.zero;
                    for (int a = 0; a < vert.AdjacentFaces.Count; a++) {
                        tanUV2 += vert.AdjacentFaces[a].UV2.tangent * vert.AdjacentMult;

                    }

                    Vector3.OrthoNormalize(ref vert.Normal, ref tanUV2);
                    vert.Tangent = new Vector4(tanUV2.x, tanUV2.y, tanUV2.z, -1);
                    mtangents[vert.Global] = vert.Tangent;
                }
            }
            SharedMesh.tangents = mtangents;
        }

        internal void RecalculateTangentsBuiltin() {
            Statistic.Tangents.BeginSample();
            SharedMesh.RecalculateTangents();
            Statistic.Tangents.EndSample();
         }

        internal abstract void SetTopology();

        internal void SetTextureCoordinates(int channel) {
            TextureChannelParams p = channel == 0 ? UV0 : UV2;
            Vector2[] uvCoords = channel == 0 ? muv : muv2;
            if (p.MappintType == MappingMethodEnum.UnfoldA) {
                UnfoldA(uvCoords, channel, p.Offset, p.Scale);
            } else if (p.MappintType == MappingMethodEnum.UnfoldB) {
                UnfoldB(uvCoords, channel, p.Offset, p.Scale);
            } else if (p.MappintType == MappingMethodEnum.Planar) {
                PlanarMapping(uvCoords, p.PlanarTMs[0], p.PlanarTMs[1]);
            }

            if (channel == 0) {
                SharedMesh.uv = uvCoords;
            } else {
                SharedMesh.uv2 = uvCoords;
            }
        }

        internal abstract void UnfoldA(Vector2[] uvs, int cachedSizeChannelIdx, Vector2 offset, Vector2 scale);

        internal abstract void UnfoldB(Vector2[] uvs, int cachedSizeChannelIdx, Vector2 offset, Vector2 scale);

        internal abstract void UpdateConstraints();

        internal abstract void CacheSizeParams(int cacheIdx);

        internal abstract void SetSizeFromCache(int cacheIdx);

        internal abstract void SetSizeFromParams();

        internal abstract bool IsSizeParamsChanged { get; }

        internal abstract bool IsTopologyParamsChanged { get; } 

        internal void CheckMaterial() {
            if (GetComponent<MeshRenderer>().sharedMaterial == null) {
                GetComponent<MeshRenderer>().sharedMaterial = new Material(Shader.Find("Standard"));
                GetComponent<MeshRenderer>().sharedMaterial.SetColor("_Color", Color.gray);
            }
        }

        void OnEnable() {
            CheckMaterial();
        }

        void LateUpdate() {
            if (UpdateMode == UpdateModeEnum.LateUpdate) {
                Apply();
            }
        }

        void Update() {
            if (UpdateMode == UpdateModeEnum.Update) {
                Apply();
            }
        }

        public void Apply() {
            Statistic.Apply.BeginSample();
            bool tangentsTopologyChanged = false;

            if (TangentsMode != _tangentsMode) {
                tangentsTopologyChanged = true;
                _tangentsMode = TangentsMode;
            }

            bool tangentsUV0Changed = false;
            bool tangentsUV2Changed = false;

            bool uvTopoChanged = false;
            bool uv0Changed = false;
            bool uv2Changed = false;

            UV0.ChangeCheck(ref _UV0, transform, ref uvTopoChanged, ref uv0Changed);
            UV2.ChangeCheck(ref _UV2, transform, ref uvTopoChanged, ref uv2Changed);

            bool colliderTopoChanged = Collider.Detalization != Collider._detalization;
            bool sizeParamsChangedAfterRetopo = false;

            if ( IsTopologyParamsChanged || uvTopoChanged || tangentsTopologyChanged || colliderTopoChanged) {

                Statistic.Topology.BeginSample();
                SetTopology();
                Collider._detalization = Collider.Detalization;
                SetVertexColors();
                Statistic.Topology.EndSample();

                bool uvChannel0Modyfied = false;
                bool uvChannel1Modyfied = false;
                if (UV0.UpdateMode == UpdateTextureCoordsModeEnum.Fixed) {
                    SetSizeFromCache(0);
                    uvChannel0Modyfied = true;
                }
                if (UV2.UpdateMode == UpdateTextureCoordsModeEnum.Fixed) {
                    SetSizeFromCache(1);
                    uvChannel1Modyfied = true;
                }

                if (uvChannel0Modyfied || uvChannel1Modyfied) {
                    Statistic.TextureCoordinates.BeginSample();
                    if (uvChannel0Modyfied) {
                        SetTextureCoordinates(0);
                    }

                    if (uvChannel1Modyfied) {
                        SetTextureCoordinates(1);
                    }
                    Statistic.TextureCoordinates.EndSample();
                }

                sizeParamsChangedAfterRetopo = true;
                uv0Changed = true;
                uv2Changed = true;
                tangentsUV0Changed = true;
                tangentsUV2Changed = true;
            }

            if ( IsSizeParamsChanged || sizeParamsChangedAfterRetopo) {
                Statistic.Size.BeginSample();
                SetSizeFromParams();
                Statistic.Size.EndSample();

                uv0Changed = true;
                uv2Changed = true;
                tangentsUV0Changed = tangentsUV0Changed || TangentsMode.AffectUV0();
                tangentsUV2Changed = tangentsUV2Changed || TangentsMode.AffectUV2();
            }

            Statistic.TextureCoordinates.BeginSample();
            bool uvsUpdated = false;
            if (UV0.UpdateMode == UpdateTextureCoordsModeEnum.LiveUpdate && uv0Changed) {
                CacheSizeParams(0);
                SetTextureCoordinates(0);
                tangentsUV0Changed = tangentsUV0Changed || TangentsMode.AffectUV0();
                uvsUpdated = true;
            }

            if (UV2.UpdateMode == UpdateTextureCoordsModeEnum.LiveUpdate && uv2Changed) {
                CacheSizeParams(1);
                SetTextureCoordinates(1);
                tangentsUV2Changed = tangentsUV2Changed || TangentsMode.AffectUV2();
                uvsUpdated = true;
            }
            if (uvsUpdated) {
                Statistic.TextureCoordinates.EndSample();
            }

            Statistic.Tangents.BeginSample();
            bool tangentsUpdated = true;
            if (UV0.UpdateMode.NotNone() && UV2.UpdateMode.NotNone() && TangentsMode.IsBlend() && (tangentsUV0Changed || tangentsUV2Changed)) {
                RecalculateTangentsBlended();
            } else if (UV0.UpdateMode.NotNone() && TangentsMode.IsBuiltin() && tangentsUV0Changed) {
                RecalculateTangentsBuiltin();
            } else if (UV0.UpdateMode.NotNone() && TangentsMode.IsUV0() && tangentsUV0Changed) {
                RecalculateTangentsUV0();
            } else if (UV2.UpdateMode.NotNone() && TangentsMode.IsUV2() && tangentsUV2Changed) {
                RecalculateTangentsUV2();
            } else {
                tangentsUpdated = false;
            }
            if (tangentsUpdated) {
                Statistic.Tangents.EndSample();
            }

            UpdateConstraints();
            int tf = Time.frameCount;
            if (tf == Statistic.Topology.UpdatedAtFrame || tf == Statistic.Size.UpdatedAtFrame || tf == Statistic.TextureCoordinates.UpdatedAtFrame || tf == Statistic.TextureCoordinates.UpdatedAtFrame) {
                Statistic.Apply.EndSample();
            }

            Statistic.CheckUpdated();
        }

        internal virtual bool FlipNormals {
            get {
                return false;
            }
        }

        public virtual float PivotOffset {
            get;
            set;
        }

        public virtual float Height {
            get;
            set;
        }

        public virtual float FilletRadius {
            get;
            set;
        }

        internal void SetVertexColors() {
            if (mvertices == null) {
                return;
            }
            mcolors = new Color[mvertices.Length];
            for (int e = 0; e < Elements.Count; e++) {
                if (Elements[e].Displayed) {
                    for (int i = 0; i < Elements[e].vertices.Length; i++) {
                        mcolors[Elements[e].vertices[i]] = Elements[e].vertices[i].Col;
                    }
                }
            }
            SharedMesh.colors = mcolors;
        }

        internal void PlanarMapping(Vector2[] uvs, Matrix4x4 topTM, Matrix4x4 bottomTM) {
            for (int e = 0; e<Top.Count; e++) {
                Element element = Top[e];
                if (element.Displayed) {
                    for (int v = 0; v < element.vertices.Length; v++) {
                        Vertex vert = element.vertices[v];
                        uvs[vert] = vert.UV = topTM.MultiplyPoint3x4(vert.Pos);
                    }
                }
            }

            for (int e = 0; e < Side.Count; e++) {
                Element element = Side[e];
                if (element.Displayed) {
                    for (int v = 0; v < element.vertices.Length; v++) {
                        Vertex vert = element.vertices[v];
                        uvs[vert] = vert.UV = topTM.MultiplyPoint3x4(vert.Pos);
                    }
                }
            }

            for (int e = 0; e < Bottom.Count; e++) {
                Element element = Bottom[e];
                if (element.Displayed) {
                    for (int v = 0; v < element.vertices.Length; v++) {
                        Vertex vert = element.vertices[v];
                        uvs[vert] = vert.UV = bottomTM.MultiplyPoint3x4(vert.Pos);
                    }
                }
            }

 
        }
 
 
        private void OnDrawGizmos() {
            Gizmos.matrix = transform.localToWorldMatrix;
            if (Collider.DrawGizmo) {
                Collider.DoDrawGizmo(this);
            }

            if (Statistic.DrawBounds) {
                DrawBoundsGizmo(transform.localToWorldMatrix, bounds, Color.yellow);
            }

            if (Statistic.NormalsGizmoLength > 0.001f) {
                DrawNormalsGizmo();
            }

            if (Statistic.TangentsGizmoLength > 0.001f) {
                DrawTangentsGizmo();
            }

            OnDrawGizmosInherited();
        }

        void DrawBoundsGizmo(Matrix4x4 objectTM, Bounds b, Color c) {
            Gizmos.matrix = objectTM;
            Gizmos.color = c;
            Vector3 t0 =  new Vector3(-b.extents.x, -b.extents.y, b.extents.z) + b.center ;
            Vector3 b0 =   new Vector3(-b.extents.x, b.extents.y, b.extents.z) + b.center ;
            Vector3 t1 =  new Vector3(-b.extents.x, -b.extents.y, -b.extents.z) + b.center ;
            Vector3 b1 =  new Vector3(-b.extents.x, b.extents.y, -b.extents.z) + b.center ;
            Vector3 t2 =  new Vector3(b.extents.x, -b.extents.y, -b.extents.z) + b.center ;
            Vector3 b2 =  new Vector3(b.extents.x, b.extents.y, -b.extents.z) + b.center ;
            Vector3 t3 =  new Vector3(b.extents.x, -b.extents.y, b.extents.z) + b.center ;
            Vector3 b3 =  new Vector3(b.extents.x, b.extents.y, b.extents.z) + b.center ;

            Gizmos.DrawLine(t0, b0 );
            Gizmos.DrawLine(t1, b1);
            Gizmos.DrawLine(t2, b2);
            Gizmos.DrawLine(t3, b3);

            Gizmos.DrawLine(t0, t1);
            Gizmos.DrawLine(t1, t2);
            Gizmos.DrawLine(t2, t3);
            Gizmos.DrawLine(t3, t0);

            Gizmos.DrawLine(b0, b1);
            Gizmos.DrawLine(b1, b2);
            Gizmos.DrawLine(b2, b3);
            Gizmos.DrawLine(b3, b0);
        }

        void DrawNormalsGizmo() {
            Gizmos.matrix = transform.localToWorldMatrix;
            Gizmos.color = Color.blue;
            float l = Statistic.NormalsGizmoLength;
            for (int i = 0; i<mnormals.Length; i++) {
                Gizmos.DrawLine(mvertices[i], mvertices[i] + mnormals[i] * l);
            }
        }

        void DrawTangentsGizmo() {
            Gizmos.matrix = transform.localToWorldMatrix;
            Gizmos.color = Color.red;
            float l = Statistic.TangentsGizmoLength;
            if (TangentsMode == TangentRecalculationModeEnum.BuiltinForUV0) {
                mtangents = SharedMesh.tangents;
            }
            for (int i = 0; i < mtangents.Length; i++) {
                Gizmos.DrawLine(mvertices[i], mvertices[i] + ((Vector3)mtangents[i]).normalized * l);
            }
        }

        internal virtual void OnDrawGizmosInherited() { }
    }
}
