using System;
using DG.Tweening;

namespace Library.ScreenManagement.Scripts.Animation
{
    public class InstantScreenAnimationCommand : BaseScreenAnimationCommand
    {
        private readonly float _openDelay;
        private readonly float _closeDelay;
        
        public InstantScreenAnimationCommand(float openDelay = 0f, float closeDelay = 0f)
        {
            _openDelay = openDelay;
            _closeDelay = closeDelay;
        }
        
        public override void PlayOpenAnimation(BaseScreen screen, bool animateBg = true, Action onComplete = null)
        {
            if (_openDelay > 0f)
            {
                DOVirtual.DelayedCall(_openDelay, () =>
                {
                    onComplete?.Invoke();
                });
            }
            else
            {
                onComplete?.Invoke();
            }
        }

        public override void PlayCloseAnimation(BaseScreen screen, bool animateBg = true, Action onComplete = null)
        {
            if (_closeDelay > 0f)
            {
                DOVirtual.DelayedCall(_closeDelay, () =>
                {
                    onComplete?.Invoke();
                });
            }
            else
            {
                onComplete?.Invoke();
            }
        }
    }
}