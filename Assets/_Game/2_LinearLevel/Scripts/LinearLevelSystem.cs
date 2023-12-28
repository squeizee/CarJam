using System.Collections.Generic;
using System.Threading.Tasks;
using _Game.Library.PersistentDataNS.Scripts;
using _Game.Systems._CoreSystem;
using _Game.Systems._CoreSystem.Scripts;
using Library.ScreenManagement.Scripts;
using UnityEngine;

namespace _Game._2_LinearLevel.Scripts
{
    public class LinearLevelSystem : BaseCraftSystem, ICraftSystem
    {
        public Dispatcher<LinearLevelEvents> Dispatcher = new Dispatcher<LinearLevelEvents>();
        public LinearLevelSo So => LinearLevelSo.Instance;

        public PersistentData<LinearLevelProgressData> ProgressData =
            new PersistentData<LinearLevelProgressData>($"{nameof(LinearLevelSystem)}_{nameof(ProgressData)}",
                new LinearLevelProgressData());

        private BossLevelConfig BossLevelConfig => So.BossLevelConfig;

        public Task Init()
        {
            // get current Level and wait for it 
            return GetCurrentGamePlay(LinearLevelType.Normal);
        }

        public void OnInit()
        {
            
        }

        public Task<GameObject> GetCurrentGamePlay(LinearLevelType levelType)
        {
            return GetGamePlay(levelType, GetProgress(levelType));
        }

        public Task<GameObject> GetGamePlay(LinearLevelType levelType, int level)
        {
            return So.GetLevelOrderData(levelType).GetLevel(level);
        }

        public int GetProgress(LinearLevelType levelType)
        {
            if (levelType == LinearLevelType.Boss)
            {
                return So.BossLevelConfig.GetBossLevelIndex(GetProgress(LinearLevelType.Normal));
            }

            return ProgressData.Value.GetProgress(levelType);
        }

        public void IncreaseProgress(LinearLevelType levelType)
        {
            ProgressData.Value.IncreaseProgress(levelType);
        }

        public void SetProgress(LinearLevelType levelType, int value)
        {
            ProgressData.Value.SetProgress(levelType, value);
        }

        public List<BaseScreen> GetScreens()
        {
            return So.Screens;
        }
        
#if FIREBASE_INSTALLED
        public void UpdateConfigs(IDictionary<string, Firebase.RemoteConfig.ConfigValue> defaultInstanceAllValues)
        {
           
        }
#endif
        public void SetDefaults(Dictionary<string, object> defaults)
        {
            
        }
    }
}