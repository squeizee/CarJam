using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game._1_Effects.Scripts
{
    [CreateAssetMenu(fileName = "EffectsSystemSo", menuName = "Craft/Other/EffectsSystemSo")]
    public class EffectsSystemSo : ScriptableSingleton<EffectsSystemSo>
    {
        public GameObject ConfettiPrefab;
        public Vector3 InitialConfettiPosition;
    }
}