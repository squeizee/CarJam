using System;
using DG.Tweening;
using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class GameElement : MonoBehaviour
    {
        public enum Colors
        {
            Blue,
            Red,
            Orange,
            Green,
            Gray,
            Yellow
        }

        public enum GameElementState
        {
            Idle,
            Moving,
            Waiting,
            Completed
        }

        public enum GameElementDirection
        {
            Up,
            Down,
            Left,
            Right
        }

        protected Action OnGameElementStateChanged;
        protected Action OnCrash;
        protected Action OnTapped;

        [Header("Base Class")] 
        [SerializeField] private Colors color;
        [SerializeField] private Vector3 offset;
        [SerializeField] private Vector2Int dimension;
        [SerializeField] private Transform emoji;

    
        private Vector2Int _targetPosition;
        private GameElementState _state;

        public GameElementState State
        {
            get => _state;
            protected set
            {
                _state = value;
                OnGameElementStateChanged?.Invoke();
            }
        }

        public Colors GameElementColor { get; protected set; }
        public Vector3 Offset { get; protected set; }
        public Vector2Int Dimension { get; protected set; }

        public Vector2Int PositionInGrid { get; protected set; }

        public virtual void Initialize(Vector2Int positionInGrid,Action onStateChanged)
        {
            OnGameElementStateChanged += onStateChanged;
            GameElementColor = color;
            Offset = offset;
            Dimension = dimension;
            PositionInGrid = positionInGrid;
        }

        public virtual void ShowEmoji(bool show, int repeat = 4)
        {
            switch (GetElementDirection(), show)
            {
                case (GameElementDirection.Up, _):
                    emoji.DOLocalRotate(new Vector3(70, 0, 0), 0);
                    break;
                case (GameElementDirection.Down, _):
                    emoji.DOLocalRotate(new Vector3(-70, 0, 0), 0);
                    break;
                case (GameElementDirection.Left, _):
                    emoji.DOLocalRotate(new Vector3(70, 90, 0), 0);
                    break;
                case (GameElementDirection.Right, _):
                    emoji.DOLocalRotate(new Vector3(70, -90, 0), 0);
                    break;
            }
            emoji.gameObject.SetActive(show);

            if (show)
            {
                emoji.DOLocalMoveY(emoji.localPosition.y + .5f, 0.5f).SetLoops(repeat, LoopType.Yoyo)
                    .SetEase(Ease.Linear).OnComplete(
                        () => { emoji.gameObject.SetActive(false); });
            }
            else
            {
                emoji.DOKill();
            }
        }
    
        public GameElementDirection GetElementDirection()
        {
            return transform.eulerAngles.y switch
            {
                0 => GameElementDirection.Up,
                90 => GameElementDirection.Right,
                180 => GameElementDirection.Down,
                270 => GameElementDirection.Left,
                _ => GameElementDirection.Up
            };
        }
        public virtual void Tapped()
        {
        
        }
        public virtual void Stop()
        {
        
        }
    }
}