using System;
using _Game.Systems._CoreSystem.Scripts;
using DG.Tweening;
using UnityEngine;
using Object = UnityEngine.Object;

namespace _Game._3_GamePlay.Scripts
{
    public class GamePlaySystem : BaseCraftSystem, ICraftSystem
    {
        public Action OnGamePlayPreparedEvent;
        public Action OnGamePlayStartedEvent;
        public Action OnGamePlayCompletedEvent;
        public Action OnGamePlayDestroyedEvent;

        public Action<FailReason> OnGamePlayFailedEvent;


        private BaseGamePlay _currentGamePlay;

        public async void StartGamePlay(BaseGamePlay gamePlay, BaseGamePlayStartArgs args, float destroyDelay = 0)
        {
            DestroyCurrentGamePlay(destroyDelay);

            var obj = GameObject.Instantiate(gamePlay.gameObject, Vector3.zero +
                                                                  gamePlay.transform.position,
                gamePlay.transform.rotation);
            _currentGamePlay = obj.GetComponent<BaseGamePlay>();
            _currentGamePlay.OnGamePlayCompleted += OnGamePlayCompleted;
            _currentGamePlay.OnGamePlayFailed += OnGamePlayFailed;
            _currentGamePlay.OnGamePlayStarted += OnGamePlayStarted;
            _currentGamePlay.OnGamePlayPrepared += OnGamePlayPrepared;
            await _currentGamePlay.Prepare();

            _currentGamePlay.Initialize(args);
        }

        public void DestroyCurrentGamePlay(float destroyDelay)
        {
            if (_currentGamePlay != null)
            {
                GameObject obj = _currentGamePlay.gameObject;
                OnGamePlayDestroyedEvent?.Invoke();
                DOVirtual.DelayedCall(destroyDelay, () =>
                {
                    if (obj != null)
                        Object.Destroy(obj.gameObject);
                });
            }
        }

        private void OnGamePlayFailed(FailReason obj)
        {
            OnGamePlayFailedEvent?.Invoke(obj);
        }

        private void OnGamePlayStarted()
        {
            OnGamePlayStartedEvent?.Invoke();
        }

        private void OnGamePlayPrepared()
        {
            OnGamePlayPreparedEvent?.Invoke();
        }

        private void OnGamePlayCompleted()
        {
            OnGamePlayCompletedEvent?.Invoke();
        }

        public BaseGamePlay GetCurrentGamePlay()
        {
            return _currentGamePlay;
        }

        public void PauseGamePlay()
        {
            if (_currentGamePlay == null)
            {
                return;
            }

            _currentGamePlay.PauseLevel();
        }

        public void ResumeGamePlay()
        {
            if (_currentGamePlay == null)
            {
                return;
            }

            _currentGamePlay.ResumeLevel();
        }
    }
}