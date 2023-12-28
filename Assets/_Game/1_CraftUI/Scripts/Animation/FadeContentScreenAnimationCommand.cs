using System;
using DG.Tweening;

namespace Library.ScreenManagement.Scripts.Animation
{
    public class FadeContentScreenAnimationCommand : BaseScreenAnimationCommand
    {
        public override void PlayOpenAnimation(BaseScreen screen, bool animateBg = true, Action onComplete = null)
        {
            screen.Content.alpha = 0f;

            Sequence sequence = DOTween.Sequence();
            sequence.Append(screen.Content.DOFade(1f, 0.5f));

            sequence.OnComplete(() => { onComplete?.Invoke(); });
        }

        public override void PlayCloseAnimation(BaseScreen screen, bool animateBg = true, Action onComplete = null)
        {
            screen.Content.alpha = 0f;
            onComplete?.Invoke();
        }
    }
}