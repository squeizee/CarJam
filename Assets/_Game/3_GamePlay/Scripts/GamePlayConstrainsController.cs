using System;
using _Game.Systems._CoreSystem;
using _Game.Systems._CraftCore.Scripts.Utility;

namespace _Game._3_GamePlay.Scripts
{
    public enum GamePlayConstrainsEvents
    {
        OnMoveCountChanged,
        OnTimeLeftChanged,
        OnMoveCountEnded,
        OutOfTime,
    }
    
    [Serializable]
    public class GamePlayConstrainsController
    {
        public int InitialMoveCount = -1;
        public int InitialTimeInSeconds = -1;
        public int CurrentMoveCount;
        public int CurrentTimeInSeconds;
        public Dispatcher<GamePlayConstrainsEvents> Dispatcher;
        
        private CraftQuartz _craftQuartz;

        private Action _onMoveIsDoneTriggered;
        
        public void Init(Action action)
        {
            Dispatcher = new Dispatcher<GamePlayConstrainsEvents>();
            _onMoveIsDoneTriggered = action;
            CurrentMoveCount = InitialMoveCount;
            CurrentTimeInSeconds = InitialTimeInSeconds;

            _craftQuartz = new CraftQuartz(1, OnOneSecondPassed);
            
            _onMoveIsDoneTriggered += OnMoveIsDone;
        }

        public void OnDestroy()
        {
            _craftQuartz?.Stop();
            _onMoveIsDoneTriggered -= OnMoveIsDone;
        }
        
        private void OnMoveIsDone()
        {
            if (IsMoveCountLevel() == false || CurrentMoveCount == 0)
            {
                return;
            }

            CurrentMoveCount--;
            Dispatcher.Send(GamePlayConstrainsEvents.OnMoveCountChanged);
            if (IsOutOfMoves())
            {
                Dispatcher.Send(GamePlayConstrainsEvents.OnMoveCountEnded);
            }
        }

        private void OnOneSecondPassed()
        {
            if (IsTimeLevel() == false || CurrentTimeInSeconds == 0)
            {
                return;
            }

            CurrentTimeInSeconds--;
            Dispatcher.Send(GamePlayConstrainsEvents.OnTimeLeftChanged);
            if (IsOutOfTime())
            {
                Dispatcher.Send(GamePlayConstrainsEvents.OutOfTime);
            }
        }

        public bool CanMakeAMove()
        {
            return IsOutOfMoves() == false && IsOutOfTime() == false;
        }

        public bool IsOutOfMoves()
        {
            return IsMoveCountLevel() && CurrentMoveCount == 0;
        }
        
        public bool IsOutOfTime()
        {
            return IsTimeLevel() && CurrentTimeInSeconds == 0;
        }

        public bool IsMoveCountLevel()
        {
            return InitialMoveCount > 0;
        }

        public bool IsTimeLevel()
        {
            return InitialTimeInSeconds > 0;
        }

        public void AddMoves(int additionalMoves)
        {
            CurrentMoveCount += additionalMoves;
            Dispatcher.Send(GamePlayConstrainsEvents.OnMoveCountChanged);
        }

        public void AddTime(int additionalTime)
        {
            CurrentTimeInSeconds += additionalTime;
            Dispatcher.Send(GamePlayConstrainsEvents.OnTimeLeftChanged);
        }
    }
}