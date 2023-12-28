using System.Collections.Generic;
using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace Library.ScreenManagement.Scripts
{
    [CreateAssetMenu(fileName = "CraftUISystemSo", menuName = "Craft/CraftUISystem/CraftUISystemSo")]
    public class CraftUISystemSo : ScriptableSingleton<CraftUISystemSo>
    {
        public GameObject UIParentPrefab;
        public  List<BaseScreen> Screens = new List<BaseScreen>();
        public GameObject UISoundPrefab;
    }
}