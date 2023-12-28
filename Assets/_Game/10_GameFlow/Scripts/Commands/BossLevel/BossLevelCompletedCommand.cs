using _Game._0_CraftCore.Scripts.Core;
using _Game._1_Effects.Scripts;
using _Game._2_LinearLevel.Scripts;
using _Game._2_LinearLevel.Scripts.BossLevel;
using _Game.Systems.GameFlow.Scripts.UI;
using DG.Tweening;
using Modules.Inventory;

namespace _Game.Systems.GameFlow.Scripts.Commands
{
    public class BossLevelCompletedCommand
    {
        public void Execute(int reward)
        {
            var linearLevelSystem = Craft.Get<LinearLevelSystem>();
            linearLevelSystem.Dispatcher.Send(LinearLevelEvents.BossLevelCompleted, new LinearLevelEventsArgs(
                linearLevelSystem.GetProgress(LinearLevelType.Boss),
                linearLevelSystem.GetProgress(LinearLevelType.Boss),
                0,
                linearLevelSystem.ProgressData.Value.GetLevelAttemptProgress(LinearLevelType.Boss),
                LinearLevelType.Boss,
                LinearLevelEvents.BossLevelCompleted
            ));

            linearLevelSystem.ProgressData.Value.ResetLevelAttempt(LinearLevelType.Boss);
            linearLevelSystem.IncreaseProgress(LinearLevelType.Boss);
            // Give Reward
            Craft.Get<CraftInventorySystem>().QueItemData(new ItemData(ItemId.Currency1, reward));


            Craft.Get<EffectsSystem>().ConfettiView.Play(false);

            DOVirtual.DelayedCall(LevelUIAnimationsSo.Instance.ScreenWaitTime, () =>
            {
                Craft.CloseUI<BossLevelLevelUI>();

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

            new StartNormalLevelCommand().Execute();
        }
    }
}