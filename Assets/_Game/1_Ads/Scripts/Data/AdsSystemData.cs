using System;

namespace _Game._1_Ads.Scripts
{
    [Serializable]
    public class AdsSystemData
    {
        public bool IsNoAdsPurchased;
        public DateTime LastPurchaseTime = new DateTime(2012, 1, 1);

        public AdsSystemData()
        {
            IsNoAdsPurchased = false;
        }
    }
}