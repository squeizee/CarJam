using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace ExtendedPrimitives_11.Internal {

    public class PieFilletEdge : Element {
 
        float[] profileAngles;
        Vector3[] profilePoints;
        Vector3[] profileBeginNormals;
        Vector3[] profileNormalsDelta;

        public float cachedRadialLength;

        public PieFilletEdge(bool displayed,ExtendedPrimitive ep, List<Element> eList, bool flipNormals, int filletSegments, int radialSegments) {
            Displayed = displayed;
            parent = ep;
            eList.Add(this);
            flipNormals = ep.FlipNormals ? !flipNormals : flipNormals;
            NormalSign = ep.FlipNormals ? -1f : 1f;
            SegmentsX = radialSegments;
            SegmentsY = filletSegments;
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

            profileAngles = new float[LengthY];
 
            profilePoints = new Vector3[LengthY];
            profileBeginNormals = new Vector3[LengthY];
            profileNormalsDelta =   new Vector3[LengthY];
        }

        public void SetPositionAndSize( float angle, float radius, float fillet, float sfillet, Vertex[] beginProfile, Vertex[] endProfile) {
            float _angle = angle * Mathf.Deg2Rad;    
            for (int y = 0; y < LengthY; y++) {
                Vertex pv = beginProfile[SegmentsY - y];
                profilePoints[ y  ] = pv.Pos;
                profileAngles[y] = _angle - Mathf.Atan2(profilePoints[y].z, profilePoints[y].x) * 2;
                profileBeginNormals[y] = pv.Normal;
                Matrix2d backTM = new Matrix2d(-profileAngles[y]);
                profileNormalsDelta[y] =  backTM.MultiplyVectorY(endProfile[SegmentsY - y].Normal) - profileBeginNormals[y];
            }

            for (int x = 0; x < LengthX; x++) {
                  for (int y = 0; y < LengthY; y++) {
                    Vertex v = this[x, y];
                    float rot =   profileAngles[y] * v.NormalizedCoords.x;
                    Matrix2d tm = new Matrix2d(rot);
                    v.Pos = tm.MultiplyVectorY( profilePoints[y] );
                    Vector3 n =  new Vector3( profileBeginNormals[y].x + profileNormalsDelta[y].x * v.NormalizedCoords.x, profileBeginNormals[y].y, profileBeginNormals[y].z + profileNormalsDelta[y].z * v.NormalizedCoords.x );
                    v.Normal = tm.MultiplyVectorY( n );
                }
            }

            if (Displayed) {
                for (int v = 0; v<vertices.Length; v++) {
                    Vertex vert = vertices[v];
                    parent.mvertices[vert] = vert.Pos;
                    parent.mnormals[vert] = vert.Normal;
                }
            }
            cachedRadialLength = profileAngles[0] * radius;
         }

        public void SetUVPositionAndSize(  Vector2[] uvs, float filletRadius, Vector2 offset) {
            float l = filletRadius * Mathf.PI / 2;


            for (int x = 0; x<LengthX; x++) {
                Vertex VertFrom = this[x, 0];
                Vertex VertTo = this[x, SegmentsY];
                Vector2 uvFrom = new Vector2( VertFrom.Pos.x, VertFrom.Pos.z );
                Vector2 uvTo = new Vector2(VertTo.Pos.x, VertTo.Pos.z);

                Vector2 dir = (uvTo - uvFrom).normalized * l;
                uvFrom = uvTo - dir;

                for (int y = 0; y<LengthY; y++ ) {
                    Vertex vert = this[x,y];
                    vert.UV = offset + uvFrom + dir *  vert.NormalizedCoords.y ;
                }
            }

            if (Displayed) {
               for (int v = 0; v < vertices.Length; v++) {
                   Vertex vert = vertices[v];
                   uvs[vert] = vert.UV;
               }
            } 
 
        }

        //public static int CalcVerticesCount(int filletSegments, int radialSegments) {
        //    return (filletSegments + 1) * (radialSegments + 1);
        //}

 
    }
}
