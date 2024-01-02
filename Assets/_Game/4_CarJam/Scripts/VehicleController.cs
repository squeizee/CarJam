using System;
using System.Collections;
using System.Collections.Generic;
using _Game._4_CarJam.Scripts;
using DG.Tweening;
using UnityEngine;

public class VehicleController : GameElement
{
    public override void Initialize()
    {
        base.Initialize();
        State = GameElementState.Idle;
    }
    public void MoveForward()
    {
        State = GameElementState.Moving;
        
        transform.DOMove(transform.position + transform.forward, 0.4f).SetLoops(4,LoopType.Incremental).SetEase(Ease.InCubic).OnComplete(() =>
        {
            State = GameElementState.Completed;
            //destroy vehicle
            gameObject.SetActive(false);
        });
    }

    
}
