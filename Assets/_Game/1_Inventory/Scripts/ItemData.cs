namespace Modules.Inventory
{
    public class ItemData
    {
        public ItemId ItemId;
        public int Amount;

        public ItemData(ItemId itemId, int amount)
        {
            ItemId = itemId;
            Amount = amount;
        }

        // add
        public void Add(int amountToAdd)
        {
            Amount += amountToAdd;
        }

        // add with another item
        public void Add(ItemData itemData)
        {
            if (itemData.ItemId == ItemId)
            {
                Add(itemData.Amount);
            }
        }

        // override plus operator
        public static ItemData operator +(ItemData itemData1, ItemData itemData2)
        {
            if (itemData1.ItemId == itemData2.ItemId)
            {
                return new ItemData(itemData1.ItemId, itemData1.Amount + itemData2.Amount);
            }

            return itemData1;
        }

        // override minus operator
        public static ItemData operator -(ItemData itemData1, ItemData itemData2)
        {
            if (itemData1.ItemId == itemData2.ItemId)
            {
                return new ItemData(itemData1.ItemId, itemData1.Amount - itemData2.Amount);
            }

            return itemData1;
        }
    }
}