using System;
using DG.Tweening;
using UnityEngine;

namespace _Game._11_SmallRace.UI
{
    public class RacePopUpFaceAnimation : MonoBehaviour
    {
        [SerializeField] private CanvasGroup _canvasGroup;
        [SerializeField] private RectTransform _rectTransform;
        [SerializeField] private bool _isAutoStart = true;
        Sequence _sequence;

        public void OnEnable()
        {
            if (_isAutoStart)
            {
                Show();
            }
        }

        public void OnDisable()
        {
            _sequence?.Kill();
        }

        public void Show()
        {
            _canvasGroup.alpha = 0;
            _rectTransform.localScale = Vector3.one * 0.9f;

            _sequence?.Kill();
            _sequence = DOTween.Sequence();
            _sequence.Append(_rectTransform.DOScale(Vector3.one, 0.5f).SetEase(Ease.OutBack));
            _sequence.Join(_canvasGroup.DOFade(1, 0.3f));
        }
    }
}