using System;
using DG.Tweening;
using UnityEngine;
using UnityEngine.UI;

namespace Library.PageNavigation.Scripts
{
    public class PageSelectItem : MonoBehaviour
    {
        public static float SelectedWidthMultiplier = 1.5f;
        
        [SerializeField] private RectTransform _selectedContent;
        [SerializeField] private RectTransform _deselectedContent;

        private RectTransform _rectTransform;
        private RectTransform RectTransform
        {
            get
            {
                if (_rectTransform != null)
                {
                    return _rectTransform;
                }

                _rectTransform = GetComponent<RectTransform>();
                return _rectTransform;
            }
        }
        
        private Action<PageSelectItem> _onClicked;
        private Sequence _selectSequence;

        public void Setup(Action<PageSelectItem> onClicked)
        {
            _onClicked = onClicked;
        }
        
        public void Select()
        {
            GetComponent<LayoutElement>().DOFlexibleSize(new Vector2(SelectedWidthMultiplier, 1f), 0.3f);

            _selectedContent.gameObject.SetActive(true);
            _deselectedContent.gameObject.SetActive(false);

            Vector3 contentInitialScale = _selectedContent.transform.localScale;
            _selectedContent.localScale = contentInitialScale* 1.025f;
            _selectSequence = DOTween.Sequence();
            _selectSequence.Append(_selectedContent.DOScale(contentInitialScale *  1.1f, 0.125f).SetEase(Ease.OutQuad));
            _selectSequence.Append(_selectedContent.DOScale(contentInitialScale * 1f, 0.175f).SetEase(Ease.OutQuad));
        }

        public void Deselect()
        {
            GetComponent<LayoutElement>().DOFlexibleSize(new Vector2(1f, 1f), 0.3f);

            _selectedContent.gameObject.SetActive(false);
            _deselectedContent.gameObject.SetActive(true);
            _selectSequence.Kill(true);
        }

        public void OnButtonClicked()
        {
            _onClicked?.Invoke(this);
        }
    }
}