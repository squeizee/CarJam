using System;
using _Game._0_CraftCore.Scripts.Core;
using _Game._1_Ads.Scripts;
using DG.Tweening;
using Modules.Shared.Utility;
using UnityEngine;

namespace Modules.Ads.Scripts
{
    public class InterstitialAdsController
    {
        private int ShowInterval => AdsSystemSo.Instance.Config.InterIntervalInSeconds;

#if HAS_LION_APPLOVIN_SDK
        public static event Action<MaxSdkBase.AdInfo> OnDisplayStarted;
        public static event Action<MaxSdkBase.AdInfo> OnRevenuePaid;
#endif
        public event Action OnInterCompleted;

        private int _retryAttempt;
        private float _lastShowTime;

        public void Initialize()
        {
#if HAS_LION_APPLOVIN_SDK
            MaxSdkCallbacks.Interstitial.OnAdLoadedEvent += OnInterstitialLoadedEvent;
            MaxSdkCallbacks.Interstitial.OnAdLoadFailedEvent += OnInterstitialLoadFailedEvent;
            MaxSdkCallbacks.Interstitial.OnAdDisplayedEvent += OnInterstitialDisplayedEvent;
            MaxSdkCallbacks.Interstitial.OnAdHiddenEvent += OnInterstitialHiddenEvent;
            MaxSdkCallbacks.Interstitial.OnAdDisplayFailedEvent += OnInterstitialAdFailedToDisplayEvent;
            MaxSdkCallbacks.Interstitial.OnAdRevenuePaidEvent += OnInterstitialAdRevenuePaidEvent;
#endif
            LoadInterstitial();
        }

        public string GetAdUnitId()
        {
#if UNITY_IOS
            return AdsSystemSo.Instance.IosInterADUnitId;
#else
            return AdsSystemSo.Instance.AndroidInterADUnitId;
#endif
        }

        public bool CanShowInterstitial()
        {
#if HAS_LION_APPLOVIN_SDK
            return (Time.time > _lastShowTime + ShowInterval) &&
                   MaxSdk.IsInterstitialReady(GetAdUnitId());
#else
            return false;
#endif
        }

        public void ShowInterstitial(Action onCompleted)
        {
#if HAS_LION_APPLOVIN_SDK
            if (MaxSdk.IsInterstitialReady(GetAdUnitId()))
            {
                if (CanShowInterstitial())
                {
                    ForceShowInterstitial(onCompleted);
                    return;
                }
            }
#endif
            onCompleted?.Invoke();
            OnInterCompleted = null;
        }

        public void ForceShowInterstitial(Action onCompleted)
        {
#if HAS_LION_APPLOVIN_SDK
            // SatoriEventsController.SatoriAdStartedEvent("inter");
            OnInterCompleted = onCompleted;
            Craft.GetUI<AdBreakUI>().Activate();
            DOVirtual.DelayedCall(1.3f, (() => MaxSdk.ShowInterstitial(GetAdUnitId())));

            _lastShowTime = Time.time;
#endif
        }

        private void LoadInterstitial()
        {
#if AMAZON_ADS
            if (!AmazonController.Instance.IsAmazonStaticInterstitialAdLoaded)
            {
                AmazonController.Instance.LoadAmazonStaticInterstitialAd(result =>
                {
                    if (result.IsCompleted)
                    {
                        MaxSdk.SetInterstitialLocalExtraParameter(GetAdUnitId(), result.Key, result.ResponseObject);
                    }

                    MaxSdk.LoadInterstitial(GetAdUnitId());
                });
            }
            else
#endif
#if HAS_LION_APPLOVIN_SDK
            {
                MaxSdk.LoadInterstitial(GetAdUnitId());
            }
#endif
        }

        #region Event Methods 
#if HAS_LION_APPLOVIN_SDK
        private void OnInterstitialLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            // Interstitial ad is ready for you to show. MaxSdk.IsInterstitialReady(adUnitId) now returns 'true'
            // Reset retry attempt
            MainThreadDispatcher.Instance.RunOnMainThread(() => { _retryAttempt = 0; });
        }

        private void OnInterstitialLoadFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
        {
            // Interstitial ad failed to load 
            // AppLovin recommends that you retry with exponentially higher delays, up to a maximum delay (in this case 64 seconds)
            MainThreadDispatcher.Instance.RunOnMainThread(() =>
            {
                _retryAttempt++;
                double retryDelay = Math.Pow(2, Math.Min(6, _retryAttempt));
                DOVirtual.DelayedCall((float)retryDelay, LoadInterstitial);
            });
        }

        private void OnInterstitialDisplayedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            MainThreadDispatcher.Instance.RunOnMainThread(() => { OnDisplayStarted?.Invoke(adInfo); });
        }

        private void OnInterstitialAdFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo,
            MaxSdkBase.AdInfo adInfo)
        {
            MainThreadDispatcher.Instance.RunOnMainThread(() =>
            {
                // Interstitial ad failed to display. AppLovin recommends that you load the next ad.
                LoadInterstitial();
                Craft.GetUI<AdBreakUI>().Deactivate();

                OnInterCompleted?.Invoke();
                OnInterCompleted = null;
            });
        }

        private void OnInterstitialAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            MainThreadDispatcher.Instance.RunOnMainThread(() => { OnRevenuePaid?.Invoke(adInfo); });
        }

        private void OnInterstitialHiddenEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            MainThreadDispatcher.Instance.RunOnMainThread(() =>
            {
                // Interstitial ad is hidden. Pre-load the next ad.
                LoadInterstitial();
                Craft.GetUI<AdBreakUI>().Deactivate();
                OnInterCompleted?.Invoke();
                OnInterCompleted = null;
            });
        }
#endif
        #endregion

    }
}