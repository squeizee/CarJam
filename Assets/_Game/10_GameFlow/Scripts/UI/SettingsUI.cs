using _Game._0_CraftCore.Scripts.Core;
using _Game._3_GamePlay.Scripts;
using _Game.Systems._CraftCore;
using _Game.Systems.GameFlow.Scripts.Commands;
using Library.ScreenManagement.Scripts;
using Library.ScreenManagement.Scripts.Animation;
using UnityEngine;

namespace _Game.Systems.GameFlow.Scripts.UI
{
    public class SettingsUIArgs : BaseScreenArgs
    {
        public bool ShouldOpenHome;
    }

    public class SettingsUI : BaseScreen<SettingsUIArgs>
    {
        public Transform SoundOffTransform;
        public Transform VibrationOffTransform;
        public Transform HomeButton;

        public override BaseScreenAnimationCommand GetAnimationCommand()
        {
            return new InstantEnterFadeOutAnimationCommand();
        }

        public override void OnSetup()
        {
            Craft.Get<GamePlaySystem>().PauseGamePlay();
            SoundOffTransform.gameObject.SetActive(!Craft.Get<CraftSoundSystem>().IsOn.Value);
            VibrationOffTransform.gameObject.SetActive(!Craft.Get<CraftVibrationSystem>().IsVibrationOn);
            HomeButton.gameObject.SetActive(GetArgs().ShouldOpenHome);
        }

        public void OnBackButtonDown()
        {
            Craft.Get<GamePlaySystem>().ResumeGamePlay();
            Close();
        }

        public void OnHomeButtonDown()
        {
            Close();
            new OpenRoadMapCommand().Execute();
        }

        public void SwitchSound()
        {
            Craft.Get<CraftSoundSystem>().SwitchSound();
            OnSetup();
        }

        public void SwitchVibration()
        {
            Craft.Get<CraftVibrationSystem>().SwitchVibration();
            OnSetup();
        }
    }
}