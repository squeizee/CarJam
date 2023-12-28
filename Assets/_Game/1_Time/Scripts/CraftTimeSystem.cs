using System;
using System.Collections;
using _Game.Systems._CoreSystem;
using _Game.Systems._CoreSystem.Scripts;
using Library.CoroutineSystem.Scripts;
using UnityEngine;

namespace _Game.Library.CraftTime
{
    public class CraftTimeSystem : BaseCraftSystem, ICraftSystem
    {
        public Dispatcher<TimeIntervals> Dispatcher = new Dispatcher<TimeIntervals>();
        private Coroutine _onFrameCoroutine;
        private Coroutine _onSecondFrameCoroutine;
        private Coroutine _onThreeSecondsFrameCoroutine;
        private Coroutine _onMinuteFrameCoroutine;

        public CraftTimeSystem()
        {
            Priority = 10;
        }

        public void OnInit()
        {
            IsInitialized = true;
            _onFrameCoroutine = CoroutineManager.BeginCoroutine(OnFrameTicker());
            _onSecondFrameCoroutine = CoroutineManager.BeginCoroutine(OnSecondFrameTicker());
            _onThreeSecondsFrameCoroutine = CoroutineManager.BeginCoroutine(OnThreeSecondsFrameTicker());
            _onMinuteFrameCoroutine = CoroutineManager.BeginCoroutine(OnMinuteFrameTicker());
        }

        public void OnDestroy()
        {
            CoroutineManager.EndCoroutine(_onFrameCoroutine);
            CoroutineManager.EndCoroutine(_onSecondFrameCoroutine);
            CoroutineManager.EndCoroutine(_onThreeSecondsFrameCoroutine);
            CoroutineManager.EndCoroutine(_onMinuteFrameCoroutine);
        }

        private IEnumerator OnFrameTicker()
        {
            while (true)
            {
                Dispatcher.Send(TimeIntervals.OnFrame, EventArgs.Empty);
                yield return new WaitForFixedUpdate();
            }
        }

        private IEnumerator OnSecondFrameTicker()
        {
            while (true)
            {
                Dispatcher.Send(TimeIntervals.OnSecond, EventArgs.Empty);
                yield return new WaitForSeconds(1);
            }
        }

        private IEnumerator OnThreeSecondsFrameTicker()
        {
            while (true)
            {
                Dispatcher.Send(TimeIntervals.On3Seconds, EventArgs.Empty);
                yield return new WaitForSeconds(3);
            }
        }

        private IEnumerator OnMinuteFrameTicker()
        {
            while (true)
            {
                Dispatcher.Send(TimeIntervals.OnMinute, EventArgs.Empty);
                yield return new WaitForSeconds(60);
            }
        }
    }


    public enum TimeIntervals
    {
        OnFrame,
        OnSecond,
        On3Seconds,
        OnMinute,
    }
}