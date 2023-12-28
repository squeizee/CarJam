using System;
using System.Collections.Generic;
using Library.ScreenManagement.Scripts;
using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game._9_Marketplace.Scripts
{
    [CreateAssetMenu(fileName = "MarketPlaceSo", menuName = "Craft/MarketPlace/MarketPlaceSo")]
    public class MarketPlaceSo : ScriptableSingleton<MarketPlaceSo>
    {
        public List<BaseScreen> Screens = new List<BaseScreen>();
        public List<MarketPlaceItemData> SkinItemDatas = new List<MarketPlaceItemData>();
        public List<MarketPlaceItemData> SpatulaItemDatas = new List<MarketPlaceItemData>();
        public List<MarketPlaceItemData> EnvironmentItemDatas = new List<MarketPlaceItemData>();

        public int GetSkinIndex(int levelIndex)
        {
            return SkinItemDatas.FindIndex(x => x.UnlockLevel == levelIndex) + 1;
        }

        public int GetSpatulaIndex(int levelIndex)
        {
            return SpatulaItemDatas.FindIndex(x => x.UnlockLevel == levelIndex) + 1;
        }

        public int GetEnvironmentIndex(int levelIndex)
        {
            return EnvironmentItemDatas.FindIndex(x => x.UnlockLevel == levelIndex) + 1;
        }
    }

    [Serializable]
    public class MarketPlaceItemData
    {
        public int Price;
        public int UnlockLevel;
        public Sprite Sprite;
    }
}