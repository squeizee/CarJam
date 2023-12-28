using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace ExtendedPrimitives_11.Internal {

    public class Cap : Element {
 
        public Cap(bool displayed, ExtendedPrimitive ep, List<Element> eList, bool flipNormals, int segments ) {
            Displayed = displayed;
            parent = ep;
            eList.Add(this);
            flipNormals = ep.FlipNormals ? !flipNormals : flipNormals;
            vertices = new Vertex[CalcVerticesCount(segments)];
            int localCounter = 0;
            for (int i = 0; i < vertices.Length; i++) {
                Vertex _vert = new Vertex(ref localCounter, ref ep.vertsCounter, Vector2.zero, 1f);
                if (!Displayed) {
                    ep.vertsCounter--;
                }
                vertices[i] = _vert;
            }
            Left = new Vertex[2];
            Left[0] = vertices[1];
            Left[1] = vertices[0];

            LeftReversed = new Vertex[2];
            LeftReversed[0] = Left[1];
            LeftReversed[1] = Left[0];

            Right = new Vertex[2];
            Right[0] = vertices[vertices.Length - 1];
            Right[1] = vertices[0];

            RightReversed = new Vertex[2];
            RightReversed[0] = Right[1];
            RightReversed[1] = Right[0];

            Outline = vertices;

            if (Displayed) {
                for (int i = 1; i < vertices.Length - 1; i++) {
                    BuildTriangle(flipNormals, parent.Faces, vertices[0], vertices[i + 1], vertices[i]);
                }

                for (int i = 1; i < vertices.Length - 1; i++) {
                    parent.MEdges.Add(new MeshEdge(vertices[i], vertices[i + 1]));
                }
                parent.MEdges.Add(new MeshEdge(vertices[1], vertices[vertices.Length - 1]));
            }
        }

        public void SetPositionAndSize( Vertex[] profile ) {
            if (!Displayed) {
                return;
            }
            Vector3 normal = profile[0].Normal;
            parent.mvertices[vertices[0]] = vertices[0].Pos =  new Vector3(0, profile[0].Pos.y, 0);
            parent.mnormals[vertices[0]] = vertices[0].Normal = normal;

            for ( int i = 0; i< profile.Length; i++ ) {
                int vidx = i + 1;
                parent.mvertices[vertices[vidx]] = vertices[vidx].Pos = profile[i].Pos;
                parent.mnormals[vertices[vidx]] = vertices[vidx].Normal = normal;
            }
        }

        public void SetPositionAndSize(Vertex[] profile, Vector3 centerPos  ) {
            if (!Displayed) {
                return;
            }
            Vector3 normal = profile[0].Normal;
            parent.mvertices[vertices[0]] = vertices[0].Pos = centerPos;
            parent.mnormals[vertices[0]] = vertices[0].Normal = normal;

            for (int i = 0; i < profile.Length; i++) {
                int vidx = i + 1;
                parent.mvertices[vertices[vidx]] = vertices[vidx].Pos = profile[i].Pos;
                parent.mnormals[vertices[vidx]] = vertices[vidx].Normal = normal;
            }
        }

        public static int CalcVerticesCount(  int segments) {
            return  segments + 1 +1;
        }

        public void SetUVPositionAndSize(Vector2[] uvs ) {
            if (!Displayed) {
                return;
            }
            for (int v = 0; v < vertices.Length; v++) {
                Vertex vert = vertices[v];
                uvs[vert] = vert.UV = new Vector2(vert.Pos.x, vert.Pos.z)  ;
            }
        }
 

        public void SetUVPositionAndSize(Vector2[] uvs, Vector2 offset) {
            if (!Displayed) {
                return;
            }
            for (int v = 0; v < vertices.Length; v++) {
                Vertex vert = vertices[v];
                uvs[vert] = vert.UV = new Vector2(vert.Pos.x, vert.Pos.z*-1) + offset;
                
            }
        }

    }
}
