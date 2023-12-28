using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game._0_CraftCore.Scripts.Core
{
    [CreateAssetMenu(fileName = "CraftCoreSo", menuName = "Craft/Core/CraftCoreSo")]
    public class CraftCoreSo : ScriptableSingleton<CraftCoreSo>
    {
        public GameMode GameMode;
    }

    public enum GameMode
    {
        GamePlay = 0,
        GamePlayTest = 1,
        LevelEditor = 2
    }
}