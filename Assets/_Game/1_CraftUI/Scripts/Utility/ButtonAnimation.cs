using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Library.Utility.Scripts.UI
{
    public class ButtonAnimation : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IPointerClickHandler
    {
        public static event Action OnClicked;
        
        private Button _button;
        public Button Button
        {
            get
            {
                if (_button != null)
                {
                    return _button;
                }

                _button = GetComponent<Button>();
                return _button;
            }
        }
        
        [SerializeField] private Transform _content;
        [SerializeField] private float _pressScaleMultiplier = 0.91f;

        private Tweener _tweener;
        private Vector3 _initialScale;

        private void OnValidate()
        {
            if (_content == null)
            {
                _content = transform;
            }
        }

        private void OnEnable()
        {
            _initialScale = _content.localScale;
        }

        private float GetPressScaleMultiplier()
        {
            if (Button != null && !Button.interactable)
            {
                return 0.975f;
            }

            return _pressScaleMultiplier;
        }

        public void OnPointerDown(PointerEventData eventData)
        {
            _tweener.Complete(true);
            _tweener = _content.DOScale(_initialScale * GetPressScaleMultiplier(), 0.125f).SetEase(Ease.OutBack);
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            _tweener.Complete(true);

            _content.localScale = _initialScale * GetPressScaleMultiplier();
            _tweener = _content.DOScale(_initialScale, 0.3f).SetEase(Ease.OutBack, 3f);
        }

        public void OnPointerClick(PointerEventData eventData)
        {
            OnClicked?.Invoke();
        }
    }
}