using UnityEngine;

namespace _Game.Library.PersistentDataNS.Scripts
{
    public class PersistentString : PersistentData<string>
    {
        public PersistentString(string saveKey, string value = default) : base(saveKey, value)
        {
        }

        public override void Save()
        {
            PlayerPrefs.SetString(_saveKey, _value);
        }

        public override void Load()
        {
            _value = PlayerPrefs.GetString(_saveKey);
        }
    }
}