using System.Collections;
using System.Collections.Generic;
using ExtendedPrimitives_11.Internal;
using UnityEngine;

namespace ExtendedPrimitives_11 {
    [RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
    [ExecuteInEditMode]
    [DefaultExecutionOrder(100)]
    public class FilletRadar : ExtendedPrimitive {

        [System.Serializable]
        public struct SizeParams {
 

            [A_Size("Y dimension")]
            public float Height;

            [A_Size("Radius of edges fillet", 0.2f)]
            public float FilletRadius;


            [A_Size("Radius of cap edges fillet", 0.2f)]
            public float OutlineFilletRadius;
 
 
            public float clampedFillet {
                get {
                    return notAnimatableData[0];
                }

                set {
                    notAnimatableData[0] = value;
                }
            } 
 
            public float clampedOutlineFillet {
                get {
                    return notAnimatableData[1];
                }

                set {
                    notAnimatableData[1] = value;
                }
            }



            [HideInInspector]
            public Bounds bounds {
                get {
                    return new Bounds(new Vector3(notAnimatableData[2], notAnimatableData[3], notAnimatableData[4]), new Vector3(notAnimatableData[5], notAnimatableData[6], notAnimatableData[7]));
                }

                set {
                    notAnimatableData[2] = value.center.x;
                    notAnimatableData[3] = value.center.y;
                    notAnimatableData[4] = value.center.z;
                    notAnimatableData[5] = value.size.x;
                    notAnimatableData[6] = value.size.y;
                    notAnimatableData[7] = value.size.z;
                }
            }

            [HideInInspector]
            public float[] notAnimatableData;

            public SizeParams( float height, float filletRadius, float oulineFilletRadius  ) {
                Height = height;
                FilletRadius = filletRadius;
                OutlineFilletRadius = oulineFilletRadius;
                notAnimatableData = new float[8];
            }

            public bool IsEquals(SizeParams other) {
                return   (Height == other.Height)   && (FilletRadius == other.FilletRadius) && (OutlineFilletRadius == other.OutlineFilletRadius)    ;
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
                return  Top == other.Top && Bottom == other.Bottom && Side == other.Side  && FilletSegments == other.FilletSegments && OutlineFilletSegments == other.OutlineFilletSegments  && FlipNormals == other.FlipNormals;
            }
        }

        [System.Serializable]
        public struct CachedTextureMappingParam {
            public SizeParams Size;
            public FloatValuesArray Values;
            public TextureChannelParams ChannelParams;

            public CachedTextureMappingParam(int valuesCapacity) {
                Size = new SizeParams(0.3f, 0.03f, 0.03f);
                Values = new FloatValuesArray(new float[10] { 1f, 0.2f, 1f, 0.2f, 1f, 0.2f, 1f, 0.2f, 1f, 0.2f });
                ChannelParams = new TextureChannelParams(MappingMethodEnum.UnfoldA, UpdateTextureCoordsModeEnum.Fixed);
            }
        }
 
        private SizeParams size;
        public SizeParams Size = new SizeParams( 0.3f, 0.03f, 0.03f );

        private TopologyParams topology = new TopologyParams(2,2);
        public TopologyParams Topology = new TopologyParams(8,4);

        private FloatValuesArray values = new FloatValuesArray( ); 

        [A_FloatValueArr]
        public FloatValuesArray Values = new FloatValuesArray( new float[10] { 1f, 0.2f, 1f, 0.2f, 1f, 0.2f, 1f, 0.2f, 1f, 0.2f });

        [HideInInspector]
        public CachedTextureMappingParam[] CachedSizeParams = new CachedTextureMappingParam[2] { new CachedTextureMappingParam(64), new CachedTextureMappingParam(64) };

        OutlinedFillet[] cornersFillets = new OutlinedFillet[0];
        HorizontalCorner[] cornersTop;
        HorizontalCorner[] cornersTopReversed;
        NGonCap topCap;
        HorizontalEdge[] heTop;
        HorizontalCorner[] cornersBottom;
        HorizontalEdge[] heBottom;
        VerticalEdge[] ves;
        Quad[] quads; 
        NGonCap bottomCap;

        internal override bool IsTopologyParamsChanged {
            get {
                bool isValuesTopologyChanged = Values.Count != values.Count;
                return !Topology.IsEquals(topology) ||  isValuesTopologyChanged  || cornersFillets.Length != Values.Count;
            }
        }

        internal override bool IsSizeParamsChanged {
            get {
                 return  !Size.IsEquals(size) || !Values.IsEquals(values);
            }
        }

        internal override void CacheSizeParams(int cacheIdx) {
            CachedSizeParams[cacheIdx].Size = Size;
            CachedSizeParams[cacheIdx].Values.CopyFrom( Values );
        }

        internal override void SetSizeFromCache(int channelIdx) {
            SetSize( ref CachedSizeParams[channelIdx].Size, CachedSizeParams[channelIdx].Values  );
        }

        internal override void SetSizeFromParams() {
            SetSize(ref Size, Values);
            size = Size;
            values.CopyFrom( Values );
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
            cornersFillets = new OutlinedFillet[Values.Count];
            cornersTop = new HorizontalCorner[Values.Count];
            cornersBottom = new HorizontalCorner[Values.Count];
            heTop = new HorizontalEdge[Values.Count];
            heBottom = new HorizontalEdge[Values.Count];
            ves = new VerticalEdge[Values.Count];
            quads = new Quad[Values.Count];

            for (int c = 0; c<cornersTop.Length; c++) {
                cornersTop[c] = new HorizontalCorner(Topology.Top, this, Top, false, Topology.OutlineFilletSegments, Topology.FilletSegments);
                heTop[c] = new HorizontalEdge(Topology.Top, this, Top, false, Topology.OutlineFilletSegments, false);
                cornersBottom[c] = new HorizontalCorner(Topology.Bottom, this, Bottom, true, Topology.OutlineFilletSegments, Topology.FilletSegments);
                heBottom[c] = new HorizontalEdge(Topology.Bottom, this, Bottom, true, Topology.OutlineFilletSegments, false);
                ves[c] = new VerticalEdge(Topology.Side, this, Side, false, Topology.FilletSegments);
                quads[c] = new Quad(Topology.Side, this, Side, false, 0);
            }

            cornersTopReversed = new HorizontalCorner[Values.Count];
            for (int c = 0; c < cornersTop.Length; c++) {
                cornersTopReversed[c] = cornersTop[cornersTop.Length - c - 1];
            }

            topCap = new NGonCap(Topology.Top, this, Top, false, Topology.FilletSegments, cornersTop.Length);
            bottomCap = new NGonCap(Topology.Bottom, this, Bottom, true, Topology.FilletSegments, cornersTop.Length);

            Collider.ClearTopology(this);

            ColliderElement[] c_topCorners = new ColliderElement[Values.Count];
            ColliderElement[] c_bottomCorners = new ColliderElement[Values.Count];
            ColliderElement[] c_ves;

            if (Topology.Top) {
                
                for (int c = 0; c<Values.Count; c++) {
                    c_topCorners[c] = new ColliderElement(this, false, cornersTop[c], null, null, null, null, true);
                }
                ColliderVertex centerCapVertex = new ColliderVertex(topCap.vertices[0], Collider.Vertices);
                ColliderVertex[] capOutline = new ColliderVertex[c_topCorners[0].Top.Length * Values.Count + 1];
                for (int c = 0; c < Values.Count; c++) {
                    c_topCorners[c].Top.CopyTo(capOutline, c * c_topCorners[0].Top.Length);
                    int nc = (c + 1) % Values.Count;
                    ColliderElement.ConnectUniform(this, false,  c_topCorners[nc].Left, c_topCorners[c].Right, true, true);
                }
                capOutline[capOutline.Length - 1] = capOutline[0];
                ColliderElement.ConnectIrregular(this, true, capOutline, centerCapVertex );
            }

            if (Topology.Bottom) {
 
                for (int c = 0; c < Values.Count; c++) {
                    c_bottomCorners[c] = new ColliderElement(this, true, cornersBottom[c], null, null, null, null, true);
                }
                ColliderVertex centerCapVertex = new ColliderVertex(bottomCap.vertices[0], Collider.Vertices);
                ColliderVertex[] capOutline = new ColliderVertex[c_bottomCorners[0].Top.Length * Values.Count + 1];
                for (int c = 0; c < Values.Count; c++) {
                    c_bottomCorners[c].Top.CopyTo(capOutline, c * c_bottomCorners[0].Top.Length);
                    int nc = (c + 1) % Values.Count;
                    ColliderElement.ConnectUniform(this, true, c_bottomCorners[nc].Left, c_bottomCorners[c].Right, true, true);
                }
                capOutline[capOutline.Length - 1] = capOutline[0];
                ColliderElement.ConnectIrregular(this, false, capOutline, centerCapVertex);
            }

            if (Topology.Side) {
                c_ves = new ColliderElement[Values.Count];
                for (int c = 0; c < Values.Count; c++) {
                    c_ves[c] = new ColliderElement(this, false, ves[c], null, null, Topology.Top? c_topCorners[c].Bottom : null, Topology.Bottom ? c_bottomCorners[c].Bottom : null, true);
                }
                for (int c = 0; c < Values.Count; c++) {
                    int nc = (c + 1) % Values.Count;
                    ColliderElement.ConnectQuad(this, false, c_ves[c].Corners[3], c_ves[c].Corners[2], c_ves[nc].Corners[1], c_ves[nc].Corners[0]);
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
            values.CopyFrom( Values );
            Statistic.Topology.EndSample();
        }

        void SetSize(ref SizeParams _size, FloatValuesArray _values) {
             Statistic.Size.BeginSample();
            float halfHeight = Size.Height / 2f;
            _size.clampedFillet = _size.FilletRadius;
            _size.clampedOutlineFillet = Mathf.Clamp(_size.OutlineFilletRadius, 0, _size.Height / 2);

            for (int i = 0; i < Values.Count; i++) {
                Vector2 _a = CornerPos(i - 1);
                Vector2 _b = CornerPos(i);
                Vector2 _c = CornerPos(i + 1);
                _a = Vector2.LerpUnclamped(_a, _b, 0.5f);
                _c = Vector2.LerpUnclamped(_b, _c, 0.5f);
                cornersFillets[i].Set(_a, _b, _c, _size.clampedFillet);
                cornersFillets[i].OuterOutline = _size.clampedOutlineFillet;
                cornersTop[i].SetPositionAndSize(false, cornersFillets[i], halfHeight);
            }

            for (int c = 0; c<cornersTop.Length; c++) {
                int nI = (c + 1) % cornersTop.Length;
                heTop[c].SetLeftRightSize(cornersTop[c].Right, cornersTop[nI].Left);
            }

            topCap.SetPositionAndSize(cornersTopReversed, true, true);
 
            bottomCap.CopyMirrorY(false, topCap, Height);

            for (int c = 0; c < Values.Count; c++) {
                cornersBottom[c].CopyMirrorY(true, cornersTop[c] );
            }

            for (int c = 0; c < cornersBottom.Length; c++) {
                int nI = (c + 1) % cornersBottom.Length;
                heBottom[c].SetLeftRightSize(cornersBottom[c].Right, cornersBottom[nI].Left);
                ves[c].SetTopBottomSize(cornersTop[c].Bottom, cornersBottom[c].Bottom);
            }

            for (int c = 0; c < ves.Length; c++) {
                int nI = (c + 1) % ves.Length;
                quads[c].SetPositionAndSize(ves[c].Corners[3], ves[c].Corners[2], ves[nI].Corners[1], ves[nI].Corners[0]);
            }

            bounds = new Bounds();
            bounds.Encapsulate(new Vector3(0, -halfHeight, 0));
            bounds.Encapsulate(new Vector3(0, halfHeight, 0));
            for (int i = 0; i<Values.Count; i++) {
                bounds.Encapsulate(CornerPos(i).XYtoXyZ()); 
            }
            bounds.extents  = bounds.extents + new Vector3( _size.OutlineFilletRadius,  0, _size.OutlineFilletRadius );
            bounds.size = bounds.size * BoundsInflateMultiplier;
            _size.bounds = bounds;
            SharedMesh.vertices = mvertices;
            SharedMesh.normals = mnormals;
            SharedMesh.bounds = bounds;

            Statistic.Size.EndSample();
        }

        internal override void UnfoldA(Vector2[] uvs, int cachedSizeChannelIdx, Vector2 offset, Vector2 scale) {
            SizeParams _size = CachedSizeParams[cachedSizeChannelIdx].Size;

            float capFilletLength = cornersTop[0].uvScale.y;
            Vector2 bottomOffset = new Vector2( _size.bounds.max.x *2  + capFilletLength*2, 0 );
            topCap.SetUVPlanarXZ(uvs, Vector2.zero);
            bottomCap.CopyUV(false, uvs, topCap, bottomOffset, new Vector2(-1, 1));

            
             float capFilletHeight = cornersTop[0].uvScale.y;
             float veHeight = _size.Height - _size.clampedOutlineFillet * 2;
             float yOffset = _size.bounds.max.z   + capFilletHeight;
 

            for (int c = 0; c<Values.Count; c++) {
                cornersTop[c].SetUVPlanarXZ(uvs, Vector2.zero );
                cornersBottom[c].CopyUV(true, uvs, cornersTop[c], bottomOffset, new Vector2(-1, 1)) ;
            }

            for (int c = 0; c < Values.Count; c++) {
                int nc = (c + 1) % cornersBottom.Length;
                heTop[c].SetUVLeftRight(uvs, cornersTop[c].Right, cornersTop[nc].Left);
                heBottom[c].SetUVLeftRight(uvs, cornersBottom[c].Right, cornersBottom[nc].Left);
            }

            float xOffset = 0;
            for (int c = 0; c < Values.Count; c++) {
                ves[c].SetUVRect(true, uvs, new Vector2(xOffset, yOffset), new Vector2(cornersTop[c].uvScale.x, veHeight)  );
                xOffset += cornersTop[c].uvScale.x;
                float edgeLength = Vector3.Distance(heTop[c].Corners[0].Pos, heTop[c].Corners[3].Pos);
                quads[c].SetUVRect(true, uvs, new Vector2(xOffset, yOffset), new Vector2(edgeLength, veHeight));
                xOffset += edgeLength;
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

            Vector2 bottomOffset = new Vector2(_size.bounds.max.x * 2, 0);
            topCap.SetUVPlanarXZ(uvs, Vector2.zero);
            bottomCap.CopyUV(false, uvs, topCap, bottomOffset, new Vector2(-1, 1));

            float xOffset = 0;
            float capFilletHeight = cornersTop[0].uvScale.y;
            float veHeight = _size.Height - _size.clampedOutlineFillet * 2;
            float yOffset = _size.bounds.max.z + veHeight + capFilletHeight;
            float bottomYOffset = yOffset * 2 - veHeight;

            for (int c = 0; c < cornersTop.Length; c++) {
 
                cornersTop[c].SetUVRect(false, uvs, new Vector2(xOffset, yOffset), cornersTop[c].uvScale);
                xOffset += cornersTop[c].uvScale.x;
                float edgeLength = Vector3.Distance(heTop[c].Corners[0].Pos, heTop[c].Corners[3].Pos);
                heTop[c].SetUVRect(false, uvs, new Vector2(xOffset, yOffset), new Vector2(edgeLength, cornersTop[c].uvScale.y));
                xOffset += edgeLength;

                cornersBottom[c].CopyUV(true, uvs, cornersTop[c], new Vector2(0, bottomYOffset), new Vector2(1, -1));
                heBottom[c].CopyUV(true, uvs, heTop[c], new Vector2(0, bottomYOffset), new Vector2(1, -1));

                ves[c].SetUVTopBottom(uvs, cornersBottom[c].Bottom, cornersTop[c].Bottom);
                quads[c].SetUVTopBottom(uvs, heBottom[c].Bottom, heTop[c].Bottom);
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
                Matrix4x4 ltw = transform.localToWorldMatrix;
                Vector3 pos = new Vector3(0, Size.Height/2, 0);
                Constraints.Top.position = ltw.MultiplyPoint3x4(pos);
                Constraints.Top.localRotation = transform.rotation;
            }
            if (Constraints.Bottom != null) {
                Matrix4x4 ltw = transform.localToWorldMatrix;
                Vector3 pos = new Vector3(0, -Size.Height / 2, 0);
                Constraints.Bottom.position = ltw.MultiplyPoint3x4(pos);
                Constraints.Bottom.localRotation = transform.rotation;
            }
 
        }

        internal override bool FlipNormals {
            get {
                return Topology.FlipNormals;
            }
        }

        public Vector2 CornerPos(int idx) {

            idx = (idx+ Values.Count) % Values.Count;
            float r = Mathf.Max(0.001f, Values[idx]);
            float a = r360 / Values.Count * idx;
            return new Vector2(Mathf.Cos(a) * r,  Mathf.Sin(a) * r);
        }

        internal override void OnDrawGizmosInherited() {
            if (Statistic.DrawObjectGizmo) {
                Gizmos.matrix = transform.localToWorldMatrix;
                Gizmos.color = ObjectGizmoColor;
                float halfHeight = Size.Height / 2f;
                for (int i = 0; i < Values.Count; i++) {
                    Vector3 _from = CornerPos(i).XYtoXyZ(halfHeight);
                    Vector3 _to = CornerPos(i + 1).XYtoXyZ(halfHeight);
                    Gizmos.DrawLine(_from, _to);
                    Vector3 _fromB = CornerPos(i).XYtoXyZ(-halfHeight);
                    Vector3 _toB = CornerPos(i + 1).XYtoXyZ(-halfHeight);
                    Gizmos.DrawLine(_fromB, _toB);
                    Gizmos.DrawLine(_from, _fromB);
                }
            }
        }

        public static FilletRadar Create() {
            GameObject go = new GameObject("New Fillet Radar");
            FilletRadar result = go.AddComponent<FilletRadar>();
            result.Apply();
            return result;
        }

    }
}
