using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

namespace Library.ScreenManagement.Scripts.Animation.UIAnimation
{
    public class RiseAndFadeInImage : MonoBehaviour
    {
        private bool _isInitialized;
        private Vector2 _initialPosition;
        public float RiseAmount;
        private RectTransform _rectTransform;
        public Image Image;

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
            Image.color = new Color(1, 1, 1, 0);
        }

        public Tween PlayAnimation(float duration)
        {
            RectTransform rectTransform = Image.GetComponent<RectTransform>();
            Vector2 startPosition = rectTransform.anchoredPosition;
            float startAlpha = Image.color.a;

            return DOVirtual.Float(0, 1, duration,
                (value =>
                {
                    rectTransform.anchoredPosition = Vector2.Lerp(startPosition, _initialPosition, value);
                    var alpha = Mathf.Lerp(startAlpha, 1, value);
                    Image.color = new Color(1, 1, 1, alpha);
                }));
        }
    }
}