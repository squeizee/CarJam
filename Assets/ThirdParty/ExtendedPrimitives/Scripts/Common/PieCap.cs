using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ExtendedPrimitives_11.Internal {

    public class PieCap : Element {
 
        public int InnerSegments;
        public int OuterSegments;
        public int InnerLength;
        public int OuterLength;

        public Vertex Inner(int idx) {
            return this[idx,0];
        }

        public Vertex Outer(int idx) {
            return this[idx, 1];
        }

        public override Vertex this[int x, int y] {
            get {
                if (y == 0) {
                    return vertices[x];
                } else  {
                    return vertices[InnerLength + x];
                }
            }

            set {
                if (y == 0) {
                    vertices[x] = value;
                } else {
                    vertices[InnerLength + x] = value;
                }
            }
        }

        public PieCap(bool displayed, ExtendedPrimitive ep, List<Element> eList, bool flipped, int innerSegments, int outerSegments) {
            Displayed = displayed;
            parent = ep;
            eList.Add(this);
            flipped = ep.FlipNormals ? !flipped : flipped;
            NormalSign = ep.FlipNormals ? -1 : 1;

            InnerSegments = innerSegments;
            OuterSegments = outerSegments;
            InnerLength = innerSegments + 1;
            OuterLength = outerSegments + 1;
 
         
            vertices = new Vertex[CalcVerticesCount(innerSegments, outerSegments)];
            int[] inner = new int[innerSegments+1];
            int[] outer = new int[outerSegments + 1];

            int localCounter = 0;

            for (int i = 0; i < InnerLength; i++) {
                Vertex vert = new Vertex(ref localCounter, ref ep.vertsCounter, new Vector2(i / (float)InnerSegments, 0), 1f);
                if (!Displayed) {
                    ep.vertsCounter--;
                }
                this[i, 0] = vert;
                inner[i] = vert.Local;
            }

            for (int i = 0; i < OuterLength; i++) {
                Vertex vert = new Vertex(ref localCounter, ref ep.vertsCounter, new Vector2(i / (float)OuterSegments, 1), 1f);
                if (!Displayed) {
                    ep.vertsCounter--;
                }
                this[i, 1] = vert;
                outer[i] = vert.Local;
            }

            if (Displayed) {
                ConnectTriangulator connect = new ConnectTriangulator(inner, outer);

                for (int i = 0; i < connect.ResultTris.Count; i++) {
                    ConnectTriangulator.Tris tri = connect.ResultTris[i];
                    bool trisFlipped = flipped ? !tri.Flipped : tri.Flipped;
                    BuildTriangle(trisFlipped, ep.Faces, vertices[tri.A], vertices[tri.B], vertices[tri.C]);
                }

                for (int i = 0; i < connect.ResultQuads.Count; i++) {
                    ConnectTriangulator.Quad quad = connect.ResultQuads[i];
                    bool quadFlipped = flipped ? !quad.Flipped : quad.Flipped;
                    BuildQuad(quadFlipped, ep.Faces, vertices[quad.A], vertices[quad.B], vertices[quad.C], vertices[quad.D]);
                }

                for (int i = 0; i < InnerLength - 1; i++) {
                    ep.MEdges.Add(new MeshEdge(Inner(i), Inner(i + 1)));
                }

                for (int i = 0; i < OuterLength - 1; i++) {
                    ep.MEdges.Add(new MeshEdge(Outer(i), Outer(i + 1)));
                }
                ep.MEdges.Add(new MeshEdge(Outer(0), Inner(0)));
                ep.MEdges.Add(new MeshEdge(Outer(OuterLength - 1), Inner(InnerLength - 1)));
            }
        }

        public void SetPositionAndSize( Vertex[] innerProfile, Vertex[] outerProfile) {
            if (Displayed) {
                for (int i = 0; i < InnerLength; i++) {
                    Vertex v = this[InnerLength - 1 - i, 0];
                    parent.mvertices[v] = v.Pos = innerProfile[i].Pos;
                    parent.mnormals[v] = v.Normal = innerProfile[i].Normal;
                }

                for (int i = 0; i < OuterLength; i++) {
                    Vertex v = this[i, 1];
                    parent.mvertices[v] = v.Pos = outerProfile[i].Pos;
                    parent.mnormals[v] = v.Normal = outerProfile[i].Normal;
                }
            } else {
                for (int i = 0; i < InnerLength; i++) {
                    Vertex v = this[InnerLength - 1 - i, 0];
                    v.Pos = innerProfile[i].Pos;
                    v.Normal = innerProfile[i].Normal;
                }

                for (int i = 0; i < OuterLength; i++) {
                    Vertex v = this[i, 1];
                    v.Pos = outerProfile[i].Pos;
                    v.Normal = outerProfile[i].Normal;
                }

            }
        }

        //public void SetUVPositionAndSize(Vector2[] uvs, Vector2 offset) {
        //    for (int v = 0; v < vertices.Length; v++) {
        //        Vertex vert = vertices[v];
        //        uvs[vert] = vert.UV = new Vector2( vert.Pos.x, vert.Pos.z ) + offset;
        //    }
        //}

        public static int CalcVerticesCount(int innerSegments, int outerSegments) {
            return innerSegments + outerSegments + 2;
        }

    }
}
