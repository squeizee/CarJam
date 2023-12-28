using UnityEngine;

namespace _Game.Library.PersistentDataNS.Scripts
{
    public class PersistentBool : PersistentData<bool>
    {
        public PersistentBool(string saveKey, bool defaultValue = default) : base(saveKey, defaultValue) { }

        public override void Save()
        {
            PlayerPrefs.SetInt(_saveKey, _value ? 1 : 0);
        }

        public override void Load()
        {
            _value = PlayerPrefs.GetInt(_saveKey) == 1;
        }
    }
}