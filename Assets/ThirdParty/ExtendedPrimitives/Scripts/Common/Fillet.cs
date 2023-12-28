using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11.Internal {
    public struct OutlinedFillet {

        Vector2 A;
        Vector2 B;
        //Vector2 C;

        public float Rot;
        public float Angle;
        public float Sign;
        public float ClampedRadius;
        public Vector2 Center;
        public float InnerOutline;
        public float OuterOutline;
        Vector2 abOrtho;
        Vector2 bcOrtho;
        Vector2 ba;
        Vector2 cb;
        float baMagnitude;
        float cbMagnitude;
        Vector2 MiddleDir;

        public void Set(Vector2 a, Vector2 b, Vector2 c, float radius) {
            A = a;
            B = b;
            
            Sign = -Triangle2d.Clockwise(a, b, c);
            ClampedRadius = radius;
            ba = b - a;
            cb = c - b;

            baMagnitude = ba.magnitude;
            cbMagnitude = cb.magnitude;

            if (Extension.ApproximatelyZero(baMagnitude) || Extension.ApproximatelyZero(cbMagnitude)) {
                ClampedRadius = 0;
                Center = b;
                Rot = 0;
                Angle = 0;
                return;
            }

            ba = ba / baMagnitude;
            cb = cb / cbMagnitude;
            abOrtho = Edge2d.Rotate90(ba);
            bcOrtho = Edge2d.Rotate90(cb);
            float baRot = Edge2d.RotationAngle(-ba);
            float bcRot = Edge2d.RotationAngle(cb);


            if (Sign == 0) {
 
                Rot = Edge2d.RotationAngle(-abOrtho);
                Angle = 0;
                MiddleDir = abOrtho;
                Center = b + MiddleDir * radius;
                ClampedRadius = radius;
                return;
            }

            float deltaAngle = Extension.DeltaAngleRad(baRot, bcRot);
            float  delataAngleSign = Mathf.Sign(deltaAngle);
 
            Angle = deltaAngle - Mathf.PI * delataAngleSign;
            Rot = baRot - 1.570796f * delataAngleSign;

            float midDirRotation = baRot + deltaAngle / 2;

            MiddleDir = new Vector2(Mathf.Cos(midDirRotation), Mathf.Sin(midDirRotation));

            Vector2 aMidIntersect = new Vector2();
            Vector2 cMidIntersect = new Vector2();

            if (Extension.LineLineItersection(a, abOrtho, b, MiddleDir, ref aMidIntersect)) {
                float aMidIntersectDist = Vector2.Distance(aMidIntersect, a);
                ClampedRadius = Mathf.Min(ClampedRadius, aMidIntersectDist);
            }

            if (Extension.LineLineItersection(c, bcOrtho, b, MiddleDir, ref cMidIntersect)) {
                float cMidIntersectDist = Vector2.Distance(cMidIntersect, c);
                ClampedRadius = Mathf.Min(ClampedRadius, cMidIntersectDist);
            }

            float tan = Mathf.Tan((deltaAngle - Mathf.PI) / 2);
            float opposite = tan * ClampedRadius;
            float midDirLength = Mathf.Sqrt(ClampedRadius * ClampedRadius + opposite * opposite);

            Center = b + MiddleDir * midDirLength;
        }

        public Vector2 GetPoint(float lv) {
            float a = Rot + Angle * lv;
            float x = Center.x + Mathf.Cos(a) * ClampedRadius;
            float y = Center.y + Mathf.Sin(a) * ClampedRadius;
            return new Vector2(x, y);
        }

        public Vector2 GetPoint(float lv, float radius) {
            float a = Rot + Angle * lv;
            float x = Center.x + Mathf.Cos(a) * radius;
            float y = Center.y + Mathf.Sin(a) * radius;
            return new Vector2(x, y);
        }

        public Vector2 GetInnerOutlinePoint(float lv ) {
            if (Sign < 0) {
                float r = ClampedRadius + InnerOutline;
                float a = Rot + Angle * lv;
                float x = Center.x + Mathf.Cos(a) * r;
                float y = Center.y + Mathf.Sin(a) * r;
                return new Vector2(x, y);
            } else {
                if (InnerOutline < ClampedRadius) {
                    float r = (ClampedRadius - InnerOutline);
                    float a = Rot + Angle * lv;
                    float x = Center.x + Mathf.Cos(a) * r;
                    float y = Center.y + Mathf.Sin(a) * r;
                    return new Vector2(x, y);
                }
                Vector2 result = Vector2.zero;
                Extension.LineLineItersection(B, MiddleDir, A - abOrtho * InnerOutline, -ba, ref result);
                return result;
            }
        }

        public Vector2 GetOuterOutlinePoint(float lv) {
            if (Sign <= 0) {
                if (OuterOutline < ClampedRadius) {
                    float r = ClampedRadius - OuterOutline;
                    float a = Rot + Angle * lv;
                    float x = Center.x + Mathf.Cos(a) * r;
                    float y = Center.y + Mathf.Sin(a) * r;
                    return new Vector2(x, y);
                }
                Vector2 result = Vector2.zero;
                Extension.LineLineItersection(B, MiddleDir, A + abOrtho * OuterOutline, -ba, ref result);
                return result;
            } else {
                    float r =  ClampedRadius + OuterOutline ;
                    float a = Rot + Angle * lv;
                    float x = Center.x + Mathf.Cos(a) * r;
                    float y = Center.y + Mathf.Sin(a) * r;
                    return new Vector2(x, y);
            }
        }

        public float GetOuterOutlineLength() {
            if (Sign < 0) {
                if (OuterOutline < ClampedRadius) {
                    return (ClampedRadius - OuterOutline) * Mathf.Abs(Angle);
                }
                return 0;
            } else {
                return (ClampedRadius + OuterOutline) * Mathf.Abs(Angle);
            }
        }

        public float GetInnerOutlineLength() {
            if (Sign < 0) {
                return (ClampedRadius + InnerOutline) * Mathf.Abs(Angle);
            } else {
                if (InnerOutline < ClampedRadius) {
                    return (ClampedRadius - InnerOutline) * Mathf.Abs(Angle);
                }
                return 0;
            }
        }

        public float GetFilletLength() {
            return ClampedRadius * Mathf.Abs(Angle);
        }

        public Vector2 FilletBeginPoint {
            get {
                return GetPoint(0);
            }
        }

        public Vector2 FilletEndPoint {
            get {
                return GetPoint(1f);
            }
        }

    }
}


 