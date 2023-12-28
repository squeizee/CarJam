using UnityEngine;
using System.Collections.Generic;

namespace ExtendedPrimitives_11.Internal {

    public class OctaCorner :  Element{

        public override Vertex this[int x, int y] {
            get {
                int _base = y * (SegmentsX + 1);
                int _sub = ((y - 1) * y) / 2;
                int result = x + _base - _sub;
                return vertices[result];
            }

            set {
                int _base = y * (SegmentsX + 1);
                int _sub = ((y - 1) * y) / 2;
                int result = x + _base - _sub;
                vertices[result] = value;
            }
        }

        public OctaCorner(bool displayed, ExtendedPrimitive ep, List<Element> eList, bool isReference, bool flipped, int segments ) {
            Displayed = displayed;
            parent = ep;
            eList.Add(this);
            float ySign = flipped ? -1 : 1;
            flipped =  ep.FlipNormals? !flipped : flipped;
            NormalSign = ep.FlipNormals ? -1 : 1;
             
            SegmentsX = segments;
            SegmentsY = segments;
            LengthX = segments + 1;
            LengthY = segments + 1;
            vertices = new Vertex[CalcVerticesCount(segments)];

            for (int y = 0; y <= segments; y++) {
                int xSegments = segments - y;
                for (int x = 0; x <= xSegments; x++) {
                    Vertex vert = new Vertex(ref ep.vertsCounter, y / (float)SegmentsY);
                    if (!Displayed) {
                        ep.vertsCounter--;
                    }
                    this[x, y] = vert;
                }
            }
  
            Left = new Vertex[LengthY];
            Right = new Vertex[LengthY];
            Top = new Vertex[1];
            Bottom = new Vertex[LengthX];
            Corners = new Vertex[4];

            for (int y = 0; y < LengthY; y++) {
                Left[y] = this[0, y];
                Right[y] = this[SegmentsX-y, y];
            }

            Top[0] = this[0, SegmentsY];
            for (int x = 0; x < LengthX; x++) {
                Bottom[x] = this[x, 0];
            }

            Corners[0] = this[0, 0];
            Corners[1] = this[0, SegmentsY];
            Corners[2] = this[0, SegmentsY];
            Corners[3] = this[SegmentsX, 0];

            if (Displayed) {
                for (int y = 0; y < SegmentsY; y++) {
                    int xSegments = SegmentsX - y;
                    for (int x = 0; x < xSegments; x++) {
                        Vertex idx0 = this[x, y];
                        Vertex idx1 = this[x, y + 1];
                        Vertex idx2 = this[x + 1, y];
                        BuildTriangle(flipped, ep.Faces, idx0, idx1, idx2);
                        ep.MEdges.Add(new MeshEdge(idx0, idx1));
                        ep.MEdges.Add(new MeshEdge(idx1, idx2));
                        ep.MEdges.Add(new MeshEdge(idx2, idx0));
                        if (x < xSegments - 1) {
                            idx0 = this[x + 1, y];
                            idx1 = this[x, y + 1];
                            idx2 = this[x + 1, y + 1];
                            BuildTriangle(flipped, ep.Faces, idx0, idx1, idx2);
                        }
                    }
                }
            }
            
            if (isReference) {
                float astep = 1.570796f / SegmentsY;
                 for (int y = 0; y<=SegmentsY; y++) {
                    float ylv = y / (float)SegmentsY;
                    float mylv = (1 - ylv);
                    float angleY = y * astep;
                    float yPos = Mathf.Sin(angleY);
                    float xRadius = Mathf.Cos(angleY);

                    int xSegments = SegmentsX - y;
                    for (int x = 0; x <= xSegments; x++) {
                        Vertex v = this[x, y];
                        float xLv = xSegments == 0 ? 0 : x / (float)xSegments;
                        float angleX = xLv * 1.570796f;
                        float _x = Mathf.Cos(angleX);
                        float _z = Mathf.Sin(angleX);
                        v.RefUV = new Vector2(_x  , _z  ) * mylv;
                        v.RefNormal = new Vector3(_x * xRadius, yPos *ySign, _z * xRadius);
                    }
                }
            }
        }

        public void SetPositionAndSize(OctaCorner reference, Vector3 position, float rotation, float radius) {
            if (Displayed) {
                float rotationRad = rotation * Mathf.Deg2Rad;
                float rotVectorX = Mathf.Cos(rotationRad);
                float rotVectorY = Mathf.Sin(rotationRad);
                for (int v = 0; v < reference.vertices.Length; v++) {
                    Vector3 vec = reference.vertices[v].RefNormal;
                    vec = new Vector3(rotVectorX * vec.x - rotVectorY * vec.z, vec.y, rotVectorY * vec.x + rotVectorX * vec.z);
                    parent.mnormals[vertices[v]] = this.vertices[v].Normal = vec * NormalSign;
                    parent.mvertices[vertices[v]] = this.vertices[v].Pos = vec * radius + position;
                }
            } else {
                float rotationRad = rotation * Mathf.Deg2Rad;
                float rotVectorX = Mathf.Cos(rotationRad);
                float rotVectorY = Mathf.Sin(rotationRad);
                for (int v = 0; v<Bottom.Length; v++) {
                    Vector3 vec = reference.Bottom[v].RefNormal;
                    vec = new Vector3(rotVectorX * vec.x - rotVectorY * vec.z, vec.y, rotVectorY * vec.x + rotVectorX * vec.z);
                    Bottom[v].Normal = vec * NormalSign;
                    Bottom[v].Pos = vec * radius + position;
                }

                for (int v = 0; v < Left.Length; v++) {
                    Vector3 vec = reference.Left[v].RefNormal;
                    vec = new Vector3(rotVectorX * vec.x - rotVectorY * vec.z, vec.y, rotVectorY * vec.x + rotVectorX * vec.z);
                    Left[v].Normal = vec * NormalSign;
                    Left[v].Pos = vec * radius + position;
                    vec = reference.Right[v].RefNormal;
                    vec = new Vector3(rotVectorX * vec.x - rotVectorY * vec.z, vec.y, rotVectorY * vec.x + rotVectorX * vec.z);
                    Right[v].Normal = vec * NormalSign;
                    Right[v].Pos = vec * radius + position;
                }
             }
        }

        public void SetUVPositionAndSize(OctaCorner reference, Vector2[] uvs, Vector2 position, float radius, float rotation, int flipx) {
            if (Displayed) {
                float rotationRad = rotation * Mathf.Deg2Rad;
                float rotVectorX = Mathf.Cos(rotationRad);
                float rotVectorY = Mathf.Sin(rotationRad);
                for (int v = 0; v < reference.vertices.Length; v++) {
                    Vector2 vec = reference.vertices[v].RefUV;
                    vec = new Vector2(rotVectorX * vec.x - rotVectorY * vec.y, rotVectorY * vec.x + rotVectorX * vec.y);
                    vec.x *= flipx;
                    vec = vec * radius + position;
                    uvs[vertices[v]] = vertices[v].UV = vec;
                }
            } else {
                float rotationRad = rotation * Mathf.Deg2Rad;
                float rotVectorX = Mathf.Cos(rotationRad);
                float rotVectorY = Mathf.Sin(rotationRad);
                for (int v = 0; v < Bottom.Length; v++) {
                    Vector2 vec = reference.Bottom[v].RefUV;
                    vec = new Vector2(rotVectorX * vec.x - rotVectorY * vec.y, rotVectorY * vec.x + rotVectorX * vec.y);
                    vec.x *= flipx;
                    vec = vec * radius + position;
                    Bottom[v].UV = vec;
                }

                for (int v = 0; v < Left.Length; v++) {
                    Vector2 vec = reference.Left[v].RefUV;
                    vec = new Vector2(rotVectorX * vec.x - rotVectorY * vec.y, rotVectorY * vec.x + rotVectorX * vec.y);
                    vec.x *= flipx;
                    vec = vec * radius + position;
                    Left[v].UV = vec;
                    vec = reference.Right[v].RefUV;
                    vec = new Vector2(rotVectorX * vec.x - rotVectorY * vec.y, rotVectorY * vec.x + rotVectorX * vec.y);
                    vec.x *= flipx;
                    vec = vec * radius + position;
                    Right[v].UV = vec;
                }
            }
        }

        public void SetUVPositionAndSizeUnfoldB(Vector2[] uvs, Vector2 position, Vector2 scale) {
             for (int y = 0; y < LengthY; y++) {
                 float ylv = y / (float)SegmentsY;
                 float xTo = Mathf.Sqrt(1.5625f - ylv * ylv) - 0.25f;
                 float xFrom = 1f - xTo;
                 int xSegments = SegmentsX - y;
                 for (int x = 0; x <= xSegments; x++) {
                     Vector2 vec;
                     if (y == SegmentsY) {
                         vec = new Vector2(0.5f, 1f);
                     } else {
                         vec = new Vector2(Mathf.LerpUnclamped(xFrom, xTo, (float)x / xSegments), ylv);
                     }
                     vec = Vector2.Scale(vec, scale);
                     vec += position;
                     this[x, y].UV = vec;
                     uvs[this[x, y]] = vec;
                 }
             }
        }

        public static int CalcVerticesCount(int segments) {
             return ((segments+1) * (segments + 2))/2;
        }
 

 
    }
}
