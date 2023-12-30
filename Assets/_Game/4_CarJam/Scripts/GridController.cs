using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Tilemaps;

namespace _Game._4_CarJam.Scripts
{
    public class GridController : MonoBehaviour
    {
        [SerializeField] private Grid grid;
        [SerializeField] private Tilemap groundTileMap;
        [SerializeField] Vector2Int mapSize;
        private Ground[,] _componentMap;

        private List<GameElement> _listGameElements;

        public void Initialize(List<GameElement> listGameElements)
        {
            _listGameElements = listGameElements;
        }

        private void Start()
        {
            _componentMap = new Ground[mapSize.x, mapSize.y];

            foreach (Transform child in groundTileMap.gameObject.transform)
            {
                if (child.TryGetComponent<Ground>(out var ground))
                {
                    var cell = groundTileMap.WorldToCell(child.position);
                    ground.Initialize(cell);
                    _componentMap[cell.x, cell.y] = ground;
                }
            }
        }

        public bool[,] GetMapData()
        {
            bool[,] boolMap = new bool[mapSize.x, mapSize.y];

            //fill all cells with true
            for (int i = 0; i < mapSize.x; i++)
            {
                for (int j = 0; j < mapSize.y; j++)
                {
                    boolMap[i, j] = true;
                }
            }

            //get state not idle foreach
            foreach (var gameElement in _listGameElements.Where(gameElement =>
                         gameElement.State == GameElement.GameElementState.Idle))
            {
                var pivotPoint = grid.WorldToCell(gameElement.transform.position);
                
                switch (gameElement.transform.eulerAngles.y)
                {
                    case 0:
                        //check game element dimension and fill all cells with false with rotation
                        for (int x = 0; x < gameElement.dimension.y; x++)
                        {
                            for (int y = 0; y < gameElement.dimension.x; y++)
                            {
                                boolMap[pivotPoint.x + x, pivotPoint.y - y] = false;
                            }
                        }
                        break;
                    case 90:
                        //check game element dimension and fill all cells with false with rotation
                        for (int x = 0; x < gameElement.dimension.x; x++)
                        {
                            for (int y = 0; y < gameElement.dimension.y; y++)
                            {
                                boolMap[pivotPoint.x - x, pivotPoint.y - y] = false;
                            }
                        }
                        break;
                    case 180:
                        //check game element dimension and fill all cells with false with rotation
                        for (int x = 0; x < gameElement.dimension.y; x++)
                        {
                            for (int y = 0; y < gameElement.dimension.x; y++)
                            {
                                boolMap[pivotPoint.x - x, pivotPoint.y + y] = false;
                            }
                        }
                        break;
                    case 270:
                        //check game element dimension and fill all cells with false with rotation
                        for (int x = 0; x < gameElement.dimension.x; x++)
                        {
                            for (int y = 0; y < gameElement.dimension.y; y++)
                            {
                                boolMap[pivotPoint.x + x, pivotPoint.y + y] = false;
                            }
                        }
                        break;
                }
            }

            return boolMap;
        }


        public void FindPath(Vector3 pos, CharacterController character)
        {
            bool[,] boolMap = GetMapData();
            var des = grid.WorldToCell(pos);

            if (!boolMap[des.x, des.y]) return;

            var start = grid.WorldToCell(character.transform.position);

            PathFind.Grid pathFindGrid = new PathFind.Grid(mapSize.x, mapSize.y, boolMap);

            PathFind.Point from = new PathFind.Point(start.x, start.y);
            PathFind.Point to = new PathFind.Point(des.x, des.y);

            List<PathFind.Point> path = PathFind.Pathfinding.FindPath(pathFindGrid, from, to);

            character.TryMove(path);
        }

        public bool IsEmpty(Vector3 pos)
        {
            bool[,] boolMap = GetMapData();
            var point = grid.WorldToCell(pos);
            return boolMap[point.x, point.y];
        }
    }
}