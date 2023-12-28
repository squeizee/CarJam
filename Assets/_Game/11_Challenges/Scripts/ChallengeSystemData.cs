using System;
using System.Collections.Generic;

namespace _Game._2_LinearLevel.Scripts.ChallangeLevel
{
    [Serializable]
    public class ChallengeSystemData
    {
        public List<ChallengeLevelItemData> HardLevels = new List<ChallengeLevelItemData>();
        public List<ChallengeLevelItemData> EpicLevels = new List<ChallengeLevelItemData>();

        public void PurchaseEpicLevel(int itemDataIndex)
        {
            if (TryGetEpicLevel(itemDataIndex, out ChallengeLevelItemData levelItemData) == false)
            {
                EpicLevels.Add(new ChallengeLevelItemData()
                {
                    Index = itemDataIndex,
                    MovesLeft = 0,
                    IsPassed = false
                });
            }
        }

        public bool TryGetEpicLevel(int itemDataIndex, out ChallengeLevelItemData levelItemData)
        {
            levelItemData = null;
            foreach (ChallengeLevelItemData epicLevel in EpicLevels)
            {
                if (epicLevel.Index == itemDataIndex)
                {
                    levelItemData = epicLevel;
                    return true;
                }
            }

            return false;
        }

        public void PurchaseHardLevel(int itemDataIndex)
        {
            if (TryGetHardLevel(itemDataIndex, out ChallengeLevelItemData levelItemData) == false)
            {
                HardLevels.Add(new ChallengeLevelItemData()
                {
                    Index = itemDataIndex,
                    MovesLeft = 0,
                    IsPassed = false
                });
            }
        }

        public bool TryGetHardLevel(int itemDataIndex, out ChallengeLevelItemData levelItemData)
        {
            levelItemData = null;
            foreach (ChallengeLevelItemData hardLevel in HardLevels)
            {
                if (hardLevel.Index == itemDataIndex)
                {
                    levelItemData = hardLevel;
                    return true;
                }
            }

            return false;
        }

        public void SetHardLevelData(int levelIndex, int movesLeft)
        {
            ChallengeLevelItemData item = null;
            if (TryGetHardLevel(levelIndex, out item) == false)
            {
                item = new ChallengeLevelItemData()
                {
                    Index = levelIndex,
                    MovesLeft = 0,
                    IsPassed = false
                };
                HardLevels.Add(item);
            }

            item.MovesLeft = movesLeft;
            item.IsPassed = true;
        }

        public void SetEpicLevelData(int levelIndex, int movesLeft)
        {
            ChallengeLevelItemData item = null;
            if (TryGetEpicLevel(levelIndex, out item) == false)
            {
                item = new ChallengeLevelItemData()
                {
                    Index = levelIndex,
                    MovesLeft = 0,
                    IsPassed = false
                };
                EpicLevels.Add(item);
            }

            item.MovesLeft = movesLeft;
            item.IsPassed = true;
        }
    }

    [Serializable]
    public class ChallengeLevelItemData
    {
        public int Index;
        public int MovesLeft;
        public bool IsPassed;
        public bool IsPlayed;
    }
}