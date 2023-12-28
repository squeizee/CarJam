using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;


namespace ExtendedPrimitives_11.Examples {
    [ExecuteInEditMode]
    [DefaultExecutionOrder(80)]
    public class BoxGraphDemoManager : MonoBehaviour {

        [System.Serializable]
        public class AnimCurve {
            public AnimationCurve AC = new AnimationCurve();
            public float timer;
            public float Speed = 2f;

            public void Update() {
                timer += Time.deltaTime *  Speed;
                if (timer > 1f) {
                    timer = 0;
                }
            }

            public float GetValue(float t) {
                return AC.Evaluate(timer + t);
            }
        }

        public AnimCurve HeightAC = new AnimCurve();
        public AnimCurve Value0AC = new AnimCurve();
        public AnimCurve Value1AC = new AnimCurve();
        public AnimCurve Value2AC = new AnimCurve();


        public BoxChart[] Items;

        public float Spacing;
        public float Size = 0.5f;

        // Use this for initialization
        void Start() {

        }
 
 
        void Update() {
            if (Application.isPlaying) {
                HeightAC.Update();
                Value0AC.Update();
                Value1AC.Update();
                Value2AC.Update();
            }

            float xPos = -Spacing * Items.Length/2;
            for (int i = 0; i<Items.Length; i++) {
                BoxChart bc = Items[i];
                bc.transform.position = new Vector3(xPos, 0,0);
                bc.ConstantHeight.Enabled = true;
                bc.Size = Size;
                float t = i / (float)Items.Length;
                bc.ConstantHeight.Value = HeightAC.GetValue(t);
                bc.Elements[0].Value = Value0AC.GetValue(t);
                bc.Elements[1].Value = Value1AC.GetValue(t);
                bc.Elements[2].Value = Value2AC.GetValue(t);

                xPos += Spacing;
            }

 
             
        }
    }
}
