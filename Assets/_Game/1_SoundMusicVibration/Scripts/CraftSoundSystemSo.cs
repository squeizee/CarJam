using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game._1_SoundMusicVibration.Scripts
{
    [CreateAssetMenu(fileName = "CraftSoundSystemSo", menuName = "Craft/Other/CraftSoundSystemSo")]
    public class CraftSoundSystemSo : ScriptableSingleton<CraftSoundSystemSo>
    {
        public CoinSoundEffect CoinSoundEffect;
    }
}