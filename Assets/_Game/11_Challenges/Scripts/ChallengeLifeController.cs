using System;
using _Game._1_Time.Scripts;
using _Game.Library.PersistentDataNS.Scripts;
using UnityEngine;

namespace _Game._2_LinearLevel.Scripts.ChallangeLevel
{
    public class ChallengeLifeController
    {
        public const int RefillDurationInMinutes = 30;
        public const int MaxLifeCount = 5;

        public Action OnLifeChanged;
        public PersistentInt LifeCount = new($"{nameof(ChallengeLifeController)}-{nameof(LifeCount)}", MaxLifeCount);

        private PersistentCountdownTimerWithDuration _lifeRefillTimer = new(
            $"{nameof(ChallengeLifeController)}-{nameof(_lifeRefillTimer)}",
            TimeSpan.FromMinutes(RefillDurationInMinutes));

        private Coroutine _lifeRefillTimerCoroutine;


        public void Initialize()
        {
            _lifeRefillTimer.AddListenerToCompleted(OnRefillTimerCompleted);
            ClaimPassedTimeAndStartRefill();
        }

        public void Dispose()
        {
            _lifeRefillTimer.RemoveListenerToCompleted(OnRefillTimerCompleted);
        }


        #region Actions

        public bool TrySpendLife()
        {
            if (CanSpendLife())
            {
                if (IsLifeFull())
                {
                    _lifeRefillTimer.Reset();
                    _lifeRefillTimer.StartTimer();
                }

                LifeCount.Value -= 1;
                OnLifeChanged?.Invoke();
                return true;
            }

            return false;
        }


        public void AddLife(int lifeCountToAdd)
        {
            LifeCount.Value += lifeCountToAdd;
            LifeCount.Value = Mathf.Min(LifeCount.Value, MaxLifeCount);
            LifeCount.Value = Mathf.Max(0, LifeCount.Value);
            if (IsLifeFull())
            {
                _lifeRefillTimer.StopTimer();
            }

            OnLifeChanged?.Invoke();
        }


        private void ClaimPassedTimeAndStartRefill()
        {
            if (IsLifeFull())
            {
                return;
            }

            TimeSpan totalPassedDuration = _lifeRefillTimer.GetTotalPassedDuration();
            int lifeToClaim = Mathf.FloorToInt((float)totalPassedDuration.TotalSeconds /
                                               (RefillDurationInMinutes * 60));
            if (lifeToClaim > 0)
            {
                AddLife(lifeToClaim);
            }

            if (IsLifeFull() == false)
            {
                _lifeRefillTimer.AddTimeSpanToStartTime(new TimeSpan(0,
                    RefillDurationInMinutes * lifeToClaim, 0));
                _lifeRefillTimer.StartTimer();
            }

            OnLifeChanged?.Invoke();
        }

        #endregion


        #region Logic

        public bool IsWaitingForRefill()
        {
            return IsLifeFull() == false;
        }

        public bool IsLifeFull()
        {
            return LifeCount == MaxLifeCount;
        }

        public bool CanSpendLife()
        {
            return LifeCount.Value > 0;
        }

        #endregion

        #region Events

        public void OnRefillTimerCompleted()
        {
            if (IsWaitingForRefill())
            {
                AddLife(1);
                _lifeRefillTimer.Reset();
                _lifeRefillTimer.StartTimer();
            }
        }

        #endregion

        public string GetRemainingRefillTimeString()
        {
            return _lifeRefillTimer.GetMessage();
        }

        public double GetSecondsToRefillOneLife()
        {
            return _lifeRefillTimer.GetRemainingTime().TotalSeconds;
        }
    }
}