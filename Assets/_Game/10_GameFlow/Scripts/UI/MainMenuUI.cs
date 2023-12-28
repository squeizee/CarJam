using System;
using Library.ScreenManagement.Scripts;
using Library.ScreenManagement.Scripts.Animation;

namespace _Game.Systems.GameFlow.Scripts.UI
{
    public class MainMenuUIArgs : BaseScreenArgs
    {
        public Action OnPlayButtonDown;
    }

    public class MainMenuUI : BaseScreen<MainMenuUIArgs>
    {
        public override BaseScreenAnimationCommand GetAnimationCommand()
        {
            return new InstantScreenAnimationCommand();
        }

        public override void OnSetup()
        {
        }

        public override void OnClose()
        {
        }

        public void OnPlayButtonClicked()
        {
            GetArgs().OnPlayButtonDown?.Invoke();
        }
    }
}