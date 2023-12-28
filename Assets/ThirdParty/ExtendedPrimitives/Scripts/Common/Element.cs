using UnityEngine;
using System.Collections.Generic;
 

namespace ExtendedPrimitives_11.Internal {
    
    public class Element {

        public bool Displayed = true;

        internal const float r90 = 1.5707963f;
        internal const float r180 = 3.1415926f;
        internal const float r270 = 4.7123889f;
        internal const float r360 = 6.2831852f;

        internal ExtendedPrimitive parent;

        public int SegmentsX;
        public int SegmentsY;
        public int LengthX;
        public int LengthY;
    
        public Vertex[] vertices;

        public Vertex[] Left;
        public Vertex[] LeftReversed;
        public Vertex[] Top;
        public Vertex[] TopReversed;
        public Vertex[] Right;
        public Vertex[] RightReversed;
        public Vertex[] Bottom;
        public Vertex[] BottomReversed;
        public Vertex[] Corners;
        public Vertex[] Outline;

        public float NormalSign;

        public Vector2 uvScale;
 
        public virtual Vertex this[int x, int y] {
            get {
                return vertices[x+y*LengthX];
            }

            set {
                vertices[x + y * LengthX] = value;
            }
        }

        internal void CreateLayoutArrays() {
            Left = new Vertex[LengthY];
            Right = new Vertex[LengthY];
            Top = new Vertex[LengthX];
            Bottom = new Vertex[LengthX];

            LeftReversed = new Vertex[LengthY];
            RightReversed = new Vertex[LengthY];
            TopReversed = new Vertex[LengthX];
            BottomReversed = new Vertex[LengthX];

            Corners = new Vertex[4];


            Outline = new Vertex[ LengthX * 2 + LengthY * 2 - 4 ];
            int outlineCounter = 0;

            for (int y = 0; y < LengthY; y++) {
                Left[y] = this[0, y];
                Right[y] = this[SegmentsX, y];
                int reversedIdx = LengthY - y - 1;
                LeftReversed[reversedIdx] = Left[y];
                RightReversed[reversedIdx] = Right[y];

                Outline[outlineCounter] = Left[y];
                outlineCounter++;
                Outline[outlineCounter] = Right[y];
                outlineCounter++;
            }

            for (int x = 0; x < LengthX; x++) {
                Top[x] = this[x, SegmentsY];
                Bottom[x] = this[x, 0];
                int reversedIdx = LengthX - x - 1;

                TopReversed[reversedIdx] = Top[x];
                BottomReversed[reversedIdx] = Bottom[x];

                if (x != 0 && x != LengthX - 1) {
                    Outline[outlineCounter] = Top[x];
                    outlineCounter++;
                    Outline[outlineCounter] = Bottom[x];
                    outlineCounter++;
                }
            }

            Corners[0] = this[0, 0];
            Corners[1] = this[0, SegmentsY];
            Corners[2] = this[SegmentsX, SegmentsY];
            Corners[3] = this[SegmentsX, 0];
        }

        public static void BuildQuad(bool invert, List<Face> faces,  Vertex idx0, Vertex idx1, Vertex idx2, Vertex idx3) {
            if (invert) {
                faces.Add( new Face(idx3, idx2, idx0) );
                faces.Add( new Face(idx2, idx1, idx0) );
            } else {
                faces.Add( new Face(idx0, idx1, idx2) );
                faces.Add( new Face(idx0, idx2, idx3) );
            }
         }

        public static void BuildTriangle(bool invert,  List<Face> faces,  Vertex idx0, Vertex idx1, Vertex idx2 ) {
           if (invert) {
                faces.Add( new Face(idx2, idx1, idx0) );
            } else {
                 faces.Add( new Face(idx0, idx1, idx2) );
            }
        }

        public void SetVertexColorAlpha(float alphaValue) {
            for (int i = 0; i<vertices.Length; i++) {
                vertices[i].Col.a = alphaValue;
            }
        }

        public void SetTopBottomSize(Vertex[] topStripe, Vertex[] bottomStripe) {
            if (Displayed) {
                for (int x = 0; x < bottomStripe.Length; x++) {
                    Vertex bottom = this[x, 0];
                    Vertex top = this[x, 1];
                    parent.mvertices[bottom] = bottom.Pos = bottomStripe[x].Pos;
                    parent.mvertices[top] = top.Pos = topStripe[x].Pos;
                    parent.mnormals[bottom] = bottom.Normal = bottomStripe[x].Normal;
                    parent.mnormals[top] = top.Normal = topStripe[x].Normal;
                }
            } else {
                for (int x = 0; x < bottomStripe.Length; x++) {
                    Vertex bottom = this[x, 0];
                    Vertex top = this[x, 1];
                    bottom.Pos = bottomStripe[x].Pos;
                    top.Pos = topStripe[x].Pos;
                    bottom.Normal = bottomStripe[x].Normal;
                    top.Normal = topStripe[x].Normal;
                }
            }
        }

        public void SetLeftRightSize(Vertex[] leftStripe, Vertex[] rightStripe) {
            if (Displayed) {
                for (int y = 0; y < LengthY; y++) {
                    parent.mvertices[Left[y]] = Left[y].Pos = leftStripe[y].Pos;
                    parent.mnormals[Left[y]] = Left[y].Normal = leftStripe[y].Normal;
                    parent.mvertices[Right[y]] = Right[y].Pos = rightStripe[y].Pos;
                    parent.mnormals[Right[y]] = Right[y].Normal = rightStripe[y].Normal;
                }
            } else {
                for (int y = 0; y < LengthY; y++) {
                    Left[y].Pos = leftStripe[y].Pos;
                    Left[y].Normal = leftStripe[y].Normal;
                    Right[y].Pos = rightStripe[y].Pos;
                    Right[y].Normal = rightStripe[y].Normal;
                }
            }
        }

        public void CopyMirrorY(bool oulineOnly, Element ep, float yOffset) {
            if (Displayed) {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex rv = ep.vertices[i];
                    Vertex v = vertices[i];
                    Vector3 norm = rv.Normal;
                    Vector3 pos = rv.Pos;
                    norm.y *= -1;
                    pos.y = -pos.y + yOffset;
                    parent.mvertices[v] = v.Pos = pos;
                    parent.mnormals[v] = v.Normal = norm;
                }
            } else {
                if (oulineOnly) {
                    for (int i = 0; i < Outline.Length; i++) {
                        Vertex rv = ep.Outline[i];
                        Vertex v = Outline[i];
                        Vector3 norm = rv.Normal;
                        Vector3 pos = rv.Pos;
                        norm.y *= -1;
                        pos.y = -pos.y + yOffset;
                        v.Pos = pos;
                        v.Normal = norm;
                    }
                } else {
                    for (int i = 0; i < vertices.Length; i++) {
                        Vertex rv = ep.vertices[i];
                        Vertex v = vertices[i];
                        Vector3 norm = rv.Normal;
                        Vector3 pos = rv.Pos;
                        norm.y *= -1;
                        pos.y = -pos.y + yOffset;
                        v.Pos = pos;
                        v.Normal = norm;
                    }
                }
            }
        }


        public void CopyMirrorY(bool oulineOnly, Element ep ) {
            if (Displayed) {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex rv = ep.vertices[i];
                    Vertex v = vertices[i];
                    Vector3 norm = rv.Normal;
                    Vector3 pos = rv.Pos;
                    norm.y *= -1;
                    pos.y = -pos.y ;
                    parent.mvertices[v] = v.Pos = pos;
                    parent.mnormals[v] = v.Normal = norm;
                }
            } else {
                if (oulineOnly) {
                    for (int i = 0; i < Outline.Length; i++) {
                        Vertex rv = ep.Outline[i];
                        Vertex v = Outline[i];
                        Vector3 norm = rv.Normal;
                        Vector3 pos = rv.Pos;
                        norm.y *= -1;
                        pos.y = -pos.y ;
                        v.Pos = pos;
                        v.Normal = norm;
                    }
                } else {
                    for (int i = 0; i < vertices.Length; i++) {
                        Vertex rv = ep.vertices[i];
                        Vertex v = vertices[i];
                        Vector3 norm = rv.Normal;
                        Vector3 pos = rv.Pos;
                        norm.y *= -1;
                        pos.y = -pos.y ;
                        v.Pos = pos;
                        v.Normal = norm;
                    }
                }
            }
        }


        public void CopyMirrorX(bool oulineOnly, Element ep, float xOffset) {
            if (Displayed) {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex rv = ep.vertices[i];
                    Vertex v = vertices[i];
                    Vector3 norm = rv.Normal;
                    Vector3 pos = rv.Pos;
                    norm.x *= -1;
                    pos.x = -pos.x + xOffset;
                    parent.mvertices[v] = v.Pos = pos;
                    parent.mnormals[v] = v.Normal = norm;
                }
            } else {
                if (oulineOnly) {
                    for (int i = 0; i < Outline.Length; i++) {
                        Vertex rv = ep.Outline[i];
                        Vertex v = Outline[i];
                        Vector3 norm = rv.Normal;
                        Vector3 pos = rv.Pos;
                        norm.x *= -1;
                        pos.x = -pos.x + xOffset;
                        v.Pos = pos;
                        v.Normal = norm;
                    }
                } else {
                    for (int i = 0; i < vertices.Length; i++) {
                        Vertex rv = ep.vertices[i];
                        Vertex v = vertices[i];
                        Vector3 norm = rv.Normal;
                        Vector3 pos = rv.Pos;
                        norm.x *= -1;
                        pos.x = -pos.x + xOffset;
                        v.Pos = pos;
                        v.Normal = norm;
                    }
                }
            }
        }

        public void CopyRotateYMirroredZ( bool outlineOnly, Element reference, Matrix2d rotationYMatrix) {
            if ( Displayed ) {
                for (int v = 0; v < vertices.Length; v++) {
                    Vertex rv = reference.vertices[v];
                    Vertex vert = this.vertices[v];
                    Vector3 refPos = rv.Pos;
                    refPos.z *= -1;
                    Vector3 refNorm = rv.Normal;
                    refNorm.z *= -1;
                    vert.Pos = parent.mvertices[vert] = rotationYMatrix.MultiplyVectorY(refPos);
                    vert.Normal = parent.mnormals[vert] = rotationYMatrix.MultiplyVectorY(refNorm);
                }
            } else {
                if (outlineOnly) {
                    for (int v = 0; v < Outline.Length; v++) {
                        Vertex rv = reference.Outline[v];
                        Vertex vert = this.Outline[v];
                        Vector3 refPos = rv.Pos;
                        refPos.z *= -1;
                        Vector3 refNorm = rv.Normal;
                        refNorm.z *= -1;
                        vert.Pos = rotationYMatrix.MultiplyVectorY(refPos);
                        vert.Normal = rotationYMatrix.MultiplyVectorY(refNorm);
                    }
                } else {
                    for (int v = 0; v < vertices.Length; v++) {
                        Vertex rv = reference.vertices[v];
                        Vertex vert = vertices[v];
                        Vector3 refPos = rv.Pos;
                        refPos.z *= -1;
                        Vector3 refNorm = rv.Normal;
                        refNorm.z *= -1;
                        vert.Pos = rotationYMatrix.MultiplyVectorY(refPos);
                        vert.Normal = rotationYMatrix.MultiplyVectorY(refNorm);
                    }
                }
            }
        }

        public void CopyRotateY (bool outlineOnly, Element reference, Matrix2d rotationYMatrix) {
            if (Displayed) {
                for (int v = 0; v < vertices.Length; v++) {
                    Vertex rv = reference.vertices[v];
                    Vertex vert = this.vertices[v];
                    vert.Pos = parent.mvertices[vert] = rotationYMatrix.MultiplyVectorY(rv.Pos);
                    vert.Normal = parent.mnormals[vert] = rotationYMatrix.MultiplyVectorY(rv.Normal);
                }
            } else {
                if (outlineOnly) {
                    for (int v = 0; v < Outline.Length; v++) {
                        Vertex rv = reference.Outline[v];
                        Vertex vert = this.Outline[v];
                        vert.Pos = rotationYMatrix.MultiplyVectorY(rv.Pos);
                        vert.Normal = rotationYMatrix.MultiplyVectorY(rv.Normal);
                    }
                } else {
                    for (int v = 0; v < vertices.Length; v++) {
                        Vertex rv = reference.vertices[v];
                        Vertex vert = vertices[v];
                        vert.Pos = rotationYMatrix.MultiplyVectorY(rv.Pos);
                        vert.Normal = rotationYMatrix.MultiplyVectorY(rv.Normal);
                    }
                }

            }
        }

        #region UVMETHODS
        public void SetUVRectTM(bool oulineOnly, Vector2[] uvs, Matrix2d tm) {
            if (Displayed) {
                for (int v = 0; v < vertices.Length; v++) {
                    Vertex vert = vertices[v];
                    uvs[vert] = vert.UV = tm.MultiplyPoint(vert.NormalizedCoords);
                }
            } else {
                if (oulineOnly) {
                    for (int v = 0; v < Outline.Length; v++) {
                        Vertex vert = Outline[v];
                        vert.UV = tm.MultiplyPoint(vert.NormalizedCoords);
                    }
                } else {
                    for (int v = 0; v < vertices.Length; v++) {
                        Vertex vert = vertices[v];
                        vert.UV = tm.MultiplyPoint(vert.NormalizedCoords);
                    }
                }
            }
        }

        public void SetUVRect(bool oulineOnly, Vector2[] uvs, Vector2 position, Vector2 size) {
            if (Displayed) {
                for (int i = 0; i<vertices.Length; i++) {
                    Vertex vert = vertices[i];
                    uvs[vert] = vert.UV = position + new Vector2(vert.NormalizedCoords.x * size.x, vert.NormalizedCoords.y * size.y);
                }

            } else {
                if (oulineOnly) {
                    for (int i = 0; i < Outline.Length; i++) {
                        Vertex vert = Outline[i];
                        vert.UV = position + new Vector2(vert.NormalizedCoords.x * size.x, vert.NormalizedCoords.y * size.y);
                    }
                } else {
                    for (int i = 0; i < vertices.Length; i++) {
                        Vertex vert = vertices[i];
                        vert.UV = position + new Vector2(vert.NormalizedCoords.x * size.x, vert.NormalizedCoords.y * size.y);
                    }
                }
            }
        }

        public void SetUVLeftRight(Vector2[] uvs, Vertex[] left, Vertex[] right) {
            if (Displayed) {
                for (int y = 0; y < LengthY; y++) {
                    uvs[Left[y]] = Left[y].UV = left[y].UV;
                    uvs[Right[y]] = Right[y].UV = right[y].UV;
                }
            } else {
                for (int y = 0; y < LengthY; y++) {
                    Left[y].UV = left[y].UV;
                    Right[y].UV = right[y].UV;
                }
            }
        }

        public void SetUVTopBottom(Vector2[] uvs, Vertex[] bottom, Vertex[] top) {
            if (Displayed) {
                for (int x = 0; x < LengthX; x++) {
                    uvs[Bottom[x]] = Bottom[x].UV = bottom[x].UV;
                    uvs[Top[x]] = Top[x].UV = top[x].UV;
                }
            } else {
                for (int x = 0; x < LengthX; x++) {
                    Bottom[x].UV = bottom[x].UV;
                    Top[x].UV = top[x].UV;
                }
            }
        }

        public void OffsetUV(bool outlineOnly, Vector2[] uvs,  Vector2 offset) {
            if (Displayed) {
                for (int v = 0; v < vertices.Length; v++) {
                    Vertex vert = this.vertices[v];
                    uvs[vert] = vert.UV = vert.UV + offset;
                }
            } 
        }

        public void CopyUV(bool oulineOnly, Vector2[] uvs, Element source, Vector2 offset) {
            if (Displayed) {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex vert = vertices[i];
                    uvs[vert] = vert.UV =  source.vertices[i].UV + offset;
                }
            } else {
                if (oulineOnly) {
                    for (int i = 0; i < Outline.Length; i++) {
                        Vertex vert = Outline[i];
                        vert.UV = source.Outline[i].UV + offset;
                    }
                } else {
                    for (int i = 0; i < vertices.Length; i++) {
                        Vertex vert = vertices[i];
                        vert.UV = source.vertices[i].UV + offset;
                    }
                }
            }
        }

        public void CopyUV( bool outlineOnly, Vector2[] uvs, Element reference, Matrix2d rotationYMatrix) {
            if (Displayed) {
                for (int v = 0; v < vertices.Length; v++) {
                    Vertex rv = reference.vertices[v];
                    Vertex vert = this.vertices[v];
                    uvs[vert] = vert.UV = rotationYMatrix.MultiplyVector(rv.UV);
                 }
            } else {
                if (outlineOnly) {
                    for (int v = 0; v < Outline.Length; v++) {
                        Vertex rv = reference.Outline[v];
                        Vertex vert = this.Outline[v];
                        vert.UV = rotationYMatrix.MultiplyVector(rv.UV);
                    }
                } else {
                    for (int v = 0; v < vertices.Length; v++) {
                        Vertex rv = reference.vertices[v];
                        Vertex vert = vertices[v];
                        vert.UV = rotationYMatrix.MultiplyVector(rv.UV);
                    }
                }
            }
        }


        public void CopyUV(bool outlineOnly, Vector2[] uvs, Element reference, Matrix2d rotationYMatrix, Vector2 offset) {
            if (Displayed) {
                for (int v = 0; v < vertices.Length; v++) {
                    Vertex rv = reference.vertices[v];
                    Vertex vert = this.vertices[v];
                    uvs[vert] = vert.UV = rotationYMatrix.MultiplyVector(rv.UV) + offset;
                }
            } else {
                if (outlineOnly) {
                    for (int v = 0; v < Outline.Length; v++) {
                        Vertex rv = reference.Outline[v];
                        Vertex vert = this.Outline[v];
                        vert.UV = rotationYMatrix.MultiplyVector(rv.UV) + offset;
                    }
                } else {
                    for (int v = 0; v < vertices.Length; v++) {
                        Vertex rv = reference.vertices[v];
                        Vertex vert = vertices[v];
                        vert.UV = rotationYMatrix.MultiplyVector(rv.UV) + offset;
                    }
                }
            }
        }


        public void CopyUV(bool oulineOnly, Vector2[] uvs, Element source, Vector2 offset, Vector2 scale) {
            if (Displayed) {
                for (int i = 0; i < vertices.Length; i++) {
                    uvs[vertices[i]] = vertices[i].UV =  Vector2.Scale(source.vertices[i].UV, scale) + offset;
                }
            } else {
                if (oulineOnly) {
                    for (int i = 0; i < Outline.Length; i++) {
                        Outline[i].UV = Vector2.Scale(source.Outline[i].UV, scale) + offset;
                    }
                } else {
                    for (int i = 0; i < vertices.Length; i++) {
                        vertices[i].UV = Vector2.Scale(source.vertices[i].UV, scale) + offset;
                    }
                }
            }
        }

        public void SnapUV(bool outlineOnly, Vector2[] uvs, Element source, int corner, Vector2 snapTo, Vector2 scale) {
            Vector2 offset = snapTo - Vector2.Scale(source.Corners[corner].UV, scale);
 
            if (Displayed) {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex vert = vertices[i];
                    uvs[vert] = vert.UV = Vector2.Scale(source.vertices[i].UV, scale) + offset;
                 }
            } else {
                if (outlineOnly) {
                    for (int i = 0; i < Outline.Length; i++) {
                        Vertex vert = Outline[i];
                        vert.UV = Vector2.Scale(source.Outline[i].UV, scale) + offset;
                    }
                } else {
                    for (int i = 0; i < vertices.Length; i++) {
                        Vertex vert = vertices[i];
                        vert.UV = Vector2.Scale(source.vertices[i].UV, scale) + offset;
                    }
                }
            }
        }

        public void SetUVPlanarXY(bool outlineOnly, Vector2[] uvs ) {
            if (Displayed) {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex vert = vertices[i];
                    uvs[vert] = vert.UV = new Vector2(vert.Pos.x, vert.Pos.y);
                }
            } else {
                if (outlineOnly) {
                    for (int i = 0; i < Outline.Length; i++) {
                        Vertex vert = Outline[i];
                        vert.UV = new Vector2(vert.Pos.x, vert.Pos.y);
                    }
                } else {
                    for (int i = 0; i < vertices.Length; i++) {
                        Vertex vert = vertices[i];
                        vert.UV = new Vector2(vert.Pos.x, vert.Pos.y);
                    }
                }
            }
        }

        public void SetUVPlanarXY(Vector2[] uvs, int snapCorner, Vector2 snapTo) {
            Vector2 offset = snapTo - new Vector2(Corners[snapCorner].Pos.x, Corners[snapCorner].Pos.y);

            if (Displayed) {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex vert = vertices[i];
                    uvs[vert] = vert.UV = new Vector2(vert.Pos.x, vert.Pos.y) + offset;
                }
            } else {
                for (int i = 0; i < Outline.Length; i++) {
                    Vertex vert = Outline[i];
                    vert.UV = new Vector2(vert.Pos.x, vert.Pos.y) + offset;
                }
            }
        }

        public void SetUVPlanarXY(Vector2[] uvs, Vector2 offset) {

            if (Displayed) {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex vert = vertices[i];
                    uvs[vert] = vert.UV = new Vector2(vert.Pos.x, vert.Pos.y) + offset;
                }
            } else {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex vert = vertices[i];
                    vert.UV = new Vector2(vert.Pos.x, vert.Pos.y) + offset;
                }
            }
        }

        public void SetUVPlanarXZ(Vector2[] uvs, Vector2 offset) {
            if (Displayed) {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex vert = vertices[i];
                    uvs[vert] = vert.UV = new Vector2(vert.Pos.x, vert.Pos.z) + offset;
                }
            } else {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex vert = vertices[i];
                    vert.UV = new Vector2(vert.Pos.x, vert.Pos.z) + offset;
                }
            }
        }

        public void SetUVPlanarXZFlipped(Vector2[] uvs, Vector2 offset  ) {
            if (Displayed) {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex vert = vertices[i];
                    uvs[vert] = vert.UV = new Vector2(-vert.Pos.x, vert.Pos.z) + offset;
                }
            } else {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex vert = vertices[i];
                    vert.UV = new Vector2(-vert.Pos.x, vert.Pos.z) + offset;
                }
            }
        }

        public void SetUVSnapAndSize(bool outlineOnly, Vector2[] uvs, int snapCorner, Vector2 snapTo, Vector2 size) {
            Vector2 offset = snapTo - Vector2.Scale(size, Corners[snapCorner].NormalizedCoords);
            if (Displayed) {
                for (int v = 0; v<vertices.Length; v++) {
                    Vertex vert = vertices[v];
                    uvs[vert] = vert.UV = Vector2.Scale(size, vert.NormalizedCoords) + offset;
                }
             } else {
                if (outlineOnly) {
                    for (int v = 0; v < Outline.Length; v++) {
                        Vertex vert = Outline[v];
                        vert.UV = Vector2.Scale(size, vert.NormalizedCoords) + offset;
                    }
                } else {
                    for (int v = 0; v < vertices.Length; v++) {
                        Vertex vert = vertices[v];
                        vert.UV = Vector2.Scale(size, vert.NormalizedCoords) + offset;
                    }
                } 
            }
        }

        public void AddUVOffset(Vector2[] uvs, Vector2 offset) {
            if (Displayed) {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex vert = vertices[i];
                    vertices[i].UV = uvs[vert] = vert.UV + offset;
                }
            } else {
                for (int i = 0; i < vertices.Length; i++) {
                    Vertex vert = vertices[i];
                    vertices[i].UV  = vert.UV + offset;
                }

            }
        }

        #endregion


    }

}
