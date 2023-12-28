using System;
using System.Collections.Generic;
using _Game.Systems._CoreSystem.Scripts;
using Library.ScreenManagement.Scripts;

namespace Modules.Inventory
{
    public class CraftInventorySystem : BaseCraftSystem, ICraftSystem
    {
        public Action<InventoryItem> OnItemChangedEvent;
        public List<InventoryItem> InventoryItems = new List<InventoryItem>();

        public void OnInit()
        {
            // create inventory item for each item id in for loop
            foreach (var itemId in (ItemId[])System.Enum.GetValues(typeof(ItemId)))
            {
                InventoryItems.Add(new InventoryItem(itemId, 0));
            }

            foreach (var inventoryItem in InventoryItems)
            {
                inventoryItem.OnValueChanged += OnItemChanged;
            }

            ClaimAllQues();
        }

        private void OnItemChanged(InventoryItem inventoryItem)
        {
            OnItemChangedEvent?.Invoke(inventoryItem);
        }

        public void OnDestroy()
        {
            foreach (var inventoryItem in InventoryItems)
            {
                inventoryItem.OnValueChanged -= OnItemChanged;
            }
        }

        public void ClaimAllQues()
        {
            foreach (var inventoryItem in InventoryItems)
            {
                inventoryItem.ClaimAllQue();
            }
        }

        public void QueItemList(List<ItemData> itemDatas)
        {
            foreach (ItemData data in itemDatas)
            {
                QueItemData(data);
            }
        }

        public void QueItemData(ItemData itemData)
        {
            var inventoryItem = GetInventoryItem(itemData);
            if (inventoryItem != null)
            {
                inventoryItem.AddQue(itemData.Amount);
            }
        }

        public InventoryItem GetInventoryItem(ItemId itemId)
        {
            return InventoryItems.Find(x => x.ItemId == itemId);
        }

        public InventoryItem GetInventoryItem(ItemData itemData)
        {
            return InventoryItems.Find(x => x.ItemId == itemData.ItemId);
        }

        public ItemMeta GetItemMeta(ItemId itemId)
        {
            return CraftInventorySo.Instance.GetItemMeta(itemId);
        }

        public void AddItemDatas(List<ItemData> itemDatas)
        {
            foreach (var itemData in itemDatas)
            {
                AddItemData(itemData);
            }
        }

        public void AddItemData(ItemData itemData)
        {
            // find inventory item with item id
            var inventoryItem = GetInventoryItem(itemData);
            if (inventoryItem != null)
            {
                inventoryItem.Add(itemData.Amount);
            }
        }
        public List<BaseScreen> GetScreens()
        {
            return CraftInventorySo.Instance.Screens;
        }
    }
}