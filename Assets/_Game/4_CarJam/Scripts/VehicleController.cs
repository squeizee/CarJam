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
    public override void Initialize()
    {
        base.Initialize();
        State = GameElementState.Idle;
        
        _doorPositions = new Vector3[doorCount];
        for (int i = 0; i < doorCount; i++)
        {
            //_doorPositions[i] = transform.
        }
        
        OnGameElementStateChanged += OnStateChange;
    }

    private void OnDisable()
    {
        OnGameElementStateChanged -= OnStateChange;
    }

    private void OnTriggerEnter(Collider other)
    {
        if(!other.CompareTag("CollidedObject")) return;
        
        _lastCollider = other;

        if(State == GameElementState.Moving)
        {
            Stop();
            //State = GameElementState.Waiting;
        } 
    }

    private void OnTriggerExit(Collider other)
    {
        if(!other.CompareTag("CollidedObject")) return;

        if (other != _lastCollider) return;
        
        transform.DOPlay();
        _lastCollider = null;
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