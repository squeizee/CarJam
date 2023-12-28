// #define MAX_ADS
// #define ADJUST_ADS
using System;
using System.Collections;
using System.Collections.Generic;
using _Game._0_CraftCore.Scripts.Core;
using _Game._1_IAP.Scripts;
using _Game._2_LinearLevel.Scripts;
using _Game.Library.PersistentDataNS.Scripts;
using _Game.Systems._CoreSystem.Scripts;
using DG.Tweening;
using Library.CoroutineSystem.Scripts;
using Library.ScreenManagement.Scripts;
using Modules.Ads.Scripts;
using UnityEngine;

namespace _Game._1_Ads.Scripts
{
    public class AdsSystem : BaseCraftSystemMono, ICraftSystem
    {
        public event Action OnBannerShow;
        public event Action OnBannerHide;

        public PersistentData<AdsSystemData> Data =
            new PersistentData<AdsSystemData>($"{nameof(AdsSystem)}_{nameof(AdsSystemData)}", new AdsSystemData());

        private InterstitialAdsController _interAds = new InterstitialAdsController();
        public RewardedAdController RewardedAds = new RewardedAdController();
        private BannerAdController _bannerAds = new BannerAdController();

        public AdsSystemSo So => AdsSystemSo.Instance;

        public void OnInit()
        {
            GetContext().Dispatcher.Subscribe(CoreEventId.GameStarted, OnGameStarted);
        }

        public void OnGameStarted()
        {
            CoroutineManager.BeginCoroutine(InitializeCoroutine());
            Craft.Get<IAPSystem>().Dispatcher.Subscribe(IAPEvents.OnIapDone, OnIapDone);
        }

        private void OnIapDone()
        {
            Data.Value.LastPurchaseTime = DateTime.UtcNow;
        }

        private bool IsEnoughTimePassedSinceLastIAP()
        {
            return (DateTime.UtcNow - Data.Value.LastPurchaseTime).TotalMinutes > 30;
        }

        private IEnumerator InitializeCoroutine()
        {
            yield return new WaitForSeconds(2f);

            RewardedAds.Initialize();

            if (Data.Value.IsNoAdsPurchased == false)
            {
                yield return new WaitForSeconds(2f);
                _bannerAds.Initialize();

                yield return new WaitForSeconds(2f);
                _interAds.Initialize();
            }
        }

        public void EnableNoAds()
        {
            Data.Value.IsNoAdsPurchased = true;

            HideBannerAd();
        }

        public bool CanShowInterstitialAd()
        {
            return _interAds.CanShowInterstitial() && RewardedAds.IsRewardedShownRecently() == false;
        }

        public void ShowInterstitialAd(Action onCompleted)
        {
            if (Data.Value.IsNoAdsPurchased)
            {
                onCompleted?.Invoke();
                return;
            }

            if (Craft.Get<LinearLevelSystem>().GetProgress(LinearLevelType.Normal) <=
                So.Config.FirstLevelToShowInters
               )
            {
                onCompleted?.Invoke();
                return;
            }

            if (IsEnoughTimePassedSinceLastIAP() == false)
            {
                onCompleted?.Invoke();
                return;
            }

            if (CanShowInterstitialAd())
            {
                _interAds.ShowInterstitial(onCompleted);
            }
            else
            {
                onCompleted?.Invoke();
            }
        }

        public void ForceShowInterstitialAd(Action onCompleted)
        {
            _interAds.ForceShowInterstitial(onCompleted);
        }

        public bool CanShowRewardedAd()
        {
            return RewardedAds.IsRewardedLoaded();
        }

        public void ShowRewardedAd(Action<bool> action, string placement)
        {
            RewardedAds.ShowRewarded(action, placement);
        }

        public void ShowBannerAd()
        {
            if (Data.Value.IsNoAdsPurchased)
            {
                return;
            }

            _bannerAds.ShowBanner();
            OnBannerShow?.Invoke();
        }

        public void ForceShowBannerAds()
        {
            _bannerAds.ShowBanner();
            OnBannerShow?.Invoke();
        }

        public void HideBannerAd()
        {
            _bannerAds.HideBanner();
            OnBannerHide?.Invoke();
        }

        public List<BaseScreen> GetScreens()
        {
            return So.Screens;
        }

    }
}