using UnityEngine;
using System.Collections.Generic;

namespace ExtendedPrimitives_11.Internal {
    public class Quad :Element {

        public Quad(bool displayed, ExtendedPrimitive ep, List<Element> eList, bool flipped, float alphaColor) {  
            Displayed = displayed;
            parent = ep;
            eList.Add(this);
            flipped = ep.FlipNormals ? !flipped : flipped;
            NormalSign = flipped ? -1 : 1;
            SegmentsX = 1;
            SegmentsY = 1;
            LengthX = 2;
            LengthY = 2;
            vertices = new Vertex[2 * 2];

            this[0, 0] = new Vertex(ref ep.vertsCounter, new Vector2(0, 0), alphaColor );
            this[1, 0] = new Vertex(ref ep.vertsCounter, new Vector2(1, 0), alphaColor);
            this[0, 1] = new Vertex(ref ep.vertsCounter, new Vector2(0, 1), alphaColor);
            this[1, 1] = new Vertex(ref ep.vertsCounter, new Vector2(1, 1), alphaColor);
            if (!Displayed) {
                ep.vertsCounter -= 4;
            }

            CreateLayoutArrays();
            if (Displayed) {
                ep.MEdges.Add(new MeshEdge(this[0, 0], this[0, 1]));
                ep.MEdges.Add(new MeshEdge(this[0, 1], this[1, 1]));
                ep.MEdges.Add(new MeshEdge(this[1, 1], this[1, 0]));
                ep.MEdges.Add(new MeshEdge(this[1, 0], this[0, 0]));
                BuildQuad(flipped, ep.Faces, this[0, 0], this[0, 1], this[1, 1], this[1, 0]);
            }
        }

        public void SetPositionAndSize( Vertex v0, Vertex v1, Vertex v2, Vertex v3 ) {
            if (Displayed) {
                parent.mvertices[vertices[0]] = vertices[0].Pos = v0.Pos;
                parent.mvertices[vertices[1]] = vertices[1].Pos = v3.Pos;
                parent.mvertices[vertices[2]] = vertices[2].Pos = v1.Pos;
                parent.mvertices[vertices[3]] = vertices[3].Pos = v2.Pos;

                parent.mnormals[vertices[0]] = vertices[0].Normal = v0.Normal;
                parent.mnormals[vertices[1]] = vertices[1].Normal = v3.Normal;
                parent.mnormals[vertices[2]] = vertices[2].Normal = v1.Normal;
                parent.mnormals[vertices[3]] = vertices[3].Normal = v2.Normal;
            } else {
                vertices[0].Pos = v0.Pos;
                vertices[1].Pos = v3.Pos;
                vertices[2].Pos = v1.Pos;
                vertices[3].Pos = v2.Pos;

                vertices[0].Normal = v0.Normal;
                vertices[1].Normal = v3.Normal;
                vertices[2].Normal = v1.Normal;
                vertices[3].Normal = v2.Normal;
            }
        }

        public void SetUVPositionAndSize(Vector2[] uvs, Vector2 v0, Vector2 v1, Vector2 v2, Vector2 v3) {
            if (Displayed) {
                uvs[vertices[0]] = vertices[0].UV = v0;
                uvs[vertices[2]] = vertices[2].UV = v1;
                uvs[vertices[3]] = vertices[3].UV = v2;
                uvs[vertices[1]] = vertices[1].UV = v3;
            } else {
                vertices[0].UV = v0;
                vertices[2].UV = v1;
                vertices[3].UV = v2;
                vertices[1].UV = v3;
            }
        }

        public void SetUVPositionAndSize(Vector2[] uvs, Vertex v0, Vertex v1, Vertex v2, Vertex v3) {
            if (Displayed) {
                uvs[vertices[0]] = vertices[0].UV = v0.UV;
                uvs[vertices[1]] = vertices[1].UV = v3.UV;
                uvs[vertices[2]] = vertices[2].UV = v1.UV;
                uvs[vertices[3]] = vertices[3].UV = v2.UV;
            } else {
                vertices[0].UV = v0.UV;
                vertices[1].UV = v3.UV;
                vertices[2].UV = v1.UV;
                vertices[3].UV = v2.UV;
            }
        }

        public Vector2 AverageSize() {
            float x = Mathf.LerpUnclamped( Vector3.Distance(Corners[0].Pos, Corners[3].Pos ), Vector3.Distance(Corners[1].Pos, Corners[2].Pos), 0.5f);
            float y = Vector3.Distance(Corners[0].Pos, Corners[1].Pos);
            return new Vector2(x,y);
        }
 
    }
}
