using _Game._2_LinearLevel.Scripts.ChallangeLevel;
using _Game._21_Jigsaw.Scripts;
using _Game._3_GamePlay.Scripts;
using _Game._9_Marketplace.Scripts;
using _Game.Systems.GameFlow.Scripts.Commands;
using Library.ScreenManagement.Scripts;
using Library.ScreenManagement.Scripts.Animation;
using TMPro;
using UnityEngine;

namespace _Game.Systems.GameFlow.Scripts.UI
{
    public class NormalLevelUIArgs : BaseScreenArgs
    {
        public int Level;
        public BaseGamePlay GamePlay;
    }

    public class NormalLevelUI : BaseScreen<NormalLevelUIArgs>
    {
        [SerializeField] private TMP_Text _levelText;
        [SerializeField] JigsawCollectionButton _jigsawCollectionButton;
        [SerializeField] ChallengeSelectionButtonUI _challengeSelectionButtonUI;
        [SerializeField] MarketPlaceButton _marketPlaceButton;

        public RectTransform CoinRewardView;

        public override BaseScreenAnimationCommand GetAnimationCommand()
        {
            return new InstantScreenAnimationCommand();
        }

        public override void OnSetup()
        {
            _levelText.text = $"Level {GetArgs().Level}";
            _jigsawCollectionButton.UpdateActivity();
            _challengeSelectionButtonUI.UpdateActivity();
            _marketPlaceButton.UpdateActivity();
            
          }    


        public override void OnClose()
        {
            
          }

        public void OnRestartButtonDown()
        {
            new RestartNormalLevelCommand().Execute();
        }

        public JigsawCollectionButton GetJigsawCollectionButton()
        {
            return _jigsawCollectionButton;
        }
    }
}