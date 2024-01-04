using System;
using System.Collections;
using System.Collections.Generic;
using _Game._4_CarJam.Scripts;
using DG.Tweening;
using PathFind;
using UnityEngine;
using Random = UnityEngine.Random;

public class VehicleController : GameElement
{
    [SerializeField] private int doorCount;
    private Collider _lastCollider;
    private Vector3[] _doorPositions; // 0 -> left, 1 -> right

    public Action<VehicleController> OnBeforeMove;
    public Vector3[] DoorPositions => _doorPositions;
    private void Awake()
    {
        AssignDoorPositions();
    }

    public override void Initialize(Action onStateChanged)
    {
        base.Initialize(onStateChanged);
        State = GameElementState.Idle;

        
        OnGameElementStateChanged += OnStateChange;
    }

    private void OnDisable()
    {
        OnGameElementStateChanged -= OnStateChange;
    }
    private void AssignDoorPositions()
    {
        _doorPositions = new Vector3[doorCount];
        
        switch (transform.eulerAngles.y)
        {
            case 0:
                _doorPositions[0] = transform.localPosition + new Vector3(-1, 0, -1);
                _doorPositions[1] = transform.localPosition + new Vector3(2, 0, -1);
                break;
            case 90:
                _doorPositions[0] = transform.localPosition + new Vector3(-1, 0, 1);
                _doorPositions[1] = transform.localPosition + new Vector3(-1, 0, -2);
                break;
            case 180:
                _doorPositions[0] = transform.localPosition + new Vector3(1, 0, 1);
                _doorPositions[1] = transform.localPosition + new Vector3(-2, 0, 1);
                break;
            case 270:
                _doorPositions[0] = transform.localPosition + new Vector3(1, 0, -1);
                _doorPositions[1] = transform.localPosition + new Vector3(1, 0, 2);
                break;
        }
    }

    public void MoveForward(List<Vector3> path, bool isTargetReached)
    {
        transform.DOComplete();
        State = GameElementState.Moving;
        
        List<Vector3> pathVector3 = path.ConvertAll(point =>
            new Vector3(point.x + Offset.x, transform.localPosition.y, point.y + Offset.z));
        
        transform.DOLocalPath(pathVector3.ToArray(), 0.2f * path.Count).SetEase(Ease.Linear).OnComplete(() =>
        {
            if (isTargetReached)
            {
                State = GameElementState.Completed;
            }
            else
            {
                State = GameElementState.Waiting;
            }
        });
        
    }
    public void MoveForward(List<Point> path)
    {
        State = GameElementState.Moving;

        transform.DOMove(transform.position + transform.forward * 5, 0.4f * 5).SetEase(Ease.InCubic).OnComplete(() =>
        {
            State = GameElementState.Completed;
            //destroy vehicle
            gameObject.SetActive(false);
        });
    }

    private void OnStateChange()
    {
        switch (State)
        {
            case GameElementState.Idle:
                break;
            case GameElementState.Moving:
                break;
            case GameElementState.Waiting:
                break;
            case GameElementState.Completed:
                gameObject.SetActive(false);
                break;
        }
    }

    public override void Stop()
    {
        transform.DOPause();
    }
}