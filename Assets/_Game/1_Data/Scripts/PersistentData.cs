using Cysharp.Threading.Tasks;
using Newtonsoft.Json;
using UnityEngine;

namespace _Game.Library.PersistentDataNS.Scripts
{
    public class PersistentData<T> : ISaveLoad
    {
        public T Value
        {
            get
            {
                if (!_isLoaded)
                {
                    if (!PlayerPrefs.HasKey(_saveKey))
                    {
                        Save();
                    }

                    Load();
                }

                return _value;
            }
            set
            {
                _value = value;
                Save();
            }
        }

        protected T _value;
        protected readonly string _saveKey;

        protected bool _isLoaded;
        public bool isInit = false;

        public PersistentData(string saveKey, T defaultValue)
        {
            _value = defaultValue;
            _saveKey = saveKey;
            SaveAfterFrame();
            PersistantDataCache.AddToList(this);
        }

        public virtual void Save()
        {
            string json = JsonConvert.SerializeObject(_value, Formatting.Indented);
            PlayerPrefs.SetString(_saveKey, json);
            PlayerPrefs.Save();
        }

        private async void SaveAfterFrame()
        {
            await UniTask.WaitForFixedUpdate();
            if (!PlayerPrefs.HasKey(_saveKey))
            {
                Save();
            }

            Load();
            isInit = true;
        }

        public virtual void Load()
        {
            _isLoaded = true;

            if (!PlayerPrefs.HasKey(_saveKey))
            {
                return;
            }

            string json = PlayerPrefs.GetString(_saveKey);
            _value = JsonConvert.DeserializeObject<T>(json);
        }

        public bool IsInit()
        {
            return isInit;
        }

        public static implicit operator T(PersistentData<T> persistentData)
        {
            return persistentData.Value;
        }
    }
}