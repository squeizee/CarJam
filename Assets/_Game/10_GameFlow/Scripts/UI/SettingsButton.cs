using _Game._0_CraftCore.Scripts.Core;
using UnityEngine;

namespace _Game.Systems.GameFlow.Scripts.UI
{
    public class SettingsButton : MonoBehaviour
    {
        public bool ShouldOpenHome;

        public void OnSettingsButtonDown()
        {
            Craft.OpenUI<SettingsUI>(new SettingsUIArgs()
            {
                ShouldOpenHome = ShouldOpenHome
            });
        }
    }
}