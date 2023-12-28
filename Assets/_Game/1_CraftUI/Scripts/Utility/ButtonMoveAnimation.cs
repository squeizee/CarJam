using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Library.Utility.Scripts.UI
{
    [RequireComponent(typeof(Button))]
    public class ButtonMoveAnimation : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
    {
        public static event Action OnClick;
        
        [SerializeField] private RectTransform _content;
        [SerializeField] private Vector2 _moveAnchorPos;
        
        private Tweener _tweener;
        private Vector3 _initialAnchorPos;

        private void OnValidate()
        {
            if (_content == null)
            {
                _content = GetComponent<RectTransform>();
            }
        }

        private void OnEnable()
        {
            _initialAnchorPos = _content.anchoredPosition;
        }

        public void OnPointerDown(PointerEventData eventData)
        {
            _tweener.Complete(true);
            _tweener = _content.DOAnchorPos(_moveAnchorPos, 0.125f).SetEase(Ease.OutBack).SetUpdate(true).OnComplete(() =>
            {
                OnClick?.Invoke();
            });
        }

        public void OnPointerUp(PointerEventData eventData)
        {
            _tweener.Complete(true);

            _content.anchoredPosition = _moveAnchorPos;
            _tweener = _content.DOAnchorPos(_initialAnchorPos, 0.3f).SetEase(Ease.OutBack).SetUpdate(true);
        }
    }
}