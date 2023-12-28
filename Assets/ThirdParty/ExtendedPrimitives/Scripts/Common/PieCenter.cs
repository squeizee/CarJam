using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ExtendedPrimitives_11.Internal{
	public class PieCenter : Element {

        public float cachedAngle;
 
        public PieCenter(bool displayed, ExtendedPrimitive ep, List<Element> eList,  bool flipNormals, int sFilletSegments ) {
            Displayed = displayed;
            parent = ep;
            eList.Add(this);
            flipNormals = ep.FlipNormals ? !flipNormals : flipNormals;
            NormalSign = ep.FlipNormals ? -1f : 1f;
            SegmentsX = sFilletSegments;
            SegmentsY = sFilletSegments;
            LengthX = SegmentsX + 1;
            LengthY = SegmentsY + 1;
            vertices = new Vertex[LengthX * LengthY];

             for (int y = 0; y < LengthY; y++) {
                for (int x = 0; x < LengthX; x++) {
                    Vertex vert = new Vertex(ref ep.vertsCounter, new Vector2(x / (float)SegmentsX, y / (float)SegmentsY));
                    if (!Displayed) {
                        ep.vertsCounter--;
                    }
                    vert.Col.a = vert.NormalizedCoords.y;
                    this[x, y] = vert;
                }
            }

            base.CreateLayoutArrays();

            if (Displayed) {
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

                for (int y = 0; y < SegmentsY; y++) {
                    for (int x = 0; x < SegmentsX; x++) {
                        BuildQuad(flipNormals, ep.Faces, this[x, y], this[x, y + 1], this[x + 1, y + 1], this[x + 1, y]);
                    }
                }
            }

            for (int y = 0; y<LengthY; y++) {
                Vertex v = this[SegmentsX, y];
                float a = r90 * v.NormalizedCoords.y;
                v.RefNormal = new Vector3(   0 , Mathf.Sin(a), -Mathf.Cos(a) ) * NormalSign;
 
            }
 
        }

        public void SetPositionAndSize( float angle, float sfillet, float yPos, bool sharpCenter ) {
            cachedAngle = (angle - 180) * Mathf.Deg2Rad;
            if (angle >= 180) {
                for (int y = 0; y < LengthY; y++) {
                    Vertex rv = this[SegmentsX, y];
                    rv.RefPos = rv.RefNormal * sfillet * NormalSign;
                    rv.RefPos.y += yPos;
                    rv.RefPos.z += sfillet;
                 }

             
                for (int x = 0; x < LengthX; x++) {
                    float a = cachedAngle * (1f - this[x, 0].NormalizedCoords.x);
                    Matrix2d tm = new Matrix2d(a);
                    for (int y = 0; y < LengthY; y++) {
                        Vertex rv = this[SegmentsX, y];
                        Vertex v = this[x, y];
                        v.Pos =  tm.MultiplyVectorY(rv.RefPos);
                        v.Normal =  tm.MultiplyVectorY(rv.RefNormal);
                    }
                }
                cachedAngle = 0;
            } else {
                if (sharpCenter) {
                    float t = Mathf.Tan(angle * 0.0087266f);
                    cachedAngle = (angle - 180) * Mathf.Deg2Rad;
                    for (int y = 0; y < LengthY; y++) {
                        Vertex rv = this[SegmentsX, y];
                        rv.RefPos = rv.RefNormal * sfillet * NormalSign;
                        
                         rv.RefPos.z += sfillet;
                         rv.RefPos.x = rv.RefPos.z/t;
                    }

                    Vector3 offset = new Vector3(0, yPos, 0);
                    for (int x = 0; x < LengthX; x++) {
                        float a = cachedAngle * (1f - this[x, 0].NormalizedCoords.x);
                        Matrix2d tm = new Matrix2d(a);

                        for (int y = 0; y < LengthY; y++) {
                            Vertex rv = this[SegmentsX, y];
                            Vertex v = this[x, y];
                            v.Pos =  rv.RefPos + offset;
                            v.Normal =  tm.MultiplyVectorY(rv.RefNormal);
                        }
                    }
                } else { 
                    float filletCx = sfillet/  Mathf.Tan( angle * 0.0087266f ) ;
                    cachedAngle = (angle - 180) * Mathf.Deg2Rad;
                    for (int y = 0; y < LengthY; y++) {
                        Vertex rv = this[SegmentsX, y];
                        rv.RefPos = rv.RefNormal * sfillet * NormalSign;
                    }

                    Vector3 offset = new Vector3(filletCx, yPos, sfillet);
                    for (int x = 0; x < LengthX; x++) {
                        float a = cachedAngle * (1f - this[x, 0].NormalizedCoords.x);
                        Matrix2d tm = new Matrix2d(a);
 
                        for (int y = 0; y < LengthY; y++) {
                            Vertex rv = this[SegmentsX, y];
                            Vertex v = this[x, y];
                            v.Pos =  tm.MultiplyVectorY(rv.RefPos) + offset;
                            v.Normal =  tm.MultiplyVectorY(rv.RefNormal);
                        }
                    }
                }
            }

            if (Displayed) {
                for (int i = 0; i<vertices.Length; i++) {
                    Vertex vert = vertices[i];
                    parent.mnormals[vert] = vert.Normal;
                    parent.mvertices[vert] = vert.Pos;
                }
            }
        }

        public void SetUVPositionAndSizeUnfoldB( Vector2[] uvs, float sliceFilletRadius, float pieAngle, Vector2 offset, bool sharpCenter ) {
             
           float width = sharpCenter? 0 : (pieAngle - 180) * Mathf.Deg2Rad * sliceFilletRadius ;
           float height = sliceFilletRadius * 1.570796f;

           for (int y = 0; y < LengthY; y++) {
               float yPos = height * this[0, y].NormalizedCoords.y;
               float yVal = pieAngle > 180 ? this[0, y].NormalizedCoords.y : -1f + this[0, y].NormalizedCoords.y;
               float _width =   width * yVal;
               float _fromX = -_width / 2f;
 
                     
                for (int x = 0; x < LengthX; x++) {
                    Vertex vert = this[x, y];
                    vert.UV = new Vector2(_fromX + _width * vert.NormalizedCoords.x , yPos) + offset;
                }
            }

            if (Displayed) {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex vert = vertices[i];
                    uvs[vert] = vert.UV;
                }
            }
        }

        public void SetUVPositionAndSize( Vector2[] uvs, float sliceFilletRadius, Vector2 offset ) {
             for (int x = 0; x < LengthX; x++) {
                 Vertex VertFrom = this[x, 0];
                 Vertex VertTo = this[x, SegmentsY];
                 Vector2 uvFrom = new Vector2(VertFrom.Pos.x, VertFrom.Pos.z);
                 Vector2 uvTo = new Vector2(VertTo.Pos.x, VertTo.Pos.z);
                     

                 for (int y = 0; y < LengthY; y++) {
                     Vertex vert = this[x, y];
                     vert.UV =  Vector2.LerpUnclamped( uvFrom, uvTo, vert.NormalizedCoords.y) + offset;
                 }
             }

            if (Displayed) {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex vert = vertices[i];
                    uvs[vert] = vert.UV;
                }
            }
        }

        //public static int CalcVerticesCount( int sFilletSegments) {
        //    return (sFilletSegments + 1) * (sFilletSegments + 1);
        //}

        //public static int CalcTrianglesCount( int sFilletSegments) {
        //    return (sFilletSegments + 1) * (sFilletSegments + 1) * 6;
        //}
    }
}
