using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace ExtendedPrimitives_11.Examples {
    [DefaultExecutionOrder(90)]
    [ExecuteInEditMode]
    public class DemoRadarAnimator : MonoBehaviour {

        FilletRadar radar;
        FilletRadar Radar {
            get {
                if (radar == null) {
                    radar = GetComponent<FilletRadar>();
                }
                return radar;
            }
        }

        public float AnimVal0 = 1;
        public float AnimVal1 = 1;
        public float ValuesCount = 3;


        // Update is called once per frame
        void Update() {
            Radar.Values.Count = Mathf.FloorToInt( ValuesCount );
            Radar.Values[10] = AnimVal0;
            Radar.Values[6] = AnimVal1;
        }
    }
}
