using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace ExtendedPrimitives_11.Internal {

    public class RadialFillet : Element {

 
        public float uvFilletWidth;
 
        Matrix2d[] yRotMatrices;

        public RadialFillet(bool displayed, ExtendedPrimitive _ep, List<Element> eList, bool flipNormals, int capFilletSegments, int radialSegments, bool flipVertColors ) {
            eList.Add(this);
            Displayed = displayed;
             parent = _ep;
            flipNormals = parent.FlipNormals ? !flipNormals : flipNormals;
            NormalSign = parent.FlipNormals ? -1f : 1f;
            SegmentsX = radialSegments;
            SegmentsY = capFilletSegments;
            LengthX = SegmentsX + 1;
            LengthY = SegmentsY + 1;
            vertices = new Vertex[LengthX * LengthY];
 
            for (int y = 0; y < LengthY; y++) {
                for (int x = 0; x < LengthX; x++) {
                    Vertex vert = new Vertex( ref parent.vertsCounter, new Vector2(x / (float)SegmentsX, y / (float)SegmentsY));
                    if (!Displayed) {
                        parent.vertsCounter--;
                    }
                    vert.Col.a = flipVertColors? 1f-vert.NormalizedCoords.y : vert.NormalizedCoords.y;
                    this[x, y] = vert;
                }
            }

            base.CreateLayoutArrays();

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

        public void SetPositionAndSize( Vector2 _prev, Vector2 _this, Vector2 _next,  float radius, float capfilletRadius ) {
            float fradius = capfilletRadius;
            Vector2 fcenter = _this;
            float rotFrom = 0;
            float fangle = 0;

            Extension.CalcFillet(_prev, _this, _next, ref fradius, ref fcenter, ref rotFrom, ref fangle);
            float normalSign = NormalSign ;

            bool zeroRadius = Extension.ApproximatelyZero(fradius);
            uvFilletWidth = fangle * capfilletRadius;

            if (zeroRadius) {
                Vector3 dirA =  Edge2d.Rotate90(  _this - _prev );
                Vector3 dirB = Edge2d.Rotate90(   _next - _this);
                rotFrom = Edge2d.RotationAngle(dirA);
                fangle = Extension.DeltaAngleRad(rotFrom, Edge2d.RotationAngle(dirB));
            }


            if (Displayed) {
                for (int y = 0; y < LengthY; y++) {
                    float ya = rotFrom + this[0, y].NormalizedCoords.y * fangle;
                    float nX = Mathf.Cos(ya);
                    float nY = Mathf.Sin(ya);
                    Vertex v = this[0, y];
                    v.RefNormal = new Vector3(nX, nY, 0);
                    v.RefPos = v.RefNormal * fradius + (Vector3)fcenter;
                    v.RefNormal *= normalSign;
                }

                for (int x = 0; x < LengthX; x++) {
                    int _x = x;
                    float rotation = this[_x, 0].NormalizedCoords.x * r360;
                    yRotMatrices[x] = new Matrix2d(rotation);

                    for (int y = 0; y < LengthY; y++) {
                        Vertex v = this[x, y];
                        Vertex refVert = this[0, y];
                        v.Pos = yRotMatrices[x].MultiplyPointY(refVert.RefPos);
                        v.Normal = yRotMatrices[x].MultiplyVectorY(refVert.RefNormal);
                    }
                }

                for (int v = 0; v < vertices.Length; v++) {
                    int global = vertices[v].Global;
                    parent.mvertices[global] = vertices[v].Pos;
                    parent.mnormals[global] = vertices[v].Normal;
                }
            } else {
                float ya = rotFrom ;
                float nX = Mathf.Cos(ya);
                float nY = Mathf.Sin(ya);
                Vertex v = this[0, 0];
                v.RefNormal = new Vector3(nX, nY, 0);
                v.RefPos = v.RefNormal * fradius + (Vector3)fcenter;
                v.RefNormal *= normalSign;

                ya = rotFrom + fangle;
                nX = Mathf.Cos(ya);
                nY = Mathf.Sin(ya);
                v = this[0, SegmentsY];
                v.RefNormal = new Vector3(nX, nY, 0);
                v.RefPos = v.RefNormal * fradius + (Vector3)fcenter;
                v.RefNormal *= normalSign;

                for (int x = 0; x < LengthX; x++) {
                    float rotation = this[x, 0].NormalizedCoords.x * r360;
                    yRotMatrices[x] = new Matrix2d(rotation);
                     
                    Vertex vertBottom = this[x, 0];
                    Vertex refVertBottom = this[0, 0];
                    vertBottom.Pos = yRotMatrices[x].MultiplyPointY(refVertBottom.RefPos);
                    vertBottom.Normal = yRotMatrices[x].MultiplyVectorY(refVertBottom.RefNormal);

                    Vertex vertTop = this[x, SegmentsY];
                    Vertex refVertTop = this[0, SegmentsY];
                    vertTop.Pos = yRotMatrices[x].MultiplyPointY(refVertTop.RefPos);
                    vertTop.Normal = yRotMatrices[x].MultiplyVectorY(refVertTop.RefNormal);
                }

            }

        }

        public void SetUVPositionAndSize(Vector2[] uvs, float uvRadius, float uvWidth  ) {
            if (!Displayed) {
                return;
            }
            for (int x = 0; x < LengthX; x++) {
                for (int y = 0; y < LengthY; y++) {
                    Vertex v = this[x, y];
                    uvs[v] = v.UV =  yRotMatrices[x].MultiplyPoint(new Vector2(uvRadius + (1f- v.NormalizedCoords.y)  * uvWidth, 0));
                }
            }
        }

        public void SetUVPositionAndSize(Vector2[] uvs, Vector2 offset,  float uvRadius, float uvWidth, Vector2 scale ) {
            if (!Displayed) {
                return;
            }
            for (int x = 0; x < LengthX; x++) {
                for (int y = 0; y < LengthY; y++) {
                    Vertex v = this[x, y];
                    v.UV =  yRotMatrices[x].MultiplyPoint(new Vector2(uvRadius + (1f - v.NormalizedCoords.y) * uvWidth, 0));
                    v.UV = Vector2.Scale(v.UV, scale);
                    v.UV += offset;
                    uvs[v] = v.UV;
                }
            }
        }

    }
}