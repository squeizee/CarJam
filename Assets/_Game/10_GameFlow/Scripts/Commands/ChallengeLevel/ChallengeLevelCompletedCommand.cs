using _Game._0_CraftCore.Scripts.Core;
using _Game._1_Effects.Scripts;
using _Game._2_LinearLevel.Scripts;
using _Game._2_LinearLevel.Scripts.BossLevel;
using _Game._2_LinearLevel.Scripts.ChallangeLevel;
using DG.Tweening;
using Modules.Inventory;

namespace _Game.Systems.GameFlow.Scripts.Commands.ChallengeLevel
{
    public class ChallengeLevelCompletedCommand
    {
        public void Execute(int reward, int level, LinearLevelType levelType, int movesLeft)
        {
            var linearLevelSystem = Craft.Get<LinearLevelSystem>();
            linearLevelSystem.Dispatcher.Send(LinearLevelEvents.ChallengeLevelCompleted, new LinearLevelEventsArgs(
                level,
                level,
                0,
                0,
                levelType,
                LinearLevelEvents.ChallengeLevelCompleted
            ));

            // Give Reward
            Craft.Get<CraftInventorySystem>().QueItemData(new ItemData(ItemId.Currency1, reward));
            Craft.Get<EffectsSystem>().ConfettiView.Play(false);
            Craft.Get<ChallengeSystem>(out var challengeSystem);
            challengeSystem.SetCompletedChallengeLevelData(level, levelType, movesLeft);

            DOVirtual.DelayedCall(LevelUIAnimationsSo.Instance.ScreenWaitTime, () =>
            {
                Craft.CloseUI<ChallengeLevelUI>();

                Craft.OpenUI<BossLevelWinUI>(new BossLevelWinUIArgs()
                {
                    Reward = reward,
                    OnClosed = OnWinScreenClosed
                });
            });
        }

        private void OnWinScreenClosed()
        {
            Craft.Get<EffectsSystem>().ConfettiView.Stop();
            Craft.Get<ChallengeSystem>().OpenChallengeLevelSelectionUI(false,false);
            //new StartNormalLevelCommand().Execute();
        }
    }
}