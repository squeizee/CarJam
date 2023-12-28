using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ExtendedPrimitives_11.Examples {
    [ExecuteInEditMode]
    public class VerticalChartAnimator : MonoBehaviour {

        public float Value0;
        public float Value1;
        public float Value2;

        public VerticalChart chart;


        // Use this for initialization
        void Start() {

        }

        // Update is called once per frame
        void Update() {
            chart.Elements[0].Value = Value0;
            chart.Elements[1].Value = Value1;
            chart.Elements[2].Value = Value2;

        }
    }
}
