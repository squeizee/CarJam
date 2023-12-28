using UnityEngine;

namespace Library.ScreenManagement.Scripts
{
    public class Utility
    {
        private const int InitialSortingOrder = 200;
        private const int SortingOrderIncreaseAmount = 20;
        
        public static int GetCalculatedSortingOrder(int sortingOrderIndex)
        {
            return InitialSortingOrder + SortingOrderIncreaseAmount * sortingOrderIndex;
        }
        
        public static bool IsPrefab(GameObject go)
        {
            return go.scene.name == null;
        }
    }
}