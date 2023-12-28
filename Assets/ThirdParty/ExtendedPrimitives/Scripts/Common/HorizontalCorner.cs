using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace ExtendedPrimitives_11.Internal {
    public class HorizontalCorner : Element {

        public float angle;
        Matrix2d[] yRotMatrices;

        public HorizontalCorner(bool displayed, ExtendedPrimitive _ep, List<Element> eList, bool flipNormals, int filletSegments, int radialSegments) {
            Displayed = displayed;
            eList.Add(this);
            parent = _ep;
            flipNormals = parent.FlipNormals ? !flipNormals : flipNormals;
            NormalSign = parent.FlipNormals ? -1f : 1f;
            SegmentsX = radialSegments;
            SegmentsY = filletSegments;
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
                    vert.Col.a = vert.NormalizedCoords.y;
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

        public void SetPositionAndSize(bool outlineOnly, Vector2 _prev, Vector2 _this, Vector2 _next,   float fillet, float capfillet,  float yPos) {
            bool isClockwice = Triangle2d.IsClockwise(_prev, _this, _next);

            Vector2 _prevDir = _this - _prev;
            Vector2 _nextDir = _this - _next;
            yPos -= capfillet;

            float clockwiseSign = isClockwice ? 1 : -1;
            Vector2 _prevDirOrtho = Edge2d.Rotate90(_prevDir.normalized) * clockwiseSign;
            Vector2 _nextDirOrtho = -Edge2d.Rotate90(_nextDir.normalized) * clockwiseSign;
            Vector2 filletCenter = new Vector2();
                
            Extension.LineLineItersection(_prev + _prevDirOrtho * fillet, _prevDir, _next + _nextDirOrtho * fillet, _nextDir, ref filletCenter);
  
            float xOffset = fillet - capfillet;
            float normalSign  = NormalSign *  clockwiseSign;

            for (int y = 0; y < LengthY; y++) {
                float ya = this[0, y].NormalizedCoords.y * r90;
                float nX = Mathf.Cos(ya);
                float nY = Mathf.Sin(ya);
                Vertex v = this[0, y];
                v.RefNormal = new Vector3(nX, nY, 0) ;
                v.RefPos = v.RefNormal * capfillet;
                v.RefPos.x += xOffset;
                v.RefPos.y += yPos;
                v.RefNormal *= normalSign;
            }

            float rotAngleFrom = Edge2d.RotationAngle(_this, _next) + r90;
            rotAngleFrom = rotAngleFrom < 0 ? rotAngleFrom + r360 : rotAngleFrom;

            float rotAngleTo = Edge2d.RotationAngle( _this, _prev ) - r90;
            rotAngleTo = rotAngleTo < 0 ? rotAngleTo + r360 : rotAngleTo;

            if (!isClockwice) {
                float _rotAngleFrom = rotAngleFrom;
                float _rotAngleTo = rotAngleTo;
                rotAngleFrom = _rotAngleTo + r180;
                rotAngleTo = _rotAngleFrom + r180;
            }

            angle =  (rotAngleTo  - rotAngleFrom + r360) % r360  ;

            if (Displayed) {
                for (int x = 0; x < LengthX; x++) {
                    int _x = isClockwice ? x : SegmentsX - x;
                    float rotation = rotAngleFrom + angle * this[_x, 0].NormalizedCoords.x;
                    yRotMatrices[x] = new Matrix2d(rotation);
                    yRotMatrices[x].Position = filletCenter;
                    for (int y = 0; y < LengthY; y++) {
                        Vertex v = this[x, y];
                        Vertex refVert = this[0, y];
                        v.Pos = parent.mvertices[v] = yRotMatrices[x].MultiplyPointY(refVert.RefPos);
                        v.Normal = parent.mnormals[v] = yRotMatrices[x].MultiplyVectorY(refVert.RefNormal);
                    }
                }
            } else {
                for (int x = 0; x < LengthX; x++) {
                    int _x = isClockwice ? x : SegmentsX - x;
                    float rotation = rotAngleFrom + angle * this[_x, 0].NormalizedCoords.x;
                    yRotMatrices[x] = new Matrix2d(rotation);
                    yRotMatrices[x].Position = filletCenter;

                }
                if (outlineOnly) {
                    for (int i = 0; i < Outline.Length; i++) {
                        Vertex v = Outline[i];
                        Vertex refVert = this[0, v.LocalY];
                        v.Pos = yRotMatrices[v.LocalX].MultiplyPointY(refVert.RefPos);
                        v.Normal = yRotMatrices[v.LocalX].MultiplyVectorY(refVert.RefNormal);
                    }
                } else {
                    for (int i = 0; i < vertices.Length; i++) {
                        Vertex v = vertices[i];
                        Vertex refVert = this[0, v.LocalY];
                        v.Pos = yRotMatrices[v.LocalX].MultiplyPointY(refVert.RefPos);
                        v.Normal = yRotMatrices[v.LocalX].MultiplyVectorY(refVert.RefNormal);
                    }
                }
            }
         }

        public void SetPositionAndSize(bool outlineOnly, OutlinedFillet of, float yPos) {
            float yOffset = yPos - of.OuterOutline;

            uvScale.x = Mathf.LerpUnclamped( of.GetFilletLength(), of.GetOuterOutlineLength(), 0.5f);
            uvScale.y = of.OuterOutline * r90;
                //Vector2.Distance(of.GetPoint(0), of.GetOuterOutlinePoint(0));

            for (int y = 0; y<LengthY; y++) {
                float a = this[0, y].NormalizedCoords.y * r90;
                Vector3 normal = new Vector3(Mathf.Cos(a), Mathf.Sin(a) , 0);
                this[0, y].RefNormal = normal * NormalSign;
                this[0, y].RefPos = new Vector3(normal.x, normal.y * of.OuterOutline + yOffset, 0);
            }
 
            for (int x = 0; x < LengthX; x++) {
                float lv = this[x, 0].NormalizedCoords.x;
                Vector2 _from = of.GetPoint(lv);
                Vector2 _to = of.GetOuterOutlinePoint(lv);

                Matrix2d tmPos = new Matrix2d(_from, _to, false);

                float na = of.Rot + of.Angle * lv;
                if (of.Sign <= 0) {
                    na += r180;
                }
                Matrix2d tmNorm = new Matrix2d(na);

                for (int y = 0; y < LengthY; y++) {
                    Vertex vert = this[x, y];
                    Vertex refvert = this[0, y];
                    vert.Pos = tmPos.MultiplyPointY(refvert.RefPos);
                    vert.Normal = tmNorm.MultiplyVectorY(refvert.RefNormal);
                }
            }
            if (Displayed) {
                for (int v = 0; v < vertices.Length; v++) {
                    Vertex vert = vertices[v];
                    parent.mvertices[vert] = vert.Pos ;
                    parent.mnormals[vert] = vert.Normal ;
                }
            }
         }

        public void SetUVPositionAndSize(bool outlineOnly, Vector2[] uvs, float capFilletRadius, float filletRadius) {
            float radOffset = filletRadius - capFilletRadius;
            float radLength = capFilletRadius * r90;

            if (Displayed) {
                for (int x = 0; x < LengthX; x++) {
                    for (int y = 0; y < LengthY; y++) {
                        Vertex v = this[x, y];
                        uvs[v] = v.UV = yRotMatrices[x].MultiplyPoint(new Vector2(radOffset + (1f - v.NormalizedCoords.y) * radLength, 0));
                    }
                }
            } else {
                if (outlineOnly) {
                    for (int x = 0; x < Outline.Length; x++) {
                        Vertex v = Outline[x];
                        v.UV = yRotMatrices[x].MultiplyPoint(new Vector2(radOffset + (1f - v.NormalizedCoords.y) * radLength, 0));
                    }
                } else {
                    for (int x = 0; x < LengthX; x++) {
                        for (int y = 0; y < LengthY; y++) {
                            Vertex v = this[x, y];
                            v.UV = yRotMatrices[x].MultiplyPoint(new Vector2(radOffset + (1f - v.NormalizedCoords.y) * radLength, 0));
                        }
                    }
                }
            }
        }

    }
}