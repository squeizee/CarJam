using UnityEngine;
using System.Collections;
using UnityEditor;

namespace ExtendedPrimitives_11.Internal {
 
    public class EditorBase :  Editor {
        public static float MaxSizeSliderValue = 10;
 
        SerializedProperty prp_UpdateMode;
        SerializedProperty prp_Statistic;
        SerializedProperty prp_Topology;
        SerializedProperty prp_Size;
        SerializedProperty prp_Values;
        SerializedProperty prp_Constraints;
        SerializedProperty prp_Collider;
        SerializedProperty prp_UV0;
        SerializedProperty prp_UV2;
        SerializedProperty prp_Tangents;

        void OnEnable() {
            MaxSizeSliderValue = EditorPrefs.GetFloat("ExtendedPrimitives.MaxSizeSliderValue",10);
            prp_UpdateMode = serializedObject.FindProperty("UpdateMode");
            prp_Statistic = serializedObject.FindProperty("Statistic");
            prp_Topology = serializedObject.FindProperty("Topology");
            prp_Size = serializedObject.FindProperty("Size");
            prp_Values = serializedObject.FindProperty("Values");
            prp_Constraints = serializedObject.FindProperty("Constraints");
            prp_Collider = serializedObject.FindProperty("Collider");
            prp_UV0 = serializedObject.FindProperty("UV0");
            prp_UV2 = serializedObject.FindProperty("UV2");
            prp_Tangents = serializedObject.FindProperty("TangentsMode");
            OnEnableInherited();
 
        }

        void OnDisable() {
            EditorPrefs.SetFloat("ExtendedPrimitives.MaxSizeSliderValue",  MaxSizeSliderValue);
            //Debug.LogFormat("ExtendedPrimitive.MaxDisplayedSize setted to prefs: {0}", MaxSizeSliderValue);
        }

        public virtual void OnEnableInherited() {

        }

        public override void OnInspectorGUI() {
            serializedObject.Update();
            EditorGUI.BeginChangeCheck();

            EditorGUILayout.PropertyField(prp_UpdateMode );
            EditorGUILayout.PropertyField(prp_Statistic, true);
            EditorGUILayout.PropertyField(prp_Topology, true);
            EditorGUILayout.PropertyField(prp_Size, true);
            if (prp_Values != null) {
                EditorGUILayout.PropertyField(prp_Values, true);
            }
            EditorGUILayout.PropertyField(prp_Constraints, true);
            EditorGUILayout.PropertyField(prp_Collider, true);
            EditorGUILayout.PropertyField(prp_UV0, true);
            EditorGUILayout.PropertyField(prp_UV2, true);
            EditorGUILayout.PropertyField(prp_Tangents );

            EditorBase.MaxSizeSliderValue = EditorGUILayout.FloatField(  new GUIContent("Max slider value", "Maximal displayed Size slider value. This is editor only property"), EditorBase.MaxSizeSliderValue);
            if (GUILayout.Button("Open UV Inspector")) {
                 UVinspector.CreateUVInspectorWindow().SelectPrimitive( (ExtendedPrimitive)target );
            }

            if (GUILayout.Button(new GUIContent("Save mesh", "Save Mesh snapshot to project folder")) ) {
                string selectedFile = EditorUtility.SaveFilePanelInProject("Save mesh", "", "asset", "Please select a file to save mesh to");
                if (!string.IsNullOrEmpty(selectedFile)) {
                    ExtendedPrimitive t = target as ExtendedPrimitive;
                    Mesh meshToSave = Instantiate(t.SharedMesh) as Mesh;
                    AssetDatabase.CreateAsset(meshToSave, selectedFile);
                    AssetDatabase.SaveAssets();
                    AssetDatabase.Refresh();
                }
            }

            if (EditorGUI.EndChangeCheck()) {
                serializedObject.ApplyModifiedProperties();
             }
 
        }


        static void postCreate(GameObject go, MenuCommand menuCommand) {
            GameObjectUtility.SetParentAndAlign(go, menuCommand.context as GameObject);
            Undo.RegisterCreatedObjectUndo(go, "Create " + go.name);
            Selection.activeObject = go;
        }

        [MenuItem("GameObject/3D Object/ExtendedPrimitives/Grids/Grid", false, 30)]
        public static void CreateGrid(MenuCommand menuCommand) {
            GameObject go = EPGrid.Create().gameObject;
            postCreate(go, menuCommand);
        }

        [MenuItem("GameObject/3D Object/ExtendedPrimitives/Grids/PolarGrid", false, 30)]
        public static void CreatePolarGrid(MenuCommand menuCommand) {
            GameObject go = EPPolarGrid.Create().gameObject;
            postCreate(go, menuCommand);
        }

        [MenuItem("GameObject/3D Object/ExtendedPrimitives/Charts/Pie Chart", false, 20)]
        public static void CreatePieChart(MenuCommand menuCommand) {
            GameObject go = PieChart.Create().gameObject;
            postCreate(go, menuCommand);
        }

        [MenuItem("GameObject/3D Object/ExtendedPrimitives/Charts/Donut Chart", false, 21)]
        public static void CreateDonutChart(MenuCommand menuCommand) {
            GameObject go = DonutChart.Create().gameObject;
            postCreate(go, menuCommand);
        }

        [MenuItem("GameObject/3D Object/ExtendedPrimitives/Charts/Cone Chart", false, 22)]
        public static void CreateConeChart(MenuCommand menuCommand) {
            GameObject go = ConeChart.Create().gameObject;
            postCreate(go, menuCommand);
        }

        [MenuItem("GameObject/3D Object/ExtendedPrimitives/Charts/Box Chart", false, 23)]
        public static void CreateBoxChart(MenuCommand menuCommand) {
            GameObject go = BoxChart.Create().gameObject;
            postCreate(go, menuCommand);
        }



        [MenuItem("GameObject/3D Object/ExtendedPrimitives/Fillet Box", false, 0)]
        public static void CreateFilletBox(MenuCommand menuCommand) {
            GameObject go = FilletBox.Create().gameObject;
            postCreate(go, menuCommand);
        }

        [MenuItem("GameObject/3D Object/ExtendedPrimitives/Fillet Pie", false, 1)]
        public static void CreateFilletPie(MenuCommand menuCommand) {
            GameObject go = FilletPie.Create().gameObject;
            postCreate(go, menuCommand);
        }

        [MenuItem("GameObject/3D Object/ExtendedPrimitives/Fillet Donut", false, 2)]
        public static void CreateFilletDonut(MenuCommand menuCommand) {
            GameObject go = FilletDonut.Create().gameObject;
            postCreate(go, menuCommand);
        }

        [MenuItem("GameObject/3D Object/ExtendedPrimitives/Fillet Prism", false, 3)]
        public static void CreateFilletPrism(MenuCommand menuCommand) {
            menuCommand.userData = 10; 
            GameObject go = FilletPrism.Create().gameObject;
            postCreate(go, menuCommand);
        }

        [MenuItem("GameObject/3D Object/ExtendedPrimitives/Fillet Cone", false, 4)]
        public static void CreateFilletCone(MenuCommand menuCommand) {
            GameObject go = FilletCone.Create().gameObject;
            postCreate(go, menuCommand);
        }


        [MenuItem("GameObject/3D Object/ExtendedPrimitives/Fillet NGon", false, 5)]
        public static void CreateFilletNGon(MenuCommand menuCommand) {
            GameObject go = FilletNGon.Create().gameObject;
            postCreate(go, menuCommand);
        }

        [MenuItem("GameObject/3D Object/ExtendedPrimitives/Fillet Radar", false, 5)]
        public static void CreateFilletRadar(MenuCommand menuCommand) {
            GameObject go = FilletRadar.Create().gameObject;
            postCreate(go, menuCommand);
        }

        [MenuItem("GameObject/3D Object/ExtendedPrimitives/Fillet Graph", false, 6)]
        public static void CreateFilletGraph(MenuCommand menuCommand) {
            GameObject go = FilletGraph.Create().gameObject;
            postCreate(go, menuCommand);
        }
    }




 



}
