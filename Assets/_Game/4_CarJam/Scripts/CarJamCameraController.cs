using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class CarJamCameraController : MonoSingleton<CarJamCameraController>
    {
        public void UpdateCameraPosition(Rect gameArea)
        {
            Vector3 center = new Vector3(gameArea.center.x, 0, gameArea.center.y);
            var forward = Camera.main.transform.forward;
            var width = gameArea.width;
            var position = center - forward *
                (width * CarJamSo.Instance.CameraCoefficient + CarJamSo.Instance.DefaultCameraDistance);
            transform.position = position + CarJamSo.Instance.CameraOffset;
        }
    }
}