using System;
using System.Collections.Generic;
using System.Linq;
using _Game._0_CraftCore.Scripts.Core;
using _Game._3_GamePlay.Scripts;
using _Game.Library.CraftTime;
using Modules.Shared.Controller;
using Sirenix.OdinInspector;
using Sirenix.Utilities;
using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class CarJamGamePlay : BaseGamePlay
    {
        [SerializeField] private GridController gridController;
        
        private List<GameElement> _listGameElements;
        private List<CharacterController> _listCharacters;
        private List<VehicleController> _listVehicles;
        private CharacterController _selectedCharacter;

        public override void Initialize(BaseGamePlayStartArgs baseGamePlayStartArgs)
        {
            base.Initialize(baseGamePlayStartArgs);
            
            _listGameElements = GetComponentsInChildren<GameElement>().ToList();
            _listGameElements.ForEach(x => x.Initialize());

            _listCharacters = GetComponentsInChildren<CharacterController>().ToList();
            _listVehicles = GetComponentsInChildren<VehicleController>().ToList();

            for (int i = 0; i < _listCharacters.Count; i++)
            {
                var vehicle = _listVehicles.Find(x => x.GameElementColor == _listCharacters[i].GameElementColor);
                _listCharacters[i].VehicleDoorPositions.Add(vehicle,vehicle.DoorPositions.ToList());
            }
            
            gridController.Initialize(_listGameElements);
            SubscribeEvents();
            GamePlayState = GamePlayState.Started;
        }

        private void SubscribeEvents()
        {
            Craft.Get<CraftInputSystem>().UserButtonDown += OnUserButtonDown;
            Craft.Get<CraftTimeSystem>().Dispatcher.Subscribe(TimeIntervals.OnSecond, CheckCompleted);
            
        }

        private void CheckCompleted()
        {
            if (_listGameElements.All(x => x.State == GameElement.GameElementState.Completed))
            {
                OnGamePlayCompleted?.Invoke();
            }
        }

        private void OnDestroy()
        {
            Craft.Get<CraftInputSystem>().UserButtonDown -= OnUserButtonDown;
            Craft.Get<CraftTimeSystem>().Dispatcher.Unsubscribe(TimeIntervals.OnSecond, CheckCompleted);
        }
        

        #region Input Handling

        private void OnUserButtonDown(Vector3 obj)
        {
            if (ConstrainsController.CanMakeAMove() == false)
            {
                return;
            }

            if (GamePlayState != GamePlayState.Started)
            {
                return;
            }

            LayerMask layerMask = LayerMask.GetMask("GameElement");
            if (_selectedCharacter)
            {
                layerMask = LayerMask.GetMask("Ground");
                
                if (Craft.Get<CraftInputSystem>()
                    .GetGameObjectUnderMouse(layerMask, out var touchedGround, out var hit))
                {
                    gridController.FindPath(touchedGround.transform.position, _selectedCharacter);
                    _selectedCharacter = null;
                }
            }
            else if (Craft.Get<CraftInputSystem>()
                .GetGameObjectUnderMouse(layerMask, out var objectUnderMouse, out var hit))
            {
                OnObjectTouched(objectUnderMouse);
            }
            else if (Craft.Get<CraftInputSystem>()
                     .GetGameObjectUnderMouseSphere(out var objectUnderMouse2, out var hit1, 0.05f, layerMask))
            {
                OnObjectTouched(objectUnderMouse2);
            }
        }

        private void OnObjectTouched(GameObject touchedObject)
        {
            if (touchedObject.transform.TryGetComponent<CharacterController>(out var characterController))
            {
                _selectedCharacter = characterController;
                _selectedCharacter.OnCorrectAction?.Invoke();
            }
            
        }
        #endregion
    }
}