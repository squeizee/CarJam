using System.Collections;
using System.Collections.Generic;
using ExtendedPrimitives_11.Internal;
using UnityEngine;

namespace ExtendedPrimitives_11 {
    [RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
    [ExecuteInEditMode]
    [DefaultExecutionOrder(100)]
    public class FilletCone : ExtendedPrimitive {

        [System.Serializable]
        public struct SizeParams {
            [Tooltip("Vertical offset about pivot point")]
            [Range(-0.5f, 0.5f)]
            public float PivotOffset;

            [A_Size("Top radius")]
            public float TopRadius;

            [A_Size("Top radius")]
            public float BottomRadius;

            [A_Size("Y dimension")]
            public float Height;

            [A_Size("Radius of edges fillet", 0.2f)]
            public float TopFilletRadius;

            [A_Size("Radius of edges fillet", 0.2f)]
            public float BottomFilletRadius;

            [HideInInspector]
            public float[] notAnimatableData;

            //0
            public float ClampedTopFilletWidth {
                get {
                    return notAnimatableData[0];
                }

                set {
                    notAnimatableData[0] = value;
                }
            }
            
            //1
            public float ClampedBottomRadius {
                get {
                    return notAnimatableData[1];
                }

                set {
                    notAnimatableData[1] = value;
                }
            }

            //2
            public float ClampedBottomFilledWidth {
                get {
                    return notAnimatableData[2];
                }

                set {
                    notAnimatableData[2] = value;
                }
            }
 
            //3
            public float yt {
                get {
                    return notAnimatableData[3];
                }

                set {
                    if (notAnimatableData.Length != 6) {
                        Debug.LogFormat("notAnimatableData.Length:{0}", notAnimatableData.Length);
                    }
                    notAnimatableData[3] = value;
                }

            }
 
            //4
            public float yb {
                get {
                    return notAnimatableData[4];
                }

                set {
                    notAnimatableData[4] = value;
                }
            }

            //5
            public float ClampedTopRadius {
                get {
                    return notAnimatableData[5];
                }

                set {
                    notAnimatableData[5] = value;
                }
            }

            public SizeParams(float topRadius, float bottomRadius, float height, float filletRadius) {
                PivotOffset = 0;
                TopRadius = topRadius;
                BottomRadius = bottomRadius;
                Height = height;
                TopFilletRadius = filletRadius;
                BottomFilletRadius = filletRadius;
                notAnimatableData = new float[6];
 
            }

            public bool IsEquals(SizeParams other) {
                return (PivotOffset == other.PivotOffset)   && (Height == other.Height) && (TopRadius == other.TopRadius) && (BottomRadius == other.BottomRadius) && (BottomFilletRadius == other.BottomFilletRadius) && (TopFilletRadius == other.TopFilletRadius);
            }
        }

        [System.Serializable]
        public struct TopologyParams {

            public bool Top;
            public bool Side;
            public bool Bottom;

            [Range(8, 96)]
            public int Segments;

            [Range(1, 16)]
            public int TopFilletSegments;

            [Range(1, 16)]
            public int BottomFilletSegments;

            public bool FlipNormals;

            public TopologyParams(int segments) {
                Segments = segments;
                TopFilletSegments = 8;
                BottomFilletSegments = 8;
                FlipNormals = false;
                Top = true;
                Side = true;
                Bottom = true;
            }

            public bool IsEquals(TopologyParams other) {
                return  Top == other.Top && Bottom == other.Bottom && Side == other.Side && Segments == other.Segments && TopFilletSegments == other.TopFilletSegments && BottomFilletSegments == other.BottomFilletSegments && FlipNormals == other.FlipNormals;
            }
        }

        [System.Serializable]
        public struct CachedTextureMappingParam {
            public SizeParams Size  ;
            public TextureChannelParams ChannelParams;

            public CachedTextureMappingParam( int i) {
                Size = new SizeParams(0.5f, 1f, 1f, 0.1f);
                ChannelParams = new TextureChannelParams(MappingMethodEnum.UnfoldA, UpdateTextureCoordsModeEnum.Fixed);
            }
        }

        private SizeParams size;
        public SizeParams Size = new SizeParams(0.5f, 1f, 1f, 0.1f);

        private TopologyParams topology;
        public TopologyParams Topology = new TopologyParams(32);

        public CachedTextureMappingParam[] CachedSizeParams = new CachedTextureMappingParam[2] { new CachedTextureMappingParam(0), new CachedTextureMappingParam(1) };

        RadialFillet topRF;
        RadialFillet bottomRF;
        VerticalEdge verticalSide;
        Cap capTop;
        Cap capBottom;

        internal override bool IsTopologyParamsChanged {
            get {
                return !Topology.IsEquals(topology) || topRF == null ;
            }
        }

        internal override bool IsSizeParamsChanged {
            get {
                return !Size.IsEquals(size);
            }
        }

        internal override void CacheSizeParams(int cacheIdx) {
            CachedSizeParams[cacheIdx].Size = Size;
        }

        internal override void SetSizeFromCache(int channelIdx) {
            SetSize( ref CachedSizeParams[channelIdx].Size );
        }

        internal override void SetSizeFromParams() {
            SetSize(ref Size);
            size = Size;
        }

        internal override void SetTopology() {
            Statistic.Topology.BeginSample();
            Faces.Clear();
            MEdges.Clear();

            Topology.Segments = Mathf.Clamp(Topology.Segments, 1, 96);
            Topology.BottomFilletSegments = Mathf.Clamp(Topology.BottomFilletSegments, 1, 16);
            Topology.TopFilletSegments = Mathf.Clamp(Topology.TopFilletSegments, 1, 16);

            Top.Clear();
            Side.Clear();
            Bottom.Clear();

            vertsCounter = 0;
 
            topRF = new RadialFillet(Topology.Top,  this, Top, false, Topology.TopFilletSegments, Topology.Segments, false);
            capTop = new Cap(Topology.Top, this, Top, false, Topology.Segments);
            verticalSide = new VerticalEdge(Topology.Side, this, Side, false, Topology.Segments);
            bottomRF = new RadialFillet( Topology.Bottom, this, Bottom, false, Topology.BottomFilletSegments, Topology.Segments, true);
            capBottom = new Cap( Topology.Bottom, this, Bottom, true, Topology.Segments);
 
            Collider.ClearTopology(this);

            ColliderElement c_topRF = null;
            ColliderElement c_bottomRF = null;

            if (Topology.Top) {
                c_topRF = new ColliderElement(this, false, topRF, null, null, null, null, true);
                ColliderVertex c_topCapCenter = new ColliderVertex(capTop.vertices[0], Collider.Vertices);
                ColliderElement.ConnectIrregular(this, true, c_topRF.Top, c_topCapCenter);
            }

            if (Topology.Bottom) {
                c_bottomRF = new ColliderElement(this, false, bottomRF, null, null, null, null, true);
                ColliderVertex c_bottomCapCenter = new ColliderVertex(capBottom.vertices[0], Collider.Vertices);
                ColliderElement.ConnectIrregular(this, false, c_bottomRF.Bottom, c_bottomCapCenter);
            }

            if (Topology.Side) {
                new ColliderElement(this, false, verticalSide, null, null, c_topRF? c_topRF.Bottom:null, c_bottomRF ? c_bottomRF.Top : null, true);
            }

            Statistic.ColliderFacesCount = Collider.Faces.Count;
            Statistic.ColliderVerticesCount = Collider.Vertices.Count;
            Collider.ConvertToArrays();

            SharedMesh.Clear();
            SharedMesh.uv = null;
            SharedMesh.uv2 = null;

            Elements.Clear();
            Elements.AddRange(Top);
            Elements.AddRange(Side);
            Elements.AddRange(Bottom);

            mvertices = new Vector3[vertsCounter];
            mnormals = new Vector3[vertsCounter];
            mtangents = new Vector4[vertsCounter];

            muv = UV0.UpdateMode == UpdateTextureCoordsModeEnum.None ? null : new Vector2[vertsCounter];
            muv2 = UV2.UpdateMode == UpdateTextureCoordsModeEnum.None ? null : new Vector2[vertsCounter];

            SharedMesh.vertices = mvertices;
            SharedMesh.normals = mnormals;
            ApplyTriangles();

            _MeshFilter.sharedMesh = SharedMesh;

            Statistic.VerticesCount = SharedMesh.vertexCount;
            Statistic.TrianglesCount = SharedMesh.triangles.Length / 3;
            topology = Topology;
            Statistic.Topology.EndSample();
        }

        void SetSize(ref SizeParams _size) {
         
            Statistic.Size.BeginSample();

            _size.yt = _size.Height / 2 + _size.PivotOffset * _size.Height;
            _size.yb = -_size.Height / 2 + _size.PivotOffset * _size.Height;

            Vector2 p0 = new Vector2(0, _size.yt);
            Vector2 p1 = new Vector2(_size.TopRadius, _size.yt);
            Vector2 p2 = new Vector2(_size.BottomRadius, _size.yb);
            Vector2 p3 = new Vector2(0, _size.yb);

            float calmpedTopFillet = Mathf.Min(_size.TopFilletRadius, _size.Height/2 );
            float calmpedBottomFillet = Mathf.Min(_size.BottomFilletRadius, _size.Height/2);

            topRF.SetPositionAndSize(p2, p1, p0, Size.TopRadius, calmpedTopFillet );
            capTop.SetPositionAndSize(topRF.Top);

            bottomRF.SetPositionAndSize(p3, p2, p1, Size.BottomRadius, calmpedBottomFillet);
            capBottom.SetPositionAndSize(bottomRF.Bottom);

            verticalSide.SetTopBottomSize(topRF.Bottom, bottomRF.Top);

            _size.ClampedTopRadius = topRF.Top[0].Pos.x;
            _size.ClampedBottomRadius = bottomRF.Bottom[0].Pos.x;
            _size.ClampedTopFilletWidth = topRF.uvFilletWidth;
            _size.ClampedBottomFilledWidth = bottomRF.uvFilletWidth;

            SharedMesh.vertices = mvertices;
            SharedMesh.normals = mnormals;

            bounds = new Bounds();
            float maxRadius = Mathf.Max(_size.TopRadius, _size.BottomRadius) * BoundsInflateMultiplier;
            bounds.Encapsulate(new Vector3(maxRadius, _size.yt * BoundsInflateMultiplier, maxRadius));
            bounds.Encapsulate(new Vector3(-maxRadius, _size.yb * BoundsInflateMultiplier, -maxRadius));
            SharedMesh.bounds = bounds;

            Statistic.Size.EndSample();
        }

        internal override void UnfoldA(Vector2[] uvs, int cachedSizeChannelIdx, Vector2 offset, Vector2 scale) {
            SizeParams _size = CachedSizeParams[cachedSizeChannelIdx].Size;
  
            capTop.SetUVPositionAndSize( uvs );
            topRF.SetUVPositionAndSize( uvs, _size.ClampedTopRadius, _size.ClampedTopFilletWidth );
            float xBottomCapOffset =   _size.ClampedTopRadius + size.ClampedTopFilletWidth   + _size.ClampedBottomRadius + _size.ClampedBottomFilledWidth + 0.1f;

            capBottom.SetUVPositionAndSize(uvs, new Vector2(xBottomCapOffset, 0));
            bottomRF.SetUVPositionAndSize(uvs, new Vector2(xBottomCapOffset, 0), _size.ClampedBottomRadius + _size.ClampedBottomFilledWidth, -_size.ClampedBottomFilledWidth, new Vector2( 1, -1));

            float yOffset = Mathf.Max(_size.ClampedTopRadius + size.ClampedTopFilletWidth, _size.ClampedBottomRadius + _size.ClampedBottomFilledWidth) + 0.1f;

            float veHeight = Vector2.Distance(verticalSide.Corners[0].Pos, verticalSide.Corners[1].Pos );
            float vePerimiter =   Mathf.LerpUnclamped(verticalSide.Corners[0].Pos.x, verticalSide.Corners[1].Pos.x, 0.5f) * r360;
 
            verticalSide.SetUVRect(false, uvs, new Vector2(0, yOffset), new Vector2(vePerimiter, veHeight));

            if (scale != Vector2.one) {
                for (int i = 0; i < uvs.Length; i++) {
                    uvs[i] = Vector2.Scale(scale, uvs[i]);
                }
            }

            if (offset != Vector2.zero) {
                for (int i = 0; i < uvs.Length; i++) {
                    uvs[i] += offset;
                }
            }
        }

        internal override void UnfoldB(Vector2[] uvs, int cachedSizeChannelIdx, Vector2 offset, Vector2 scale) {
            SizeParams _size = CachedSizeParams[cachedSizeChannelIdx].Size;
            capTop.SetUVPositionAndSize(uvs);
            float xBottomCapOffset = _size.ClampedTopRadius   + _size.ClampedBottomRadius +   0.1f;
            capBottom.SetUVPositionAndSize(uvs, new Vector2(xBottomCapOffset, 0));
            float yOffset = Mathf.Max(_size.ClampedTopRadius , _size.ClampedBottomRadius  ) + 0.1f;

            float veHeight = Vector2.Distance(verticalSide.Corners[0].Pos, verticalSide.Corners[1].Pos);
            float vePerimiter = Mathf.LerpUnclamped(verticalSide.Corners[0].Pos.x, verticalSide.Corners[1].Pos.x, 0.5f) * r360;
            bottomRF.SetUVRect(false, uvs, new Vector2(0, yOffset), new Vector2(vePerimiter, _size.ClampedBottomFilledWidth));
            verticalSide.SetUVRect(false, uvs, new Vector2(0, yOffset+ _size.ClampedBottomFilledWidth), new Vector2(vePerimiter, veHeight));
            topRF.SetUVRect(false, uvs, new Vector2(0, yOffset + _size.ClampedBottomFilledWidth + veHeight), new Vector2(vePerimiter, _size.ClampedTopFilletWidth));

            if (scale != Vector2.one) {
                for (int i = 0; i < uvs.Length; i++) {
                    uvs[i] = Vector2.Scale(scale, uvs[i]);
                }
            }

            if (offset != Vector2.zero) {
                for (int i = 0; i < uvs.Length; i++) {
                    uvs[i] += offset;
                }
            }
        }

        internal override void UpdateConstraints() {
            if (Constraints.Top != null) {
                float yt = Size.Height / 2 + Size.PivotOffset * Size.Height;
                Matrix4x4 ltw = transform.localToWorldMatrix;
                Vector3 pos = new Vector3(0, yt, 0);
                Constraints.Top.position = ltw.MultiplyPoint3x4(pos);
                Constraints.Top.localRotation = transform.rotation;
            }
            if (Constraints.Bottom != null) {
                float yb = -Size.Height / 2 + Size.PivotOffset * Size.Height;
                Matrix4x4 ltw = transform.localToWorldMatrix;
                Vector3 pos = new Vector3(0, yb, 0);
                Constraints.Bottom.position = ltw.MultiplyPoint3x4(pos);
                Constraints.Bottom.localRotation = transform.rotation;
            }
            if (Constraints.Side != null) {
                Matrix4x4 ltw = transform.localToWorldMatrix;
                float yt = Size.Height / 2 + Size.PivotOffset * Size.Height;
                float yb = -Size.Height / 2 + Size.PivotOffset * Size.Height;
                Vector3 top = new Vector3(Size.TopRadius, yt, 0);
                Vector3 bottom = new Vector3(Size.BottomRadius, yb, 0);
                Vector3 pos = Vector3.LerpUnclamped( bottom, top,  0.5f );
                Quaternion rot = Quaternion.LookRotation(top - bottom);
                Constraints.Side.position = ltw.MultiplyPoint3x4(pos);
                Constraints.Side.localRotation = transform.rotation * rot;
            }
        }

        internal override bool FlipNormals {
            get {
                return Topology.FlipNormals;
            }
        }

        public override float PivotOffset {
            get {
                return Size.PivotOffset;
            }

            set {
                Size.PivotOffset = value;
            }
        }

        public override float Height {
            get {
                return Size.Height;
            }

            set {
                Size.Height = value;
            }
        }

        public override float FilletRadius {
            get {
                return Size.TopFilletRadius;
            }

            set {
                Size.TopFilletRadius = value;
                Size.BottomFilletRadius = value;
            }
        }

        internal override void OnDrawGizmosInherited() {
            if (Statistic.DrawObjectGizmo) {
                Gizmos.matrix = transform.localToWorldMatrix;
                Gizmos.color = ObjectGizmoColor;

                for (int s = 0; s<Topology.Segments; s++) {
                    float a = r360 / Topology.Segments * s;
                    Vector3 d = new Vector3(Mathf.Cos(a), 0, Mathf.Sin(a) );
                    Vector3 top = new Vector3(d.x * Size.TopRadius, Size.yt, d.z * Size.TopRadius);
                    Vector3 bottom = new Vector3(d.x * Size.BottomRadius, Size.yb, d.z * Size.BottomRadius);

                    a = r360 / Topology.Segments * (s+1);
                    d = new Vector3(Mathf.Cos(a), 0, Mathf.Sin(a));
                    Vector3 ntop = new Vector3(d.x * Size.TopRadius, Size.yt, d.z * Size.TopRadius);
                    Vector3 nbottom = new Vector3(d.x * Size.BottomRadius, Size.yb, d.z * Size.BottomRadius);

                    Gizmos.DrawLine(top, ntop);
                    Gizmos.DrawLine(bottom, nbottom);
                    Gizmos.DrawLine(top, bottom);
                }
            }
        }


        public static FilletCone Create() {
            GameObject go = new GameObject("New Fillet Cone");
            FilletCone result = go.AddComponent<FilletCone>();
            result.Apply();
            return result;
        }
    }
}
