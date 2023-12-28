using System;
using Modules.Inventory;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace _Game._9_Marketplace.Scripts
{
    public enum MarketPlaceItemType
    {
        NotUnlocked,
        NotPurchased,
        Purchased,
        Selected
    }

    public class MarketPlaceItem : MonoBehaviour
    {
        public Action<MarketPlaceItem> ItemButtonDown;

        public int ItemIndex;
        public ItemType ItemType;
        public MarketPlaceItemType MarketPlaceItemType;

        [SerializeField] private TMP_Text _levelText;
        [SerializeField] private TMP_Text _coinText;
        [SerializeField] private Image _image;


        [SerializeField] private Transform _notUnlocked;
        [SerializeField] private Transform _notPurchased;
        [SerializeField] private Transform _purchased;
        [SerializeField] private Transform _selected;
        public MarketPlaceItemData ItemData;

        [Button]
        public void Initialize(MarketPlaceItemType marketPlaceItemType, MarketPlaceItemData itemData,
            Action<MarketPlaceItem> onClick = null)
        {
            ItemData = itemData;
            _levelText.text = "Level " + itemData.UnlockLevel;
            _coinText.text = itemData.Price.ToString();
            _image.sprite = itemData.Sprite;

            MarketPlaceItemType = marketPlaceItemType;
            _notUnlocked.gameObject.SetActive(marketPlaceItemType == MarketPlaceItemType.NotUnlocked);
            _notPurchased.gameObject.SetActive(marketPlaceItemType == MarketPlaceItemType.NotPurchased);
            _purchased.gameObject.SetActive(marketPlaceItemType == MarketPlaceItemType.Purchased);
            _selected.gameObject.SetActive(marketPlaceItemType == MarketPlaceItemType.Selected);

            ItemButtonDown = onClick;
        }

        public void OnButtonDown()
        {
            ItemButtonDown?.Invoke(this);
        }
    }

    public enum ItemType
    {
        Skin = 0,
        Environment = 1,
        Spatula
    }
}