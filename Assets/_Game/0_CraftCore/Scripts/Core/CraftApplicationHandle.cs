using UnityEngine;
using System;
using _Game.Systems._CoreSystem;
using _Game.Systems._CoreSystem.Scripts;

namespace LionStudios.Suite.Core
{
    public class CraftApplicationHandle : MonoBehaviour
    {
        private Dispatcher<CoreEventId> _dispatcher;

        public static void Create(Dispatcher<CoreEventId> dispatcher)
        {
            var applicationHandle = new GameObject("Craft Application Handle").AddComponent<CraftApplicationHandle>();
            applicationHandle.Initialize(dispatcher);
            DontDestroyOnLoad(applicationHandle.gameObject);
        }

        public void Initialize(Dispatcher<CoreEventId> dispatcher)
        {
            _dispatcher = dispatcher;
            Application.quitting += OnAppQuit;
        }

        private void OnAppQuit()
        {
            _dispatcher.Send(CoreEventId.AppQuit, EventArgs.Empty);
        }

        private void OnDestroy()
        {
            Application.quitting -= OnAppQuit;
        }

        private void OnApplicationPause(bool pause)
        {
            if (pause)
            {
                _dispatcher.Send(CoreEventId.AppPaused, EventArgs.Empty);
            }
        }

        private void OnApplicationFocus(bool hasFocus)
        {
            if (!hasFocus)
            {
                _dispatcher.Send(CoreEventId.AppOutOfFocus, EventArgs.Empty);
            }
        }
    }
}