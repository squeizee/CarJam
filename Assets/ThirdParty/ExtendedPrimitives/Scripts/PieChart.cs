using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;


namespace ExtendedPrimitives_11 {
    
    [DefaultExecutionOrder(90)]
    [ExecuteInEditMode]
    public class PieChart : RadialChart {

        [A_ExpBool("Sharp pie center", false)]
        public ExpBool SharpCenter;

        public static PieChart Create() {
            GameObject go = new GameObject("New Pie Chart");
            return go.AddComponent<PieChart>();
        }

        public override ExtendedPrimitive CreatePrimitive() {
            RadialPrimitive result = FilletPie.Create();
            result.transform.parent = transform;
            return result;
        }

        internal override void UpdateElements( int changedIdx) {
            base.UpdateElements(changedIdx);
            if (SharpCenter.isChanged) {
                for (int i = 0; i < Elements.Count; i++) {
                    ((FilletPie)Elements[i].Primitive).Size.SharpCenter = SharpCenter;
                }
            }
        }
    }
}
