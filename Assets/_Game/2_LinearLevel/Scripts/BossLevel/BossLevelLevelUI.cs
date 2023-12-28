using System;
using _Game._3_GamePlay.Scripts;
using Library.ScreenManagement.Scripts;
using Modules.Shared.Utility;
using TMPro;
using UnityEngine;

namespace _Game._2_LinearLevel.Scripts.BossLevel
{
    public class BossLevelLevelUIArgs : BaseScreenArgs
    {
        public int Level;
        public Action OnExitButtonDown;
        public BaseGamePlay GamePlay;
    }

    public class BossLevelLevelUI : BaseScreen<BossLevelLevelUIArgs>
    {
        [SerializeField] private TMP_Text _levelText;
        [SerializeField] private TMP_Text _moveCountText;
        [SerializeField] private TMP_Text _timeLeftText;

        public override void OnSetup()
        {
            var gamePlay = GetArgs().GamePlay;
            _levelText.text = $"Boss Level {GetArgs().Level}";

            _timeLeftText.gameObject.SetActive(gamePlay.ConstrainsController.IsTimeLevel());
            _moveCountText.gameObject.SetActive(gamePlay.ConstrainsController.IsMoveCountLevel());
            MoveCountChanged();
            OnTimeLeftChanged();
            gamePlay.ConstrainsController.Dispatcher.Subscribe(GamePlayConstrainsEvents.OnMoveCountChanged, MoveCountChanged);
            gamePlay.ConstrainsController.Dispatcher.Subscribe(GamePlayConstrainsEvents.OnTimeLeftChanged, OnTimeLeftChanged);
        }

        public override void OnClose()
        {
            GetArgs().GamePlay.ConstrainsController.Dispatcher.Unsubscribe(GamePlayConstrainsEvents.OnMoveCountChanged, MoveCountChanged);
            GetArgs().GamePlay.ConstrainsController.Dispatcher.Unsubscribe(GamePlayConstrainsEvents.OnTimeLeftChanged, OnTimeLeftChanged);
        }

        private void MoveCountChanged()
        {
            _moveCountText.text = $"{GetArgs().GamePlay.ConstrainsController.CurrentMoveCount} Moves";
        }

        private void OnTimeLeftChanged()
        {
            _timeLeftText.text = $"{GetArgs().GamePlay.ConstrainsController.CurrentTimeInSeconds.GetTextShort()}";
        }

        public void OnExitButtonDown()
        {
            GetArgs().OnExitButtonDown?.Invoke();
        }
    }
}