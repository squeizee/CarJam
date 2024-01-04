using System;
using System.Collections;
using System.Collections.Generic;
using _Game._4_CarJam.Scripts;
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

    [Header("Base Class")] [SerializeField]
    private Collider mainCollider;

    [SerializeField] private Colors color;
    [SerializeField] private Vector3 offset;
    [SerializeField] private Vector2Int dimension;

    private Vector2Int _targetPosition;
    private GameElementState _state;

    public GameElementState State
    {
        get => _state;
        protected set
        {
            _state = value;
            mainCollider.isTrigger = _state == GameElementState.Moving;
            OnGameElementStateChanged?.Invoke();
        }
    }

    public Colors GameElementColor { get; protected set; }
    public Vector3 Offset { get; protected set; }
    public Vector2Int Dimension { get; protected set; }


    public virtual void Initialize(Action onStateChanged)
    {
        OnGameElementStateChanged += onStateChanged;
        GameElementColor = color;
        Offset = offset;
        Dimension = dimension;
    }

    public virtual void Stop()
    {
    }
}