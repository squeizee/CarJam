using System;
using _Game._9_Marketplace.Scripts;
using _Game.Systems._CoreSystem;

namespace _Game._1_Analytics.Scripts
{
    public class MarketPlaceAnalytics
    {
        Dispatcher<MarketPlaceEvents> _dispatcher;

        public MarketPlaceAnalytics(Dispatcher<MarketPlaceEvents> dispatcher)
        {
            _dispatcher = dispatcher;

            dispatcher.Subscribe(MarketPlaceEvents.SkinBought, OnSkinbought);
            dispatcher.Subscribe(MarketPlaceEvents.EnvironmentBought, OnEnvironmentBought);
            dispatcher.Subscribe(MarketPlaceEvents.SpatulaBought, OnSpatulaBought);
        }

        public void OnDestroy()
        {
            _dispatcher.Unsubscribe(MarketPlaceEvents.SkinBought, OnSkinbought);
            _dispatcher.Unsubscribe(MarketPlaceEvents.EnvironmentBought, OnEnvironmentBought);
            _dispatcher.Unsubscribe(MarketPlaceEvents.SpatulaBought, OnSpatulaBought);
        }

        private void OnSpatulaBought(EventArgs obj)
        {
            var args = (MarketPlaceEventArgs)obj;
#if LK_HAS_LION_ANALYTICS
            LionStudios.Suite.Analytics.LionAnalytics.ItemCollected(new LionStudios.Suite.Analytics.Reward(args.MarketPlaceItem.ItemIndex.ToString(), "Spatula", 1));
#endif
        }

        private void OnSkinbought(EventArgs obj)
        {
            var args = (MarketPlaceEventArgs)obj;
#if LK_HAS_LION_ANALYTICS
            LionStudios.Suite.Analytics.LionAnalytics.ItemCollected(
                new LionStudios.Suite.Analytics.Reward(args.MarketPlaceItem.ItemIndex.ToString(), "Skin", 1));
#endif
        }

        private void OnEnvironmentBought(EventArgs obj)
        {
            var args = (MarketPlaceEventArgs)obj;
#if LK_HAS_LION_ANALYTICS
            LionStudios.Suite.Analytics.LionAnalytics.ItemCollected(
                new LionStudios.Suite.Analytics.Reward(args.MarketPlaceItem.ItemIndex.ToString(), "Environment", 1));
#endif
        }
    }
}