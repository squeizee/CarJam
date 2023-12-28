using System;
using DG.Tweening;
using Library.Utility.Scripts.ExtensionMethods;

namespace Library.ScreenManagement.Scripts.Animation
{
    public class FadeContentAndBgScreenAnimationCommand : BaseScreenAnimationCommand
    {
        public override void PlayOpenAnimation(BaseScreen screen, bool animateBg = true, Action onComplete = null)
        {
            screen.Content.alpha = 0f;
            if (screen.Background != null)
            {
                screen.Background.SetAlpha(0f);
            }
            
            Sequence sequence = DOTween.Sequence();
            sequence.Append(screen.Content.DOFade(1f, 0.5f));
            if (screen.Background != null)
            {
                if (animateBg)
                {
                    sequence.Join(screen.Background.DOFade(0.8f, 0.5f));   
                }
                else
                {
                    screen.Background.SetAlpha(0.8f);
                }
            }

            sequence.OnComplete(() => { onComplete?.Invoke(); });
        }

        public override void PlayCloseAnimation(BaseScreen screen, bool animateBg = true, Action onComplete = null)
        {
            screen.Content.alpha = 0f;
            if (screen.Background != null)
            {
                screen.Background.SetAlpha(0f);
            }
            
            onComplete?.Invoke();
        }
    }
}