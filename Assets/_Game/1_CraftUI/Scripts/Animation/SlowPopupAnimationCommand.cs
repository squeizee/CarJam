using System;
using DG.Tweening;
using Library.Utility.Scripts.ExtensionMethods;
using UnityEngine;

namespace Library.ScreenManagement.Scripts.Animation
{
    public class SlowPopupAnimationCommand : BaseScreenAnimationCommand
    {
        public override void PlayOpenAnimation(BaseScreen screen, bool animateBg = true, Action onComplete = null)
        {
            screen.Content.alpha = 0f;
            screen.Content.transform.localScale = Vector3.one * 0.4f;
            screen.Background.SetAlpha(0);

            var sequence = DOTween.Sequence();
            sequence.Insert(0, screen.Background.DOFade(0.6f, 0.4f));
            sequence.Insert(0.35f, screen.Content.transform.DOScale(1, 0.8f).SetEase(Ease.OutBack, 1.1f));
            sequence.InsertCallback(0.35f, () => screen.Content.alpha = 0.6f);
            sequence.Insert(0.35f, screen.Content.DOFade(1, 0.1f));
            sequence.OnComplete(() => { onComplete?.Invoke(); });
        }

        public override void PlayCloseAnimation(BaseScreen screen, bool animateBg = true, Action onComplete = null)
        {
            screen.Content.alpha = 0f;
            onComplete?.Invoke();
        }
    }
}