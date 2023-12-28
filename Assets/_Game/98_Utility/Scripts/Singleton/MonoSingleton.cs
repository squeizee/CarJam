using UnityEngine;

namespace Library.Utility.Scripts.Singleton
{
    public abstract class MonoSingleton<T> : MonoBehaviour where T : Component
    {
        public static T Instance
        {
            get
            {
                if (_instance != null)
                {
                    return _instance;
                }

                _instance = FindObjectOfType<T>();
                if (_instance == null)
                {
                    GameObject go = new GameObject();
                    go.name = $"[{typeof(T).Name}]";
                    _instance = go.AddComponent<T>();
                }

                if (_instance.transform.parent == null)
                {
                    DontDestroyOnLoad(_instance.gameObject);
                }

                return _instance;
            }
        }

        private static T _instance;

        //    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        public static void Clear()
        {
            _instance = null;
        }
    }
}