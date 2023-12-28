using UnityEngine;
using System.Collections.Generic;

namespace ExtendedPrimitives_11.Internal {
    public class HorizontalEdge : Element  {

        public HorizontalEdge(bool displayed, ExtendedPrimitive ep, List<Element> eList, bool flipped, int segments , bool flipAlpha) {
            Displayed = displayed;
            parent = ep;
            eList.Add(this);
            flipped = ep.FlipNormals ? !flipped : flipped;
            SegmentsX = 1;
            SegmentsY = segments;
            LengthX = SegmentsX + 1;
            LengthY = SegmentsY + 1;
            vertices = new Vertex[LengthX * LengthY];
            for (int y = 0; y < LengthY; y++) {
                for (int x = 0; x < LengthX; x++) {
                    Vertex vert = new Vertex(ref ep.vertsCounter,  new Vector2(x/1f, y/(float)SegmentsY),    y / (float)SegmentsY );
                    vert.Col.a = flipAlpha ? 1f - vert.NormalizedCoords.y : vert.NormalizedCoords.y;
                    if (!displayed) {
                        ep.vertsCounter--;
                    }
                    this[x, y] = vert;
                    
                }
            }
            base.CreateLayoutArrays();

            if (Displayed) {
                for (int y = 0; y < SegmentsY; y++) {
                    BuildQuad(flipped, ep.Faces, this[0, y], this[0, y + 1], this[1, y + 1], this[1, y]);
                }

                for (int y = 0; y <= SegmentsY; y++) {
                    ep.MEdges.Add(new MeshEdge(this[0, y], this[1, y]));
                }

                for (int y = 0; y < SegmentsY; y++) {
                    ep.MEdges.Add(new MeshEdge(this[0, y], this[0, y + 1]));
                    ep.MEdges.Add(new MeshEdge(this[1, y], this[1, y + 1]));
                }
            }
 
        }
 

 


 
 
    }
}
