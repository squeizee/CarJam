using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class VehicleColorDependent : MonoBehaviour
    {
        public Tone Tone;

        public void Initialize(GameElement.Colors color)
        {
            var vehicleColorData = VehicleSo.Instance.GetColorData(color);
            var vehicleRenderer = GetComponent<Renderer>();
            if (Tone == Tone.Dark)
            {
                vehicleRenderer.material = vehicleColorData.Material;
                var colorDark = vehicleColorData.Material.color;
                // convert to hsv and darken it with 
                Color.RGBToHSV(colorDark, out var h, out var s, out var v);
                v *= 0.3f;
                s *= 0.5f;
                colorDark = Color.HSVToRGB(h, s, v);
                vehicleRenderer.material.color = colorDark;
            }
            else if (Tone == Tone.Normal)
            {
                vehicleRenderer.material = vehicleColorData.Material;
            }
        }
    }

    public enum Tone
    {
        Normal,
        Dark,
    }
}