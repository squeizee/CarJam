using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using PathFind;
using UnityEngine;
using Grid = UnityEngine.Grid;

namespace _Game._4_CarJam.Scripts
{
    public enum ElementType
    {
        None = 0,
        Ground = 1,
        Element = 2,
        Seat = 3,
    }

    public class GridController : MonoBehaviour
    {
        [SerializeField] private Grid grid;
        [SerializeField] private Transform groundTileMapParent;
        
        private List<GridItemView> _listGridItemViews;
        private Vector2Int _mapSize = new Vector2Int(15, 15);
        private List<GameElement> _listGameElements;

        private Vector2Int _maxPoint;
        private Vector2Int _minPoint;

        public void Initialize(List<GameElement> listGameElements)
        {
            _listGridItemViews = new List<GridItemView>();
            _listGameElements = listGameElements;

            _minPoint = new Vector2Int(_mapSize.x, _mapSize.y);
            _maxPoint = new Vector2Int(0, 0);

            foreach (Transform child in groundTileMapParent)
            {
                var cellPosition = grid.WorldToCell(child.position);
                var gridItemView = child.GetComponent<GridItemView>();

                gridItemView.Initialize(new Vector2Int(cellPosition.x, cellPosition.y));
                _listGridItemViews.Add(gridItemView);

                _maxPoint.x = cellPosition.x > _maxPoint.x ? cellPosition.x : _maxPoint.x;
                _maxPoint.y = cellPosition.y > _maxPoint.y ? cellPosition.y : _maxPoint.y;

                _minPoint.x = cellPosition.x < _minPoint.x ? cellPosition.x : _minPoint.x;
                _minPoint.y = cellPosition.y < _minPoint.y ? cellPosition.y : _minPoint.y;
            }
        }


        public bool FindPath3(Vector3 pos, CharacterController character)
        {
            var des = grid.WorldToCell(pos);
            if (!IsEmpty(des)) return false;

            ElementType[,] elementMap = GetMapDataElement();

            var start = grid.WorldToCell(character.transform.position);

            PathFind.Grid pathFindGrid = new PathFind.Grid(_mapSize.x, _mapSize.y, elementMap);

            Point from = new Point(start.x, start.y);
            Point to = new Point(des.x, des.y);

            List<Point> path = Pathfinding.FindPath(pathFindGrid, from, to);

            if (path.Count == 0)
                return false;

            character.MoveAlongPath(path);

            return true;
        }

        public bool FindPath(Vector2Int from, Vector2Int to, out List<Point> path)
        {
            return FindPath(new Point(from.x, from.y), new Point(to.x, to.y), out path);
        }

        public bool FindPath(Point from, Point to, out List<Point> path)
        {
            // check if from and to same
            if (from == to)
            {
                path = new List<Point>();
                return true;
            }

            // check if from and to on map
            if (from.x < _minPoint.x || from.x > _maxPoint.x || from.y < _minPoint.y || from.y > _maxPoint.y)
            {
                path = new List<Point>();
                return false;
            }

            ElementType[,] elementMap = GetMapDataElement();

            PathFind.Grid pathFindGrid = new PathFind.Grid(_mapSize.x, _mapSize.y, elementMap);
            path = Pathfinding.FindPath(pathFindGrid, from, to);

            return path.Count > 0;
        }

        public bool MoveToPosition(CharacterController character, Vector3 destination, out Sequence sequence)
        {
            var characterPosition = character.PositionInGrid;
            var des = WorldToGridPosition(destination);
            if (FindPath(characterPosition, des, out List<Point> path))
            {
                sequence = character.MoveAlongPath(path);
                return true;
            }
            else
            {
                sequence = null;
                return false;
            }
        }
        
        public Vector2Int WorldToGridPosition(Vector3 pos)
        {
            var cellPosition = grid.WorldToCell(pos);
            return new Vector2Int(cellPosition.x, cellPosition.y);
        }
        public bool CanCharacterReachVehicle(CharacterController character, VehicleController vehicle, out List<Point> closestPath)
        {
            var doorPositions = vehicle.DoorPositions;
            var characterPosition = character.PositionInGrid;
            bool isPathFound = false;
            
            closestPath = new();

            foreach (var door in doorPositions)
            {
                if(door == characterPosition)
                {
                    return true;
                }
                
                if (!IsEmpty(door))
                {
                    continue;
                }

                if (FindPath(characterPosition, door, out var path))
                {
                    if (isPathFound == false || path.Count < closestPath.Count)
                    {
                        closestPath = path;
                        isPathFound = true;
                    }
                }
            }
            
            return isPathFound;
        }
        public void CheckForwardPath(VehicleController vehicleController)
        {
            var pivotPoint = grid.WorldToCell(vehicleController.transform.position);
            var direction = Vector3Int.zero;
            var neighbor = Vector3Int.zero;
            var distanceToBorder = 0;
            var offset = vehicleController.Dimension.x;

            switch (vehicleController.GetDirection)
            {
                case GameElement.GameElementDirection.Up:
                    direction = Vector3Int.up;
                    neighbor = Vector3Int.right;
                    distanceToBorder = _maxPoint.y - pivotPoint.y;
                    break;
                case GameElement.GameElementDirection.Right:
                    direction = Vector3Int.right;
                    neighbor = Vector3Int.down;
                    distanceToBorder = _maxPoint.x - pivotPoint.x;
                    break;
                case GameElement.GameElementDirection.Down:
                    direction = Vector3Int.down;
                    neighbor = Vector3Int.left;
                    distanceToBorder = pivotPoint.y - _minPoint.y;
                    break;
                case GameElement.GameElementDirection.Left:
                    direction = Vector3Int.left;
                    neighbor = Vector3Int.up;
                    distanceToBorder = pivotPoint.x - _minPoint.x;
                    break;
            }

            var targetPoint = pivotPoint + direction * (offset * 2 + distanceToBorder);
            List<Vector3> path = new List<Vector3>();
            bool isTargetReached = true;
            for (int i = 1; i < distanceToBorder + 1; i++)
            {
                if (IsEmpty(pivotPoint + direction * i) && IsEmpty(pivotPoint + neighbor + direction * i))
                    path.Add(pivotPoint + direction * i);
                else
                {
                    isTargetReached = false;
                    break;
                }
            }

            if (isTargetReached)
                path.Add(targetPoint);

            vehicleController.MoveForward(path, isTargetReached);
        }

        private ElementType[,] GetMapDataElement()
        {
            ElementType[,] elementMap = new ElementType[_mapSize.x, _mapSize.y];

            foreach (var pos in _listGridItemViews.Select(ground => ground.PositionInGrid))
            {
                elementMap[pos.x, pos.y] = ElementType.Ground;
            }

            foreach (var gameElement in _listGameElements.Where(gameElement =>
                         gameElement.State is GameElement.GameElementState.Idle
                             or GameElement.GameElementState.Waiting))
            {
                var pivotPoint = gameElement.PositionInGrid;
                int xSign = 0, ySign = 0;
                int dim1 = 0, dim2 = 0;

                switch (gameElement.GetElementDirection())
                {
                    case GameElement.GameElementDirection.Up:
                        xSign = 1;
                        ySign = -1;
                        dim1 = gameElement.Dimension.y;
                        dim2 = gameElement.Dimension.x;
                        break;
                    case GameElement.GameElementDirection.Right:
                        xSign = -1;
                        ySign = -1;
                        dim1 = gameElement.Dimension.x;
                        dim2 = gameElement.Dimension.y;
                        break;
                    case GameElement.GameElementDirection.Down:
                        xSign = -1;
                        ySign = 1;
                        dim1 = gameElement.Dimension.y;
                        dim2 = gameElement.Dimension.x;
                        break;
                    case GameElement.GameElementDirection.Left:
                        xSign = 1;
                        ySign = 1;
                        dim1 = gameElement.Dimension.x;
                        dim2 = gameElement.Dimension.y;
                        break;
                }

                for (int x = 0; x < dim1; x++)
                {
                    for (int y = 0; y < dim2; y++)
                    {
                        elementMap[pivotPoint.x + x * xSign, pivotPoint.y + y * ySign] = ElementType.Element;
                    }
                }

                if (gameElement is not VehicleController vehicle) continue;

                foreach (var seat in vehicle.SeatPositions)
                {
                    elementMap[seat.x, seat.y] = ElementType.Seat;
                }
            }

            return elementMap;
        }
        public Vector2Int GetCellPosition(Vector3 pos)
        {
            
            var cellPosition = grid.WorldToCell(pos);
            return new Vector2Int(cellPosition.x, cellPosition.y);
        }
        
        public bool IsEmpty(Vector3Int point)
        {
            if (point.x < _minPoint.x || point.x > _maxPoint.x || point.y < _minPoint.y || point.y > _maxPoint.y)
                return false;

            ElementType[,] elementMap = GetMapDataElement();
            return elementMap[point.x, point.y] == ElementType.Ground;
        }

        public bool IsEmpty(Vector2Int point)
        {
            if (point.x < _minPoint.x || point.x > _maxPoint.x || point.y < _minPoint.y || point.y > _maxPoint.y)
                return false;

            ElementType[,] elementMap = GetMapDataElement();
            return elementMap[point.x, point.y] == ElementType.Ground;
        }
        
        public  Rect GetRect()
        {
            return new Rect(_minPoint.x, _minPoint.y, _maxPoint.x - _minPoint.x, _maxPoint.y - _minPoint.y);
        }
        
        public bool IsEmpty2(Vector3Int point)
        {
            if (point.x < _minPoint.x || point.x > _maxPoint.x || point.y < _minPoint.y || point.y > _maxPoint.y)
                return false;

            ElementType[,] elementMap = GetMapDataElement();
            return elementMap[point.x, point.y] == ElementType.Ground ||
                   elementMap[point.x, point.y] == ElementType.Seat;
        }

        public GridItemView TryGetGridItemView(Vector2Int doorPosition, out GridItemView gridItemView)
        {
            gridItemView = _listGridItemViews.Find(gridItemView => gridItemView.PositionInGrid == doorPosition);

            return gridItemView;
        }
    }
}