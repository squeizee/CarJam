using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace ExtendedPrimitives_11.Internal {
    public class ExtensionEditor : Editor {

        [CustomPropertyDrawer(typeof(A_OverrideFloatParam))]
        public class OverrideFloatParamAttributeDrawer : PropertyDrawer {
 
            public override void OnGUI(Rect position, SerializedProperty property, GUIContent label) {
                EditorGUI.BeginProperty(position, label, property);
                A_OverrideFloatParam a = attribute as A_OverrideFloatParam;
                label.tooltip = a.Tooltip;
                SerializedProperty valueProperty = property.FindPropertyRelative("Value");
                SerializedProperty enabledProperty = property.FindPropertyRelative("Enabled");
                Rect r = position;
                r.height = 16;
 
                EditorGUI.PropertyField(r, enabledProperty, new GUIContent(label));
                if (enabledProperty.boolValue) {
                    r.x += 16;
                    r.width -= 16;
                    r.y += 18;
                    EditorGUI.PropertyField(r, valueProperty);
                }
 

                EditorGUI.EndProperty();
            }

            public override float GetPropertyHeight(SerializedProperty property, GUIContent label) {
 
                if (property.FindPropertyRelative("Enabled").boolValue) {
                    return 32;
                } else {
                    return 16;
                }
            }

        }

        [CustomPropertyDrawer(typeof(A_ExpBool))]
        public class ExpBoolAttributeDrawer : PropertyDrawer {

            public override void OnGUI(Rect position, SerializedProperty property, GUIContent label) {
                EditorGUI.BeginProperty(position, label, property);
                A_ExpBool a = attribute as A_ExpBool;
                label.tooltip = a.Tooltip;
                SerializedProperty valueProperty = property.FindPropertyRelative("Value");
                if (a.IsButton) {
                    position.y += 4;
                    position.height = 16;
                    position.width -= 40;
                    position.x += 20;
                    if (GUI.Button(position, label)) {
                        valueProperty.boolValue = !valueProperty.boolValue;
                    }
                 } else {
                    EditorGUI.PropertyField(position, valueProperty, label);
                }
                
                EditorGUI.EndProperty();
            }

            public override float GetPropertyHeight(SerializedProperty property, GUIContent label) {
                A_ExpBool a = attribute as A_ExpBool;
                if (a.IsButton) {
                    return 24;
                } else {
                    return 16;
                }
            }
        }

        [CustomPropertyDrawer(typeof(A_ExpInt))]
        public class ExpIntAttributeDrawer : PropertyDrawer {

            public override void OnGUI(Rect position, SerializedProperty property, GUIContent label) {
                EditorGUI.BeginProperty(position, label, property);
                A_ExpInt a = attribute as A_ExpInt;
                label.tooltip = a.Tooltip;
                SerializedProperty valueProperty = property.FindPropertyRelative("Value");
                if (a.IsSlider) {
                    EditorGUI.IntSlider(position, valueProperty, a.Min, a.Max, label);
                } else {
                    EditorGUI.PropertyField(position, valueProperty);
                }
                EditorGUI.EndProperty();
            }
        }

        [CustomPropertyDrawer(typeof(A_ExpFloat))]
        public class ExpFloatAttributeDrawer : PropertyDrawer {

            public override void OnGUI(Rect position, SerializedProperty property, GUIContent label) {
                EditorGUI.BeginProperty(position, label, property);
                A_ExpFloat a = attribute as A_ExpFloat;
                label.tooltip = a.Tooltip;
                SerializedProperty valueProperty = property.FindPropertyRelative("Value");
                if (a.IsSlider) {
                    EditorGUI.Slider(position, valueProperty, a.Min, a.Max, label);
                } else {
                    EditorGUI.PropertyField(position, valueProperty, label);
                }
                EditorGUI.EndProperty();
            }
        }

        [CustomPropertyDrawer(typeof(A_ExpColor32))]
        public class ExpColor32AttributeDrawer : PropertyDrawer {

            public override void OnGUI(Rect position, SerializedProperty property, GUIContent label) {
                EditorGUI.BeginProperty(position, label, property);
                A_ExpColor32 a = attribute as A_ExpColor32;
                label.tooltip = a.Tooltip;
                SerializedProperty prp_r = property.FindPropertyRelative("r.Value");
                SerializedProperty prp_g = property.FindPropertyRelative("g.Value");
                SerializedProperty prp_b = property.FindPropertyRelative("b.Value");
                SerializedProperty prp_a = property.FindPropertyRelative("a.Value");


                Color32 c = new Color32( (byte)prp_r.intValue, (byte)prp_g.intValue, (byte)prp_b.intValue, (byte)prp_a.intValue);
                c = EditorGUI.ColorField(position, label, c  );
                prp_r.intValue = c.r;
                prp_g.intValue = c.g;
                prp_b.intValue = c.b;
                prp_a.intValue = c.a;

                EditorGUI.EndProperty();
            }
        }

        [CustomPropertyDrawer(typeof(A_ExpVector2))]
        public class ExpVector2AttributeDrawer : PropertyDrawer {

            public override void OnGUI(Rect position, SerializedProperty property, GUIContent label) {
                EditorGUI.BeginProperty(position, label, property);
                A_ExpVector2 a = attribute as A_ExpVector2;
                label.tooltip = a.Tooltip;
                SerializedProperty valueProperty = property.FindPropertyRelative("Value");
                EditorGUI.PropertyField(position, valueProperty, label);
                EditorGUI.EndProperty();
            }
        }

        [CustomPropertyDrawer(typeof(A_ExpGradient))]
        public class ExpGradientAttributeDrawer : PropertyDrawer {

            float elementHeight = 16;
            float space = 2;

            public override void OnGUI(Rect r, SerializedProperty property, GUIContent label) {
                EditorGUI.BeginProperty(r, label, property);
                float yPos = r.y;
                Rect foldoutRect = new Rect(r.x, yPos, r.width, elementHeight);
                EditorGUI.PropertyField(foldoutRect, property);
                yPos += elementHeight +  space;
                if (property.isExpanded) {
                    Rect countRect = new Rect( r.x, yPos, r.width, elementHeight);
                    yPos += elementHeight + space;
                    SerializedProperty prp_keyCount = property.FindPropertyRelative("KeysCount");
                    SerializedProperty prp_keyCountValue = property.FindPropertyRelative("KeysCount.Value");
                    EditorGUI.PropertyField(countRect, prp_keyCount);

                    for (int i = 0; i < prp_keyCountValue.intValue; i++) {
                        SerializedProperty prp_key = property.FindPropertyRelative(string.Format("c{0}", i));
                        //Debug.LogFormat("i:{0} prp_key:{1}", i, prp_key == null);
                        Rect keyRect = new Rect(r.x+20, yPos, r.width-20, elementHeight);
                        yPos += elementHeight + space;
                        EditorGUI.PropertyField(keyRect, prp_key);
                    }
                }
 

                EditorGUI.EndProperty();
            }

            public override float GetPropertyHeight(SerializedProperty property, GUIContent label) {
                float h = base.GetPropertyHeight(property, label);
                if (property.isExpanded) {
                    h += space;
                    h += elementHeight; // counter
                    SerializedProperty prp_keyCountValue = property.FindPropertyRelative("KeysCount.Value");
                    h += prp_keyCountValue.intValue * (space + elementHeight);
                }
 
                return h;
            }
        }

    }
}
