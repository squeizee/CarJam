using System.Collections.Generic;
using _Game._0_CraftCore.Scripts.Core;
using _Game._1_Config.Scripts;
using _Game._2_LinearLevel.Scripts;
using _Game.Systems._CoreSystem.Scripts;
using _Game.Systems.GameFlow.Scripts.Commands;
using DG.Tweening;
using Library.ScreenManagement.Scripts;

namespace _Game.Systems.GameFlow.Scripts
{
    public class GameFlowSystem : BaseCraftSystem, ICraftSystem
    {
        private GameFlowSo So => GameFlowSo.Instance;

        public void OnInit()
        {
            GetContext().Dispatcher.Subscribe(CoreEventId.CraftCoreInitialized, OnCoreInitialized);
        }

        public void OnCoreInitialized()
        {
            if (Craft.Get<CraftConfigSystem>().IsConfigFetched)
            {
                OnConfigFetched();
            }
            else
            {
                GetContext().Dispatcher.Subscribe(CoreEventId.OnConfigFetched, OnConfigFetched);
            }
                
        }

        private void OnConfigFetched()
        {
            GetContext().Dispatcher.Unsubscribe(CoreEventId.OnConfigFetched, OnConfigFetched);

            if (CraftCore.IsInitialized == false)
            {
                GetContext().Dispatcher.Subscribe(CoreEventId.CraftCoreInitialized, StartGameWhenMAXInitialized);
            }
            else
            {
                StartGameWhenMAXInitialized();
            }
        }

        private void StartGameWhenMAXInitialized()
        {
#if MAX_ADS
            GetContext().Dispatcher.Unsubscribe(CoreEventId.CraftCoreInitialized, StartGameWhenMAXInitialized);

            if (MaxSdk.IsInitialized())
            {
                StartGameWithDelay();
            }
            else
            {
                MaxSdkCallbacks.OnSdkInitializedEvent += OnMaxSdkInitialized;
            }
#else
            StartGameWithDelay();
#endif
        }
#if MAX_ADS
        private void OnMaxSdkInitialized(MaxSdkBase.SdkConfiguration obj)
        {
            MaxSdkCallbacks.OnSdkInitializedEvent -= OnMaxSdkInitialized;
            StartGameWithDelay();
        }
#endif
        private void StartGameWithDelay()
        {
            DOVirtual.DelayedCall(0.5f, () => new OnGameStartCommand().Execute());
        }

        public List<BaseScreen> GetScreens()
        {
            return So.Screens;
        }

        public bool ShouldReturnToRoadMap(int progress)
        {
            int OfferStartProgress = So.GameFlowSystemConfig.RoadMapShowLevel;
            int OfferPeriod = So.GameFlowSystemConfig.RoadMapReturnPeriod;
            return progress >= OfferStartProgress && (progress - OfferStartProgress) % OfferPeriod == 0 &&
                   So.GameFlowSystemConfig.IsRoadMapEnabled;
        }

        public bool ShouldOpenRoadMapOnStart()
        {
            int OfferStartProgress = So.GameFlowSystemConfig.RoadMapShowLevel;
            return Craft.Get<LinearLevelSystem>().GetProgress(LinearLevelType.Normal) >= OfferStartProgress &&
                   So.GameFlowSystemConfig.IsRoadMapEnabled;
        }
    }
}