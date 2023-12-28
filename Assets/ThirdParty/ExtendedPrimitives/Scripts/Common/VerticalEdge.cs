using UnityEngine;
using System.Collections.Generic;

namespace ExtendedPrimitives_11.Internal {
    public class VerticalEdge : Element  {


        public VerticalEdge(bool displayed, ExtendedPrimitive ep, List<Element> eList, bool flipNormals, int segments) {
            Displayed = displayed;
            parent = ep;
            eList.Add(this);
            flipNormals = ep.FlipNormals ? !flipNormals : flipNormals;
            NormalSign = ep.FlipNormals ? -1f : 1f;
            SegmentsX = segments;
            SegmentsY = 1;
            LengthX = SegmentsX + 1;
            LengthY = 2;
            vertices = new Vertex[LengthX * LengthY];

            for (int y = 0; y < LengthY; y++) {
                for (int x = 0; x < LengthX; x++) {
                    this[x, y] = new Vertex(ref ep.vertsCounter, new Vector2(x / (float)SegmentsX, y / 1));
                    if (!displayed) {
                        ep.vertsCounter--;
                    }
                }
            }

            CreateLayoutArrays();

            if (Displayed) {
                for (int x = 0; x < SegmentsX; x++) {
                    BuildQuad(flipNormals, ep.Faces, this[x, 0], this[x, 1], this[x + 1, 1], this[x + 1, 0]);
                }

                for (int x = 0; x <= SegmentsX; x++) {
                    ep.MEdges.Add(new MeshEdge(this[x, 0], this[x, 1]));
                }

                for (int x = 0; x < SegmentsX; x++) {
                    ep.MEdges.Add(new MeshEdge(this[x, 0], this[x + 1, 0]));
                    ep.MEdges.Add(new MeshEdge(this[x, 1], this[x + 1, 1]));
                }
            }
        }
 

 
 

        public static int CalcVerticesCount(int segments) {
            return (segments + 1) * 2;
        }



 
    }
}
