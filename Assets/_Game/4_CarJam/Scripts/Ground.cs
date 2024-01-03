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
}
