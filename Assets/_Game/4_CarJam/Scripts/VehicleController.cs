using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using _Game._4_CarJam.Scripts;
using DG.Tweening;
using PathFind;
using UnityEngine;
using Random = UnityEngine.Random;

public class VehicleController : GameElement
{
    public enum DoorSide
    {
        Left = 0,
        Right = 1,
    }

    [SerializeField] private int doorCount;
    [SerializeField] private Transform _centerPosition;
    [SerializeField] private Transform vehicleViewParent;
    [SerializeField] private Transform[] doorsTransforms;

    private Collider _lastCollider;
    private Vector3[] _doorPositions; // 0 -> left, 1 -> right
    private int _doorAngle = 55;
    private Dictionary<DoorSide, Vector2Int> _dictDoor = new();

    public Action<VehicleController> OnBeforeMove;
    public List<Vector2Int> DoorPositions => _dictDoor.Values.ToList();
    public VehicleView VehicleView;

    private void OnEnable()
    {
        OnTapped += () =>
        {
            vehicleViewParent.transform.DOComplete();
            vehicleViewParent.transform.DOShakeRotation(.3f, 10f);
            ShowEmoji();
        };
    }

    public override void Initialize(Vector2Int positionInGrid,Action onStateChanged)
    {
        base.Initialize(positionInGrid,onStateChanged);
        State = GameElementState.Idle;
        VehicleView.Initialize(GetElementDirection());
        AssignDoorPositions();
        OnGameElementStateChanged += OnStateChange;
    }

    private void OnDisable()
    {
        OnGameElementStateChanged -= OnStateChange;
    }

    private void AssignDoorPositions()
    {
        switch (GetElementDirection())
        {
           case GameElementDirection.Up:
               _dictDoor.Add(DoorSide.Left, PositionInGrid + new Vector2Int(-1, -1));
               _dictDoor.Add(DoorSide.Right, PositionInGrid +new Vector2Int(2, -1));
               break;
           case GameElementDirection.Right:
               _dictDoor.Add(DoorSide.Left, PositionInGrid + new Vector2Int(-1, 1));
               _dictDoor.Add(DoorSide.Right, PositionInGrid + new Vector2Int(-1, -2));
               break;
           case GameElementDirection.Down:
               _dictDoor.Add(DoorSide.Left, PositionInGrid + new Vector2Int(1, 1));
               _dictDoor.Add(DoorSide.Right, PositionInGrid + new Vector2Int(-2, 1));
               break;
           case GameElementDirection.Left:
               _dictDoor.Add(DoorSide.Left, PositionInGrid + new Vector2Int(1, -1));
               _dictDoor.Add(DoorSide.Right, PositionInGrid + new Vector2Int(1, 2));
               break;
        }
    }

    private GameElementDirection GetElementDirection()
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

    public void Move()
    {
        CloseDoor();
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
            var targetPoint = pathVector3[^1];
            transform.DOLocalMove(targetPoint, VehicleSo.Instance.CompleteDuration)
                .OnComplete(() => { State = GameElementState.Completed; })
                .SetEase(Ease.InBack, overshoot: VehicleSo.Instance.VehicleOvershoot);
        }
        else
        {
            transform.DOLocalPath(pathVector3.ToArray(), 0.2f * path.Count).SetEase(Ease.Linear).OnComplete(() =>
            {
                PositionInGrid = new Vector2Int((int) path[^1].x, (int) path[^1].y);
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

    public void OpenDoor(DoorSide doorSide, Action onComplete)
    {
        doorsTransforms[(int)doorSide].DOLocalRotate(new Vector3(0, _doorAngle * (doorSide == DoorSide.Left ? 1 : -1), 0), .75f).SetEase(Ease.OutBack).OnComplete(()=>
        {
            onComplete?.Invoke();
        });
    }

    private void CloseDoor()
    {
        foreach (var door in _dictDoor)
        {
            doorsTransforms[(int)door.Key].DOLocalRotate(new Vector3(0, 0, 0), 0.4f).SetEase(Ease.OutBack);
        }
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