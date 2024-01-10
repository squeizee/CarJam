using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using DG.Tweening.Plugins.Core.PathCore;
using PathFind;
using UnityEngine;
using Sequence = DG.Tweening.Sequence;

namespace _Game._4_CarJam.Scripts
{
    public class CharacterController : GameElement
    {
        [Header("Derived Class")] [SerializeField]
        private Transform indicator;

        [SerializeField] private Transform characterViewParent;

        public Dictionary<Vector2Int,VehicleController> VehicleDoorPositions = new();
        public Dictionary<Vector2Int, VehicleController> VehicleSeatPositions = new();

        private Vector3 _indicatorDefaultPosition;
        private Animator _animator;
        private Vector3 LocalPosition => transform.localPosition;

        private Sequence _sequence;
        private Sequence _enterCarSequence;

        private bool _isSelected;
        private Seat _currentSeat;
        private void OnEnable()
        {
            OnTapped += () =>
            {
                _isSelected = !_isSelected;
                ShowIndicator();
            };
        }

        private void OnDisable()
        {
            OnGameElementStateChanged -= OnStateChange;
        }

        private void Awake()
        {
            _animator = GetComponentInChildren<Animator>();
        }

        public override void Initialize(Vector2Int positionInGrid, Action onStateChanged)
        {
            base.Initialize(positionInGrid, onStateChanged);
            State = GameElementState.Idle;
            OnGameElementStateChanged += OnStateChange;
            _indicatorDefaultPosition = indicator.localPosition;
        }

        public Sequence MoveAlongPath(List<Point> path, Seat seat = null)
        {
            transform.DOComplete();

            if (_currentSeat)
            {
                _currentSeat.RemoveCharacter();
                _currentSeat = null;
            }
            
            Vector3 lastPosition = transform.localPosition;

            State = GameElementState.Moving;
            List<Vector3> pathVector3 = path.ConvertAll(point =>
                new Vector3(point.x + Offset.x, transform.localPosition.y, point.y + Offset.z));

            _sequence?.Kill();
            _sequence = DOTween.Sequence();

            for (int i = 0; i < path.Count; i++)
            {
                float angle = 0;

                angle = Vector3.SignedAngle(pathVector3[i] - lastPosition, Vector3.forward, Vector3.down) + 180f;
                lastPosition = pathVector3[i];

                _sequence.Insert(i * 0.2f, transform.DOLocalMove(pathVector3[i], .2f).SetEase(Ease.Linear));
                _sequence.InsertCallback(i * 0.2f,
                    () => { characterViewParent.DOLocalRotate(new Vector3(0, angle, 0), 0.1f).SetEase(Ease.Linear); });
            }

            _sequence.AppendCallback(() =>
            {
                PositionInGrid = new Vector2Int(path[^1].x, path[^1].y);
                CheckPosition(seat);
            });

            _sequence.Append(characterViewParent.transform.DOLocalRotate(Vector3.zero, .1f).SetEase(Ease.Linear));
            
            return _sequence;
        }

        private void CheckPosition(Seat seat)
        {
            if (VehicleSeatPositions.Count == 0) return;
            bool isCorrectSeat = false;

            if (!seat)
            {
                State = GameElementState.Idle;
                return;
            }

            _currentSeat = seat;
            isCorrectSeat = VehicleSeatPositions.ContainsKey(PositionInGrid);
           
            _animator.Play("Sit");
            State = GameElementState.Completed;
            _currentSeat.SetCharacter(transform);

            if (!isCorrectSeat)
            {
                ShowEmoji(-1);
            }
            else
            {
                HideEmoji();
            }
        }

        public void PlayCompletedAnimation(VehicleController vehicleController, VehicleController.DoorSide doorSide)
        {
            transform.DOComplete();

            _enterCarSequence?.Kill();
            _enterCarSequence = DOTween.Sequence();

            var targetPosition = vehicleController.GetCenterPosition();
            targetPosition.y = transform.position.y;

            //_enterCarSequence.Append(vehicleController.OpenDoor(doorSide));
            _enterCarSequence.Append(transform.DOMove(targetPosition, 0.2f));
            _enterCarSequence.Join(characterViewParent.DOScale(Vector3.one * 0.5f, 0.2f));
            _enterCarSequence.AppendCallback(() =>
            {
                State = GameElementState.Completed;
                vehicleController.Move();
            });
        }

        private void OnStateChange()
        {
            switch (State)
            {
                case GameElementState.Idle:
                case GameElementState.Waiting:
                    Stop();
                    break;
                case GameElementState.Moving:
                    _animator.Play("Run");
                    indicator.DOComplete();
                    break;
                case GameElementState.Completed:
                    //gameObject.SetActive(false);
                    break;
            }
        }

        private void ShowIndicator()
        {
            if (_isSelected)
            {
                indicator.gameObject.SetActive(true);
                indicator.DOComplete();
                indicator.DOLocalMoveY(_indicatorDefaultPosition.y + .5f, 0.5f).SetLoops(-1, LoopType.Yoyo)
                    .SetEase(Ease.Linear);
            }
            else
            {
                indicator.DOComplete();
                indicator.gameObject.SetActive(false);
            }
        }

        public override void ShowEmoji(int repeat = 4)
        {
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
            transform.DOComplete();
            _animator.Play("Idle");
        }

        public Tween MoveToVehicle(VehicleController vehicle, Seat seat)
        {
            transform.DOComplete();
            Vector3 targetPosition = vehicle.GetCenterPosition();
            targetPosition.y = transform.position.y;
            return transform.DOMove(targetPosition, 0.2f).OnComplete(() =>
            {
                _animator.Play("Sit");
                State = GameElementState.Completed;
                seat.SetCharacter(transform);
                vehicle.Move();
            });
        }
    }
}