using System;
using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class Road : MonoBehaviour
    {
        public Transform Start;
        public Transform End;

        public Road NextRoad;

        public bool LineLineIntersection(out Vector3 intersection, Vector3 startPoint, Vector3 directionVector)
        {
            if (LineIntersection.FindIntersection(new Line
                {
                    x1 = Start.position.x,
                    y1 = Start.position.z,
                    x2 = End.position.x,
                    y2 = End.position.z
                }, new Line
                {
                    x1 = startPoint.x,
                    y1 = startPoint.z,
                    x2 = startPoint.x + directionVector.x * 100,
                    y2 = startPoint.z + directionVector.z * 100
                }, out var result))
            {
                intersection = new Vector3((float)result.x, 0, (float)result.y);
                return true;
            }
            else
            {
                intersection = Vector3.zero;
                return false;
            }

            Vector3 linePoint1 = Start.position;
            linePoint1.y = 0;
            Vector3 lineVec1 = End.position - Start.position;
            lineVec1.y = 0;
            Vector3 linePoint2 = startPoint;
            linePoint2.y = 0;
            Vector3 lineVec2 = directionVector * 100;
            lineVec2.y = 0;

            Vector3 lineVec3 = linePoint2 - linePoint1;
            Vector3 crossVec1and2 = Vector3.Cross(lineVec1, lineVec2);
            Vector3 crossVec3and2 = Vector3.Cross(lineVec3, lineVec2);

            float planarFactor = Vector3.Dot(lineVec3, crossVec1and2);

            //is coplanar, and not parallel
            if (Mathf.Abs(planarFactor) < 0.0001f
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
            LineLineIntersection(out var intersection, NextRoad.Start.position,
                NextRoad.End.position - NextRoad.Start.position);
            return intersection;
        }

        public Vector3 GetDirection()
        {
            return End.position - Start.position;
        }

        public struct Line
        {
            public double x1 { get; set; }
            public double y1 { get; set; }

            public double x2 { get; set; }
            public double y2 { get; set; }
        }

        public struct Point
        {
            public double x { get; set; }
            public double y { get; set; }
        }

        public class LineIntersection
        {
            //  Returns Point of intersection if do intersect otherwise default Point (null)
            public static bool FindIntersection(Line lineA, Line lineB, out Point result, double tolerance = 0.001)
            {
                double x1 = lineA.x1, y1 = lineA.y1;
                double x2 = lineA.x2, y2 = lineA.y2;

                double x3 = lineB.x1, y3 = lineB.y1;
                double x4 = lineB.x2, y4 = lineB.y2;

                // equations of the form x=c (two vertical lines) with overlapping
                if (Math.Abs(x1 - x2) < tolerance && Math.Abs(x3 - x4) < tolerance && Math.Abs(x1 - x3) < tolerance)
                {
                    result = default(Point);
                    return false;
                }

                //equations of the form y=c (two horizontal lines) with overlapping
                if (Math.Abs(y1 - y2) < tolerance && Math.Abs(y3 - y4) < tolerance && Math.Abs(y1 - y3) < tolerance)
                {
                    result = default(Point);
                    return false;
                }

                //equations of the form x=c (two vertical parallel lines)
                if (Math.Abs(x1 - x2) < tolerance && Math.Abs(x3 - x4) < tolerance)
                {
                    //return default (no intersection)
                    result = default(Point);
                    return false;
                }

                //equations of the form y=c (two horizontal parallel lines)
                if (Math.Abs(y1 - y2) < tolerance && Math.Abs(y3 - y4) < tolerance)
                {
                    //return default (no intersection)
                    result = default(Point);
                    return false;
                }

                //general equation of line is y = mx + c where m is the slope
                //assume equation of line 1 as y1 = m1x1 + c1 
                //=> -m1x1 + y1 = c1 ----(1)
                //assume equation of line 2 as y2 = m2x2 + c2
                //=> -m2x2 + y2 = c2 -----(2)
                //if line 1 and 2 intersect then x1=x2=x & y1=y2=y where (x,y) is the intersection point
                //so we will get below two equations 
                //-m1x + y = c1 --------(3)
                //-m2x + y = c2 --------(4)

                double x, y;

                //lineA is vertical x1 = x2
                //slope will be infinity
                //so lets derive another solution
                if (Math.Abs(x1 - x2) < tolerance)
                {
                    //compute slope of line 2 (m2) and c2
                    double m2 = (y4 - y3) / (x4 - x3);
                    double c2 = -m2 * x3 + y3;

                    //equation of vertical line is x = c
                    //if line 1 and 2 intersect then x1=c1=x
                    //subsitute x=x1 in (4) => -m2x1 + y = c2
                    // => y = c2 + m2x1 
                    x = x1;
                    y = c2 + m2 * x1;
                }
                //lineB is vertical x3 = x4
                //slope will be infinity
                //so lets derive another solution
                else if (Math.Abs(x3 - x4) < tolerance)
                {
                    //compute slope of line 1 (m1) and c2
                    double m1 = (y2 - y1) / (x2 - x1);
                    double c1 = -m1 * x1 + y1;

                    //equation of vertical line is x = c
                    //if line 1 and 2 intersect then x3=c3=x
                    //subsitute x=x3 in (3) => -m1x3 + y = c1
                    // => y = c1 + m1x3 
                    x = x3;
                    y = c1 + m1 * x3;
                }
                //lineA & lineB are not vertical 
                //(could be horizontal we can handle it with slope = 0)
                else
                {
                    //compute slope of line 1 (m1) and c2
                    double m1 = (y2 - y1) / (x2 - x1);
                    double c1 = -m1 * x1 + y1;

                    //compute slope of line 2 (m2) and c2
                    double m2 = (y4 - y3) / (x4 - x3);
                    double c2 = -m2 * x3 + y3;

                    //solving equations (3) & (4) => x = (c1-c2)/(m2-m1)
                    //plugging x value in equation (4) => y = c2 + m2 * x
                    x = (c1 - c2) / (m2 - m1);
                    y = c2 + m2 * x;

                    //verify by plugging intersection point (x, y)
                    //in orginal equations (1) & (2) to see if they intersect
                    //otherwise x,y values will not be finite and will fail this check
                    if (!(Math.Abs(-m1 * x + y - c1) < tolerance
                          && Math.Abs(-m2 * x + y - c2) < tolerance))
                    {
                        //return default (no intersection)
                        result = default(Point);
                        return false;
                    }
                }

                //x,y can intersect outside the line segment since line is infinitely long
                //so finally check if x, y is within both the line segments
                if (IsInsideLine(lineA, x, y) &&
                    IsInsideLine(lineB, x, y))
                {
                    result = new Point { x = x, y = y };
                    return true;
                }

                //return default (no intersection)
                result = default(Point);
                return false;
            }

            // Returns true if given point(x,y) is inside the given line segment
            private static bool IsInsideLine(Line line, double x, double y)
            {
                return (x >= line.x1 && x <= line.x2
                        || x >= line.x2 && x <= line.x1)
                       && (y >= line.y1 && y <= line.y2
                           || y >= line.y2 && y <= line.y1);
            }
        }
    }
}