using System.Threading.Tasks;
using _Game.Systems._CoreSystem.Scripts;
using UnityEngine;
using SystemInfo = UnityEngine.Device.SystemInfo;
#if HAS_LION_APPLOVIN_SDK
namespace _Game._0_CraftCore.Scripts.Utility
{
    public class MaxSDKInitializer : BaseCraftSystem, ICraftSystem
    {
        private string _maxSdkyKey =
            "i_Md25utuR4f9ayXoOJqAWA5yDzTT7qGaePrEMfDvObrJzNpbGt_Tg36TJzOusE2ba01Pp2QXleRw_F20gIaV7";

        // override priority
        public MaxSDKInitializer()
        {
            Priority = 0;
        }

        public Task Init()
        {
            MaxSdkCallbacks.OnSdkInitializedEvent += OnMaxSdkCallbacksSdkInitializedEvent;

            MaxSdk.SetSdkKey(_maxSdkyKey);
            MaxSdk.SetUserId(SystemInfo.deviceUniqueIdentifier);
            MaxSdk.SetVerboseLogging(true);
            MaxSdk.InitializeSdk();
            
            return Task.CompletedTask;
        }

        private void OnMaxSdkCallbacksSdkInitializedEvent(MaxSdkBase.SdkConfiguration obj)
        {
            Debug.Log("MaxSdk Initialized");
        }
    }
}
#endif