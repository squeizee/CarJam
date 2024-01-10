using System.Collections.Generic;
using System.Linq;
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
        
        public Vector2Int GetCellPosition(Vector3 pos)
        {
            var cellPosition = grid.WorldToCell(pos);
            return new Vector2Int(cellPosition.x, cellPosition.y);
        }

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


        public bool FindPath(Vector3 pos, CharacterController character)
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

        public bool FindPathToVehicle(VehicleController vehicle, CharacterController character, Seat selectedSeat)
        {
            var doorPositions = vehicle.DoorPositions;
            var characterPosition = character.PositionInGrid;
            var start = characterPosition;
            var selectedSeatPosition = vehicle.GetSelectedSeatPosition(selectedSeat);

            ElementType[,] elementMap = GetMapDataElement();
            bool[,] seatMap = GetSeatMapData();
            
            PathFind.Grid pathFindGrid = new PathFind.Grid(_mapSize.x, _mapSize.y, elementMap, seatMap);
            
            List<Point> closestPath = new();

            // if I am in door position
            if (doorPositions.Contains(characterPosition))
            {
                closestPath.Add(new Point(selectedSeatPosition.x, selectedSeatPosition.y));
                character.MoveAlongPath(closestPath,selectedSeat);

                return true;
            }
            
            foreach (var door in doorPositions)
            {
                if (!IsEmpty(door))
                {
                    continue;
                }

                Point from = new Point(start.x, start.y);
                Point to = new Point(door.x, door.y);

                List<Point> path = Pathfinding.FindPath(pathFindGrid, from, to);

                if (closestPath.Count == 0 || path.Count < closestPath.Count)
                    closestPath = path;
            }


            if (closestPath.Count == 0)
                return false;

            closestPath.Add(new Point(selectedSeatPosition.x, selectedSeatPosition.y));

            character.MoveAlongPath(closestPath, selectedSeat);

            return true;
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
        private bool[,] GetSeatMapData()
        {
            bool[,] seatMap = new bool[_mapSize.x, _mapSize.y];
            
            foreach (var gameElement in _listGameElements.Where(gameElement =>
                gameElement.State is GameElement.GameElementState.Idle
                or GameElement.GameElementState.Waiting))
            {
                if (gameElement is not VehicleController vehicle) continue;
                
                foreach (var seatPos in vehicle.SeatPositions)
                {
                    seatMap[seatPos.x, seatPos.y] = vehicle.IsSeatEmpty(seatPos);
                }
            }

            return seatMap;
        }
        private bool IsEmptyOrNone(Vector3Int point)
        {
            ElementType[,] elementMap = GetMapDataElement();
            return elementMap[point.x, point.y] == ElementType.Ground ||
                   elementMap[point.x, point.y] == ElementType.None;
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