using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ExtendedPrimitives_11 {

    [ExecuteInEditMode]
    public class PlanarMappingGizmo : MonoBehaviour {

        void OnDrawGizmos() {
           // Gizmos.matrix = transform.localToWorldMatrix;
            Gizmos.color = Color.red;

            Vector3 scale = transform.localScale;
            Matrix4x4 ltw = Matrix4x4.TRS(transform.position, transform.rotation, Vector3.one);


            Vector3 c0 = ltw.MultiplyPoint3x4( Vector2.zero );
            Vector3 c1 = ltw.MultiplyPoint3x4(new Vector2(0, scale.y ));
            Vector3 c2 = ltw.MultiplyPoint3x4(new Vector2(scale.x, scale.y));
            Vector3 c3 = ltw.MultiplyPoint3x4(new Vector2(scale.x, 0));

            Gizmos.DrawLine(c0, c1);
            Gizmos.DrawLine(c1, c2);
            Gizmos.DrawLine(c2, c3);
            Gizmos.DrawLine(c3, c0);
 

        }
    }
}
