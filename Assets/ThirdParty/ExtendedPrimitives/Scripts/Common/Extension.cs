using UnityEngine;
using System.Collections.Generic;

namespace ExtendedPrimitives_11.Internal {

    public static class Extension {

        public static float GetValue(this float[] arr, float time) {

            if (arr.Length == 0) {
                return 0;
            }

            if (time.LessOrEqualsThan(0)) {
                return arr[0];
            }

            if (time.GreaterOrEqualsThan(1)) {
                return arr[arr.Length-1];
            }

            float step = 1f/(arr.Length-1);
            int idx = Mathf.FloorToInt( time / step );
            float lv = (time - idx * step) / step;
 
            return Mathf.LerpUnclamped(arr[idx], arr[idx + 1], lv);
        }

 

        public static Vector3 HermitePoint(Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3, float s) {
            return new Vector3(HermiteValue(p0.x, p1.x, p2.x, p3.x, s), HermiteValue(p0.y, p1.y, p2.y, p3.y, s), HermiteValue(p0.z, p1.z, p2.z, p3.z, s));
        }

        public static Vector3 HermitePoint(Vector2 p0, Vector2 p1, Vector2 p2, Vector2 p3, float s) {
            return new Vector3(HermiteValue(p0.x, p1.x, p2.x, p3.x, s), HermiteValue(p0.y, p1.y, p2.y, p3.y, s));
        }

        public static float HermiteValue(float y0, float y1, float y2, float y3, float s) {
            float mu2 = s * s;
            float mu3 = mu2 * s;
            float m0, m1;
            float a0, a1, a2, a3;
            m0 = (y1 - y0) / 2;
            m0 += (y2 - y1) / 2;
            m1 = (y2 - y1) / 2;
            m1 += (y3 - y2) / 2;
            a0 = 2 * mu3 - 3 * mu2 + 1;
            a1 = mu3 - 2 * mu2 + s;
            a2 = mu3 - mu2;
            a3 = -2 * mu3 + 3 * mu2;
            return (a0 * y1 + a1 * m0 + a2 * m1 + a3 * y2);
        }

        public static float LinearToSin(float t) {
            return 1f - (Mathf.Sin((t * 3.141592f) + 1.5708f) * 0.49999f + 0.5f);
        }

        public static bool ApproximatelyZero(float f) {
            return f < 0.00001f && f > -0.00001f;
        }

        public static bool ApproximatelyEquals(float a, float b) {
            return ApproximatelyZero(a - b);
        }

        public static bool LessOrEqualsThan(this float f, float val) {
            return f < val || ApproximatelyEquals(f, val); 
        }

        public static bool GreaterOrEqualsThan(this float f, float val) {
            return f > val || ApproximatelyEquals(f, val);
        }

        public static bool LineLineItersection(Vector2 red, Vector2 redDir, Vector2 green, Vector2 greenDir, ref Vector2 intersection) {
            bool redVertical = ApproximatelyEquals(redDir.x, 0);
            bool redHorizontal = ApproximatelyEquals(redDir.y, 0);
            bool greenVertical = ApproximatelyEquals(greenDir.x, 0);
            bool greenHorizontal = ApproximatelyEquals(greenDir.y, 0);

            if (redHorizontal && greenHorizontal) {
                return false;
            }

            if (redVertical && greenVertical) {
                return false;
            }

            if (redHorizontal) {
                intersection.x = green.x + (red.y - green.y) * (greenDir.x / greenDir.y);
                intersection.y = red.y;
                return true;
            }

            if (redVertical) {
                intersection.x = red.x;
                intersection.y = green.y + (red.x - green.x) * (greenDir.y / greenDir.x);
                return true;
            }

            if (greenHorizontal) {
                intersection.x = red.x + (green.y - red.y) * (redDir.x / redDir.y);
                intersection.y = green.y;
                return true;
            }

            if (greenVertical) {
                intersection.x = green.x;
                intersection.y = red.y + (green.x - red.x) * (redDir.y / redDir.x);
                return true;
            }

            float slope0 = redDir.y / redDir.x;
            float slope1 = greenDir.y / greenDir.x;

            if (ApproximatelyEquals(slope0, slope1)) {
                return false;
            }

            float yi0 = red.y - slope0 * red.x;
            float yi1 = green.y - slope1 * green.x;
            intersection.x = (yi1 - yi0) / (slope0 - slope1);
            intersection.y = slope0 * intersection.x + yi0;
            return true;
        }

        public static bool LineLineItersection(Ray2D r0, Ray2D r1, ref Vector2 intersection) {
            return LineLineItersection(r0.origin, r0.direction, r1.origin, r1.direction, ref intersection);
        }


        public static Vector3 XYtoXyZ(this Vector2 v) {
            return new Vector3(v.x, 0, v.y);
        }

        public static Vector3 XYtoXyZ(this Vector2 v, float y) {
            return new Vector3(v.x, y, v.y);
        }

        public static Vector2 XyZtoXY(this Vector3 v) {
            return new Vector2(v.x, v.z);
        }

        public static float ToDegrees(this float f) {
            return f * Mathf.Rad2Deg;
        }

        public static float ToRadians(this float f) {
            return f * Mathf.Deg2Rad;
        }

        public static void CalcFillet(Vector2 a, Vector2 b, Vector2 c, ref float filletRadius, ref Vector2 center, ref float rotFrom, ref float angle) {
            Vector2 ba = b - a;
            Vector2 cb = c - b;

            float baNum = ba.magnitude;
            float cbNum = cb.magnitude;

            if (ApproximatelyZero(baNum) || ApproximatelyZero(cbNum)) {
                filletRadius = 0;
                center = b;
                rotFrom = 0;
                angle = 0;
                return;
            }

            ba = ba / baNum;
            cb = cb / cbNum;

            Vector2 abOrtho = Edge2d.Rotate90(ba);
            Vector2 bcOrtho = Edge2d.Rotate90(cb);
            float baRot = Edge2d.RotationAngle(-ba);
            float bcRot = Edge2d.RotationAngle(cb);

            float deltaAngle = DeltaAngleRad(baRot, bcRot);
            float delataAngleSign = Mathf.Sign(deltaAngle);

            angle = deltaAngle - 3.141592f * delataAngleSign;
            rotFrom = baRot - 1.570796f * delataAngleSign;

            float midDirRotation = baRot + deltaAngle / 2;

            Vector2 midDir = new Vector2(Mathf.Cos(midDirRotation), Mathf.Sin(midDirRotation));

            Vector2 aMidIntersect = new Vector2();
            Vector2 cMidIntersect = new Vector2();

            if (LineLineItersection(a, abOrtho, b, midDir, ref aMidIntersect)) {
                float aMidIntersectDist = Vector2.Distance(aMidIntersect, a);
                filletRadius = Mathf.Min(filletRadius, aMidIntersectDist);
            }

            if (LineLineItersection(c, bcOrtho, b, midDir, ref cMidIntersect)) {
                float cMidIntersectDist = Vector2.Distance(cMidIntersect, c);
                filletRadius = Mathf.Min(filletRadius, cMidIntersectDist);
            }

            float tan = Mathf.Tan((deltaAngle - Mathf.PI) / 2);
            float opposite = tan * filletRadius;
            float midDirLength = Mathf.Sqrt(filletRadius * filletRadius + opposite * opposite);

            center = b + midDir * midDirLength;
        }

        public static float DeltaAngleRad(float current, float target) {
            float num = Mathf.Repeat(target - current, 6.283185f);
            if (num >= Mathf.PI) {
                num -= 6.283185f;
            }
            return num;
        }
    }

    public struct Fillet {
        public int InNormal;
        public float InNormalPos;

        Vector2 A;
        Vector2 B;
        Vector2 C;

        public float Rot;
        public float Angle;
        public float Sign;


        Vector2 center;
        public Vector3 Center {
            get {
                return toV3(center);
            }
        }
        public float ClampedRadius;

        public Fillet(int inNormal) {
            InNormal = inNormal;
            A = Vector2.zero;
            B = Vector2.zero;
            C = Vector2.zero;
            Rot = 0;
            Angle = 0;
            center = Vector2.zero;
            ClampedRadius = 0;
            InNormalPos = 0;
            Sign = 1;
        }

        Vector3 toV3(Vector2 v2) {
            Vector3 result = Vector3.zero;
            if (InNormal == 1) {
                result.x = v2.x;
                result.y = InNormalPos;
                result.z = v2.y;
            } else if (InNormal == 2) {
                result.x = v2.x;
                result.y = v2.y;
                result.z = InNormalPos;
            }
            return result;
        }


        public void Set(float inNormalPos, Vector2 a, Vector2 b, Vector2 c, float radius) {
            InNormalPos = inNormalPos;
            A = a;
            B = b;
            C = c;
            ClampedRadius = radius;
            Extension.CalcFillet(a, b, c, ref ClampedRadius, ref center, ref Rot, ref Angle);
            Sign = Mathf.Sign(Angle);
        }

        public void SetRadius(float radius) {
            ClampedRadius = radius;
            Extension.CalcFillet(A, B, C, ref ClampedRadius, ref center, ref Rot, ref Angle);
        }


        public Vector3 GetPoint(float lv) {
            float a = Rot + Angle * lv;
            float x = center.x + Mathf.Cos(a) * ClampedRadius;
            float y = center.y + Mathf.Sin(a) * ClampedRadius;
            return toV3(new Vector2(x, y));
        }


        public Vector3 GetPoint(float lv, float outline) {
            outline *= Sign;
            float a = Rot + Angle * lv;
            float x = center.x + Mathf.Cos(a) * (ClampedRadius + outline);
            float y = center.y + Mathf.Sin(a) * (ClampedRadius + outline);
            return toV3(new Vector2(x, y));
        }


        public void DrawGizmo(Color color) {
            Gizmos.color = color;
            for (int i = 0; i < 64; i++) {
                Gizmos.DrawLine(GetPoint(i / 64f), GetPoint((i + 1) / 64f));
            }
        }



        public void DrawGizmo(Color color, float outline) {

            Gizmos.color = color;
            for (int i = 0; i < 64; i++) {
                Gizmos.DrawLine(GetPoint(i / 64f, outline), GetPoint((i + 1) / 64f, outline));
            }
 

        }
    }

    public class ConnectTriangulator {


        public struct Tris {
            public int A;


            public int B;


            public int C;


            public bool Flipped;

            public Tris(int a, int b, int c, bool flipped) {
                A = a;
                B = b;
                C = c;

                Flipped = flipped;
            }
        }

        public struct Quad {
            public int A;
            public int B;
            public int C;
            public int D;
            public bool Flipped;

            public Quad(int a, int b, int c, int d, bool flipped) {
                A = a;
                B = b;
                C = c;
                D = d;
                Flipped = flipped;
            }
        }

        struct IndexCounter {
            public int i;
            public int ni;
            public int Dir;
            public int Length;

            public IndexCounter(int length, int dir) {
                Dir = dir;
                Length = length;
                i = Length / 2;
                ni = Mathf.Clamp(i + dir, 0, Length);

            }

            public bool Completed {
                get {
                    return i == ni;
                }
            }

            public void MoveNext() {
                i = Mathf.Clamp(i + Dir, 0, Length);
                ni = Mathf.Clamp(i + Dir, 0, Length);
            }

        }

        public List<Tris> ResultTris = new List<Tris>();
        public List<Quad> ResultQuads = new List<Quad>();

        public ConnectTriangulator(int[] inner, int[] outer) {
            ResultTris.Clear();
            ResultQuads.Clear();
            int InnerSegments = inner.Length - 1;
            int OuterSegments = outer.Length - 1;

            IndexCounter ip = new IndexCounter(InnerSegments, 1);
            IndexCounter im = new IndexCounter(InnerSegments, -1);

            IndexCounter op = new IndexCounter(OuterSegments, 1);
            IndexCounter om = new IndexCounter(OuterSegments, -1);



            while (true) {
                if (ip.Completed && op.Completed) {
                    break;
                }
                if (ip.Completed) {
                    ResultTris.Add(new Tris(inner[ip.i], outer[op.i], outer[op.ni], true));
                } else if (op.Completed) {
                    ResultTris.Add(new Tris(inner[ip.i], outer[op.i], inner[ip.ni], true));
                } else {
                    ResultQuads.Add(new Quad(inner[ip.i], outer[op.i], outer[op.ni], inner[ip.ni], true));
                }
                op.MoveNext();
                ip.MoveNext();
            }

            while (true) {
                if (im.Completed && om.Completed) {
                    break;
                }
                if (im.Completed) {
                    ResultTris.Add(new Tris(inner[im.i], outer[om.i], outer[om.ni], false));
                } else if (om.Completed) {
                    ResultTris.Add(new Tris(inner[im.i], outer[om.i], inner[im.ni], false));
                } else {
                    ResultQuads.Add(new Quad(inner[im.i], outer[om.i], outer[om.ni], inner[im.ni], false));
                }
                om.MoveNext();
                im.MoveNext();
            }
        }

        public static int[] NaturalNumbers(int start, int length) {
            int[] result = new int[length];
            for (int i = 0; i < result.Length; i++) {
                result[i] = start + i;
            }
            return result;
        }
    }

    public struct Matrix2d {
        public static Matrix2d identity = new Matrix2d(1, 0, 0, 0, 1, 0, 0, 0, 1);
        public static Matrix2d zero = new Matrix2d(0, 0, 0, 0, 0, 0, 0, 0, 0);

        public float m00;
        public float m10;
        public float m20;

        public float m01;
        public float m11;
        public float m21;

        public float m02;
        public float m12;
        public float m22;


        public Vector2 Position {
            get {
                return new Vector2(m20, m21);
            }

            set {
                m20 = value.x;
                m21 = value.y;
            }
        }

        public Vector2 Right {
            get {
                return new Vector2(m00, m10);
            }
        }

        public Vector2 Up {
            get {
                return new Vector2(m01, m11);
            }
        }

        public Matrix2d(float xDegreeAngle, Vector2 pos) {

            float axRad = xDegreeAngle * Mathf.Deg2Rad;
            m00 = Mathf.Cos(axRad);
            m10 = Mathf.Sin(axRad);
            m20 = pos.x;

            //float ayRad = axRad + Mathf.PI / 2f;
            m01 = -m10;
            m11 = m00;
            m21 = pos.y;

            m02 = 0;
            m12 = 0;
            m22 = 1;
        }


        public Matrix2d(float xDegreeAngle, Vector2 pos, Vector2 scale) {

            float axRad = xDegreeAngle * Mathf.Deg2Rad;
            m00 = Mathf.Cos(axRad);
            m10 = Mathf.Sin(axRad);
            m20 = pos.x;

            m01 = -m10;
            m11 = m00;
            m21 = pos.y;


            m00 *= scale.x;
            m10 *= scale.x;


            m01 *= scale.y;
            m11 *= scale.y;

            m02 = 0;
            m12 = 0;
            m22 = 1;
        }

        public Matrix2d(float xRadiansAngle) {
            m00 = Mathf.Cos(xRadiansAngle);
            m10 = Mathf.Sin(xRadiansAngle);
            m20 = 0;
            //float ayRad = xRadiansAngle + Mathf.PI / 2f;
            m01 = -m10;
            m11 = m00;
            m21 = 0;
            m02 = 0;
            m12 = 0;
            m22 = 1;
        }

        public Matrix2d(Vector2 dirX, Vector2 dirY, Vector2 pos) {
            m00 = dirX.x;
            m10 = -dirX.y;
            m20 = pos.x;

            m01 = -dirY.x;
            m11 = dirY.y;
            m21 = pos.y;

            m02 = 0;
            m12 = 0;
            m22 = 1;
        }

        public Matrix2d(float a00, float a10, float a20, float a01, float a11, float a21, float a02, float a12, float a22) {
            m00 = a00;
            m10 = a10;
            m20 = a20;

            m01 = a01;
            m11 = a11;
            m21 = a21;

            m02 = a02;
            m12 = a12;
            m22 = a22;
        }

        public Matrix2d(Vector2 pos, Vector2 target, bool normalized) {
            //m00 = Mathf.Cos(xRadiansAngle);
            //m10 = Mathf.Sin(xRadiansAngle);
            //m20 = 0;
            ////float ayRad = xRadiansAngle + Mathf.PI / 2f;
            //m01 = -m10;
            //m11 = m00;
            //m21 = 0;
            //m02 = 0;
            //m12 = 0;
            //m22 = 1;


            Vector2 dirX = (target - pos);
            if (normalized) {
                dirX = dirX.normalized;
            }

            m00 = dirX.x;
            m10 = dirX.y;
            m20 = pos.x;

            m01 = -m10;
            m11 = m00;
            m21 = pos.y;

            m02 = 0;
            m12 = 0;
            m22 = 1;
        }

        public static Matrix2d operator *(Matrix2d m1, Matrix2d m2) {
            float a11 = m1.m00 * m2.m00 + m1.m10 * m2.m01 + m1.m20 * m2.m02;
            float a12 = m1.m00 * m2.m10 + m1.m10 * m2.m11 + m1.m20 * m2.m12;
            float a13 = m1.m00 * m2.m20 + m1.m10 * m2.m21 + m1.m20 * m2.m22;
            float a21 = m1.m01 * m2.m00 + m1.m11 * m2.m01 + m1.m21 * m2.m02;
            float a22 = m1.m01 * m2.m10 + m1.m11 * m2.m11 + m1.m21 * m2.m12;
            float a23 = m1.m01 * m2.m20 + m1.m11 * m2.m21 + m1.m21 * m2.m22;
            float a31 = m1.m02 * m2.m00 + m1.m12 * m2.m01 + m1.m22 * m2.m02;
            float a32 = m1.m02 * m2.m10 + m1.m12 * m2.m11 + m1.m22 * m2.m12;
            float a33 = m1.m02 * m2.m20 + m1.m12 * m2.m21 + m1.m22 * m2.m22;
            return new Matrix2d(a11, a12, a13, a21, a22, a23, a31, a32, a33);
        }

        //FLOAT MULTIPLICATION
        public static Matrix2d operator *(Matrix2d m, float f) {
            m.m00 *= f;
            m.m10 *= f;
            m.m20 *= f;
            m.m01 *= f;
            m.m11 *= f;
            m.m21 *= f;
            m.m02 *= f;
            m.m12 *= f;
            m.m22 *= f;
            return m;
        }

        public static Matrix2d operator *(float f, Matrix2d m) {
            return m * f;
        }

        public static Vector2 operator *(Vector2 v, Matrix2d m) {
            return m.MultiplyPoint(v);
        }

        public void DrawGizmo() {
            Debug.DrawLine(Position, Position + Up, Color.green);
            Debug.DrawLine(Position, Position + Right, Color.red);
        }

        public void DrawGizmoXZ() {
            Debug.DrawLine(Position.XYtoXyZ(), (Position + Up).XYtoXyZ(), Color.green);
            Debug.DrawLine(Position.XYtoXyZ(), (Position + Right).XYtoXyZ(), Color.red);
        }

        public Vector2 MultiplyPoint(Vector2 point) {
            Vector2 newPoint;
            newPoint.x = this.m00 * point.x + this.m01 * point.y + this.m20;
            newPoint.y = this.m10 * point.x + this.m11 * point.y + this.m21;
            return newPoint;
        }


        public Vector2 MultiplyVector(Vector2 point) {
            Vector2 newPoint;
            newPoint.x = this.m00 * point.x + this.m01 * point.y;
            newPoint.y = this.m10 * point.x + this.m11 * point.y;
            return newPoint;
        }




        public Vector3 MultiplyVectorX(Vector3 vec) {
            Vector2 r = MultiplyVector(new Vector2(vec.z, vec.y));
            return new Vector3(vec.x, r.y, r.x);
        }

        public Vector3 MultiplyPointX(Vector3 vec) {
            Vector2 r = MultiplyPoint(new Vector2(vec.z, vec.y));
            return new Vector3(vec.x, r.y, r.x);
        }

        public Vector3 MultiplyVectorY(Vector3 vec) {
            Vector2 r = MultiplyVector(new Vector2(vec.x, vec.z));
            return new Vector3(r.x, vec.y, r.y);
        }

        public Vector3 MultiplyPointY(Vector3 vec) {
            Vector2 r = MultiplyPoint(new Vector2(vec.x, vec.z));
            return new Vector3(r.x, vec.y, r.y);
        }

        public Vector3 MultiplyVectorZ(Vector3 vec) {
            Vector2 r = MultiplyVector(new Vector2(vec.x, vec.y));
            return new Vector3(r.x, r.y, vec.z);
        }

        public Vector3 MultiplyPointZ(Vector3 vec) {
            Vector2 r = MultiplyPoint(new Vector2(vec.x, vec.y));
            return new Vector3(r.x, r.y, vec.z);
        }

        public Matrix2d Transpose {
            get {
                Matrix2d newM = new Matrix2d();
                newM.m00 = this.m00;
                newM.m01 = this.m10;
                newM.m02 = this.m20;
                newM.m10 = this.m01;
                newM.m11 = this.m11;
                newM.m12 = this.m21;
                newM.m20 = this.m02;
                newM.m21 = this.m12;
                newM.m22 = this.m22;
                return newM;
            }
        }

        public Matrix2d Inverse {
            get {
                float a11 = this.m00;
                float a12 = this.m10;
                float a13 = this.m20;
                float a21 = this.m01;
                float a22 = this.m11;
                float a23 = this.m21;
                float a31 = this.m02;
                float a32 = this.m12;
                float a33 = this.m22;

                float m11 = (a22 * a33) - (a23 * a32);
                float m12 = (a21 * a33) - (a23 * a31);
                float m13 = (a21 * a32) - (a22 * a31);
                float m21 = (a12 * a33) - (a13 * a32);
                float m22 = (a11 * a33) - (a13 * a31);
                float m23 = (a11 * a32) - (a12 * a31);
                float m31 = (a12 * a23) - (a13 * a22);
                float m32 = (a11 * a23) - (a13 * a21);
                float m33 = (a11 * a22) - (a12 * a21);

                Matrix2d newM = new Matrix2d(m11, -m12, m13, -m21, m22, -m23, m31, -m32, m33);
                newM = newM.Transpose;
                float detM = this.m00 * newM.m00 + this.m10 * newM.m01 + this.m20 * newM.m02;

                if (detM == 0) {
                    return this;
                } else {
                    detM = 1f / detM;
                    newM = detM * newM;
                    return newM;
                }
            }
        }
    }

    public struct Edge2d {
        public Vector2 A;
        public Vector2 B;
        Vector2 ab;
        float length;
        float length2;

        public Edge2d(Vector2 a, Vector2 b) {
            A = a;
            B = b;
            ab = B - A;
            length = ab.magnitude;
            length2 = length * length;
        }

        public float GetDistance(Vector2 point, ref float lv) {

            Vector2 ap = point - A;
            float u = Vector2.Dot(ap, ab) / length2;
            Vector3 nearestPoint = Vector3.zero;
            if (u < 0) {
                lv = 0;
                nearestPoint = A;
            } else if (u > 1) {
                lv = 1f;
                nearestPoint = B;
            } else {
                lv = u;
                nearestPoint = A + ab * u;
            }
            return Vector2.Distance(nearestPoint, point);
        }

        public static float GetDistance(Vector2 a, Vector2 b, Vector2 point, ref float lv) {
            Vector2 _ab = b - a;
            float _length = _ab.magnitude;
            float _length2 = _length * _length;
            Vector2 ap = point - a;
            float u = Vector2.Dot(ap, _ab) / _length2;
            Vector3 nearestPoint = Vector3.zero;
            if (u < 0) {
                nearestPoint = a;
                lv = 0;
            } else if (u > 1) {
                nearestPoint = b;
                lv = 1f;
            } else {
                nearestPoint = a + _ab * u;
                lv = u;
            }
            return Vector2.Distance(nearestPoint, point);
        }

        public static float RotationAngle(Vector2 a, Vector2 b) {
            Vector2 ab = b - a;
            return Mathf.Atan2(ab.y, ab.x);
        }

        public static float RotationAngle(Vector2 dir) {
            return Mathf.Atan2(dir.y, dir.x);
        }

        public static Vector2 Rotate90(Vector2 vector) {
            return new Vector2(vector.y, -vector.x);
        }


    }

    public class ArcSegment {
        public Vector2[] points;

        int aidx = 0;
        int bidx = 0;
        int cidx = 0;

        public Vector2 A;
        public Vector2 B;
        public Vector2 C;
        public int Detalization;
        public float Radius;
        public Vector2 Center;
        public float angleA;
        public float angleB;
        public float angleC;


        public ArcSegment(int detalization) {
            detalization = Mathf.Clamp(detalization, 1, 64);
            points = new Vector2[detalization * 2 + 1];

            bidx = detalization;
            cidx = detalization * 2;
            Detalization = detalization;
        }


        public void Set(Vector2 a, Vector2 b, Vector2 c) {
            A = a;
            B = b;
            C = c;
            Vector2 ab = b - a;
            Vector2 bc = c - b;
            Vector2 abOrtho = new Vector2(-ab.y, ab.x);
            Vector2 bcOrtho = new Vector2(-bc.y, bc.x);
            Vector2 abCenter = Vector2.LerpUnclamped(a, b, 0.5f);
            Vector2 bcCenter = Vector2.LerpUnclamped(b, c, 0.5f);

            if (Extension.LineLineItersection(abCenter, abOrtho, bcCenter, bcOrtho, ref Center) == false) {
                for (int i = 1; i < Detalization; i++) {
                    float lv = (float)i / Detalization;
                    points[i] = Vector2.LerpUnclamped(a, b, lv);
                }
                for (int i = 1; i < Detalization; i++) {
                    float lv = (float)i / Detalization;
                    points[Detalization + i] = Vector2.LerpUnclamped(b, c, lv);
                }
                points[aidx] = a;
                points[bidx] = b;
                points[cidx] = c;
                return;
            }

            Vector2 oa = a - Center;
            Vector2 ob = b - Center;
            Vector2 oc = c - Center;
            Radius = oa.magnitude;
            angleA = Mathf.Atan2(oa.y, oa.x);
            angleB = Mathf.Atan2(ob.y, ob.x);
            angleC = Mathf.Atan2(oc.y, oc.x);
            float _angleA = (angleA < 0 ? 6.2831852f + angleA : angleA);
            float _angleB = (angleB < 0 ? 6.2831852f + angleB : angleB);
            float _angleC = (angleC < 0 ? 6.2831852f + angleC : angleC);
            _angleB = Mathf.Repeat(_angleB - _angleA, 6.2831852f);
            _angleC = Mathf.Repeat(_angleC - _angleA, 6.2831852f);
            float angularDistAB = _angleC > _angleB ? _angleB : -(6.2831852f - _angleB);
            float angularDistBC = _angleC - _angleB;
            float abStep = angularDistAB / Detalization;
            float bcStep = angularDistBC / Detalization;
            for (int i = 1; i < Detalization; i++) {
                float _a = angleA + i * abStep;
                points[i] = new Vector2(Mathf.Cos(_a) * Radius, Mathf.Sin(_a) * Radius) + Center;
            }
            for (int i = 1; i < Detalization; i++) {
                float _a = angleB + i * bcStep;
                points[Detalization + i] = new Vector2(Mathf.Cos(_a) * Radius, Mathf.Sin(_a) * Radius) + Center;
            }

            points[aidx] = a;
            points[bidx] = b;
            points[cidx] = c;
        }


        public void DrawDebug() {
            Debug.DrawLine(Center, A, Color.yellow);
            //Debug.DrawLine (Center, B, Color.yellow);
            Debug.DrawLine(Center, C, Color.blue);

            for (int i = 0; i < points.Length - 1; i++) {
                Debug.DrawLine(points[i], points[i + 1], Color.blue);
            }

        }

    }

    #region TRIANGLE2D
    public struct Triangle2d {
        public Vector2 a;
        public Vector2 b;
        public Vector2 c;
        Vector2 v0;
        Vector2 v1;
        float dot00;
        float dot01;
        float dot11;
        float invDenom;

        public Triangle2d(Vector2 _a, Vector2 _b, Vector2 _c) {
            a = _a;
            b = _b;
            c = _c;
            v0 = c - a;
            v1 = b - a;
            dot00 = Vector2.Dot(v0, v0);
            dot01 = Vector2.Dot(v0, v1);
            dot11 = Vector2.Dot(v1, v1);
            invDenom = 1f / (dot00 * dot11 - dot01 * dot01);

        }

        public bool PointTest(Vector2 p, ref Vector3 bary) {
            Vector2 v2 = p - a;
            float dot02 = Vector2.Dot(v0, v2);
            float dot12 = Vector2.Dot(v1, v2);
            bary.z = (dot11 * dot02 - dot01 * dot12) * invDenom; // u
            bary.y = (dot00 * dot12 - dot01 * dot02) * invDenom; // v
            bary.x = 1f - (bary.z + bary.y);
            return (bary.z >= 0) && (bary.y >= 0) && (bary.z + bary.y < 1f);
        }

        public bool PointTest(Vector2 p) {
            Vector3 _bary;
            Vector2 v2 = p - a;
            float dot02 = Vector2.Dot(v0, v2);
            float dot12 = Vector2.Dot(v1, v2);
            _bary.z = (dot11 * dot02 - dot01 * dot12) * invDenom; // u
            _bary.y = (dot00 * dot12 - dot01 * dot02) * invDenom; // v
            _bary.x = 1f - (_bary.z + _bary.y);
            return (_bary.z >= 0) && (_bary.y >= 0) && (_bary.z + _bary.y < 1f);
        }

        public static bool PointTest(Vector2 pa, Vector2 pb, Vector2 pc, Vector2 pp, ref Vector3 _bary) {
            if (pa.x < pp.x && pb.x < pp.x && pc.x < pp.x) {
                return false;
            }

            if (pa.x > pp.x && pb.x > pp.x && pc.x > pp.x) {
                return false;
            }

            if (pa.y > 0 && pb.y > 0 && pc.y > 0) {
                return false;
            }
            if (pa.y < pp.y && pb.y < pp.y && pc.y < pp.y) {
                return false;
            }

            if (((pc.x - pa.x) * (pb.y - pa.y) - (pc.y - pa.y) * (pb.x - pa.x)) < 0) {
                return false;
            }

            Vector2 _v0 = pc - pa;
            Vector2 _v1 = pb - pa;
            Vector2 _v2 = pp - pa;


            float _dot00 = Vector2.Dot(_v0, _v0);
            float _dot01 = Vector2.Dot(_v0, _v1);
            float _dot11 = Vector2.Dot(_v1, _v1);
            float _invDenom = 1f / (_dot00 * _dot11 - _dot01 * _dot01);

            float _dot02 = Vector2.Dot(_v0, _v2);
            float _dot12 = Vector2.Dot(_v1, _v2);
            _bary.z = (_dot11 * _dot02 - _dot01 * _dot12) * _invDenom;
            _bary.y = (_dot00 * _dot12 - _dot01 * _dot02) * _invDenom;
            _bary.x = 1f - (_bary.z + _bary.y);
            return (_bary.z >= 0) && (_bary.y >= 0) && (_bary.z + _bary.y < 1f);
        }

        public static bool PointTestDoublesided(Vector2 pa, Vector2 pb, Vector2 pc, Vector2 pp, ref Vector3 _bary) {
            if (pa.x < pp.x && pb.x < pp.x && pc.x < pp.x) {
                return false;
            }

            if (pa.x > pp.x && pb.x > pp.x && pc.x > pp.x) {
                return false;
            }

            if (pa.y > 0 && pb.y > 0 && pc.y > 0) {
                return false;
            }
            if (pa.y < pp.y && pb.y < pp.y && pc.y < pp.y) {
                return false;
            }


            Vector2 _v0 = pc - pa;
            Vector2 _v1 = pb - pa;
            Vector2 _v2 = pp - pa;

            float _dot00 = Vector2.Dot(_v0, _v0);
            float _dot01 = Vector2.Dot(_v0, _v1);
            float _dot11 = Vector2.Dot(_v1, _v1);
            float _invDenom = 1f / (_dot00 * _dot11 - _dot01 * _dot01);

            float _dot02 = Vector2.Dot(_v0, _v2);
            float _dot12 = Vector2.Dot(_v1, _v2);
            _bary.z = (_dot11 * _dot02 - _dot01 * _dot12) * _invDenom;
            _bary.y = (_dot00 * _dot12 - _dot01 * _dot02) * _invDenom;
            _bary.x = 1f - (_bary.z + _bary.y);
            return (_bary.z >= 0) && (_bary.y >= 0) && (_bary.z + _bary.y < 1f);
        }

        public static Vector3 InscribedCircle(Vector2 a, Vector2 b, Vector2 c) {
            Vector2 aBisectorsDir = Vector2.LerpUnclamped((c - a).normalized, (b - a).normalized, 0.5f);
            Vector2 bBisectorsDir = Vector2.LerpUnclamped((c - b).normalized, (a - b).normalized, 0.5f);
            Vector2 center = new Vector2();
            if (Extension.LineLineItersection(a, aBisectorsDir, b, bBisectorsDir, ref center)) {
                float lv = 0;
                float radius = Edge2d.GetDistance(a, b, center, ref lv);
                return new Vector3(center.x, center.y, radius);
            } else {
                return new Vector3(a.x, a.y, 0);
            }
        }

        public static bool IsClockwise(Vector2 pa, Vector2 pb, Vector2 pc) {
            return ((pc.x - pa.x) * (pb.y - pa.y) - (pc.y - pa.y) * (pb.x - pa.x)) >= 0;
        }

        public static int Clockwise (Vector2 pa, Vector2 pb, Vector2 pc) {
            float num = ((pc.x - pa.x) * (pb.y - pa.y) - (pc.y - pa.y) * (pb.x - pa.x));
            if (Extension.ApproximatelyZero(num)) {
                return 0;
            }
            if (num < 0) {
                return -1;
            } else {
                return 1;
            }
         }
    }


    #endregion

    #region OverrideValues
    [System.Serializable]
    public struct OverrideFloatParam {
        public bool Enabled;
        public float Value;

        public OverrideFloatParam(float f) {
            Enabled = false;
            Value = f;
        }

        public void ClampZero() {
            Value = Value < 0 ? 0 : Value;
        }

        public static implicit operator float(OverrideFloatParam f) {
            return f.Value;
        }


        //public static implicit operator OverrideFloatParam(float f) {
        //    return new OverrideFloatParam(f);
        //}
    }

    public class A_OverrideFloatParam : PropertyAttribute {
        public string Tooltip;

        public A_OverrideFloatParam(string tooltip) {
            Tooltip = tooltip;
        }
    }
 

    #endregion

    #region ExpValues

    [System.Serializable]
    public struct ExpBool {
        bool prevValue;
        [SerializeField]
        private bool Value;

        public ExpBool(bool val) {
            Value = val;
            prevValue = !val;
        }

        public void Set(bool val) {
            Value = val;
            prevValue = val;
        }

        public bool isChanged {
            get {
                bool result = false;
                if (Value != prevValue) {
                    prevValue = Value;
                    result = true;
                }
                return result;
            }

            set {
                if (value) {
                    prevValue = !Value;
                } else {
                    prevValue = Value;
                }
            }
        }

        public static implicit operator bool(ExpBool i) {
            return i.Value;
        }
 

        public static implicit operator ExpBool(bool i) {
            return new ExpBool(i);
        }

        public override string ToString() {
            return Value.ToString();
        }
    }

    [System.Serializable]
    public struct ExpInt {
        int prevValue;
        [SerializeField]
        private int Value;

        public ExpInt(int val) {
            Value = val;
            prevValue = val-1;
        }

        public void Set(int val) {
            Value = val;
            prevValue = val;
        }

        public bool isChanged {
            get {
                bool result = false;
                if (Value != prevValue) {
                    prevValue = Value;
                    result = true;
                }
                return result;
            }

            set {
                if (value) {
                    prevValue = Value - 1;
                } else {
                    prevValue = Value;
                }
            }
        }

        public static implicit operator int(ExpInt i) {
            return i.Value;
        }

        public static implicit operator byte(ExpInt i) {
            return (byte)i.Value;
        }

        public static implicit operator ExpInt(int i) {
            return new ExpInt(i);
        }

        public override string ToString() {
            return Value.ToString();
        }
    }

    [System.Serializable]
    public struct ExpFloat {
        float prevValue;
        [SerializeField]
        private float Value;

        public ExpFloat(float val) {
            Value = val;
            prevValue = val-1;
        }

        public bool isChanged {
            get {
                bool result = false;
                if (Value != prevValue) {
                    prevValue = Value;
                    result = true;
                }
                return result;
            }
        }



        public void Set(float val) {
            Value = val;
            prevValue = val;
        }

        public static implicit operator float(ExpFloat i) {
            return i.Value;
        }

        public static implicit operator ExpFloat(float i) {
            return new ExpFloat(i);
        }
    }

    [System.Serializable]
    public struct ExpColor32 {
        [SerializeField]
        private ExpInt r;

        [SerializeField]
        private ExpInt g;

        [SerializeField]
        private ExpInt b;

        [SerializeField]
        private ExpInt a;


        public ExpColor32(Color32 val) {
            r = val.r;
            g = val.g;
            b = val.b;
            a = val.a;
        }

        public ExpColor32(Color cval) {
            Color32 val = cval;
            r = val.r;
            g = val.g;
            b = val.b;
            a = val.a;
        }

        public bool isChanged {
            get {
                bool result = false;
                if (r.isChanged) {
                    result = true;
                }
                if (g.isChanged) {
                    result = true;
                }
                if (b.isChanged) {
                    result = true;
                }
                if (a.isChanged) {
                    result = true;
                }
                return result;
            }

            set {
                if (value) {
                    r.isChanged = true;
                    g.isChanged = true;
                    b.isChanged = true;
                    a.isChanged = true;
                } else {
                    r.isChanged = false;
                    g.isChanged = false;
                    b.isChanged = false;
                    a.isChanged = false;
                }
            }
        }

        public void Set(Color32 val) {
            r.Set(val.r);
            g.Set(val.g);
            b.Set(val.b);
            a.Set(val.a);
        }

        public static implicit operator Color(ExpColor32 i) {
            return new Color32(i.r, i.g, i.b, i.a);
        }

        public static implicit operator ExpColor32(Color i) {
            return new ExpColor32(i);
        }

    }

    [System.Serializable]
    public struct ExpGradient {
        [A_ExpInt(1, 8, "Color keys count")]
        public ExpInt KeysCount;

        [A_ExpColor32("Color #0")]
        public ExpColor32 c0;

        [A_ExpColor32("Color #1")]
        public ExpColor32 c1;

        [A_ExpColor32("Color #2")]
        public ExpColor32 c2;

        [A_ExpColor32("Color #3")]
        public ExpColor32 c3;

        [A_ExpColor32("Color #4")]
        public ExpColor32 c4;

        [A_ExpColor32("Color #5")]
        public ExpColor32 c5;

        [A_ExpColor32("Color #6")]
        public ExpColor32 c6;

        [A_ExpColor32("Color #7")]
        public ExpColor32 c7;

        public ExpGradient(int keysCount) {
            KeysCount = keysCount;
            c0 = Color.Lerp(Color.blue, Color.green, 0);
            c1 = Color.Lerp(Color.blue, Color.green, 0.333f);
            c2 = Color.Lerp(Color.blue, Color.green, 0.666f);
            c3 = Color.Lerp(Color.blue, Color.green, 1f);
            c4 = Color.Lerp(Color.green, Color.yellow, 0);
            c5 = Color.Lerp(Color.green, Color.yellow, 0.333f);
            c6 = Color.Lerp(Color.green, Color.yellow, 0.666f);
            c7 = Color.Lerp(Color.green, Color.yellow, 1f);
        }

        public ExpColor32 this [int idx]{
            get {
                if (idx >= 8) {
                    Debug.LogWarning("Out of range");
                }
                idx = Mathf.Clamp(idx, 0, 8);
                switch (idx){
                    case 0: return c0;
                    case 1: return c1;
                    case 2: return c2;
                    case 3: return c3;
                    case 4: return c4;
                    case 5: return c5;
                    case 6: return c6;
                    case 7: return c7;
                    default: return c0;
                }
            }

            set {
                if (idx >= 8) {
                    Debug.LogWarning("Out of range");
                }
                idx = Mathf.Clamp(idx, 0, 8);
                switch (idx) {
                    case 0: c0 = value; break;
                    case 1: c1 = value; break;
                    case 2: c2 = value; break;
                    case 3: c3 = value; break;
                    case 4: c4 = value; break;
                    case 5: c5 = value; break;
                    case 6: c6 = value; break;
                    case 7: c7 = value; break;
                    default: break;
                }

            }
        }

        public Color this[float time] {
            get {
                if (KeysCount == 1) {
                    return c0;
                }
                float f = 1f / (KeysCount - 1);
                int cIdx = Mathf.FloorToInt (time / f);
                float lv = (time - (cIdx * f)) / f;
                return Color.Lerp(this[cIdx], this[cIdx+1], lv );
            }
        }

        public bool isChanged {
            get {
                bool result = KeysCount.isChanged;
                result = c0.isChanged || result;
                result = c1.isChanged || result;
                result = c2.isChanged || result;
                result = c3.isChanged || result;
                result = c4.isChanged || result;
                result = c5.isChanged || result;
                result = c6.isChanged || result;
                result = c7.isChanged || result;
                return result;
            }
        }
    }

    [System.Serializable]
    public struct ExpVector2 {
        Vector2 prevValue;
        [SerializeField]
        private Vector2 Value;

        public ExpVector2(Vector2 val) {
            Value = val;
            prevValue = -val;
        }

        public void Set(Vector2 val) {
            Value = val;
            prevValue = val;
        }

        public float x {
            get {
                return Value.x;
            }

            set {
                Value.x = value;
            }
        }

        public float y {
            get {
                return Value.y;
            }

            set {
                Value.y = value;
            }
        }

        public bool isChanged {
            get {
                bool result = false;
                if ( !Extension.ApproximatelyEquals( Value.x , prevValue.x) || !Extension.ApproximatelyEquals(Value.y, prevValue.y)) {
                    prevValue = Value;
                    result = true;
                }
                return result;
            }

            set {
                if (value) {
                    prevValue = -Value;
                } else {
                    prevValue = Value;
                }
            }
        }

        public static implicit operator Vector2(ExpVector2 i) {
            return i.Value;
        }

        public static implicit operator ExpVector2(Vector2 i) {
            return new ExpVector2(i);
        }
    }

    public class A_ExpBool : PropertyAttribute {
        public string Tooltip;
        public bool IsButton;

        public A_ExpBool(string tooltip, bool isButton) {
            Tooltip = tooltip;
            IsButton = isButton;
        }
    }

    public class A_ExpInt : PropertyAttribute {
        public bool IsSlider;
        public string Tooltip;
        public int Min;
        public int Max;

        public A_ExpInt(int min, int max) {
            IsSlider = true;
            Min = min;
            Max = max;
        }

        public A_ExpInt(int min, int max, string tooltip) {
            IsSlider = true;
            Min = min;
            Max = max;
            Tooltip = tooltip;
        }

        public A_ExpInt(string tooltip) {
            IsSlider = false;
            Tooltip = tooltip;
        }
    }

    public class A_ExpFloat : PropertyAttribute {
        public bool IsSlider;
        public string Tooltip;
        public float Min;
        public float Max;

        public A_ExpFloat(float min, float max) {
            IsSlider = true;
            Min = min;
            Max = max;
        }

        public A_ExpFloat(float min, float max, string tooltip) {
            IsSlider = true;
            Min = min;
            Max = max;
            Tooltip = tooltip;
        }

        public A_ExpFloat(string tooltip) {
            IsSlider = false;
            Tooltip = tooltip;
        }
    }
    
    public class A_ExpColor32 : PropertyAttribute {
        public string Tooltip;

        public A_ExpColor32(string tooltip) {
            Tooltip = tooltip;
        }


    }

    public class A_ExpGradient : PropertyAttribute {
        public string Tooltip;

        public A_ExpGradient(string tooltip) {
            Tooltip = tooltip;
        }
    }

    public class A_ExpVector2 : PropertyAttribute {
        public string Tooltip;

        public A_ExpVector2(string tooltip) {
            Tooltip = tooltip;
        }
    }

    #endregion
}
