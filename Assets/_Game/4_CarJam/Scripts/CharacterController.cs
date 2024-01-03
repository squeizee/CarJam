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
        [Header("Derived Class")]
        [SerializeField] private Transform indicator;
        
        public Action OnCorrectAction;

        public Dictionary<VehicleController, List<Vector3>> VehicleDoorPositions = new();

        private Collider _lastCollider;
        
        private Vector3 LocalPosition => transform.localPosition;
        private void OnEnable()
        {
            indicator.gameObject.SetActive(false);
            
            OnCorrectAction += () =>
            {
                indicator.gameObject.SetActive(true);
                indicator.DOComplete();
                indicator.DOLocalMoveY(indicator.localPosition.y + .5f, 0.5f).SetLoops(6, LoopType.Yoyo).SetEase(Ease.Linear).OnComplete(
                    () =>
                    {
                        indicator.gameObject.SetActive(false);
                    });
            };
        }

        public override void Initialize(Action onStateChanged)
        {
            base.Initialize(onStateChanged);
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
            transform.DOLocalPath(pathVector3.ToArray(), 0.2f * pathVector3.Count).SetEase(Ease.Linear).OnComplete(CheckPosition);
            
        }

        private void CheckPosition()
        {
            if (VehicleDoorPositions.Count == 0) return;

            foreach (var vehicle in VehicleDoorPositions)
            {
                if ((LocalPosition.x == vehicle.Value[0].x &&
                     LocalPosition.z == vehicle.Value[0].z) ||
                    (LocalPosition.x == vehicle.Value[1].x &&
                     LocalPosition.z == vehicle.Value[1].z))
                {
                    State = GameElementState.Completed;
                    vehicle.Key.OnBeforeMove?.Invoke(vehicle.Key);
                }
                else
                {
                    State = GameElementState.Idle;
                }
                    
            }
        }

        private void OnStateChange()
        {
            switch (State)
            {
                case GameElementState.Idle:
                    break;
                case GameElementState.Moving:
                    indicator.DOComplete();
                    break;
                case GameElementState.Waiting:
                    Stop();
                    break;
                case GameElementState.Completed:
                    gameObject.SetActive(false);
                    break;
            }
        }

        public override void Stop()
        {
            transform.DOComplete();
            State = GameElementState.Idle;
        }
    }
}