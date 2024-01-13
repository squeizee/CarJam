using System;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class VehicleController : GameElement
    {
        public enum DoorSide
        {
            Left = 0,
            Right = 1,
        }

        public Action<VehicleController> OnVehicleFull;
        public Action<VehicleController> OnBeforeMove;
        public List<Vector2Int> DoorPositions() => _dictDoor.Keys.ToList();
        public List<Vector2Int> SeatPositions() => _dictSeat.Keys.ToList();
        public GameElementDirection GetDirection() => GetElementDirection();


        [SerializeField] private VehicleView vehicleView;

        [SerializeField] private Transform _centerPosition;
        [SerializeField] private Transform vehicleViewParent;
        [SerializeField] private Seat[] seats;

        private int _doorAngle = 90;
        private Seat[] _listSeats;
        private Dictionary<Vector2Int, DoorSide> _dictDoor = new();
        private Dictionary<Vector2Int, Seat> _dictSeat = new();
        public List<Vector3> RoadPositions = new List<Vector3>();
        public int NextTargetPointIndex = 1;
        public Sequence MovementSequence;

        private void OnEnable()
        {
            OnTapped += () =>
            {
                vehicleViewParent.transform.DOComplete();
                vehicleViewParent.transform.DOShakeRotation(.3f, 4.5f);
            };
            OnCrash += () =>
            {
                vehicleViewParent.transform.DOComplete();
                vehicleViewParent.transform.DOShakeRotation(.3f, 4.5f);
            };
        }

        public override void Initialize(Vector2Int positionInGrid, Vector3 worldPos, Action<GameElement> onStateChanged)
        {
            base.Initialize(positionInGrid, worldPos, onStateChanged);
            State = GameElementState.Idle;
            SetDoorPositions();
            _listSeats = GetComponentsInChildren<Seat>().ToArray();
            SetSeatPositions();

            UpdateColor();
        }

        public void UpdateColor()
        {
            SetColor(GameElementColor);
        }

        [Button]
        public void SetColor(GameElement.Colors color)
        {
            GameElementColor = color;
            vehicleView.SetColor(color);
        }

        private void SetSeatPositions()
        {
            switch (GetElementDirection())
            {
                case GameElementDirection.Up:
                    _dictSeat.Add(PositionInGrid + new Vector2Int(0, -1), _listSeats[0]);
                    _dictSeat.Add(PositionInGrid + new Vector2Int(1, -1), _listSeats[1]);
                    break;
                case GameElementDirection.Right:
                    _dictSeat.Add(PositionInGrid + new Vector2Int(-1, 0), _listSeats[0]);
                    _dictSeat.Add(PositionInGrid + new Vector2Int(-1, -1), _listSeats[1]);
                    break;
                case GameElementDirection.Down:
                    _dictSeat.Add(PositionInGrid + new Vector2Int(0, 1), _listSeats[0]);
                    _dictSeat.Add(PositionInGrid + new Vector2Int(-1, 1), _listSeats[1]);
                    break;
                case GameElementDirection.Left:
                    _dictSeat.Add(PositionInGrid + new Vector2Int(1, 0), _listSeats[0]);
                    _dictSeat.Add(PositionInGrid + new Vector2Int(1, 1), _listSeats[1]);
                    break;
            }
        }

        private void SetDoorPositions()
        {
            switch (GetElementDirection())
            {
                case GameElementDirection.Up:
                    _dictDoor.Add(PositionInGrid + new Vector2Int(-1, -1), DoorSide.Left);
                    _dictDoor.Add(PositionInGrid + new Vector2Int(2, -1), DoorSide.Right);
                    break;
                case GameElementDirection.Right:
                    _dictDoor.Add(PositionInGrid + new Vector2Int(-1, 1), DoorSide.Left);
                    _dictDoor.Add(PositionInGrid + new Vector2Int(-1, -2), DoorSide.Right);
                    break;
                case GameElementDirection.Down:
                    _dictDoor.Add(PositionInGrid + new Vector2Int(1, 1), DoorSide.Left);
                    _dictDoor.Add(PositionInGrid + new Vector2Int(-2, 1), DoorSide.Right);
                    break;
                case GameElementDirection.Left:
                    _dictDoor.Add(PositionInGrid + new Vector2Int(1, -1), DoorSide.Left);
                    _dictDoor.Add(PositionInGrid + new Vector2Int(1, 2), DoorSide.Right);
                    break;
            }
        }

        [Button]
        public void OnPassengerSit()
        {
            if (IsVehicleFull())
            {
                OnVehicleFull?.Invoke(this);
            }
        }

        public void TriggerOnBeforeMoveIfFull()
        {
            if (IsVehicleFull())
            {
                OnVehicleFull?.Invoke(this);
                //OnBeforeMove?.Invoke(this);
            }
        }

        public Tween MoveToPosition(Vector3 position, Vector3 oldPosition)
        {
            position.y = transform.position.y;
            oldPosition.y = transform.position.y;
            var distance = Vector3.Distance(oldPosition, position);
            return transform.DOMove(position, distance / VehicleSo.Instance.VehicleSpeed).SetEase(Ease.Linear);
        }

        public void SetRoadPositions(List<Vector3> roadPositions)
        {
            RoadPositions = roadPositions;
        }

        public bool IsVehicleFull()
        {
            return !_dictSeat.Any(x => x.Value.IsEmpty());
        }

        public Vector3 GetCenterPosition()
        {
            return _centerPosition.position;
        }

        public void OnWaiting()
        {
            State = GameElementState.Waiting;
            ShowEmoji(-1);
        }

        public void OnComplete()
        {
            State = GameElementState.Completed;
            //   vehicleViewParent.gameObject.SetActive(false);
        }

        public override void ShowEmoji(int repeat = 4)
        {
            repeat = -1;
            base.ShowEmoji(repeat);
        }

        public override void HideEmoji()
        {
            base.HideEmoji();
        }

        public override void Tapped()
        {
            OnTapped?.Invoke();
        }

        public override void OnMove()
        {
            transform.DOComplete();
            State = GameElementState.Moving;
            HideEmoji();
        }

        public override void Stop()
        {
            transform.DOPause();
            ShowEmoji();
        }

        public Seat GetAvailableSeat()
        {
            return _dictSeat.FirstOrDefault(x => x.Value.IsEmpty() && !x.Value.IsReserved()).Value;
        }

        public bool IsValidCharacter(CharacterController character)
        {
            return character.GameElementColor == GameElementColor;
        }
    }
}