using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game._21_TutorialHand.Scripts
{
    [CreateAssetMenu(fileName = "TutorialHandSo", menuName = "Craft/Other/TutorialHandSo")]
    public class TutorialHandSo : ScriptableSingleton<TutorialHandSo>
    {
        public GameObject TutorialHandPrefab;
        public AnimationCurve TutorialHandCurve;
        public float TutorialHandScale;
        public float TutorialHandDuration;
    }
}