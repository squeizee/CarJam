using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11.Examples {
    public class SinAnimator {
        public float Speed;
        public float MinValue;
        public float MaxValue;

        float timer;
        float targetTime;
        float valueFrom;
        float valueTo;

        public float Result;


        public SinAnimator(float minValue, float maxValue, float speed) {
            Speed = speed;
            MinValue = minValue;
            MaxValue = maxValue;
            valueTo = Random.Range(MinValue, MaxValue);
            Reset();
        }

        public SinAnimator(float minValue, float maxValue, float speed, float value) {
            Speed = speed;
            MinValue = minValue;
            MaxValue = maxValue;
            valueTo = Random.Range(MinValue, MaxValue);
            Result = value;
            valueFrom = value;
            valueTo = Random.Range(MinValue, MaxValue);
            targetTime = Mathf.Abs(valueTo - valueFrom) / Speed;
        }

        void Reset() {
            float prevSign = Mathf.Sign(valueTo - valueFrom);
            valueFrom = valueTo;
            if (prevSign > 0) {
                valueTo = Random.Range(MinValue, Mathf.Lerp(Result, MinValue, 0.5f));
            } else {
                valueTo = Random.Range(MaxValue, Mathf.Lerp(Result, MaxValue, 0.5f));
            }

            targetTime = Mathf.Abs(valueTo - valueFrom) / Speed;
        }

        public void Update() {
            if (timer > targetTime) {
                timer = 0;
                Reset();
            }

            float t = timer / targetTime;
            t = Extension.LinearToSin(t);
            Result = Mathf.LerpUnclamped(valueFrom, valueTo, t);
            timer += Time.deltaTime;
        }

    }
}
