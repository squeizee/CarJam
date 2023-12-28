using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11 {


    [DefaultExecutionOrder(90)]
    [ExecuteInEditMode]
    public class BoxChart : VerticalChart {

        public float Size = 0.5f;

        public override ExtendedPrimitive CreatePrimitive() {
            FilletBox result = FilletBox.Create();
            result.transform.parent = transform;
            return result;
        }
 
        public static BoxChart Create() {
            GameObject go = new GameObject("New Box Chart");
            return go.AddComponent<BoxChart>();
        }

        internal override void UpdateElements(int _changed) {
            base.UpdateElements(_changed);
            for (int i = 0; i<Elements.Count; i++) {
                FilletBox box = (FilletBox)Elements[i].Primitive;
                box.Size.Width = Size;
                box.Size.Length = Size;

            }
        }
    }
}
