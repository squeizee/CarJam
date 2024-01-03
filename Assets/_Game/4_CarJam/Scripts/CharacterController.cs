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
        private Collider _lastCollider;
        public Action OnCorrectAction;

        public Dictionary<VehicleController, List<Vector3>> VehicleDoorPositions = new();

        private void OnEnable()
        {
            OnCorrectAction += () =>
            {
                transform.DOComplete();
                transform.DOMoveY(transform.position.y + .7f, 0.25f).SetLoops(2, LoopType.Yoyo).SetEase(Ease.Linear);
            };
        }

        public override void Initialize()
        {
            base.Initialize();
            State = GameElementState.Idle;

            OnGameElementStateChanged += OnStateChange;
        }

        private void OnDisable()
        {
            OnGameElementStateChanged -= OnStateChange;
        }

        private void OnTriggerEnter(Collider other)
        {
            // if (!other.CompareTag("CollidedObject")) return;
            //
            // _lastCollider = other;
            //
            // //if (State != GameElementState.Idle) return;
            //
            // //if(other.isTrigger) return;
            //
            // //CheckVehicleIsAvailable(other);
        }

        private void OnTriggerStay(Collider other)
        {
            // if(!other.CompareTag("CollidedObject")) return;
            //
            // if (State != GameElementState.Idle) return;
            //
            // CheckVehicleIsAvailable(other);
        }


        private void OnTriggerExit(Collider other)
        {
            // if (!other.CompareTag("CollidedObject")) return;
            //
            // if (other != _lastCollider) return;
            //
            // _lastCollider = null;
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
                if ((transform.localPosition.x == vehicle.Value[0].x &&
                     transform.localPosition.z == vehicle.Value[0].z) ||
                    (transform.localPosition.x == vehicle.Value[1].x &&
                     transform.localPosition.z == vehicle.Value[1].z))
                {
                    State = GameElementState.Completed;
                    vehicle.Key.MoveForward();
                }
                else
                {
                    State = GameElementState.Idle;
                }
                    
            }
        }

        private bool CheckVehicleIsAvailable(Collider vehicleCollider)
        {
            if (!vehicleCollider) return false;

            if (!vehicleCollider.transform.parent.parent.gameObject.TryGetComponent<VehicleController>(
                    out var vehicleController)) return false;

            if (vehicleController.GameElementColor != GameElementColor) return false;

            _lastCollider = null;
            State = GameElementState.Completed;
            vehicleController.MoveForward();

            return true;
        }

        private void OnStateChange()
        {
            switch (State)
            {
                case GameElementState.Idle:
                    break;
                case GameElementState.Moving:
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