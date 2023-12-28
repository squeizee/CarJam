using UnityEngine;

namespace _Game.Library.PersistentDataNS.Scripts
{
    public class PersistentInt : PersistentData<int>
    {
        public PersistentInt(string saveKey, int defaultValue = default) : base(saveKey, defaultValue) { }

        public override void Save()
        {
            PlayerPrefs.SetInt(_saveKey, _value);
        }

        public override void Load()
        {
            _value = PlayerPrefs.GetInt(_saveKey);
        }
    }
}