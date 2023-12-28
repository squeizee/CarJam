using UnityEngine;
using System.Collections;
using UnityEditor;

namespace ExtendedPrimitives_11 {
#if UNITY_5_5_OR_NEWER
    [PreferBinarySerialization]
#endif
    public class ExtendedPrimitivesEditorResourcesHolder : ScriptableObject {

        public Texture2D Point;
        public GUIStyle UVPreviewGridNumbers;
        public GUIStyle UVInspectorButton;
        public GUIStyle UVInspectorViewportMessage;
        public Texture2D UVInspectorLineMatTex;
    }

    [CustomEditor(typeof(ExtendedPrimitivesEditorResourcesHolder))]
    public class ExtendedPrimitivesEditorResourcesHolderInspector :Editor {
 
        //[UnityEditor.MenuItem("Create RH/create")]
        static void CreateInstance() {
            var data = ScriptableObject.CreateInstance<ExtendedPrimitivesEditorResourcesHolder>();
            AssetDatabase.CreateAsset(data, "Assets/ExtendedPrimitivesEditorResourcesHolder.asset");
            AssetDatabase.SaveAssets();
            AssetDatabase.Refresh();
        }


        static ExtendedPrimitivesEditorResourcesHolder _instance;
        public static ExtendedPrimitivesEditorResourcesHolder Instance {
            get {
                if (_instance == null) {
                    string[] result = AssetDatabase.FindAssets("ExtendedPrimitivesEditorResourcesHolderInstance");
                    if (result != null && result.Length > 0) {
                        string path = AssetDatabase.GUIDToAssetPath(result[0]);
                        _instance = (ExtendedPrimitivesEditorResourcesHolder)AssetDatabase.LoadAssetAtPath(path, typeof(ExtendedPrimitivesEditorResourcesHolder));
 
                    }
                }
                return _instance;
            }
        }

    }
}
