using System.Collections.Generic;
using System.Linq;
using _Game._0_CraftCore.Scripts.Core;
using _Game._3_GamePlay.Scripts;
using _Game.Library.CraftTime;
using DG.Tweening;
using Modules.Shared.Controller;
using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class CarJamGamePlay : BaseGamePlay
    {
        [SerializeField] private GridController gridController;
        [SerializeField] private RoadController roadController;
        [SerializeField] private EnvironmentController environmentController;


        private List<GameElement> _listGameElements;
        private CharacterController _selectedCharacter;

        public override void Initialize(BaseGamePlayStartArgs baseGamePlayStartArgs)
        {
            base.Initialize(baseGamePlayStartArgs);

            _listGameElements = GetComponentsInChildren<GameElement>().ToList();
            gridController.Initialize(_listGameElements);

            roadController = GetComponentInChildren<RoadController>();
            roadController.Initialize();

            SetVehiclesToCharacters();
            SubscribeEvents();
            GamePlayState = GamePlayState.Started;
            CreateEnvironment();
        }

        // create environment
        private void CreateEnvironment()
        {
            var environment = Instantiate(CarJamSo.Instance.EnvironmentPrefab, transform);
            environmentController = environment.GetComponent<EnvironmentController>();
            environmentController.Initialize(gridController);
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
                        //vehicle.OnBeforeMove += gridController.CheckForwardPath;
                        vehicle.OnVehicleFull += OnVehicleFull;
                        break;
                    case CharacterController character:
                    {
                        foreach (var vElement in _listGameElements.Where(x =>
                                     x.GameElementColor == character.GameElementColor && x is VehicleController))
                        {
                            var vehicle = vElement as VehicleController;

                            if (!vehicle) continue;

                            foreach (var doorPosition in vehicle.DoorPositions)
                            {
                                character.VehicleDoorPositions.Add(doorPosition, vehicle);
                            }

                            foreach (var seatPosition in vehicle.SeatPositions)
                            {
                                character.VehicleSeatPositions.Add(seatPosition, vehicle);
                            }
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
                    vehicleController.TriggerOnBeforeMoveIfFull();
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

        private void OnVehicleFull(VehicleController vehicle)
        {
            if (roadController.FindRoadAhead(vehicle.transform.position, vehicle.transform.forward, out var road,
                    out var intersection))
            {
                Vector3 lastPosition = transform.localPosition;
                float angle = 0;
                Sequence roadSequence = DOTween.Sequence();

                roadSequence.AppendCallback(vehicle.OnMove);
                roadSequence.Append(vehicle.MoveToPosition(intersection));

                while (road.NextRoad != null)
                {
                    angle = Vector3.SignedAngle(road.GetDirection(), Vector3.forward, Vector3.down);

                    roadSequence.Append(vehicle.MoveToPosition(road.GetIntersectionPointToNextRoad()));
                    roadSequence.Join(vehicle.transform.DORotate(angle * Vector3.up, 0.1f).SetEase(Ease.Linear));
                    road = roadController.GetNextRoad(road);
                }

                vehicle.PositionInGrid = gridController.GetCellPosition(road.End.position);
                angle = Vector3.SignedAngle(road.GetDirection(), Vector3.forward, Vector3.down);
                roadSequence.Append(vehicle.MoveToPosition(road.End.position));
                roadSequence.Join(vehicle.transform.DORotate(angle * Vector3.up, 0.1f).SetEase(Ease.Linear));
                roadSequence.AppendCallback(vehicle.OnComplete);
            }
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
                if (gridController.MoveToPosition(_selectedCharacter, touchedGround.transform.position,
                        out Sequence sequence))
                {
                    _selectedCharacter.HideEmoji();
                    _selectedCharacter.Tapped();
                    UnselectCharacter();
                }
                else
                {
                    _selectedCharacter.ShowEmoji();
                    _selectedCharacter.Tapped();
                    UnselectCharacter();
                }
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

                    if (vehicle.IsValidCharacter(_selectedCharacter) == false)
                    {
                        _selectedCharacter.Tapped();
                        _selectedCharacter.ShowEmoji();
                        UnselectCharacter();
                        break;
                    }

                    if (vehicle.GetAvailableSeat() == null)
                    {
                        _selectedCharacter.Tapped();
                        _selectedCharacter.ShowEmoji();
                        UnselectCharacter();
                        break;
                    }

                    var seat = touchedObject.GetComponentInParent<Seat>();

                    if (seat == null)
                    {
                        seat = vehicle.GetAvailableSeat();
                    }
                    else if (seat.IsEmpty == false)
                    {
                        seat = vehicle.GetAvailableSeat();
                    }

                    if (gridController.CanCharacterReachVehicle(_selectedCharacter, vehicle,
                            out List<PathFind.Point> path))
                    {
                        seat.ReserveSeat(_selectedCharacter.transform);
                        Sequence moveSequence = DOTween.Sequence();

                        moveSequence.Append(_selectedCharacter.MoveAlongPath(path));
                        moveSequence.Append(_selectedCharacter.MoveToVehicle(vehicle, seat));

                        _selectedCharacter.HideEmoji();
                        _selectedCharacter.Tapped();
                        UnselectCharacter();
                    }
                    else
                    {
                        _selectedCharacter.ShowEmoji();
                        _selectedCharacter.Tapped();
                        UnselectCharacter();
                    }

                    break;
                case CharacterController character:

                    if (character.State == GameElement.GameElementState.Completed)
                        break;

                    if (!_selectedCharacter)
                    {
                        _selectedCharacter = character;
                        _selectedCharacter.Tapped();
                        break;
                    }

                    if (_selectedCharacter == character)
                    {
                        _selectedCharacter.Tapped();
                        UnselectCharacter();
                        break;
                    }

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