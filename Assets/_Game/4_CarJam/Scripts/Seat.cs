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

        public bool IsEmpty { get; private set; }

        public SeatSide GetSeatSide => seatSide;
        
        [SerializeField] private SeatSide seatSide;

        private void Start()
        {
            IsEmpty = true;
        }

        public bool SetCharacter(Transform character)
        {
            if (!IsEmpty) return false;
            
            character.SetParent(transform);
            character.localPosition = Vector3.zero;
            character.localRotation = Quaternion.identity;
            character.localScale = Vector3.one * .9f;
            IsEmpty = false;
            
            return true;
        }
        
        
    }
}