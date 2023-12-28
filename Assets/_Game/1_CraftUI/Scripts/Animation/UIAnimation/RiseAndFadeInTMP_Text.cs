using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;

namespace Library.ScreenManagement.Scripts.Animation.UIAnimation
{
    public class RiseAndFadeInTMP_Text : MonoBehaviour
    {
        private bool _isInitialized;
        private Vector2 _initialPosition;
        public float RiseAmount;
        private RectTransform _rectTransform;
        public TMP_Text TMPText;

        public void Initialize()
        {
            if (_isInitialized == false)
            {
                _rectTransform = GetComponent<RectTransform>();
                _initialPosition = _rectTransform.anchoredPosition;
                _isInitialized = true;
            }

            Prepare();
        }

        private void Prepare()
        {
            _rectTransform.anchoredPosition = _initialPosition - Vector2.up * RiseAmount;
            TMPText.alpha = 0;
        }

        public Tween PlayAnimation(float duration)
        {
            RectTransform rectTransform = TMPText.GetComponent<RectTransform>();
            Vector2 startPosition = rectTransform.anchoredPosition;
            float startAlpha = TMPText.alpha;

            return DOVirtual.Float(0, 1, duration,
                (value =>
                {
                    rectTransform.anchoredPosition = Vector2.Lerp(startPosition, _initialPosition, value);
                    TMPText.alpha = Mathf.Lerp(startAlpha, 1, value);
                }));
        }

        public void SetText(string text)
        {
            TMPText.text = text;
        }
    }
}