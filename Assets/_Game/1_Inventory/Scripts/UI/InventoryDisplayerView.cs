using _Game._0_CraftCore.Scripts.Core;
using TMPro;
using UnityEngine;

namespace Modules.Inventory.UI
{
    public class InventoryDisplayerView : MonoBehaviour
    {
        [SerializeField] private TMP_Text _tmpText;
        [SerializeField] private ItemId _itemId;
        [SerializeField] private InventoryItem _inventoryItem;
        private bool _isInitialized;

        private void Start()
        {
            if (_isInitialized == false)
            {
                Initialize();
            }

            UpdateAmount();
        }

        private void Initialize()
        {
            _inventoryItem = Craft.Get<CraftInventorySystem>().GetInventoryItem(_itemId);
            _inventoryItem.OnValueChanged += UpdateAmount;
            _isInitialized = true;
        }

        private void OnDestroy()
        {
            if (_isInitialized)
            {
                _inventoryItem.OnValueChanged -= UpdateAmount;
                _isInitialized = false;
            }
        }

        private void UpdateAmount(InventoryItem obj)
        {
            UpdateAmount();
        }

        private void UpdateAmount()
        {
            _tmpText.text = _inventoryItem.GetDisplayAmount().ToString();
        }
    }
}