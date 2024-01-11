using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    [CreateAssetMenu(fileName = "CarJamSo", menuName = "Craft/CarJam/CarJamSo")]
    public class CarJamSo : ScriptableSingleton<CarJamSo>
    {
        public Transform GridFillItem;
        public GameObject EnvironmentPrefab;
        public float CameraCoefficient = 10;
        public float DefaultCameraDistance = 10;
        public Vector3 CameraOffset = new Vector3(0, 0, 0);
    }
    
}