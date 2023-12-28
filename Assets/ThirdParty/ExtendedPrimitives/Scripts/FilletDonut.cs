using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11 {
    [RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
    [ExecuteInEditMode]
    [DefaultExecutionOrder(100)]
    public class FilletDonut : RadialPrimitive {

        [System.Serializable]
        public struct SizeParams {

            [Tooltip("Vertical offset about pivot point")]
            [Range(-0.5f, 0.5f)]
            public float PivotOffset;

            [Range(0,360)]
            public float Angle;

            [A_Size("Radius of donut")]
            public float Radius;

            [A_Size("Inner radius of pie")]
            public float InnerRadius;

            [A_Size("Y dimension")]
            public float Height;

            [A_Size("Radius of edges fillet")]
            public float FilletRadius;

            [A_Size("Radius of slice edges fillet")]
            public float SliceFilletRadius;

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

            [HideInInspector]
            public float[] notAnimatableData;


            public SizeParams( float angle, float radius, float height, float filletRadius, float sliceFilletRadius ) {
                Angle = angle;
                PivotOffset = 0;
                Radius = radius;
                InnerRadius = Radius / 2;
                Height = height;
                FilletRadius = filletRadius;
                SliceFilletRadius = sliceFilletRadius;
                notAnimatableData = new float[2];
            }

            public bool Equals(SizeParams other) {
                return (PivotOffset == other.PivotOffset) && (Angle == other.Angle) && (Radius == other.Radius) && (Height == other.Height)  && (FilletRadius == other.FilletRadius) && (SliceFilletRadius == other.SliceFilletRadius) && (InnerRadius == other.InnerRadius);
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


            [Tooltip("Radial segments")]
            [Range(4, 128)]
            public int RadiusSegments;

            [Tooltip("Fillet segments")]
            [Range(1, 32)]
            public int FilletSegments;

            [Tooltip("Slice fillet segments ")]
            [Range(1, 32)]
            public int SliceFilletSegments;

            public bool FlipNormals;

            public TopologyParams(int radiusSegments, int filletSegments, int sliceFilletSegments) {
                RadiusSegments = radiusSegments;
                FilletSegments = filletSegments;
                SliceFilletSegments = sliceFilletSegments;
                Top = true;
                Side = true;
                Bottom = true;
                FlipNormals = false;
            }

            public bool IsEquals(TopologyParams other) {
                bool parts = Top == other.Top && Side == other.Side && Bottom == other.Bottom;
                return parts && RadiusSegments == other.RadiusSegments &&   FilletSegments == other.FilletSegments && SliceFilletSegments == other.SliceFilletSegments && FlipNormals == other.FlipNormals;
            }
        }

        [System.Serializable]
        public struct CachedTextureMappingParam {
            public SizeParams Size;
            public TextureChannelParams ChannelParams;

            public CachedTextureMappingParam(int i){
                Size = new SizeParams(270f, 1f, 0.3f, 0.03f, 0.03f);
                ChannelParams = new TextureChannelParams(MappingMethodEnum.UnfoldA, UpdateTextureCoordsModeEnum.Fixed);
            }
        }

        private SizeParams size;
        public SizeParams Size = new SizeParams(270f, 1f, 0.3f, 0.03f, 0.03f );

        private TopologyParams topology;
        public TopologyParams Topology = new TopologyParams(32, 8,8);

        [HideInInspector]
        public CachedTextureMappingParam[] CachedSizeParams = new CachedTextureMappingParam[2] { new CachedTextureMappingParam(0), new CachedTextureMappingParam(1)};

        PieCorner cornert0;
        PieCorner cornert0i;
        PieCorner cornerb0;
        PieCorner cornerb0i;
        HorizontalEdge hEdge0Top;
        HorizontalEdge hEdge0Bottom;
        VerticalEdge cornerVerticalEdge0;
        VerticalEdge cornerVerticalEdge0i;
        VerticalEdge VerticalEdgeSliceCap0;
        VerticalEdge VerticalEdgeSliceCap0i;
        Quad q0;

        PieCorner cornert1;
        PieCorner cornert1i;
        PieCorner cornerb1;
        PieCorner cornerb1i;
        HorizontalEdge hEdge1Top;
        HorizontalEdge hEdge1Bottom;
        VerticalEdge cornerVerticalEdge1;
        VerticalEdge cornerVerticalEdge1i;
        VerticalEdge VerticalEdgeSliceCap1;
        VerticalEdge VerticalEdgeSliceCap1i;
        Quad q1;

        PieFilletEdge filletTop;
        PieFilletEdge filletTopi;

        PieFilletEdge filletBottom;
        PieFilletEdge filletBottomi;

        VerticalEdge radialEdge;
        VerticalEdge radialEdgei;

        VerticalEdge CapTop;
        VerticalEdge CapBottom;

        internal override bool IsTopologyParamsChanged  {
            get {
                return !Topology.IsEquals(topology) || cornert0 == null;
            }
        }

        internal override bool IsSizeParamsChanged  {
            get {
                return !Size.Equals(size);
            }
        }

        internal override void UpdateConstraints() {
            if (Constraints.Top != null) {
                float yt = Size.Height / 2 + Size.PivotOffset * Size.Height;
                float midAngle = Size.Angle / 2f * Mathf.Deg2Rad;
                float r = Mathf.LerpUnclamped(Size.InnerRadius, Size.Radius, 0.5f);
                Vector3 pos = new Vector3(Mathf.Cos(midAngle) * r, yt, Mathf.Sin(midAngle) * r);
                Constraints.Top.position = transform.localToWorldMatrix.MultiplyPoint3x4(pos);
                Quaternion rot = Quaternion.Euler(0, -Size.Angle / 2f, 0);
                Constraints.Top.rotation = transform.rotation * rot;
            }

            if (Constraints.Bottom != null) {
                float yb = -Size.Height / 2 + Size.PivotOffset * Size.Height;
                float midAngle = Size.Angle / 2f * Mathf.Deg2Rad;
                float r = Mathf.LerpUnclamped(Size.InnerRadius, Size.Radius, 0.5f);
                Vector3 pos = new Vector3(Mathf.Cos(midAngle) * r, yb, Mathf.Sin(midAngle) * r);
                Constraints.Bottom.position = transform.localToWorldMatrix.MultiplyPoint3x4(pos);
                Quaternion rot = Quaternion.Euler(0, -Size.Angle / 2f, 0);
                Constraints.Bottom.rotation = transform.rotation * rot;
            }

            if (Constraints.Side != null) {
                float mid = size.PivotOffset * Size.Height;
                float midAngle = Size.Angle / 2f * Mathf.Deg2Rad;
                float r = Size.Radius ;
                Vector3 pos = new Vector3(Mathf.Cos(midAngle) * r, mid, Mathf.Sin(midAngle) * r);
                Constraints.Side.position = transform.localToWorldMatrix.MultiplyPoint3x4(pos);
                Quaternion rot = Quaternion.Euler(0, -Size.Angle / 2f, 0);
                Constraints.Side.rotation = transform.rotation * rot;
            }
        }

        internal override void SetTopology() {
            Statistic.Topology.BeginSample();
            Faces.Clear();
            MEdges.Clear();
            Top.Clear();
            Side.Clear();
            Bottom.Clear();

            int radSegments = Topology.RadiusSegments = Mathf.Clamp(Topology.RadiusSegments, 4, 128);
            int filletSegments = Topology.FilletSegments = Mathf.Clamp(Topology.FilletSegments, 1, 32);
            int sliceFilletSegments = Topology.SliceFilletSegments = Mathf.Clamp(Topology.SliceFilletSegments, 1, 32);

            vertsCounter = 0;

            cornert0 = new PieCorner(Topology.Top,  this, Top, false, filletSegments, sliceFilletSegments);
            cornert0i = new PieCorner(Topology.Top, this, Top, true, filletSegments, sliceFilletSegments);
            cornerb0 = new PieCorner(Topology.Bottom, this, Bottom, true, filletSegments, sliceFilletSegments);
            cornerb0i = new PieCorner(Topology.Bottom, this, Bottom, false, filletSegments, sliceFilletSegments);
            cornerVerticalEdge0 = new VerticalEdge(Topology.Side, this, Side, false, sliceFilletSegments);
            cornerVerticalEdge0i = new VerticalEdge(Topology.Side, this, Side, true, sliceFilletSegments);
            hEdge0Top = new HorizontalEdge(Topology.Top, this, Top, false, sliceFilletSegments, false);
            hEdge0Bottom = new HorizontalEdge(Topology.Bottom, this, Bottom, true, sliceFilletSegments, false);
            VerticalEdgeSliceCap0 = new VerticalEdge(Topology.Side, this, Side, false, filletSegments);
            VerticalEdgeSliceCap0i = new VerticalEdge(Topology.Side, this, Side, true, filletSegments);
            q0 = new Quad(Topology.Side, this, Side, false, 0);
            cornert1 = new PieCorner(Topology.Top, this, Top, true, filletSegments, sliceFilletSegments);
            cornert1i = new PieCorner(Topology.Top, this, Top, false, filletSegments, sliceFilletSegments);
            cornerb1 = new PieCorner(Topology.Bottom, this, Bottom, false, filletSegments, sliceFilletSegments);
            cornerb1i = new PieCorner(Topology.Bottom, this, Bottom, true, filletSegments, sliceFilletSegments);
            cornerVerticalEdge1 = new VerticalEdge(Topology.Side, this, Side, true, sliceFilletSegments);
            cornerVerticalEdge1i = new VerticalEdge(Topology.Side, this, Side, false, sliceFilletSegments);
            hEdge1Top = new HorizontalEdge(Topology.Top, this, Top, false, sliceFilletSegments, false);
            hEdge1Bottom = new HorizontalEdge(Topology.Bottom, this, Bottom, true, sliceFilletSegments, false);
            VerticalEdgeSliceCap1 = new VerticalEdge(Topology.Side, this, Side, true, filletSegments);
            VerticalEdgeSliceCap1i = new VerticalEdge(Topology.Side, this, Side, false, filletSegments);
            q1 = new Quad(Topology.Side, this, Side, true, 0);
            filletTop = new PieFilletEdge(Topology.Top, this, Top, false, filletSegments, radSegments);
            filletTopi = new PieFilletEdge(Topology.Top, this, Top, true, filletSegments, radSegments);
            filletBottom = new PieFilletEdge(Topology.Bottom, this, Bottom, true, filletSegments, radSegments);
            filletBottomi = new PieFilletEdge(Topology.Bottom, this, Bottom, false, filletSegments, radSegments);
            radialEdge = new VerticalEdge(Topology.Side, this, Side, false, radSegments);
            radialEdgei = new VerticalEdge(Topology.Side, this, Side, true, radSegments);
            CapTop = new VerticalEdge(Topology.Top, this, Top, false, radSegments);
            CapTop.SetVertexColorAlpha(1);
            CapBottom = new VerticalEdge(Topology.Bottom, this, Bottom, true, radSegments);
            CapBottom.SetVertexColorAlpha(1);

            Collider.ClearTopology(this);

            ColliderElement c_cornert0 = null;
            ColliderElement c_cornert0i = null;
            ColliderElement c_cornert1 = null;
            ColliderElement c_cornert1i = null;
            ColliderElement c_cornerb0 = null;
            ColliderElement c_cornerb0i = null;
            ColliderElement c_cornerb1 = null;
            ColliderElement c_cornerb1i = null;
            ColliderElement c_filletTop = null;
            ColliderElement c_filletTopi = null;
            ColliderElement c_filletBottom = null;
            ColliderElement c_filletBottomi = null;

            if (Topology.Top) {
                c_cornert0 = new ColliderElement(this, false, cornert0, null, null, null, null, true);
                c_cornert0i = new ColliderElement(this, true, cornert0i, null, null, null, null, true);
                c_cornert1 = new ColliderElement(this, true, cornert1, null, null, null, null, true);
                c_cornert1i = new ColliderElement(this, false, cornert1i, null, null, null, null, true);
                new ColliderElement(this, false, hEdge0Top, c_cornert0i.Left, c_cornert0.Left, null, null, true);
                new ColliderElement(this, true, hEdge1Top, c_cornert1i.Left, c_cornert1.Left, null, null, true);
                c_filletTop = new ColliderElement(this, false, filletTop, c_cornert0.TopReversed, c_cornert1.TopReversed, null, null, true);
                c_filletTopi = new ColliderElement(this, true, filletTopi, c_cornert0i.TopReversed, c_cornert1i.TopReversed, null, null, true);
                ColliderElement.ConnectUniform(this, false, c_filletTop.Top, c_filletTopi.Top, false, false);
            }


            if (Topology.Bottom) {
               c_cornerb0 = new ColliderElement(this, true, cornerb0, null, null, null, null, true);
               c_cornerb0i = new ColliderElement(this, false, cornerb0i, null, null, null, null, true);
               c_cornerb1 = new ColliderElement(this, false, cornerb1, null, null, null, null, true);
               c_cornerb1i = new ColliderElement(this, true, cornerb1i, null, null, null, null, true);
                new ColliderElement(this, false, hEdge1Bottom, c_cornerb1i.Left, c_cornerb1.Left, null, null, true);
                new ColliderElement(this, true, hEdge0Bottom, c_cornerb0i.Left, c_cornerb0.Left, null, null, true);
                c_filletBottom = new ColliderElement(this, true, filletBottom, c_cornerb0.TopReversed, c_cornerb1.TopReversed, null, null, true);
                c_filletBottomi = new ColliderElement(this, false, filletBottomi, c_cornerb0i.TopReversed, c_cornerb1i.TopReversed, null, null, true);
                ColliderElement.ConnectUniform(this, false, c_filletBottomi.Top, c_filletBottom.Top, false, false);
            }


            if (Topology.Side) {
                new ColliderElement(this, false, q0, (c_cornert0? c_cornert0.Corners[0] : null), (c_cornerb0? c_cornerb0.Corners[0] : null), (c_cornerb0i? c_cornerb0i.Corners[0] : null), (c_cornert0i? c_cornert0i.Corners[0]:null));
                new ColliderElement(this, true, q1, (c_cornert1? c_cornert1.Corners[0]:null), (c_cornerb1? c_cornerb1.Corners[0]:null),(c_cornerb1i? c_cornerb1i.Corners[0]:null), (c_cornert1i?c_cornert1i.Corners[0]:null) );
                new ColliderElement(this, false, cornerVerticalEdge0, null, null, (c_cornert0? c_cornert0.Right : null), (c_cornerb0? c_cornerb0.Right:null), true);

                new ColliderElement(this, true, cornerVerticalEdge0i, null, null, (c_cornert0i? c_cornert0i.Right:null), (c_cornerb0i?c_cornerb0i.Right:null), true);
                new ColliderElement(this, false, VerticalEdgeSliceCap0, null, null, (c_cornert0? c_cornert0.Bottom:null), (c_cornerb0?c_cornerb0.Bottom:null), false);
                new ColliderElement(this, true, VerticalEdgeSliceCap0i, null, null, (c_cornert0i?c_cornert0i.Bottom:null), (c_cornerb0i?c_cornerb0i.Bottom:null), false);
                new ColliderElement(this, true, cornerVerticalEdge1, null, null, (c_cornert1?c_cornert1.Right:null), (c_cornerb1?c_cornerb1.Right:null), true);
                new ColliderElement(this, false, cornerVerticalEdge1i, null, null, (c_cornert1i?c_cornert1i.Right:null), (c_cornerb1i?c_cornerb1i.Right: null), true);
                new ColliderElement(this, true, VerticalEdgeSliceCap1, null, null, (c_cornert1?c_cornert1.Bottom:null), (c_cornerb1?c_cornerb1.Bottom:null), false);
                new ColliderElement(this, false, VerticalEdgeSliceCap1i, null, null, (c_cornert1i?c_cornert1i.Bottom:null), (c_cornerb1i?c_cornerb1i.Bottom:null), false);

                new ColliderElement(this, false, radialEdge, null, null, (c_filletTop? c_filletTop.Bottom : null ), (c_filletBottom ? c_filletBottom.Bottom : null), true);
                new ColliderElement(this, true, radialEdgei, null, null, (c_filletTopi ? c_filletTopi.Bottom : null), (c_filletBottomi ? c_filletBottomi.Bottom : null), true);

                //ColliderElement.ConnectUniform(this, true, c_filletTop.Bottom, c_filletBottom.Bottom, true, false);
                //ColliderElement.ConnectUniform(this, false, c_filletTopi.Bottom, c_filletBottomi.Bottom, true, false);
            }

            Statistic.ColliderFacesCount = Collider.Vertices.Count;
            Statistic.ColliderVerticesCount = Collider.Faces.Count;
            Collider.ConvertToArrays();
 
            Elements.Clear();
            Elements.AddRange(Top);
            Elements.AddRange(Side);
            Elements.AddRange(Bottom);

            mvertices = new Vector3[vertsCounter];
            mnormals = new Vector3[vertsCounter];
            mtangents = new Vector4[vertsCounter];

            muv = UV0.UpdateMode == UpdateTextureCoordsModeEnum.None ? null : new Vector2[vertsCounter];
            muv2 = UV2.UpdateMode == UpdateTextureCoordsModeEnum.None ? null : new Vector2[vertsCounter];

            SharedMesh.Clear();
            SharedMesh.uv = null;
            SharedMesh.uv2 = null;

            SharedMesh.vertices = mvertices;
            SharedMesh.normals = mnormals;
            ApplyTriangles();

            _MeshFilter.sharedMesh = SharedMesh;

            topology = Topology;
            Statistic.VerticesCount = SharedMesh.vertexCount;
            Statistic.TrianglesCount = SharedMesh.triangles.Length / 3;
            Statistic.Topology.EndSample();
        }

        internal override void SetSizeFromParams() {
            SetSize(ref Size);
            size = Size;
        }

        internal override void CacheSizeParams(int cacheIdx) {
            CachedSizeParams[cacheIdx].Size = Size;
        }

        internal override void SetSizeFromCache(int channelIdx) {
            SetSize(ref CachedSizeParams[channelIdx].Size);
        }

        internal override void UnfoldA(Vector2[] uvs, int cachedSizeChannelIdx, Vector2 offset, Vector2 scale) {
            SizeParams _size = CachedSizeParams[cachedSizeChannelIdx].Size;
            float _radius = _size.Radius;
            float _angleRad = _size.Angle * Mathf.Deg2Rad;
            float radialOuterLength = Size.Radius * _angleRad;
            float radialInnerLength = Size.InnerRadius * _angleRad;
            float clampedFilledRadius = Mathf.Clamp(_size.FilletRadius, 0, _size.Height / 2f);
            clampedFilledRadius = Mathf.Clamp(clampedFilledRadius, 0, (_radius - _size.InnerRadius) / 2f);
            float clampedSliceFilledRadius = Mathf.Clamp(_size.SliceFilletRadius, 0, _radius / 2f);
            clampedSliceFilledRadius = clampedSliceFilledRadius > clampedFilledRadius ? clampedFilledRadius : clampedSliceFilledRadius;
            clampedSliceFilledRadius = Mathf.Clamp(clampedSliceFilledRadius, 0, radialOuterLength / 3f);
            clampedSliceFilledRadius = Mathf.Clamp(clampedSliceFilledRadius, 0, radialInnerLength / 2f);

            float uvRad = _size.Radius - clampedFilledRadius + clampedFilledRadius * r90;

            //filletTop
            Vector2 capsOffsets = new Vector2(uvRad, uvRad + _size.Height);
            filletTop.SetUVPositionAndSize(uvs, clampedFilledRadius, capsOffsets);
            //inner filletTop
            filletTopi.SetUVPositionAndSize(uvs, clampedFilledRadius, capsOffsets);
            // topCap
            CapTop.SetUVTopBottom(uvs, filletTop.Top, filletTopi.Top);

            //corner0
            Vector2 cornertmRight = Vector2.right * clampedFilledRadius * r90;
            Vector2 cornertmUp = Vector2.up * clampedSliceFilledRadius;
            Vector2 cornertmPos = new Vector2(filletTop.Corners[1].UV.x, filletTop.Corners[1].UV.y - clampedSliceFilledRadius);
            Matrix2d cornertm = new Matrix2d(cornertmRight, cornertmUp, cornertmPos);
            cornert0.SetUVRectTM(false, uvs, cornertm);
            //corner0inner
            cornertmPos.x = filletTopi.Corners[1].UV.x;
            cornertmRight *= -1;
            cornertm = new Matrix2d(cornertmRight, cornertmUp, cornertmPos);
            cornert0i.SetUVRectTM(false, uvs, cornertm);
            //hEdge0Top
            hEdge0Top.SetUVLeftRight(uvs, cornert0i.Left, cornert0.Left);

            // corner 1
            Matrix2d corner1tm = new Matrix2d(_size.Angle, filletTop.Corners[2].UV , new Vector2(  clampedFilledRadius * r90,  -clampedSliceFilledRadius));
            corner1tm.Position -= corner1tm.Up;
            cornert1.SetUVRectTM(false, uvs, corner1tm);
           
            // corner 1 inner
            Matrix2d corner1Innertm = new Matrix2d(_size.Angle, filletTopi.Corners[2].UV, new Vector2( -clampedFilledRadius * r90,  -clampedSliceFilledRadius));
            corner1Innertm.Position -= corner1Innertm.Up;
            cornert1i.SetUVRectTM(false, uvs, corner1Innertm);
            //hEdge1Top
            hEdge1Top.SetUVLeftRight(uvs, cornert1.Left, cornert1i.Left );

            Vector2 bottomCapOffset = new Vector2(uvRad * 2.05f, capsOffsets.y*2);
            Vector2 bottomCapMirror = new Vector2(1, -1);
            for (int i = 0; i<Bottom.Count; i++) {
                Bottom[i].CopyUV(false, uvs, Top[i], bottomCapOffset, bottomCapMirror);
            }

            q0.SetUVPlanarXY(uvs, 0, Vector2.zero);
            VerticalEdgeSliceCap0.SetUVPlanarXY(uvs, 0, q0.Corners[3].UV);
            VerticalEdgeSliceCap0i.SetUVPlanarXY(uvs, 0, q0.Corners[0].UV);
            cornerVerticalEdge0.SetUVRect(false, uvs, VerticalEdgeSliceCap0.Corners[3].UV, new Vector2(clampedSliceFilledRadius * r90, _size.Height - clampedFilledRadius * 2));
            cornerVerticalEdge0i.SnapUV(false, uvs, cornerVerticalEdge0, 0, VerticalEdgeSliceCap0i.Corners[3].UV, new Vector2(-1,1));

            radialEdge.SetUVRect(false, uvs, cornerVerticalEdge0.Corners[3].UV, new Vector2(filletTop.cachedRadialLength, _size.Height - clampedFilledRadius * 2));

            cornerVerticalEdge1.SnapUV(false, uvs, cornerVerticalEdge0, 3, radialEdge.Corners[3].UV, new Vector2(-1,1));
            VerticalEdgeSliceCap1.SnapUV(false, uvs, VerticalEdgeSliceCap0, 3, cornerVerticalEdge1.Corners[0].UV, new Vector2(-1, 1));
            q1.SnapUV(false, uvs, q0, 3, VerticalEdgeSliceCap1.Corners[0].UV, new Vector2(-1, 1));
            VerticalEdgeSliceCap1i.SnapUV(false, uvs, VerticalEdgeSliceCap0i, 0, q1.Corners[0].UV, new Vector2(-1, 1));
            cornerVerticalEdge1i.SnapUV(false, uvs, cornerVerticalEdge0i, 0, VerticalEdgeSliceCap1i.Corners[3].UV, new Vector2(-1, 1));

            radialEdgei.SetUVRect(false, uvs, cornerVerticalEdge1i.Corners[3].UV + new Vector2(filletTopi.cachedRadialLength, 0), new Vector2(-filletTopi.cachedRadialLength, _size.Height - clampedFilledRadius * 2));

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
            float _radius = _size.Radius;
            float _angleRad = _size.Angle * Mathf.Deg2Rad;
            float radialOuterLength = Size.Radius * _angleRad;
            float radialInnerLength = Size.InnerRadius * _angleRad;
            float clampedFilledRadius = Mathf.Clamp(_size.FilletRadius, 0, _size.Height / 2f);
            clampedFilledRadius = Mathf.Clamp(clampedFilledRadius, 0, (_radius - _size.InnerRadius) / 2f);
            float clampedSliceFilledRadius = Mathf.Clamp(_size.SliceFilletRadius, 0, _radius / 2f);
            clampedSliceFilledRadius = clampedSliceFilledRadius > clampedFilledRadius ? clampedFilledRadius : clampedSliceFilledRadius;
            clampedSliceFilledRadius = Mathf.Clamp(clampedSliceFilledRadius, 0, radialOuterLength / 3f);
            clampedSliceFilledRadius = Mathf.Clamp(clampedSliceFilledRadius, 0, radialInnerLength / 2f);

            float uvRad = (_size.Radius - clampedFilledRadius) * 1.05f;
            
            CapTop.SetUVPlanarXZ(uvs, new Vector2(uvRad, _size.Height - clampedSliceFilledRadius - clampedFilledRadius*2 + clampedFilledRadius * r180 + uvRad));
            CapBottom.CopyUV(false, uvs, CapTop, new Vector2(uvRad*4, 0), new Vector2(-1, 1));
 
            q0.SetUVPlanarXY(uvs, 0, Vector2.zero );
            cornert0.SetUVPlanarXYUnfoldB(uvs, clampedSliceFilledRadius, q0.Corners[2].UV);
            cornerb0.SetUVPlanarXYUnfoldB(uvs, clampedSliceFilledRadius, q0.Corners[3].UV);
            VerticalEdgeSliceCap0.SetUVTopBottom(uvs, cornerb0.Bottom, cornert0.Bottom);
            
            cornerVerticalEdge0.SetUVTopBottom(uvs, cornerb0.Right, cornert0.Right);
            VerticalEdgeSliceCap0i.SnapUV(false, uvs, VerticalEdgeSliceCap0, 0, q0.Corners[0].UV, new Vector2(-1, 1));
            cornerVerticalEdge0i.SnapUV(false, uvs, cornerVerticalEdge0, 0, VerticalEdgeSliceCap0i.Corners[3].UV, new Vector2(-1, 1));
            cornert0i.SnapUV(false, uvs, cornert0, 0, q0.Corners[1].UV, new Vector2( -1, 1));
            cornerb0i.SnapUV(false, uvs, cornerb0, 0, q0.Corners[0].UV, new Vector2(-1, 1));
            hEdge0Top.SetUVLeftRight(uvs, cornert0i.Left, cornert0.Left);
            hEdge0Bottom.SetUVLeftRight(uvs, cornerb0i.Left, cornerb0.Left);

            radialEdge.SetUVRect(false, uvs, cornerVerticalEdge0.Corners[3].UV, new Vector2(filletTop.cachedRadialLength, _size.Height - clampedFilledRadius * 2));
            filletBottom.SetUVSnapAndSize(false, uvs, 0, cornerVerticalEdge0.Corners[3].UV, new Vector2(filletTop.cachedRadialLength, -clampedFilledRadius * r90));
            filletTop.SetUVSnapAndSize(false, uvs, 0, cornerVerticalEdge0.Corners[2].UV, new Vector2(filletTop.cachedRadialLength, clampedFilledRadius * r90));
 
            cornerVerticalEdge1.SnapUV(false, uvs, cornerVerticalEdge0, 3, radialEdge.Corners[3].UV, new Vector2(-1,1) );
            VerticalEdgeSliceCap1.SnapUV(false, uvs, VerticalEdgeSliceCap0, 2, cornerVerticalEdge1.Corners[1].UV, new Vector2(-1, 1));
            q1.SnapUV(false, uvs, q0, 3, VerticalEdgeSliceCap1.Corners[0].UV, new Vector2(-1, 1));
            VerticalEdgeSliceCap1i.SnapUV(false, uvs, VerticalEdgeSliceCap0i, 0, q1.Corners[0].UV, new Vector2(-1, 1));
            cornert1.SnapUV(false, uvs, cornert0, 0, q1.Corners[2].UV, new Vector2(-1, 1));
            cornerb1.SnapUV(false, uvs, cornerb0, 0, q1.Corners[3].UV, new Vector2(-1, 1));
            cornert1i.SnapUV(false, uvs, cornert0i, 0, q1.Corners[1].UV, new Vector2(-1, 1));
            cornerb1i.SnapUV(false, uvs, cornerb0i, 0, q1.Corners[0].UV, new Vector2(-1, 1));
            hEdge1Top.SetUVLeftRight(uvs,  cornert1.Left, cornert1i.Left );
            hEdge1Bottom.SetUVLeftRight(uvs,  cornerb1.Left, cornerb1i.Left );
            cornerVerticalEdge1i.SnapUV(false, uvs, cornerVerticalEdge0i, 0, cornerb1i.Corners[3].UV, new Vector2(-1, 1));

            radialEdgei.SetUVRect(false, uvs, cornerVerticalEdge1i.Corners[3].UV + new Vector2(filletTopi.cachedRadialLength,0), new Vector2(-filletTopi.cachedRadialLength, _size.Height - clampedFilledRadius * 2));
            filletTopi.SetUVSnapAndSize(false, uvs, 0, radialEdgei.Corners[1].UV, new Vector2(-filletTopi.cachedRadialLength, clampedFilledRadius * r90));
            filletBottomi.SetUVSnapAndSize(false, uvs, 0, radialEdgei.Corners[0].UV, new Vector2( -filletTopi.cachedRadialLength, -clampedFilledRadius * r90));

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

        void SetSize( ref SizeParams _size ) {
            Statistic.Size.BeginSample();
            float _radius = _size.Radius;
            float _innerRadius =   _size.InnerRadius;
            float _angle = _size.Angle;
            float _angleRad = _size.Angle * Mathf.Deg2Rad;

            float radialOuterLength = Size.Radius * _angleRad;
            float radialInnerLength = Size.InnerRadius * _angleRad;

            float clampedFilledRadius = Mathf.Clamp(_size.FilletRadius, 0, _size.Height / 2f);
            clampedFilledRadius = Mathf.Clamp(clampedFilledRadius, 0, (_radius-_size.InnerRadius) / 2f);
            float clampedSliceFilledRadius = Mathf.Clamp(_size.SliceFilletRadius, 0, _radius / 2f);

            clampedSliceFilledRadius = clampedSliceFilledRadius > clampedFilledRadius ? clampedFilledRadius : clampedSliceFilledRadius;
            clampedSliceFilledRadius = Mathf.Clamp(clampedSliceFilledRadius, 0, radialOuterLength / 3f);
            clampedSliceFilledRadius = Mathf.Clamp(clampedSliceFilledRadius, 0, radialInnerLength / 2f);

            _size.yt = _size.Height / 2 + _size.PivotOffset * _size.Height;
            _size.yb = -_size.Height / 2 + _size.PivotOffset * _size.Height;
 
            cornert0.SetPositionAndSize(_radius, clampedFilledRadius, clampedSliceFilledRadius, _size.yt - clampedFilledRadius);

            float xInnerOffset = (_radius - cornert0.Corners[2].Pos.x)*2;
            xInnerOffset = Mathf.Sqrt(Mathf.Pow(_size.InnerRadius, 2) - Mathf.Pow(clampedSliceFilledRadius, 2));
            float yoffset = _size.yt + _size.yb;

            cornert0i.CopyMirrorX(false, cornert0, cornert0.Corners[2].Pos.x + xInnerOffset);
            cornerb0.CopyMirrorY(false, cornert0, yoffset);
            cornerb0i.CopyMirrorY(false, cornert0i, yoffset);
            cornerVerticalEdge0.SetTopBottomSize(  cornert0.Right, cornerb0.Right );
            cornerVerticalEdge0i.SetTopBottomSize(  cornert0i.Right, cornerb0i.Right );
            hEdge0Top.SetLeftRightSize( cornert0i.Left, cornert0.Left );
            hEdge0Bottom.SetLeftRightSize( cornerb0i.Left, cornerb0.Left);
            VerticalEdgeSliceCap0.SetTopBottomSize( cornert0.Bottom, cornerb0.Bottom );
            VerticalEdgeSliceCap0i.SetTopBottomSize( cornert0i.Bottom, cornerb0i.Bottom );
            q0.SetPositionAndSize( cornerb0i.Corners[0], cornert0i.Corners[0], cornert0.Corners[0], cornerb0.Corners[0] );

            cornert1.CopyRotateYMirroredZ(false, cornert0, new Matrix2d(_angle, Vector2.zero) );
            cornert1i.CopyRotateYMirroredZ(false, cornert0i, new Matrix2d(_angle, Vector2.zero) );
            cornerb1.CopyMirrorY(true, cornert1, yoffset);
            cornerb1i.CopyMirrorY(true, cornert1i, yoffset);
            cornerVerticalEdge1.SetTopBottomSize( cornert1.Right, cornerb1.Right);
            cornerVerticalEdge1i.SetTopBottomSize( cornert1i.Right, cornerb1i.Right);
            hEdge1Top.SetLeftRightSize( cornert1.Left, cornert1i.Left);
            hEdge1Bottom.SetLeftRightSize( cornerb1.Left, cornerb1i.Left);
            VerticalEdgeSliceCap1.SetTopBottomSize( cornert1.Bottom, cornerb1.Bottom);
            VerticalEdgeSliceCap1i.SetTopBottomSize( cornert1i.Bottom, cornerb1i.Bottom);
            q1.SetPositionAndSize( cornerb1i.Corners[0], cornert1i.Corners[0], cornert1.Corners[0], cornerb1.Corners[0]);

            filletTop.SetPositionAndSize( _angle, _radius, clampedFilledRadius, clampedSliceFilledRadius, cornert0.Top, cornert1.Top);
            filletTopi.SetPositionAndSize( _angle, Size.InnerRadius, clampedFilledRadius, clampedSliceFilledRadius, cornert0i.Top, cornert1i.Top);

            filletBottom.CopyMirrorY(true, filletTop, yoffset);
            filletBottomi.CopyMirrorY(true, filletTopi, yoffset);
 
            radialEdge.SetTopBottomSize(  filletTop.Bottom, filletBottom.Bottom );
            radialEdgei.SetTopBottomSize(  filletTopi.Bottom, filletBottomi.Bottom );

            CapTop.SetTopBottomSize( filletTopi.Top, filletTop.Top  );
            CapBottom.SetTopBottomSize(  filletBottomi.Top, filletBottom.Top  );

            SharedMesh.vertices = mvertices;
            SharedMesh.normals = mnormals;

            _radius *= 1.01f;
 
            bounds = new Bounds(new Vector3(_radius, 0, 0), Vector3.zero );
            bounds.Encapsulate(new Vector3(Mathf.Cos(_angleRad) * _radius, _size.yt, Mathf.Sin(_angleRad) * _radius));
            bounds.Encapsulate(new Vector3(Mathf.Cos(_angleRad) * _innerRadius, _size.yb, Mathf.Sin(_angleRad) * _innerRadius));
            if (_angle >= 90) {
                bounds.Encapsulate( new Vector3( 0, 0, _radius));
            }
            if (_angle >= 180) {
                bounds.Encapsulate(new Vector3(-_radius, 0, 0));
            }
            if (_angle >= 270) {
                bounds.Encapsulate(new Vector3(0, 0, -_radius));
            }
            bounds.size *= BoundsInflateMultiplier;
            SharedMesh.bounds = bounds;
            Statistic.Size.EndSample();
        }

        internal override bool FlipNormals {
            get {
                return Topology.FlipNormals;
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

        public override float Angle {
            get {
                return Size.Angle;
            }

            set {
                Size.Angle = value;
            }
        }

        public override float Radius {
            get {
                return Size.Radius;
            }

            set {
                Size.Radius = value;
            }
        }

        public override float FilletRadius {
            get {
                return Size.FilletRadius;
            }

            set {
                Size.FilletRadius = value;
            }
        }

        public override float SliceFilletRadius {
            get {
                return Size.SliceFilletRadius;
            }

            set {
                Size.SliceFilletRadius = value;
            }
        }

        internal override void OnDrawGizmosInherited() {
            if (Statistic.DrawObjectGizmo) {
                Gizmos.matrix = transform.localToWorldMatrix;
                Gizmos.color = ObjectGizmoColor;
 
                for (int s = 0; s < Topology.RadiusSegments; s++) {
                    float a = Size.Angle.ToRadians() / Topology.RadiusSegments * s;

                    Vector3 top = new Vector3(Mathf.Cos(a)  , Size.yt, Mathf.Sin(a)  );
                    Vector3 itop = new Vector3(top.x * Size.InnerRadius, Size.yt, top.z * Size.InnerRadius);
                    top = new Vector3(top.x * Size.Radius, top.y, top.z * Size.Radius);
                    Vector3 bottom = new Vector3(top.x, Size.yb, top.z);
                    Vector3 ibottom = new Vector3(itop.x, Size.yb, itop.z);

                    if (s == 0) {
                        Gizmos.DrawLine(itop, top);
                        Gizmos.DrawLine(ibottom, bottom);
                    }

                    a = Size.Angle.ToRadians() / Topology.RadiusSegments * (s + 1);
                    Vector3 ntop = new Vector3(Mathf.Cos(a), Size.yt, Mathf.Sin(a));
                    Vector3 nitop = new Vector3(ntop.x * Size.InnerRadius, Size.yt, ntop.z * Size.InnerRadius);
                    ntop = new Vector3(ntop.x * Size.Radius, ntop.y, ntop.z * Size.Radius);
                    Vector3 nbottom = new Vector3(ntop.x, Size.yb, ntop.z);
                    Vector3 nibottom = new Vector3(nitop.x, Size.yb, nitop.z);

                    if (s == Topology.RadiusSegments - 1) {
                        Gizmos.DrawLine(nitop, ntop);
                        Gizmos.DrawLine(nibottom, nbottom);
                        Gizmos.DrawLine(ntop, nbottom);
                        Gizmos.DrawLine(nitop, nibottom);
                    }

                    Gizmos.DrawLine(itop, ibottom);
                    Gizmos.DrawLine(itop, nitop);
                    Gizmos.DrawLine(ibottom, nibottom);


                    Gizmos.DrawLine(top, ntop);
                    Gizmos.DrawLine(bottom, nbottom);
                    Gizmos.DrawLine(top, bottom);
                    Gizmos.DrawLine(bottom, nbottom);
                }
            }
        }

        public static FilletDonut Create( ) {
            GameObject go = new GameObject("New Fillet Donut");
            FilletDonut result = go.AddComponent<FilletDonut>();
            result.Apply();
            return result;
        }
    }
}
