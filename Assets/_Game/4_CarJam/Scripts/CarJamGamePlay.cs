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


        private List<GameElement> _gameElementList;
        private List<VehicleController> _vehicleList;
        private List<CharacterController> _characterList;
        private CharacterController _selectedCharacter;
        private GameElement _lastStateChangedGameElement;

        private List<Tween> _listSequences = new List<Tween>();
        private List<Tween> _listCheckCompletedTweens = new List<Tween>();

        public override void Initialize(BaseGamePlayStartArgs baseGamePlayStartArgs)
        {
            base.Initialize(baseGamePlayStartArgs);

            _gameElementList = GetComponentsInChildren<GameElement>().ToList();
            gridController.Initialize(_gameElementList);

            _vehicleList = _gameElementList.Where(x => x is VehicleController).Cast<VehicleController>().ToList();
            _characterList = _gameElementList.Where(x => x is CharacterController).Cast<CharacterController>().ToList();

            InitializeVehicleElements();
            InitializeCharacterElements();
            MatchCharacterToVehicles();

            roadController = GetComponentInChildren<RoadController>();
            roadController.Initialize();

            SubscribeEvents();
            GamePlayState = GamePlayState.Started;
            CreateEnvironment();

            CarJamCameraController.Instance.UpdateCameraPosition(gridController.GetWorldRect());
        }

        // create environment
        private void CreateEnvironment()
        {
            var environment = Instantiate(CarJamSo.Instance.EnvironmentPrefab, transform);
            environmentController = environment.GetComponent<EnvironmentController>();
            environmentController.Initialize(gridController);
        }

        private void InitializeVehicleElements()
        {
            foreach (var vehicle in _vehicleList)
            {
                var position = gridController.GetCellPosition(vehicle.transform.position);
                var worldPosition = gridController.GetWorldPosition(position);

                vehicle.Initialize(position, worldPosition, OnStateChange);
                vehicle.OnVehicleFull += OnVehicleFull;
            }
        }

        private void InitializeCharacterElements()
        {
            foreach (var character in _characterList)
            {
                var position = gridController.GetCellPosition(character.transform.position);
                var worldPosition = gridController.GetWorldPosition(position);

                character.Initialize(position, worldPosition, OnStateChange);
            }
        }

        private void MatchCharacterToVehicles()
        {
            foreach (var character in _characterList)
            {
                foreach (var vehicle in _vehicleList.Where(x => x.GameElementColor == character.GameElementColor))
                {
                    foreach (var doorPosition in vehicle.DoorPositions())
                    {
                        character.VehicleDoorPositions.Add(doorPosition, vehicle);
                    }

                    foreach (var seatPosition in vehicle.SeatPositions())
                    {
                        character.VehicleSeatPositions.Add(seatPosition, vehicle);
                    }
                }
            }
        }

        private void SubscribeEvents()
        {
            Craft.Get<CraftInputSystem>().UserButtonDown += OnUserButtonDown;
            Craft.Get<CraftTimeSystem>().Dispatcher.Subscribe(TimeIntervals.OnSecond, CheckLevelComplete);
        }

        private void OnDestroy()
        {
            Craft.Get<CraftInputSystem>().UserButtonDown -= OnUserButtonDown;
            Craft.Get<CraftTimeSystem>().Dispatcher.Unsubscribe(TimeIntervals.OnSecond, CheckLevelComplete);
            _listSequences.ForEach(x => x?.Kill());
            _listCheckCompletedTweens.ForEach(x => x?.Kill());
        }

        private void OnStateChange(GameElement gameElement)
        {
            _lastStateChangedGameElement = gameElement;

            foreach (var vehicle in _vehicleList.Where(x => x.State == GameElement.GameElementState.Waiting))
            {
                vehicle.TriggerOnBeforeMoveIfFull();
            }
        }

        public override void CheckLevelComplete()
        {
            if (GamePlayState == GamePlayState.Started)
            {
                if (_gameElementList.TrueForAll(x => x.State == GameElement.GameElementState.Completed))
                {
                    GamePlayState = GamePlayState.Completed;
                    OnGamePlayCompleted?.Invoke();
                    _listCheckCompletedTweens.ForEach(x => x?.Kill());
                }
            }
        }


        private void UnselectCharacter()
        {
            if (!_selectedCharacter)
                return;

            _selectedCharacter = null;
        }

        private void OnVehicleFull(VehicleController vehicle)
        {
            if (vehicle.RoadPositions.Count == 0)
            {
                if (roadController.FindRoadAhead(vehicle.transform.position, vehicle.transform.forward, out var road1,
                        out var intersection2))
                {
                    vehicle.SetRoadPositions(road1.CalculateRoadPositions(vehicle.transform.position, intersection2));
                }
            }

            float angle = 0;
            Sequence roadSequence = DOTween.Sequence();
            Vector3 oldPosition = vehicle.transform.position;
            while (vehicle.NextTargetPointIndex < vehicle.RoadPositions.Count)
            {
                Vector3 targetPosition = vehicle.RoadPositions[vehicle.NextTargetPointIndex];
                Vector3 direction = targetPosition - vehicle.RoadPositions[vehicle.NextTargetPointIndex - 1];
                if (gridController.CanVehicleReachIntersectionPoint(vehicle, angle, targetPosition,
                        out var newTargetPosition))
                {
                    vehicle.PositionInGrid = gridController.GetCellPosition(targetPosition);
                    roadSequence.AppendCallback(vehicle.OnMove);
                    roadSequence.Append(vehicle.MoveToPosition(targetPosition, oldPosition));
                    angle = Vector3.SignedAngle(direction, Vector3.forward, Vector3.down);
                    roadSequence.Join(vehicle.transform.DORotate(angle * Vector3.up, 0.1f).SetEase(Ease.Linear));
                    vehicle.NextTargetPointIndex++;
                    oldPosition = targetPosition;
                }
                else
                {
                    vehicle.PositionInGrid = gridController.GetCellPosition(newTargetPosition);
                    roadSequence.Append(vehicle.MoveToPosition(newTargetPosition, oldPosition));
                    roadSequence.AppendCallback(vehicle.OnWaiting);
                    return;
                }
            }

            vehicle.PositionInGrid = new Vector2Int(13, 13);
            roadSequence.AppendCallback(environmentController.PlayParticles);
            roadSequence.AppendCallback(vehicle.OnComplete);
            // check completed
            roadSequence.AppendCallback(CheckLevelComplete);

            float duration1 = roadSequence.Duration();
            _listCheckCompletedTweens.Add(DOVirtual.DelayedCall(duration1, CheckLevelComplete));
            _listSequences.Add(roadSequence);
            return;
            //
            // if (roadController.FindRoadAhead(vehicle.transform.position, vehicle.transform.forward, out var road,
            //         out var intersection))
            // {
            //     angle = Vector3.SignedAngle(vehicle.transform.forward, Vector3.forward, Vector3.down);
            //
            //     if (gridController.CanVehicleReachIntersectionPoint(vehicle, angle, intersection,
            //             out var newIntersection) == false)
            //     {
            //         if (newIntersection == Vector3.zero)
            //         {
            //             roadSequence.AppendCallback(vehicle.OnWaiting);
            //             return;
            //         }
            //
            //         intersection = newIntersection;
            //         vehicle.PositionInGrid = gridController.GetCellPosition(intersection);
            //         roadSequence.Append(vehicle.MoveToPosition(intersection));
            //         roadSequence.AppendCallback(vehicle.OnWaiting);
            //         return;
            //     }
            //
            //     vehicle.PositionInGrid = gridController.GetCellPosition(intersection);
            //     roadSequence.AppendCallback(vehicle.OnMove);
            //     roadSequence.Append(vehicle.MoveToPosition(intersection));
            //     angle = Vector3.SignedAngle(road.GetDirection(), Vector3.forward, Vector3.down);
            //     roadSequence.Append(vehicle.transform.DORotate(angle * Vector3.up, 0.1f).SetEase(Ease.Linear));
            //
            //     while (road.NextRoad != null)
            //     {
            //         // if road distance less than 0.2f get next road
            //
            //         angle = Vector3.SignedAngle(road.GetDirection(), Vector3.forward, Vector3.down);
            //
            //         if (gridController.CanVehicleReachIntersectionPoint(vehicle, angle,
            //                 road.GetIntersectionPointToNextRoad(), out newIntersection) == false)
            //         {
            //             if (newIntersection == Vector3.zero)
            //             {
            //                 roadSequence.AppendCallback(vehicle.OnWaiting);
            //                 return;
            //             }
            //
            //             intersection = newIntersection;
            //             vehicle.PositionInGrid = gridController.GetCellPosition(intersection);
            //             roadSequence.Append(vehicle.MoveToPosition(intersection));
            //             roadSequence.AppendCallback(vehicle.OnWaiting);
            //             return;
            //         }
            //
            //         intersection = road.GetIntersectionPointToNextRoad();
            //         vehicle.PositionInGrid = gridController.GetCellPosition(intersection);
            //         roadSequence.Append(vehicle.MoveToPosition(intersection));
            //         roadSequence.Join(vehicle.transform.DORotate(angle * Vector3.up, 0.1f).SetEase(Ease.Linear));
            //         road = roadController.GetNextRoad(road);
            //     }
            //
            //     if (gridController.CanVehicleReachIntersectionPoint(vehicle, angle, road.End.position,
            //             out newIntersection) == false)
            //     {
            //         if (newIntersection == Vector3.zero)
            //         {
            //             roadSequence.AppendCallback(vehicle.OnWaiting);
            //             return;
            //         }
            //
            //         intersection = newIntersection;
            //
            //         vehicle.PositionInGrid = gridController.GetCellPosition(intersection);
            //         roadSequence.Append(vehicle.MoveToPosition(intersection));
            //         roadSequence.AppendCallback(vehicle.OnWaiting);
            //         return;
            //     }
            //
            //     angle = Vector3.SignedAngle(road.GetDirection(), Vector3.forward, Vector3.down);
            //     vehicle.PositionInGrid = gridController.GetMaxPoint();
            //     var cornerPosition = gridController.GetWorldPosition(vehicle.PositionInGrid);
            //     vehicle.PositionInGrid = new Vector2Int(13, 13);
            //     var finalPosition = gridController.GetWorldPosition(gridController.GetMaxPoint(Vector2Int.right * 5));
            //     roadSequence.Append(vehicle.MoveToPosition(cornerPosition));
            //     roadSequence.Join(vehicle.transform.DORotate(angle * Vector3.up, 0.1f).SetEase(Ease.Linear));
            //     roadSequence.AppendCallback(environmentController.PlayParticles);
            //     roadSequence.AppendCallback(vehicle.OnComplete);
            //     // check completed
            //     roadSequence.AppendCallback(CheckLevelComplete);
            //
            //     float duration = roadSequence.Duration();
            //     _listCheckCompletedTweens.Add(DOVirtual.DelayedCall(duration, CheckLevelComplete));
            //     roadSequence.Append(vehicle.MoveToPosition(finalPosition));
            //     _listSequences.Add(roadSequence);
            // }
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
                    else if (seat.IsEmpty() == false)
                    {
                        seat = vehicle.GetAvailableSeat();
                    }

                    if (seat.IsReserved())
                    {
                        return;
                    }

                    if (gridController.CanCharacterReachVehicle(_selectedCharacter, vehicle,
                            out List<PathFind.Point> path))
                    {
                        seat.ReserveSeat(_selectedCharacter.transform);
                        _selectedCharacter.OnSeatReserved();
                        Sequence moveSequence = DOTween.Sequence();

                        moveSequence.Append(_selectedCharacter.MoveAlongPath(path, false));
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