using _Game._0_CraftCore.Scripts.Core;
using _Game._2_LinearLevel.Scripts;
using _Game._3_GamePlay;
using _Game._3_GamePlay.Scripts;
using _Game.Systems.GameFlow.Scripts.UI;
using DG.Tweening;

namespace _Game.Systems.GameFlow.Scripts.Commands
{
    public class StartNormalLevelCommand
    {
        private bool _isSubscribed = false;

        public async void Execute(bool isAnimated = false)
        {
            Craft.Get<LinearLevelSystem>(out var linearLevelSystem);
            Craft.Get<GamePlaySystem>(out var gamePlaySystem);

            LoadNextLevel(linearLevelSystem);

            var levelObj = await linearLevelSystem.GetCurrentGamePlay(LinearLevelType.Normal);
            var level = levelObj.GetComponent<BaseGamePlay>();

            linearLevelSystem.Dispatcher.Send(LinearLevelEvents.NormalLevelStarted, new LinearLevelEventsArgs(
                linearLevelSystem.GetProgress(LinearLevelType.Normal),
                linearLevelSystem.GetProgress(LinearLevelType.Normal),
                0,
                linearLevelSystem.ProgressData.Value.GetLevelAttemptProgress(LinearLevelType.Normal),
                LinearLevelType.Normal,
                LinearLevelEvents.NormalLevelStarted
            ));

            gamePlaySystem.StartGamePlay(level, new BaseGamePlayStartArgs(isAnimated), 0f);
            Subscribe();
            new ShowTutorialHandCommand().Execute();

            Craft.OpenUI<NormalLevelUI>(new NormalLevelUIArgs()
            {
                Level = Craft.Get<LinearLevelSystem>().GetProgress(LinearLevelType.Normal),
                GamePlay = (BaseGamePlay)gamePlaySystem.GetCurrentGamePlay()
            });
        }

        private static void LoadNextLevel(LinearLevelSystem linearLevelSystem)
        {
            var nextLevel = linearLevelSystem.GetGamePlay(LinearLevelType.Normal,
                linearLevelSystem.GetProgress(LinearLevelType.Normal) + 1);
        }

        public void Subscribe()
        {
            if (_isSubscribed == false)
            {
                Craft.Get<GamePlaySystem>(out var gamePlaySystem);
                gamePlaySystem.OnGamePlayCompletedEvent += OnLevelCompleted;
                gamePlaySystem.OnGamePlayFailedEvent += OnLevelFailed;
                gamePlaySystem.OnGamePlayDestroyedEvent += UnSubscribe;
                _isSubscribed = true;
            }
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

        public void OnLevelCompleted()
        {
            UnSubscribe();
            Craft.BlockInput();
            DOVirtual.DelayedCall(0.6f, () =>
            {
                Craft.UnBlockInput();
                new NormalLevelCompletedCommand().Execute();
            });
        }

        public void OnLevelFailed(FailReason reason)
        {
            UnSubscribe();
            new NormalLevelFailedCommand().Execute(reason, OnRevive);
        }

        public void OnRevive()
        {
            Subscribe();
        }
    }
}