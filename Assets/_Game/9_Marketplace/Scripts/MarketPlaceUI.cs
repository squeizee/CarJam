using System.Collections.Generic;
using _Game._0_CraftCore.Scripts.Core;
using _Game._1_CraftUI.Scripts.Utility;
using _Game._2_LinearLevel.Scripts;
using _Game._3_GamePlay;
using DG.Tweening;
using Library.ScreenManagement.Scripts;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace _Game._9_Marketplace.Scripts
{
    public class MarketPlaceUIArgs : BaseScreenArgs
    {
        
    }

    public class MarketPlaceUI : BaseScreen<MarketPlaceUIArgs>
    {
        public List<MarketPlaceItem> Skins;
        public List<MarketPlaceItem> Environments;
        public List<MarketPlaceItem> Spatulas;

        public Transform SkinsContainer;
        public Transform EnvironmentContainer;
        public Transform SpatulasContainer;

        public TMP_Text SkinsText;
        public TMP_Text EnvironmentText;
        public TMP_Text SpatulasText;

        public Image SkinsImage;
        public Image EnvironmentImage;
        public Image SpatulasImage;

        [SerializeField] private Transform _skinsCenter;
        [SerializeField] private Transform _environmentCenter;
        

        [SerializeField] private Color _selectedColor;
        [SerializeField] private Color _unSelectedColor;

        [SerializeField] private MeshRenderer _groundRenderer;
        [SerializeField] private GameObject _displayObject;

        [SerializeField] private Transform _spatulaButton;
        [SerializeField] private Transform _seperator;
        [SerializeField] private Transform _buyButton;

        [SerializeField] private ShinyAnimation _shinyAnimation;
        [SerializeField] private TMP_Text _coinAmount;

        MarketPlaceItem _selectedItem;

        private Sequence _skinsSequence;
        private Sequence _environmentSequence;
        private Sequence _spatulaSequence;
        public MarketPlaceSystem Market => Craft.Get<MarketPlaceSystem>();
        public MarketPlaceSo So => MarketPlaceSo.Instance;

        public override void OnSetup()
        {
            _displayObject.SetActive(true);

            UpdateDisplayColors();
            
            OnSpatulaButtonDown();
            
            var data = Market.Data.Value;
            int playerLevel = Craft.Get<LinearLevelSystem>().GetProgress(LinearLevelType.Normal);

            UpdateMarketPlaceItems(Skins, playerLevel, data.PurchasedSkins, data.SelectedSkin, So.SkinItemDatas);
            UpdateMarketPlaceItems(Environments, playerLevel, data.PurchasedEnvironments, data.SelectedEnvironment,
                So.EnvironmentItemDatas);
            UpdateMarketPlaceItems(Spatulas, playerLevel, data.PurchasedSpatulas, data.SelectedSpatula,
                So.SpatulaItemDatas);
        }

        private void UpdateMarketPlaceItems(List<MarketPlaceItem> items, int playerLevel, List<int> purchasedItems,
            int selectedItem, List<MarketPlaceItemData> itemDatas)
        {
            for (int i = 0; i < items.Count; i++)
            {
                MarketPlaceItem item = items[i];
                MarketPlaceItemData itemData = itemDatas[i];
                MarketPlaceItemType marketPlaceItemType = MarketPlaceItemType.NotUnlocked;
                if (item.ItemIndex == selectedItem)
                {
                    marketPlaceItemType = MarketPlaceItemType.Selected;
                }
                else if (purchasedItems.Contains(item.ItemIndex))
                {
                    marketPlaceItemType = MarketPlaceItemType.Purchased;
                }
                else if (playerLevel >= itemData.UnlockLevel)
                {
                    marketPlaceItemType = MarketPlaceItemType.NotPurchased;
                }
                else
                {
                    marketPlaceItemType = MarketPlaceItemType.NotUnlocked;
                }

                item.Initialize(marketPlaceItemType, itemData, OnItemButtonDown);
            }
        }

        private void UpdateDisplayColors()
        {
            int option = Market.Data.Value.SelectedEnvironment;
            SetEnvironment(option);
            int option2 = Market.Data.Value.SelectedSpatula;
            SetSpatula(option2);
        }

        private void SetTapeSkin(int option)
        {
           
        }

        private void SetSpatula(int option)
        {
            
        }

        private void SetEnvironment(int option)
        {
            
        }


        public void OnItemButtonDown(MarketPlaceItem marketPlaceItem)
        {
            switch (marketPlaceItem.MarketPlaceItemType)
            {
                case MarketPlaceItemType.NotUnlocked:
                    Craft.GetUI<WarningUI>().ShowWarning("Reach Level " + marketPlaceItem.ItemData.UnlockLevel, -500);
                    DeSelectItemForBuyButton();
                    OverViewMarketItem(marketPlaceItem);
                    break;
                case MarketPlaceItemType.Selected:
                    DeSelectItemForBuyButton();
                    OverViewMarketItem(marketPlaceItem);
                    break;
                case MarketPlaceItemType.NotPurchased:
                    // try to buy
                    OverViewMarketItem(marketPlaceItem);
                    SelectItemForBuyButton(marketPlaceItem);
                    break;
                case MarketPlaceItemType.Purchased:
                    MarketPlaceItem oldSelectedItem = null;
                    DeSelectItemForBuyButton();
                    if (marketPlaceItem.ItemType == ItemType.Skin)
                    {
                        foreach (MarketPlaceItem skin in Skins)
                        {
                            if (skin.MarketPlaceItemType == MarketPlaceItemType.Selected)
                            {
                                oldSelectedItem = skin;
                                break;
                            }
                        }
                    }
                    else if (marketPlaceItem.ItemType == ItemType.Environment)
                    {
                        foreach (MarketPlaceItem environment in Environments)
                        {
                            if (environment.MarketPlaceItemType == MarketPlaceItemType.Selected)
                            {
                                oldSelectedItem = environment;
                                break;
                            }
                        }
                    }
                    else if (marketPlaceItem.ItemType == ItemType.Spatula)
                    {
                        foreach (MarketPlaceItem spatula in Spatulas)
                        {
                            if (spatula.MarketPlaceItemType == MarketPlaceItemType.Selected)
                            {
                                oldSelectedItem = spatula;
                                break;
                            }
                        }
                    }

                    if (oldSelectedItem)
                    {
                        oldSelectedItem.Initialize(MarketPlaceItemType.Purchased, oldSelectedItem.ItemData,
                            OnItemButtonDown);
                    }

                    PlayPopAnimation(marketPlaceItem);
                    marketPlaceItem.Initialize(MarketPlaceItemType.Selected, marketPlaceItem.ItemData,
                        OnItemButtonDown);
                    Market.SelectItem(marketPlaceItem);
                    UpdateDisplayColors();
                    break;
            }
        }

        public void SelectItemForBuyButton(MarketPlaceItem marketPlaceItem)
        {
            _buyButton.gameObject.SetActive(true);
            _shinyAnimation.Play();
            _coinAmount.text = marketPlaceItem.ItemData.Price.ToString();
            _selectedItem = marketPlaceItem;
        }

        public void DeSelectItemForBuyButton()
        {
            _shinyAnimation.Stop();
            _buyButton.gameObject.SetActive(false);
            _selectedItem = null;
        }

        public void BuyButtonDown()
        {
            if (_selectedItem == null)
            {
                return;
            }

            if (Market.BuyItem(_selectedItem))
            {
                _selectedItem.Initialize(MarketPlaceItemType.Purchased, _selectedItem.ItemData,
                    OnItemButtonDown);
                OnItemButtonDown(_selectedItem);
                DeSelectItemForBuyButton();
            }
        }


        public void OnSkinsButtonDown()
        {
            SkinsText.color = _selectedColor;
            SkinsImage.color = _selectedColor;
            EnvironmentText.color = _unSelectedColor;
            EnvironmentImage.color = _unSelectedColor;
            SpatulasText.color = _unSelectedColor;
            SpatulasImage.color = _unSelectedColor;

            SkinsContainer.gameObject.SetActive(true);
            EnvironmentContainer.gameObject.SetActive(false);
            SpatulasContainer.gameObject.SetActive(false);
            PlayPopAnimation(Skins[0]);
            UpdateDisplayColors();
            DeSelectItemForBuyButton();
        }

        public void OnEnvironmentButtonDown()
        {
            SkinsText.color = _unSelectedColor;
            SkinsImage.color = _unSelectedColor;
            EnvironmentText.color = _selectedColor;
            EnvironmentImage.color = _selectedColor;
            SpatulasText.color = _unSelectedColor;
            SpatulasImage.color = _unSelectedColor;

            SkinsContainer.gameObject.SetActive(false);
            EnvironmentContainer.gameObject.SetActive(true);
            SpatulasContainer.gameObject.SetActive(false);
            PlayPopAnimation(Environments[0]);
            UpdateDisplayColors();
            DeSelectItemForBuyButton();
        }

        public void OnSpatulaButtonDown()
        {
            SkinsText.color = _unSelectedColor;
            SkinsImage.color = _unSelectedColor;
            EnvironmentText.color = _unSelectedColor;
            EnvironmentImage.color = _unSelectedColor;
            SpatulasText.color = _selectedColor;
            SpatulasImage.color = _selectedColor;

            SkinsContainer.gameObject.SetActive(false);
            EnvironmentContainer.gameObject.SetActive(false);
            SpatulasContainer.gameObject.SetActive(true);
            PlayPopAnimation(Spatulas[0]);
            UpdateDisplayColors();
            DeSelectItemForBuyButton();
        }

        public override void OnClose()
        {
            _displayObject.SetActive(false);
            _skinsSequence?.Complete();
            _environmentSequence?.Complete();
            _spatulaSequence?.Complete();
        }


        public void OnExitButtonDown()
        {
            Close();
        }

        public void PopItem(Transform item, Sequence sequence, float scale = 1.18f)
        {
            sequence?.Kill();
            sequence = DOTween.Sequence();
            sequence.Append(item.DOScale(Vector3.one * scale, .2f));
            sequence.Append(item.DOScale(Vector3.one, .2f));
        }

        private void PlayPopAnimation(MarketPlaceItem marketPlaceItem)
        {
            switch (marketPlaceItem.ItemType)
            {
                case ItemType.Skin:
                    PopItem(_skinsCenter.transform, _skinsSequence);
                    break;
                case ItemType.Environment:
                    PopItem(_environmentCenter.transform, _environmentSequence);
                    break;
            }
        }

        private void OverViewMarketItem(MarketPlaceItem marketPlaceItem)
        {
            PlayPopAnimation(marketPlaceItem);
            int option = marketPlaceItem.ItemIndex;
            switch (marketPlaceItem.ItemType)
            {
                case ItemType.Skin:
                    SetTapeSkin(option);
                    break;
                case ItemType.Environment:
                    SetEnvironment(option);
                    break;
                case ItemType.Spatula:
                    SetSpatula(option);
                    break;
            }
        }

        public bool CanBuyAnyItem(int coin)
        {
            List<int> purchasedSkins = Market.Data.Value.PurchasedSkins;
            int selectedSkin = Market.Data.Value.SelectedSkin;
            List<int> purchasedEnvironments = Market.Data.Value.PurchasedEnvironments;
            int selectedEnvironment = Market.Data.Value.SelectedEnvironment;
            List<int> purchasedSpatulas = Market.Data.Value.PurchasedSpatulas;
            int selectedSpatula = Market.Data.Value.SelectedSpatula;

            int playerLevel = Craft.Get<LinearLevelSystem>().GetProgress(LinearLevelType.Normal);

            foreach (MarketPlaceItem skin in Skins)
            {
                MarketPlaceItemType marketPlaceItemType = MarketPlaceItemType.NotUnlocked;
                if (skin.ItemIndex == selectedSkin)
                {
                }
                else if (purchasedSkins.Contains(skin.ItemIndex))
                {
                }
                else if (playerLevel >= skin.ItemData.UnlockLevel)
                {
                    if (skin.ItemData.Price <= coin)
                    {
                        return true;
                    }
                }
            }

            foreach (MarketPlaceItem environment in Environments)
            {
                MarketPlaceItemType marketPlaceItemType = MarketPlaceItemType.NotUnlocked;
                if (environment.ItemIndex == selectedEnvironment)
                {
                }
                else if (purchasedEnvironments.Contains(environment.ItemIndex))
                {
                }
                else if (playerLevel >= environment.ItemData.UnlockLevel)
                {
                    if (environment.ItemData.Price <= coin)
                    {
                        return true;
                    }
                }
            }

            foreach (MarketPlaceItem spatula in Spatulas)
            {
                MarketPlaceItemType marketPlaceItemType = MarketPlaceItemType.NotUnlocked;
                if (spatula.ItemIndex == selectedSpatula)
                {
                }
                else if (purchasedSpatulas.Contains(spatula.ItemIndex))
                {
                }
                else if (playerLevel >= spatula.ItemData.UnlockLevel)
                {
                    if (spatula.ItemData.Price <= coin)
                    {
                        return true;
                    }
                }
            }

            return false;
        }
    }
}