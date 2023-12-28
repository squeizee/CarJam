using DG.Tweening;
using TMPro;
using UnityEngine;

namespace Library.ScreenManagement.Scripts.Animation.UIAnimation
{
    public static class TweenExtensions
    {
        // a function for canvas group to fadein and rise up
        public static Tween MoveToPosAndRiseUp(this CanvasGroup canvasGroup, Vector2 endPosition, float duration)
        {
            RectTransform rectTransform = canvasGroup.GetComponent<RectTransform>();
            Vector2 startPosition = rectTransform.anchoredPosition;
            float startAlpha = canvasGroup.alpha;

            return DOVirtual.Float(0, 1, duration,
                (value =>
                {
                    rectTransform.anchoredPosition = Vector2.Lerp(startPosition, endPosition, value);
                    canvasGroup.alpha = Mathf.Lerp(startAlpha, 1, value);
                }));
        }
        
        public static Tween MoveToPosAndRiseUp(this TMP_Text text, Vector2 endPosition, float duration)
        {
            RectTransform rectTransform = text.GetComponent<RectTransform>();
            Vector2 startPosition = rectTransform.anchoredPosition;
            float startAlpha = text.alpha;

            return DOVirtual.Float(0, 1, duration,
                (value =>
                {
                    rectTransform.anchoredPosition = Vector2.Lerp(startPosition, endPosition, value);
                    text.alpha = Mathf.Lerp(startAlpha, 1, value);
                }));
        }
    }
}