using _Game._0_CraftCore.Scripts.Core;
using _Game._1_Ads.Scripts;
using _Game._2_LinearLevel.Scripts;
using _Game._9_Marketplace.Scripts;
using _Game.Systems._CoreSystem.Scripts;
using Modules.Inventory;

namespace _Game._1_Analytics.Scripts
{
    public class AnalyticsSystem : BaseCraftSystem, ICraftSystem
    {
        public LevelAnalytics LevelAnalytics;
        private LionAnalyticsEventSender _eventSender;
        private MarketPlaceAnalytics _marketPlaceAnalytics;

        public void OnInit()
        {
#if LK_HAS_LION_ANALYTICS
            _eventSender = new LionAnalyticsEventSender();
            _eventSender.Initialize();
#endif

            var linearLevelSystem = GetContext().GetSystem<LinearLevelSystem>();
            LevelAnalytics = new LevelAnalytics(linearLevelSystem.Dispatcher, _eventSender);

            _marketPlaceAnalytics = new MarketPlaceAnalytics(Craft.Get<MarketPlaceSystem>().Dispatcher);
            Craft.Dispatcher.Subscribe(CoreEventId.GameStarted, SendGameStartedEvent);
            Craft.Get<AdsSystem>().RewardedAds.OnRewardedAdsShown += OnRewardedAdsShown;
#if LK_HAS_LION_ANALYTICS
            Craft.Get<CraftInventorySystem>().GetInventoryItem(ItemId.Currency1).OnAdded += _eventSender.OnCoinEarn;
            Craft.Get<CraftInventorySystem>().GetInventoryItem(ItemId.Currency1).OnSpent += _eventSender.OnCoinSpend;
#endif
        }

        private void OnRewardedAdsShown(string placement)
        {
            int progress = Craft.Get<LinearLevelSystem>().GetProgress(LinearLevelType.Normal);
            OnRewardedAdsShown(placement, progress);
        }

        public void OnRewardedAdsShown(string placement, int progress)
        {
#if LK_HAS_LION_ANALYTICS
            _eventSender.OnRewardedAdsShown(placement, progress);
#endif
        }

        public void SendGameStartedEvent()
        {
#if LK_HAS_LION_ANALYTICS
            _eventSender.SendGameStartedEvent();
#endif
        }

        public void OnDestroy()
        {
            LevelAnalytics.OnDestroy();
            _marketPlaceAnalytics.OnDestroy();
        }
    }
}