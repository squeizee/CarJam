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

        
        public void Initialize(List<GameElement> listGameElements)
        {
            _listGameElements = listGameElements;
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

        private bool IsEmpty(Vector3Int point)
        {
            ElementType[,] elementMap = GetMapDataElement();
            return elementMap[point.x, point.y] == ElementType.Ground;
        }
    }
}