using System;
using System.Collections.Generic;
using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class Seat : MonoBehaviour
    {
        public bool IsEmpty() => _sitingCharacter == null;
        public bool IsReserved() => _reservedCharacter != null;

        public Transform _reservedCharacter = null;
        public Transform _sitingCharacter = null;

        public void SetCharacter(Transform character)
        {
            if (_reservedCharacter != character) return;

            _sitingCharacter = character;

            _sitingCharacter.SetParent(transform);
        }

        public void ReserveSeat(Transform character)
        {
            if (_reservedCharacter == null)
                _reservedCharacter = character;
        }
    }
}