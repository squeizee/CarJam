using System;
using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    [CreateAssetMenu(fileName = "VehicleSo", menuName = "Craft/CarJam/VehicleSo")]
    public class VehicleSo : ScriptableSingleton<VehicleSo>
    {
        public float VehicleOvershoot = 0.2f;
        public float CompleteDuration = 1f;
        public float VehicleSpeed = 3f;

        public VehicleColorData[] VehicleColorData;

        public VehicleColorData GetColorData(GameElement.Colors color)
        {
            return Array.Find(VehicleColorData, data => data.Color == color);
        }
    }

    [Serializable]
    public class VehicleColorData
    {
        public GameElement.Colors Color;
        public Material Material;
    }
}