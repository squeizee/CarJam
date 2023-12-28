using System;
using System.Threading.Tasks;
using Sirenix.OdinInspector;
using UnityEngine;

namespace _Game._3_GamePlay.Scripts
{
    public  class  BaseGamePlayStartArgs
    {
        public bool IsAnimated;
        
        public BaseGamePlayStartArgs(bool isAnimated)
        {
            IsAnimated = isAnimated;
        }
    }
    public class BaseGamePlay : MonoBehaviour
    {
        public Action OnGamePlayStarted;
        public Action OnGamePlayPrepared;
        public Action OnGamePlayCompleted;
        public Action OnMoveIsDone;
        public Action<FailReason> OnGamePlayFailed;
        public GamePlayState GamePlayState = GamePlayState.None;
        public GamePlayConstrainsController ConstrainsController;

        public virtual Task Prepare()
        {
            OnGamePlayPrepared?.Invoke();
            return Task.CompletedTask;
        }

        public virtual void Initialize(BaseGamePlayStartArgs baseGamePlayStartArgs)
        {
            OnGamePlayStarted?.Invoke();
            ConstrainsController.Init(OnMoveIsDone);
            ConstrainsController.Dispatcher.Subscribe(GamePlayConstrainsEvents.OnMoveCountEnded, OnMoveCountEnded);
            ConstrainsController.Dispatcher.Subscribe(GamePlayConstrainsEvents.OutOfTime, OnOutOfTime);
        }

        protected virtual void OnOutOfTime()
        {
            Debug.Log("Out Of Time");
        }

        protected virtual void OnMoveCountEnded()
        {
            Debug.Log("Move Count Ended");
        }

        [Button]
        public void OnCompleted()
        {
            
            
            if (GamePlayState == GamePlayState.Started)
            {
                GamePlayState = GamePlayState.Completed;
                OnGamePlayCompleted?.Invoke();
                UnSubscribe();
            }
        }

        [Button]
        public void OnFailed(FailReason failReason)
        {
            OnGamePlayFailed?.Invoke(failReason);
            UnSubscribe();
        }

        public void PauseLevel()
        {
            GamePlayState = GamePlayState.Paused;
            OnPauseLevel();
        }
        public void Revive(int additionalMoves, int additionalTime)
        {
            ConstrainsController.AddMoves(additionalMoves);
            ConstrainsController.AddTime(additionalTime);
            
            OnRevive();
        }
        public void OnRevive()
        {
            GamePlayState = GamePlayState.Started;
        }

        public virtual void CheckLevelComplete()
        {
            
        }
        public virtual void OnPauseLevel()
        {
        }

        public void ResumeLevel()
        {
            GamePlayState = GamePlayState.Started;
            OnResumeLevel();
        }

        public virtual void OnResumeLevel()
        {
        }
        private void UnSubscribe()
        {
            ConstrainsController.Dispatcher.Unsubscribe(GamePlayConstrainsEvents.OnMoveCountEnded, OnMoveCountEnded);
            ConstrainsController.Dispatcher.Unsubscribe(GamePlayConstrainsEvents.OutOfTime, OnOutOfTime);
        }
    }

    public enum GamePlayState
    {
        None,
        Started,
        Completed,
        Paused,
        Failed
    }
}