using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11 {
    [RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
    [ExecuteInEditMode]
    [DefaultExecutionOrder(100)]

    public class FilletPie : RadialPrimitive {

        [System.Serializable]
        public struct SizeParams {
            [Tooltip("Vertical offset about pivot point")]
            [Range(-0.5f, 0.5f)]
            public float PivotOffset;

            [Range(0,360)]
            public float Angle;

            [A_Size("Radius of pie")]
            public float Radius;

            [A_Size("Y dimension")]
            public float Height;

            [A_Size("Radius of edges fillet", 0.2f)]
            public float FilletRadius;

            [A_Size("Radius of pie slice edges fillet", 0.2f)]
            public float SliceFilletRadius;

            public bool SharpCenter;
 
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

            public SizeParams( float angle, float radius, float height, float filletRadius, float sliceFilletRadius  ) {
                Angle = angle;
                PivotOffset = 0;
                Radius = radius;
                Height = height;
                FilletRadius = filletRadius;
                SliceFilletRadius = sliceFilletRadius;
                SharpCenter = false;
                notAnimatableData = new float[2];
 
             }

            public bool IsEquals(SizeParams other) {
               
                return (PivotOffset == other.PivotOffset) && (Angle == other.Angle) && (Radius == other.Radius) && (Height == other.Height)  && (FilletRadius == other.FilletRadius) && (SliceFilletRadius == other.SliceFilletRadius) && (SharpCenter == other.SharpCenter);
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


            [Range(4, 128)]
            public int RadiusSegments;

            [Range(1, 32)]
            public int FilletSegments;

            [Range(1, 32)]
            public int SliceFilletSegments;

            public bool FlipNormals;

            public TopologyParams(int radiusSegments, int filletSegments, int sliceFilletSegments) {
                RadiusSegments = radiusSegments;
                FilletSegments = filletSegments;
                SliceFilletSegments = sliceFilletSegments;
                FlipNormals = false;
                Top = true;
                Side = true;
                Bottom = true;
            }

            public bool IsEquals(TopologyParams other) {
                bool parts = Top == other.Top && Bottom == other.Bottom && Side == other.Side;
                return parts && RadiusSegments == other.RadiusSegments &&   FilletSegments == other.FilletSegments && SliceFilletSegments == other.SliceFilletSegments && FlipNormals == other.FlipNormals;
            }
        }

        [System.Serializable]
        public struct CachedTextureMappingParam {
            public SizeParams Size;
            public TextureChannelParams ChannelParams;

            public CachedTextureMappingParam(int i) {
                Size = new SizeParams(270f, 1f, 0.3f, 0.03f, 0.03f);
                ChannelParams = new TextureChannelParams(MappingMethodEnum.UnfoldA, UpdateTextureCoordsModeEnum.Fixed);
            }
        }

        private SizeParams size;
        public SizeParams Size = new SizeParams(270f, 1f, 0.3f, 0.03f, 0.03f);

        private TopologyParams topology;
        public TopologyParams Topology = new TopologyParams(32, 8,8);

        [HideInInspector]
        public CachedTextureMappingParam[] CachedSizeParams = new CachedTextureMappingParam[2] { new CachedTextureMappingParam(0), new CachedTextureMappingParam(1)};

        PieCap capTop;
        PieCap capBottom;

        PieCorner cornert0;
        PieCorner cornert1;

        PieCorner cornerb0;
        PieCorner cornerb1;

        PieFilletEdge filletTop;
        PieFilletEdge filletBottom;

        PieCenter centerTop;
        PieCenter centerBottom;

        VerticalEdge corner0Edge;
        VerticalEdge corner1Edge;

        VerticalEdge centerEdge;

        VerticalEdge radialEdge;

        HorizontalEdge hEdge0Top;
        HorizontalEdge hEdge1Top;
        HorizontalEdge hEdge0Bottom;
        HorizontalEdge hEdge1Bottom;

        VerticalEdge veSlice0;
        VerticalEdge veSlice1;

        Quad q0;
        Quad q1;

        internal override bool IsTopologyParamsChanged  {
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

        internal override void UpdateConstraints() {
            if (Constraints.Top != null) {
                float yt = Size.Height / 2 + Size.PivotOffset * Size.Height;
                float midAngle = Size.Angle / 2f * Mathf.Deg2Rad;
                float r = Size.Radius * 0.5f ;
                Vector3 pos = new Vector3(Mathf.Cos(midAngle) * r, yt, Mathf.Sin(midAngle) * r);
                Constraints.Top.position = transform.localToWorldMatrix.MultiplyPoint3x4(pos);
                Quaternion rot = Quaternion.Euler(0, -Size.Angle / 2f, 0);
                Constraints.Top.rotation = transform.rotation * rot;
            }

            if (Constraints.Bottom != null) {
                float yb = -Size.Height / 2 + Size.PivotOffset * Size.Height;
                float midAngle = Size.Angle / 2f * Mathf.Deg2Rad;
                float r = Size.Radius * 0.5f;
                Vector3 pos = new Vector3(Mathf.Cos(midAngle) * r, yb, Mathf.Sin(midAngle) * r);
                Constraints.Bottom.position = transform.localToWorldMatrix.MultiplyPoint3x4(pos);
                Quaternion rot = Quaternion.Euler(0, -Size.Angle / 2f, 0);
                Constraints.Bottom.rotation = transform.rotation * rot;
            }

            if (Constraints.Side != null) {
                float mid = size.PivotOffset * Size.Height;
                float midAngle = Size.Angle / 2f * Mathf.Deg2Rad;
                float r = Size.Radius;
                Vector3 pos = new Vector3(Mathf.Cos(midAngle) * r, mid, Mathf.Sin(midAngle) * r);
                Constraints.Side.position = transform.localToWorldMatrix.MultiplyPoint3x4(pos);
                Quaternion rot = Quaternion.Euler(0, -Size.Angle / 2f, 0);
                Constraints.Side.rotation = transform.rotation * rot;
            }

        }

        internal override void UnfoldA(Vector2[] uvs, int cachedSizeChannelIdx, Vector2 offset, Vector2 scale) {
            SizeParams _size = CachedSizeParams[cachedSizeChannelIdx].Size;
            float _radius = _size.Radius;
            float radialLength = _size.Radius * _size.Angle * Mathf.Deg2Rad;
            float clampedFilledRadius = Mathf.Clamp(_size.FilletRadius, 0, _size.Height / 2f);
            float clampedSliceFilledRadius = Mathf.Clamp(_size.SliceFilletRadius, 0, _radius / 2f);
            clampedSliceFilledRadius = clampedSliceFilledRadius > clampedFilledRadius ? clampedFilledRadius : clampedSliceFilledRadius;
            clampedSliceFilledRadius = Mathf.Clamp(clampedSliceFilledRadius, 0, radialLength / 3f);

            float uvRad = _size.Radius - clampedFilledRadius + clampedFilledRadius * r90;
            capTop.SetUVPlanarXZ(uvs, new Vector2(uvRad, uvRad));
            filletTop.SetUVPositionAndSize(uvs, clampedFilledRadius, new Vector2(uvRad, uvRad));

            Vector2 corner0tmRight = Vector2.right * clampedFilledRadius * r90;
            Vector2 corner0tmUp = Vector2.up * clampedSliceFilledRadius;
            Vector2 corner0tmPos = new Vector2(filletTop.Corners[1].UV.x, filletTop.Corners[1].UV.y - clampedSliceFilledRadius);
            Matrix2d corner0tm = new Matrix2d(corner0tmRight, corner0tmUp, corner0tmPos);
            cornert0.SetUVRectTM(false, uvs, corner0tm);
            centerTop.SetUVPositionAndSize(uvs, clampedSliceFilledRadius, new Vector2(uvRad, uvRad) );

            Matrix2d corner1tm = new Matrix2d(_size.Angle, filletTop.Corners[2].UV , new Vector2(  clampedFilledRadius * r90,  -clampedSliceFilledRadius));
            corner1tm.Position -= corner1tm.Up;
            cornert1.SetUVRectTM(false, uvs, corner1tm);
            hEdge0Top.SetUVLeftRight(uvs, centerTop.Right, cornert0.Left);
            hEdge1Top.SetUVLeftRight(uvs, cornert1.Left, centerTop.Left);

            Vector2 bottomCapOffset = new Vector2(uvRad *2.05f  , uvRad * 2);
            Vector2 bottomCapMirror = new Vector2(1, -1);

            capBottom.CopyUV(false, uvs, capTop, bottomCapOffset, bottomCapMirror  );
            filletBottom.CopyUV(false, uvs, filletTop, bottomCapOffset, bottomCapMirror);
            cornerb0.CopyUV(false, uvs, cornert0, bottomCapOffset, bottomCapMirror);
            cornerb1.CopyUV(false, uvs, cornert1, bottomCapOffset, bottomCapMirror);
            centerBottom.CopyUV(false, uvs, centerTop, bottomCapOffset, bottomCapMirror);
            hEdge0Bottom.SetUVLeftRight(uvs, centerBottom.Right, cornerb0.Left);
            hEdge1Bottom.SetUVLeftRight(uvs, cornerb1.Left, centerBottom.Left);

            centerEdge.SetUVRect(false, uvs, new Vector2(0, uvRad * 2.05f), new Vector2(-centerTop.cachedAngle  * clampedSliceFilledRadius, _size.Height - clampedSliceFilledRadius * 2));
            
            q0.SetUVPlanarXY(true, uvs);
            veSlice0.SetUVPlanarXY(true, uvs );
            Vector2 _offset = centerEdge.Corners[3].UV - q0.Corners[0].UV;
            q0.AddUVOffset(uvs, _offset);
            veSlice0.AddUVOffset(uvs, _offset);
            corner0Edge.SetUVRect(false,  uvs, veSlice0.Corners[3].UV,  new Vector2(clampedSliceFilledRadius * Mathf.PI/2, _size.Height - clampedFilledRadius * 2) );
            radialEdge.SetUVRect(false, uvs, corner0Edge.Corners[3].UV, new Vector2(filletTop.cachedRadialLength, _size.Height - clampedFilledRadius * 2));
 
            corner1Edge.SnapUV(false, uvs, corner0Edge, 3, radialEdge.Corners[3].UV,  new Vector2(-1,1));
            veSlice1.SnapUV(false, uvs, veSlice0, 3, corner1Edge.Corners[0].UV, new Vector2(-1, 1));
            q1.SnapUV(false, uvs, q0, 0, veSlice1.Corners[0].UV, new Vector2(1, 1));


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
            float radialLength = Size.Radius * _size.Angle * Mathf.Deg2Rad;
            float clampedFilledRadius = Mathf.Clamp(_size.FilletRadius, 0, _size.Height / 2f);
            float clampedSliceFilledRadius = Mathf.Clamp(_size.SliceFilletRadius, 0, _radius / 2f);
            clampedSliceFilledRadius = clampedSliceFilledRadius > clampedFilledRadius ? clampedFilledRadius : clampedSliceFilledRadius;
            clampedSliceFilledRadius = Mathf.Clamp(clampedSliceFilledRadius, 0, radialLength / 3f);
 
            float uvRad = (_size.Radius - clampedFilledRadius) * 1.05f   ;
            capTop.SetUVPlanarXZ(uvs, new Vector2(uvRad, uvRad));
            capBottom.CopyUV(false, uvs, capTop, new Vector2(uvRad * 2.05f, uvRad * 2), new Vector2(1, -1));
           
            Vector2 centerOffset = Vector2.zero;
 
            centerOffset.y = uvRad * 2 + _size.Height/2 - clampedFilledRadius + clampedFilledRadius * r90;
            centerOffset.x = _size.SharpCenter? 0 : (centerTop.cachedAngle * clampedSliceFilledRadius) / 2;

            Vector2 centerEdgeScale = new Vector2(_size.SharpCenter ? 0 : - centerTop.cachedAngle * clampedSliceFilledRadius, _size.Height - clampedSliceFilledRadius * 2);
            centerEdge.SetUVRect(false, uvs, centerOffset, centerEdgeScale);
            q0.SetUVPlanarXY(uvs, 0, centerEdge.Corners[3].UV );
            cornert0.SetUVPlanarXYUnfoldB(uvs, clampedSliceFilledRadius, q0.Corners[2].UV);
            cornerb0.SetUVPlanarXYUnfoldB(uvs, clampedSliceFilledRadius, q0.Corners[3].UV);

            veSlice0.SetUVTopBottom(uvs, cornerb0.Bottom, cornert0.Bottom) ;
            corner0Edge.SetUVTopBottom(uvs, cornerb0.Right, cornert0.Right);

            Vector2 centerTopPos =   new Vector2( Mathf.LerpUnclamped(centerEdge.Corners[1].UV.x, centerEdge.Corners[2].UV.x, 0.5f), centerEdge.Corners[2].UV.y);
            centerTop.SetUVPositionAndSizeUnfoldB(uvs, clampedSliceFilledRadius, _size.Angle, centerTopPos, _size.SharpCenter ) ;

            centerBottom.SnapUV(false, uvs, centerTop, 0, centerEdge.Corners[0].UV, new Vector2(1,-1)) ;
            hEdge0Top.SetUVLeftRight(uvs, centerTop.Right, cornert0.Left);
            hEdge0Bottom.SetUVLeftRight(uvs, centerBottom.Right, cornerb0.Left);
 
            Vector2 mirrorOffset = new Vector2(centerOffset.x + centerTop.Corners[3].UV.x, 0);
            cornert1.CopyUV(false, uvs, cornert0, mirrorOffset, new Vector2(-1, 1));
            cornerb1.CopyUV(false, uvs, cornerb0, mirrorOffset, new Vector2(-1, 1));
            q1.SnapUV(false, uvs, q0, 0, cornerb1.Corners[0].UV, Vector2.one) ;

            hEdge1Top.SetUVLeftRight(uvs, cornert1.Left, centerTop.Left );
            hEdge1Bottom.SetUVLeftRight(uvs, cornerb1.Left, centerBottom.Left );
            veSlice1.SetUVTopBottom(uvs, cornerb1.Bottom, cornert1.Bottom);
            corner1Edge.SetUVTopBottom(uvs, cornerb1.Right, cornert1.Right);

            radialEdge.SetUVRect(false, uvs, corner0Edge.Corners[3].UV, new Vector2(filletTop.cachedRadialLength, _size.Height - clampedFilledRadius * 2));
            filletBottom.SetUVSnapAndSize(false, uvs, 0, corner0Edge.Corners[3].UV, new Vector2(filletTop.cachedRadialLength, -clampedFilledRadius * r90));
            filletTop.SetUVSnapAndSize(false, uvs, 0, corner0Edge.Corners[2].UV, new Vector2(filletTop.cachedRadialLength, clampedFilledRadius * r90));

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

        internal override void SetTopology() {

            Statistic.Topology.BeginSample();
            vertsCounter = 0;
            Faces.Clear();
            MEdges.Clear();
            Top.Clear();
            Side.Clear();
            Bottom.Clear();

            int radSegments = Topology.RadiusSegments = Mathf.Clamp(Topology.RadiusSegments, 4, 128);
            int filletSegments = Topology.FilletSegments = Mathf.Clamp(Topology.FilletSegments, 1, 32);
            int sliceFilletSegments = Topology.SliceFilletSegments = Mathf.Clamp(Topology.SliceFilletSegments, 1, 32);

            capTop = new PieCap(Topology.Top, this, Top, false, sliceFilletSegments, radSegments);
            capBottom = new PieCap(Topology.Bottom, this, Bottom, true, sliceFilletSegments, radSegments);

            cornert0 = new PieCorner(Topology.Top, this, Top, false, filletSegments, sliceFilletSegments);
            cornert1 = new PieCorner(Topology.Top, this, Top, true, filletSegments, sliceFilletSegments);
            cornerb0 = new PieCorner(Topology.Bottom, this, Bottom, true, filletSegments, sliceFilletSegments);
            cornerb1 = new PieCorner(Topology.Bottom, this, Bottom, false, filletSegments, sliceFilletSegments);

            filletTop = new PieFilletEdge(Topology.Top, this, Top, false, filletSegments, radSegments);
            filletBottom = new PieFilletEdge(Topology.Bottom, this, Bottom, true,  filletSegments, radSegments);
           
            centerTop = new PieCenter(Topology.Top, this, Top, false, sliceFilletSegments );
            centerBottom = new PieCenter(Topology.Bottom, this, Bottom, true, sliceFilletSegments );

            centerEdge = new VerticalEdge(Topology.Side, this, Side, false, sliceFilletSegments );            
            corner0Edge = new VerticalEdge(Topology.Side,  this, Side, false, sliceFilletSegments);
            corner1Edge = new VerticalEdge(Topology.Side, this, Side, true, sliceFilletSegments);
            radialEdge = new VerticalEdge(Topology.Side, this, Side, false, radSegments);

            hEdge0Top = new HorizontalEdge(Topology.Top, this, Top, false, sliceFilletSegments, false);
            hEdge1Top = new HorizontalEdge(Topology.Top, this, Top, false, sliceFilletSegments, false);
            hEdge0Bottom = new HorizontalEdge(Topology.Bottom, this, Bottom, true, sliceFilletSegments, false);
            hEdge1Bottom = new HorizontalEdge(Topology.Bottom, this, Bottom, true,  sliceFilletSegments, false);

            veSlice0 = new VerticalEdge(Topology.Side, this, Side, false, filletSegments);
            veSlice1 = new VerticalEdge(Topology.Side, this, Side, true, filletSegments);

            q0 = new Quad(Topology.Side, this, Side, false, 0);
            q1 = new Quad(Topology.Side, this, Side, false, 0);

            Collider.ClearTopology(this);

            ColliderElement c_centerTop = null;
            ColliderElement c_cornert0 = null;
            ColliderElement c_cornert1 = null;
            ColliderElement c_filletTop = null;
            ColliderElement c_cornerb0 = null;
            ColliderElement c_cornerb1 = null;
            ColliderElement c_filletBottom = null;
            ColliderElement c_centerBottom = null;

            if (Topology.Top) {
                c_centerTop = new ColliderElement(this, false, centerTop, null, null, null, null, true);
                c_cornert0 = new ColliderElement(this, false, cornert0, null, null, null, null, true);
                c_cornert1 = new ColliderElement(this, true, cornert1, null, null, null, null, true);
                c_filletTop = new ColliderElement(this, false, filletTop, c_cornert0.TopReversed, c_cornert1.TopReversed, null, null, true);

                ColliderElement.ConnectUniform(this, true, c_centerTop.Right, c_cornert0.Left, true, true);
                ColliderElement.ConnectUniform(this, true, c_cornert1.Left, c_centerTop.Left, true, true);
                ColliderElement.ConnectIrregular(this, false, c_centerTop.TopReversed, c_filletTop.Top, false);
            }

            if (Topology.Bottom) {
                c_cornerb0 = new ColliderElement(this, true, cornerb0, null, null, null, null, true);
                c_cornerb1 = new ColliderElement(this, false, cornerb1, null, null, null, null, true);
                c_filletBottom = new ColliderElement(this, true, filletBottom, c_cornerb0.TopReversed, c_cornerb1.TopReversed, null, null, true);
                c_centerBottom = new ColliderElement(this, true, centerBottom, null, null, null, null, true);

                ColliderElement.ConnectUniform(this, false, c_centerBottom.Right, c_cornerb0.Left, true, true);
                ColliderElement.ConnectUniform(this, false, c_cornerb1.Left, c_centerBottom.Left, true, true);
                ColliderElement.ConnectIrregular(this, true, c_centerBottom.TopReversed, c_filletBottom.Top, false);
            }
 
            if (Topology.Side) {
                new ColliderElement(this, false, corner0Edge, null, null,   c_cornert0 ? c_cornert0.Right : null, c_cornerb0 ? c_cornerb0.Right : null, true);
                new ColliderElement(this, true, corner1Edge, null, null, c_cornert1 ? c_cornert1.Right : null, c_cornerb1 ? c_cornerb1.Right : null, true);
                new ColliderElement(this, false, radialEdge, null, null,  c_filletTop  ? c_filletTop.Bottom : null, c_filletBottom ? c_filletBottom.Bottom : null, true);

                new ColliderElement(this, false, veSlice0, null, null, c_cornert0 ? c_cornert0.Bottom : null, c_cornerb0 ? c_cornerb0.Bottom : null, true);
                new ColliderElement(this, true, veSlice1, null, null, c_cornert1 ? c_cornert1.Bottom : null, c_cornerb1 ? c_cornerb1.Bottom : null, true);

                new ColliderElement(this, false, centerEdge, null, null, c_centerTop ? c_centerTop.Bottom : null, c_centerBottom ? c_centerBottom.Bottom : null, true);
                new ColliderElement(this, false, q0, (c_centerBottom ? c_centerBottom.Corners[3] : null), (c_centerTop ? c_centerTop.Corners[3] : null), (c_cornert0 ? c_cornert0.Corners[0] : null), (c_cornerb0 ? c_cornerb0.Corners[0] : null)   );
                new ColliderElement(this, false, q1, (c_cornerb1 ? c_cornerb1.Corners[0] : null) , (c_cornert1 ? c_cornert1.Corners[0] : null), (c_centerTop ? c_centerTop.Corners[0] : null), (c_centerBottom ? c_centerBottom.Corners[0] : null) );
            }

            Statistic.ColliderFacesCount = Collider.Faces.Count;
            Statistic.ColliderVerticesCount = Collider.Vertices.Count;
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

            Statistic.VerticesCount = SharedMesh.vertexCount;
            Statistic.TrianglesCount = SharedMesh.triangles.Length / 3;

            topology = Topology;
            Statistic.Topology.EndSample();
        }

        void SetSize(ref SizeParams _size) {
            Statistic.Size.BeginSample();
             
            float _radius = _size.Radius;
            float _angle = _size.Angle;
            float _angleRad = _size.Angle * Mathf.Deg2Rad;
            float radialLength = Size.Radius * Size.Angle * Mathf.Deg2Rad;
 
            float clampedFilledRadius = Mathf.Clamp(_size.FilletRadius, 0, _size.Height / 2f);
            float clampedSliceFilledRadius = Mathf.Clamp(_size.SliceFilletRadius, 0, _radius / 2f);

            clampedSliceFilledRadius = clampedSliceFilledRadius > clampedFilledRadius ? clampedFilledRadius : clampedSliceFilledRadius;
            clampedSliceFilledRadius = Mathf.Clamp(clampedSliceFilledRadius, 0, radialLength / 3f);

            _size.yt = _size.Height / 2 + _size.PivotOffset * _size.Height;
            _size.yb = -_size.Height / 2 + _size.PivotOffset * _size.Height;

            cornert0.SetPositionAndSize( _radius, clampedFilledRadius, clampedSliceFilledRadius, _size.yt - clampedFilledRadius);
            cornerb0.CopyMirrorY(true, cornert0, _size.yt + _size.yb);

            cornert1.CopyRotateYMirroredZ(false, cornert0, new Matrix2d(_angle, Vector2.zero));
            cornerb1.CopyMirrorY(true, cornert1, _size.yt + _size.yb);

            filletTop.SetPositionAndSize( _angle, _radius, clampedFilledRadius, clampedSliceFilledRadius, cornert0.Top, cornert1.Top);
            filletBottom.CopyMirrorY(true, filletTop, _size.yt + _size.yb);

            centerTop.SetPositionAndSize( _angle, clampedSliceFilledRadius, _size.yt - clampedSliceFilledRadius, _size.SharpCenter);
            centerBottom.CopyMirrorY(true, centerTop, _size.yt + _size.yb);

            capTop.SetPositionAndSize( centerTop.Top, filletTop.Top);
            capBottom.SetPositionAndSize(  centerBottom.Top, filletBottom.Top);

            corner0Edge.SetTopBottomSize(cornert0.Right, cornerb0.Right);
 
            corner1Edge.SetTopBottomSize( cornert1.Right, cornerb1.Right);
            centerEdge.SetTopBottomSize(  centerTop.Bottom, centerBottom.Bottom );
            radialEdge.SetTopBottomSize(  filletTop.Bottom, filletBottom.Bottom );

            hEdge0Top.SetLeftRightSize( centerTop.Right, cornert0.Left );
            hEdge1Top.SetLeftRightSize( cornert1.Left, centerTop.Left  );

            hEdge0Bottom.SetLeftRightSize( centerBottom.Right, cornerb0.Left);
            hEdge1Bottom.SetLeftRightSize( cornerb1.Left, centerBottom.Left);

            veSlice0.SetTopBottomSize( cornert0.Bottom, cornerb0.Bottom  );
            veSlice1.SetTopBottomSize(  cornert1.Bottom, cornerb1.Bottom  );

            q0.SetPositionAndSize( centerBottom.Corners[3], centerTop.Corners[3], cornert0.Corners[0], cornerb0.Corners[0]);
            q1.SetPositionAndSize( cornerb1.Corners[0], cornert1.Corners[0],  centerTop.Corners[0], centerBottom.Corners[0]  );

            _radius *= BoundsInflateMultiplier;

            SharedMesh.vertices = mvertices;
            SharedMesh.normals = mnormals;
            bounds = new Bounds(new Vector3(_radius, 0, 0), Vector3.zero);
           
            bounds.Encapsulate(new Vector3(Mathf.Cos(_angleRad) * _radius, _size.yt, Mathf.Sin(_angleRad) * _radius));
             bounds.Encapsulate(new Vector3(0, _size.yb,0));
 
            if (_angle >= 90) {
                bounds.Encapsulate(new Vector3(0, 0, _radius));
            }
            if (_angle >= 180) {
                bounds.Encapsulate(new Vector3(-_radius, 0, 0));
            }
            if (_angle >= 270) {
                bounds.Encapsulate(new Vector3(0, 0, -_radius));
            }

            bounds.size = bounds.size * BoundsInflateMultiplier;

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
                Vector3 centerTop = new Vector3(0, Size.yt, 0);
                Vector3 centerBottom = new Vector3(0, Size.yb, 0);

                for (int s = 0; s < Topology.RadiusSegments; s++) {
                    float a = Size.Angle.ToRadians() / Topology.RadiusSegments * s;
                    Vector3 top = new Vector3(Mathf.Cos(a)* Size.Radius, Size.yt, Mathf.Sin(a) * Size.Radius);
                    Vector3 bottom = new Vector3( top.x, Size.yb, top.z);

                    if (s == 0) {

                        Gizmos.DrawLine(centerTop, top);
                        Gizmos.DrawLine(centerBottom, bottom);
                        Gizmos.DrawLine(centerTop, centerBottom);
                    }

                    a =  Size.Angle.ToRadians() / Topology.RadiusSegments * (s+1);
                    Vector3 ntop = new Vector3(Mathf.Cos(a) * Size.Radius, Size.yt, Mathf.Sin(a) * Size.Radius);
                    Vector3 nbottom = new Vector3(ntop.x, Size.yb, ntop.z);

                    if (s == Topology.RadiusSegments - 1) {

                        Gizmos.DrawLine(centerTop, ntop);
                        Gizmos.DrawLine(centerBottom, nbottom);
                        Gizmos.DrawLine(ntop, nbottom);
                    }

                    Gizmos.DrawLine(top, ntop);
                    Gizmos.DrawLine(bottom, nbottom);
                    Gizmos.DrawLine(top, bottom);
                    Gizmos.DrawLine(bottom, nbottom);
                }
            }
        }

        public static FilletPie Create() {
            GameObject go = new GameObject("New Fillet Pie");
            FilletPie result = go.AddComponent<FilletPie>();
            result.Apply();
            return result;
        }

    }
}
