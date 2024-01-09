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
        private CharacterController _selectedCharacter;
        
        public override void Initialize(BaseGamePlayStartArgs baseGamePlayStartArgs)
        {
            
            base.Initialize(baseGamePlayStartArgs);

            _listGameElements = GetComponentsInChildren<GameElement>().ToList();
            gridController.Initialize(_listGameElements);

            SetVehiclesToCharacters();

            SubscribeEvents();
            GamePlayState = GamePlayState.Started;
        }

        private void SetVehiclesToCharacters()
        {
            foreach (var gameElement in _listGameElements)
            {
                var position = gridController.GetCellPosition(gameElement.transform.position);
                
                gameElement.Initialize(position, OnStateChange);

                switch (gameElement)
                {
                    case VehicleController vehicle:
                        vehicle.OnBeforeMove += gridController.CheckForwardPath;
                        break;
                    case CharacterController character:
                    {
                        var vehicleController = _listGameElements.Find(x =>
                            x.GameElementColor == character.GameElementColor &&
                            x is VehicleController) as VehicleController;
                        if (vehicleController)
                        {
                            character.VehicleDoorPositions.Add(vehicleController, vehicleController.DoorPositions);
                            character.VehicleSeatPositions.Add(vehicleController, vehicleController.SeatPositions);
                        }
                        break;
                    }
                }
            }
        }
        private void SubscribeEvents()
        {
            Craft.Get<CraftInputSystem>().UserButtonDown += OnUserButtonDown;
            Craft.Get<CraftTimeSystem>().Dispatcher.Subscribe(TimeIntervals.OnSecond, CheckCompleted);
        }

        private void OnStateChange()
        {
            foreach (var waitingGameElement in _listGameElements.Where(x =>
                         x.State == GameElement.GameElementState.Waiting))
            {
                if (waitingGameElement is VehicleController vehicleController)
                {
                    vehicleController.Move();
                }
            }
        }

        private void CheckCompleted()
        {
            if (_listGameElements.TrueForAll(x => x.State == GameElement.GameElementState.Completed))
            {
                OnGamePlayCompleted?.Invoke();
            }
        }

        private void OnDestroy()
        {
            Craft.Get<CraftInputSystem>().UserButtonDown -= OnUserButtonDown;
            Craft.Get<CraftTimeSystem>().Dispatcher.Unsubscribe(TimeIntervals.OnSecond, CheckCompleted);
        }
        
        private void UnselectCharacter()
        {
            if (!_selectedCharacter)
                return;
            
            _selectedCharacter = null;
        }

        #region Input Handling

        private void OnUserButtonDown(Vector3 obj)
        {
            if (!ConstrainsController.CanMakeAMove())
            {
                return;
            }

            if (GamePlayState != GamePlayState.Started)
            {
                return;
            }
            
            if (Craft.Get<CraftInputSystem>()
                .GetGameObjectUnderMouse(LayerMask.GetMask("GameElement"), out var touchedGameElement, out var hit))
            {
                OnObjectTouched(touchedGameElement);
            }
            else if (Craft.Get<CraftInputSystem>()
                         .GetGameObjectUnderMouse(LayerMask.GetMask("Ground"), out var touchedGround, out var hit2) 
                     && _selectedCharacter)
            {
               bool isValidClick = gridController.FindPath(touchedGround.transform.position, _selectedCharacter);
               
               _selectedCharacter.ShowEmoji(!isValidClick);
               _selectedCharacter.Tapped();
               UnselectCharacter();
            }
        }

        private void OnObjectTouched(GameObject touchedObject)
        {
            var gameElement = touchedObject.GetComponentInParent<GameElement>();

            switch (gameElement)
            {
                case VehicleController vehicle:
                    bool isValidClick = false;
                    
                    if (!_selectedCharacter)
                    {
                        vehicle.Tapped();
                        break;
                    }
                    
                    var seat = touchedObject.GetComponentInParent<Seat>();

                    if (!seat)
                    {
                        seat = vehicle.GetAvailableSeat();
                    }

                    if (!seat)
                    {
                        _selectedCharacter.Tapped();
                        _selectedCharacter.ShowEmoji(!isValidClick);
                        UnselectCharacter();
                        break;
                    }
                    
                    if (seat.IsEmpty)
                    {
                        isValidClick = gridController.FindPathToVehicle(vehicle, _selectedCharacter,seat);
                    }
                    _selectedCharacter.Tapped();
                    _selectedCharacter.ShowEmoji(!isValidClick);
                    UnselectCharacter();
                    break;
                case  CharacterController character:

                    if (!_selectedCharacter)
                    {
                        _selectedCharacter = character;
                        _selectedCharacter.Tapped();
                        break;
                    }
                    
                    if(_selectedCharacter == character)
                        break;
                    
                    _selectedCharacter.Tapped();
                    UnselectCharacter();
                    
                    _selectedCharacter = character;
                    _selectedCharacter.Tapped();
                    break;
            }
        }
        #endregion
    }
}