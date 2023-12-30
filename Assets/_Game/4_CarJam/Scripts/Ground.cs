using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ground : MonoBehaviour
{
    private GameElement _triggeredGameElement;
    public Vector3Int _positionInMap;
    
    public bool IsEmpty => _triggeredGameElement == null;
    
    public void Initialize(Vector3Int positionInMap)
    {
        _positionInMap = positionInMap;
    }
    private void OnTriggerEnter(Collider other)
    {
        if(other.TryGetComponent<GameElement>(out var gameElement))
        {
            _triggeredGameElement = gameElement;
        }
        else if(other.transform.parent.TryGetComponent<GameElement>(out var gameElement2))
        {
            _triggeredGameElement = gameElement2;
        }
        else if(other.transform.parent.parent.TryGetComponent<GameElement>(out var gameElement3))
        {
            _triggeredGameElement = gameElement3;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if(other.TryGetComponent<GameElement>(out var gameElement))
        {
            if(gameElement == _triggeredGameElement)
                _triggeredGameElement = null;
        }
        else if(other.transform.parent.TryGetComponent<GameElement>(out var gameElement2))
        {
            if(gameElement2 == _triggeredGameElement)
                _triggeredGameElement = null;
        }
        else if(other.transform.parent.parent.TryGetComponent<GameElement>(out var gameElement3))
        {
            if(gameElement3 == _triggeredGameElement)
                _triggeredGameElement = null;
        }
    }
}
