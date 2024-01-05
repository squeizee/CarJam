using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using DG.Tweening.Plugins.Core.PathCore;
using PathFind;
using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class CharacterController : GameElement
    {
        [Header("Derived Class")] [SerializeField]
        private Transform indicator;
        [SerializeField] private Transform characterViewParent;
        //public Action OnCorrectAction;

        public Dictionary<VehicleController, List<Vector2Int>> VehicleDoorPositions = new();

        private Collider _lastCollider;
        private Animator _animator;
        private Vector3 LocalPosition => transform.localPosition;

        private void OnEnable()
        {
            OnTapped += () =>
            {
                indicator.gameObject.SetActive(true);
                indicator.DOComplete();
                indicator.DOLocalMoveY(indicator.localPosition.y + .5f, 0.5f).SetLoops(6, LoopType.Yoyo)
                    .SetEase(Ease.Linear).OnComplete(
                        () => { indicator.gameObject.SetActive(false); });
            };
        }

        private void Awake()
        {
            _animator = GetComponentInChildren<Animator>();
        }

        public override void Initialize(Vector2Int positionInGrid,Action onStateChanged)
        {
            base.Initialize(positionInGrid,onStateChanged);
            State = GameElementState.Idle;
            OnGameElementStateChanged += OnStateChange;
        }

        private void OnDisable()
        {
            OnGameElementStateChanged -= OnStateChange;
        }

        public void MoveAlongPath(List<Point> path)
        {
            transform.DOComplete();
            State = GameElementState.Moving;
            List<Vector3> pathVector3 = path.ConvertAll(point =>
                new Vector3(point.x + Offset.x, transform.localPosition.y, point.y + Offset.z));
            transform.DOLocalPath(pathVector3.ToArray(), 0.2f * pathVector3.Count).SetEase(Ease.Linear)
                .OnComplete(() =>
                {
                    PositionInGrid = new Vector2Int(path[^1].x, path[^1].y);
                    CheckPosition();
                });
        }

        private void CheckPosition()
        {
            if (VehicleDoorPositions.Count == 0) return;

            foreach (var vehicle in VehicleDoorPositions)
            {
                if(PositionInGrid == vehicle.Value[0])
                    PlayCompletedAnimation(vehicle.Key,VehicleController.DoorSide.Left);
                else if (PositionInGrid == vehicle.Value[1])
                    PlayCompletedAnimation(vehicle.Key,VehicleController.DoorSide.Right);
                else
                {
                    State = GameElementState.Idle;
                }
            }
        }

        public void PlayCompletedAnimation(VehicleController vehicleController,VehicleController.DoorSide doorSide)
        {
            transform.DOComplete();
            var targetPosition = vehicleController.GetCenterPosition();
            vehicleController.OpenDoor(doorSide, () =>
            {
                transform.DOMove(targetPosition, 0.3f).OnComplete(() =>
                {
                    State = GameElementState.Completed;
                    vehicleController.Move();
                }).SetEase(Ease.InBack);
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
                    gameObject.SetActive(false);
                    break;
            }
        }

        
        public override void ShowEmoji(bool show = true)
        {
            base.ShowEmoji(show);
            indicator.gameObject.SetActive(!show);
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
        protected override void UpdatePositionInGrid(Vector3Int positionInGrid)
        {
            
        }
    }
}