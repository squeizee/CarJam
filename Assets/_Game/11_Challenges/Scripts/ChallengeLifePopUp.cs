using _Game._0_CraftCore.Scripts.Core;
using _Game._1_Ads.Scripts;
using Library.ScreenManagement.Scripts;
using Library.ScreenManagement.Scripts.Animation;
using UnityEngine;
using UnityEngine.UI;

namespace _Game._2_LinearLevel.Scripts.ChallangeLevel
{
    public class ChallengeLifePopUpArgs : BaseScreenArgs
    {
    }

    public class ChallengeLifePopUp : BaseScreen<ChallengeLifePopUpArgs>
    {
        [SerializeField] private ChallengeLifeDisplayer _lifeDisplayer;

        [SerializeField] private Button _yesButton;
        [SerializeField] private Button _noButton1;
        [SerializeField] private Button _noButton2;
        ChallengeLifeController LifeController => Craft.Get<ChallengeSystem>().LifeController;

        public override BaseScreenAnimationCommand GetAnimationCommand()
        {
            return new InstantEnterFadeOutAnimationCommand();
        }

        public override void OnSetup()
        {
            _yesButton.interactable = true;
            _noButton1.interactable = true;
            _noButton2.interactable = true;
            _lifeDisplayer.Activate();
        }

        public override void OnClose()
        {
            _lifeDisplayer.Deactivate();
        }

        public void OnExitButtonDown()
        {
            Close();
        }

        public void OnRVButtonDown()
        {
            _yesButton.interactable = false;
            _noButton1.interactable = false;
            _noButton2.interactable = false;

            Craft.Get<AdsSystem>().ShowRewardedAd(isSuccess =>
            {
                if (isSuccess)
                {
                    LifeController.AddLife(1);
                    if (LifeController.IsLifeFull())
                    {
                        Close();
                    }
                }

                _yesButton.interactable = true;
                _noButton1.interactable = true;
                _noButton2.interactable = true;
            }, "GetLife");
        }
    }
}