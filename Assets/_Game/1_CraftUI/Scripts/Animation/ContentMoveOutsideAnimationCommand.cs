using System;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace Library.ScreenManagement.Scripts.Animation
{
    public class ContentMoveOutsideAnimationCommand : BaseScreenAnimationCommand
    {
        private List<RectTransform> _children = new();
        private List<Vector2> _initialChildrenAnchorPos = new ();

        public ContentMoveOutsideAnimationCommand() { }
        
        public ContentMoveOutsideAnimationCommand(List<RectTransform> children)
        {
            _children = children;
            for (int i = 0; i < _children.Count; i++)
            {
                _initialChildrenAnchorPos.Add(_children[i].anchoredPosition);
            }
        }
        
        public override void PlayOpenAnimation(BaseScreen screen, bool animateBg = true, Action onComplete = null)
        {
            if (_children.Count == 0)
            {
                _children = GetContentChildren(screen);
                for (int i = 0; i < _children.Count; i++)
                {
                    _initialChildrenAnchorPos.Add(_children[i].anchoredPosition);
                }
            }
            
            Sequence sequence = DOTween.Sequence();
            
            for (int i = 0; i < _children.Count; i++)
            {
                _children[i].anchoredPosition = _initialChildrenAnchorPos[i];
                Vector2 direction = (_children[i].anchoredPosition - Vector2.zero).normalized;
                sequence.Join(_children[i].DOAnchorPos(direction * 1080f, 0.5f).From().SetEase(Ease.OutBack));
            }
            
            sequence.OnComplete(() =>
            {
                onComplete?.Invoke();
            });
        }

        public override void PlayCloseAnimation(BaseScreen screen, bool animateBg = true, Action onComplete = null)
        {
            if (_children.Count == 0)
            {
                _children = GetContentChildren(screen);
                for (int i = 0; i < _children.Count; i++)
                {
                    _initialChildrenAnchorPos.Add(_children[i].anchoredPosition);
                }
            }

            Sequence sequence = DOTween.Sequence();
            
            for (int i = 0; i < _children.Count; i++)
            {
                Vector2 direction = (_children[i].anchoredPosition - Vector2.zero).normalized;
                sequence.Join(_children[i].DOAnchorPos(direction * 1080f, 0.5f).SetEase(Ease.InBack));
            }
            
            sequence.OnComplete(() =>
            {
                onComplete?.Invoke();

                for (int i = 0; i < _children.Count; i++)
                {
                    _children[i].anchoredPosition = _initialChildrenAnchorPos[i];
                }
            });
        }

        private List<RectTransform> GetContentChildren(BaseScreen screen)
        {
            List<RectTransform> contentChildren = new List<RectTransform>();

            for (int i = 0; i < screen.Content.transform.childCount; i++)
            {
                contentChildren.Add((RectTransform)screen.Content.transform.GetChild(i));
            }
            
            return contentChildren;
        }
    }
}