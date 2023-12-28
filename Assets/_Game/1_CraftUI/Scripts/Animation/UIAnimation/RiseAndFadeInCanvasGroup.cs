using DG.Tweening;
using UnityEngine;

namespace Library.ScreenManagement.Scripts.Animation.UIAnimation
{
    public class RiseAndFadeInCanvasGroup : MonoBehaviour
    {
        private bool _isInitialized;
        private Vector2 _initialPosition;
        public float RiseAmount;
        public RectTransform RectTransform;
        public CanvasGroup CanvasGroup;

        public void Initialize()
        {
            if (_isInitialized == false)
            {
                RectTransform = GetComponent<RectTransform>();
                _initialPosition = RectTransform.anchoredPosition;
                _isInitialized = true;
            }

            Prepare();
        }

        private void Prepare()
        {
            RectTransform.anchoredPosition = _initialPosition - Vector2.up * RiseAmount;
            CanvasGroup.alpha = 0;
        }

        public Tween PlayAnimation(float duration)
        {
            RectTransform rectTransform = CanvasGroup.GetComponent<RectTransform>();
            Vector2 startPosition = rectTransform.anchoredPosition;
            float startAlpha = CanvasGroup.alpha;

            return DOVirtual.Float(0, 1, duration,
                (value =>
                {
                    rectTransform.anchoredPosition = Vector2.Lerp(startPosition, _initialPosition, value);
                    CanvasGroup.alpha = Mathf.Lerp(startAlpha, 1, value);
                }));
        }
    }
}