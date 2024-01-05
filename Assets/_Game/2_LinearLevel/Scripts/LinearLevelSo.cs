using System;
using System.Collections.Generic;
using Library.ScreenManagement.Scripts;
using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game._2_LinearLevel.Scripts
{
    [CreateAssetMenu(fileName = "LinearLevelSo", menuName = "Craft/LinearLevel/LinearLevelSo")]
    public class LinearLevelSo : ScriptableSingleton<LinearLevelSo>
    {
        public List<LinearLevelOrderData> LevelData = new List<LinearLevelOrderData>();
        public List<BaseScreen> Screens = new List<BaseScreen>();
        public BossLevelConfig BossLevelConfig;
        public NormalLevelConfig NormalLevelConfig;

        public LinearLevelOrderData GetLevelOrderData(LinearLevelType type)
        {
            foreach (var data in LevelData)
            {
                if (data.Type == type)
                {
                    return data;
                }
            }

            return null;
        }
    }

    [Serializable]
    public class BossLevelConfig
    {
        public int OfferStartProgress = 15;
        public int OfferPeriod = 5;
        public int OfferRewardStart;
        public int OfferRewardIncrease;
        public int AdditionalMoves = 4;
        public int AdditionalSpatula = 4;
        public int AdditionalTime = 30;
        public int ReviveCost = 250;

        public bool isEnable = false;
        public bool ShouldOfferBossLevel(int progress)
        {
            if(!isEnable) return false;
            
            return progress >= OfferStartProgress && (progress - OfferStartProgress) % OfferPeriod == 0;
        }

        public int GetReward(int bossLevelProgress)
        {
            return OfferRewardStart + OfferRewardIncrease * bossLevelProgress;
        }

        public int GetBossLevelIndex(int normalLevel)
        {
            if (normalLevel >= OfferStartProgress)
            {
                return (normalLevel - OfferStartProgress) / OfferPeriod + 1;
            }
            else
            {
                return 0;
            }
        }
    }

    [Serializable]
    public class NormalLevelConfig
    {
        public int OfferRewardStart = 10;
        public float OfferRewardIncrease = 0.1f;
        public int RandomInterval = 5;
        public float ReviveCost = 250;

        public int GetReward(int levelProgress)
        {
            return OfferRewardStart + Mathf.RoundToInt(OfferRewardIncrease * levelProgress) +
                   UnityEngine.Random.Range(0, RandomInterval);
        }
    }

    public enum LinearLevelType
    {
        Normal,
        Boss,
        ChallengeHard,
        ChallengeEpic,
        Bonus,
        Special,
    }
}