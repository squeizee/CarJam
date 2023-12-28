using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11;


namespace ExtendedPrimitives_11.Examples {

    [ExecuteInEditMode]
    [DefaultExecutionOrder(90)]
    public class NGonSidesAnimProperty : MonoBehaviour {

        public FilletNGon ngon;
        public float Sides;


        // Use this for initialization
        void Start() {

        }

        // Update is called once per frame
        void Update() {
            ngon.Topology.Sides = Mathf.FloorToInt( Sides ) ;
        }
    }
}
