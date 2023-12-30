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
        Completed
    }
    [SerializeField] private Colors color;
    public GameElementState State { get; protected set; }
    public Colors GameElementColor { get; protected set; }

    public Vector3 offset;
    public Vector2Int dimension;
    public virtual void Initialize()
    {
        GameElementColor = color;
    }
}
