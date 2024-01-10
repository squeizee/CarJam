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
        [SerializeField] private Collider mainCollider;

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
        
        private void Awake()
        {
            _animator = GetComponentInChildren<Animator>();
        }

        public override void Initialize(Vector2Int positionInGrid, Action onStateChanged)
        {
            base.Initialize(positionInGrid, onStateChanged);
            Stop();
            _indicatorDefaultPosition = indicator.localPosition;
        }

        public Sequence MoveAlongPath(List<Point> path)
        {
            transform.DOComplete();
            
            Vector3 lastPosition = transform.localPosition;
            
            OnMove();
            
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
                Stop();
            });

            _sequence.Append(characterViewParent.transform.DOLocalRotate(Vector3.zero, .1f).SetEase(Ease.Linear));
            
            return _sequence;
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

        public void OnComplete()
        {
            _animator.Play("Sit");
            State = GameElementState.Completed;
            mainCollider.enabled = false;
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

        public override void OnMove()
        {
            State = GameElementState.Moving;
            indicator.DOComplete();
            _animator.Play("Run");
        }
        public override void Stop()
        {
            State = GameElementState.Idle;
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
                OnComplete();
                seat.SetCharacter(transform);
                vehicle.OnPassengerSit();
            });
        }
    }
}