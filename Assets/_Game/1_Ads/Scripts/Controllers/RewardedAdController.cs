using System;
using _Game._0_CraftCore.Scripts.Core;
using _Game._1_CraftUI.Scripts.Utility;
using DG.Tweening;
using Modules.Shared.Utility;
using UnityEngine;

namespace _Game._1_Ads.Scripts
{
    public class RewardedAdController
    {
        private const float RecentShowCheckInterval = 60;
#if HAS_LION_APPLOVIN_SDK
        public event Action<MaxSdkBase.AdInfo> OnWatched;
        public event Action<MaxSdkBase.AdInfo> OnRevenuePaid;
#endif
        public event Action<string> OnRewardedAdsShown;

        public event Action<bool> OnCompleted;

        private int _retryAttempt;
        private float _lasShowTime;
        private string _lastPlacement;

        public void Initialize()
        {
#if HAS_LION_APPLOVIN_SDK
            MaxSdkCallbacks.Rewarded.OnAdLoadedEvent += OnRewardedAdLoadedEvent;
            MaxSdkCallbacks.Rewarded.OnAdLoadFailedEvent += OnRewardedAdLoadFailedEvent;
            MaxSdkCallbacks.Rewarded.OnAdRevenuePaidEvent += OnRewardedAdRevenuePaidEvent;
            MaxSdkCallbacks.Rewarded.OnAdHiddenEvent += OnRewardedAdHiddenEvent;
            MaxSdkCallbacks.Rewarded.OnAdDisplayFailedEvent += OnRewardedAdFailedToDisplayEvent;
            MaxSdkCallbacks.Rewarded.OnAdReceivedRewardEvent += OnRewardedAdReceivedRewardEvent;
#endif
            LoadRewarded();
        }

        public string GetAdUnitId()
        {
#if UNITY_IOS
            return AdsSystemSo.Instance.IosRewardedADUnitId;
#else
            return AdsSystemSo.Instance.AndroidRewardedADUnitId;
#endif
        }

        public bool IsRewardedShownRecently()
        {
            return Time.time < _lasShowTime + RecentShowCheckInterval;
        }

        public bool IsRewardedLoaded()
        {
#if HAS_LION_APPLOVIN_SDK
            return MaxSdk.IsRewardedAdReady(GetAdUnitId());
#else 
            return false;
#endif
        }

        public void ShowRewarded(Action<bool> onComplete, string placement)
        {
            OnCompleted = onComplete;
            _lastPlacement = placement;
#if HAS_LION_APPLOVIN_SDK
            if (IsRewardedLoaded())
            {
                _lasShowTime = Time.time;
                MaxSdk.ShowRewardedAd(GetAdUnitId(), placement);
            }
            else
#endif
            {
                Craft.GetUI<WarningUI>().ShowWarning("Ad Not Ready");
                OnCompleted?.Invoke(false);
                OnCompleted = null;
            }
        }

        private void LoadRewarded()
        {
#if AMAZON_ADS
            if (!AmazonController.Instance.IsAmazonRewardedAdLoaded)
            {
                AmazonController.Instance.LoadAmazonRewardedAd(result =>
                {
                    if (result.IsCompleted)
                    {
                        Debug.Log(result.Key);
                        if (result.ResponseObject is AdError adError)
                        {
                            Debug.Log(adError.GetMessage());
                        }

                        MaxSdk.SetRewardedAdLocalExtraParameter(ADUnitId, result.Key, result.ResponseObject);
                    }

                    MaxSdk.LoadRewardedAd(ADUnitId);
                });
            }
            else
#endif
#if HAS_LION_APPLOVIN_SDK
            {
                MaxSdk.LoadRewardedAd(GetAdUnitId());
            }
#endif
        }

        #region Event Methods
#if HAS_LION_APPLOVIN_SDK
        private void OnRewardedAdLoadedEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            // Rewarded ad is ready for you to show. MaxSdk.IsRewardedAdReady(adUnitId) now returns 'true'.

            // Reset retry attempt
            MainThreadDispatcher.Instance.RunOnMainThread(() => { _retryAttempt = 0; });
        }

        private void OnRewardedAdLoadFailedEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo)
        {
            // Rewarded ad failed to load 
            // AppLovin recommends that you retry with exponentially higher delays, up to a maximum delay (in this case 64 seconds).

            MainThreadDispatcher.Instance.RunOnMainThread(() =>
            {
                _retryAttempt++;
                double retryDelay = Math.Pow(2, Math.Min(6, _retryAttempt));
                DOVirtual.DelayedCall((float)retryDelay, LoadRewarded);
            });
        }

        private void OnRewardedAdFailedToDisplayEvent(string adUnitId, MaxSdkBase.ErrorInfo errorInfo,
            MaxSdkBase.AdInfo adInfo)
        {
            // Rewarded ad failed to display. AppLovin recommends that you load the next ad.
            MainThreadDispatcher.Instance.RunOnMainThread(() => { LoadRewarded(); });
        }

        private void OnRewardedAdHiddenEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            // Rewarded ad is hidden. Pre-load the next ad
            MainThreadDispatcher.Instance.RunOnMainThread(() =>
            {
                LoadRewarded();
                if (OnCompleted != null)
                {
                    OnCompleted?.Invoke(false);
                }

                OnCompleted = null;
            });
        }

        private void OnRewardedAdReceivedRewardEvent(string adUnitId, MaxSdk.Reward reward, MaxSdkBase.AdInfo adInfo)
        {
            // The rewarded ad displayed and the user should receive the reward.
            MainThreadDispatcher.Instance.RunOnMainThread(() =>
            {
                OnRewardedAdsShown?.Invoke(_lastPlacement);
                OnWatched?.Invoke(adInfo);
                if (OnCompleted != null)
                {
                    OnCompleted?.Invoke(true);
                }

                OnCompleted = null;
            });
        }

        private void OnRewardedAdRevenuePaidEvent(string adUnitId, MaxSdkBase.AdInfo adInfo)
        {
            MainThreadDispatcher.Instance.RunOnMainThread(() => { OnRevenuePaid?.Invoke(adInfo); });
        }
#endif
        #endregion

    }
}