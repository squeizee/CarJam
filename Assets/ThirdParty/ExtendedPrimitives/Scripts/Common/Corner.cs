using UnityEngine;
using System.Collections;

namespace ExtendedPrimitives_11.Internal {

    public class Corner : Element {

        int lastVertex;
        public override Vertex this[int x, int y] {
            get {
                if (y >= SegmentsY) {
                    return vertices[lastVertex];
                }
                return vertices[x + y*LengthX];
            }

            set {
    
                if (y >= SegmentsY) {
                    vertices[lastVertex] = value;
                    return;
                }
                vertices[x + y * LengthX] = value;
            }
        }
 
        public Corner(ExtendedPrimitive ep, bool isReference, int ySign, int segments, float angle) {
            parent = ep;
            bool isInvert = ySign < 0;
            SegmentsX = segments;
            SegmentsY = segments;
            LengthX =  segments + 1 ;
            LengthY =  segments + 1 ;
            vertices = new Vertex[(segments+1)*(segments)+1];
            lastVertex = vertices.Length - 1;

            for (int y = 0; y < SegmentsY; y++) {
                for (int x = 0; x <= SegmentsX; x++) {
                    Vertex vert = new Vertex(ref ep.vertsCounter, y / (float)SegmentsY);
                    this[x, y] = vert;
                }
            }

            vertices[lastVertex] = new Vertex(ref ep.vertsCounter);
            Vertex vl = vertices[lastVertex];
  
            vl.Col.a = 1f;
            vl.Normal = new Vector3(0, ySign, 0);
            vl.Pos = vl.Normal;
            vl.UV = Vector2.zero;

  
            base.CreateLayoutArrays();

            int yIdx = 0;
            while (yIdx < SegmentsY-1) {
                for (int x = 0; x < SegmentsX; x++) {
                    BuildQuad(isInvert, ep.Faces, this[x, yIdx], this[x , yIdx+1], this[x + 1, yIdx + 1], this[x + 1, yIdx ]);
                }
                yIdx++;
            }
            for (int x = 0; x < SegmentsX; x++) {
                BuildTriangle(isInvert, ep.Faces, this[x, yIdx],  vertices[lastVertex], this[x + 1, yIdx]  );
            }


            for (int y = 0; y < SegmentsY; y++) {
                for (int x = 0; x < SegmentsX; x++) {
                    ep.MEdges.Add(new MeshEdge(this[x, y], this[x + 1, y]));
 
                }
            }

            for (int x = 0; x <= SegmentsX; x++) {
                for (int y = 0; y < SegmentsY; y++) {
                    ep.MEdges.Add(new MeshEdge(this[x, y], this[x, y + 1]));
                }
            }

            if (isReference) {
                float angleRad = angle * Mathf.Deg2Rad;
                float ystep = 1.570796f / SegmentsY;
                float xstep = angleRad / SegmentsX;
                float lerpStep = 1f / SegmentsY;
                yIdx = 0;
                while (yIdx < SegmentsY) {
                    float angleY = yIdx * ystep;
                    float yPos = Mathf.Sin(angleY);
                    float xRadius = Mathf.Cos(angleY);

                    for (int x = 0; x <= SegmentsX; x++) {
                        Vertex v = this[x, yIdx];
                        float angleX = x * xstep;
                        float _x = Mathf.Cos(angleX);
                        float _z = Mathf.Sin(angleX);
                        //uv method 0
                        v.RefUV = new Vector2(_x, _z) * (1f - (yIdx * lerpStep));
                        v.RefNormal = new Vector3(_x * xRadius, yPos * ySign, _z * xRadius);
                        //v.Pos = v.Normal;
                    }
                    yIdx++;
                }
            }
        }
        
        public void SetPositionAndSize(Corner reference, Vector3 position, float rotation, float radius) {
            float rotationRad = rotation * Mathf.Deg2Rad;
            float rotVectorX = Mathf.Cos(rotationRad);
            float rotVectorY = Mathf.Sin(rotationRad);
            for (int v = 0; v < reference.vertices.Length; v++) {
                Vector3 vec = reference.vertices[v].RefNormal;
                vec = new Vector3(rotVectorX * vec.x - rotVectorY * vec.z, vec.y, rotVectorY * vec.x + rotVectorX * vec.z);
                parent.mnormals[vertices[v]] = vertices[v].Normal = vec;
                parent.mvertices[vertices[v]] = vertices[v].Pos = vec * radius + position;
            }
        }

        public void SetUVPositionAndSize(Corner reference, Vector2[] uvs, Vector2 position, float radius, float rotation, int flipx) {
            float rotationRad = rotation * Mathf.Deg2Rad;
            float rotVectorX = Mathf.Cos(rotationRad);
            float rotVectorY = Mathf.Sin(rotationRad);
            for (int v = 0; v < reference.vertices.Length; v++) {
                Vector2 vec = reference.vertices[v].RefUV ;
                vec = new Vector2(rotVectorX * vec.x - rotVectorY * vec.y, rotVectorY * vec.x + rotVectorX * vec.y);
                vec.x *= flipx;
                vec = vec * radius + position;
                this.vertices[v].UV = vec;
                uvs[this.vertices[v]] =   vec;
            }
        }

        public void SetUVPositionAndSizeUnfoldB(  Vector2[] uvs, Vector2 position, Vector2 scale) {
             for (int y = 0; y < LengthY; y++) {
                float ylv = y / (float)SegmentsY;
 
                float xTo = Mathf.Sqrt(1.5625f - ylv * ylv)-0.25f;
                float xFrom = 1f - xTo;

                for (int x = 0; x<LengthX; x++) {
                    Vector2 vec = new Vector2( Mathf.LerpUnclamped( xFrom, xTo, (float)x/SegmentsX), ylv );
                    vec  = Vector2.Scale(vec, scale);
                    vec += position;
                    this[x, y].UV = vec;
                    uvs[this[x, y]] = vec;
                }
             }
        }

 

        public static int CalcVerticesCount(int segments) {
            return (segments + 1) * segments + 1;
        }

 
    }
}
