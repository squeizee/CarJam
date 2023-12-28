using System.Collections;
using System.Collections.Generic;
using ExtendedPrimitives_11.Internal;
using UnityEngine;

namespace ExtendedPrimitives_11 {
    [RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
    [ExecuteInEditMode]
    [DefaultExecutionOrder(100)]
    public partial class FilletNGon : ExtendedPrimitive {

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
            public float FilletRadius;

            [A_Size("Radius of edges fillet", 0.2f)]
            public float TopFilletRadius;

            [A_Size("Radius of edges fillet")]
            public float BottomFilletRadius;

            [HideInInspector]
            public float[] notAnimatableData;

            public Fillet HorizontalTop;
            public Fillet HorizontalBottom;

            public Fillet VerticalTop;
            public Fillet VerticalBottom;

            //0,1,2
            public Vector3 CornerPivotTop {
                get {
                    return new Vector3(notAnimatableData[0], notAnimatableData[1], notAnimatableData[2]);
                }

                set {
                    notAnimatableData[0] = value.x;
                    notAnimatableData[1] = value.y;
                    notAnimatableData[2] = value.z;
                }
            }

            //3,4,5
            public Vector3 CornerPivotBottom {
                get {
                    return new Vector3(notAnimatableData[3], notAnimatableData[4], notAnimatableData[5]);
                }

                set {
                    notAnimatableData[3] = value.x;
                    notAnimatableData[4] = value.y;
                    notAnimatableData[5] = value.z;
                }
            }

            //6
            public float yt {
                get {
                    return notAnimatableData[6];
                }

                set {
                    notAnimatableData[6] = value;
                }
            }
             
            //7
            public float yb {
                get {
                    return notAnimatableData[7];
                }

                set {
                    notAnimatableData[7] = value;
                }
            }


            public SizeParams(float topRadius, float bottomRadius, float height, float filletRadius) {
                PivotOffset = 0;
                TopRadius = topRadius;
                BottomRadius = bottomRadius;
                Height = height;
                FilletRadius = filletRadius;
                TopFilletRadius = filletRadius/2;
                BottomFilletRadius = filletRadius/2;
                HorizontalTop = new Fillet(1);
                HorizontalBottom = new Fillet(1);
                VerticalTop = new Fillet(2);
                VerticalBottom = new Fillet(2);
                notAnimatableData = new float[8];
            }

            public bool IsEquals(SizeParams other) {
                return (PivotOffset == other.PivotOffset)   && (Height == other.Height) && (TopRadius == other.TopRadius) && (BottomRadius == other.BottomRadius) && (FilletRadius == other.FilletRadius) && (BottomFilletRadius == other.BottomFilletRadius) && (TopFilletRadius == other.TopFilletRadius);
            }
        }

        [System.Serializable]
        public struct TopologyParams {

            public bool Top;
            public bool Side;
            public bool Bottom;
 
            [Range(3,12)]
            public int Sides;

 

            [Range(1, 16)]
            public int FilletSegments;

            [Range(1, 16)]
            public int TopFilletSegments;

            [Range(1, 16)]
            public int BottomFilletSegments;

            public bool FlipNormals;

            public TopologyParams(int segments) {
                Sides = 5;
                FilletSegments = 8;
                TopFilletSegments = 8;
                BottomFilletSegments = 8;
                FlipNormals = false;
                Top = true;
                Side = true;
                Bottom = true;
            }

            public bool IsEquals(TopologyParams other) {
                return  Top == other.Top && Bottom == other.Bottom && Side == other.Side && Sides == other.Sides  && FilletSegments == other.FilletSegments && TopFilletSegments == other.TopFilletSegments && BottomFilletSegments == other.BottomFilletSegments && FlipNormals == other.FlipNormals;
            }
        }

        [System.Serializable]
        public struct CachedTextureMappingParam {
            public SizeParams Size;
            public TextureChannelParams ChannelParams;

            public CachedTextureMappingParam(int i) {
                Size = new SizeParams(1, 1, 1, 1);
                ChannelParams = new TextureChannelParams(MappingMethodEnum.Planar, UpdateTextureCoordsModeEnum.LiveUpdate);
            }
        }

        private SizeParams size;
        public SizeParams Size = new SizeParams(0.5f, 1f, 1f, 0.1f);

        private TopologyParams topology;
        public TopologyParams Topology = new TopologyParams(32);

        [HideInInspector]
        public CachedTextureMappingParam[] CachedSizeParams = new CachedTextureMappingParam[2] { new CachedTextureMappingParam(0), new CachedTextureMappingParam(1)};

        NGonCap TopCap;
        NGonCap BottomCap;
        NGonCorner[] cornersTop;
        NGonCorner[] cornersTopReversed;


        NGonCorner[] cornersBottom;
        NGonCorner[] cornersBottomReversed;
        VerticalEdge[] ves;
        HorizontalEdge[] hesTop;
        HorizontalEdge[] hesBottom;
        Quad[] quads;


        internal override bool IsTopologyParamsChanged {
            get {
                return !Topology.IsEquals(topology) || cornersTop == null || cornersTop.Length != Topology.Sides;
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

            Topology.Sides = Mathf.Clamp(Topology.Sides, 3, 12);
            Topology.BottomFilletSegments = Mathf.Clamp(Topology.BottomFilletSegments, 1, 16);
            Topology.TopFilletSegments = Mathf.Clamp(Topology.TopFilletSegments, 1, 16);

            Top.Clear();
            Side.Clear();
            Bottom.Clear();

            vertsCounter = 0;
            cornersTop = new NGonCorner[Topology.Sides];
            cornersTopReversed = new NGonCorner[Topology.Sides];
            cornersBottom = new NGonCorner[Topology.Sides];
            cornersBottomReversed = new NGonCorner[Topology.Sides];

            ves = new VerticalEdge[Topology.Sides];
            hesTop = new HorizontalEdge[Topology.Sides];
            hesBottom = new HorizontalEdge[Topology.Sides];
            quads = new Quad[Topology.Sides];
            
            for (int i = 0; i < Topology.Sides; i++) {
                int reversedI = Topology.Sides - 1 - i;
                cornersTop[i] = new NGonCorner(Topology.Top, this, Top, false, Topology.FilletSegments, Topology.TopFilletSegments, false);
                cornersBottom[i] = new NGonCorner(Topology.Bottom, this, Bottom, false, Topology.FilletSegments, Topology.BottomFilletSegments, true);
                cornersTopReversed[reversedI] = cornersTop[i];
                cornersBottomReversed[reversedI] = cornersBottom[i];
                hesTop[i] = new HorizontalEdge(Topology.Top, this, Top, false, Topology.TopFilletSegments, false);
                hesBottom[i] = new HorizontalEdge(Topology.Bottom, this, Bottom, false, Topology.BottomFilletSegments, true);
                ves[i] = new VerticalEdge(Topology.Side, this, Side, false, Topology.FilletSegments);
                quads[i] = new Quad(Topology.Side, this, Side, false, 0);
            }
 

            TopCap = new NGonCap(Topology.Top, this, Top, false, Topology.FilletSegments, Topology.Sides);
            BottomCap = new NGonCap(Topology.Bottom, this, Bottom, true, Topology.FilletSegments, Topology.Sides);
            Collider.ClearTopology(this);

            ColliderElement[] c_topCorners = null;
            ColliderElement[] c_bottomCorners = null;
            ColliderElement[] c_edges = null;

            if (Topology.Top) {
                c_topCorners = new ColliderElement[Topology.Sides];
                for (int i = 0; i < Topology.Sides; i++) {
                    c_topCorners[i] = new ColliderElement(this, false, cornersTop[i], null, null, null, null, true);
                }
                List<ColliderVertex> outlineVertices =  new List<ColliderVertex>();
                for (int i = Topology.Sides-1; i > 0; i--) {
                    outlineVertices.AddRange(c_topCorners[i].TopReversed);
                }
 
                ColliderElement.ConnectIrregular(this, false, outlineVertices.ToArray(), c_topCorners[0].Top, true);

                for (int i = 0; i < Topology.Sides; i++) {
                    int nextI = (i+1) % Topology.Sides;
                    ColliderElement.ConnectUniform(this, false,  c_topCorners[nextI].Left, c_topCorners[i].Right,  true, true);
                }
            }

            if (Topology.Bottom) {
                c_bottomCorners = new ColliderElement[Topology.Sides];

                for (int i = 0; i < Topology.Sides; i++) {
                    c_bottomCorners[i] = new ColliderElement(this, false, cornersBottom[i], null, null, null, null, true);
                }

                List<ColliderVertex> outlineVertices = new List<ColliderVertex>();
                for (int i = Topology.Sides - 1; i > 0; i--) {
                    outlineVertices.AddRange(c_bottomCorners[i].BottomReversed);
                }

                ColliderElement.ConnectIrregular(this, true, outlineVertices.ToArray(), c_bottomCorners[0].Bottom, true);

                for (int i = 0; i < Topology.Sides; i++) {
                    int nextI = (i + 1) % Topology.Sides;
                    ColliderElement.ConnectUniform(this, true, c_bottomCorners[i].Right, c_bottomCorners[nextI].Left, true, true);
                }
            }

            if (Topology.Side) {
                c_edges = new ColliderElement[Topology.Sides];

                for (int i = 0; i < Topology.Sides; i++) {
                    c_edges[i] = new ColliderElement(this, false, ves[i], null, null,  (c_topCorners != null ? c_topCorners[i].Bottom : null), (c_bottomCorners != null ? c_bottomCorners[i].Top : null), true);
                }

                for (int i = 0; i < Topology.Sides; i++) {
                    int nextI = (i + 1) % Topology.Sides;
                    ColliderElement.ConnectUniform(this, true, c_edges[i].Right, c_edges[nextI].Left, true, true);
                }
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

            _size.Height = Mathf.Max(_size.Height, 0.001f);
            _size.TopRadius = Mathf.Max(_size.TopRadius, 0.001f);
            _size.BottomRadius = Mathf.Max(_size.BottomRadius, 0.001f);
            _size.yt = _size.Height / 2 + _size.PivotOffset * _size.Height;
            _size.yb = -_size.Height / 2 + _size.PivotOffset * _size.Height;

            float clampedFillet = _size.FilletRadius;

            Vector2 ht0 = GetCornerPos(_size.TopRadius, -1);
            Vector2 ht1 = GetCornerPos(_size.TopRadius, 0);
            Vector2 ht2 = GetCornerPos(_size.TopRadius, 1);

            Vector2 hb0 = GetCornerPos(_size.BottomRadius, -1);
            Vector2 hb1 = GetCornerPos(_size.BottomRadius, 0);
            Vector2 hb2 = GetCornerPos(_size.BottomRadius, 1);

            _size.HorizontalTop.Set(_size.yt, MidPoint(ht0, ht1), ht1, MidPoint(ht1, ht2), clampedFillet);
            _size.HorizontalBottom.Set(_size.yb, MidPoint(hb0, hb1), hb1, MidPoint(hb1, hb2), _size.HorizontalTop.ClampedRadius);
            _size.HorizontalTop.SetRadius(_size.HorizontalBottom.ClampedRadius);
            clampedFillet = _size.HorizontalBottom.ClampedRadius;


            Vector2 b0 = new Vector2(0, _size.yb);
            Vector2 b1 = _size.HorizontalBottom.GetPoint(0.5f);
            Vector2 t1 = _size.HorizontalTop.GetPoint(0.5f);
            Vector2 t0 = new Vector2(0, _size.yt);


            float clampedTopFillet = Mathf.Clamp(_size.TopFilletRadius, 0, clampedFillet);
            float clampedBottomFillet = Mathf.Clamp(_size.BottomFilletRadius, 0, clampedFillet);

            _size.VerticalTop.Set(0, b1, t1, t0, clampedTopFillet);
            _size.VerticalBottom.Set(0, b0, b1, t1, clampedBottomFillet);

            float topPivotLV = Mathf.InverseLerp(_size.yt, _size.yb, _size.VerticalTop.GetPoint(0).y);
            float bottomPivotLV = Mathf.InverseLerp(_size.yt, _size.yb, _size.VerticalBottom.GetPoint(1).y);

            _size.CornerPivotTop = Vector3.LerpUnclamped(_size.HorizontalTop.Center, _size.HorizontalBottom.Center, topPivotLV);
            _size.CornerPivotBottom = Vector3.LerpUnclamped(_size.HorizontalTop.Center, _size.HorizontalBottom.Center, bottomPivotLV);
 
            cornersTop[0].SetPositionAndSize(_size.HorizontalTop, _size.VerticalTop, _size.CornerPivotTop);
            cornersBottom[0].SetPositionAndSize(_size.HorizontalBottom, _size.VerticalBottom, _size.CornerPivotBottom);
 
            for (int i = 1; i < cornersTop.Length; i++) {
                Matrix2d tm = new Matrix2d(i * r360 / cornersTop.Length);
                cornersTop[i].CopyRotateY(true, cornersTop[0], tm);
                cornersBottom[i].CopyRotateY(true, cornersBottom[0], tm);
            }

            for (int i = 0; i < cornersTop.Length; i++) {
                ves[i].SetTopBottomSize(cornersTop[i].Bottom, cornersBottom[i].Top);
                int ni = (i + 1) % cornersTop.Length;
                hesTop[i].SetLeftRightSize(cornersTop[i].Right, cornersTop[ni].Left);
                hesBottom[i].SetLeftRightSize(cornersBottom[i].Right, cornersBottom[ni].Left);
                quads[i].SetPositionAndSize(cornersBottom[i].Corners[2], cornersTop[i].Corners[3], cornersTop[ni].Corners[0], cornersBottom[ni].Corners[1]);
            }

            TopCap.SetPositionAndSize(cornersTopReversed, true, true);
            BottomCap.SetPositionAndSize(cornersBottomReversed, false, true);


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
            Vector2 bottomOffset = new Vector2(_size.TopRadius + _size.TopFilletRadius*r90 + _size.BottomRadius + _size.BottomFilletRadius*r90, 0 );
            TopCap.SetUVPlanarXZ(uvs, Vector2.zero);
            BottomCap.SetUVPlanarXZ(uvs, bottomOffset);

            cornersTop[0].SetUVPositionAndSize(true, uvs, _size.VerticalTop.ClampedRadius, cornersTop[0].Top, cornersTop[0].Bottom, true);
            cornersBottom[0].SetUVPositionAndSize(true, uvs, _size.VerticalBottom.ClampedRadius, cornersBottom[0].Bottom, cornersBottom[0].Top, false );

            for (int i = 1; i < cornersTop.Length; i++) {
                Matrix2d tm = new Matrix2d(i * r360 / cornersTop.Length);
                cornersTop[i].CopyUV(true, uvs, cornersTop[0], tm);
                cornersBottom[i].CopyUV(true, uvs, cornersBottom[0], tm, bottomOffset );
            }

            cornersBottom[0].OffsetUV(true, uvs, bottomOffset);

            for (int i = 0; i < cornersTop.Length; i++) {
                int nextI = (i + 1) % cornersTop.Length;
                hesTop[i].SetUVLeftRight(uvs, cornersTop[i].Right, cornersTop[nextI].Left);
                hesBottom[i].SetUVLeftRight(uvs, cornersBottom[i].Right, cornersBottom[nextI].Left);
            }

            float yOffset = Mathf.Max(_size.TopRadius + _size.TopFilletRadius * r90, _size.BottomRadius + _size.BottomFilletRadius * r90) + 0.05f;
            Vector2 quadSize = quads[0].AverageSize();
            Vector2 edgeSize = new Vector2(_size.HorizontalBottom.Angle  * _size.HorizontalTop.ClampedRadius, quadSize.y);

            float xOffset = 0;
            for (int i = 0; i < cornersTop.Length; i++) {
                 ves[i].SetUVRect(true, uvs, new Vector2(xOffset, yOffset), edgeSize);
                xOffset += edgeSize.x;
                quads[i].SetUVRect(false, uvs, new Vector2(xOffset, yOffset), quadSize);
                xOffset += quadSize.x;
            }

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
            Vector2 bottomOffset = new Vector2(_size.TopRadius + _size.TopFilletRadius * r90 + _size.BottomRadius + _size.BottomFilletRadius * r90, 0);
            TopCap.SetUVPlanarXZ(uvs, Vector2.zero);
            BottomCap.SetUVPlanarXZ(uvs, bottomOffset);


            float yOffset = Mathf.Max(_size.TopRadius + _size.TopFilletRadius * r90, _size.BottomRadius + _size.BottomFilletRadius * r90) + 0.05f;
            Vector2 quadSize = quads[0].AverageSize();
            Vector2 edgeSize = new Vector2(_size.HorizontalBottom.Angle * _size.HorizontalTop.ClampedRadius, quadSize.y);
            float topFilletHeight = _size.VerticalTop.Angle * _size.VerticalTop.ClampedRadius;
            float bottomFilletHeight = _size.VerticalBottom.Angle * _size.VerticalBottom.ClampedRadius;

            float xOffset = 0;
            for (int i = 0; i < cornersTop.Length; i++) {
                ves[i].SetUVRect(true, uvs, new Vector2(xOffset, yOffset), edgeSize);

                cornersBottom[i].SetUVRect(true, uvs, new Vector2(xOffset, yOffset - bottomFilletHeight), new Vector2(edgeSize.x, bottomFilletHeight));
                cornersTop[i].SetUVRect(true, uvs, new Vector2(xOffset, yOffset + edgeSize.y), new Vector2(edgeSize.x, topFilletHeight));

                hesTop[i].SetUVRect(true, uvs, new Vector2(xOffset+edgeSize.x, yOffset + edgeSize.y), new Vector2(quadSize.x, topFilletHeight));
                hesBottom[i].SetUVRect(true, uvs, new Vector2(xOffset + edgeSize.x, yOffset - bottomFilletHeight), new Vector2(quadSize.x, bottomFilletHeight));

                xOffset += edgeSize.x;
                quads[i].SetUVRect(false, uvs, new Vector2(xOffset, yOffset), quadSize);
                xOffset += quadSize.x;

                


            }

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

        Vector2 GetCornerPos (float radius,  int idx) {
            float angle = r360/Topology.Sides * idx;
            return new Vector3(Mathf.Cos(angle) * radius, Mathf.Sin(angle) * radius);    
        }

        Vector3 GetCornerPos(float radius, float yPos, int idx) {
            float angle = r360 / Topology.Sides * idx;
            return new Vector3(Mathf.Cos(angle) * radius, yPos, Mathf.Sin(angle) * radius);
        }

        Vector2 MidPoint(Vector2 a, Vector2 b) {
            return Vector2.LerpUnclamped(a, b, 0.5f);
        }


        internal override void OnDrawGizmosInherited() {
            if (Statistic.DrawObjectGizmo) {
                Gizmos.matrix = transform.localToWorldMatrix;
                Gizmos.color = ObjectGizmoColor;
 

                for (int c = 0; c<Topology.Sides; c++) {
                    int nc = (c + 1) % Topology.Sides;
                    Vector3 top = GetCornerPos(Size.TopRadius, Size.yt, c);
                    Vector3 bottom = GetCornerPos(Size.BottomRadius, Size.yb, c);
                    Vector3 ntop = GetCornerPos(Size.TopRadius, Size.yt, nc);
                    Vector3 nbottom = GetCornerPos(Size.BottomRadius, Size.yb, nc);
                    Gizmos.DrawLine(top, bottom);
                    Gizmos.DrawLine(top, ntop);
                    Gizmos.DrawLine(bottom, nbottom);
                }
            }
        }

        public static FilletNGon Create() {
            GameObject go = new GameObject("New Fillet NGon");
            FilletNGon result = go.AddComponent<FilletNGon>();
            result.Apply();
            return result;
        }
    }
}
