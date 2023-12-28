using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;


namespace ExtendedPrimitives_11 {
    
    [DefaultExecutionOrder(90)]
    [ExecuteInEditMode]
    public class DonutChart : RadialChart {

        [A_OverrideFloatParam("Override inner radius")]
        public OverrideFloatParam OverrideInnerRadius = new OverrideFloatParam(0.5f);

        public static DonutChart Create() {
            GameObject go = new GameObject("New Donut Chart");
            return go.AddComponent<DonutChart>();
        }

        public override ExtendedPrimitive CreatePrimitive() {
            RadialPrimitive result = FilletDonut.Create();
            result.transform.parent = transform;
            return result;
        }

        internal override void UpdateElements( int changed ) {
            base.UpdateElements(changed);
            OverrideInnerRadius.ClampZero();

            if (OverrideInnerRadius.Enabled) {
                for (int i = 0; i < Elements.Count; i++) {
                    ((FilletDonut)Elements[i].Primitive).Size.InnerRadius  = OverrideInnerRadius.Value;
                }
            }
        }
    }
}
