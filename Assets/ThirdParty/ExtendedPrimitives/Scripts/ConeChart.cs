using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11 {


    [DefaultExecutionOrder(90)]
    [ExecuteInEditMode]
    public class ConeChart : VerticalChart {

        public float TopRadius = 1;
        public float BottomRadius = 2;


        public override ExtendedPrimitive CreatePrimitive() {
            FilletCone result = FilletCone.Create();
            result.transform.parent = transform;
            return result;
        }

        internal override void UpdateElements(int idx) {
            TopRadius = TopRadius < 0 ? 0 : TopRadius;
            BottomRadius = BottomRadius < 0 ? 0 : BottomRadius;

            base.UpdateElements(idx);
 
            float normalizedDist = 0;
            for (int i = 0; i<Elements.Count; i++) {
                FilletCone cone = (FilletCone)Elements[i].Primitive;
                cone.Size.BottomRadius = Mathf.Lerp(BottomRadius, TopRadius, normalizedDist);
                normalizedDist += Elements[i].NormalizedValue;
                cone.Size.TopRadius = Mathf.Lerp(BottomRadius, TopRadius, normalizedDist);
            }
        }

        public static ConeChart Create() {
            GameObject go = new GameObject("New Cone Chart");
            return go.AddComponent<ConeChart>();
        }

    }
}
