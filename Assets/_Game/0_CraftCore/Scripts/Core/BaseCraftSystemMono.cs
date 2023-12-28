
using UnityEngine;

namespace _Game.Systems._CoreSystem.Scripts
{
    public class BaseCraftSystemMono : MonoBehaviour, ICraftSystem
    {
        private CraftCoreContext _craftCoreContext;
        public bool IsInitialized { get; set; }
        public int Priority { get; protected set; }

        public void Setup(CraftCoreContext context)
        {
            _craftCoreContext = context;
        }

        public CraftCoreContext GetContext()
        {
            return _craftCoreContext;
        }

        public string GetName()
        {
            return this.GetType().Name;
        }

    }
}