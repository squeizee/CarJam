using System.Collections.Generic;
using Library.CoroutineSystem.Scripts;
using UnityEngine;

namespace Library.Utility.Scripts.ObjectPooling
{
    public class UnityObjectPool<T> where T : Component
    {
        private const int DefaultIncreaseAmount = 5;
        
        public int Capacity => _availableItems.Count;
        
        private readonly T _prefab;
        private readonly Transform _container;

        private readonly Queue<T> _availableItems;
        private readonly List<T> _busyItems;
     
        public UnityObjectPool(T prefab, int capacity, Transform container = null)
        {
            _prefab = prefab;

            if (container == null)
            {
                container = new GameObject($"[PoolContainer-{prefab.name}]").transform;
                container.SetParent(null);
            }
            
            _container = container;

            _availableItems = new Queue<T>();
            _busyItems = new List<T>();

            Create(capacity);
        }

        private void Create(int capacity)
        {
            for (int i = 0; i < capacity; i++)
            {
                T instantiatedItem = Object.Instantiate(_prefab, _container) as T;
                instantiatedItem.gameObject.SetActive(false);
                _availableItems.Enqueue(instantiatedItem);
            }
        }

        private void IncreaseCapacity(int increaseAmount)
        {
            for (int i = 0; i < increaseAmount; i++)
            {
                T instantiatedItem = Object.Instantiate(_prefab, _container) as T;
                instantiatedItem.gameObject.SetActive(false);
                _availableItems.Enqueue(instantiatedItem);
            }
        }

        public T Spawn()
        {
            return Spawn(_container);
        }

        public T Spawn(Transform parent, Vector3? position = null, Quaternion? rotation = null, Vector3? scale = null)
        {
            if (Capacity <= 0)
            {
                IncreaseCapacity(DefaultIncreaseAmount);
            }

            T item = _availableItems.Dequeue();
            item.transform.SetParent(parent, false);
            
            if(position != null) item.transform.localPosition = position.Value;
            if(rotation != null) item.transform.localRotation = rotation.Value;
            if(scale != null) item.transform.localScale = scale.Value;
                
            _busyItems.Add(item);

            return item;
        }

        public void Despawn(T item)
        {
            item.gameObject.SetActive(false);
            item.transform.SetParent(_container);
            
            item.transform.localScale = _prefab.transform.localScale;
            item.transform.localPosition = Vector3.zero;
            item.transform.localRotation = _prefab.transform.localRotation;
            
            if (_busyItems.Contains(item)) _busyItems.Remove(item);

            _availableItems.Enqueue(item);
        }

        public void Despawn(T item, float recycleDelay = 0f)
        {
            if (recycleDelay <= 0f)
            {
                Despawn(item);
            }
            else
            {
                CoroutineManager.DoAfterGivenTime(recycleDelay, () =>
                {
                    Despawn(item);
                });   
            }
        }
    }
}