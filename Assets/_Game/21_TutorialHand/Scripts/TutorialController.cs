using System;
using System.Collections.Generic;
using System.Linq;
using _Game._0_CraftCore.Scripts.Core;
using _Game._4_CarJam.Scripts;
using UnityEngine;

namespace _Game._21_TutorialHand.Scripts
{
    public class TutorialController : MonoBehaviour
    {
        [SerializeField] private List<TutorialPoints> _tutorialPointsList;

        public bool isComplete;

        private List<Vector3> _tutorialHandPositions = new();
        private int _currentIndex;
        
        private GridController _gridController;

        private Vector3 _groundOffset = new Vector3(0, .5f, 0);
        private Vector3 _characterOffset = new Vector3(0,1.75f,0);
        private Vector3 _vehicleOffset = new Vector3(0,.5f,0);

        private float _distance = 4f;
        
        public void Initialize(GridController gridController)
        {
            _gridController = gridController;
            _tutorialHandPositions =
                _gridController.GetWorldPosition(_tutorialPointsList.Select(x => x.position).ToList());

            CalculateWithOffset();
            
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

        public bool IsCorrectObject(TutorialPoints.ObjectType objectType, Vector2Int position)
        {
            return _tutorialPointsList[_currentIndex].objectType == objectType && IsCorrectPosition(position);
        }

        public bool IsCorrectPosition(Vector2Int position)
        {
            return _tutorialPointsList[_currentIndex].position == position;
        }
        
        private void CalculateWithOffset()
        {
            Vector3 cameraPosition = Camera.main.transform.position;
            
            //calculate position with offsets
            for (int i = 0; i < _tutorialPointsList.Count; i++)
            {
                Vector3 offset = _tutorialPointsList[i].objectType switch
                {
                    TutorialPoints.ObjectType.Ground => _groundOffset,
                    TutorialPoints.ObjectType.Character => _characterOffset,
                    TutorialPoints.ObjectType.Vehicle => _vehicleOffset,
                    _ => Vector3.zero
                };
                
                Vector3 targetPosition = _tutorialHandPositions[i] + offset;
                Vector3 direction = cameraPosition - targetPosition;
                direction.Normalize();
                _tutorialHandPositions[i] = targetPosition + direction * _distance;
                
                // switch (_tutorialPointsList[i].objectType)
                // {
                //     case TutorialPoints.ObjectType.Ground:
                //         _tutorialHandPositions[i] = new Vector3(_tutorialHandPositions[i].x + _groundOffset.x
                //             , _groundOffset.y, _tutorialHandPositions[i].z + _groundOffset.z);
                //         break;
                //     case TutorialPoints.ObjectType.Character:
                //         _tutorialHandPositions[i] += _characterOffset;
                //         break;
                //     case TutorialPoints.ObjectType.Vehicle:
                //         _tutorialHandPositions[i] += _vehicleOffset;
                //         break;
                // }
            }
        }
    }
}
[Serializable]
public class TutorialPoints
{
    public enum ObjectType
    {
        Ground = 0,
        Character = 1,
        Vehicle = 2,
    };
    public ObjectType objectType;
    public Vector2Int position;
}