using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace ExtendedPrimitives_11.Internal {

    public class NGonCap : Element {
 
        public NGonCap(bool displayed, ExtendedPrimitive ep, List<Element> eList, bool flipNormals, int filletSegments, int elementsCount) {
            Displayed = displayed;
            parent = ep;
            eList.Add(this);
            flipNormals = ep.FlipNormals ? !flipNormals : flipNormals;
            vertices = new Vertex[(filletSegments + 1) * elementsCount + 1 ];
            int localCounter = 0;
            for (int i = 0; i < vertices.Length; i++) {
                Vertex _vert = new Vertex(ref localCounter, ref ep.vertsCounter, Vector2.zero, 1f);
                if (!Displayed) {
                    ep.vertsCounter--;
                }
                vertices[i] = _vert;
            }

            if (Displayed) {
                for (int i = 1; i < vertices.Length - 1; i++) {
                    BuildTriangle(flipNormals, parent.Faces, vertices[0], vertices[i], vertices[i + 1]);
                }
                BuildTriangle(flipNormals, parent.Faces, vertices[0], vertices[vertices.Length - 1], vertices[1]);

                for (int i = 1; i < vertices.Length - 1; i++) {
                    parent.MEdges.Add(new MeshEdge(vertices[i], vertices[i + 1]));
                }
                parent.MEdges.Add(new MeshEdge(vertices[1], vertices[vertices.Length - 1]));
            }
        }

        public void SetPositionAndSize(Element[] cornersElements, bool useTop, bool zeroCenter) {

            int length = cornersElements[0].Top.Length;
            if (useTop) {
                Vector3 up = cornersElements[0].Top[0].Normal;
                Vector3 centerVertPos = Vector3.zero;

                if (zeroCenter) {
                     vertices[0].Pos = new Vector3(0, cornersElements[0].Top[0].Pos.y, 0);
                } else {
                    for (int e = 0; e < cornersElements.Length; e++) {
                        centerVertPos += cornersElements[e].Top[0].Pos / cornersElements.Length;
                    }
                      vertices[0].Pos = centerVertPos;
                }
                 vertices[0].Normal = up;

                int counter = 1;
                for (int e = 0; e < cornersElements.Length; e++) {

                    for (int i = 0; i < length; i++) {
                        int reversedI = length - 1 - i;
                        vertices[counter].Pos = cornersElements[e].Top[reversedI].Pos;
                        vertices[counter].Normal = up;
                        counter++;
                    }
                }

            } else {
                Vector3 up = cornersElements[0].Bottom[0].Normal;
                Vector3 centerVertPos = Vector3.zero;

                if (zeroCenter) {
                     vertices[0].Pos = new Vector3(0, cornersElements[0].Bottom[0].Pos.y, 0);
                } else {
                    for (int e = 0; e < cornersElements.Length; e++) {
                        centerVertPos += cornersElements[e].Bottom[0].Pos / cornersElements.Length;
                    }
                     vertices[0].Pos = centerVertPos;
                }
                 vertices[0].Normal = up;

                int counter = 1;
                for (int e = 0; e < cornersElements.Length; e++) {
                    for (int i = 0; i < length; i++) {
                        int reversedI = length - 1 - i;
                        vertices[counter].Pos = cornersElements[e].Bottom[reversedI].Pos;
                        vertices[counter].Normal = up;
                        counter++;
                    }
                }
            }

            if (Displayed) {
                for (int v = 0; v<vertices.Length; v++) {
                    Vertex vert = vertices[v];
                    parent.mvertices[vert] = vert.Pos;
                    parent.mnormals[vert] = vert.Normal;
                }
             }
             
        }

        int CalcVerticesCount(int segments) {
            return (segments + 1) * 3 + 1;
        }
    }
}
