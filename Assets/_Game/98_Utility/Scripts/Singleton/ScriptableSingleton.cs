using System.Linq;
using UnityEngine;

namespace Library.Utility.Scripts.Singleton
{
    [CreateAssetMenu(fileName = "ScriptableSingleton", menuName = "Craft/Other/ScriptableSingleton")]
    public class ScriptableSingleton<T> : ScriptableObject where T : ScriptableObject
    {
        public static T Instance
        {
            get
            {
                if (_instance == null)
                {
                    string path = typeof(T).ToString().Split(".").Last();
                    _instance = Resources.Load<T>(path);
                }

                return _instance;
            }
        }

        private static T _instance;
    }
}