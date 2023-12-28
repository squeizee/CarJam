using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ExtendedPrimitives_11.Internal {

    public class ColliderVertex {
        public int Local;
        public int ThisIdx;
        public Vertex Parent;
        public Vector2 Point2d;
        public float Depth;

        public ColliderVertex(  Vertex parent, List<ColliderVertex> globalList) {
            Parent = parent;
            ThisIdx = globalList.Count;
            globalList.Add(this);
        }
 
        public void PrintDebug() {
            Debug.LogFormat("parent: {0} thisIdx:{1}", Parent == null? "null":Parent.Global.ToString(), ThisIdx );
        }

        public static implicit operator bool(ColliderVertex v) {
            return v != null;
        }
    }

    public class ColliderFace {
        public ColliderVertex A;
        public ColliderVertex B;
        public ColliderVertex C;

        public ColliderFace(ColliderVertex a, ColliderVertex b, ColliderVertex c) {
            A = a;
            B = b;
            C = c;

            if (A == null || B == null || C == null) {
                Debug.LogFormat("A:{0} B:{1} C:{2}", A==null, B==null, C==null);
            }
        }
    }

    public class ColliderEdge {
        public ColliderVertex A;
        public ColliderVertex B;

        public ColliderEdge(ColliderVertex a, ColliderVertex b) {
            A = a;
            B = b;
        }
    }

    public class ColliderElement {
        public int SegmentsX;
        public int SegmentsY;
        public int LengthX;
        public int LengthY;

        public ColliderVertex[] vertices;

        public ColliderVertex[] Left;
        public ColliderVertex[] Top;
        public ColliderVertex[] Right;
        public ColliderVertex[] Bottom;
        public ColliderVertex[] Corners;
 
        public ColliderVertex[] TopReversed {
            get {
                ColliderVertex[] result = new ColliderVertex[Top.Length];
                for (int i = 0; i<result.Length; i++) {
                    result[i] = Top[Top.Length-1-i];
                }
                return result;
            }
        }

        public ColliderVertex[] BottomReversed {
            get {
                ColliderVertex[] result = new ColliderVertex[Bottom.Length];
                for (int i = 0; i < result.Length; i++) {
                    result[i] = Bottom[Bottom.Length - 1 - i];
                }
                return result;
            }
        }

        public virtual ColliderVertex this[int x, int y] {
            get {
                return vertices[x + y * LengthX];
            }

            set {
                vertices[x + y * LengthX] = value;
            }
        }

        internal void UpdateLayoutArrays() {
            if (Left == null) {
                Left = new ColliderVertex[LengthY];
            }
            if (Right == null) {
                Right = new ColliderVertex[LengthY];
            }
            if (Top == null) {
                Top = new ColliderVertex[LengthX];
            }
            if (Bottom == null) {
                Bottom = new ColliderVertex[LengthX];
            }
            if (Corners == null) {
                Corners = new ColliderVertex[4];
            }

            for (int y = 0; y < LengthY; y++) {
                if (Left[y] == null) {
                    Left[y] = this[0, y];
                } else {
                    this[0, y] = Left[y];
                }
                if (Right[y] == null) {
                    Right[y] = this[SegmentsX, y];
                } else {
                    this[SegmentsX, y] = Right[y];
                }
            }

            for (int x = 0; x < LengthX; x++) {

                if (Top[x] == null) {
                    Top[x] = this[x, SegmentsY];
                } else {
                    this[x, SegmentsY] = Top[x];
                }

                if (Bottom[x] == null) {
                    Bottom[x] = this[x, 0];
                } else {
                    this[x, 0] = Bottom[x];
                }
            }

            if (Corners[0] == null) {
                Corners[0] = this[0, 0];
            } else {
                this[0, 0] = Corners[0];
            }

            if (Corners[1] == null) {
                Corners[1] = this[0, SegmentsY];
            } else {
                 this[0, SegmentsY] = Corners[1];
            }

            if (Corners[2] == null) {
                Corners[2] = this[SegmentsX, SegmentsY];
            } else {
                this[SegmentsX, SegmentsY] = Corners[2];
            }

            if (Corners[3] == null) {
                Corners[3] = this[SegmentsX, 0];
            } else {
                this[SegmentsX, 0] = Corners[3];
            }
        }

        public ColliderElement() { }

        public ColliderElement(ExtendedPrimitive ep, bool flipNormals, Element e, ColliderVertex c0, ColliderVertex c1, ColliderVertex c2, ColliderVertex c3   ) {
            flipNormals = flipNormals ? !ep.FlipNormals : ep.FlipNormals;
            LengthX = 2;
            LengthY = 2;
            SegmentsX = LengthX - 1;
            SegmentsY = LengthY - 1;

            vertices = new ColliderVertex[LengthX * LengthY];

            UpdateLayoutArrays();
            Corners[0] = c0 ? c0 : new ColliderVertex(e.Corners[0], ep.Collider.Vertices); 
            Corners[1] = c1 ? c1 : new ColliderVertex(e.Corners[1], ep.Collider.Vertices);  
            Corners[2] = c2 ? c2 : new ColliderVertex(e.Corners[2], ep.Collider.Vertices);
            Corners[3] = c3 ? c3 : new ColliderVertex(e.Corners[3], ep.Collider.Vertices);
            UpdateLayoutArrays();

            //Debug.LogFormat("collider quad: c0:{0} c1:{1} c2:{2} c3:{3}", Corners[0]!= null, Corners[1] != null, Corners[2] != null, Corners[3]!= null  );
            BuildQuad(flipNormals, ep.Collider.Faces, Corners[0], Corners[1], Corners[2], Corners[3]);
            ep.Collider.Edges.Add(new ColliderEdge(Corners[0], Corners[3]));
            ep.Collider.Edges.Add(new ColliderEdge(Corners[1], Corners[2]));
        }

        public static implicit operator bool(ColliderElement c) {
            return c != null;
        }

        public ColliderElement(ExtendedPrimitive ep,   bool flipNormals, Element e, ColliderVertex[] left, ColliderVertex[] right, ColliderVertex[] top, ColliderVertex[] bottom , bool generateEdges) {
            flipNormals = flipNormals ? !ep.FlipNormals : ep.FlipNormals;
            int[] xIndeces = DetalizationIndeces(e.SegmentsX, ep.Collider.Detalization);
            int[] yIndeces = DetalizationIndeces(e.SegmentsY, ep.Collider.Detalization);

            LengthX = xIndeces.Length;
            LengthY = yIndeces.Length;
            SegmentsX = LengthX - 1;
            SegmentsY = LengthY - 1;

            vertices = new ColliderVertex[LengthX * LengthY];
 
            UpdateLayoutArrays();

            if (left != null) {
                for (int i = 0; i<left.Length; i++) {
                    Left[i] = left[i];
                }
            }

            if (right != null) {
                for (int i = 0; i < right.Length; i++) {
                    Right[i] =  right[i];
                }
            }

            if (top != null) {
                for (int i = 0; i < top.Length; i++) {
                    Top[i] =  top[i];
                }
            }

            if (bottom != null) {
                for (int i = 0; i < bottom.Length; i++) {
                    Bottom[i] = bottom[i];
                }
            }
            int createdColliderVerts = 0;
            UpdateLayoutArrays();


            for (int y = 0; y < LengthY; y++) {
                for (int x = 0; x < LengthX; x++) {
                    if (this[x, y] == null ) {
                        this[x, y] = new ColliderVertex( e[xIndeces[x], yIndeces[y]], ep.Collider.Vertices );
                        createdColliderVerts++;
                    }
                }
            }

 
            UpdateLayoutArrays();
        
            for (int y = 0; y < SegmentsY; y++) {
                for (int x = 0; x < SegmentsX; x++) {
                    BuildQuad(flipNormals, ep.Collider.Faces, this[x, y], this[x, y + 1], this[x + 1, y + 1], this[x + 1, y]);
                }
            }

            if (generateEdges) {
                int yFrom = bottom == null ? 0 : 1;
                int yTo = top == null ? LengthY : LengthY - 1;

                for (int y = yFrom; y < yTo; y++) {
                    for (int x = 0; x < SegmentsX; x++) {
                        ep.Collider.Edges.Add(new ColliderEdge(this[x, y], this[x + 1, y]));
                    }
                }

                int xFrom = left == null ? 0 : 1;
                int xTo = right == null ? LengthX : LengthX - 1;

                for (int x = xFrom; x < xTo; x++) {
                    for (int y = 0; y < SegmentsY; y++) {
                        ep.Collider.Edges.Add(new ColliderEdge(this[x, y], this[x, y + 1]));
                    }
                }
            }

        }
 

        public static void BuildQuad(bool invert, List<ColliderFace> faces, ColliderVertex idx0, ColliderVertex idx1, ColliderVertex idx2, ColliderVertex idx3) {
            if (invert) {
                faces.Add(new ColliderFace(idx3, idx2, idx0));
                faces.Add(new ColliderFace(idx2, idx1, idx0));
            } else {
                faces.Add(new ColliderFace(idx0, idx1, idx2));
                faces.Add(new ColliderFace(idx0, idx2, idx3));
            }
        }

        public static void BuildTriangle(bool invert, List<ColliderFace> faces, ColliderVertex idx0, ColliderVertex idx1, ColliderVertex idx2) {
            if (invert) {
                faces.Add(new ColliderFace(idx2, idx1, idx0));
            } else {
                faces.Add(new ColliderFace(idx0, idx1, idx2));
            }
        }

        internal int[] DetalizationIndeces(int segments, ColliderDetalizationEnum detalization) {
            int d = (int)detalization;
            int arrLength = Mathf.CeilToInt((segments) / (float)d) + 1;
            int[] result = new int[arrLength];
            for (int i = 0; i < arrLength; i++) {
                result[i] = i * d;
            }
            result[result.Length - 1] = segments;
            return result;
        }

        public static void ConnectUniform(ExtendedPrimitive ep, bool flipNormals, ColliderVertex[] bottom, ColliderVertex[] top, bool generateEdges, bool generateEndEdges) {
            flipNormals = flipNormals ? !ep.FlipNormals : ep.FlipNormals;
            for (int i = 0; i<bottom.Length-1; i++) {
                ColliderVertex c0 = bottom[i];
                ColliderVertex c1 = top[i];
                ColliderVertex c2 = top[i+1];
                ColliderVertex c3 = bottom[i+1];
                BuildQuad(flipNormals, ep.Collider.Faces, c0, c1, c2, c3);
            }

            if (generateEdges) {
                if (generateEndEdges) {
                    for (int i = 0; i < bottom.Length; i++) {
                        ep.Collider.Edges.Add(new ColliderEdge(bottom[i], top[i]));
                    }
                } else {
                    for (int i = 1; i < bottom.Length - 1; i++) {
                        ep.Collider.Edges.Add(new ColliderEdge(bottom[i], top[i]));
                    }
                }

            }
        }


        public static void ConnectQuad(ExtendedPrimitive ep, bool flipNormals, ColliderVertex  c0, ColliderVertex c1, ColliderVertex c2, ColliderVertex c3 ) {
            flipNormals = flipNormals ? !ep.FlipNormals : ep.FlipNormals;
            BuildQuad(flipNormals, ep.Collider.Faces, c0, c1, c2, c3);
            ep.Collider.Edges.Add(new ColliderEdge(c0, c1));
            ep.Collider.Edges.Add(new ColliderEdge(c1, c2));
            ep.Collider.Edges.Add(new ColliderEdge(c2, c3));
            ep.Collider.Edges.Add(new ColliderEdge(c3, c0));
        }


        public static void ConnectIrregular(ExtendedPrimitive ep, bool flipNormals, ColliderVertex[] outline, ColliderVertex  center ) {
            for (int i = 0; i<outline.Length-1; i++) {
                BuildTriangle(flipNormals, ep.Collider.Faces, outline[i], outline[i + 1], center);
            }
        }

        public static void ConnectIrregular(ExtendedPrimitive ep, bool flipNormals, ColliderVertex[] bottom, ColliderVertex[] top, bool generateEdges ) {
            flipNormals = flipNormals ? !ep.FlipNormals : ep.FlipNormals;
            ColliderVertex[] merged = new ColliderVertex[bottom.Length + top.Length];
            bottom.CopyTo(merged, 0);
            top.CopyTo(merged, bottom.Length);
 
            int[] inner = ConnectTriangulator.NaturalNumbers(0, bottom.Length);
            int[] outer = ConnectTriangulator.NaturalNumbers(inner.Length, top.Length);

            ConnectTriangulator connect = new ConnectTriangulator(inner, outer);

            for (int i = 0; i < connect.ResultTris.Count; i++) {
                ConnectTriangulator.Tris tri = connect.ResultTris[i];
                bool trisFlipped = flipNormals ? !tri.Flipped : tri.Flipped;
                BuildTriangle(trisFlipped, ep.Collider.Faces, merged[tri.A], merged[tri.B], merged[tri.C]);
 
            }

            for (int i = 0; i < connect.ResultQuads.Count; i++) {
                ConnectTriangulator.Quad quad = connect.ResultQuads[i];
                bool quadFlipped = flipNormals ? !quad.Flipped : quad.Flipped;
                BuildQuad(quadFlipped, ep.Collider.Faces, merged[quad.A], merged[quad.B], merged[quad.C], merged[quad.D]);
            }

            if (generateEdges) {
                for (int i = 0; i<bottom.Length-1; i++) {
                    ep.Collider.Edges.Add(new ColliderEdge(bottom[i], bottom[i+1]));
                }

                for (int i = 0; i < top.Length - 1; i++) {
                    ep.Collider.Edges.Add(new ColliderEdge(top[i], top[i + 1]));
                }

                ep.Collider.Edges.Add(new ColliderEdge(bottom[0], top[0]));
                ep.Collider.Edges.Add(new ColliderEdge(bottom[bottom.Length-1], top[top.Length - 1]));

            }

        }
    }

    public class OctaCornerCollider : ColliderElement {

        public override ColliderVertex this[int x, int y] {
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

        public OctaCornerCollider(ExtendedPrimitive ep, bool flipNormals, OctaCorner octaCorner) {
            flipNormals = flipNormals ? !ep.FlipNormals : ep.FlipNormals;
            int[] parentIndeces = DetalizationIndeces(octaCorner.SegmentsX, ep.Collider.Detalization);
 
            LengthX = parentIndeces.Length;
            LengthY = parentIndeces.Length;
            SegmentsX = LengthX - 1;
            SegmentsY = LengthY - 1;
            vertices = new ColliderVertex[OctaCorner.CalcVerticesCount(SegmentsX)];

            int addedCount = 0;
            for (int y = 0; y <= SegmentsY; y++) {
                int[] parentIndecesX = DetalizationIndeces(octaCorner.SegmentsY - parentIndeces[y], ep.Collider.Detalization);
                for (int x = 0; x < parentIndecesX.Length; x++) {
                    this[x,y] = new ColliderVertex( octaCorner[parentIndecesX[x], parentIndeces[y]], ep.Collider.Vertices);
                    addedCount++;
                 }
            }

            Left = new ColliderVertex[LengthY];
            Right = new ColliderVertex[LengthY];
            Top = new ColliderVertex[1];
            Bottom = new ColliderVertex[LengthX];
            Corners = new ColliderVertex[4];

            for (int y = 0; y < LengthY; y++) {
                Left[y] = this[0, y];
                Right[y] = this[SegmentsX - y, y];
            }

            Top[0] = this[0, SegmentsY];
            for (int x = 0; x < LengthX; x++) {
                Bottom[x] = this[x, 0];
            }

            Corners[0] = this[0, 0];
            Corners[1] = this[0, SegmentsY];
            Corners[2] = this[0, SegmentsY];
            Corners[3] = this[SegmentsX, 0];

            for (int y = 0; y < SegmentsY; y++) {
                int xSegments = SegmentsX - y;
                for (int x = 0; x < xSegments; x++) {
                    ColliderVertex idx0 = this[x, y];
                    ColliderVertex idx1 = this[x, y + 1];
                    ColliderVertex idx2 = this[x + 1, y];
                    BuildTriangle(flipNormals, ep.Collider.Faces, idx0, idx1, idx2);
                    ep.Collider.Edges.Add(new ColliderEdge(idx0, idx1));
                    ep.Collider.Edges.Add(new ColliderEdge(idx1, idx2));
                    ep.Collider.Edges.Add(new ColliderEdge(idx2, idx0));
                    if (x < xSegments - 1) {
                        idx0 = this[x + 1, y];
                        idx1 = this[x, y + 1];
                        idx2 = this[x + 1, y + 1];
                        BuildTriangle(flipNormals, ep.Collider.Faces, idx0, idx1, idx2);
                    }
                }
            }

        }

 
    }    
}