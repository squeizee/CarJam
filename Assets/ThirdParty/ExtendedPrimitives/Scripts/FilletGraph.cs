using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11 {
    [RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
    [ExecuteInEditMode]
    [DefaultExecutionOrder(100)]
    public class FilletGraph : ExtendedPrimitive {

        [System.Serializable]
        public struct SizeParams {
           [A_Size("X dimension")]
            public float Width;

            [A_Size("Z dimension")]
            public float Height;

            [A_Size("Radius of edges fillet", 0.1f)]
            public float FilletRadius;

            [A_Size("Radius of cap edges fillet", 0.1f)]
            public float OutlineFilletRadius;


            public bool SharpCorners;
 
            [HideInInspector]
            public float clampedFillet;
            [HideInInspector]
            public float clampedOutlineFillet;
            [HideInInspector]
            public Bounds bounds;


            public SizeParams(float width, float height, float filletRadius, float oulineFilletRadius) {
                Width = width;
                Height = height;
                FilletRadius = filletRadius;
                OutlineFilletRadius = oulineFilletRadius;
                clampedFillet = 0;
                clampedOutlineFillet = 0;
                SharpCorners = true;
                bounds = new Bounds();
            }

            public bool IsEquals(SizeParams other) {
                return (Height == other.Height) && (Width == other.Width) && (FilletRadius == other.FilletRadius) && (OutlineFilletRadius == other.OutlineFilletRadius) && (SharpCorners == other.SharpCorners);
            }
        }

        [System.Serializable]
        public struct TopologyParams {

            public bool Top;
            public bool Side;
            public bool Bottom;

            [Range(1, 16)]
            public int FilletSegments;

            [Range(1, 16)]
            public int OutlineFilletSegments;

            public bool FlipNormals;

            public TopologyParams(int filletSeg, int outlineFilletSeg) {
                FilletSegments = filletSeg;
                OutlineFilletSegments = outlineFilletSeg;
                FlipNormals = false;
                Top = true;
                Side = true;
                Bottom = true;
            }

            public bool IsEquals(TopologyParams other) {
                return Top == other.Top && Bottom == other.Bottom && Side == other.Side && FilletSegments == other.FilletSegments && OutlineFilletSegments == other.OutlineFilletSegments && FlipNormals == other.FlipNormals;
            }
        }

        [System.Serializable]
        public struct CachedTextureMappingParam {
            public SizeParams Size;
            public FloatValuesArray Values;
            public TextureChannelParams ChannelParams;

            public CachedTextureMappingParam(int valuesCapacity) {
                Size = new SizeParams(3f, 0.3f, 0.03f, 0.03f);
                Values = new FloatValuesArray(new float[5] { 1f, 0.2f, 1f, 0.2f, 1f });
                ChannelParams = new TextureChannelParams();
            }
        }

        private SizeParams size;
        public SizeParams Size = new SizeParams(3f, 0.3f, 0.03f, 0.03f);

        private TopologyParams topology = new TopologyParams(2, 2);
        public TopologyParams Topology = new TopologyParams(4, 4);

        private FloatValuesArray values = new FloatValuesArray( );

        [A_FloatValueArr]
        public FloatValuesArray Values = new FloatValuesArray(  new float[5] { 1f, 0.2f, 1f, 0.2f, 1f });

        [HideInInspector]
        public CachedTextureMappingParam[] CachedSizeParams = new CachedTextureMappingParam[2] { new CachedTextureMappingParam(256), new CachedTextureMappingParam(256) };

        OutlinedFillet[] cornersFillets = new OutlinedFillet[0];
        HorizontalCorner[] cornersTop;
        HorizontalEdge[] heTop;
        HorizontalEdge firstHeTop;
        HorizontalEdge lastHeTop;
        Cap[] capsTop;
        Quad[] capQuadsTop;

        HorizontalCorner[] cornersBottom;
        HorizontalEdge[] heBottom;
        //HorizontalEdge firstHeBottom;
        //HorizontalEdge lastHeBottom;
        Cap[] capsBottom;
        Quad[] capQuadsBottom;
        VerticalEdge[] ves;
        Quad[] vquads;
        int CornerLast0Idx;
        int CornerLast1Idx;


        internal override bool IsTopologyParamsChanged {
            get {
                bool isValuesTopologyChanged = Values.Count != values.Count;
                return !Topology.IsEquals(topology) || isValuesTopologyChanged  || cornersFillets.Length != Values.Count+2;
            }
        }

        internal override bool IsSizeParamsChanged {
            get {
                return !Size.IsEquals(size) || !Values.IsEquals(values);
            }
        }

        internal override void CacheSizeParams(int cacheIdx) {
            CachedSizeParams[cacheIdx].Size = Size;
            CachedSizeParams[cacheIdx].Values.CopyFrom(Values);
        }

        internal override void SetSizeFromCache(int channelIdx) {
            SetSize(ref CachedSizeParams[channelIdx].Size, CachedSizeParams[channelIdx].Values);
        }

        internal override void SetSizeFromParams() {
            SetSize(ref Size, Values);
            size = Size;
            values.CopyFrom(Values);
        }

        internal override void SetTopology() {
            Statistic.Topology.BeginSample();
            Faces.Clear();
            MEdges.Clear();

            Top.Clear();
            Side.Clear();
            Bottom.Clear();

            Topology.FilletSegments = Mathf.Clamp(Topology.FilletSegments, 1, 16);
            Topology.OutlineFilletSegments = Mathf.Clamp(Topology.OutlineFilletSegments, 1, 16);
           

            vertsCounter = 0;

            cornersFillets = new OutlinedFillet[Values.Count + 2];
            CornerLast0Idx = cornersFillets.Length - 1;
            CornerLast1Idx = cornersFillets.Length - 2;

            //TOP
            cornersTop = new HorizontalCorner[Values.Count+2];
            heTop = new HorizontalEdge[Values.Count+2];
            firstHeTop = new HorizontalEdge(Topology.Top, this, Top, false, Topology.FilletSegments, false);
            lastHeTop = new HorizontalEdge(Topology.Top, this, Top, false, Topology.FilletSegments, false);
            capsTop = new Cap[Values.Count - 2];
            capQuadsTop = new Quad[Values.Count - 1];

            //BOTTOM
            cornersBottom = new HorizontalCorner[Values.Count + 2];
            heBottom = new HorizontalEdge[Values.Count + 2];
            //HorizontalEdge firstHeBottom 
            new HorizontalEdge(Topology.Bottom, this, Bottom, true, Topology.FilletSegments, false);
            //lastHeBottom =
            new HorizontalEdge(Topology.Bottom, this, Bottom, true, Topology.FilletSegments, false);
            capsBottom = new Cap[Values.Count - 2];
            capQuadsBottom = new Quad[Values.Count - 1];

            for (int c = 0; c < cornersFillets.Length; c++) {
                cornersTop[c] = new HorizontalCorner(Topology.Top, this, Top, false, Topology.OutlineFilletSegments, Topology.FilletSegments);
                cornersBottom[c] = new HorizontalCorner(Topology.Bottom, this, Bottom, true, Topology.OutlineFilletSegments, Topology.FilletSegments);
            }

            for (int c = 0; c < cornersFillets.Length ; c++) {
                heTop[c] = new HorizontalEdge(Topology.Top, this, Top, false, Topology.OutlineFilletSegments, false);
                heBottom[c] = new HorizontalEdge(Topology.Bottom, this, Bottom, true, Topology.OutlineFilletSegments, false);
            }

            for (int i = 0; i<capsTop.Length; i++) {
                capsTop[i] = new Cap(Topology.Top, this, Top, false, Topology.FilletSegments);
                capsBottom[i] = new Cap(Topology.Bottom, this, Bottom, true, Topology.FilletSegments);
            }

            for (int i = 0; i<capQuadsTop.Length; i++) {
                capQuadsTop[i] = new Quad(Topology.Top, this, Top, false, 1f);
                capQuadsBottom[i] = new Quad(Topology.Bottom, this, Bottom, true, 1f);
            }

            ves = new VerticalEdge[ cornersFillets.Length ];
            vquads = new Quad[ cornersFillets.Length ];

            for (int i = 0; i<ves.Length; i++) {
                ves[i] = new VerticalEdge(Topology.Side, this, Side, false, Topology.FilletSegments);
                vquads[i] = new Quad(Topology.Side, this, Side, false, 0);
            }


            Collider.ClearTopology(this);

            ColliderElement[] c_topCorners = null ;
            ColliderElement[] c_bottomCorners  = null;
 
            if (Topology.Top) {
                c_topCorners = new ColliderElement[cornersTop.Length];
                for (int c = 0; c<cornersTop.Length; c++) {
                    c_topCorners[c] = new ColliderElement(this, false, cornersTop[c], null, null, null, null, true);
                }

                for (int c = 0; c < c_topCorners.Length; c++) {
                    int nextC = (c + 1) % c_topCorners.Length;
                    ColliderElement.ConnectUniform(this, false, c_topCorners[c].Left, c_topCorners[nextC].Right, true, true);
                }

                ColliderElement.ConnectUniform(this, false, c_topCorners[0].Top, c_topCorners[1].TopReversed, false, false);
                ColliderElement.ConnectUniform(this, false, c_topCorners[c_topCorners.Length-1].Top, c_topCorners[c_topCorners.Length - 2].TopReversed, false, false);

                ColliderVertex[] c_capTopCenters = new ColliderVertex[capsTop.Length];
                for (int i = 0; i<c_capTopCenters.Length; i++) {
                    c_capTopCenters[i] = new ColliderVertex(capsTop[i].vertices[0], Collider.Vertices);
                    ColliderElement.ConnectIrregular(this, true, c_topCorners[i + 2].Top, c_capTopCenters[i] );
                }
                ColliderElement.ConnectQuad(this, false, c_topCorners[0].Corners[2], c_topCorners[1].Corners[1], c_topCorners[2].Corners[2], c_capTopCenters[0]);
                
                ColliderElement.ConnectQuad(this, false,   c_capTopCenters[c_capTopCenters.Length-1], c_topCorners[c_topCorners.Length-3].Corners[1], c_topCorners[c_topCorners.Length - 2].Corners[2], c_topCorners[c_topCorners.Length - 1].Corners[1]);

                for (int c = 0; c < c_capTopCenters.Length-1; c++) {
                    ColliderElement.ConnectQuad(this, false, c_capTopCenters[c], c_topCorners[c + 2].Corners[1], c_topCorners[c + 3].Corners[2], c_capTopCenters[c + 1] );
                }
            }

            if (Topology.Bottom) {
                c_bottomCorners = new ColliderElement[cornersTop.Length];
                for (int c = 0; c < cornersTop.Length; c++) {
                    c_bottomCorners[c] = new ColliderElement(this, true, cornersBottom[c], null, null, null, null, true);
                }

                for (int c = 0; c < c_bottomCorners.Length; c++) {
                    int nextC = (c + 1) % c_bottomCorners.Length;
                    ColliderElement.ConnectUniform(this, true, c_bottomCorners[c].Left, c_bottomCorners[nextC].Right, true, true);
                }

                ColliderElement.ConnectUniform(this, true, c_bottomCorners[0].Top, c_bottomCorners[1].TopReversed, false, false);
                ColliderElement.ConnectUniform(this, true, c_bottomCorners[c_bottomCorners.Length - 1].Top, c_bottomCorners[c_bottomCorners.Length - 2].TopReversed, false, false);

                ColliderVertex[] c_capBottomCenters = new ColliderVertex[capsTop.Length];
                for (int i = 0; i < c_capBottomCenters.Length; i++) {
                    c_capBottomCenters[i] = new ColliderVertex(capsBottom[i].vertices[0], Collider.Vertices);
                    ColliderElement.ConnectIrregular(this, false, c_bottomCorners[i + 2].Top, c_capBottomCenters[i]);
                }
                ColliderElement.ConnectQuad(this, true, c_bottomCorners[0].Corners[2], c_bottomCorners[1].Corners[1], c_bottomCorners[2].Corners[2], c_capBottomCenters[0]);

                ColliderElement.ConnectQuad(this, true, c_capBottomCenters[c_capBottomCenters.Length - 1], c_bottomCorners[c_bottomCorners.Length - 3].Corners[1], c_bottomCorners[c_bottomCorners.Length - 2].Corners[2], c_bottomCorners[c_bottomCorners.Length - 1].Corners[1]);

                for (int c = 0; c < c_capBottomCenters.Length - 1; c++) {
                    ColliderElement.ConnectQuad(this, true, c_capBottomCenters[c], c_bottomCorners[c + 2].Corners[1], c_bottomCorners[c + 3].Corners[2], c_capBottomCenters[c + 1]);
                }
            }

            if (Topology.Side) {
                ColliderElement[] c_ves = new ColliderElement[cornersTop.Length];
                for (int c = 0; c < cornersTop.Length; c++) {
                    c_ves[c] = new ColliderElement(this, false, ves[c], null, null, Topology.Top ? c_topCorners[c].Bottom : null, Topology.Bottom ? c_bottomCorners[c].Bottom : null, true);
                }
                for (int c = 0; c < cornersTop.Length; c++) {
                    int nc = (c + 1) % cornersTop.Length;
                    ColliderElement.ConnectQuad(this, false, c_ves[nc].Corners[3], c_ves[nc].Corners[2], c_ves[c].Corners[1], c_ves[c].Corners[0]);
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
            values.CopyFrom(Values);
            Statistic.Topology.EndSample();
        }

        void SetSize(ref SizeParams _size, FloatValuesArray _values) {
            Statistic.Size.BeginSample();
            //size;
            float valuesInterval = _size.Width / (Values.Count - 1);

            float halfHeight = _size.Height / 2f;
            _size.clampedFillet =  Mathf.Clamp( _size.FilletRadius, 0, valuesInterval/2f );
            _size.clampedOutlineFillet = Mathf.Clamp(_size.OutlineFilletRadius, 0, Mathf.Min(valuesInterval / 2f, halfHeight));
 

            for (int i = 0; i < cornersFillets.Length; i++) {
                Vector2 _a = CornerPos(i-1);
                Vector2 _b = CornerPos(i );
                Vector2 _c = CornerPos(i + 1);
                _a = Vector2.LerpUnclamped(_a, _b, 0.5f);
                _c = Vector2.LerpUnclamped(_b, _c, 0.5f);

                float f = _size.clampedFillet;

                if (_size.SharpCorners && (i == 0 || i == 1 || i == CornerLast0Idx || i == CornerLast1Idx)) {
                    f = 0;
                }

                cornersFillets[i].Set(_c, _b, _a, f);
                cornersFillets[i].OuterOutline = _size.clampedOutlineFillet;
 
                cornersTop[i].SetPositionAndSize(false, cornersFillets[i], halfHeight);
            }

            for (int c = 0; c < heTop.Length; c++) {
                int nextCorner = (c + 1) % heTop.Length;
                heTop[c].SetLeftRightSize( cornersTop[nextCorner].Right, cornersTop[c].Left );
            }

            firstHeTop.SetLeftRightSize(cornersTop[0].TopReversed, cornersTop[1].Top);
            lastHeTop.SetLeftRightSize(cornersTop[cornersTop.Length - 1].TopReversed, cornersTop[cornersTop.Length - 2].Top);

 
            for (int i = 0; i<capsTop.Length; i++) {
                int cornerIdx = i + 2;
                float x = _size.Width * (i + 1) * (1f / (Values.Count-1));
                capsTop[i].SetPositionAndSize(cornersTop[cornerIdx].Top, new Vector3(x, halfHeight, 0));
            }

            for (int i = 0; i<capQuadsTop.Length; i++) {
                if (i == 0) {
                    capQuadsTop[i].SetLeftRightSize(firstHeTop.Bottom, capsTop[0].RightReversed);
                } else if (i == capQuadsTop.Length - 1) {
                    capQuadsTop[i].SetLeftRightSize(capsTop[i - 1].LeftReversed, lastHeTop.Top);
                } else {
                     capQuadsTop[i].SetLeftRightSize( capsTop[i-1].LeftReversed, capsTop[i].RightReversed );
                }
            }

            for (int i = 0; i<Top.Count; i++) {
                Bottom[i].CopyMirrorY(true, Top[i]); 
            }

            for (int i = 0; i<ves.Length; i++) {
                ves[i].SetTopBottomSize(cornersTop[i].Bottom, cornersBottom[i].Bottom); 
            }

            for (int i = 0; i < vquads.Length; i++) {
                int nextEdge = (i + 1) % ves.Length;
                vquads[i].SetLeftRightSize( ves[nextEdge].Right, ves[i].Left);
            }

            bounds = new Bounds();
            bounds.Encapsulate(new Vector3(0, _size.Height/2, 0));
            bounds.Encapsulate(new Vector3(0, -_size.Height/2, 0));
            for (int i = 0; i < Values.Count; i++) {
                bounds.Encapsulate(ValueCornerPos(i).XYtoXyZ());
            }
            bounds.extents = bounds.extents + new Vector3(_size.OutlineFilletRadius, 0, _size.OutlineFilletRadius);
            bounds.size = bounds.size * BoundsInflateMultiplier;
            _size.bounds = bounds;
            SharedMesh.vertices = mvertices;
            SharedMesh.normals = mnormals;
            SharedMesh.bounds = bounds;

            Statistic.Size.EndSample();
        }

        internal override void UnfoldA(Vector2[] uvs, int cachedSizeChannelIdx, Vector2 offset, Vector2 scale) {
            SizeParams _size = CachedSizeParams[cachedSizeChannelIdx].Size;

            for (int i = 0; i<Top.Count; i++) {
                Top[i].SetUVPlanarXZ(uvs, Vector2.zero);
            }

            Vector2 bottomOffset = new Vector2(_size.bounds.max.x*2, 0);
            for (int i = 0; i < Bottom.Count; i++) {
                Bottom[i].CopyUV (true, uvs, Top[i],   bottomOffset , new Vector2(-1,1));
            }

            float xPos = 0;
            float yPos = _size.bounds.max.z + _size.OutlineFilletRadius * r90;
            float stripeHeight = _size.Height - _size.OutlineFilletRadius * r90;
            for (int i = 0; i<cornersTop.Length; i++) {
                float cornerWidth = cornersTop[i].uvScale.x;
                ves[i].SetUVRect(true, uvs, new Vector2(xPos, yPos), new Vector2(cornerWidth, stripeHeight));
                xPos += cornerWidth;
                float quadWidth = vquads[i].AverageSize().x;
                vquads[i].SetUVRect(true, uvs, new Vector2(xPos, yPos), new Vector2(quadWidth, stripeHeight));
                xPos += quadWidth;
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

            for (int i = 0; i < Top.Count; i++) {
                Top[i].SetUVPlanarXZ(uvs, Vector2.zero);
            }

            Vector2 bottomOffset = new Vector2(_size.bounds.max.x * 2, 0);
            for (int i = 0; i < Bottom.Count; i++) {
                Bottom[i].CopyUV(true, uvs, Top[i], bottomOffset, new Vector2(-1, 1));
            }

            float xPos = 0;
            float yPos = _size.bounds.max.z + _size.OutlineFilletRadius * r90;
            float stripeHeight = _size.Height - _size.OutlineFilletRadius * r90;
            for (int i = 0; i < cornersTop.Length; i++) {
                float cornerWidth = cornersTop[i].uvScale.x;
                ves[i].SetUVRect(true, uvs, new Vector2(xPos, yPos), new Vector2(cornerWidth, stripeHeight));
                xPos += cornerWidth;
                float quadWidth = vquads[i].AverageSize().x;
                vquads[i].SetUVRect(true, uvs, new Vector2(xPos, yPos), new Vector2(quadWidth, stripeHeight));
                xPos += quadWidth;
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
            //if (Constraints.Top != null) {
            //    float yt = Size.yt;
            //    Matrix4x4 ltw = transform.localToWorldMatrix;
            //    Vector3 pos = new Vector3(0, yt, 0);
            //    Constraints.Top.position = ltw.MultiplyPoint3x4(pos);
            //    Constraints.Top.localRotation = transform.rotation;
            //}
            //if (Constraints.Bottom != null) {
            //    float yb = Size.yb;
            //    Matrix4x4 ltw = transform.localToWorldMatrix;
            //    Vector3 pos = new Vector3(0, yb, 0);
            //    Constraints.Bottom.position = ltw.MultiplyPoint3x4(pos);
            //    Constraints.Bottom.localRotation = transform.rotation;
            //}

        }

        internal override bool FlipNormals {
            get {
                return Topology.FlipNormals;
            }
        }

        Vector2 ValueCornerPos(int idx) {
 
            float y = Mathf.Max(0.001f, Values[idx]);

            float step = 1f / (Values.Count-1);
 
            return new Vector2(Size.Width * step * idx , y);
        }

        Vector2 CornerPos(int idx) {
            int count = Values.Count + 2;
            idx = (idx+count) % count;
            if (idx == 0) {
                return Vector2.zero;
            }
            if (idx == (count - 1)) {
                return new Vector2(Size.Width, 0);
            }
            return ValueCornerPos(idx-1);
        }

        internal override void OnDrawGizmosInherited() {
            if (Statistic.DrawObjectGizmo) {
                Gizmos.matrix = transform.localToWorldMatrix;
                Gizmos.color = ObjectGizmoColor;
                float halfHeight = Size.Height / 2;

                for (int i = 0; i < Values.Count-1; i++) {
                    Vector3 _from = ValueCornerPos(i).XYtoXyZ(-halfHeight) ;
                    Vector3 _to = ValueCornerPos(i + 1).XYtoXyZ(-halfHeight) ;
                    Gizmos.DrawLine(_from, _to);
                    Vector3 _fromD = new Vector3( _from.x, halfHeight, _from.z );
                    Vector3 _toD = new Vector3(_to.x, halfHeight, _to.z );
                    Gizmos.DrawLine(_fromD, _toD);
                    Gizmos.DrawLine(_fromD, _from);

                }
                Vector3 c0 = new Vector3(0, -halfHeight, 0);
                Vector3 c0d = new Vector3(0, halfHeight, 0);

                Vector3 c1 = ValueCornerPos(0).XYtoXyZ(-halfHeight);
                Vector3 c1d = new Vector3(c1.x,  halfHeight, c1.z );


                Vector3 c2 = ValueCornerPos(Values.Count-1).XYtoXyZ(-halfHeight) ;
                Vector3 c2d = new Vector3(c2.x, halfHeight, c2.z );

                Vector3 c3 = new Vector3(Size.Width, -halfHeight, 0)  ;
                Vector3 c3d = new Vector3(c3.x, halfHeight, c3.z);

                Gizmos.DrawLine(c0, c0d);
                Gizmos.DrawLine(c2, c2d);
                Gizmos.DrawLine(c3, c3d);

                Gizmos.DrawLine(c0, c1);
                Gizmos.DrawLine(c0d, c1d);

                Gizmos.DrawLine(c0, c3);
                Gizmos.DrawLine(c0d, c3d);

                Gizmos.DrawLine(c2, c3);
                Gizmos.DrawLine(c2d, c3d);
            }

 
        }

        public static FilletGraph Create() {
            GameObject go = new GameObject("New Fillet Graph");
            FilletGraph result = go.AddComponent<FilletGraph>();
            result.Apply();
            return result;
        }

    }
}
