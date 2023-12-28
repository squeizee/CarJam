using System;
using _Game._0_CraftCore.Scripts.Core;
using _Game._2_LinearLevel.Scripts;
using _Game._2_LinearLevel.Scripts.BossLevel;
using _Game._3_GamePlay;
using _Game._3_GamePlay.Scripts;

namespace _Game.Systems.GameFlow.Scripts.Commands
{
    public class BossLevelFailedCommand
    {
        private FailReason _failReason;
        private Action _onRevive;
        private int _reviveCost;

        public void Execute(FailReason failReason, Action onRevive)
        {
            _failReason = failReason;
            _onRevive = onRevive;

            Craft.CloseUI<BossLevelLevelUI>();

            var linearLevelSystem = Craft.Get<LinearLevelSystem>();

            _reviveCost = linearLevelSystem.So.BossLevelConfig.ReviveCost;
            Craft.OpenUI<BossLevelFailUI>(new BossLevelFailUIArgs()
            {
                FailReason = failReason,
                OnExitButtonDown = OnExitButtonDownFromFail,
                OnReviveButtonDown = OnReviveButtonDown,
                LinearLevelType = LinearLevelType.Boss
            });
        }

        private void OnExitButtonDownFromFail()
        {
            var linearLevelSystem = Craft.Get<LinearLevelSystem>();

            linearLevelSystem.Dispatcher.Send(LinearLevelEvents.BossLevelFailed, new LinearLevelEventsArgs(
                linearLevelSystem.GetProgress(LinearLevelType.Boss),
                linearLevelSystem.GetProgress(LinearLevelType.Boss),
                0,
                linearLevelSystem.ProgressData.Value.GetLevelAttemptProgress(LinearLevelType.Boss),
                LinearLevelType.Boss,
                LinearLevelEvents.BossLevelFailed,
                _failReason
            ));
            Craft.CloseUI<BossLevelFailUI>();
            new StartNormalLevelCommand().Execute();
        }

        public void OnReviveButtonDown()
        {
            var gamePlaySystem = Craft.Get<GamePlaySystem>();
            var linearLevelSystem = Craft.Get<LinearLevelSystem>();

            var gamePlay = gamePlaySystem.GetCurrentGamePlay();

            linearLevelSystem.Dispatcher.Send(LinearLevelEvents.BossLevelRevived, new LinearLevelEventsArgs(
                linearLevelSystem.GetProgress(LinearLevelType.Boss),
                linearLevelSystem.GetProgress(LinearLevelType.Boss),
                0,
                linearLevelSystem.ProgressData.Value.GetLevelAttemptProgress(LinearLevelType.Boss),
                LinearLevelType.Boss,
                LinearLevelEvents.BossLevelRevived,
                _failReason
            ));

            var so = linearLevelSystem.So.BossLevelConfig;
            int additionalMoves = gamePlay.ConstrainsController.IsOutOfMoves() ? so.AdditionalMoves : 0;
            int additionalTime = gamePlay.ConstrainsController.IsOutOfTime() ? so.AdditionalTime : 0;

            gamePlay.Revive(additionalMoves, additionalTime);

            Craft.CloseUI<BossLevelFailUI>();

            Craft.OpenUI<BossLevelLevelUI>(new BossLevelLevelUIArgs()
            {
                Level = Craft.Get<LinearLevelSystem>().GetProgress(LinearLevelType.Boss),
                OnExitButtonDown = OnExitButtonDownFromLevel,
                GamePlay = gamePlay
            });

            _onRevive?.Invoke();
            gamePlay.CheckLevelComplete();
        }

        public void OnExitButtonDownFromLevel()
        {
            new BossLevelCancelCommand().Execute();
        }
    }
}