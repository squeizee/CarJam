using System;
using System.Collections.Generic;
using Library.Utility.Scripts.Singleton;

namespace Modules.Shared.Utility
{
    public class MainThreadDispatcher : MonoSingleton<MainThreadDispatcher>
    {
        private readonly List<Action> _activeActions = new();
        private readonly List<Action> _currentActions = new();

        private void Awake()
        {
            DontDestroyOnLoad(gameObject);
        }

        private void Update()
        {
            TickUpdateDispatcher();
        }

        public void RunOnMainThread(Action action)
        {
            lock (_activeActions)
            {
                _activeActions.Add(action);
            }
        }

        private void TickUpdateDispatcher()
        {
            lock (_activeActions)
            {
                _currentActions.Clear();
                _currentActions.AddRange(_activeActions);
                _activeActions.Clear();
            }

            foreach (var action in _currentActions)
            {
                action?.Invoke();
            }
        }
    }
}