using System;
using System.Collections;
using System.Collections.Generic;
using _Game.Library.PersistentDataNS.Scripts;
using Library.CoroutineSystem.Scripts;
using Modules.Shared.Utility;
using TMPro;
using UnityEngine;

namespace _Game._1_Time.Scripts
{
    public class PersistentCountdownTimerWithDuration
    {
        private readonly TimeSpan _duration;

        private readonly PersistentData<DateTime> _countdownStartTime;
        private readonly List<TextMeshProUGUI> _bindTexts;

        private Coroutine _timerCoroutine;

        private List<Action> _onCompletedListeners = new();

        public PersistentCountdownTimerWithDuration()
        {
        }

        public PersistentCountdownTimerWithDuration(string key, TimeSpan duration)
        {
            _duration = duration;
            _countdownStartTime = new(key, new DateTime(2023, 1, 1));
            _bindTexts = new List<TextMeshProUGUI>();
        }

        public bool IsCompleted()
        {
            return GetTotalPassedDuration() > _duration;
        }

        public virtual void Reset()
        {
            SetCountDownStartTime(DateTime.UtcNow);
            ClearBindTexts();
        }

        public void AddListenerToCompleted(Action onCompleted)
        {
            if (!_onCompletedListeners.Contains(onCompleted))
            {
                _onCompletedListeners.Add(onCompleted);
            }
        }

        public void RemoveListenerToCompleted(Action onCompleted)
        {
            if (_onCompletedListeners.Contains(onCompleted))
            {
                _onCompletedListeners.Remove(onCompleted);
            }
        }

        protected void SetCountDownStartTime(DateTime dateTime)
        {
            _countdownStartTime.Value = dateTime;
            _countdownStartTime.Save();
        }

        protected void ClearBindTexts()
        {
            _bindTexts.Clear();
        }

        public void BindText(TextMeshProUGUI text)
        {
            if (!_bindTexts.Contains(text))
            {
                text.text = GetRemainingTimeText();
                _bindTexts.Add(text);
            }
        }

        public void StartTimer()
        {
            if (_timerCoroutine != null)
            {
                StopTimer();
            }

            _timerCoroutine = CoroutineManager.BeginCoroutine(TimerCoroutine());
        }

        public void StopTimer()
        {
            CoroutineManager.EndCoroutine(_timerCoroutine);
            _timerCoroutine = null;
        }

        public TimeSpan GetRemainingTime()
        {
            return _countdownStartTime.Value.Add(_duration).Subtract(DateTime.UtcNow);
        }

        private string GetRemainingTimeText()
        {
            return GetRemainingTime().GetTextShort("");
        }

        private IEnumerator TimerCoroutine()
        {
            while (!IsCompleted())
            {
                string remainingTimeText = GetRemainingTimeText();
                for (int i = 0; i < _bindTexts.Count; i++)
                {
                    _bindTexts[i].text = remainingTimeText;
                }

                yield return new WaitForSeconds(1f);
            }

            StopTimer();

            for (int i = 0; i < _onCompletedListeners.Count; i++)
            {
                _onCompletedListeners[i]?.Invoke();
            }
        }

        public TimeSpan GetTotalPassedDuration()
        {
            return DateTime.UtcNow.Subtract(_countdownStartTime.Value);
        }

        public void AddTimeSpanToStartTime(TimeSpan timeSpan)
        {
            _countdownStartTime.Value = _countdownStartTime.Value.Add(timeSpan);
        }

        public string GetMessage()
        {
            return GetRemainingTimeText();
        }
    }
}