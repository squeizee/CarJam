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
        public bool IsEmpty => Character == null;
        
        [SerializeField] private SeatSide seatSide;
        private CharacterController Character { get; set; }
        
        public void SetCharacter(CharacterController character)
        {
            Character = character;
        }
        
        
    }
}