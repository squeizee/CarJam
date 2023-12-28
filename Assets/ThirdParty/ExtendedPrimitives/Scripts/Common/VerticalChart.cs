using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11 {

    public abstract class VerticalChart : Chart {

        [A_OverrideFloatParam("Constant height")]
        public OverrideFloatParam ConstantHeight = new OverrideFloatParam(3f); 

        internal override void UpdateElements(int _changed) {
            base.UpdateElements(_changed);

            ConstantHeight.ClampZero(); 

            float heightMultiplier = 1;
            float summValues = GetSummValues();
 
            if (ConstantHeight.Enabled) {
                heightMultiplier = ConstantHeight / summValues;
            }

            float yPos = 0;

            for (int i = 0; i<Elements.Count; i++) {
                Element e = Elements[i];
                ExtendedPrimitive ep = Elements[i].Primitive;
                e.Value = e.Value < 0 ? 0 : e.Value;
                e.NormalizedValue = e.Value / summValues;
                ep.Height = e.Value * heightMultiplier;
                ep.PivotOffset = 0.5f;
                ep.transform.localPosition = new Vector3(0,yPos,0);
                yPos += ep.Height;
            }    
        }


    }
}
