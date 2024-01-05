using System;
using System.Collections.Generic;
using System.Linq;
using System.Xml.Linq;
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

        private List<GameElement> _waitingGameElements = new();
        public override void Initialize(BaseGamePlayStartArgs baseGamePlayStartArgs)
        {
            base.Initialize(baseGamePlayStartArgs);
            
            _listGameElements = GetComponentsInChildren<GameElement>().ToList();
            gridController.Initialize(_listGameElements);
            
            foreach (var gameElement in _listGameElements)
            {
                gameElement.Initialize(gridController.GetCellPosition(gameElement.transform.position),OnStateChange);
                
                switch (gameElement)
                {
                    case VehicleController vehicle:
                        vehicle.OnBeforeMove += gridController.CheckForwardPath;
                        break;
                    case CharacterController character:
                    {
                        var vehicleController = _listGameElements.Find(x => x.GameElementColor == character.GameElementColor && x is VehicleController) as VehicleController;
                    
                        if (vehicleController)
                            character.VehicleDoorPositions.Add(vehicleController, vehicleController.DoorPositions);
                        break;
                    }
                }
            }
            
            SubscribeEvents();
            GamePlayState = GamePlayState.Started;
        }

        private void SubscribeEvents()
        {
            Craft.Get<CraftInputSystem>().UserButtonDown += OnUserButtonDown;
            Craft.Get<CraftTimeSystem>().Dispatcher.Subscribe(TimeIntervals.OnSecond, CheckCompleted);
            
        }

        private void OnStateChange()
        {
            foreach (var waitingGameElement in _listGameElements.Where(x=>x.State == GameElement.GameElementState.Waiting))
            {
                if (waitingGameElement is VehicleController vehicleController)
                {
                    vehicleController.Move();
                }
            }
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
                    bool isValidClick = gridController.FindPath(touchedGround.transform.position, _selectedCharacter);
                    if(!isValidClick)
                        _selectedCharacter.ShowEmoji(true);
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
            if (touchedObject.transform.parent.TryGetComponent<CharacterController>(out var characterController))
            {
                _selectedCharacter = characterController;
                _selectedCharacter.Tapped();
            }
            else if(touchedObject.transform.parent.TryGetComponent<VehicleController>(out var vehicleController))
            {
                vehicleController.Tapped();
            }
            
        }
        #endregion
    }
}