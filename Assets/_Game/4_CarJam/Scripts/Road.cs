using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class Road : MonoBehaviour
    {
        public Transform Start;
        public Transform End;
        
        public Road NextRoad;

        public bool LineLineIntersection(out Vector3 intersection, Vector3 startPoint, Vector3 directionVector){

            Vector3 linePoint1 = Start.position;
            Vector3 lineVec1 = End.position - Start.position;
            
            Vector3 linePoint2 = startPoint;
            linePoint2.y = 0;
            Vector3 lineVec2 = directionVector * 100;
            
            Vector3 lineVec3 = linePoint2 - linePoint1;
            Vector3 crossVec1and2 = Vector3.Cross(lineVec1, lineVec2);
            Vector3 crossVec3and2 = Vector3.Cross(lineVec3, lineVec2);

            float planarFactor = Vector3.Dot(lineVec3, crossVec1and2);

            //is coplanar, and not parallel
            if( Mathf.Abs(planarFactor) < 0.0001f 
                && crossVec1and2.sqrMagnitude > 0.0001f)
            {
                float s = Vector3.Dot(crossVec3and2, crossVec1and2) 
                          / crossVec1and2.sqrMagnitude;
                intersection = linePoint1 + (lineVec1 * s);
                return true;
            }
            else
            {
                intersection = Vector3.zero;
                return false;
            }
        }

        public Vector3 GetIntersectionPointToNextRoad()
        {
            LineLineIntersection(out var intersection, NextRoad.Start.position, NextRoad.End.position - NextRoad.Start.position);
            return intersection;
        }
        public Vector3 GetDirection()
        {
            return End.position - Start.position;
        }
    }
}