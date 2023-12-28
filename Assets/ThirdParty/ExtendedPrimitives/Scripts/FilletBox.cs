using ExtendedPrimitives_11.Internal;
using UnityEngine;


namespace ExtendedPrimitives_11 {

    [RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
    [ExecuteInEditMode]
    [DefaultExecutionOrder(100)]
    public class FilletBox : ExtendedPrimitive {

        [System.Serializable]
        public struct SizeParams {
            [Tooltip("Vertical offset about pivot point")]
            [Range(-0.5f, 0.5f)]
            public float PivotOffset;

            [A_Size("X dimension")]
            public float Width;

            [A_Size("Y dimension")]
            public float Height;

            [A_Size("Z dimension")]
            public float Length;

            [A_Size("Radius of edges fillet")]
            public float FilletRadius;

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

            public float x {
                get {
                    return notAnimatableData[2];
                }

                set {
                    notAnimatableData[2] = value;
                }
            }

            public float y {
                get {
                    return notAnimatableData[3];
                }

                set {
                    notAnimatableData[3] = value;
                }
            }

            public float z {
                get {
                    return notAnimatableData[4];
                }

                set {
                    notAnimatableData[4] = value;
                }
            }

            public SizeParams(float length, float width, float height, float filletRadius ) {
                PivotOffset = 0;
                Length = length;
                Width = width;
                Height = height;
                FilletRadius = filletRadius;
                notAnimatableData = new float[5];
             }

            public bool IsEquals(SizeParams other) {
                return (PivotOffset == other.PivotOffset) && (Width == other.Width) && (Height == other.Height) && (Length == other.Length) && (FilletRadius == other.FilletRadius);
            }
        }

        [System.Serializable]
        public struct TopologyParams {
            public bool Top;
            public bool Side;
            public bool Bottom;


            [Range(1, 32)]
            public int FilletSegments;
            public bool FlipNormals;

            public TopologyParams(int filletSegments) {
                FilletSegments = filletSegments;
                FlipNormals = false;
                Top = true;
                Side = true;
                Bottom = true;
            }

            public bool IsEquals(TopologyParams other) {
                return FilletSegments == other.FilletSegments && FlipNormals == other.FlipNormals && Top == other.Top && Side == other.Side && Bottom == other.Bottom;
            }
        }

        [System.Serializable]
        public struct CachedTextureMappingParam {
            public SizeParams Size;
            public TextureChannelParams ChannelParams;

            public CachedTextureMappingParam(int i) {
                Size = new SizeParams(1f, 1f, 1f, 0.1f);
                ChannelParams = new TextureChannelParams(MappingMethodEnum.Planar, UpdateTextureCoordsModeEnum.None);
            }
        }

        private SizeParams size;
        public SizeParams Size = new SizeParams(1f, 1f, 1f, 0.1f );

        private TopologyParams topology;
        public TopologyParams Topology = new TopologyParams(4);

        OctaCorner ct0;
        OctaCorner ct1;
        OctaCorner ct2;
        OctaCorner ct3;

        OctaCorner cb0;
        OctaCorner cb1;
        OctaCorner cb2;
        OctaCorner cb3;

        Quad quadTop;
        Quad quadBottom;
        Quad quad0;
        Quad quad1;
        Quad quad2;
        Quad quad3;

        VerticalEdge ve0;
        VerticalEdge ve1;
        VerticalEdge ve2;
        VerticalEdge ve3;

        HorizontalEdge htEdge0;
        HorizontalEdge htEdge1;
        HorizontalEdge htEdge2;
        HorizontalEdge htEdge3;

        HorizontalEdge hbEdge0;
        HorizontalEdge hbEdge1;
        HorizontalEdge hbEdge2;
        HorizontalEdge hbEdge3;

        UVGuidesGrid unfoldAgrid = new UVGuidesGrid(9, 8);
        UVGuidesGrid unfoldBgrid = new UVGuidesGrid(9, 6);

        [HideInInspector]
        public CachedTextureMappingParam[] CachedSizeParams = new CachedTextureMappingParam[2] { new CachedTextureMappingParam(0), new CachedTextureMappingParam(1) };

        internal override bool IsTopologyParamsChanged  {
            get {
                return !Topology.IsEquals(topology) || ct0 == null;
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

        internal override void SetSizeFromCache( int channelIdx) {
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
            Top.Clear();
            Side.Clear();
            Bottom.Clear();

            int segments = Topology.FilletSegments;
 
            vertsCounter = 0;

            ct0 = new OctaCorner(Topology.Top, this, Top, true, false, segments );
            ct1 = new OctaCorner(Topology.Top, this, Top, false, false, segments );
            ct2 = new OctaCorner(Topology.Top, this, Top, false, false, segments );
            ct3 = new OctaCorner(Topology.Top, this, Top, false, false, segments );

            cb0 = new OctaCorner(Topology.Bottom, this, Bottom, true, true, segments );
            cb1 = new OctaCorner(Topology.Bottom, this, Bottom, false, true, segments );
            cb2 = new OctaCorner(Topology.Bottom, this, Bottom, false, true, segments );
            cb3 = new OctaCorner(Topology.Bottom, this, Bottom, false, true, segments );

            ve0 = new VerticalEdge(Topology.Side, this, Side, false, segments );
            ve1 = new VerticalEdge(Topology.Side, this, Side, false, segments );
            ve2 = new VerticalEdge(Topology.Side, this, Side, false, segments );
            ve3 = new VerticalEdge(Topology.Side, this, Side, false, segments );
           
            quadTop = new Quad(Topology.Top, this, Top, false, 1f);
            quadBottom = new Quad(Topology.Bottom, this, Bottom, true, 1f);
            quad0 = new Quad(Topology.Side,  this, Side, false, 0);
            quad1 = new Quad(Topology.Side, this, Side, false, 0);
            quad2 = new Quad(Topology.Side, this, Side, false, 0);
            quad3 = new Quad(Topology.Side, this, Side, false, 0);

            htEdge0 = new HorizontalEdge(Topology.Top, this, Top, false, segments , false );
            htEdge1 = new HorizontalEdge(Topology.Top, this, Top, false, segments, false);
            htEdge2 = new HorizontalEdge(Topology.Top, this, Top, false, segments, false);
            htEdge3 = new HorizontalEdge(Topology.Top, this, Top, false, segments, false);

            hbEdge0 = new HorizontalEdge(Topology.Bottom, this, Bottom, true, segments, false);
            hbEdge1 = new HorizontalEdge(Topology.Bottom, this, Bottom, true, segments, false);
            hbEdge2 = new HorizontalEdge(Topology.Bottom, this, Bottom, true, segments, false);
            hbEdge3 = new HorizontalEdge(Topology.Bottom, this, Bottom, true, segments, false);

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

            ColliderVertex[] c_ct0Bottom = null;
            ColliderVertex[] c_ct1Bottom = null;
            ColliderVertex[] c_ct2Bottom = null;
            ColliderVertex[] c_ct3Bottom = null;

            ColliderVertex[] c_cb0Bottom = null;
            ColliderVertex[] c_cb1Bottom = null;
            ColliderVertex[] c_cb2Bottom = null;
            ColliderVertex[] c_cb3Bottom = null;

            if (Topology.Top) {
                ColliderElement c_ct0 = new OctaCornerCollider(this, false, ct0);
                ColliderElement c_ct1 = new OctaCornerCollider(this, false, ct1);
                ColliderElement c_ct2 = new OctaCornerCollider(this, false, ct2);
                ColliderElement c_ct3 = new OctaCornerCollider(this, false, ct3);

                c_ct0Bottom = c_ct0.Bottom;
                c_ct1Bottom = c_ct1.Bottom;
                c_ct2Bottom = c_ct2.Bottom;
                c_ct3Bottom = c_ct3.Bottom;


                ColliderElement.ConnectUniform(this, true, c_ct0.Right, c_ct1.Left, true, false);
                ColliderElement.ConnectUniform(this, true, c_ct1.Right, c_ct2.Left, true, false);
                ColliderElement.ConnectUniform(this, true, c_ct2.Right, c_ct3.Left, true, false);
                ColliderElement.ConnectUniform(this, true, c_ct3.Right, c_ct0.Left, true, false);

                ColliderElement.ConnectQuad(this, true, c_ct0.Top[0], c_ct1.Top[0], c_ct2.Top[0], c_ct3.Top[0]);
            }

            if (Topology.Bottom) {
                ColliderElement c_cb0 = new OctaCornerCollider(this, true, cb0);
                ColliderElement c_cb1 = new OctaCornerCollider(this, true, cb1);
                ColliderElement c_cb2 = new OctaCornerCollider(this, true, cb2);
                ColliderElement c_cb3 = new OctaCornerCollider(this, true, cb3);

                c_cb0Bottom = c_cb0.Bottom;
                c_cb1Bottom = c_cb1.Bottom;
                c_cb2Bottom = c_cb2.Bottom;
                c_cb3Bottom = c_cb3.Bottom;

                ColliderElement.ConnectUniform(this, false, c_cb0.Right, c_cb1.Left, true, false);
                ColliderElement.ConnectUniform(this, false, c_cb1.Right, c_cb2.Left, true, false);
                ColliderElement.ConnectUniform(this, false, c_cb2.Right, c_cb3.Left, true, false);
                ColliderElement.ConnectUniform(this, false, c_cb3.Right, c_cb0.Left, true, false);

                ColliderElement.ConnectQuad(this, false, c_cb0.Top[0], c_cb1.Top[0], c_cb2.Top[0], c_cb3.Top[0]);
            }

            if (Topology.Side) {
                ColliderElement c_ve0 = new ColliderElement(this, false, ve0, null, null, c_ct0Bottom, c_cb0Bottom, true);
                ColliderElement c_ve1 = new ColliderElement(this, false, ve1, null, null, c_ct1Bottom, c_cb1Bottom, true);
                ColliderElement c_ve2 = new ColliderElement(this, false, ve2, null, null, c_ct2Bottom, c_cb2Bottom, true);
                ColliderElement c_ve3 = new ColliderElement(this, false, ve3, null, null, c_ct3Bottom, c_cb3Bottom, true);

                ColliderElement.ConnectQuad(this, false, c_ve0.Corners[3], c_ve0.Corners[2], c_ve1.Corners[1], c_ve1.Corners[0]);
                ColliderElement.ConnectQuad(this, false, c_ve1.Corners[3], c_ve1.Corners[2], c_ve2.Corners[1], c_ve2.Corners[0]);
                ColliderElement.ConnectQuad(this, false, c_ve2.Corners[3], c_ve2.Corners[2], c_ve3.Corners[1], c_ve3.Corners[0]);
                ColliderElement.ConnectQuad(this, false, c_ve3.Corners[3], c_ve3.Corners[2], c_ve0.Corners[1], c_ve0.Corners[0]);
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

        void SetSize( ref SizeParams _size )  {
            Statistic.Size.BeginSample();
          
            float r = _size.FilletRadius;
            float halfHeight = _size.Height / 2;
            float halfWidth = _size.Width / 2;
            float halfLength = _size.Length / 2;

            r = halfHeight < r ? halfHeight : r;
            r = halfWidth < r ? halfWidth : r;
            r = halfLength < r ? halfLength : r;

            _size.x = halfWidth - r;
            _size.y = halfHeight - r;
            _size.yt = _size.y + _size.PivotOffset * _size.Height;
            _size.yb = -_size.y + _size.PivotOffset * _size.Height;
            _size.z = halfLength - r;

            ct0.SetPositionAndSize(ct0, new Vector3(_size.x, _size.yt, _size.z), 0, r);
            ct1.SetPositionAndSize(ct0, new Vector3(-_size.x, _size.yt, _size.z), 90, r);
            ct2.SetPositionAndSize(ct0, new Vector3(-_size.x, _size.yt, -_size.z), 180f, r);
            ct3.SetPositionAndSize(ct0, new Vector3(_size.x, _size.yt, -_size.z), 270f, r);

            cb0.SetPositionAndSize(cb0, new Vector3(_size.x, _size.yb, _size.z), 0, r);
            cb1.SetPositionAndSize(cb0, new Vector3(-_size.x, _size.yb, _size.z), 90, r);
            cb2.SetPositionAndSize(cb0, new Vector3(-_size.x, _size.yb, -_size.z), 180f, r);
            cb3.SetPositionAndSize(cb0, new Vector3(_size.x, _size.yb, -_size.z), 270f, r);

            ve0.SetTopBottomSize( ct0.Bottom, cb0.Bottom );
            ve1.SetTopBottomSize( ct1.Bottom, cb1.Bottom );
            ve2.SetTopBottomSize( ct2.Bottom, cb2.Bottom );
            ve3.SetTopBottomSize( ct3.Bottom, cb3.Bottom );

            quadTop.SetPositionAndSize(  ct2.Corners[1], ct1.Corners[1], ct0.Corners[1], ct3.Corners[1]);
            quadBottom.SetPositionAndSize( cb2.Corners[1], cb1.Corners[1], cb0.Corners[1], cb3.Corners[1]);

            quad0.SetPositionAndSize( ve0.Corners[3], ve0.Corners[2], ve1.Corners[1], ve1.Corners[0]);
            quad1.SetPositionAndSize( ve1.Corners[3], ve1.Corners[2], ve2.Corners[1], ve2.Corners[0]);
            quad2.SetPositionAndSize( ve2.Corners[3], ve2.Corners[2], ve3.Corners[1], ve3.Corners[0]);
            quad3.SetPositionAndSize( ve3.Corners[3], ve3.Corners[2], ve0.Corners[1], ve0.Corners[0]);

            htEdge0.SetLeftRightSize( ct0.Right, ct1.Left);
            htEdge1.SetLeftRightSize( ct1.Right, ct2.Left);
            htEdge2.SetLeftRightSize( ct2.Right, ct3.Left);
            htEdge3.SetLeftRightSize( ct3.Right, ct0.Left);

            hbEdge0.SetLeftRightSize( cb0.Right, cb1.Left);
            hbEdge1.SetLeftRightSize( cb1.Right, cb2.Left);
            hbEdge2.SetLeftRightSize( cb2.Right, cb3.Left);
            hbEdge3.SetLeftRightSize( cb3.Right, cb0.Left);
 
            SharedMesh.vertices = mvertices;
            SharedMesh.normals = mnormals;
			bounds = new Bounds ();
			bounds.Encapsulate( new Vector3(_size.Width/2, _size.Height/2 + _size.Height* _size.PivotOffset, _size.Length/2));
			bounds.Encapsulate( new Vector3(-_size.Width/2, -_size.Height/2 + _size.Height* _size.PivotOffset, -_size.Length/2));
			SharedMesh.bounds = bounds;

            Statistic.Size.EndSample();
 
        }

        internal override void UnfoldA(Vector2[] uvs, int cachedSizeChannelIdx, Vector2 offset, Vector2 scale) {
            SizeParams _size = CachedSizeParams[cachedSizeChannelIdx].Size;
  
            unfoldAgrid.Clear();
            float r = _size.FilletRadius;
            float halfHeight = _size.Height / 2;
            float halfWidth = _size.Width / 2;
            float halfLength = _size.Length / 2;

            r = halfHeight < r ? halfHeight : r;
            r = halfWidth < r ? halfWidth : r;
            r = halfLength < r ? halfLength : r;

            float rl = r * r90;
            float xl = _size.Width - r * 2;
            float zl = _size.Length - r * 2;
            float yl = _size.Height - r * 2;

            unfoldAgrid.AddX(0);  //0
            unfoldAgrid.AddX(rl); //1
            unfoldAgrid.AddX(xl); //2
            unfoldAgrid.AddX(rl); //3
            unfoldAgrid.AddX(zl); //4
            unfoldAgrid.AddX(rl); //5
            unfoldAgrid.AddX(xl); //6
            unfoldAgrid.AddX(rl); //7
            unfoldAgrid.AddX(zl); //8

            unfoldAgrid.AddY(0);//0
            unfoldAgrid.AddY(rl); //1
            unfoldAgrid.AddY(zl); //2
            unfoldAgrid.AddY(rl); //3
            unfoldAgrid.AddY(yl); //4
            unfoldAgrid.AddY(rl); //5
            unfoldAgrid.AddY(zl); //6
            unfoldAgrid.AddY(rl); //7

            ct0.SetUVPositionAndSize(ct0, uvs, unfoldAgrid[6, 6], rl, 0, 1);
            ct1.SetUVPositionAndSize(ct0, uvs, unfoldAgrid[5, 6], rl, 90, 1);
            ct2.SetUVPositionAndSize(ct0, uvs, unfoldAgrid[5, 5], rl, 180, 1);
            ct3.SetUVPositionAndSize(ct0, uvs, unfoldAgrid[6, 5], rl, 270, 1);

            cb0.SetUVPositionAndSize(ct0, uvs, unfoldAgrid[6, 1], rl, 180, -1);
            cb1.SetUVPositionAndSize(ct0, uvs, unfoldAgrid[5, 1], rl, 270, -1);
            cb2.SetUVPositionAndSize(ct0, uvs, unfoldAgrid[5, 2], rl, 0, -1);
            cb3.SetUVPositionAndSize(ct0, uvs, unfoldAgrid[6, 2], rl, 90, -1);

            ve0.SetUVRect(false, uvs, unfoldAgrid[0, 3], new Vector2(rl, yl));
            ve1.SetUVRect(false, uvs, unfoldAgrid[2, 3], new Vector2(rl, yl));
            ve2.SetUVRect(false, uvs, unfoldAgrid[4, 3], new Vector2(rl, yl));
            ve3.SetUVRect(false, uvs, unfoldAgrid[6, 3], new Vector2(rl, yl));

            quadBottom.SetUVPositionAndSize(uvs, cb2.Corners[1], cb1.Corners[1], cb0.Corners[1], cb3.Corners[1]);
            quadTop.SetUVPositionAndSize(uvs, ct2.Corners[1], ct1.Corners[1], ct0.Corners[1], ct3.Corners[1]);

            quad0.SetUVPositionAndSize(uvs, ve0.Corners[3], ve0.Corners[2], ve1.Corners[1], ve1.Corners[0]);
            quad1.SetUVPositionAndSize(uvs, ve1.Corners[3], ve1.Corners[2], ve2.Corners[1], ve2.Corners[0]);
            quad2.SetUVPositionAndSize(uvs, ve2.Corners[3], ve2.Corners[2], ve3.Corners[1], ve3.Corners[0]);
            quad3.SetUVPositionAndSize(uvs, unfoldAgrid[7, 3], unfoldAgrid[7, 4], unfoldAgrid[8, 4], unfoldAgrid[8, 3]);

            htEdge0.SetUVLeftRight(uvs, ct0.Right, ct1.Left);
            htEdge1.SetUVLeftRight(uvs, ct1.Right, ct2.Left);
            htEdge2.SetUVLeftRight(uvs, ct2.Right, ct3.Left);
            htEdge3.SetUVLeftRight(uvs, ct3.Right, ct0.Left);

            hbEdge0.SetUVLeftRight(uvs, cb0.Right, cb1.Left);
            hbEdge1.SetUVLeftRight(uvs, cb1.Right, cb2.Left);
            hbEdge2.SetUVLeftRight(uvs, cb2.Right, cb3.Left);
            hbEdge3.SetUVLeftRight(uvs, cb3.Right, cb0.Left);

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

            unfoldBgrid.Clear();
            float r = _size.FilletRadius;
            float halfHeight = _size.Height / 2;
            float halfWidth = _size.Width / 2;
            float halfLength = _size.Length / 2;

            r = halfHeight < r ? halfHeight : r;
            r = halfWidth < r ? halfWidth : r;
            r = halfLength < r ? halfLength : r;

            float rl = r * 1.570796f;
            float xl = _size.Width - r * 2;
            float zl = _size.Length - r * 2;
            float yl = _size.Height - r * 2;

            unfoldBgrid.AddX(0);  //0
            unfoldBgrid.AddX(rl); //1
            unfoldBgrid.AddX(xl); //2
            unfoldBgrid.AddX(rl); //3
            unfoldBgrid.AddX(zl); //4
            unfoldBgrid.AddX(rl); //5
            unfoldBgrid.AddX(xl); //6
            unfoldBgrid.AddX(rl); //7
            unfoldBgrid.AddX(zl); //8

            unfoldBgrid.AddY(0);//0
            unfoldBgrid.AddY(rl); //1
            unfoldBgrid.AddY(yl); //2
            unfoldBgrid.AddY(rl); //3

            unfoldBgrid.AddY(1/32f); //4

            unfoldBgrid.AddY(zl); //5

            Vector2 s  = new Vector2( rl, rl);
            ct0.SetUVPositionAndSizeUnfoldB( uvs, unfoldBgrid[0, 2], s);
            ct1.CopyUV(false, uvs, ct0, new Vector2(xl+rl,0));
            ct2.CopyUV(false, uvs, ct0, new Vector2(xl + rl + zl + rl, 0));
            ct3.CopyUV(false, uvs, ct0, new Vector2(xl + rl + zl + rl + xl + rl, 0));


            float yOffset = yl + rl * 2;
            cb0.CopyUV(false, uvs, ct0, new Vector2(0, yOffset), new Vector2(1,-1));
            cb1.CopyUV(false, uvs, ct0, new Vector2(xl + rl, yOffset), new Vector2(1, -1));
            cb2.CopyUV(false, uvs, ct0, new Vector2(xl + rl + zl + rl, yOffset), new Vector2(1, -1));
            cb3.CopyUV(false, uvs, ct0, new Vector2(xl + rl + zl + rl + xl + rl, yOffset), new Vector2(1, -1));
 
            ve0.SetUVTopBottom(uvs, cb0.Bottom, ct0.Bottom);
            ve1.SetUVTopBottom(uvs, cb1.Bottom, ct1.Bottom);
            ve2.SetUVTopBottom(uvs, cb2.Bottom, ct2.Bottom);
            ve3.SetUVTopBottom(uvs, cb3.Bottom, ct3.Bottom);

            quadTop.SetUVPositionAndSize(uvs, unfoldBgrid[1, 4], unfoldBgrid[1, 5], unfoldBgrid[2, 5], unfoldBgrid[2, 4]);
            quadBottom.SetUVPositionAndSize(uvs, unfoldBgrid[6, 4], unfoldBgrid[6, 5], unfoldBgrid[5, 5], unfoldBgrid[5, 4] );

            quad0.SetUVPositionAndSize(uvs, ve0.Corners[3], ve0.Corners[2], ve1.Corners[1], ve1.Corners[0]);
            quad1.SetUVPositionAndSize(uvs, ve1.Corners[3], ve1.Corners[2], ve2.Corners[1], ve2.Corners[0]);
            quad2.SetUVPositionAndSize(uvs, ve2.Corners[3], ve2.Corners[2], ve3.Corners[1], ve3.Corners[0]);
            quad3.CopyUV(false, uvs, quad1, new Vector2(rl * 2 + xl + zl, 0));

            htEdge0.SetUVLeftRight(uvs, ct0.Right, ct1.Left );
            htEdge1.SetUVLeftRight(uvs, ct1.Right, ct2.Left );
            htEdge2.SetUVLeftRight(uvs, ct2.Right, ct3.Left );
            htEdge3.CopyUV(false, uvs, htEdge1, new Vector2(rl * 2 + xl + zl, 0));

            hbEdge0.SetUVLeftRight(uvs, cb0.Right, cb1.Left);
            hbEdge1.SetUVLeftRight(uvs, cb1.Right, cb2.Left);
            hbEdge2.SetUVLeftRight(uvs, cb2.Right, cb3.Left);
            hbEdge3.CopyUV(false,uvs, hbEdge1, new Vector2(rl * 2 + xl + zl, 0));

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
                float mid =  size.PivotOffset * Size.Height;
                Matrix4x4 ltw = transform.localToWorldMatrix;
                Vector3 pos = new Vector3(0, mid, Size.Length/2);
                Constraints.Side.position = ltw.MultiplyPoint3x4(pos);
                Constraints.Side.localRotation = transform.rotation;
            }
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

        public override float FilletRadius {
            get {
                return Size.FilletRadius;
            }

            set {
                Size.FilletRadius = value;
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

        internal override void OnDrawGizmosInherited() {
            if (Statistic.DrawObjectGizmo) {
                Gizmos.matrix = transform.localToWorldMatrix;
                Gizmos.color = ObjectGizmoColor;

                float halfHeight = Size.Height / 2;
                float halfWidth = Size.Width / 2;
                float halfLength = Size.Length / 2;

                float yt = halfHeight + Size.PivotOffset * Size.Height;
                float yb = -halfHeight + Size.PivotOffset * Size.Height;

                Vector3 ct0 = new Vector3(halfWidth, yt, halfLength);
                Vector3 ct1 = new Vector3(-halfWidth,  yt, halfLength);
                Vector3 ct2 = new Vector3(-halfWidth,  yt, -halfLength);
                Vector3 ct3 = new Vector3(halfWidth,  yt, -halfLength);

                Vector3 cb0 = new Vector3(halfWidth, yb, halfLength);
                Vector3 cb1 = new Vector3(-halfWidth, yb, halfLength);
                Vector3 cb2 = new Vector3(-halfWidth, yb, -halfLength);
                Vector3 cb3 = new Vector3(halfWidth, yb, -halfLength);

                Gizmos.DrawLine(ct0, ct1);
                Gizmos.DrawLine(ct1, ct2);
                Gizmos.DrawLine(ct2, ct3);
                Gizmos.DrawLine(ct3, ct0);

                Gizmos.DrawLine(cb0, cb1);
                Gizmos.DrawLine(cb1, cb2);
                Gizmos.DrawLine(cb2, cb3);
                Gizmos.DrawLine(cb3, cb0);

                Gizmos.DrawLine(ct0, cb0);
                Gizmos.DrawLine(ct1, cb1);
                Gizmos.DrawLine(ct2, cb2);
                Gizmos.DrawLine(ct3, cb3);
 
            }
        }

        public static FilletBox Create() {
            GameObject go = new GameObject("New Fillet Box");
            FilletBox result = go.AddComponent<FilletBox>();
            result.Apply();
            return result;
        }
    }
}
