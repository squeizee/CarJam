using _Game._0_CraftCore.Scripts.Core;
using _Game._2_LinearLevel.Scripts;
using _Game._2_LinearLevel.Scripts.BossLevel;
using _Game._3_GamePlay;
using _Game._3_GamePlay.Scripts;

namespace _Game.Systems.GameFlow.Scripts.Commands
{
    public class StartBossLevelCommand
    {
        public int Reward;

        private bool _isSubscribed = false;

        public async void Execute(int reward)
        {
            Reward = reward;

            Craft.Get<LinearLevelSystem>(out var linearLevelSystem);
            Craft.Get<GamePlaySystem>(out var gamePlaySystem);
            // wait for level to load
            var level = await linearLevelSystem.GetCurrentGamePlay(LinearLevelType.Boss);

            linearLevelSystem.Dispatcher.Send(LinearLevelEvents.BossLevelStarted, new LinearLevelEventsArgs(
                linearLevelSystem.GetProgress(LinearLevelType.Boss),
                linearLevelSystem.GetProgress(LinearLevelType.Boss),
                0,
                linearLevelSystem.ProgressData.Value.GetLevelAttemptProgress(LinearLevelType.Boss),
                LinearLevelType.Boss,
                LinearLevelEvents.BossLevelStarted
            ));
            
            gamePlaySystem.StartGamePlay(level.GetComponent<BaseGamePlay>(),
                new BaseGamePlayStartArgs(false), 1.5f);
            Subscribe();

            var gamePlay = gamePlaySystem.GetCurrentGamePlay();
            Craft.OpenUI<BossLevelLevelUI>(new BossLevelLevelUIArgs()
            {
                Level = Craft.Get<LinearLevelSystem>().GetProgress(LinearLevelType.Boss),
                OnExitButtonDown = OnExitButtonDown,
                GamePlay = gamePlay
            });
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
            new BossLevelCancelCommand().Execute();
        }

        public void OnLevelCompleted()
        {
            UnSubscribe();
            new BossLevelCompletedCommand().Execute(Reward);
        }

        public void OnLevelFailed(FailReason reason)
        {
            UnSubscribe();
            new BossLevelFailedCommand().Execute(reason, OnRevive);
        }

        public void OnRevive()
        {
            Subscribe();
        }
    }
}