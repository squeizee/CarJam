//#define AMAZON_ADS

using System;

#if AMAZON_ADS
using AmazonAds;
#endif
using Library.Utility.Scripts.Singleton;
using Modules.Shared.Utility;
using UnityEngine;

namespace Modules.Shared.Controller
{
#if AMAZON_ADS
    public class AmazonRequestResult
    {
        public readonly bool IsCompleted;
        public readonly string Key;
        public readonly object ResponseObject;

        public AmazonRequestResult(bool isCompleted, string key, object responseObject)
        {
            IsCompleted = isCompleted;
            Key = key;
            ResponseObject = responseObject;
        }
    }

    public class AmazonController : MonoSingleton<AmazonController>
    {
#if UNITY_ANDROID
        private const string AmazonAppId = "cc5c9e65-d71a-409d-9457-ea127b2648d7";
        private const string AmazonBannerAdId = "ef177dfc-2e06-49fb-abbf-321e66cde9cc";
        private const string AmazonInterstitialAdId = "46e1b1ce-f100-4e44-963e-ed4ad9169dea";
        private const string AmazonRewardedAdId = "94f5b3e5-d829-4a8e-8b91-8858bab4acb7";
#else
        private const string AmazonAppId = "8eed7aa1-5653-4909-824d-8f5e0b17a308";
        private const string AmazonBannerAdId = "29867c93-0a0c-461e-adb8-23c7bc97c8d4";
        private const string AmazonInterstitialAdId = "8cc9f0d5-4bdb-4b71-acc0-de4c04350c54";
        private const string AmazonRewardedAdId = "0d0362b0-19f0-4f7d-b56e-07e9d86cf368";
#endif

        public bool IsAmazonBannerAdLoaded { get; private set; }
        public bool IsAmazonStaticInterstitialAdLoaded { get; private set; }
        public bool IsAmazonVideoInterstitialAdLoaded { get; private set; }
        public bool IsAmazonRewardedAdLoaded { get; private set; }

        private void Start()
        {
            DontDestroyOnLoad(gameObject);
            Initialize();
        }

        public void Initialize()
        {

            Amazon.Initialize(AmazonAppId);
            Amazon.EnableTesting(true);
            Amazon.EnableLogging(true);
            Amazon.UseGeoLocation(true);
            Amazon.SetMRAIDPolicy(Amazon.MRAIDPolicy.CUSTOM);
            Amazon.SetAdNetworkInfo(new AdNetworkInfo(DTBAdNetwork.MAX));
            Amazon.SetMRAIDSupportedVersions(new string[] { "1.0", "2.0", "3.0" });
        }

        public void LoadAmazonBannerAd(Action<AmazonRequestResult> onComplete)
        {
            if (Application.platform is RuntimePlatform.LinuxEditor or RuntimePlatform.WindowsEditor
                or RuntimePlatform.OSXEditor)
            {
                onComplete?.Invoke(new AmazonRequestResult(false, null, null));
                return;
            }

            if (!IsAmazonBannerAdLoaded)
            {
                int width;
                int height;
                string slotId;
            
                if (MaxSdkUtils.IsTablet())
                {
                    width = 728;
                    height = 90;
                    slotId = AmazonBannerAdId;
                }
                else
                {
                    width = 320;
                    height = 50;
                    slotId = AmazonBannerAdId;
                }
                
                IsAmazonBannerAdLoaded = true;
                
                var apsBanner = new APSBannerAdRequest(width, height, slotId);
                apsBanner.onSuccess += (adResponse) =>
                {   
                    onComplete?.Invoke(new AmazonRequestResult(true, "amazon_ad_response", adResponse.GetResponse()));
                };
                apsBanner.onFailedWithError += (adError) =>
                {
                    onComplete?.Invoke(new AmazonRequestResult(true, "amazon_ad_error", adError.GetAdError()));
                };
                apsBanner.LoadAd();


            }
            else
            {
                onComplete?.Invoke(new AmazonRequestResult(false, null, null));
            }
        }

        public void LoadAmazonStaticInterstitialAd(Action<AmazonRequestResult> onComplete)
        {
            if (Application.platform is RuntimePlatform.LinuxEditor or RuntimePlatform.WindowsEditor
                or RuntimePlatform.OSXEditor)
            {
                onComplete?.Invoke(new AmazonRequestResult(false, null, null));
                return;
            }

            if (!IsAmazonStaticInterstitialAdLoaded)
            {
                IsAmazonStaticInterstitialAdLoaded = true;
            
                var interstitialAd = new APSInterstitialAdRequest(AmazonInterstitialAdId);
                interstitialAd.onSuccess += (adResponse) =>
                {
                    onComplete?.Invoke(new AmazonRequestResult(true, "amazon_ad_response", adResponse.GetResponse()));
                };
                interstitialAd.onFailedWithError += (adError) =>
                {
                    onComplete?.Invoke(new AmazonRequestResult(true, "amazon_ad_error", adError.GetAdError()));
                };

                interstitialAd.LoadAd();
            }
            else
            {
                onComplete?.Invoke(new AmazonRequestResult(false, null, null));
            }
        }

        public void LoadAmazonVideoInterstitialAd(Action<AmazonRequestResult> onComplete)
        {
            if (Application.platform is RuntimePlatform.LinuxEditor or RuntimePlatform.WindowsEditor
                or RuntimePlatform.OSXEditor)
            {
                onComplete?.Invoke(new AmazonRequestResult(false, null, null));
                return;
            }

            if (!IsAmazonVideoInterstitialAdLoaded)
            {
                IsAmazonVideoInterstitialAdLoaded = true;

                var interstitialVideoAd = new APSVideoAdRequest(320, 480, AmazonInterstitialAdId);
                interstitialVideoAd.onSuccess += (adResponse) =>
                {
                    onComplete?.Invoke(new AmazonRequestResult(true, "amazon_ad_response", adResponse.GetResponse()));
                };
                interstitialVideoAd.onFailedWithError += (adError) =>
                {
                    onComplete?.Invoke(new AmazonRequestResult(true, "amazon_ad_error", adError.GetAdError()));
                };

                interstitialVideoAd.LoadAd();
            }
            else
            {
                onComplete?.Invoke(new AmazonRequestResult(false, null, null));
            }
        }

        public void LoadAmazonRewardedAd(Action<AmazonRequestResult> onComplete)
        {
            if (Application.platform is RuntimePlatform.LinuxEditor or RuntimePlatform.WindowsEditor
                or RuntimePlatform.OSXEditor)
            {
                onComplete?.Invoke( new AmazonRequestResult(false, null, null));
                return;
            }

            if (!IsAmazonRewardedAdLoaded)
            {
                IsAmazonRewardedAdLoaded = true;

                var rewardedVideoAd = new APSVideoAdRequest(320, 480, AmazonRewardedAdId);
                rewardedVideoAd.onSuccess += (adResponse) =>
                {
                    onComplete?.Invoke(new AmazonRequestResult(true, "amazon_ad_response", adResponse.GetResponse()));
                };
                rewardedVideoAd.onFailedWithError += (adError) =>
                {
                    onComplete?.Invoke(new AmazonRequestResult(true, "amazon_ad_error", adError.GetAdError()));
                };

                rewardedVideoAd.LoadAd();
            }
            else
            {
                onComplete?.Invoke(new AmazonRequestResult(false, null, null));
            }
        }
    }
#endif
}