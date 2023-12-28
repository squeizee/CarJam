using System.Collections.Generic;
using Library.ScreenManagement.Scripts;
using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game._2_LinearLevel.Scripts.ChallangeLevel
{
    [CreateAssetMenu(fileName = "ChallengeSystemSo", menuName = "Craft/Other/ChallengeSystemSo")]
    public class ChallengeSystemSo : ScriptableSingleton<ChallengeSystemSo>
    {
        public List<BaseScreen> Screens;

    }
}