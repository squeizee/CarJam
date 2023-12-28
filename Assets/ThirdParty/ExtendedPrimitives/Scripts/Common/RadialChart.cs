using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;


namespace ExtendedPrimitives_11{

    [DefaultExecutionOrder(90)]
    public abstract class RadialChart : Chart {

        public bool SliceEnabled;
        public float SliceAngle = 270;
        public float SliceRotation = 0;

 
 

        [A_OverrideFloatParam("Override height")]
        public OverrideFloatParam OverrideHeight = new OverrideFloatParam( 0.3f );

        [A_OverrideFloatParam("Override radius")]
        public OverrideFloatParam OverrideRadius = new OverrideFloatParam( 1f);

        [A_OverrideFloatParam("Override slice fillet radius")]
        public OverrideFloatParam OverrideSliceFilletRadius = new OverrideFloatParam( 0.03f);    

        void UpdateElements() {
            UpdateElements(-1 );
        }

        internal override void UpdateElements ( int _changed ) {
            base.UpdateElements(_changed);
 
            int changedIdx = -1;
            if (SliceEnabled) {
                changedIdx = 0;
            }
            if (_changed >= 0) {
                changedIdx = _changed;
            } else {
                //detect changed element
                for (int i = 0; i < Elements.Count; i++) {
                    Elements[i].Value = Mathf.Abs(Elements[i].Value);
                    if (Elements[i].Value != Elements[i].pValue) {
                        changedIdx = i;
                        Elements[i].pValue = Elements[i].Value;
                        break;
                    }
                }
            }

            if (changedIdx >= 0) {
                float angleMult = 0;
                RadialPrimitive rp = (RadialPrimitive)Elements[changedIdx].Primitive;
                if ( SliceEnabled ) {
                    changedIdx = 0;
                    angleMult =  SliceAngle / GetSummValues();
                    rp.Angle = Elements[changedIdx].Value * angleMult;
                    rp.transform.localEulerAngles = new Vector3(0,   SliceRotation, 0);
                } else {
                    angleMult = 360f / GetSummValues();
                    rp.SetAngleAboutCenter(Elements[changedIdx].Value * angleMult);
                }

                for (int i = 1; i < Elements.Count; i++) {
                    int idx = (i + changedIdx) % Elements.Count;
                    int prevIdx = (i + changedIdx - 1) % Elements.Count;
                    RadialPrimitive p = (RadialPrimitive)Elements[idx].Primitive;
                    RadialPrimitive prevp = (RadialPrimitive)Elements[prevIdx].Primitive;
                    p.Angle = Elements[idx].Value * angleMult;
                    float prevEndAngle = prevp.transform.localEulerAngles.y - prevp.Angle;
                    p.transform.localEulerAngles = new Vector3(0, prevEndAngle, 0);

                }
            }

            OverrideHeight.ClampZero();
            OverrideRadius.ClampZero();
            OverrideSliceFilletRadius.ClampZero();

            for (int i = 0; i < Elements.Count; i++) {
                RadialPrimitive p = (RadialPrimitive)Elements[i].Primitive;
                Elements[i].pValue = Elements[i].Value;
                float midAngle = (360 - Elements[i].Primitive.transform.localEulerAngles.y + p.Angle / 2) * Mathf.Deg2Rad;
                Vector3 radialOffsetPos = new Vector3(Mathf.Cos(midAngle), 0, Mathf.Sin(midAngle)) * Elements[i].Offset;
                Elements[i].Primitive.transform.localPosition = radialOffsetPos;
                if (OverrideHeight.Enabled) {
                    p.Height = OverrideHeight.Value;
                }

                if (OverrideRadius.Enabled) {
                    p.Radius = OverrideRadius.Value;
                }

                if (OverrideSliceFilletRadius.Enabled) {
                    p.SliceFilletRadius = OverrideSliceFilletRadius.Value;
                }
               
 
            }
 
        }
	}
}
