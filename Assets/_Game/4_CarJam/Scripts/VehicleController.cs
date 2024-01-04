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
    [SerializeField] private Transform _centerPosition;
    
    private Collider _lastCollider;
    private Vector3[] _doorPositions; // 0 -> left, 1 -> right


    public Action<VehicleController> OnBeforeMove;
    public Vector3[] DoorPositions => _doorPositions;
    public VehicleView VehicleView;

    private void OnEnable()
    {
        OnTapped += () =>
        {
            transform.DOComplete();
            transform.DOShakeRotation(.3f,10f);
            ShowEmoji();
        };
    }
    private void Awake()
    {
        AssignDoorPositions();
    }

    public override void Initialize(Action onStateChanged)
    {
        base.Initialize(onStateChanged);
        State = GameElementState.Idle;
        VehicleView.Initialize(GetElementDirection());
        
        OnGameElementStateChanged += OnStateChange;
    }

    private void OnDisable()
    {
        OnGameElementStateChanged -= OnStateChange;
    }

    private void AssignDoorPositions()
    {
        _doorPositions = new Vector3[doorCount];
        
        // _doorPositions[0] =  GridController.Instance.WorldToCell(doorsTransforms[0].position - doorsTransforms[0].right);
        // _doorPositions[1] =  GridController.Instance.WorldToCell(doorsTransforms[1].position + doorsTransforms[0].right);
        
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

    public GameElementDirection GetElementDirection()
    {
        switch (transform.eulerAngles.y)
        {
            case 0:
                return GameElementDirection.Up;
            case 90:
                return GameElementDirection.Right;
            case 180:
                return GameElementDirection.Down;
            case 270:
                return GameElementDirection.Left;
        }

        return GameElementDirection.Up;
    }

    public void Move()
    {
        OnBeforeMove?.Invoke(this);
    }
    public void MoveForward(List<Vector3> path, bool isTargetReached)
    {
        if (path.Count == 0)
        {
            if (State != GameElementState.Waiting)
                State = GameElementState.Waiting;
            return;
        }
        transform.DOComplete();
        State = GameElementState.Moving;

        List<Vector3> pathVector3 = path.ConvertAll(point =>
            new Vector3(point.x + Offset.x, transform.localPosition.y, point.y + Offset.z));

        if (isTargetReached)
        {
            var targetPoint = pathVector3[pathVector3.Count - 1];
            transform.DOLocalMove(targetPoint, VehicleSo.Instance.CompleteDuration)
                .OnComplete(() => { State = GameElementState.Completed; })
                .SetEase(Ease.InBack, overshoot: VehicleSo.Instance.VehicleOvershoot);
        }
        else
        {
            transform.DOLocalPath(pathVector3.ToArray(), 0.2f * path.Count).SetEase(Ease.Linear).OnComplete(() =>
            {
                State = GameElementState.Waiting;
            });
        }
    }
    private void OnStateChange()
    {
        switch (State)
        {
            case GameElementState.Idle:
                break;
            case GameElementState.Moving:
                ShowEmoji(false);
                break;
            case GameElementState.Waiting:
                ShowEmoji();
                break;
            case GameElementState.Completed:
                gameObject.SetActive(false);
                break;
        }
    }

    public Vector3 GetCenterPosition()
    {
        return _centerPosition.position;
    }
    public override void ShowEmoji(bool show = true)
    {
        base.ShowEmoji(show);
    }
    public override void Tapped()
    {
        OnTapped?.Invoke();
    }
    public override void Stop()
    {
        transform.DOPause();
    }
}