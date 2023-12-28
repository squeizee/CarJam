using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace ExtendedPrimitives_11.Internal {
    public class NGonCorner : Element {

        Matrix2d[] yRotMatrices;
        float uvOffset;
        float uvRadialLength;

        public NGonCorner (bool displayed, ExtendedPrimitive _ep, List<Element> eList, bool flipNormals,  int hSegments, int vSegments, bool flipAlpha ) {
            Displayed = displayed;
            eList.Add(this);
            parent = _ep;
            flipNormals = parent.FlipNormals ? !flipNormals : flipNormals;
            NormalSign = parent.FlipNormals ? -1f : 1f;
            SegmentsX = hSegments;
            SegmentsY = vSegments;
            LengthX = SegmentsX + 1;
            LengthY = SegmentsY + 1;
            vertices = new Vertex[LengthX * LengthY];

            for (int y = 0; y < LengthY; y++) {
                for (int x = 0; x < LengthX; x++) {
                    Vertex vert = new Vertex(ref parent.vertsCounter, new Vector2(x / (float)SegmentsX, y / (float)SegmentsY));
                    vert.LocalX = x;
                    vert.LocalY = y;
                    if (!Displayed) {
                        parent.vertsCounter--;
                    }
                
                    vert.Col.a =  flipAlpha ? 1f- vert.NormalizedCoords.y : vert.NormalizedCoords.y ;
                    this[x, y] = vert;
                }
            }

            CreateLayoutArrays();

            if (Displayed) {
                for (int y = 0; y < SegmentsY; y++) {
                    for (int x = 0; x < SegmentsX; x++) {
                        BuildQuad(flipNormals, parent.Faces, this[x, y], this[x, y + 1], this[x + 1, y + 1], this[x + 1, y]);
                    }
                }

                for (int y = 0; y < LengthY; y++) {
                    for (int x = 0; x < SegmentsX; x++) {
                        parent.MEdges.Add(new MeshEdge(this[x, y], this[x + 1, y]));
                    }
                }


                for (int x = 0; x < LengthX; x++) {
                    for (int y = 0; y < SegmentsY; y++) {
                        parent.MEdges.Add(new MeshEdge(this[x, y], this[x, y + 1]));
                    }
                }
            }
            yRotMatrices = new Matrix2d[LengthX];
        }

        public void SetPositionAndSize( Fillet horizontal, Fillet vertical, Vector3 pivot) {
            if (Displayed) {
                for (int y = 0; y < LengthY; y++) {
                    float ya = vertical.Rot + this[0, y].NormalizedCoords.y * vertical.Angle;
                    float nX = Mathf.Cos(ya);
                    float nY = Mathf.Sin(ya);
                    Vertex v = this[0, y];
                    v.RefNormal = new Vector3(nX, nY, 0);
                    v.RefPos = v.RefNormal * vertical.ClampedRadius;
                    v.RefPos += vertical.Center;
                    v.RefPos.x -= pivot.x;
                    v.RefNormal *= NormalSign;
                }

                for (int x = 0; x < LengthX; x++) {
                    float rotation = horizontal.Rot + horizontal.Angle * this[x, 0].NormalizedCoords.x;
                    yRotMatrices[x] = new Matrix2d(rotation);
                    yRotMatrices[x].Position = new Vector2(pivot.x, 0);


                    for (int y = 0; y < LengthY; y++) {
                        Vertex v = this[x, y];
                        Vertex refVert = this[0, y];
                        v.Pos = parent.mvertices[v] = yRotMatrices[x].MultiplyPointY(refVert.RefPos);
                        v.Normal = parent.mnormals[v] = yRotMatrices[x].MultiplyVectorY(refVert.RefNormal);
                    }
                }
            } else {
                for (int y = 0; y < LengthY; y++) {
                    float ya = vertical.Rot + this[0, y].NormalizedCoords.y * vertical.Angle;
                    float nX = Mathf.Cos(ya);
                    float nY = Mathf.Sin(ya);
                    Vertex v = this[0, y];
                    v.RefNormal = new Vector3(nX, nY, 0);
                    v.RefPos = v.RefNormal * vertical.ClampedRadius;
                    v.RefPos += vertical.Center;
                    v.RefPos.x -= pivot.x;
                    v.RefNormal *= NormalSign;
                }

                for (int o = 0; o < Outline.Length; o++) {
                    Vertex v = Outline[o];
                    float rotation = horizontal.Rot + horizontal.Angle * v.NormalizedCoords.x;
                    yRotMatrices[v.LocalX] = new Matrix2d(rotation);
                    yRotMatrices[v.LocalX].Position = new Vector2(pivot.x, 0);
                    Vertex refVert = this[0, v.LocalY];
                    v.Pos = parent.mvertices[v] = yRotMatrices[v.LocalX].MultiplyPointY(refVert.RefPos);
                    v.Normal = parent.mnormals[v] = yRotMatrices[v.LocalX].MultiplyVectorY(refVert.RefNormal);
                }
            }
        }
 
        public void SetUVPositionAndSize(bool outlineOnly, Vector2[] uvs, float verticalFillet, Vertex[] fromProfile, Vertex[] toProfile , bool reverse  ) {
            if (Displayed) {
                for (int x = 0; x < LengthX; x++) {
                    Vector3 dir3d = toProfile[x].Pos - fromProfile[x].Pos;
                    Vector2 _from = new Vector2(fromProfile[x].Pos.x, fromProfile[x].Pos.z);
                    Vector2 dir2d = (new Vector2(dir3d.x, dir3d.z)).normalized * verticalFillet * r90;
                    if (reverse) {
                        _from += dir2d;
                        dir2d = -dir2d;
                    }

                    for (int y = 0; y < LengthY; y++) {
                        Vertex v = this[x, y];
                        uvs[v] = v.UV = _from + dir2d * v.NormalizedCoords.y ;
                    }
                }
            }
        }
 
        public void SetUVPositionAndSizeInverted(bool outlineOnly, Vector2[] uvs, float verticalFillet, Vertex[] capProfile) {

            float radLength = verticalFillet * r90;

            if (Displayed) {
                for (int x = 0; x < LengthX; x++) {
                    for (int y = 0; y < LengthY; y++) {
                        Vertex v = this[x, y];
                        uvs[v] = v.UV = new Vector2(capProfile[x].Pos.x, capProfile[x].Pos.z) + yRotMatrices[x].MultiplyVector(new Vector2((1f - v.NormalizedCoords.y) * radLength, 0));
                    }
                }
            } else {
                if (outlineOnly) {
                    for (int x = 0; x < Outline.Length; x++) {
                        Vertex v = Outline[x];
                        v.UV = new Vector2(capProfile[x].Pos.x, capProfile[x].Pos.z) + yRotMatrices[x].MultiplyPoint(new Vector2(  v.NormalizedCoords.y  * radLength, 0));
                    }
                } else {
                    for (int x = 0; x < LengthX; x++) {
                        for (int y = 0; y < LengthY; y++) {
                            Vertex v = this[x, y];
                            v.UV = new Vector2(capProfile[x].Pos.x, capProfile[x].Pos.z) + yRotMatrices[x].MultiplyPoint(new Vector2( v.NormalizedCoords.y  * radLength, 0));
                        }
                    }
                }
            }
        }

    }
}