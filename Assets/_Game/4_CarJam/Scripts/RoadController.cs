using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class RoadController : MonoBehaviour
    {
        public List<Road> RoadList;

        public void Initialize()
        {
            RoadList = GetComponentsInChildren<Road>().ToList();
        }

        public Road GetNextRoad(Road currentRoad)
        {
            return currentRoad.NextRoad;
        }

        public bool FindRoadAhead(Vector3 position, Vector3 direction, out Road road, out Vector3 intersection)
        {
            road = null;
            intersection = Vector3.zero;

            // if (IsVehicleOnRoad(position, direction, out road))
            // {
            //     return true;
            // }
            
            float minDistance = float.MaxValue;
            foreach (var roadElement in RoadList)
            {
                if (roadElement.LineLineIntersection(out var resultIntersection, position, direction))
                {
                    var distance = Vector3.Distance(position, resultIntersection);
                    if (distance < minDistance)
                    {
                        intersection = resultIntersection;
                        minDistance = distance;
                        road = roadElement;
                    }
                }
            }

            if (road == null)
            {
                Debug.LogError("No road found");
            }

            return road != null;
        }

        public bool IsVehicleOnRoad(Vector3 position, Vector3 direction, out Road road)
        {
            // foreach (var roadElement in RoadList)
            // {
            //     var roadDirection = roadElement.GetDirection();
            //
            //     if (direction == roadDirection)
            //     {
            //         
            //     }
            // }
        }
    }
}