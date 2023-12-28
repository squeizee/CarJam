using UnityEngine;
using UnityEngine.Events;

namespace Library.PageNavigation.Scripts
{
    public class PageItem : MonoBehaviour
    {
        public UnityEvent OnInitialized;
        public UnityEvent OnCleared;
        public UnityEvent OnOpened;
        public UnityEvent OnClosed;

        private RectTransform _rectTransform;
        public RectTransform RectTransform
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
    }
}