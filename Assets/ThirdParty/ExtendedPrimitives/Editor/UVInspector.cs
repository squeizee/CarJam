using UnityEngine;
using System.Collections;
using UnityEditor;
using ExtendedPrimitives_11;

namespace ExtendedPrimitives_11.Internal {

    public class UVinspector : EditorWindow {
        Matrix2d UVtoGUItm;
        Matrix2d GUItoUVtm;

        Material lineMaterial;
        Material solidMaterial;

        Vector2[] uvs;
        Vector2[] sourceuvs;

        int[] triangles;

        GUIStyle numberStyle;
        int HeaderHeight = 30;

        ExtendedPrimitive ep;
 
        float zoom;
        Vector2 pan;
        bool isDarkSkin;


        static int layoutTextureSize = 0;
        static string[] layoutTextureSizeNames = new string[3] { "1024", "2048", "4096" };
        static int[] layoutTextureSizes = new int[3] { 1024, 2048, 4096 };

        static int DisplayedUVChannel = 0;
        static string[] uvChannelsNames = new string[2] { "uv0", "uv2" };

        static Vector3[] quadUVs = new Vector3[4] { new Vector3(0, 0, -1), new Vector3(0, 1, -1), new Vector3(1, 1, -1), new Vector3(1, 0, -1) };
   
        public static UVinspector  CreateUVInspectorWindow(  ) {
            UVinspector window = (UVinspector)EditorWindow.GetWindow(typeof(UVinspector));
            window.titleContent = new GUIContent("UV inspector", "Extended Primitives UV inspector");
            window.autoRepaintOnSceneChange = true;
            window.minSize = new Vector2(32, 32);
            window.Show();
            return window;
        }


        GUIStyle _headerStyle = null;
        GUIStyle header_Style {
            get {
                if (_headerStyle == null) {
                    if (EditorStyles.miniButton == null) {
                        Debug.Log("Editor styles null");
                        return new GUIStyle();
                    } else {
                        _headerStyle = new GUIStyle( EditorStyles.miniButton );
                        _headerStyle.border = new RectOffset(4, 4, 4, 4);
                    }
                }
                return _headerStyle;
            }
        }



        void OnEnable() {
            lineMaterial = GetLineMaterial();
            solidMaterial = GetSolidMaterial();
            numberStyle = ExtendedPrimitivesEditorResourcesHolderInspector.Instance.UVPreviewGridNumbers;
            this.Repaint();
        }

        void OnGUI() {
            if (ep == null) {
                DrawUnselected();
            } else {
                DrawSelected();
            }
        }

        void DrawHeader() {
            GUI.Box(new Rect(-4, -4, position.width + 8, HeaderHeight + 4), GUIContent.none, header_Style);
  
            GUILayout.BeginArea(new Rect(6, 6, position.width - 4, HeaderHeight - 4));
            GUILayout.BeginHorizontal();

            GUILayout.Label("Inspected:", GUILayout.Width(70));
            ep = (ExtendedPrimitive)EditorGUILayout.ObjectField(ep, typeof(ExtendedPrimitive), true, GUILayout.Width(200));
 
            GUILayout.Label("Channel ", GUILayout.Width(50));
            DisplayedUVChannel = EditorGUILayout.Popup(DisplayedUVChannel, uvChannelsNames, GUILayout.Width(50));


            GUILayout.Label("Dimension", GUILayout.Width(66));
            layoutTextureSize = EditorGUILayout.Popup(layoutTextureSize, layoutTextureSizeNames, GUILayout.Width(50));
            if (GUILayout.Button("Export", EditorStyles.miniButton, GUILayout.Width(50))) {
                string recentPath = EditorPrefs.GetString("PolyflowExtendedPrimitivesUVLayoutPath", Application.dataPath);
                string recentDir = System.IO.Path.GetDirectoryName(recentPath);
                string recentName = System.IO.Path.GetFileNameWithoutExtension(recentPath);
                string openedfilepath = EditorUtility.SaveFilePanel("Save UV layout", recentDir, recentName, "png");
                if (!string.IsNullOrEmpty(openedfilepath)) {
                    SaveUVLayoutTexture(layoutTextureSizes[layoutTextureSize], openedfilepath);
                    EditorPrefs.SetString("PolyflowExtendedPrimitivesUVLayoutPath", openedfilepath);
                }
            }

            if (GUILayout.Button(new GUIContent( "Frame"), EditorStyles.miniButton,   GUILayout.Width(50) )) {
                FrameToBounds();
            }
            GUILayout.EndHorizontal();
            GUILayout.EndArea();
        }

        void DrawUnselected() {
            DrawHeader();
            GUIContent message = new GUIContent("Select Extended Primitive object");
            float width = ExtendedPrimitivesEditorResourcesHolderInspector.Instance.UVInspectorViewportMessage.CalcSize(message).x;
            GUI.Label(new Rect(position.width / 2 - width / 2, position.height / 2 + 20, width, 30), message, ExtendedPrimitivesEditorResourcesHolderInspector.Instance.UVInspectorViewportMessage);
        }

        void DrawEmptyUV(int channelIdx) {
            DrawHeader();
            GUIContent message = new GUIContent(string.Format("No data in {0} channel", uvChannelsNames[channelIdx]));
            float width = ExtendedPrimitivesEditorResourcesHolderInspector.Instance.UVInspectorViewportMessage.CalcSize(message).x;
            GUI.Label(new Rect(position.width / 2 - width / 2, position.height / 2 + 20, width, 30), message, ExtendedPrimitivesEditorResourcesHolderInspector.Instance.UVInspectorViewportMessage);
        }

        void DrawSelected() {
            Event e = Event.current;

            zoom = ep.UVInspectorParams[0];
            pan = new Vector2(ep.UVInspectorParams[1], ep.UVInspectorParams[2]);

            sourceuvs = DisplayedUVChannel == 1 ? ep.SharedMesh.uv2 : ep.SharedMesh.uv;
            if (sourceuvs == null || sourceuvs.Length == 0) {
                DrawEmptyUV(DisplayedUVChannel);
                return;
            }

            triangles = ep.SharedMesh.triangles;
          

            if (uvs == null || ep.SharedMesh.uv.Length != uvs.Length) {
                uvs = new Vector2[ep.SharedMesh.uv.Length];
            }

            float viewportWidth = position.width;
            float viewportHeight = position.height - HeaderHeight;

            float ratio = viewportWidth / viewportHeight;
            Matrix2d uvTM = new Matrix2d(new Vector2(zoom * ratio * 0.5f, 0), new Vector2(0, zoom * 0.5f), pan);
            Matrix2d uvTMi = uvTM.Inverse;

            Matrix2d guiTM = new Matrix2d(new Vector2(viewportWidth / 2, 0), new Vector2(0, -viewportHeight / 2), new Vector2(viewportWidth / 2, viewportHeight / 2 + HeaderHeight));

            Matrix2d guiTMi = guiTM.Inverse;

            UVtoGUItm = guiTM * uvTMi;
            GUItoUVtm = uvTM * guiTMi;

            if (e.type == EventType.Layout && e.clickCount == 2) {
                FrameToBounds();
            }

            for (int i = 0; i < uvs.Length; i++) {
                uvs[i] = UVtoGUI(sourceuvs[i]);
            }

            Vector2 uvLeftBottom = GUItoUV(new Vector2(0, viewportHeight + HeaderHeight));
            Vector2 uvRightTop = GUItoUV(new Vector2(viewportWidth, HeaderHeight));
            Vector2 uvWindowSize = (uvRightTop - uvLeftBottom);
            float uvMax = Mathf.Max(uvWindowSize.x, uvWindowSize.y);
            int gridStep = 1;
 
            if (uvMax > 20 && uvMax <= 200) {
                gridStep = 10;
            } else if (uvMax > 200 && uvMax <= 2000) {
                gridStep = 100;
            } else if (uvMax > 2000 ) {
                gridStep = 1000;
            }

            if (e.type == EventType.MouseDrag && e.button == 1 && e.modifiers == EventModifiers.Alt) {
                zoom -= zoom * 0.01f * Mathf.Sign(e.delta.y);
                e.Use();
            } else if (e.type == EventType.ScrollWheel && e.modifiers == EventModifiers.None) {
                zoom += zoom * 0.1f * Mathf.Sign(e.delta.y);
                e.Use();
            } else if (e.type == EventType.MouseDrag && e.button == 2) {
                Vector2 d = e.delta / viewportHeight * zoom;
                d.x *= -1;
                pan += d;
                e.Use();
            }


            if (e.type == EventType.Repaint) {

                #region Background
                solidMaterial.SetPass(0);
                GL.Begin(GL.QUADS);
                GL.Color(new Color(0.75f, 0.75f, 0.75f, 1f));
                GL.Vertex3(0, HeaderHeight,0);
                GL.Vertex3(viewportWidth, HeaderHeight, 0);
                GL.Vertex3(viewportWidth, position.height, 0);
                GL.Vertex3(0, position.height, 0);
                #endregion

                GL.End();

                #region Fill
                solidMaterial.SetPass(0);
                GL.Begin(GL.TRIANGLES);
                GL.Color(new Color(0, 1, 0, 0.2f));
                //GL.Color(new Color(0, 1, 0, 0.2f));
                for (int i = 0; i < triangles.Length; i += 3) {
                    DrawTriangle(uvs[triangles[i]], uvs[triangles[i + 1]], uvs[triangles[i + 2]]);
                }
                GL.End();
                #endregion

                #region Edges
                lineMaterial.SetPass(0);
                GL.Begin(GL.QUADS);
                GL.Color(new Color(0, 0, 0, 1));
                for (int i = 0; i < ep.MEdges.Count; i++) {
                    DrawLine(uvs[ep.MEdges[i].A], uvs[ep.MEdges[i].B]);
                }
                GL.End();
                #endregion

                #region UnitFrame
                GL.Begin(GL.QUADS);
                GL.Color(new Color(1, 0, 0, 1));
                DrawLine(UVtoGUI(Vector2.zero), UVtoGUI(new Vector2(1, 0)));
                DrawLine(UVtoGUI(Vector2.zero), UVtoGUI(new Vector2(0, 1)));
                DrawLine(UVtoGUI(new Vector2(0, 1)), UVtoGUI(new Vector2(1, 1)));
                DrawLine(UVtoGUI(new Vector2(1, 0)), UVtoGUI(new Vector2(1, 1)));
                GL.End();
                #endregion

                #region GRID
                GL.Begin(GL.QUADS);
                GL.Color(new Color(1, 0, 0, .25f));
                for (int x = (int)uvLeftBottom.x; x < uvRightTop.x; x++) {
                    if (x % gridStep != 0) {
                        continue;
                    }
                    DrawLine(UVtoGUI(new Vector2(x, uvLeftBottom.y)), UVtoGUI(new Vector2(x, uvRightTop.y)));
                }

                for (int y = (int)uvLeftBottom.y; y < uvRightTop.y; y++) {
                    if (y % gridStep != 0) {
                        continue;
                    }
                    DrawLine(UVtoGUI(new Vector2(uvLeftBottom.x, y)), UVtoGUI(new Vector2(uvRightTop.x, y)));
                }
                GL.End();



                GL.End();
                #endregion
            }

            for (int x = (int)uvLeftBottom.x; x < uvRightTop.x; x++) {
                if (x == 0) {
                    continue;
                }
                if (x % gridStep != 0) {
                    continue;
                }

                Vector2 pos = UVtoGUI(new Vector2(x, 0));
                pos.x += 2;
                pos.y = Mathf.Clamp(pos.y, 0, position.height - 12) + 1;
                Rect r = new Rect(pos, new Vector2(100, 200));
                GUI.Label(r, x.ToString(), numberStyle);
            }

            for (int y = (int)uvLeftBottom.y; y < uvRightTop.y; y++) {
                if (y % gridStep != 0) {
                    continue;
                }

                Vector2 pos = UVtoGUI(new Vector2(0, y));
                pos.y -= 12;
                pos.x = Mathf.Clamp(pos.x, 2, position.width - 12) + 2;
                Rect r = new Rect(pos, new Vector2(100, 200));
                GUI.Label(r, y.ToString(), numberStyle);
            }


            DrawHeader();

            if (ep != null) {

                bool panChanged = !Mathf.Approximately(pan.x, ep.UVInspectorParams[1]) || !Mathf.Approximately(pan.y, ep.UVInspectorParams[2]);
                bool zoomChanged = !Mathf.Approximately(zoom, ep.UVInspectorParams[0]);

                if (panChanged || zoomChanged) {
                    Undo.RecordObject(ep, "uv preview params");
                    ep.UVInspectorParams[0] = zoom;
                    ep.UVInspectorParams[1] = pan.x;
                    ep.UVInspectorParams[2] = pan.y;
                }
            }
        }

        public Vector2 UVtoGUI(Vector2 uvPoint) {

            return UVtoGUItm.MultiplyPoint(uvPoint);
        }

        public Vector2 GUItoUV(Vector2 guiPoint) {
            return GUItoUVtm.MultiplyPoint(guiPoint);
        }

        void DrawTriangle(Vector2 a, Vector2 b, Vector2 c) {
            GL.Vertex3(a.x, a.y, 0);
            GL.Vertex3(b.x, b.y, 0);
            GL.Vertex3(c.x, c.y, 0);
        }

        void DrawQuad(Vector2 p0, Vector2 p1, Vector2 p2, Vector2 p3) {
            GL.TexCoord(quadUVs[0]);
            GL.Vertex3(p0.x, p0.y, 0);

            GL.TexCoord(quadUVs[1]);
            GL.Vertex3(p1.x, p1.y, 0);

            GL.TexCoord(quadUVs[2]);
            GL.Vertex3(p2.x, p2.y, 0);

            GL.TexCoord(quadUVs[3]);
            GL.Vertex3(p3.x, p3.y, 0);
        }

        void DrawLine(Vector2 a, Vector2 b) {

            Vector2 o;
            Vector2 p0 = a;
            Vector2 p1 = a;
            Vector2 p2 = b;
            Vector2 p3 = b;

            if (Mathf.Approximately(a.x, b.x)) {
                p0.x = Mathf.Floor(a.x);
                p1.x = p0.x + 1;
                p3.x = Mathf.Floor(b.x);
                p2.x = p3.x + 1;

            } else if (Mathf.Approximately(a.y, b.y)) {
                p0.y = Mathf.Floor(p0.y);
                p1.y = p0.y + 1;
                p3.y = Mathf.Floor(p3.y);
                p2.y = p3.y + 1;

            } else {
                Vector2 dir = (b - a).normalized;
                o = new Vector2(-dir.y, dir.x);
                p0 = a - o;
                p1 = a + o;
                p2 = b + o;
                p3 = b - o;
            }


            GL.TexCoord(quadUVs[0]);
            GL.Vertex3(p0.x, p0.y, 0);

            GL.TexCoord(quadUVs[1]);
            GL.Vertex3(p1.x, p1.y, 0);

            GL.TexCoord(quadUVs[2]);
            GL.Vertex3(p2.x, p2.y, 0);

            GL.TexCoord(quadUVs[3]);
            GL.Vertex3(p3.x, p3.y, 0);
        }

        float boundsMinX;
        float boundsMaxX;

        float boundsMinY;
        float boundsMaxY;

        void FrameToBounds() {
            sourceuvs = DisplayedUVChannel == 1 ? ep.SharedMesh.uv2 : ep.SharedMesh.uv;
            if (sourceuvs == null || sourceuvs.Length == 0) {
                zoom = 1;
                pan = Vector2.zero;
 
                return;
            }
            Vector2 fp = sourceuvs[0];
            boundsMinX = boundsMaxX = fp.x;
            boundsMinY = boundsMaxY = fp.y;

            for (int i = 1; i < sourceuvs.Length; i++) {
                Vector2 uv = sourceuvs[i];
                if (uv.x < boundsMinX) {
                    boundsMinX = uv.x;
                }
 
                boundsMinY = Mathf.Min(boundsMinY, uv.y);
                boundsMaxX = Mathf.Max(boundsMaxX, uv.x);
                boundsMaxY = Mathf.Max(boundsMaxY, uv.y);
            }

 
            float boundWidth = boundsMaxX - boundsMinX;
            float boundHeight = boundsMaxY - boundsMinY;

            zoom = Mathf.Max(boundWidth * position.size.y / position.size.x, boundHeight) * 1.1f;

            pan.x = Mathf.LerpUnclamped(boundsMinX, boundsMaxX, 0.5f);
            pan.y = Mathf.LerpUnclamped(boundsMinY, boundsMaxY, 0.5f);

            this.Repaint();
        }

        Material GetLineMaterial() {
            Material m = new Material(Shader.Find("Hidden/ExtendedPrimitivesUVInspectorGL"));
            m.hideFlags = HideFlags.HideAndDontSave;
            Texture2D t = ExtendedPrimitivesEditorResourcesHolderInspector.Instance.UVInspectorLineMatTex;
 
            m.SetTexture("_MainTex", t);
            return m;
        }

        Material GetSolidMaterial() {
            Material m = new Material(Shader.Find("Hidden/ExtendedPrimitivesUVInspectorGL"));
            m.hideFlags = HideFlags.HideAndDontSave;
            Texture2D t = Texture2D.whiteTexture;
            t.hideFlags = HideFlags.HideAndDontSave;
            m.SetTexture("_MainTex", t);
            return m;
        }

        void SaveUVLayoutTexture(int texSize, string path) {
            Texture2D tex = new Texture2D(texSize, texSize, TextureFormat.ARGB32, false);
            tex.SetPixels32(new Color32[texSize * texSize]);
            tex.Apply();

            Vector2[] _uvs = new Vector2[sourceuvs.Length];
            for (int i = 0; i < _uvs.Length; i++) {
                _uvs[i] = new Vector2(Mathf.Floor(sourceuvs[i].x * texSize), Mathf.Floor(sourceuvs[i].y * texSize));
            }

            Color trisColor = (new Color32(155, 206, 155, 255));
            for (int t = 0; t < triangles.Length; t += 3) {
                Vector2 a = _uvs[triangles[t]];
                Vector2 b = _uvs[triangles[t + 1]];
                Vector2 c = _uvs[triangles[t + 2]];
                DrawTexture2dTriangle(tex, a, b, c, trisColor);
            }

            for (int e = 0; e < ep.MEdges.Count; e++) {
                Vector2 a = _uvs[ep.MEdges[e].A];
                Vector2 b = _uvs[ep.MEdges[e].B];
                DrawTexture2dLine(tex, a, b, Color.black);
            }

            tex.Apply();
            byte[] bytes = tex.EncodeToPNG();
            Object.DestroyImmediate(tex, true);

            System.IO.File.WriteAllBytes(path, bytes);
        }

        void DrawTexture2dLine(Texture2D tex, Vector2 a, Vector2 b, Color col) {
            float xLength = Mathf.Abs(b.x - a.x);
            float yLength = Mathf.Abs(b.y - a.y);
            float max = Mathf.Max(xLength, yLength);

            for (int i = 0; i < max; i++) {
                float lv = i / max;
                Vector2 p = Vector2.LerpUnclamped(a, b, lv);
                if (p.x < 0 || p.y < 0 || p.x >= tex.width || p.y >= tex.height) {
                    continue;
                }
                tex.SetPixel((int)p.x, (int)p.y, col);

            }
        }

        void DrawTexture2dTriangle(Texture2D tex, Vector2 a, Vector2 b, Vector2 c, Color col) {
            float xMin = Mathf.Min(a.x, b.x, c.x);
            float xMax = Mathf.Max(a.x, b.x, c.x);
            float yMin = Mathf.Min(a.y, b.y, c.y);
            float yMax = Mathf.Max(a.y, b.y, c.y);

            xMin = Mathf.Clamp(xMin, 0, 8192);
            xMax = Mathf.Clamp(xMax, -8192, tex.width - 1);
            yMin = Mathf.Clamp(yMin, 0, 8192);
            yMax = Mathf.Clamp(yMax, -8192, tex.height - 1);

            Triangle2d t = new Triangle2d(a, b, c);
            for (float x = xMin; x <= xMax; x++) {
                for (float y = yMin; y <= yMax; y++) {
                    Vector2 p = new Vector2(x, y);
                    if (t.PointTest(p)) {
                        tex.SetPixel((int)p.x, (int)p.y, col);
                    }
                }
            }
            DrawTexture2dLine(tex, a, b, col);
            DrawTexture2dLine(tex, b, c, col);
            DrawTexture2dLine(tex, c, a, col);
        }

        public void SelectPrimitive(ExtendedPrimitive _ep ) {
            ep = _ep;
            FrameToBounds();
            OnEnable();
        }

    }
}
