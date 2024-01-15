using System;
using System.Collections.Generic;
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
            Purple,
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

        protected Action<GameElement> OnGameElementStateChanged;
        protected Action OnCrash;
        protected Action OnTapped;

        [Header("Base Class")] [SerializeField]
        private Colors color;

        [SerializeField] private Vector3 offset;
        [SerializeField] private Vector2Int dimension;
        [SerializeField] private Transform emoji;


        private Vector2Int _targetPosition;
        public GameElementState _state;

        public GameElementState State
        {
            get => _state;
            protected set
            {
                if(_state == value) 
                    return;
                
                _state = value;
                OnGameElementStateChanged?.Invoke(this);
            }
        }

        public Colors GameElementColor { get; protected set; }
        public Vector3 Offset { get; protected set; }
        public Vector2Int Dimension { get; protected set; }

        public Vector2Int PositionInGrid;
        public Bounds bounds;
        public bool IsPointInVehicle(Vector2Int point)
        {
            return GetPointList().Contains(point);
        }

        
        public virtual void Initialize(Vector2Int positionInGrid,Vector3 worldPos, Action<GameElement> onStateChanged)
        {
            transform.position = worldPos;
            OnGameElementStateChanged += onStateChanged;
            GameElementColor = color;
            Offset = offset;
            Dimension = dimension;
            PositionInGrid = positionInGrid;
        }
        public List<Vector2Int> GetPointList()
        {
            List<Vector2Int> pointList = new List<Vector2Int>();
            
            int xSign = 0, ySign = 0;
            int dim1 = 0, dim2 = 0;

            switch (GetElementDirection())
            {
                case GameElementDirection.Up:
                    xSign = 1;
                    ySign = -1;
                    dim1 = Dimension.y;
                    dim2 = Dimension.x;
                    break;
                case GameElementDirection.Right:
                    xSign = -1;
                    ySign = -1;
                    dim1 = Dimension.x;
                    dim2 = Dimension.y;
                    break;
                case GameElementDirection.Down:
                    xSign = -1;
                    ySign = 1;
                    dim1 = Dimension.y;
                    dim2 = Dimension.x;
                    break;
                case GameElementDirection.Left:
                    xSign = 1;
                    ySign = 1;
                    dim1 = Dimension.x;
                    dim2 = Dimension.y;
                    break;
            }

            for (int x = 0; x < dim1; x++)
            {
                for (int y = 0; y < dim2; y++)
                {
                    pointList.Add(new Vector2Int(PositionInGrid.x + x * xSign,PositionInGrid.y+y * ySign));
                }
            }

            return pointList;
        }

        public Bounds GetBounds()
        {
            return bounds;
        }
        public virtual void ShowEmoji(int repeat = 4)
        {
            switch (GetElementDirection())
            {
                case (GameElementDirection.Up):
                    emoji.DOLocalRotate(new Vector3(70, 0, 0), 0);
                    break;
                case (GameElementDirection.Down):
                    emoji.DOLocalRotate(new Vector3(-70, 0, 0), 0);
                    break;
                case (GameElementDirection.Left):
                    emoji.DOLocalRotate(new Vector3(70, 90, 0), 0);
                    break;
                case (GameElementDirection.Right):
                    emoji.DOLocalRotate(new Vector3(70, -90, 0), 0);
                    break;
            }

            emoji.gameObject.SetActive(true);


            emoji.DOLocalMoveY(emoji.localPosition.y + .5f, 0.5f).SetLoops(repeat, LoopType.Yoyo)
                .SetEase(Ease.Linear).OnComplete(
                    () => { emoji.gameObject.SetActive(false); });
        }

        public virtual void HideEmoji()
        {
            emoji.gameObject.SetActive(false);
            emoji.DOKill();
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

        public virtual void OnMove()
        {
            
        }
        public virtual void Stop()
        {
        }
    }
}