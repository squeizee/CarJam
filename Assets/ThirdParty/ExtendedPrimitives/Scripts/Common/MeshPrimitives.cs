using UnityEngine;
using System.Collections.Generic;

namespace ExtendedPrimitives_11.Internal {

    public class Vertex {
        public int LocalX;
        public int LocalY;

        public int Local;
        public int Global;

        public Vector3 RefNormal;
        public Vector3 Normal;

        public Vector3 RefPos;
        public Vector3 Pos;

        public Vector2 RefUV;
        public Vector2 UV;

        public Color Col;
        public Vector4 Tangent;

		public List<Face> AdjacentFaces = new List<Face>();
 

        public float AdjacentMult = 0;
        public Vector2 NormalizedCoords;

        public Color DebugColor {
            get {

                Color c = Color.Lerp(Color.red, Color.yellow,  NormalizedCoords.x);
                return Color.Lerp(c, Color.green,  NormalizedCoords.y);
            }
        }

        public Vertex(ref int verticesCounter) {
            Global = verticesCounter;
            verticesCounter++;
        }

        public Vertex(ref int verticesCounter, Vector2 normalizedCoords) {
            Global = verticesCounter;
            NormalizedCoords = normalizedCoords;
            verticesCounter++;
        }

        public Vertex(ref int verticesCounter, Vector2 normalizedCoords, float colorAlpha) {
            Global = verticesCounter;
            NormalizedCoords = normalizedCoords;
            verticesCounter++;
            Col.a = colorAlpha;
        }

        public Vertex(ref int localCounter, ref int verticesCounter, Vector2 normalizedCoords, float colorAlpha) {
            Global = verticesCounter;
            NormalizedCoords = normalizedCoords;
            verticesCounter++;
            Local = localCounter;
            localCounter++;
            Col.a = colorAlpha;
        }

        public Vertex(ref int verticesCounter, float colorAlpha) {
            Global = verticesCounter;
            verticesCounter++;
            Col.a = colorAlpha;
        }

        public static implicit operator int(Vertex i) {
            return i.Global;
        }

        public static implicit operator Color(Vertex i) {
            return i.Col;
        }

        public void AddAdjacentFace( Face item ) {
			AdjacentFaces.Add( item ) ;
 
			AdjacentMult = 1f / AdjacentFaces.Count;
        }

        public override string ToString() {
            return string.Format("Vertex #{0} pos:{1}", Global, Pos);
        }

        public void PrintNormalsAndTangents() {
            Debug.LogFormat("normal:{0} tangent:{1}", Normal.ToString("F3" ), Tangent.ToString("F3"));
        }
    }

    public struct MeshEdge {
        public int A;
        public int B;

        public MeshEdge(int a, int b) {
            A = a;
            B = b;
        }
    }

    public class Face {

        public class Channel {
            public Face face;
            public float tv;
            public float sign;
            bool isParallel;
            public Vector3 tangent;

            public Channel(Face _face) {
                face = _face;
            }

            public void SetUV(Vector2[] uvs) {
                Vector2 _0 = uvs[face.v0];
                Vector2 _1 = uvs[face.v1];
                Vector2 _2 = uvs[face.v2];

                if (Mathf.Approximately(_1.y, _2.y)) {
                    isParallel = true;
                    sign = Mathf.Sign(_2.x - _1.x);
                } else {
                    isParallel = false;
                    tv = (_0.y - _1.y) / (_2.y - _1.y);
                    float _x = Mathf.LerpUnclamped(_1.x, _2.x, tv);
                    sign = _0.x < _x ? 1 : -1;
                }
            }

            public void UpdateTangents(Vector3[] mvertices) {
                Vector3 _0 = mvertices[face.v0];
                Vector3 _1 = mvertices[face.v1];
                Vector3 _2 = mvertices[face.v2];
                if (isParallel) {
                    tangent = ((_2 - _1) * sign);
                } else {
                    Vector3 pointOn12 = Vector3.LerpUnclamped(_1, _2, tv);
                    tangent = (pointOn12 - _0) * sign;
                }
            }
        }

        public int v0;
        public int v1;
        public int v2;

        public Channel UV0;
        public Channel UV2;

        public Face(Vertex va, Vertex vb, Vertex vc) {
            va.AddAdjacentFace(this);
            vb.AddAdjacentFace(this);
            vc.AddAdjacentFace(this);
            v0 = va;
            v1 = vb;
            v2 = vc;
            UV0 = new Channel(this);
            UV2 = new Channel(this);
        }

    }
}
