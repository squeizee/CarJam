using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class GridItemView : MonoBehaviour
{
    public Vector2Int PositionInGrid { get; private set; }
    
    [SerializeField] private Renderer childCubeRenderer;
    [SerializeField] private Transform indicator;
    
    //243,255,134 --> Color
    private Tween _tween;
    private Tween _indicatorTween;
    
    private Color _defaultColor;
    
    private Vector3 _indicatorDefaultPosition;
    
    public void Initialize(Vector2Int positionInGrid)
    {
        PositionInGrid = positionInGrid;
        _defaultColor = childCubeRenderer.material.color;
        _indicatorDefaultPosition = indicator.localPosition;
        UnHighlightGrid();
    }
    public void SetColor(Color color)
    {
        _tween?.Kill();
        _tween = childCubeRenderer.material.DOColor(color, .15f);
    }
    public void HighlightGrid(bool isEmpty)
    {
        if (isEmpty)
        {
            _indicatorTween?.Kill();
            _indicatorTween = indicator.DOLocalMoveY(_indicatorDefaultPosition.y + .5f, .5f).SetLoops(-1, LoopType.Yoyo);
        }
        
        indicator.gameObject.SetActive(isEmpty);
        SetColor(new Color(243f / 255f, 1, 134f / 255f, 1f));
    }
    public void UnHighlightGrid()
    {
        _indicatorTween?.Kill();
        indicator.gameObject.SetActive(false);
        SetColor(_defaultColor);
    }
}