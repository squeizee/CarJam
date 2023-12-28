using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ExtendedPrimitives_11.Internal {

    public class PieCorner : Element {

        public PieCorner(bool displayed, ExtendedPrimitive ep, List<Element> eList, bool flipNormals,  int filletSegments, int sliceFilletSegments) {
            Displayed = displayed;
            parent = ep;
            eList.Add(this);
            flipNormals = ep.FlipNormals ? !flipNormals : flipNormals;
            NormalSign = ep.FlipNormals ? -1f : 1f;
            SegmentsX = filletSegments;
            SegmentsY = sliceFilletSegments;
            LengthX = SegmentsX + 1;
            LengthY = SegmentsY + 1;
            vertices = new Vertex[LengthX * LengthY];

            for (int y = 0; y < LengthY; y++) {
                for (int x = 0; x < LengthX; x++) {
                    Vertex vert = new Vertex(ref ep.vertsCounter, new Vector2( x/(float)SegmentsX, y/(float)SegmentsY  ));
                    if (!Displayed) {
                        ep.vertsCounter--;
                    }
                    vert.Col.a =   (1f-vert.NormalizedCoords.x) * vert.NormalizedCoords.y ;
                    this[x, y] = vert;
                }
            }

            CreateLayoutArrays();

            if (Displayed) {
                for (int y = 0; y < SegmentsY; y++) {
                    for (int x = 0; x < SegmentsX; x++) {
                        BuildQuad(flipNormals, ep.Faces, this[x, y], this[x, y + 1], this[x + 1, y + 1], this[x + 1, y]);
                    }
                }

                for (int y = 0; y < LengthY; y++) {
                    for (int x = 0; x < SegmentsX; x++) {
                        ep.MEdges.Add(new MeshEdge(this[x, y], this[x + 1, y]));
                    }
                }

                for (int x = 0; x < LengthX; x++) {
                    for (int y = 0; y < SegmentsY; y++) {
                        ep.MEdges.Add(new MeshEdge(this[x, y], this[x, y + 1]));
                    }
                }
            }
        }

        public void SetPositionAndSize( float radius, float fillet, float sfillet, float yPos ) {

            for (int y = 0; y < LengthY; y++) {
                float ya = this[0, y].NormalizedCoords.y * r90;
                float normalZ = -Mathf.Cos(ya);
                float normalY = Mathf.Sin(ya);
                Vertex v = this[0, y];
                v.RefNormal = new Vector3(0, normalY, normalZ) * NormalSign;
                v.RefPos = new Vector3(0, normalY, normalZ) * sfillet;
                v.RefPos.y += fillet - sfillet;
                v.RefPos.z += sfillet;
            }

            for (int x = 1; x < LengthX; x++) {
                float rotAlongX = -this[x, 0].NormalizedCoords.x * r90;
                Matrix2d rm = new Matrix2d(rotAlongX);
                for (int y = 0; y < LengthY; y++) {
                    Vertex v = this[x, y];
                    Vertex vx0 = this[0, y];
                    v.RefPos = rm.MultiplyVectorZ(vx0.RefPos);
                    v.RefNormal = rm.MultiplyVectorZ(vx0.RefNormal);
                }
            }

            float radOffset = Mathf.Sqrt(Mathf.Pow(radius, 2) - Mathf.Pow(sfillet, 2)) - fillet;

            if (Displayed) {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex v = vertices[i];
                    v.RefPos.x += radOffset;
                    v.RefPos.y += yPos;
                    parent.mvertices[v] = v.Pos = v.RefPos;
                    parent.mnormals[v] = v.Normal = v.RefNormal;
                }
            } else {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex v = vertices[i];
                    v.RefPos.x += radOffset;
                    v.RefPos.y += yPos;
                    v.Pos = v.RefPos;
                    v.Normal = v.RefNormal;
                }
            }
        }

        public void SetUVPlanarXYUnfoldB(Vector2[] uvs, float sliceFilletRadius,   Vector2 snapTo) {
            float l = sliceFilletRadius * r90;

            Vector2 offset = snapTo - (Vector2)this[0, 0].Pos;
            for (int x = 0; x<LengthX; x++) {
                Vector2 va = (Vector2)this[x, 0].Pos ;
                Vector2 vb = (Vector2)this[x, SegmentsY].Pos ;
                Vector2 dir = (vb - va).normalized;
 
                va += offset;
                for (int y = 0; y<LengthY; y++) {
                    Vertex vert = this[x, y];
                    vert.UV = va + dir * l * vert.NormalizedCoords.y;
                }
            }

            if (Displayed) {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex vert = vertices[i];
                    uvs[vert] = vert.UV;
                }
            }
        }
 
 
 
    }
}
