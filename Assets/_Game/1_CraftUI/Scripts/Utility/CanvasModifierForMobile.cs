using UnityEngine;
using UnityEngine.UI;

namespace Library.Utility.Scripts.UI
{
    [RequireComponent(typeof(CanvasScaler))]
    public class CanvasModifierForMobile : MonoBehaviour
    {
        private CanvasScaler CanvasScaler
        {
            get
            {
                if (_canvasScaler != null) return _canvasScaler;
                _canvasScaler = GetComponent<CanvasScaler>();
                return _canvasScaler;
            }
        }
        private CanvasScaler _canvasScaler;

        private void Awake()
        {
            ModifyCanvas();
        }

        private void ModifyCanvas()
        {
            float screenResolutionRatio = (float)Screen.height / Screen.width;
            float modifiedY = screenResolutionRatio * CanvasScaler.referenceResolution.x;
            CanvasScaler.referenceResolution = new Vector2(CanvasScaler.referenceResolution.x, modifiedY);
            
            if (IsTabletAspectRatio(screenResolutionRatio))
            {
                CanvasScaler.matchWidthOrHeight = 0.5f;
            }
        }

        private bool IsTabletAspectRatio(float ratio)
        {
            return ratio < 1.75f;
        }
    }
}