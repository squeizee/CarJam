using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace ExtendedPrimitives_11.Examples {
    [ExecuteInEditMode]
    public class GraphDemoAnimator : MonoBehaviour {

        public FilletGraph graph;

        public float AnimValue0 = 1f;
        public float AnimValue1 = 0.4f;
        public float AnimValue2 = 1;
        public float AnimValue3 = 0.4f;
        public float AnimValue4 = 1;
        public float AnimValue5 = 0.4f;

        public float ElementsCount = 4;

        void Start() {

        }

        // Update is called once per frame
        void Update() {
            graph.Values.Count = Mathf.FloorToInt(ElementsCount);
            graph.Values[0] = AnimValue0;
            graph.Values[1] = AnimValue1;
            graph.Values[2] = AnimValue2;
            graph.Values[3] = AnimValue3;

        }
    }
}
