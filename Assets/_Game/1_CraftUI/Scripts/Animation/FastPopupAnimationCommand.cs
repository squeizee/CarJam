using System;
using DG.Tweening;
using Library.Utility.Scripts.ExtensionMethods;
using UnityEngine;

namespace Library.ScreenManagement.Scripts.Animation
{
    public class FastPopupAnimationCommand : BaseScreenAnimationCommand
    {
        public override void PlayOpenAnimation(BaseScreen screen, bool animateBg = true, Action onComplete = null)
        {
            screen.Content.transform.localScale = Vector3.one * 0.8f;
            screen.Content.alpha = 0f;
            screen.Background.SetAlpha(0.4f);

            var sequence = DOTween.Sequence();
            if (animateBg)
            {
                sequence.Insert(0, screen.Background.DOFade(0.8f, 0.2f));
            }
            else
            {
                screen.Background.SetAlpha(0.8f);
            }
            
            sequence.Insert(0f, screen.Content.transform.DOScale(1, 0.3f).SetEase(Ease.OutBack, 1.4f));
            sequence.Insert(0f, screen.Content.DOFade(1, 0.1f));
            sequence.OnComplete(() => { onComplete?.Invoke(); });
        }

        public override void PlayCloseAnimation(BaseScreen screen, bool animateBg = true, Action onComplete = null)
        {
            screen.Content.alpha = 0f;
            onComplete?.Invoke();
        }
    }
}