using System;
using System.Collections.Generic;

namespace _Game._9_Marketplace.Scripts
{
    [Serializable]
    public class MarketPlaceData
    {
        public List<int> PurchasedSkins = new List<int>() { 1 };
        public List<int> PurchasedEnvironments = new List<int>() { 1 };
        public List<int> PurchasedSpatulas = new List<int>() { 1 };

        public int SelectedSkin = 1;
        public int SelectedEnvironment = 1;
        public int SelectedSpatula = 1;

        public void ClaimSkin(int skinIndex)
        {
            if (PurchasedSkins.Contains(skinIndex))
            {
                return;
            }

            PurchasedSkins.Add(skinIndex);
        }

        public void ClaimSpatula(int itemIndex)
        {
            if (PurchasedSpatulas.Contains(itemIndex))
            {
                return;
            }

            PurchasedSpatulas.Add(itemIndex);
        }

        public void ClaimEnvironment(int environmentIndex)
        {
            if (PurchasedEnvironments.Contains(environmentIndex))
            {
                return;
            }

            PurchasedEnvironments.Add(environmentIndex);
        }

        public void SelectSkin(int skinIndex)
        {
            if (PurchasedSkins.Contains(skinIndex) == false)
            {
                return;
            }

            SelectedSkin = skinIndex;
        }

        public void SelectEnvironment(int environmentIndex)
        {
            if (PurchasedEnvironments.Contains(environmentIndex) == false)
            {
                return;
            }

            SelectedEnvironment = environmentIndex;
        }

        public void SelectSpatula(int itemIndex)
        {
            if (PurchasedSpatulas.Contains(itemIndex) == false)
            {
                return;
            }

            SelectedSpatula = itemIndex;
        }

        public void Reset()
        {
            PurchasedSkins = new List<int>() { 1 };
            PurchasedEnvironments = new List<int>() { 1 };

            SelectedSkin = 1;
            SelectedEnvironment = 1;
        }
    }
}