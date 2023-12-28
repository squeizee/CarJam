using System.Collections.Generic;
using Library.ScreenManagement.Scripts;
using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game._1_Ads.Scripts
{
    [CreateAssetMenu(fileName = "AdsSystemSo", menuName = "Craft/Other/AdsSystemSo")]
    public class AdsSystemSo : ScriptableSingleton<AdsSystemSo>
    {
        public List<BaseScreen> Screens;
        public AdsSystemConfig Config;
        public string AndroidInterADUnitId = "5d427ac1b5ac3bc8";
        public string AndroidRewardedADUnitId = "5d427ac1b5ac3bc8";
        public string AndroidBannerADUnitId = "5d427ac1b5ac3bc8";
        public string IosInterADUnitId = "5d427ac1b5ac3bc8";
        public string IosRewardedADUnitId = "5d427ac1b5ac3bc8";
        public string IosBannerADUnitId = "5d427ac1b5ac3bc8";
    }
}