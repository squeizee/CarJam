using System.Collections.Generic;
using _Game._0_CraftCore.Scripts.Core;
using _Game._1_CraftUI.Scripts.Utility;
using _Game._3_GamePlay;
using _Game._3_GamePlay.Scripts;
using _Game.Library.PersistentDataNS.Scripts;
using _Game.Systems._CoreSystem.Scripts;
using _Game.Systems.GameFlow.Scripts.Commands;
using _Game.Systems.GameFlow.Scripts.Commands.ChallengeLevel;
using _Game.Systems.GameFlow.Scripts.UI;
using Library.ScreenManagement.Scripts;
using Modules.Inventory;
using UnityEngine;

namespace _Game._2_LinearLevel.Scripts.ChallangeLevel
{
    public class ChallengeSystem : BaseCraftSystem, ICraftSystem
    {
        private int _hardLevelCount = 21;
        private int _epicLevelCount = 3;
        private bool _isEnabled = false;
        ChallengeSystemSo So => ChallengeSystemSo.Instance;
        LinearLevelSystem LinearLevelSystem => Craft.Get<LinearLevelSystem>();

        public PersistentData<ChallengeSystemData> Data =
            new PersistentData<ChallengeSystemData>($"{nameof(ChallengeSystem)}_{nameof(ChallengeSystemData)}",
                new ChallengeSystemData());

        public ChallengeLifeController LifeController;

        public void OnInit()
        {
            LifeController = new ChallengeLifeController();
            LifeController.Initialize();
        }

        public void OnDestroy()
        {
            LifeController.Dispose();
        }


        public List<BaseScreen> GetScreens()
        {
            return So.Screens;
        }

        public void OpenChallengeLevelSelectionUI(bool isFromButton, bool isFromRoadMap)
        {
            if (isFromButton)
            {
                Craft.Get<GamePlaySystem>().PauseGamePlay();
            }

            if (isFromRoadMap)
            {
                Craft.CloseUI<RoadMapUI>();
            }

            Craft.CloseUI<NormalLevelUI>();
            Craft.OpenUI<ChallengeLevelSelectionUI>(new ChallengeLevelSelectionUIArgs()
            {
                HardLevels = GetHardLevelsData(),
                EpicLevels = GetEpicLevelsData(),
                OnHardLevelButtonDown = OnHardLevelButtonDown,
                OnEpicLevelButtonDown = OnEpicLevelButtonDown,
                OnExitButtonDown = () => OnChallengeLevelClosed(isFromButton, isFromRoadMap),
            });
        }

        public void OnChallengeLevelClosed(bool isFromButton, bool isFromRoadMap)
        {
            if (isFromButton)
            {
                if (isFromRoadMap)
                {
                    new OpenRoadMapCommand().Execute();
                }
                else
                {
                    Craft.Get<GamePlaySystem>().ResumeGamePlay();
                    Craft.OpenUI<NormalLevelUI>(new NormalLevelUIArgs()
                    {
                        Level = Craft.Get<LinearLevelSystem>().GetProgress(LinearLevelType.Normal),
                        GamePlay = (BaseGamePlay)Craft.Get<GamePlaySystem>().GetCurrentGamePlay()
                    });
                }
            }
            else
            {
                new StartNormalLevelCommand().Execute();
            }
        }


        private List<ChallengeLevelButtonItemData> GetHardLevelsData()
        {
            List<ChallengeLevelButtonItemData> hardLevels = new List<ChallengeLevelButtonItemData>();
            for (int i = 1; i < _hardLevelCount + 1; i++)
            {
                hardLevels.Add(GetHardLevelData(i));
            }

            return hardLevels;
        }

        private ChallengeLevelButtonItemData GetHardLevelData(int index)
        {
            int playerLevel = LinearLevelSystem.GetProgress(LinearLevelType.Normal);
            var itemData = new ChallengeLevelButtonItemData();
            itemData.Index = index;
            itemData.Type = ChallengeLevelButtonItemType.NotPurchased;
            itemData.Price = GetHardPrice(index);
            itemData.Reward = GetHardReward(index);
            itemData.UnlockLevel = GetHardUnlockLevel(index);

            if (Data.Value.TryGetHardLevel(index, out ChallengeLevelItemData levelItemData))
            {
                if (levelItemData.IsPlayed)
                {
                    if (levelItemData.IsPassed)
                    {
                        itemData.Type = ChallengeLevelButtonItemType.DoBetter;
                        itemData.MovesLeft = levelItemData.MovesLeft;
                    }
                    else
                    {
                        itemData.Type = ChallengeLevelButtonItemType.ReTry;
                    }
                }
                else
                {
                    itemData.Type = ChallengeLevelButtonItemType.Play;
                }
            }
            else
            {
                if (playerLevel >= itemData.UnlockLevel)
                {
                    itemData.Type = ChallengeLevelButtonItemType.NotPurchased;
                }
                else
                {
                    itemData.Type = ChallengeLevelButtonItemType.NotReached;
                }
            }

            return itemData;
        }

        private List<ChallengeLevelButtonItemData> GetEpicLevelsData()
        {
            List<ChallengeLevelButtonItemData> epicLevelsData = new List<ChallengeLevelButtonItemData>();
            for (int i = 1; i < _epicLevelCount + 1; i++)
            {
                epicLevelsData.Add(GetEpicLevelData(i));
            }

            return epicLevelsData;
        }

        private ChallengeLevelButtonItemData GetEpicLevelData(int index)
        {
            int playerLevel = LinearLevelSystem.GetProgress(LinearLevelType.Normal);

            var itemData = new ChallengeLevelButtonItemData();
            itemData.Index = index;
            itemData.Type = ChallengeLevelButtonItemType.NotPurchased;
            itemData.Price = GetEpicPrice(index);
            itemData.Reward = GetEpicReward(index);
            itemData.UnlockLevel = GetEpicUnlockLevel(index);

            if (Data.Value.TryGetEpicLevel(index, out ChallengeLevelItemData levelItemData))
            {
                if (levelItemData.IsPlayed)
                {
                    if (levelItemData.IsPassed)
                    {
                        itemData.Type = ChallengeLevelButtonItemType.DoBetter;
                        itemData.MovesLeft = levelItemData.MovesLeft;
                    }
                    else
                    {
                        itemData.Type = ChallengeLevelButtonItemType.ReTry;
                    }
                }
                else
                {
                    itemData.Type = ChallengeLevelButtonItemType.Play;
                }
            }
            else
            {
                if (playerLevel >= itemData.UnlockLevel)
                {
                    itemData.Type = ChallengeLevelButtonItemType.NotPurchased;
                }
                else
                {
                    itemData.Type = ChallengeLevelButtonItemType.NotReached;
                }
            }

            return itemData;
        }

        public void SetCompletedChallengeLevelData(int levelIndex, LinearLevelType levelType, int movesLeft)
        {
            if (levelType == LinearLevelType.ChallengeHard)
            {
                Data.Value.SetHardLevelData(levelIndex, movesLeft);
            }
            else
            {
                Data.Value.SetEpicLevelData(levelIndex, movesLeft);
            }
        }

        private void OnHardLevelButtonDown(ChallengeLevelButtonItemData itemData)
        {
            if (itemData.Type == ChallengeLevelButtonItemType.ReTry
                || itemData.Type == ChallengeLevelButtonItemType.Play
                || itemData.Type == ChallengeLevelButtonItemType.DoBetter)
            {
                if (itemData.Type != ChallengeLevelButtonItemType.Play)
                {
                    if (LifeController.TrySpendLife() == false)
                    {
                        Craft.OpenUI<ChallengeLifePopUp>();
                        return;
                    }
                }

                if (Data.Value.TryGetHardLevel(itemData.Index, out ChallengeLevelItemData levelItemData))
                {
                    levelItemData.IsPlayed = true;
                }

                int reward = itemData.Type == ChallengeLevelButtonItemType.DoBetter ? 0 : itemData.Reward;
                new StartChallengeLevelCommand().Execute(itemData.Index, reward,
                    LinearLevelType.ChallengeHard);
            }
            else if (itemData.Type == ChallengeLevelButtonItemType.NotPurchased)
            {
                if (Craft.Get<CraftInventorySystem>().GetInventoryItem(ItemId.Currency1).TrySpend(itemData.Price))
                {
                    Data.Value.PurchaseHardLevel(itemData.Index);
                    Craft.GetUI<ChallengeLevelSelectionUI>().UpdateHardButton(
                        GetHardLevelData(itemData.Index));
                    Craft.Get<LinearLevelSystem>().GetGamePlay(LinearLevelType.ChallengeHard, itemData.Index);
                }
                else
                {
                    Craft.GetUI<WarningUI>().ShowNotEnoughCoin();
                }
            }
        }


        private void OnEpicLevelButtonDown(ChallengeLevelButtonItemData itemData)
        {
            if (itemData.Type == ChallengeLevelButtonItemType.ReTry
                || itemData.Type == ChallengeLevelButtonItemType.Play
                || itemData.Type == ChallengeLevelButtonItemType.DoBetter)
            {
                if (itemData.Type != ChallengeLevelButtonItemType.Play)
                {
                    if (LifeController.TrySpendLife() == false)
                    {
                        Craft.OpenUI<ChallengeLifePopUp>();
                        return;
                    }
                }

                if (Data.Value.TryGetEpicLevel(itemData.Index, out ChallengeLevelItemData levelItemData))
                {
                    levelItemData.IsPlayed = true;
                }

                new StartChallengeLevelCommand().Execute(itemData.Index, itemData.Reward,
                    LinearLevelType.ChallengeEpic);
            }
            else if (itemData.Type == ChallengeLevelButtonItemType.NotPurchased)
            {
                if (Craft.Get<CraftInventorySystem>().GetInventoryItem(ItemId.Currency1).TrySpend(itemData.Price))
                {
                    Data.Value.PurchaseEpicLevel(itemData.Index);
                    Craft.GetUI<ChallengeLevelSelectionUI>().UpdateEpicButton(
                        GetEpicLevelData(itemData.Index));
                    Craft.Get<LinearLevelSystem>().GetGamePlay(LinearLevelType.ChallengeEpic, itemData.Index);
                }
                else
                {
                    Craft.GetUI<WarningUI>().ShowNotEnoughCoin();
                }
            }
        }


        private int GetHardReward(int index)
        {
            float a1 = 75;
            float b1 = 50;
            float k1 = 0.965f;
            float k2 = 1.035f;
            for (int i = 0; i < index - 1; i++)
            {
                a1 = (a1 + b1) * k1;
                b1 = b1 * k2;
            }

            return Mathf.RoundToInt((a1 + b1) / 5) * 5;
        }

        public int GetEpicReward(int levelId)
        {
            float a1 = 500;
            float b1 = 50;
            float k1 = 0.965f;
            float k2 = 1.035f;
            for (int i = 0; i < levelId - 1; i++)
            {
                a1 = (a1 + b1) * k1;
                b1 = b1 * k2;
            }

            return Mathf.RoundToInt((a1 + b1) / 5) * 5;
        }

        private int GetHardPrice(int index)
        {
            float a1 = 75;
            float b1 = 50;
            float k1 = 0.965f;
            float k2 = 1.035f;
            for (int i = 0; i < index - 1; i++)
            {
                a1 = (a1 + b1) * k1;
                b1 = b1 * k2;
            }

            return Mathf.RoundToInt((a1) / 5) * 5;
        }

        public int GetEpicPrice(int levelId)
        {
            float a1 = 500;
            float b1 = 50;
            float k1 = 0.965f;
            float k2 = 1.035f;
            for (int i = 0; i < levelId - 1; i++)
            {
                a1 = (a1 + b1) * k1;
                b1 = b1 * k2;
            }

            return Mathf.RoundToInt((a1) / 5) * 5;
        }

        private int GetHardUnlockLevel(int index)
        {
            return index * 5 + 5;
        }

        public int GetEpicUnlockLevel(int levelId)
        {
            return levelId * 5 + 10;
        }

        public bool ShouldShowNewChallengeUnlockedUI()
        {
            int levelProgress = LinearLevelSystem.GetProgress(LinearLevelType.Normal);
            int levelsToPlay = GetUnreadChallengeCount();
            bool isChallengeLevel = IsChallengeLevel(levelProgress);
            return isChallengeLevel && levelsToPlay > 0;
        }

        public bool IsChallengeLevel(int levelIndex)
        {
            if (!_isEnabled) return false;
            
            int startLevel = 31;
            int period = 7;
            int maxLevel = _hardLevelCount * period + startLevel;
            return maxLevel >= levelIndex && levelIndex >= startLevel && (levelIndex - startLevel) % period == 0;
        }

        public bool ShouldShowLevelButton()
        {
            if (!_isEnabled) return false;
            
            int levelProgress = LinearLevelSystem.GetProgress(LinearLevelType.Normal);
            return levelProgress > 30;
        }

        public int GetUnreadChallengeCount()
        {
            int count = 0;
            var listOfitems = GetHardLevelsData();
            foreach (var item in listOfitems)
            {
                if (item.Type == ChallengeLevelButtonItemType.NotPurchased ||
                    item.Type == ChallengeLevelButtonItemType.Play)
                {
                    count++;
                }
            }

            return count;
        }

        public int GetNotCompletedLevelCount()
        {
            int count = 0;
            var listOfitems = GetHardLevelsData();
            foreach (var item in listOfitems)
            {
                if (item.Type == ChallengeLevelButtonItemType.NotPurchased ||
                    item.Type == ChallengeLevelButtonItemType.Play || item.Type == ChallengeLevelButtonItemType.ReTry)
                {
                    count++;
                }
            }

            return count;
        }
    }
}