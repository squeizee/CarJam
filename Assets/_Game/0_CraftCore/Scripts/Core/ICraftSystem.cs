using System.Collections.Generic;
using System.Threading.Tasks;
using Library.ScreenManagement.Scripts;
namespace _Game.Systems._CoreSystem.Scripts
{
    public interface ICraftSystem
    {
        public bool IsInitialized { get; set; }
        public int Priority { get; }

        public void Setup(CraftCoreContext context);

        public void OnInit()
        {
        }

        public Task Init()
        {
            IsInitialized = true;
            return Task.CompletedTask;
        }

        public void OnDestroy()
        {
        }

        public List<BaseScreen> GetScreens()
        {
            return new List<BaseScreen>();
        }

        public CraftCoreContext GetContext();

        public string GetName()
        {
            return this.GetType().Name;
        }
#if FIREBASE_INSTALLED
        void UpdateConfigs(IDictionary<string, Firebase.RemoteConfig.ConfigValue> defaultInstanceAllValues)
        {
            
        }  
#endif
        
        void SetDefaults(Dictionary<string, object> defaults)
        {
            
        }
    }
}