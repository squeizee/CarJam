using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Tilemaps;

namespace _Game._4_CarJam.Scripts
{
    public enum ElementType
    {
        None = 0,
        Ground = 1,
        Element = 2
        
    }
    public class GridController : MonoBehaviour
    {
        [SerializeField] private Grid grid;
        [SerializeField] private Transform groundTileMapParent;
        private Vector2Int _mapSize = new Vector2Int(15,15);

        private List<GameElement> _listGameElements;

        
        private Vector2Int _maxPoint;
        private Vector2Int _minPoint;
        
        public void Initialize(List<GameElement> listGameElements)
        {
            
            _listGameElements = listGameElements;

            _minPoint = new Vector2Int(_mapSize.x,_mapSize.y);
            _maxPoint = new Vector2Int(0,0);
            
            foreach (Transform child in groundTileMapParent)
            {
                var cellPosition = grid.WorldToCell(child.position);
                
                _maxPoint.x = cellPosition.x > _maxPoint.x ? cellPosition.x : _maxPoint.x;
                _maxPoint.y = cellPosition.y > _maxPoint.y ? cellPosition.y : _maxPoint.y;
                
                _minPoint.x = cellPosition.x < _minPoint.x ? cellPosition.x : _minPoint.x;
                _minPoint.y = cellPosition.y < _minPoint.y ? cellPosition.y : _minPoint.y;
            }
        }

        public ElementType[,] GetMapDataElement()
        {
            ElementType[,] elementMap = new ElementType[_mapSize.x, _mapSize.y];

            foreach (Transform child in groundTileMapParent)
            {
                var cellPosition = grid.WorldToCell(child.position);
                elementMap[cellPosition.x,cellPosition.y] = ElementType.Ground; 
            }

            foreach (var gameElement in _listGameElements.Where(gameElement =>
                         gameElement.State == GameElement.GameElementState.Idle))
            {
                var pivotPoint = grid.WorldToCell(gameElement.transform.position);
                
                switch (gameElement.transform.eulerAngles.y)
                {
                    case 0:
                        //check game element dimension and fill all cells with false with rotation
                        for (int x = 0; x < gameElement.Dimension.y; x++)
                        {
                            for (int y = 0; y < gameElement.Dimension.x; y++)
                            {
                                elementMap[pivotPoint.x + x, pivotPoint.y - y] = ElementType.Element;
                            }
                        }
                        break;
                    case 90:
                        //check game element dimension and fill all cells with false with rotation
                        for (int x = 0; x < gameElement.Dimension.x; x++)
                        {
                            for (int y = 0; y < gameElement.Dimension.y; y++)
                            {
                                elementMap[pivotPoint.x - x, pivotPoint.y - y] = ElementType.Element;
                            }
                        }
                        break;
                    case 180:
                        //check game element dimension and fill all cells with false with rotation
                        for (int x = 0; x < gameElement.Dimension.y; x++)
                        {
                            for (int y = 0; y < gameElement.Dimension.x; y++)
                            {
                                elementMap[pivotPoint.x - x, pivotPoint.y + y] = ElementType.Element;
                            }
                        }
                        break;
                    case 270:
                        //check game element dimension and fill all cells with false with rotation
                        for (int x = 0; x < gameElement.Dimension.x; x++)
                        {
                            for (int y = 0; y < gameElement.Dimension.y; y++)
                            {
                                elementMap[pivotPoint.x + x, pivotPoint.y + y] = ElementType.Element;
                            }
                        }
                        break;
                }
            }
            
            return elementMap;
        }
        public void FindPath(Vector3 pos, CharacterController character)
        {
            var des = grid.WorldToCell(pos);
            if(!IsEmpty(des)) return;
            
            ElementType[,] elementMap = GetMapDataElement();
            
            var start = grid.WorldToCell(character.transform.position);

            PathFind.Grid pathFindGrid = new PathFind.Grid(_mapSize.x, _mapSize.y, elementMap);

            PathFind.Point from = new PathFind.Point(start.x, start.y);
            PathFind.Point to = new PathFind.Point(des.x, des.y);

            List<PathFind.Point> path = PathFind.Pathfinding.FindPath(pathFindGrid, from, to);

            character.MoveAlongPath(path);
        }

        public void CheckForwardPath(VehicleController vehicleController)
        {
            var pivotPoint = grid.WorldToCell(vehicleController.transform.position);
            var direction = Vector3Int.zero;
            var neighbor = Vector3Int.zero;
            var distanceToBorder = 0;
            var offset = vehicleController.Dimension.x;
            switch (vehicleController.transform.eulerAngles.y)
            {
                case 0:
                    direction = Vector3Int.up;
                    neighbor = Vector3Int.right;
                    distanceToBorder = _maxPoint.y - pivotPoint.y;
                    break;
                case 90:
                    direction = Vector3Int.right;
                    neighbor = Vector3Int.down;
                    distanceToBorder = _maxPoint.x - pivotPoint.x;
                    break;
                case 180:
                    direction = Vector3Int.down;
                    neighbor = Vector3Int.left;
                    distanceToBorder = pivotPoint.y - _minPoint.y;
                    break;
                case 270:
                    direction = Vector3Int.left;
                    neighbor = Vector3Int.up;
                    distanceToBorder = pivotPoint.x - _minPoint.x;
                    break;
            }

            var targetPoint = pivotPoint + direction * (offset*2 + distanceToBorder);
            List<Vector3> path = new List<Vector3>();
            bool isTargetReached = true;
            for (int i = 1; i < distanceToBorder +1; i++)
            {
                if(IsEmpty(pivotPoint + direction * i) && IsEmpty(pivotPoint + neighbor + direction * i)) 
                    path.Add(pivotPoint + direction * i);
                else
                {
                    isTargetReached = false;
                    break;
                }
            }
            if(isTargetReached)
                path.Add(targetPoint);
            
            vehicleController.MoveForward(path,isTargetReached);
        }

        private bool IsEmptyOrNone(Vector3Int point)
        {
            ElementType[,] elementMap = GetMapDataElement();
            return elementMap[point.x, point.y] == ElementType.Ground || elementMap[point.x, point.y] == ElementType.None;
        }
        private bool IsEmpty(Vector3Int point)
        {
            ElementType[,] elementMap = GetMapDataElement();
            return elementMap[point.x, point.y] == ElementType.Ground;
        }
    }
}