using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace ExtendedPrimitives_11.Internal {

    [CustomPropertyDrawer(typeof(A_TextureChannelParams))]
    public class UVChannelParamsDrawer : PropertyDrawer {
        SerializedProperty prp_mappingType;
        SerializedProperty prp_updateMode;

        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label) {
            EditorGUI.BeginProperty(position, label, property);
            EditorGUI.PropertyField(position, property);

            if (property.isExpanded) {
                EditorGUI.indentLevel++;
                prp_updateMode = property.FindPropertyRelative("UpdateMode");
                EditorGUILayout.PropertyField(prp_updateMode);
                if (prp_updateMode.intValue != 0) {
                    prp_mappingType = property.FindPropertyRelative("MappintType");
                    EditorGUILayout.PropertyField(prp_mappingType);
                    EditorGUILayout.PropertyField(property.FindPropertyRelative("Scale"));
                    EditorGUILayout.PropertyField(property.FindPropertyRelative("Offset"));
                    if (prp_mappingType.intValue == 2) {
                        EditorGUILayout.PropertyField(property.FindPropertyRelative("TopTransform"));
                        EditorGUILayout.PropertyField(property.FindPropertyRelative("BottomTransform"));
                    }
                }
                GUILayout.Space(6);
                EditorGUI.indentLevel--;
            }

            EditorGUI.EndProperty();
        }
    }

    [CustomPropertyDrawer(typeof(A_Size))]
    public class SizeDrawer : PropertyDrawer {

        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label) {
            EditorGUI.BeginProperty(position, label, property);
            A_Size size = attribute as A_Size;
            label.tooltip = size.Tooltip ;
            EditorBase.MaxSizeSliderValue = Mathf.Max(property.floatValue, EditorBase.MaxSizeSliderValue);
            EditorGUI.Slider(position, property, 0, EditorBase.MaxSizeSliderValue * size.MaxValueScale, label);
            EditorGUI.EndProperty();
        }
    }

    [CustomPropertyDrawer(typeof(A_Statistic))]
    public class StatisticDrawer : PropertyDrawer {

        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label) {
            StatisticClass sc = ((ExtendedPrimitive)property.serializedObject.targetObject).Statistic;

            EditorGUI.BeginProperty(position, label, property);
            EditorGUI.PropertyField(position, property);

            if (property.isExpanded) {
                GUILayout.Label(string.Format("Mesh {0} verts, {1} tris", sc.VerticesCount, sc.TrianglesCount));
                GUILayout.Label(string.Format("Collider {0} verts, {1} tris", sc.ColliderVerticesCount, sc.ColliderFacesCount));

                EditorGUILayout.PropertyField(property.FindPropertyRelative("DrawObjectGizmo"));
                EditorGUILayout.PropertyField(property.FindPropertyRelative("DrawBounds"));

                EditorGUILayout.Slider(property.FindPropertyRelative("NormalsGizmoLength"), 0, EditorBase.MaxSizeSliderValue);
                EditorGUILayout.Slider(property.FindPropertyRelative("TangentsGizmoLength"), 0, EditorBase.MaxSizeSliderValue);
                GUILayout.Space(6);
                GUILayout.Label("Update time:");

                string str;
               
                GUILayout.BeginHorizontal();
                GUILayout.Space(12);
                GUILayout.Label("Topology ", GUILayout.Width(80));
                str = sc.Topology.Updated ? string.Format("{0} ms", sc.Topology.Average.ToString("F3")) : "-";
                GUILayout.Label(str);
                GUILayout.EndHorizontal();

                GUILayout.BeginHorizontal();
                GUILayout.Space(12);
                GUILayout.Label("Size", GUILayout.Width(80));
                str = sc.Size.Updated ? string.Format("{0} ms", sc.Size.Average.ToString("F3")) : "-";
                GUILayout.Label(str);
                GUILayout.EndHorizontal();

                GUILayout.BeginHorizontal();
                GUILayout.Space(12);
                GUILayout.Label("Tex. coords", GUILayout.Width(80));
                str = sc.TextureCoordinates.Updated ? string.Format("{0} ms", sc.TextureCoordinates.Average.ToString("F3")) : "-";
                GUILayout.Label(str);
                GUILayout.EndHorizontal();

                GUILayout.BeginHorizontal();
                GUILayout.Space(12);
                GUILayout.Label("Tangents", GUILayout.Width(80));
                str = sc.Tangents.Updated ? string.Format("{0} ms", sc.Tangents.Average.ToString("F3")) : "-";
                GUILayout.Label(str);
                GUILayout.EndHorizontal();

                GUILayout.BeginHorizontal();
                GUILayout.Space(12);
                GUILayout.Label("Total ", GUILayout.Width(80));
                GUILayout.Label(string.Format("{0} ms", sc.Apply.Average.ToString("F3")));
                GUILayout.EndHorizontal();

                GUILayout.Space(6);
                GUILayout.Label(string.Format("Recent raycast: {0} ms", sc.Raycast.Average.ToString("F3")));


                GUILayout.Space(6);
            }

            EditorGUI.EndProperty();
        }
    }

    [CustomPropertyDrawer(typeof(A_Collider))]
    public class ColliderDrawer : PropertyDrawer {

        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label) {
            EditorGUI.BeginProperty(position, label, property);
            EditorGUI.PropertyField(position, property);

            if (property.isExpanded) {
                EditorGUI.indentLevel++;
                EditorGUILayout.PropertyField(property.FindPropertyRelative("Detalization"));
                EditorGUILayout.PropertyField(property.FindPropertyRelative("DrawGizmo"));
                GUILayout.BeginHorizontal();
                GUILayout.Space(18);
                if (GUILayout.Button("Create Mesh Collider")) {
                    ExtendedPrimitive ep = (ExtendedPrimitive)property.serializedObject.targetObject;
                    ep.Collider.CreateMeshCollider(ep); 
                }
                GUILayout.EndHorizontal();
                EditorGUI.indentLevel--;
            }
            EditorGUI.EndProperty();
        }
    }

    [CustomPropertyDrawer(typeof(A_FloatValueArr))]
    public class FloatValueArrDrawer : PropertyDrawer {

        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label) {
 
            EditorGUI.BeginProperty(position, label, property);
            EditorGUI.PropertyField(position, property);


            if (property.isExpanded) {
                SerializedProperty prp_capacity = property.FindPropertyRelative("Capacity");
                if (prp_capacity == null) {
                    Debug.Log("Zero capacity");
                }
                SerializedProperty prp_count = property.FindPropertyRelative("_count");
                EditorGUILayout.IntSlider(prp_count, 3, prp_capacity.intValue, new GUIContent("Values count") );
                int length = prp_count.intValue;
                GUILayout.Space(6);
                SerializedProperty prp_items = property.FindPropertyRelative("items");
                for (int i = 0; i < length; i++) {
                    EditorGUI.indentLevel++;
                    SerializedProperty prp_value = prp_items.GetArrayElementAtIndex(i);
                    EditorBase.MaxSizeSliderValue = Mathf.Max(prp_value.floatValue, EditorBase.MaxSizeSliderValue);
                    EditorGUILayout.Slider(prp_value, 0, EditorBase.MaxSizeSliderValue, new GUIContent(string.Format("#{0}", i), string.Format("value {0}", i)));
                    EditorGUI.indentLevel--;
                }

            }
 
            EditorGUI.EndProperty();
        }
    }
}
