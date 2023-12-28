using System;
using DG.Tweening;
using Library.Utility.Scripts.ExtensionMethods;
using UnityEngine;

namespace Library.ScreenManagement.Scripts.Animation
{
    public class InstantEnterFadeOutAnimationCommand : BaseScreenAnimationCommand
    {
        private readonly float _openDelay;
        private readonly float _closeDelay;

        public InstantEnterFadeOutAnimationCommand(float openDelay = 0f, float closeDelay = 0f)
        {
            _openDelay = openDelay;
            _closeDelay = closeDelay;
        }

        public override void PlayOpenAnimation(BaseScreen screen, bool animateBg = true, Action onComplete = null)
        {
            screen.Content.transform.localScale = Vector3.one;
            screen.Content.alpha = 1;

            if (_openDelay > 0f)
            {
                DOVirtual.DelayedCall(_openDelay, () => { onComplete?.Invoke(); });
            }
            else
            {
                onComplete?.Invoke();
            }
        }

        public override void PlayCloseAnimation(BaseScreen screen, bool animateBg = true, Action onComplete = null)
        {
            Sequence sequence = DOTween.Sequence();

            sequence.Insert(0f, screen.Content.transform.DOScale(0.85f, 0.2f));
            sequence.Insert(0f, screen.Content.DOFade(0.0f, 0.2f).SetEase(Ease.Linear));

            if (animateBg)
            {
                sequence.Insert(0.05f, screen.Background.DOFade(0.3f, 0.2f).SetEase(Ease.Linear));
            }
            else
            {
                sequence.AppendCallback(() => { screen.Background.SetAlpha(0f); });
            }

            sequence.OnComplete(() => { onComplete?.Invoke(); });
        }
    }
}