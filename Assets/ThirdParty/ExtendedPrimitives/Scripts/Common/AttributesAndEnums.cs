using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ExtendedPrimitives_11.Internal { 

    public enum UpdateModeEnum {
        Update,
        LateUpdate,
        None
    }

    public enum UpdateTextureCoordsModeEnum {
        None,
        LiveUpdate,
        Fixed
    }

    public enum MappingMethodEnum {
        UnfoldA,
        UnfoldB,
        Planar,
    }

    public enum TangentRecalculationModeEnum {
        None,
        BuiltinForUV0,
        ForUV0,
        ForUV2,
        BlendUV0UV2
    }

    public enum ColliderDetalizationEnum {
        Full = 1,
        OneHalf = 2,
        OneThird = 3,
        OneQuarter = 4,
        OneFifth = 5,
        OneSixth = 6,
        OneSeven = 7,
        OneEight = 8,
        OneNinth = 9,
        OneTen = 10
    }

    public static class EnumExtensions {
        public static bool AffectUV0(this TangentRecalculationModeEnum t) {
            return t == TangentRecalculationModeEnum.BlendUV0UV2 || t == TangentRecalculationModeEnum.ForUV0 || t == TangentRecalculationModeEnum.BuiltinForUV0;
        }

        public static bool AffectUV2(this TangentRecalculationModeEnum t) {
            return t == TangentRecalculationModeEnum.BlendUV0UV2 || t == TangentRecalculationModeEnum.ForUV2;
        }

        public static bool IsBlend(this TangentRecalculationModeEnum t) {
            return t == TangentRecalculationModeEnum.BlendUV0UV2;
        }


        public static bool IsBuiltin(this TangentRecalculationModeEnum t) {
            return t == TangentRecalculationModeEnum.BuiltinForUV0;
        }

        public static bool IsUV0(this TangentRecalculationModeEnum t) {
            return t == TangentRecalculationModeEnum.ForUV0;
        }

        public static bool IsUV2(this TangentRecalculationModeEnum t) {
            return t == TangentRecalculationModeEnum.ForUV2;
        }

        public static bool IsNone(this TangentRecalculationModeEnum t) {
            return t == TangentRecalculationModeEnum.None;
        }

        public static bool IsNone(this UpdateTextureCoordsModeEnum t) {
            return t == UpdateTextureCoordsModeEnum.None;
        }

        public static bool NotNone(this UpdateTextureCoordsModeEnum t) {
            return t != UpdateTextureCoordsModeEnum.None;
        }
    }
    
    public class A_Size  : PropertyAttribute {
        public string Tooltip;
        public float MaxValueScale = 1;

        public A_Size (string tooltip) {
            Tooltip = tooltip;
            MaxValueScale = 1;
        }

        public A_Size(string tooltip, float maxValueScale) {
            MaxValueScale = maxValueScale;
            Tooltip = tooltip;
        }

    }

    public class A_Statistic : PropertyAttribute {
        public string Info;

        public A_Statistic( ) {
 
        }
    }

    public class A_TextureChannelParams : PropertyAttribute {

        public A_TextureChannelParams() {

        }

    }

    public class A_Collider : PropertyAttribute {

    }

    public class A_FloatValueArr : PropertyAttribute {

    }
}
