using UnityEngine;

namespace _Game.Systems._CoreSystem.Scripts
{
    public class CraftCoreInitializerMono : MonoBehaviour
    {
        public void Start()
        {
            Initialize();
        }

        public void Initialize()
        {
            CraftCore.Dispatcher.Subscribe(CoreEventId.CraftCoreInitialized, OnCraftCoreInitialized);
            CraftCore.Init();
        }

        private void OnCraftCoreInitialized()
        {
            CraftCore.Dispatcher.Unsubscribe(CoreEventId.CraftCoreInitialized, OnCraftCoreInitialized);
        }
    }
}