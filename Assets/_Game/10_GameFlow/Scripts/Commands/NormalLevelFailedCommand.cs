using System;
using _Game._0_CraftCore.Scripts.Core;
using _Game._2_LinearLevel.Scripts;
using _Game._2_LinearLevel.Scripts.BossLevel;
using _Game._3_GamePlay;
using _Game._3_GamePlay.Scripts;
using _Game.Systems.GameFlow.Scripts.UI;

namespace _Game.Systems.GameFlow.Scripts.Commands
{
    public class NormalLevelFailedCommand
    {
        private FailReason _failReason;
        private Action _onRevive;

        public void Execute(FailReason failReason, Action onRevive)
        {
            _onRevive = onRevive;
            _failReason = failReason;
            Craft.CloseUI<NormalLevelUI>();

            var linearLevelSystem = Craft.Get<LinearLevelSystem>();

            linearLevelSystem.Dispatcher.Send(LinearLevelEvents.NormalLevelFailed, new LinearLevelEventsArgs(
                linearLevelSystem.GetProgress(LinearLevelType.Normal),
                linearLevelSystem.GetProgress(LinearLevelType.Normal),
                0,
                linearLevelSystem.ProgressData.Value.GetLevelAttemptProgress(LinearLevelType.Normal),
                LinearLevelType.Normal,
                LinearLevelEvents.NormalLevelFailed
            ));
            linearLevelSystem.ProgressData.Value.IncreaseLevelAttempt(LinearLevelType.Normal);

            Craft.OpenUI<BossLevelFailUI>(new BossLevelFailUIArgs()
            {
                FailReason = failReason,
                OnExitButtonDown = RetryLevel,
                OnReviveButtonDown = OnReviveButtonDown,
                LinearLevelType = LinearLevelType.Normal
            });
        }

        private void OnReviveButtonDown()
        {
            var gamePlaySystem = Craft.Get<GamePlaySystem>();
            var linearLevelSystem = Craft.Get<LinearLevelSystem>();

            var gamePlay = gamePlaySystem.GetCurrentGamePlay();

            linearLevelSystem.Dispatcher.Send(LinearLevelEvents.NormalLevelRevived, new LinearLevelEventsArgs(
                linearLevelSystem.GetProgress(LinearLevelType.Normal),
                linearLevelSystem.GetProgress(LinearLevelType.Normal),
                0,
                linearLevelSystem.ProgressData.Value.GetLevelAttemptProgress(LinearLevelType.Normal),
                LinearLevelType.Normal,
                LinearLevelEvents.NormalLevelRevived,
                _failReason
            ));

            var so = linearLevelSystem.So.BossLevelConfig;
            int additionalMoves = gamePlay.ConstrainsController.IsOutOfMoves() ? so.AdditionalMoves : 0;
            int additionalTime = gamePlay.ConstrainsController.IsOutOfTime() ? so.AdditionalTime : 0;

            gamePlay.Revive(additionalMoves, additionalTime);

            Craft.CloseUI<BossLevelFailUI>();

            Craft.OpenUI<NormalLevelUI>(new NormalLevelUIArgs()
            {
                Level = Craft.Get<LinearLevelSystem>().GetProgress(LinearLevelType.Normal),
                GamePlay = gamePlay
            });

            _onRevive?.Invoke();
            gamePlay.CheckLevelComplete();
        }

        private void RetryLevel()
        {
            Craft.CloseUI<BossLevelFailUI>();
            new StartNormalLevelCommand().Execute();
        }
    }
}