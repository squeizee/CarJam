using System.Collections.Generic;
using UnityEngine;

namespace Library.PageNavigation.Scripts
{
    public class PageSelectManager : MonoBehaviour
    {
        [SerializeField] private RectTransform _indicator;
        [SerializeField] private RectTransform _content;
        [SerializeField] private PageManager _pageManager;
        [SerializeField] private List<PageSelectItem> _pageSelectItems;

        private void Start()
        {
            _indicator.sizeDelta = new Vector2( GetIndicatorWidth(), _indicator.sizeDelta.y);
            
            foreach (var pageSelectItem in _pageSelectItems)
            {
                pageSelectItem.Setup(OnPageSelectItemClicked);
            }
        }
        
        private void Update()
        {
            float sizeX = _content.rect.width - _indicator.rect.width;
            _indicator.anchoredPosition = new Vector2(
                -sizeX / 2f + _pageManager.GetPageNormalizedPositionX() * sizeX,
                _indicator.anchoredPosition.y);
        }

        private void SelectItem(int itemIndex)
        {
            _pageSelectItems[itemIndex].Select();
        }
        
        private void DeselectItem(int itemIndex)
        {
            _pageSelectItems[itemIndex].Deselect();
        }

        private float GetIndicatorWidth()
        {
            float itemCount = _pageSelectItems.Count;
            float itemWidth = GetPageItemWidth();
            float multiplier = PageSelectItem.SelectedWidthMultiplier;
            
            return multiplier * itemWidth * (itemCount / (itemCount - 1f + multiplier));
        }
        
        public float GetPageItemWidth()
        {
            float totalWidth = _content.rect.width;
            return totalWidth / _pageSelectItems.Count;
        }
        
        public void OnPageOpened(int pageIndex)
        {
            SelectItem(pageIndex);
        }

        public void OnPageClosed(int pageIndex)
        {
            DeselectItem(pageIndex);
        }
        
        private void OnPageSelectItemClicked(PageSelectItem item)
        {
            int index = _pageSelectItems.IndexOf(item);
            if (index != _pageManager.CurrentPageIndex)
            {
                _pageManager.OpenPage(index);
                _pageManager.ScrollToPage(index);
            }
        }
    }
}