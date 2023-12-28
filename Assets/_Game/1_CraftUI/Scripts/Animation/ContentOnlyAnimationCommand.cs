using System;
using DG.Tweening;
using Library.Utility.Scripts.ExtensionMethods;
using UnityEngine;

namespace Library.ScreenManagement.Scripts.Animation
{
    public class ContentOnlyAnimationCommand : BaseScreenAnimationCommand
    {
        public override void PlayOpenAnimation(BaseScreen screen, bool animateBg = true, Action onComplete = null)
        {
            screen.Content.transform.localScale = 0.8f * Vector3.one;
            screen.Content.alpha = 0f;

            Sequence sequence = DOTween.Sequence();
            sequence.Append(screen.Content.transform.DOScale(1f, 0.4f).SetEase(Ease.OutBack, 2.5f));
            sequence.Join(screen.Content.DOFade(1f, 0.15f).SetEase(Ease.Linear));

            sequence.OnComplete(() =>
            {
                onComplete?.Invoke();
            });
        }

        public override void PlayCloseAnimation(BaseScreen screen, bool animateBg = true, Action onComplete = null)
        {
            Sequence sequence = DOTween.Sequence();
            sequence.Insert(0f, screen.Content.transform.DOScale(0.85f, 0.25f).SetEase(Ease.InBack, 2.5f));
            sequence.Insert(0.05f, screen.Content.DOFade(0f, 0.2f).SetEase(Ease.Linear));

            sequence.OnComplete(() =>
            {
                onComplete?.Invoke();
            });
        }
    }
}