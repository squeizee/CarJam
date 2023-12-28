using System;
using TMPro;
using UnityEngine;

namespace _Game._2_LinearLevel.Scripts.ChallangeLevel
{
    public class ChallengeLevelButtonItem : MonoBehaviour
    {
        public int Index;
        public Action<ChallengeLevelButtonItemData> OnButtonDownAction;
        [SerializeField] private TMP_Text _indexText;
        [SerializeField] private TMP_Text _priceText;
        [SerializeField] private TMP_Text _unlockLevelText;
        [SerializeField] private TMP_Text _movesLeftText;
        [SerializeField] private TMP_Text _playRewardText;
        [SerializeField] private TMP_Text _failedRewardText;

        [SerializeField] private GameObject _notReached;
        [SerializeField] private GameObject _notPurchased;
        [SerializeField] private GameObject _play;
        [SerializeField] private GameObject _doBetter;
        [SerializeField] private GameObject _reTry;
        private ChallengeLevelButtonItemData _itemData;

        public void Initialize(ChallengeLevelButtonItemData itemData, Action<ChallengeLevelButtonItemData> action)
        {
            Index = itemData.Index;
            _itemData = itemData;
            _notReached.SetActive(itemData.Type == ChallengeLevelButtonItemType.NotReached);
            _notPurchased.SetActive(itemData.Type == ChallengeLevelButtonItemType.NotPurchased);
            _play.SetActive(itemData.Type == ChallengeLevelButtonItemType.Play);
            _doBetter.SetActive(itemData.Type == ChallengeLevelButtonItemType.DoBetter);
            _reTry.SetActive(itemData.Type == ChallengeLevelButtonItemType.ReTry);

            _indexText.text = Index.ToString();
            _priceText.text = ConvertToCoin(itemData.Price);
            _unlockLevelText.text = "Level " + itemData.UnlockLevel.ToString();
            _movesLeftText.text = itemData.MovesLeft.ToString();
            _playRewardText.text = ConvertToCoin(itemData.Reward);
            _failedRewardText.text = ConvertToCoin(itemData.Reward);

            OnButtonDownAction = action;
        }

        public void OnButtonDown()
        {
            OnButtonDownAction?.Invoke(_itemData);
        }

        public string ConvertToCoin(int coinAmount)
        {
            // make it like 1.08 k for 1080
            if (coinAmount < 1000)
            {
                return coinAmount.ToString();
            }
            else if (coinAmount < 1000000)
            {
                return (coinAmount / 1000f).ToString("F2") + " k";
            }
            else if (coinAmount < 1000000000)
            {
                return (coinAmount / 1000000f).ToString("F2") + " m";
            }
            else
            {
                return (coinAmount / 1000000000f).ToString("F2") + " b";
            }
        }
    }

    [Serializable]
    public class ChallengeLevelButtonItemData
    {
        public ChallengeLevelButtonItemType Type;
        public int UnlockLevel;
        public int Index;
        public int MovesLeft;
        public int Reward;
        public int Price;
    }

    public enum ChallengeLevelButtonItemType
    {
        NotReached,
        NotPurchased,
        Play,
        DoBetter,
        ReTry
    }
}