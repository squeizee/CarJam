using System;
using System.Collections.Generic;
using _Game._0_CraftCore.Scripts.Core;
using _Game._1_CraftUI.Scripts.Utility;
using _Game._2_LinearLevel.Scripts;
using _Game.Library.PersistentDataNS.Scripts;
using _Game.Systems._CoreSystem;
using _Game.Systems._CoreSystem.Scripts;
using Library.ScreenManagement.Scripts;
using Modules.Inventory;

namespace _Game._9_Marketplace.Scripts
{
    public class MarketPlaceSystem : BaseCraftSystem, ICraftSystem
    {
        public readonly List<int> UnlockLevels = new List<int>()
        {
            41, 48, 62, 76, 90, 111
        };


        public const int LevelButtonShowProgress = 22;
        public Dispatcher<MarketPlaceEvents> Dispatcher = new Dispatcher<MarketPlaceEvents>();

        public PersistentData<MarketPlaceData> Data =
            new PersistentData<MarketPlaceData>($"{nameof(MarketPlaceSystem)}_{nameof(MarketPlaceData)}",
                new MarketPlaceData());

        public List<BaseScreen> GetScreens()
        {
            return MarketPlaceSo.Instance.Screens;
        }

        public void OpenMarketPlace(Action onClosed = null)
        {
            Craft.OpenUI<MarketPlaceUI>(new MarketPlaceUIArgs()
            {
                OnClosed = () => { onClosed?.Invoke(); }
            });
        }

        public bool ShouldShowLevelButton()
        {
            return Craft.Get<LinearLevelSystem>().GetProgress(LinearLevelType.Normal) >= LevelButtonShowProgress;
        }

        public bool BuyItem(MarketPlaceItem marketPlaceItem)
        {
            if (Craft.Get<CraftInventorySystem>().GetInventoryItem(ItemId.Currency1)
                .TrySpend(marketPlaceItem.ItemData.Price))
            {
                if (marketPlaceItem.ItemType == ItemType.Skin)
                {
                    Data.Value.ClaimSkin(marketPlaceItem.ItemIndex);
                    Dispatcher.Send(MarketPlaceEvents.SkinBought, new MarketPlaceEventArgs()
                    {
                        MarketPlaceItem = marketPlaceItem
                    });
                }
                else if (marketPlaceItem.ItemType == ItemType.Environment)
                {
                    Data.Value.ClaimEnvironment(marketPlaceItem.ItemIndex);
                    Dispatcher.Send(MarketPlaceEvents.EnvironmentBought, new MarketPlaceEventArgs()
                    {
                        MarketPlaceItem = marketPlaceItem
                    });
                }
                else if (marketPlaceItem.ItemType == ItemType.Spatula)
                {
                    Data.Value.ClaimSpatula(marketPlaceItem.ItemIndex);
                    Dispatcher.Send(MarketPlaceEvents.SpatulaBought, new MarketPlaceEventArgs()
                    {
                        MarketPlaceItem = marketPlaceItem
                    });
                }

                return true;
            }
            else
            {
                Craft.GetUI<WarningUI>().ShowNotEnoughCoin(-500);
                return false;
            }
        }

        public void SelectItem(MarketPlaceItem marketPlaceItem)
        {
            if (marketPlaceItem.ItemType == ItemType.Skin)
            {
                Data.Value.SelectSkin(marketPlaceItem.ItemIndex);
            }
            else if (marketPlaceItem.ItemType == ItemType.Environment)
            {
                Data.Value.SelectEnvironment(marketPlaceItem.ItemIndex);
            }
            else if (marketPlaceItem.ItemType == ItemType.Spatula)
            {
                Data.Value.SelectSpatula(marketPlaceItem.ItemIndex);
            }
        }

        public bool ShouldShowOnRoadMap(int level)
        {
            return UnlockLevels.Contains(level);
        }

        public bool ShouldShowNotificationIcon()
        {
            int coin = Craft.Get<CraftInventorySystem>().GetInventoryItem(ItemId.Currency1).Amount;
            var marketScreen = Craft.GetUI<MarketPlaceUI>();
            return marketScreen.CanBuyAnyItem(coin);
        }

        public bool ShouldOffer(int level)
        {
            return UnlockLevels.Contains(level);
        }
    }

    public class MarketPlaceEventArgs : EventArgs
    {
        public MarketPlaceItem MarketPlaceItem;
    }

    public enum MarketPlaceEvents
    {
        SkinBought,
        EnvironmentBought,
        SpatulaBought
    }
}