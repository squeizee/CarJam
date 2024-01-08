using System;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
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
        public List<Vector2Int> DoorPositions => _dictDoor.Values.ToList();
        public GameElementDirection GetDirection => GetElementDirection();
        
        
    
        [SerializeField] private VehicleView vehicleView;
        [SerializeField] private int capacity;
        [SerializeField] private Transform _centerPosition;
        [SerializeField] private Transform vehicleViewParent;
        [SerializeField] private Transform[] doorsTransforms;
    
        private int _doorAngle = 90;
        private Dictionary<DoorSide, Vector2Int> _dictDoor = new();
    
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

        public override void Initialize(Vector2Int positionInGrid,Action onStateChanged)
        {
            base.Initialize(positionInGrid,onStateChanged);
            State = GameElementState.Idle;
            vehicleView.Initialize(GetElementDirection());
            SetDoorPositions();
            OnGameElementStateChanged += OnStateChange;
        }

        private void OnDisable()
        {
            OnGameElementStateChanged -= OnStateChange;
        }

        private void SetDoorPositions()
        {
            switch (GetElementDirection())
            {
                case GameElementDirection.Up:
                    _dictDoor.Add(DoorSide.Left, PositionInGrid + new Vector2Int(-1, -1));
                    _dictDoor.Add(DoorSide.Right, PositionInGrid +new Vector2Int(2, -1));
                    break;
                case GameElementDirection.Right:
                    _dictDoor.Add(DoorSide.Left, PositionInGrid + new Vector2Int(-1, 1));
                    _dictDoor.Add(DoorSide.Right, PositionInGrid + new Vector2Int(-1, -2));
                    break;
                case GameElementDirection.Down:
                    _dictDoor.Add(DoorSide.Left, PositionInGrid + new Vector2Int(1, 1));
                    _dictDoor.Add(DoorSide.Right, PositionInGrid + new Vector2Int(-2, 1));
                    break;
                case GameElementDirection.Left:
                    _dictDoor.Add(DoorSide.Left, PositionInGrid + new Vector2Int(1, -1));
                    _dictDoor.Add(DoorSide.Right, PositionInGrid + new Vector2Int(1, 2));
                    break;
            }
        }
        public void Move()
        {
            CloseDoor();
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
                    PositionInGrid = new Vector2Int((int) path[^1].x, (int) path[^1].y);
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
                    ShowEmoji(false);
                    break;
                case GameElementState.Waiting:
                    OnCrash?.Invoke();
                    ShowEmoji(true);
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

        public Tween OpenDoor(DoorSide doorSide)
        {
            return doorsTransforms[(int)doorSide].DOLocalRotate(new Vector3(0, _doorAngle * (doorSide == DoorSide.Left ? 1 : -1), 0), .15f);
        }

        private void CloseDoor()
        {
            foreach (var door in _dictDoor)
            {
                doorsTransforms[(int)door.Key].DOLocalRotate(new Vector3(0, 0, 0), 0.15f);
            }
        }

        public override void ShowEmoji(bool show, int repeat = -1)
        {
            base.ShowEmoji(show,repeat);
        }

        public override void Tapped()
        {
            OnTapped?.Invoke();
        }

        public override void Stop()
        {
            transform.DOPause();
        }
    }
}