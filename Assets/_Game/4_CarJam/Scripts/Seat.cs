using System;
using System.Collections.Generic;
using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class Seat : MonoBehaviour
    {
        public enum SeatSide
        {
            Left = 0,
            Right = 1,
            Middle = 2
        }

        public bool IsEmpty() => _sitingCharacter == null;
        public bool IsReserved() => _reservedCharacter != null;
        
        public SeatSide GetSeatSide => seatSide;
        
        [SerializeField] private SeatSide seatSide;

        public Transform _reservedCharacter = null;
        public Transform _sitingCharacter = null;
        private Transform _oldParent;
        private Vector3 _oldPosition;
        private Quaternion _oldRotation;
        private Vector3 _oldScale;
        
        public void SetCharacter(Transform character)
        {
            if(_reservedCharacter != character) return;
            
            _sitingCharacter = character;
            
            _oldParent = _sitingCharacter.parent;
            _oldPosition = _sitingCharacter.localPosition;
            _oldRotation = _sitingCharacter.localRotation;
            _oldScale = _sitingCharacter.localScale;
            
            _sitingCharacter.SetParent(transform);
            _sitingCharacter.localPosition = Vector3.zero;
            _sitingCharacter.localRotation = Quaternion.identity;
            _sitingCharacter.localScale = Vector3.one;
        }
        
        public void RemoveCharacter()
        {
            _sitingCharacter.SetParent(_oldParent);
            _sitingCharacter.localPosition = _oldPosition;
            _sitingCharacter.localRotation = _oldRotation;
            _sitingCharacter.localScale = _oldScale;
            
            _oldParent = null;
        }
        public void ReserveSeat(Transform character)
        {
            if(_reservedCharacter == null)
                _reservedCharacter = character;
        }
        
    }
}