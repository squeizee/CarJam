using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ExtendedPrimitives_11.Examples {
    public class AllPrimitivesDemo : DemoSceneOnGUI {

        public Camera MainCam;
        public ExtendedPrimitive[] Primitives;
        public Chart[] Charts;


        public bool HasHover;
        public Vector3 HitPoint;
        public string HoverObjName;
        public Ray r;
        


        private void Update() {
            HasHover = false;
            r = MainCam.ScreenPointToRay(Input.mousePosition);
            float minDistance = float.MaxValue;
            Vector3 ihit = Vector3.zero;
            float idist = 0;
            for (int i = 0; i<Primitives.Length; i++) {
 
                if (Primitives[i].Collider.Raycast(r, ref ihit, ref idist)) {
                    if (idist < minDistance) {
                        HitPoint = ihit;
                        minDistance = idist;
                        HoverObjName = Primitives[i].name;
                        HasHover = true;
                    }
                }
            }
            int idx = -1;
            for (int i = 0; i<Charts.Length; i++) {
                if (Charts[i].Raycast(r, ref ihit, ref idist, ref idx)) {
 
                    if (idist < minDistance) {
                        HitPoint = ihit;
                        minDistance = idist;
                        HoverObjName = string.Format( "{0} | element #{1}", Charts[i].name, idx);
                        HasHover = true;
                    }
                }
            }

        }

        public override void DrawOnGUI() {
            if (HasHover) {
                sceneManager.DoDrawLabel(Input.mousePosition, HoverObjName);
            }
         }


        private void OnDrawGizmos() {
             if (HasHover) {
                Gizmos.color = Color.red;
                Gizmos.DrawLine(MainCam.transform.position, HitPoint);
                Gizmos.DrawSphere(HitPoint, 0.1f);
            } else {
                Gizmos.color = Color.gray;
                Gizmos.DrawLine(MainCam.transform.position, r.GetPoint(100));
            }
        }
    }
}
