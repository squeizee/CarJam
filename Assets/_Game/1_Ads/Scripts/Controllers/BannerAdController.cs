using System;
using Modules.Shared.Utility;
using UnityEngine;

namespace _Game._1_Ads.Scripts
{
    public class BannerAdController
    {
        private static readonly Color BannerColor = new(0.9960784f, 0.9764706f, 9372549f, 1);

#if MAX_ADS
        public static event Action<MaxSdkBase.AdInfo> OnRevenuePaid;
#endif


        public string GetAdUnitId()
        {
#if UNITY_IOS
            return AdsSystemSo.Instance.IosBannerADUnitId;
#else
            return AdsSystemSo.Instance.AndroidBannerADUnitId;
#endif
        }

        public void Initialize()
        {
#if MAX_ADS
            // Banners are automatically sized to 320×50 on phones and 728×90 on tablets
            // You may call the utility method MaxSdkUtils.isTablet() to help with view sizing adjustments
            MaxSdk.CreateBanner(GetAdUnitId(), MaxSdkBase.BannerPosition.BottomCenter);
#endif
#if AMAZON_ADS
            AmazonController.Instance.LoadAmazonBannerAd(result =>
            {
                if (result.IsCompleted)
                {
                    MaxSdk.SetBannerLocalExtraParameter(ADUnitId, result.Key, result.ResponseObject);
                }

                MaxSdk.CreateBanner(ADUnitId, MaxSdkBase.BannerPosition.BottomCenter);
            });
#endif
#if MAX_ADS
            MaxSdk.SetBannerBackgroundColor(GetAdUnitId(), BannerColor);

            MaxSdkCallbacks.Banner.OnAdLoadedEvent += OnBannerAdLoadedEvent;
            MaxSdkCallbacks.Banner.OnAdLoadFailedEvent += OnBannerAdLoadFailedEvent;
            MaxSdkCallbacks.Banner.OnAdClickedEvent += OnBannerAdClickedEvent;
            MaxSdkCallbacks.Banner.OnAdRevenuePaidEvent += OnBannerAdRevenuePaidEvent;
            MaxSdkCallbacks.Banner.OnAdExpandedEvent += OnBannerAdExpandedEvent;
            MaxSdkCallbacks.Banner.OnAdCollapsedEvent += OnBannerAdCollapsedEvent;
#endif
        }


        public int GetHeight()
        {
            // float bannerHeight = MaxSdkUtils.GetAdaptiveBannerHeight(-1);
            // return (int)MaxSdk.GetBannerLayout(ADUnitId).height;

            // Banners are automatically sized to 320×50 on phones and 728×90 on tablets
            // You may call the utility method MaxSdkUtils.isTablet() to help with view sizing adjustments

#if MAX_ADS
            if (MaxSdkUtils.IsTablet())
            {
                return 90;
            }
            else
#endif
            {
                return 50;
            }
        }

        public void ShowBanner()
        {
#if MAX_ADS
            try
            {
                MaxSdk.ShowBanner(GetAdUnitId());
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
            }
#endif
        }

        public void HideBanner()
        {
#if MAX_ADS
            try
            {
                MaxSdk.HideBanner(GetAdUnitId());
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
            }
#endif
        }

        #region Event Methods (MAX_ADS)

#if MAX_ADS
        private void OnBannerAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
        }

        private void OnBannerAdLoadFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
        {
        }

        private void OnBannerAdClickedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
        }

        private void OnBannerAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            MainThreadDispatcher.Instance.RunOnMainThread(() => { OnRevenuePaid?.Invoke(adInfo); });
        }

        private void OnBannerAdExpandedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
        }

        private void OnBannerAdCollapsedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
        }
#endif

        #endregion
    }
}