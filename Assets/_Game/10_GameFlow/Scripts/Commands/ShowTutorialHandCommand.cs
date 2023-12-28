using _Game._0_CraftCore.Scripts.Core;
using _Game._2_LinearLevel.Scripts;
using _Game._21_TutorialHand.Scripts;
using _Game._3_GamePlay;
using _Game._3_GamePlay.Scripts;
using DG.Tweening;

namespace _Game.Systems.GameFlow.Scripts.Commands
{
    public class ShowTutorialHandCommand
    {
        private bool _isStarted = false;

        private GamePlaySystem gamePlaySystem;
        private LinearLevelSystem linearLevelSystem;
        private TutorialHandSystem TutorialHandSystem;
        private BaseGamePlay level;

        int tapeIndex = 0;
        private Tween showTween;

        public void Execute()
        {
            // Craft.Get(out linearLevelSystem);
            // Craft.Get(out gamePlaySystem);
            // Craft.Get(out TutorialHandSystem);
            // int progress = linearLevelSystem.GetProgress(LinearLevelType.Normal);
            // level = (BaseGamePlay)gamePlaySystem.GetCurrentGamePlay();
            // if (progress <= 1)
            // {
            //     _isStarted = true;
            //     gamePlaySystem.OnGamePlayDestroyedEvent += OnLevelDestroyed;
            //     level.Dispatcher.Subscribe(TapeMasterGamePlayEvents.TapeClicked, OnTapeClicked);
            //
            //     FocusOnNextTape(3);
            // }
        }

        private void FocusOnNextTape(float delay)
        {
            // TutorialHandSystem.HideHand();
            // showTween?.Kill();
            //
            //
            //
            // if (tapeIndex >= level.Tapes.Count)
            // {
            //     return;
            // }
            // int tapeToFocus = tapeIndex;
            // tapeIndex++;
            // showTween = DOVirtual.DelayedCall(delay, () =>
            // {
            //     var pointData = level.Tapes[tapeToFocus].TapeData.Evaluate(0.2f);
            //     TutorialHandSystem.ShowHand(pointData.Position);
            // });
        }

        private void OnTapeClicked()
        {
            FocusOnNextTape(0.5f);
        }

        private void OnLevelDestroyed()
        {
            // gamePlaySystem.OnGamePlayDestroyedEvent -= OnLevelDestroyed;
            // level.Dispatcher.Unsubscribe(TapeMasterGamePlayEvents.TapeClicked, OnTapeClicked);
            //
            // TutorialHandSystem.HideHand();
        }
    }
}