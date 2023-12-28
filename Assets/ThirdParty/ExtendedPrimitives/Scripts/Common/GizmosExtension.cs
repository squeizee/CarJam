using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ExtendedPrimitives_11.Internal {

    public static class GizmosExtension {
        public static void DrawPoint(Vector3 pos, float size, Color color) {
            Gizmos.color = color;
            float halfSize = size / 2;
            Gizmos.DrawLine(pos + Vector3.up * halfSize, pos - Vector3.up * halfSize);
            Gizmos.DrawLine(pos + Vector3.right * halfSize, pos - Vector3.right * halfSize);
            Gizmos.DrawLine(pos + Vector3.forward * halfSize, pos - Vector3.forward * halfSize);
        }

    }
}
