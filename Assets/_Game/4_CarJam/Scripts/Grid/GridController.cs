using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using DG.Tweening.Plugins.Core.PathCore;
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
            // boundary check for to
            if (to.x < _minPoint.x || to.x > _maxPoint.x || to.y < _minPoint.y || to.y > _maxPoint.y)
            {
                path = new List<Point>();
                return false;
            }

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

        public bool CanVehicleReachIntersectionPoint(VehicleController vehicle,float angle, Vector3 intersection, out Vector3 newIntersection)
        {
            newIntersection = Vector3.zero;
            
            bool isTargetReached = true;
            var intersectionInGrid = grid.WorldToCell(intersection);
            var vehiclePosition = vehicle.PositionInGrid;
            var direction = Vector2Int.zero;
            var neighbor = Vector2Int.zero;
            var distance = 0;
            int intAngle = Mathf.RoundToInt(angle) < 0 ? Mathf.RoundToInt(angle) + 360 : Mathf.RoundToInt(angle);
            
            
            switch (intAngle)
            {
                case 0:
                    direction = Vector2Int.up;
                    neighbor = Vector2Int.right;
                    distance = intersectionInGrid.y - vehiclePosition.y;
                    break;
                case 90:
                    direction = Vector2Int.right;
                    neighbor = Vector2Int.down;
                    distance = (intersectionInGrid.x - vehiclePosition.x) + 1;
                    break;
                case 180:
                    direction = Vector2Int.down;
                    neighbor = Vector2Int.left;
                    distance = vehiclePosition.y - intersectionInGrid.y;
                    break;
                case 270:
                    direction = Vector2Int.left;
                    neighbor = Vector2Int.up;
                    distance = vehiclePosition.x - intersectionInGrid.x;
                    break;
            }
            
            for (int i = 1; i < distance + 1; i++) 
            {
                var point = vehiclePosition + direction * i;

                if (vehicle.IsPointInVehicle(point))
                {
                    return true;
                }
                
                if (point == _maxPoint)
                {
                    newIntersection = GetWorldPosition(point);
                    break;
                }
                
                if (IsEmpty(point) && IsEmpty(point + neighbor))
                {
                    newIntersection = GetWorldPosition(point);
                }
                    
                else
                {
                    isTargetReached = false;
                    break;
                }
            }
            
            return isTargetReached;
        }
        public bool CanCharacterReachVehicle(CharacterController character, VehicleController vehicle,
            out List<Point> closestPath)
        {
            var doorPositions = vehicle.DoorPositions();
            var characterPosition = character.PositionInGrid;
            bool isPathFound = false;

            closestPath = new();

            foreach (var door in doorPositions)
            {
                if (door == characterPosition)
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

                foreach (var seat in vehicle.SeatPositions())
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
        public Vector3 GetWorldPosition(Vector2Int pos)
        {
            return grid.GetCellCenterWorld(new Vector3Int(pos.x, pos.y, 0));
        }
        public Vector2Int GetMaxPoint()
        {
            return _maxPoint;
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
           if(IsPointInGrid(point) == false)
               return false;

            ElementType[,] elementMap = GetMapDataElement();
            return elementMap[point.x, point.y] == ElementType.Ground;
        }
        
        public bool IsPointInGrid(Vector2Int point)
        {
            return point.x >= _minPoint.x && point.x <= _maxPoint.x && point.y >= _minPoint.y && point.y <= _maxPoint.y;
        }
        
        public Rect GetLocalRect()
        {
            return new Rect(_minPoint.x, _minPoint.y, _maxPoint.x - _minPoint.x, _maxPoint.y - _minPoint.y);
        }

        public Rect GetWorldRect()
        {
            Vector3 transformPosition = transform.position;
            return new Rect(_minPoint.x + transformPosition.x, _minPoint.y + transformPosition.z,
                _maxPoint.x - _minPoint.x, _maxPoint.y - _minPoint.y);
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