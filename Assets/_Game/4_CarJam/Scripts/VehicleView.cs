using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class VehicleView : MonoBehaviour
    {
        [SerializeField] private Transform _viewTransform;
        

        public void SetColor(GameElement.Colors color)
        {
            // get vehicle color dependent components
            var vehicleColorDependents = GetComponentsInChildren<VehicleColorDependent>();
            // log 
            Debug.Log($"VehicleView.SetColor() vehicleColorDependents.Length: {vehicleColorDependents.Length}");
            foreach (var vehicleColorDependent in vehicleColorDependents)
            {
                vehicleColorDependent.Initialize(color);
            }
        }
    }
}