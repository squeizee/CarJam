using System;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Events;

namespace Library.PageNavigation.Scripts
{
    [Serializable]
    public class IntUnityEvent : UnityEvent<int>
    {
    }

    public class PageManager : MonoBehaviour
    {
        public PageItem CurrentPageItem { get; private set; }
        public int CurrentPageIndex => _pages.IndexOf(CurrentPageItem);
        public int PageCount => _pages.Count;

        public bool IsInteractable { get; private set; } = true;
        public bool IsDuringDrag { get; private set; }
        
        [SerializeField] private List<PageItem> _pages;
        [SerializeField] private RectTransform _pageContainer;
        [SerializeField] private RectTransform _parentCanvas;
        public IntUnityEvent OnPageOpened;
        public IntUnityEvent OnPageClosed;

        private Tweener _scrollPageTweener;

        private float _dragStartTime;
        private Vector2 _dragStartPos;
        private Vector2 _lastDragPos;
        private float _dragReferenceVelocityX;

        private bool _isTouchDown;
        private bool _isHorizontalDragThresholdDistanceReached;
        private bool _isVerticalDragThresholdDistanceReached;

        private readonly float _scrollTimeLimit = 0.2f;
        private readonly float _scrollSmoothTime = 0.01f;

        public void Initialize()
        {
            for (int i = 0; i < _pages.Count; i++)
            {
                _pages[i].OnInitialized?.Invoke();
            }
        }

        public void Clear()
        {
            for (int i = 0; i < _pages.Count; i++)
            {
                _pages[i].OnCleared?.Invoke();
            }
        }

        private void Update()
        {
            bool isPlayingInEditor = Application.platform is
                RuntimePlatform.WindowsEditor or
                RuntimePlatform.LinuxEditor or
                RuntimePlatform.OSXEditor;

            if (isPlayingInEditor)
            {
                if (Input.GetMouseButtonDown(0) && !_isTouchDown)
                {
                    _isTouchDown = true;
                    Vector3 mousePosition = Input.mousePosition;
                    HandleDragBegin(mousePosition);
                }
                else if (Input.GetMouseButton(0) && _isTouchDown)
                {
                    Vector3 mousePosition = Input.mousePosition;
                    HandleDrag(mousePosition);
                }
                else if (Input.GetMouseButtonUp(0) && _isTouchDown)
                {
                    _isTouchDown = false;
                    Vector3 mousePosition = Input.mousePosition;
                    HandleDragEnd(mousePosition);
                }
            }
            else
            {
                if (Input.touchCount >= 1)
                {
                    Touch touch = Input.GetTouch(0);

                    if (touch.phase == TouchPhase.Began && !_isTouchDown)
                    {
                        _isTouchDown = true;
                        Vector3 touchPosition = Input.mousePosition;
                        HandleDragBegin(touchPosition);
                    }
                    else if (touch.phase is TouchPhase.Moved or TouchPhase.Stationary && _isTouchDown)
                    {
                        Vector3 touchPosition = Input.mousePosition;
                        HandleDrag(touchPosition);
                    }
                    else if (touch.phase == TouchPhase.Ended && _isTouchDown)
                    {
                        _isTouchDown = false;
                        Vector3 touchPosition = Input.mousePosition;
                        HandleDragEnd(touchPosition);
                    }
                }
            }
        }

        public void EnableInteraction()
        {
            IsInteractable = true;
        }

        public void DisableInteraction()
        {
            IsInteractable = false;
        }

        public float GetPageNormalizedPositionX()
        {
            float leftPosX = _pages[0].RectTransform.localPosition.x;
            float rightPosX = _pages[PageCount - 1].RectTransform.localPosition.x;
            float containerPosX = _pageContainer.localPosition.x;
            return (-containerPosX - leftPosX) / (rightPosX - leftPosX);
        }

        public void OpenPage(int pageIndex)
        {
            if (CurrentPageItem != null)
            {
                int previousPageIndex = _pages.IndexOf(CurrentPageItem);
                CurrentPageItem.OnClosed?.Invoke();

                OnPageClosed?.Invoke(previousPageIndex);
            }

            CurrentPageItem = _pages[pageIndex];
            CurrentPageItem.OnOpened?.Invoke();

            OnPageOpened?.Invoke(pageIndex);
        }

        public void ScrollToPage(int pageIndex)
        {
            PageItem pageItem = _pages[pageIndex];
            float targetPositionX = -pageItem.RectTransform.localPosition.x;
            _scrollPageTweener.Kill();
            _scrollPageTweener = _pageContainer.DOLocalMoveX(targetPositionX, 0.8f)
                .SetEase(Ease.OutQuint);
        }

        private void HandleDragBegin(Vector3 touchPosition)
        {
            _dragStartPos = touchPosition;
            _dragStartTime = Time.realtimeSinceStartup;
        }

        private void HandleDrag(Vector3 touchPosition)
        {
            if (!IsDragPossible(touchPosition)) return;

            if (!IsDuringDrag)
            {
                IsDuringDrag = true;
            }

            _scrollPageTweener.Kill();

            float scrollMultiplier = GetAppropriateScrollMultiplier();
            float deltaX = touchPosition.x - _lastDragPos.x;
            float dragDistanceAsRatio = deltaX / Screen.width;
            float dragDeltaX = _parentCanvas.rect.width * dragDistanceAsRatio * scrollMultiplier;
            float anchorPosX = Mathf.SmoothDamp(_pageContainer.anchoredPosition.x,
                _pageContainer.anchoredPosition.x + dragDeltaX, ref _dragReferenceVelocityX, _scrollSmoothTime);

            _pageContainer.anchoredPosition = new Vector2(anchorPosX, _pageContainer.anchoredPosition.y);
            _lastDragPos = touchPosition;
        }

        private void HandleDragEnd(Vector3 touchPosition)
        {
            float deltaX = touchPosition.x - _dragStartPos.x;
            float dragDistanceAsRatio = deltaX / Screen.width;
            float deltaDragTime = Time.realtimeSinceStartup - _dragStartTime;

            if (IsDragPossible(touchPosition))
            {
                int currentPageIndex = _pages.IndexOf(CurrentPageItem);
                int destPageIndex = currentPageIndex;

                if (deltaDragTime < _scrollTimeLimit)
                {
                    if (dragDistanceAsRatio > 0.1)
                    {
                        destPageIndex = currentPageIndex - 1;
                    }
                    else if (dragDistanceAsRatio < -0.1)
                    {
                        destPageIndex = currentPageIndex + 1;
                    }
                }
                else
                {
                    if (dragDistanceAsRatio > 0.5)
                    {
                        destPageIndex = currentPageIndex - 1;
                    }
                    else if (dragDistanceAsRatio < -0.5)
                    {
                        destPageIndex = currentPageIndex + 1;
                    }
                }

                destPageIndex = Mathf.Clamp(destPageIndex, 0, _pages.Count - 1);

                if (destPageIndex != currentPageIndex)
                {
                    OpenPage(destPageIndex);
                }

                ScrollToPage(destPageIndex);
            }

            _isHorizontalDragThresholdDistanceReached = false;
            _isVerticalDragThresholdDistanceReached = false;
            IsDuringDrag = false;
        }

        #region Util Methods

        private float GetAppropriateScrollMultiplier()
        {
            if (Mathf.Abs(_pageContainer.anchoredPosition.x) > _parentCanvas.rect.width * 2)
            {
                return 0.4f;
            }

            return 1;
        }

        private bool IsDragPossible(Vector3 touchPos)
        {
            bool isHorizontalDragThresholdDistanceReached = IsHorizontalDragThresholdDistanceReached(touchPos);
            bool isVerticalDragThresholdDistanceReached = IsVerticalDragThresholdDistanceReached(touchPos);
            bool isDragStartInValidArea = IsDragStartInValidArea();

            return IsInteractable &&
                   isHorizontalDragThresholdDistanceReached &&
                   !isVerticalDragThresholdDistanceReached &&
                   isDragStartInValidArea;
        }

        private bool IsDragStartInValidArea()
        {
            if (_dragStartPos.y < (Screen.height / 6f))
            {
                return false;
            }

            if (_dragStartPos.y > (Screen.height - (Screen.height / 10f)))
            {
                return false;
            }

            return true;
        }

        private bool IsHorizontalDragThresholdDistanceReached(Vector2 touchPosition)
        {
            if (_isHorizontalDragThresholdDistanceReached)
            {
                return true;
            }

            var deltaX = touchPosition.x - _dragStartPos.x;
            var touchDistanceAsRatio = deltaX / Screen.width;
            if (Mathf.Abs(touchDistanceAsRatio) > 0.05f)
            {
                _lastDragPos = touchPosition;
                _isHorizontalDragThresholdDistanceReached = true;

                return true;
            }

            return false;
        }

        private bool IsVerticalDragThresholdDistanceReached(Vector2 touchPosition)
        {
            if (_isVerticalDragThresholdDistanceReached)
            {
                return true;
            }

            if (!_isHorizontalDragThresholdDistanceReached)
            {
                var deltaY = touchPosition.y - _dragStartPos.y;
                var touchDistanceAsRatio = deltaY / Screen.width;
                if (Mathf.Abs(touchDistanceAsRatio) > 0.05f)
                {
                    _isVerticalDragThresholdDistanceReached = true;

                    return true;
                }
            }

            return false;
        }

        #endregion
    }
}