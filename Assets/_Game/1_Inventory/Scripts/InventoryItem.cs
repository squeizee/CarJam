using System;
using _Game.Library.PersistentDataNS.Scripts;
using DG.Tweening;
using UnityEngine;

namespace Modules.Inventory
{
    public class InventoryItem
    {
        private string _name;
        private PersistentInt _amount;
        private PersistentInt _que;
        public Action<InventoryItem> OnValueChanged;
        public int Amount => _amount.Value;
        public Action<int> OnAdded;
        public Action<int> OnSpent;

        public ItemId ItemId;

        public InventoryItem(ItemId itemId, int initialValue) : this(itemId, itemId.ToString(), initialValue)
        {
        }

        private InventoryItem(ItemId itemId, string key, int initialValue)
        {
            ItemId = itemId;
            _name = key;
            _amount = new PersistentInt(nameof(InventoryItem) + key + "_Amount", initialValue);
            _que = new PersistentInt(nameof(InventoryItem) + key + "_Que", 0);
        }

        public bool TrySpend(int spendAmount)
        {
            if (CanSpend(spendAmount))
            {
                OnSpent?.Invoke(spendAmount);
                _amount.Value -= spendAmount;
                OnValueChanged?.Invoke(this);
                return true;
            }

            return false;
        }

        public bool CanSpend(int spendAmount)
        {
            return _amount >= spendAmount;
        }

        public void Add(int amountToAdd)
        {
            OnAdded?.Invoke(amountToAdd);
            _amount.Value += amountToAdd;
            OnValueChanged?.Invoke(this);
        }

        public int GetUnclaimedAmount()
        {
            return _que.Value;
        }

        public void ClaimQue(int amountToClaim)
        {
            amountToClaim = Mathf.Min(amountToClaim, _que);
            _que.Value -= amountToClaim;
            OnValueChanged?.Invoke(this);
        }

        public void ClaimAllQue()
        {
            ClaimQue(_que);
        }

        public void SetAmount(int amountToSet)
        {
            _amount.Value = amountToSet;
            OnValueChanged?.Invoke(this);
        }

        public void AddQue(int amountToAdd)
        {
            OnAdded?.Invoke(amountToAdd);
            _amount.Value += amountToAdd;
            _que.Value += amountToAdd;

            OnValueChanged?.Invoke(this);
        }

        public int GetDisplayAmount()
        {
            return _amount.Value - _que.Value;
        }
    }
}