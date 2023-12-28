using System;
using System.Collections.Generic;
using Library.ScreenManagement.Scripts;
using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace Modules.Inventory
{
    [CreateAssetMenu(fileName = "CraftInventorySo", menuName = "Craft/InventorySystem/CraftInventorySo")]
    public class CraftInventorySo : ScriptableSingleton<CraftInventorySo>
    {
        // create a list of item Meta data
        public List<ItemMeta> ItemMetas = new List<ItemMeta>();
        public List<BaseScreen> Screens;

        // Create a get method to get item meta data from item id
        public ItemMeta GetItemMeta(ItemId itemId)
        {
            return ItemMetas.Find(x => x.ItemId == itemId);
        }
    }

    [Serializable]
    public class ItemMeta
    {
        public ItemId ItemId;
        public string Name;
        public Sprite Sprite;
        public GameObject ItemPrefab;
    }
}