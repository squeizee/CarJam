using _Game._0_CraftCore.Scripts.Core;
using _Game._2_LinearLevel.Scripts;
using _Game._2_LinearLevel.Scripts.ChallangeLevel;
using _Game._3_GamePlay;
using _Game._3_GamePlay.Scripts;
using _Game.Systems.GameFlow.Scripts.UI;

namespace _Game.Systems.GameFlow.Scripts.Commands.ChallengeLevel
{
    public class StartChallengeLevelCommand
    {
        public int LevelId;
        public int Reward;
        private bool _isSubscribed = false;
        private BaseGamePlay _gamePlay;
        private LinearLevelType _levelType;

        public async void Execute(int levelId, int reward, LinearLevelType levelType)
        {
            Craft.BlockInput();

            Craft.Get<LinearLevelSystem>(out var linearLevelSystem);
            Craft.Get<GamePlaySystem>(out var gamePlaySystem);
            Craft.Get<ChallengeSystem>(out var challengeSystem);

            var levelObj = await linearLevelSystem.GetGamePlay(levelType, levelId);

            LevelId = levelId;
            Reward = reward;
            _levelType = levelType;

            var level = levelObj.GetComponent<BaseGamePlay>();

            linearLevelSystem.Dispatcher.Send(LinearLevelEvents.ChallengeLevelStarted, new LinearLevelEventsArgs(
                levelId,
                levelId,
                0,
                0,
                levelType,
                LinearLevelEvents.ChallengeLevelStarted
            ));
            gamePlaySystem.StartGamePlay(level, new BaseGamePlayStartArgs(false), 0f);
            Subscribe();
            Craft.CloseUI<ChallengeLevelSelectionUI>();
            Craft.CloseUI<NormalLevelUI>();
            _gamePlay = gamePlaySystem.GetCurrentGamePlay();
            Craft.OpenUI<ChallengeLevelUI>(new ChallengeLevelUIArgs()
            {
                Level = levelId,
                OnExitButtonDown = OnExitButtonDown,
                GamePlay = _gamePlay
            });
            Craft.UnBlockInput();
        }

        private void Subscribe()
        {
            if (_isSubscribed)
            {
                return;
            }

            Craft.Get<GamePlaySystem>(out var gamePlaySystem);
            gamePlaySystem.OnGamePlayCompletedEvent += OnLevelCompleted;
            gamePlaySystem.OnGamePlayFailedEvent += OnLevelFailed;
            gamePlaySystem.OnGamePlayDestroyedEvent += UnSubscribe;
            _isSubscribed = true;
        }

        private void UnSubscribe()
        {
            if (_isSubscribed)
            {
                Craft.Get<GamePlaySystem>(out var gamePlaySystem);
                gamePlaySystem.OnGamePlayCompletedEvent -= OnLevelCompleted;
                gamePlaySystem.OnGamePlayFailedEvent -= OnLevelFailed;
                gamePlaySystem.OnGamePlayDestroyedEvent -= UnSubscribe;
                _isSubscribed = false;
            }
        }

        public void OnExitButtonDown()
        {
            UnSubscribe();
            new ChallengeCancelCommand().Execute();
        }

        public void OnLevelCompleted()
        {
            UnSubscribe();
            new ChallengeLevelCompletedCommand().Execute(Reward, LevelId, _levelType,
                _gamePlay.ConstrainsController.CurrentMoveCount);
        }

        public void OnLevelFailed(FailReason reason)
        {
            UnSubscribe();
            new ChallengeLevelFailedCommand().Execute(reason, OnRevive, LevelId, _levelType);
        }

        public void OnRevive()
        {
            Subscribe();
        }
    }
}