using System;
using System.Collections.Generic;
using _Game._0_CraftCore.Scripts.Core;
using _Game._4_CarJam.Scripts;
using UnityEngine;

namespace _Game._21_TutorialHand.Scripts
{
    public class TutorialController : MonoBehaviour
    {
        [SerializeField] private GridController _gridController;
        [SerializeField] private List<Vector2Int> _tutorialHandPositionsInGrid;

        public bool isComplete;
        
        private List<Vector3> _tutorialHandPositions = new();
        private int _currentIndex;
        
        public void Initialize()
        {
            _tutorialHandPositions = _gridController.GetWorldPosition(_tutorialHandPositionsInGrid);

            _currentIndex = 0;
            Craft.Get<TutorialHandSystem>().ShowHand(_tutorialHandPositions[_currentIndex]);
        }
        public void Next()
        {
            _currentIndex++;
            if (_currentIndex >= _tutorialHandPositions.Count)
            {
                isComplete = true;
                Craft.Get<TutorialHandSystem>().HideHand();
                return;
            }
            Craft.Get<TutorialHandSystem>().ShowHand(_tutorialHandPositions[_currentIndex]);
        }
        public bool IsCorrectPosition(Vector2Int position)
        {
            return _tutorialHandPositionsInGrid[_currentIndex] == position;
        }
    }

    [Serializable]
    public class TutorialPoints
    {
        public enum ObjectType
        {
            Vehicle,
            Character
        };
        public ObjectType objectType;
        public Vector2Int position;
    }
}