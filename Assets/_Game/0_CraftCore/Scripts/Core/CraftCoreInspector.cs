using _Game.Systems._CoreSystem.Scripts;
using Sirenix.OdinInspector;
using UnityEngine;

namespace _Game.Systems._CraftCore.Scripts.Core
{
    public class CraftCoreInspector : BaseCraftSystemMono, ICraftSystem
    {
        [Button]
        public void LogAllCraftSystems()
        {
            foreach (var craftSystem in CraftCore.Context.Systems)
            {
                Debug.Log(craftSystem.GetName());
            }
        }
    }
}