using System;
using System.Collections;
using System.Collections.Generic;
using _Game._4_CarJam.Scripts;
using DG.Tweening;
using UnityEngine;

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

    public virtual void ShowEmoji(bool show = true)
    {
        emoji.gameObject.SetActive(show);

        if (show)
            emoji.DOLocalMoveY(emoji.localPosition.y + .5f, 0.5f).SetLoops(4, LoopType.Yoyo)
                .SetEase(Ease.Linear).OnComplete(
                    () => { emoji.gameObject.SetActive(false); });
    }
    
    
    public virtual void Tapped()
    {
        
    }
    public virtual void Stop()
    {
    }
    protected virtual void UpdatePositionInGrid(Vector3Int positionInGrid)
    {
    }
}