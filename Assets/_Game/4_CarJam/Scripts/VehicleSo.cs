using System;
using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    [CreateAssetMenu(fileName = "VehicleSo", menuName = "Craft/CarJam/VehicleSo")]
    public class VehicleSo : ScriptableSingleton<VehicleSo>
    {
        public VehicleViewTransformData UpDirectionViewTransformData;
        public VehicleViewTransformData DownDirectionViewTransformData;
        public VehicleViewTransformData LeftDirectionViewTransformData;
        public VehicleViewTransformData RightDirectionViewTransformData;
        public float VehicleOvershoot = 0.2f;
        public float CompleteDuration = 1f;
    }

    [Serializable]
    public class VehicleViewTransformData
    {
        public Vector3 Position;
        public Vector3 LocalScale;
    }
}