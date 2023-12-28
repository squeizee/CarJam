using System.ComponentModel;
using _Game._0_CraftCore.Scripts.Core;
using Modules.Inventory;

public partial class SROptions
{
    private CraftInventorySystem inventory => Craft.Get<CraftInventorySystem>();

    [Category("Inventory")]
    public int CoinAmount
    {
        get => inventory.GetInventoryItem(ItemId.Currency1).Amount;
        set => inventory.GetInventoryItem(ItemId.Currency1).SetAmount(value);
    }
}