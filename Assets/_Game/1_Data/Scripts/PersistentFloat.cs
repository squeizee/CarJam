using UnityEngine;

namespace _Game.Library.PersistentDataNS.Scripts
{
    public class PersistentFloat : PersistentData<float>
    {
        public PersistentFloat(string saveKey, float defaultValue = default) : base(saveKey, defaultValue) { }

        public override void Save()
        {
            PlayerPrefs.SetFloat(_saveKey, _value);
        }

        public override void Load()
        {
            _value = PlayerPrefs.GetFloat(_saveKey);
        }
    }
}