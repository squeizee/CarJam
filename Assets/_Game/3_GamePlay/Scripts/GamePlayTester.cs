using _Game._0_CraftCore.Scripts.Core;
using _Game.Systems._CoreSystem.Scripts;
using _Game.Systems.GameFlow.Scripts.UI;
using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game._3_GamePlay.Scripts
{
    public class GamePlayTester : MonoSingleton<GamePlayTester>
    {
        [SerializeField] private BaseGamePlay _gamePlay;
        GamePlaySystem _gamePlaySystem;

        public async void Start()
        {
            CraftCore.Dispatcher.Subscribe(CoreEventId.CraftCoreInitialized, TestGamePlay);
        }

        public void Update()
        {
            if (Input.GetKeyDown(KeyCode.Space))
            {
                TestGamePlay();
            }
        }

        private void TestGamePlay()
        {
            if (_gamePlay == null)
            {
                _gamePlay = FindObjectOfType<BaseGamePlay>();
            }

            _gamePlay.gameObject.SetActive(true);
            _gamePlaySystem = Craft.Get<GamePlaySystem>();
            _gamePlaySystem.OnGamePlayPreparedEvent += OnGamePlayPrepared;
            _gamePlaySystem.OnGamePlayStartedEvent += OnGamePlayStarted;
            _gamePlaySystem.OnGamePlayCompletedEvent += OnGamePlayCompleted;
            _gamePlaySystem.OnGamePlayFailedEvent += OnGamePlayFailed;
            _gamePlaySystem.StartGamePlay(_gamePlay,
                new BaseGamePlayStartArgs(false), 0);
            _gamePlay.gameObject.SetActive(false);

            Craft.CloseUI<NormalLevelUI>();
            Craft.OpenUI<NormalLevelUI>(new NormalLevelUIArgs()
            {
                Level = 99,
                GamePlay = _gamePlaySystem.GetCurrentGamePlay()
            });
        }

        private void OnGamePlayFailed(FailReason obj)
        {
            Debug.Log("GamePlay Failed");

            _gamePlaySystem.OnGamePlayPreparedEvent -= OnGamePlayPrepared;
            _gamePlaySystem.OnGamePlayStartedEvent -= OnGamePlayStarted;
            _gamePlaySystem.OnGamePlayCompletedEvent -= OnGamePlayCompleted;
            _gamePlaySystem.OnGamePlayFailedEvent -= OnGamePlayFailed;
            TestGamePlay();
        }

        private void OnGamePlayCompleted()
        {
            _gamePlaySystem.OnGamePlayPreparedEvent -= OnGamePlayPrepared;
            _gamePlaySystem.OnGamePlayStartedEvent -= OnGamePlayStarted;
            _gamePlaySystem.OnGamePlayCompletedEvent -= OnGamePlayCompleted;
            _gamePlaySystem.OnGamePlayFailedEvent -= OnGamePlayFailed;

            TestGamePlay();
        }

        private void OnGamePlayStarted()
        {
            Debug.Log("GamePlay Started");
        }

        private void OnGamePlayPrepared()
        {
            Debug.Log(" GamePlay Prepared");
        }
    }
}