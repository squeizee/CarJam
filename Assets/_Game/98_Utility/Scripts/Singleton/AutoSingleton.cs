using System;
using System.Diagnostics;
using UnityEngine;

namespace Modules.Shared.Utility
{
    public class AutoSingleton<T> where T : AutoSingleton<T>
    {
        private static readonly Lazy<T> _instance = new Lazy<T>(CreateInstanceOfT);

        public static T Instance => _instance.Value;

        private static T CreateInstanceOfT()
        {
            return Activator.CreateInstance(typeof(T), true) as T;
        }
    }

    public class AutoSingletonMono<T> : MonoBehaviour where T : AutoSingletonMono<T>
    {
        private static T _instance;

        public static T Instance
        {
            [DebuggerStepThrough]
            get
            {
                // Instance required for the first time, we look for it
                if (_instance == null && Application.isPlaying)
                {
                    var go = new GameObject("CRAFT_" + typeof(T).Name);
                    go.AddComponent<T>(); // _instance set by Awake() constructor
                }

                return _instance;
            }
        }

        protected virtual void Awake()
        {
            if (_instance != null)
            {
                return;
            }
            _instance = (T)this;
        }

        private void OnApplicationQuit()
        {
            _instance = null;
        }
    }
}