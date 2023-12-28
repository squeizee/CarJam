using _Game.Systems._CoreSystem.Scripts;
using UnityEngine;

namespace _Game._0_CraftCore.Scripts.Utility
{
    public class CraftGeneralSystem : BaseCraftSystemMono, ICraftSystem
    {
        public void OnInit()
        {
            // set aplication target frame rate to 60
            Application.targetFrameRate = 60;
            // disable logs 
            Debug.unityLogger.logEnabled = true;
        }
    }
}