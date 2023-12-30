using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using PathFind;
using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    
    public class CharacterController : GameElement
    {
        private Collider _lastCollider;
        public Action OnCorrectAction;

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
        }
        private void OnTriggerEnter(Collider other)
        {
            if(!other.CompareTag("Vehicle")) return;

            _lastCollider = other;

            if (State != GameElementState.Idle) return;

            CheckVehicleIsAvailable(other);

        }

        private void OnTriggerStay(Collider other)
        {
            if(!other.CompareTag("Vehicle")) return;
            
            if (State != GameElementState.Idle) return;
            
            CheckVehicleIsAvailable(other);
        }

        private void OnTriggerExit(Collider other)
        {
            if(!other.CompareTag("Vehicle")) return;
            
            if(other == _lastCollider)
                _lastCollider = null;
        }

        public void TryMove(List<PathFind.Point> path)
        {
            StartCoroutine(MoveTo(path));
        }

        IEnumerator MoveTo(List<PathFind.Point> path)
        {
            transform.DOComplete();
            
            State = GameElementState.Moving;
            
            foreach (var t in path)
            {
                transform.localPosition = new Vector3(t.x + offset.x,transform.localPosition.y,t.y + offset.z);
                yield return new WaitForSeconds(.07f);
            }
            State = GameElementState.Idle;
            CheckVehicleIsAvailable(_lastCollider);
        }
        private void CheckVehicleIsAvailable(Collider vehicleCollider)
        {
            if (!vehicleCollider) return;
            
            if (!vehicleCollider.transform.parent.parent.gameObject.TryGetComponent<VehicleController>(out var vehicleController)) return;

            if (vehicleController.GameElementColor != GameElementColor) return;
            
            _lastCollider = null;
            State = GameElementState.Completed;
            gameObject.SetActive(false);
            vehicleController.MoveForward();
        }
    }
}
