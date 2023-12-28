using UnityEngine;
using System.Collections;
using UnityEditor;

namespace ExtendedPrimitives_11.Internal {

    [CanEditMultipleObjects]
    [CustomEditor(typeof(FilletPrism))]
    public class FilletPrismEditor : EditorBase {
  

        void OnSceneGUI() {
            if (Tools.current != Tool.Rect) {
                return;
            }

            FilletPrism t = target as FilletPrism;
            Tools.hidden = false;
            bool isDrag = Event.current.type == EventType.MouseDrag;

            EditorGUI.BeginChangeCheck();

            Vector3 np = Handles.FreeMoveHandle(t.Awp, Quaternion.identity, HandleUtility.GetHandleSize(t.Awp) * 0.05f, Vector3.zero, Handles.CircleHandleCap);
            Ray r = HandleUtility.GUIPointToWorldRay(HandleUtility.WorldToGUIPoint(np));
            if (isDrag && t.RayToCornerPos(r, ref np) && ((np - t.Awp).magnitude > 0.01f)) {
                t.Awp = np;
                t.Apply();
            }

            np = Handles.FreeMoveHandle(t.Bwp, Quaternion.identity, HandleUtility.GetHandleSize(t.Bwp) * 0.05f, Vector3.zero, Handles.CircleHandleCap);
            r = HandleUtility.GUIPointToWorldRay(HandleUtility.WorldToGUIPoint(np));
            if (isDrag && t.RayToCornerPos(r, ref np) && ((np - t.Bwp).magnitude > 0.01f)) {
                t.Bwp = np;
                t.Apply();
            }

            np = Handles.FreeMoveHandle(t.Cwp, Quaternion.identity, HandleUtility.GetHandleSize(t.Cwp) * 0.05f, Vector3.zero, Handles.CircleHandleCap);
            r = HandleUtility.GUIPointToWorldRay(HandleUtility.WorldToGUIPoint(np));
            if (isDrag && t.RayToCornerPos(r, ref np) && ((np - t.Cwp).magnitude > 0.01f)) {
                t.Cwp = np;
                t.Apply();
            }

            if (EditorGUI.EndChangeCheck()) {
                Undo.RecordObject(target, "Prism corners" );
            }

            Handles.color = Color.yellow;

            Handles.DrawLine(t.Awp, t.Bwp);
            Handles.DrawLine(t.Bwp, t.Cwp);
            Handles.DrawLine(t.Cwp, t.Awp);

            Handles.BeginGUI();

            Vector2 spA = HandleUtility.WorldToGUIPoint(t.Awp);

            GUI.Label(new Rect(spA.x - 11, spA.y - 10, 22, 24), "A", "sv_label_4");
            Vector2 spB = HandleUtility.WorldToGUIPoint(t.Bwp);
            GUI.Label(new Rect(spB.x - 11, spB.y - 10, 22, 24), "B", "sv_label_4");
            Vector2 spC = HandleUtility.WorldToGUIPoint(t.Cwp);
            GUI.Label(new Rect(spC.x - 11, spC.y - 10, 22, 24), "C", "sv_label_4");
 


            Handles.EndGUI();
 

         

        }


    }



}
 
