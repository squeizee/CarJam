using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ExtendedPrimitives_11 {


    [DefaultExecutionOrder(100)]
    public abstract class RadialPrimitive : ExtendedPrimitive {
 
        public abstract float Angle { get; set; }
 
        public abstract float Radius { get; set; }

 

        public abstract float SliceFilletRadius { get; set; }

        public void SetAngleAboutCenter(float newAngle) {
            Vector3 prevEuler = transform.localEulerAngles;
            float deltaAngle = newAngle - Angle;
            transform.localEulerAngles = new Vector3(prevEuler.x, prevEuler.y + deltaAngle / 2, prevEuler.z);
            Angle = newAngle;
        }
    }
}
