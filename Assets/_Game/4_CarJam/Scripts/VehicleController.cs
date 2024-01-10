using System;
using System.Collections;
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

        public Action<VehicleController> OnBeforeMove;
        public List<Vector2Int> DoorPositions => _dictDoor.Keys.ToList();
        public List<Vector2Int> SeatPositions => _dictSeat.Keys.ToList();
        public Vector2Int GetSelectedSeatPosition(Seat seat) => _dictSeat.FirstOrDefault(x => x.Value == seat).Key;
        public GameElementDirection GetDirection => GetElementDirection();
        
        public bool IsSeatEmpty(Vector2Int seatPosition) => _dictSeat.FirstOrDefault(x => x.Key == seatPosition).Value.IsEmpty;

        
        [SerializeField] private VehicleView vehicleView;
       
        [SerializeField] private Transform _centerPosition;
        [SerializeField] private Transform vehicleViewParent;
        [SerializeField] private Seat[] seats;

        private int _doorAngle = 90;
        private Seat[] _listSeats;
        private Dictionary<Vector2Int,DoorSide> _dictDoor = new();
        private Dictionary<Vector2Int,Seat> _dictSeat = new();

        private void OnEnable()
        {
            OnTapped += () =>
            {
                vehicleViewParent.transform.DOComplete();
                vehicleViewParent.transform.DOShakeRotation(.3f, 10f);
            };
            OnCrash += () =>
            {
                vehicleViewParent.transform.DOComplete();
                vehicleViewParent.transform.DOShakeRotation(.3f, 10f);
            };
        }

        public override void Initialize(Vector2Int positionInGrid, Action onStateChanged)
        {
            base.Initialize(positionInGrid, onStateChanged);
            State = GameElementState.Idle;
            SetDoorPositions();
            OnGameElementStateChanged += OnStateChange;

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

        private void OnDisable()
        {
            OnGameElementStateChanged -= OnStateChange;
        }

        private void SetSeatPositions()
        {
            switch (GetElementDirection())
            {
                case GameElementDirection.Up:
                    _dictSeat.Add(PositionInGrid + new Vector2Int(0, -1),_listSeats[0]);
                    _dictSeat.Add(PositionInGrid + new Vector2Int(1, -1),_listSeats[1]);
                    break;
                case GameElementDirection.Right:
                    _dictSeat.Add(PositionInGrid + new Vector2Int(-1, 0),_listSeats[0]);
                    _dictSeat.Add(PositionInGrid + new Vector2Int(-1, -1),_listSeats[1]);
                    break;
                case GameElementDirection.Down:
                    _dictSeat.Add(PositionInGrid + new Vector2Int(0, 1),_listSeats[0]);
                    _dictSeat.Add(PositionInGrid + new Vector2Int(-1, 1),_listSeats[1]);
                    break;
                case GameElementDirection.Left:
                    _dictSeat.Add(PositionInGrid + new Vector2Int(1, 0),_listSeats[0]);
                    _dictSeat.Add(PositionInGrid + new Vector2Int(1, 1),_listSeats[1]);
                    break;
            }
        }

        private void SetDoorPositions()
        {
            switch (GetElementDirection())
            {
                case GameElementDirection.Up:
                    _dictDoor.Add(PositionInGrid + new Vector2Int(-1, -1),DoorSide.Left);
                    _dictDoor.Add(PositionInGrid + new Vector2Int(2, -1),DoorSide.Right);
                    break;
                case GameElementDirection.Right:
                    _dictDoor.Add(PositionInGrid + new Vector2Int(-1, 1),DoorSide.Left);
                    _dictDoor.Add(PositionInGrid + new Vector2Int(-1, -2),DoorSide.Right);
                    break;
                case GameElementDirection.Down:
                    _dictDoor.Add(PositionInGrid + new Vector2Int(1, 1),DoorSide.Left);
                    _dictDoor.Add(PositionInGrid + new Vector2Int(-2, 1),DoorSide.Right);
                    break;
                case GameElementDirection.Left:
                    _dictDoor.Add(PositionInGrid + new Vector2Int(1, -1),DoorSide.Left);
                    _dictDoor.Add(PositionInGrid + new Vector2Int(1, 2),DoorSide.Right);
                    break;
            }
        }

        public void Move()
        {
            //CloseDoor();
            if(_dictSeat.Any(x => x.Value.IsEmpty)) return;
            OnBeforeMove?.Invoke(this);
        }

        public void MoveForward(List<Vector3> path, bool isTargetReached)
        {
            if (path.Count == 0)
            {
                if (State != GameElementState.Waiting)
                    State = GameElementState.Waiting;
                return;
            }

            // if seat is none of them empty
            if (Array.Exists(_listSeats, x => x.IsEmpty))
            {
                if (State != GameElementState.Waiting)
                    State = GameElementState.Waiting;
                return;
            }

            transform.DOComplete();
            State = GameElementState.Moving;

            List<Vector3> pathVector3 = path.ConvertAll(point =>
                new Vector3(point.x + Offset.x, transform.localPosition.y, point.y + Offset.z));

            if (isTargetReached)
            {
                var targetPoint = pathVector3[^1];
                transform.DOLocalMove(targetPoint, VehicleSo.Instance.CompleteDuration)
                    .OnComplete(() => { State = GameElementState.Completed; })
                    .SetEase(Ease.InBack, overshoot: VehicleSo.Instance.VehicleOvershoot);
            }
            else
            {
                transform.DOLocalPath(pathVector3.ToArray(), 0.2f * path.Count).SetEase(Ease.Linear).OnComplete(() =>
                {
                    PositionInGrid = new Vector2Int((int)path[^1].x, (int)path[^1].y);
                    State = GameElementState.Waiting;
                });
            }
        }

        private void OnStateChange()
        {
            switch (State)
            {
                case GameElementState.Idle:
                    break;
                case GameElementState.Moving:
                    HideEmoji();
                    break;
                case GameElementState.Waiting:
                    //OnCrash?.Invoke();
                    // ShowEmoji(true);
                    break;
                case GameElementState.Completed:
                    vehicleViewParent.gameObject.SetActive(false);
                    break;
            }
        }

        public Vector3 GetCenterPosition()
        {
            return _centerPosition.position;
        }

        // public Tween OpenDoor(DoorSide doorSide)
        // {
        //     return doorsTransforms[(int)doorSide]
        //         .DOLocalRotate(new Vector3(0, _doorAngle * (doorSide == DoorSide.Left ? 1 : -1), 0), .15f);
        // }

        private void CloseDoor()
        {
            // foreach (var door in _dictDoor)
            // {
            //     doorsTransforms[(int)door.Key].DOLocalRotate(new Vector3(0, 0, 0), 0.15f);
            // }
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

        public override void Stop()
        {
            transform.DOPause();
        }

        public bool IsSeatAvailable()
        {
            return _dictSeat.Any(x => x.Value.IsEmpty);
        }

        public Seat GetAvailableSeat()
        {
            return _dictSeat.FirstOrDefault(x => x.Value.IsEmpty).Value;
        }

        public bool IsValidCharacter(CharacterController character)
        {
            return character.GameElementColor == GameElementColor;
        }
    }
}