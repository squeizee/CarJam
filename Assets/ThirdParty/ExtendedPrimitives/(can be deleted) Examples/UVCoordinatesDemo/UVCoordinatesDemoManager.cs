using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ExtendedPrimitives_11.Examples {
    public class UVCoordinatesDemoManager : MonoBehaviour {

        [System.Serializable]
        public class DemoItem {
            public int RotationAxis;
            public Transform TM;

            public void Update(UVCoordinatesDemoManager parent) {
                TM.Rotate(new Vector3(0, parent.RotationSpeed * Time.deltaTime, 0));
            }
        }

        public DemoItem[] Items;
        public float RotationSpeed = 5f;

 
        void Update() {
            for (int i = 0; i<Items.Length; i++) {
                Items[i].Update(this);
            }
        }
    }
}
