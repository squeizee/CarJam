using System;
using System.Collections;
using System.Collections.Generic;
using _Game._4_CarJam.Scripts;
using DG.Tweening;
using UnityEngine;
using Random = UnityEngine.Random;

public class VehicleController : GameElement
{
    [SerializeField] private int doorCount;
    private Collider _lastCollider;
    private Vector3[] _doorPositions; // 0 -> left, 1 -> right

    public Vector3[] DoorPositions => _doorPositions;
    private void Awake()
    {
        AssignDoorPositions();
    }

    public override void Initialize()
    {
        base.Initialize();
        State = GameElementState.Idle;

        
        OnGameElementStateChanged += OnStateChange;
    }

    private void OnDisable()
    {
        OnGameElementStateChanged -= OnStateChange;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (!other.CompareTag("CollidedObject")) return;

        _lastCollider = other;

        if (State == GameElementState.Moving)
        {
            Stop();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (!other.CompareTag("CollidedObject")) return;

        if (other != _lastCollider) return;

        transform.DOPlay();
        _lastCollider = null;
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
                _doorPositions[1] = transform.localPosition + new Vector3(2, 0, 1);
                break;
            case 270:
                _doorPositions[0] = transform.localPosition + new Vector3(1, 0, -1);
                _doorPositions[1] = transform.localPosition + new Vector3(1, 0, 2);
                break;
        }
    }

    public void MoveForward()
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
                break;
        }
    }

    public override void Stop()
    {
        transform.DOPause();
    }
}