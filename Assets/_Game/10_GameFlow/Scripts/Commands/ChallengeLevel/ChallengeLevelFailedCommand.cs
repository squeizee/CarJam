using System;
using _Game._0_CraftCore.Scripts.Core;
using _Game._1_CraftUI.Scripts.Utility;
using _Game._2_LinearLevel.Scripts;
using _Game._2_LinearLevel.Scripts.BossLevel;
using _Game._2_LinearLevel.Scripts.ChallangeLevel;
using _Game._3_GamePlay;
using _Game._3_GamePlay.Scripts;
using Modules.Inventory;

namespace _Game.Systems.GameFlow.Scripts.Commands.ChallengeLevel
{
    public class ChallengeLevelFailedCommand
    {
        private FailReason _failReason;
        private Action _onRevive;
        private int _reviveCost;
        private int _levelId;
        private LinearLevelType _levelType;

        public void Execute(FailReason failReason, Action onRevive, int levelId, LinearLevelType levelType)
        {
            _levelId = levelId;
            _failReason = failReason;
            _onRevive = onRevive;
            _levelType = levelType;

            Craft.CloseUI<ChallengeLevelUI>();

            var linearLevelSystem = Craft.Get<LinearLevelSystem>();
            _reviveCost = linearLevelSystem.So.BossLevelConfig.ReviveCost;
            Craft.OpenUI<BossLevelFailUI>(new BossLevelFailUIArgs()
            {
                FailReason = failReason,
                OnExitButtonDown = OnExitButtonDownFromFail,
                OnReviveButtonDown = OnReviveButtonDown,
                LinearLevelType = levelType
            });
        }

        private void OnExitButtonDownFromFail()
        {
            var linearLevelSystem = Craft.Get<LinearLevelSystem>();

            linearLevelSystem.Dispatcher.Send(LinearLevelEvents.ChallengeLevelFailed, new LinearLevelEventsArgs(
                _levelId,
                _levelId,
                0,
                0,
                _levelType,
                LinearLevelEvents.ChallengeLevelFailed,
                _failReason
            ));
            Craft.CloseUI<BossLevelFailUI>();
            Craft.Get<ChallengeSystem>().OpenChallengeLevelSelectionUI(false,false);
        }

        public void OnReviveButtonDown()
        {
            var gamePlaySystem = Craft.Get<GamePlaySystem>();
            var linearLevelSystem = Craft.Get<LinearLevelSystem>();

            var gamePlay = gamePlaySystem.GetCurrentGamePlay();

            linearLevelSystem.Dispatcher.Send(LinearLevelEvents.ChallengeLevelRevived, new LinearLevelEventsArgs(
                _levelId,
                _levelId,
                0,
                0,
                _levelType,
                LinearLevelEvents.ChallengeLevelRevived,
                _failReason
            ));

            var so = linearLevelSystem.So.BossLevelConfig;
            int additionalMoves = gamePlay.ConstrainsController.IsOutOfMoves() ? so.AdditionalMoves : 0;
            int additionalTime = gamePlay.ConstrainsController.IsOutOfTime() ? so.AdditionalTime : 0;

            gamePlay.Revive(additionalMoves, additionalTime);

            Craft.CloseUI<BossLevelFailUI>();

            Craft.OpenUI<ChallengeLevelUI>(new ChallengeLevelUIArgs()
            {
                Level = _levelId,
                OnExitButtonDown = ExitFromLevel,
                GamePlay = gamePlay
            });

            _onRevive?.Invoke();
            gamePlay.CheckLevelComplete();
        }

        public void ExitFromLevel()
        {
            new ChallengeCancelCommand().Execute();
        }
    }
}