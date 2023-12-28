using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11 {


    [RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
    [ExecuteInEditMode]
    [DefaultExecutionOrder(100)]
    public class FilletPrism : ExtendedPrimitive {


        [System.Serializable]
        public struct SizeParams {
            
            [Tooltip("Corner A position. Use Rect Tool to enable scene view handles")]
            public Vector2 A;
            [Tooltip("Corner B position. Use Rect Tool to enable scene view handles")]
            public Vector2 B;
            [Tooltip("Corner C position. Use Rect Tool to enable scene view handles")]
            public Vector2 C;

            [Tooltip("Vertical offset about pivot point")]
            [Range(-0.5f, 0.5f)]
            public float PivotOffset;
 
            [A_Size("Y dimension")]
            public float Height;
            
            [A_Size("Vertical edges fillet radius", 0.2f)]
            public float FilletRadius;

            [A_Size("Horizontal edges fillet radius", 0.2f)]
            public float CapFilletRadius;

            [HideInInspector]
            public float[] notAnimatableData;

 
            public float yt {
                get {
                    return notAnimatableData[0];
                }

                set {
                    notAnimatableData[0] = value;
                }
            }


            public float yb {
                get {
                    return notAnimatableData[1];
                }

                set {
                    notAnimatableData[1] = value;
                }
            }
 

            public SizeParams(float length,  float height, float filletRadius) {
                PivotOffset = 0;
                A = new Vector2(0, 0);
                B = new Vector2(0, 2);
                C = new Vector2(2, 0);
                Height = height;
                FilletRadius = filletRadius;
                CapFilletRadius = FilletRadius / 2f;
                notAnimatableData = new float[2];
            }

            public bool IsEquals(SizeParams other) {
                return (PivotOffset == other.PivotOffset)   && (Height == other.Height) && (A == other.A) && (B == other.B) && (C == other.C) && (FilletRadius == other.FilletRadius) && (CapFilletRadius==other.CapFilletRadius);
            }
        }

        [System.Serializable]
        public struct TopologyParams {
            [Tooltip("Generates a top surfaces")]
            public bool Top;
            [Tooltip("Generates a side surfaces")]
            public bool Side;
            [Tooltip("Generates a bottom surfaces")]
            public bool Bottom;

            [Range(1, 32)]
            public int FilletSegments;

            [Range(1, 32)]
            public int CapFilletSegments;

            public bool FlipNormals;

            public TopologyParams(int filletSegments) {
                FilletSegments = filletSegments;
                CapFilletSegments = filletSegments / 2;
                FlipNormals = false;
                Top = true;
                Side = true;
                Bottom = true;
            }

            public bool IsEquals(TopologyParams other) {
                bool parts = Top == other.Top && Side == other.Side && Bottom == other.Bottom;
                return parts && FilletSegments == other.FilletSegments && FlipNormals == other.FlipNormals && CapFilletSegments == other.CapFilletSegments;
            }
        }

        [System.Serializable]
        public struct CachedTextureMappingParam {
            public SizeParams Size;
            public TextureChannelParams ChannelParams;

            public CachedTextureMappingParam(int i) {
                Size = new SizeParams(1f, 0.3f, 0.1f);
                ChannelParams = new TextureChannelParams(MappingMethodEnum.UnfoldA, UpdateTextureCoordsModeEnum.Fixed);
            }
        }

        private SizeParams size;
        public SizeParams Size = new SizeParams(1f, 0.3f,  0.1f);

        private TopologyParams topology;
        public TopologyParams Topology = new TopologyParams(8);

        [HideInInspector]
        public CachedTextureMappingParam[] CachedSizeParams = new CachedTextureMappingParam[2] { new CachedTextureMappingParam(0), new CachedTextureMappingParam(1)};

        HorizontalCorner cornertA;
        HorizontalCorner cornertB;
        HorizontalCorner cornertC;
        HorizontalCorner[] cornersArrTop = new HorizontalCorner[3];

        HorizontalCorner cornerbA;
        HorizontalCorner cornerbB;
        HorizontalCorner cornerbC;
        HorizontalCorner[] cornersArrBottom = new HorizontalCorner[3];

        VerticalEdge cornerAEdge;
        VerticalEdge cornerBEdge;
        VerticalEdge cornerCEdge;

        HorizontalEdge hEdgetAB;
        HorizontalEdge hEdgetBC;
        HorizontalEdge hEdgetCA;

        HorizontalEdge hEdgebAB;
        HorizontalEdge hEdgebBC;
        HorizontalEdge hEdgebCA;

        Quad quadCA;
        Quad quadAB;
        Quad quadBC;

        NGonCap capTop;
        NGonCap capBottom;

        internal override bool IsTopologyParamsChanged {
            get {
                return !Topology.IsEquals(topology) || capTop == null;
            }
        }

        internal override bool IsSizeParamsChanged  {
            get {
                return !Size.IsEquals(size);
            }
        }

        internal override void CacheSizeParams(int cacheIdx) {
            CachedSizeParams[cacheIdx].Size = Size;
        }

        internal override void SetSizeFromCache(int channelIdx) {
            SetSize(ref CachedSizeParams[channelIdx].Size);
        }

        internal override void SetSizeFromParams() {
            SetSize(ref Size);
            size = Size;
        }

        internal override void SetTopology( ) {
            Statistic.Topology.BeginSample();
            Faces.Clear();
            MEdges.Clear();

            Topology.FilletSegments = Mathf.Clamp(Topology.FilletSegments, 1, 32);
            Topology.CapFilletSegments = Mathf.Clamp(Topology.CapFilletSegments, 1, 32);

            int capSegments = Topology.CapFilletSegments;
            int segments = Topology.FilletSegments;

            Top.Clear();
            Side.Clear();
            Bottom.Clear();

            vertsCounter = 0;
 
            cornertA = cornersArrTop[0] = new HorizontalCorner(Topology.Top, this, Top, false, capSegments, segments);
            cornertB = cornersArrTop[1] = new HorizontalCorner(Topology.Top, this, Top, false, capSegments, segments);
            cornertC = cornersArrTop[2] = new HorizontalCorner(Topology.Top, this, Top, false, capSegments, segments);

            cornerbA = cornersArrBottom[0] = new HorizontalCorner(Topology.Bottom, this, Bottom, true, capSegments, segments);
            cornerbB = cornersArrBottom[1] = new HorizontalCorner(Topology.Bottom, this, Bottom, true, capSegments, segments);
            cornerbC = cornersArrBottom[2] = new HorizontalCorner(Topology.Bottom, this, Bottom, true, capSegments, segments);
 
            cornerAEdge = new VerticalEdge(Topology.Side, this, Side, false, segments);
            cornerBEdge = new VerticalEdge(Topology.Side, this, Side, false, segments);
            cornerCEdge = new VerticalEdge(Topology.Side, this, Side, false, segments);

            hEdgetAB = new HorizontalEdge(Topology.Top, this, Top, false, capSegments, false);
            hEdgetBC = new HorizontalEdge(Topology.Top, this, Top, false, capSegments, false);
            hEdgetCA = new HorizontalEdge(Topology.Top, this, Top, false, capSegments, false);

            hEdgebAB = new HorizontalEdge(Topology.Bottom, this, Bottom, true, capSegments, false);
            hEdgebBC = new HorizontalEdge(Topology.Bottom, this, Bottom, true, capSegments, false);
            hEdgebCA = new HorizontalEdge(Topology.Bottom, this, Bottom, true, capSegments, false);

            quadCA = new Quad(Topology.Side, this, Side, false, 0 );
            quadAB = new Quad(Topology.Side, this, Side, false, 0 );
            quadBC = new Quad(Topology.Side, this, Side, false, 0 );

            capTop = new NGonCap(Topology.Top, this, Top, false, segments, 3);
            capBottom = new NGonCap(Topology.Bottom, this, Bottom, true, segments, 3);

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

            Collider.ClearTopology(this);

            ColliderElement c_cornertA = null;
            ColliderElement c_cornertB = null;
            ColliderElement c_cornertC = null;
            ColliderElement c_cornerbA = null;
            ColliderElement c_cornerbB = null;
            ColliderElement c_cornerbC = null;

            if (Topology.Top) {
                c_cornertA = new ColliderElement(this, false, cornertA, null, null, null, null, true);
                c_cornertB = new ColliderElement(this, false, cornertB, null, null, null, null, true);
                c_cornertC = new ColliderElement(this, false, cornertC, null, null, null, null, true);
                ColliderElement.ConnectUniform(this, false, c_cornertC.Left, c_cornertA.Right, true, true);
                ColliderElement.ConnectUniform(this, false, c_cornertA.Left, c_cornertB.Right, true, true);
                ColliderElement.ConnectUniform(this, false, c_cornertB.Left, c_cornertC.Right, true, true);
                ColliderVertex[] abColliderVertices = new ColliderVertex[c_cornertA.Top.Length * 2];
                c_cornertA.TopReversed.CopyTo(abColliderVertices, 0);
                c_cornertB.TopReversed.CopyTo(abColliderVertices, c_cornertA.Top.Length);
                ColliderElement.ConnectIrregular(this, false, abColliderVertices, c_cornertC.Top, true);
            }


            if (Topology.Bottom) {
                c_cornerbA = new ColliderElement(this, true, cornerbA, null, null, null, null, true);
                c_cornerbB = new ColliderElement(this, true, cornerbB, null, null, null, null, true);
                c_cornerbC = new ColliderElement(this, true, cornerbC, null, null, null, null, true);
                ColliderElement.ConnectUniform(this, true, c_cornerbC.Left, c_cornerbA.Right, true, true);
                ColliderElement.ConnectUniform(this, true, c_cornerbA.Left, c_cornerbB.Right, true, true);
                ColliderElement.ConnectUniform(this, true, c_cornerbB.Left, c_cornerbC.Right, true, true);
                ColliderVertex[] abColliderVerticesBottom = new ColliderVertex[c_cornerbA.Top.Length * 2];
                c_cornerbA.TopReversed.CopyTo(abColliderVerticesBottom, 0);
                c_cornerbB.TopReversed.CopyTo(abColliderVerticesBottom, c_cornerbA.Top.Length);
                ColliderElement.ConnectIrregular(this, true, abColliderVerticesBottom, c_cornerbC.Top, true);
            }

            if (Topology.Side) {
                new ColliderElement(this, false, cornerAEdge, null, null, (c_cornertA ? c_cornertA.Bottom : null), (c_cornerbA ? c_cornerbA.Bottom : null), true);
                new ColliderElement(this, false, cornerBEdge, null, null, (c_cornertB ? c_cornertB.Bottom : null), (c_cornerbB ? c_cornerbB.Bottom : null), true);
                new ColliderElement(this, false, cornerCEdge, null, null, (c_cornertC ? c_cornertC.Bottom : null), (c_cornerbC ? c_cornerbC.Bottom : null), true);

                new ColliderElement(this, false, quadAB, (c_cornerbB ? c_cornerbB.Corners[3] : null), (c_cornertB ? c_cornertB.Corners[3] : null), (c_cornertA ? c_cornertA.Corners[0] : null), (c_cornerbA ? c_cornerbA.Corners[0] : null));
                new ColliderElement(this, false, quadBC, (c_cornerbC ? c_cornerbC.Corners[3] : null), (c_cornertC ? c_cornertC.Corners[3] : null), (c_cornertB ? c_cornertB.Corners[0] : null), (c_cornerbB ? c_cornerbB.Corners[0] : null));
                new ColliderElement(this, false, quadBC, (c_cornerbA ? c_cornerbA.Corners[3] : null), (c_cornertA ? c_cornertA.Corners[3] : null), (c_cornertC ? c_cornertC.Corners[0] : null), (c_cornerbC ? c_cornerbC.Corners[0] : null));
            }

            Statistic.ColliderFacesCount = Collider.Faces.Count;
            Statistic.ColliderVerticesCount = Collider.Vertices.Count;
            Collider.ConvertToArrays();

            _MeshFilter.sharedMesh = SharedMesh;

            Statistic.VerticesCount = SharedMesh.vertexCount;
            Statistic.TrianglesCount = SharedMesh.triangles.Length / 3;

            topology = Topology;
            Statistic.Topology.EndSample();
        }

        void SetSize(ref SizeParams _size) {
            Statistic.Size.BeginSample();

            Vector3 inscribed = Triangle2d.InscribedCircle(_size.A, _size.B, _size.C);
            float clampedFillet = Mathf.Min(_size.FilletRadius, inscribed.z);
            float clampedCapFillet = Mathf.Min(_size.CapFilletRadius, clampedFillet);
            clampedCapFillet = Mathf.Min(clampedCapFillet, _size.Height/2);

            _size.yt = _size.Height / 2 + _size.PivotOffset * _size.Height;
            _size.yb = -_size.Height / 2 + _size.PivotOffset * _size.Height;

            cornertA.SetPositionAndSize(false, _size.C, _size.A, _size.B, clampedFillet, clampedCapFillet, _size.yt);
            cornertB.SetPositionAndSize(false, _size.A, _size.B, _size.C, clampedFillet, clampedCapFillet, _size.yt);
            cornertC.SetPositionAndSize(false, _size.B, _size.C, _size.A, clampedFillet, clampedCapFillet, _size.yt);

            float yoffset = _size.yt + _size.yb;

            cornerbA.CopyMirrorY(true, cornertA, yoffset);
            cornerbB.CopyMirrorY(true, cornertB, yoffset);
            cornerbC.CopyMirrorY(true, cornertC, yoffset);

            cornerAEdge.SetTopBottomSize( cornertA.Bottom, cornerbA.Bottom);
            cornerBEdge.SetTopBottomSize( cornertB.Bottom, cornerbB.Bottom);
            cornerCEdge.SetTopBottomSize( cornertC.Bottom, cornerbC.Bottom);

            hEdgetAB.SetLeftRightSize( cornertB.Right, cornertA.Left);
            hEdgetBC.SetLeftRightSize( cornertC.Right, cornertB.Left);
            hEdgetCA.SetLeftRightSize( cornertA.Right, cornertC.Left);

            hEdgebAB.SetLeftRightSize( cornerbB.Right, cornerbA.Left);
            hEdgebBC.SetLeftRightSize( cornerbC.Right, cornerbB.Left);
            hEdgebCA.SetLeftRightSize( cornerbA.Right, cornerbC.Left);

            quadCA.SetPositionAndSize( cornerbA.Corners[3], cornertA.Corners[3], cornertC.Corners[0], cornerbC.Corners[0] );
            quadAB.SetPositionAndSize( cornerbB.Corners[3], cornertB.Corners[3], cornertA.Corners[0], cornerbA.Corners[0] );
            quadBC.SetPositionAndSize( cornerbC.Corners[3], cornertC.Corners[3], cornertB.Corners[0], cornerbB.Corners[0] );

            capTop.SetPositionAndSize( cornersArrTop, true, false );
            capBottom.SetPositionAndSize( cornersArrBottom, true, false );

            Vector2 center = _size.A / 3f + _size.B / 3f + _size.C / 3f;
            bounds = new Bounds(center.XYtoXyZ(), Vector3.zero);
            bounds.Encapsulate(new Vector3(_size.A.x, _size.yt, _size.A.y));
            bounds.Encapsulate(new Vector3(_size.B.x, _size.yt, _size.B.y));
            bounds.Encapsulate(new Vector3(_size.C.x, _size.yb, _size.C.y));
            bounds.extents = bounds.extents * 1.1f;
            SharedMesh.vertices = mvertices;
            SharedMesh.normals = mnormals;
            SharedMesh.bounds = bounds;

            Statistic.Size.EndSample();
        }

        internal override void UnfoldA(Vector2[] uvs, int cachedSizeChannelIdx, Vector2 offset, Vector2 scale) {
            SizeParams _size = CachedSizeParams[cachedSizeChannelIdx].Size;
   
            Vector3 inscribed = Triangle2d.InscribedCircle(_size.A, _size.B, _size.C);
            float clampedFillet = Mathf.Min(_size.FilletRadius, inscribed.z);
            float clampedCapFillet = Mathf.Min(_size.CapFilletRadius, clampedFillet);
            clampedCapFillet = Mathf.Min(clampedCapFillet, _size.Height / 2);

            capTop.SetUVPlanarXZ(uvs, Vector2.zero);
            cornertA.SetUVPositionAndSize(false, uvs, clampedCapFillet, clampedFillet);
            cornertB.SetUVPositionAndSize(false, uvs, clampedCapFillet, clampedFillet);
            cornertC.SetUVPositionAndSize(false, uvs, clampedCapFillet, clampedFillet);

            hEdgetAB.SetUVLeftRight(uvs, cornertB.Right, cornertA.Left);
            hEdgetBC.SetUVLeftRight(uvs, cornertC.Right, cornertB.Left);
            hEdgetCA.SetUVLeftRight(uvs, cornertA.Right, cornertC.Left);

            Vector2 bottomCapOffset = new Vector2( bounds.size.x + bounds.min.x + bounds.max.x +clampedCapFillet*r180  , 0);

            capBottom.CopyUV(false, uvs, capTop, bottomCapOffset, new Vector2(-1, 1));
            cornerbA.CopyUV(false, uvs, cornertA, bottomCapOffset, new Vector2(-1,1));
            cornerbB.CopyUV(false, uvs, cornertB, bottomCapOffset, new Vector2(-1, 1));
            cornerbC.CopyUV(false, uvs, cornertC, bottomCapOffset, new Vector2(-1, 1));
 
            hEdgebAB.SetUVLeftRight(uvs, cornerbB.Right, cornerbA.Left);
            hEdgebBC.SetUVLeftRight(uvs, cornerbC.Right, cornerbB.Left);
            hEdgebCA.SetUVLeftRight(uvs, cornerbA.Right, cornerbC.Left);

            float edgeHeight = _size.Height - clampedCapFillet*2;
            float stripeY = bounds.max.z + clampedCapFillet * r90;
 
            cornerAEdge.SetUVRect(false, uvs, new Vector2(0, stripeY), new Vector2(cornertA.angle * clampedFillet, edgeHeight));
            float quadLength = Vector3.Distance(quadCA.Corners[1].Pos, quadCA.Corners[2].Pos);
            float xOffset = cornerAEdge.Corners[3].UV.x;
            quadCA.SetUVPositionAndSize(uvs, new Vector2(xOffset, stripeY), new Vector2(xOffset, stripeY + edgeHeight), new Vector2(xOffset+ quadLength, stripeY + edgeHeight), new Vector2(xOffset + quadLength, stripeY));

            cornerCEdge.SetUVSnapAndSize(false, uvs, 0, quadCA.Corners[3].UV, new Vector2(cornertC.angle * clampedFillet, edgeHeight));
            quadLength = Vector3.Distance(quadBC.Corners[1].Pos, quadBC.Corners[2].Pos);
            xOffset = cornerCEdge.Corners[3].UV.x;
            quadBC.SetUVPositionAndSize(uvs, new Vector2(xOffset, stripeY), new Vector2(xOffset, stripeY + edgeHeight), new Vector2(xOffset + quadLength, stripeY + edgeHeight), new Vector2(xOffset + quadLength, stripeY));

            cornerBEdge.SetUVSnapAndSize(false, uvs, 0, quadBC.Corners[3].UV, new Vector2(cornertC.angle * clampedFillet, edgeHeight));
            quadLength = Vector3.Distance(quadAB.Corners[1].Pos, quadAB.Corners[2].Pos);
            xOffset = cornerBEdge.Corners[3].UV.x;
            quadAB.SetUVPositionAndSize(uvs, new Vector2(xOffset, stripeY), new Vector2(xOffset, stripeY + edgeHeight), new Vector2(xOffset + quadLength, stripeY + edgeHeight), new Vector2(xOffset + quadLength, stripeY));

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

        internal override  void UnfoldB(Vector2[] uvs, int cachedSizeChannelIdx, Vector2 offset, Vector2 scale) {
            SizeParams _size = CachedSizeParams[cachedSizeChannelIdx].Size;
 
            Vector3 inscribed = Triangle2d.InscribedCircle(_size.A, _size.B, _size.C);
            float clampedFillet = Mathf.Min(_size.FilletRadius, inscribed.z);
            float clampedCapFillet = Mathf.Min(_size.CapFilletRadius, clampedFillet);
            clampedCapFillet = Mathf.Min(clampedCapFillet, _size.Height / 2);

            capTop.SetUVPlanarXZ(uvs, new Vector2(0, -clampedCapFillet * r180 - bounds.max.z));
            Vector2 bottomCapOffset = new Vector2(bounds.size.x + bounds.min.x + bounds.max.x + clampedCapFillet * r180, 0);
            capBottom.CopyUV(false, uvs, capTop, bottomCapOffset, new Vector2(-1, 1));

             float stripeHeight = _size.Height - clampedCapFillet * 2;
            float xPos = 0;
            cornerbA.SetUVRect(false, uvs, Vector2.zero, new Vector2(cornertA.angle * clampedFillet, -clampedCapFillet * r90));
            cornertA.CopyUV(false, uvs, cornerbA, new Vector2(0, stripeHeight), new Vector2(1, -1));
            cornerAEdge.SetUVTopBottom(uvs, cornerbA.Bottom, cornertA.Bottom);
            
            float quadLength = Vector3.Distance(quadCA.Corners[1].Pos, quadCA.Corners[2].Pos);
            xPos += cornertA.angle * clampedFillet;
            xPos += quadLength;
            cornerbC.SetUVRect(false, uvs, new Vector2(xPos, 0), new Vector2(cornertC.angle * clampedFillet, -clampedCapFillet * r90));
            cornertC.CopyUV(false, uvs, cornerbC, new Vector2(0, stripeHeight), new Vector2(1, -1));
            cornerCEdge.SetUVTopBottom(uvs, cornerbC.Bottom, cornertC.Bottom);

            quadLength = Vector3.Distance(quadBC.Corners[1].Pos, quadBC.Corners[2].Pos);
            xPos += cornertC.angle * clampedFillet;
            xPos += quadLength;
            cornerbB.SetUVRect(false, uvs, new Vector2(xPos, 0), new Vector2(cornertB.angle * clampedFillet, -clampedCapFillet * r90));
            cornertB.CopyUV(false, uvs, cornerbB, new Vector2(0, stripeHeight), new Vector2(1, -1));
            cornerBEdge.SetUVTopBottom(uvs, cornerbB.Bottom, cornertB.Bottom);

            hEdgetCA.SetUVLeftRight(uvs, cornertA.Right, cornertC.Left);
            hEdgebCA.SetUVLeftRight(uvs, cornerbA.Right, cornerbC.Left);
 
            hEdgetBC.SetUVLeftRight(uvs, cornertC.Right, cornertB.Left);
            hEdgebBC.SetUVLeftRight(uvs, cornerbC.Right, cornerbB.Left); 
 
            quadLength = Vector3.Distance(quadAB.Corners[1].Pos, quadAB.Corners[2].Pos);
            xPos += cornertB.angle * clampedFillet;

            hEdgetAB.SetUVRect(false, uvs, cornertB.Corners[3].UV, new Vector2(quadLength, clampedCapFillet*r90 )  );
            hEdgebAB.SetUVRect(false, uvs, cornerbB.Corners[3].UV, new Vector2(quadLength, -clampedCapFillet * r90));

            quadCA.SetUVPositionAndSize(uvs, cornerbA.Corners[3], cornertA.Corners[3], cornertC.Corners[0], cornerbC.Corners[0]);
            quadBC.SetUVPositionAndSize(uvs, cornerbC.Corners[3], cornertC.Corners[3], cornertB.Corners[0], cornerbB.Corners[0]);

            quadAB.SetUVPositionAndSize(uvs, hEdgebAB.Corners[0], hEdgetAB.Corners[0], hEdgetAB.Corners[3], hEdgebAB.Corners[3] );
             
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
                Vector2 center = (Size.A / 3f + Size.B / 3f + Size.C / 3f);
                float yt = Size.Height / 2 + Size.PivotOffset * Size.Height;
                Matrix4x4 ltw = transform.localToWorldMatrix;
                Constraints.Top.position = ltw.MultiplyPoint3x4(new Vector3(center.x, yt, center.y));
                Constraints.Top.rotation = Quaternion.LookRotation(ltw.MultiplyVector((Size.C - center).XYtoXyZ()), transform.up);
             }

            if (Constraints.Bottom != null) {
                Vector2 center = (Size.A / 3f + Size.B / 3f + Size.C / 3f);
                float yb = -size.Height / 2 + size.PivotOffset * Size.Height;
                Matrix4x4 ltw = transform.localToWorldMatrix;
                Constraints.Bottom.position = ltw.MultiplyPoint3x4(new Vector3(center.x, yb, center.y));
                Constraints.Bottom.rotation = Quaternion.LookRotation(ltw.MultiplyVector((Size.C - center).XYtoXyZ()), -transform.up);
            }

            if (Constraints.Side != null) {
                Matrix4x4 ltw = transform.localToWorldMatrix;
                float mid =  + size.PivotOffset * Size.Height;
                Vector2 center = Vector2.LerpUnclamped(Size.B, Size.A, 0.5f); 
                Constraints.Side.position = ltw.MultiplyPoint3x4(new Vector3(center.x, mid, center.y));
                Constraints.Side.rotation = Quaternion.LookRotation(ltw.MultiplyVector((Size.B - center).XYtoXyZ()),  transform.up);
            }

        }

        internal override bool FlipNormals {
            get {
                return Topology.FlipNormals;
            }
        }

        public bool RayToCornerPos(Ray r, ref Vector3 result) {
            Plane p = new Plane(transform.up, transform.position);
            float d = 0;
            p.Raycast(r, out d);
            result = r.GetPoint(d);
            return Mathf.Abs(Vector3.Dot(r.direction, p.normal)) > 0.2f;
        }

        public Vector3 Awp {
            get {
                
                return transform.TransformPoint(new Vector3(Size.A.x, 0, Size.A.y));
            }

            set {
                Vector3 localP = transform.worldToLocalMatrix.MultiplyPoint3x4(value);
                Size.A.x = localP.x;
                Size.A.y = localP.z;

            }
        }

        public Vector3 Bwp {
            get {
                return transform.TransformPoint(new Vector3(Size.B.x, 0, Size.B.y));
            }

            set {
                Vector3 localP = transform.worldToLocalMatrix.MultiplyPoint3x4(value);
                Size.B.x = localP.x;
                Size.B.y = localP.z;
            }
        }

        public Vector3 Cwp {
            get {
                return transform.TransformPoint(new Vector3(Size.C.x, 0, Size.C.y));
            }

            set {
                Vector3 localP = transform.worldToLocalMatrix.MultiplyPoint3x4(value);
                Size.C.x = localP.x;
                Size.C.y = localP.z;
            }
        }

        internal override void OnDrawGizmosInherited() {
            if (Statistic.DrawObjectGizmo) {
                Gizmos.matrix = transform.localToWorldMatrix;
                Gizmos.color = ObjectGizmoColor;

                Vector3 ptA = Size.A.XYtoXyZ(Size.yt);
                Vector3 ptB = Size.B.XYtoXyZ(Size.yt);
                Vector3 ptC = Size.C.XYtoXyZ(Size.yt);

                Vector3 pbA = Size.A.XYtoXyZ(Size.yb);
                Vector3 pbB = Size.B.XYtoXyZ(Size.yb);
                Vector3 pbC = Size.C.XYtoXyZ(Size.yb);

                Gizmos.DrawLine(ptA, ptB);
                Gizmos.DrawLine(ptB, ptC);
                Gizmos.DrawLine(ptC, ptA);


                Gizmos.DrawLine(pbA, pbB);
                Gizmos.DrawLine(pbB, pbC);
                Gizmos.DrawLine(pbC, pbA);

                Gizmos.DrawLine(ptA, pbA);
                Gizmos.DrawLine(ptB, pbB);
                Gizmos.DrawLine(ptC, pbC);
            }
        }

        public static FilletPrism Create() {
            GameObject go = new GameObject("New Fillet Prism");
            FilletPrism result = go.AddComponent<FilletPrism>();
            result.Apply();
            return result;
        }
    }
}
