using System;
using System.Collections;
using Library.CoroutineSystem.Scripts;
using UnityEngine;

namespace _Game.Systems._CraftCore.Scripts.Utility
{
    public class CraftQuartz
    {
        private float _delayInSeconds;
        private Action _action;
        private Coroutine _coroutine;

        public CraftQuartz(float periodInSeconds, Action action)
        {
            _delayInSeconds = periodInSeconds;
            _action = action;
            Start();
        }

        public Coroutine Start()
        {
            _coroutine = CoroutineManager.BeginCoroutine(QuartzCoroutine());
            return _coroutine;
        }

        public void Stop()
        {
            if (_coroutine != null)
            {
                CoroutineManager.EndCoroutine(_coroutine);
            }
        }

        private IEnumerator QuartzCoroutine()
        {
            while (true)
            {
                yield return new WaitForSeconds(_delayInSeconds);
                _action?.Invoke();
            }
        }

        public Coroutine GetCoroutine()
        {
            return _coroutine;
        }
    }
}