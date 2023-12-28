using System;
using Library.Utility.Scripts.Singleton;
using Sirenix.OdinInspector;
using UnityEngine;

namespace _Game._1_Animation.Scripts
{
    [CreateAssetMenu(fileName = "TweenPresetsS0", menuName = "Craft/Other/TweenPresetsS0")]
    public class TweenPresetsS0 : ScriptableSingleton<TweenPresetsS0>
    {
        [BoxGroup("GravityUI")] public float uiFallGravity = 6000;
        [BoxGroup("GravityUI")] public float uiFallInitialSpeed = 1000;
        [BoxGroup("GravityUI")] public float uiRiseGravity = -6000;
        [BoxGroup("GravityUI")] public float uiRiseInitialSpeed = -1500;
        [BoxGroup("Gravity")] public float fallGravity = 6000;
        [BoxGroup("Gravity")] public float fallInitialSpeed = 1000;
        [BoxGroup("Gravity")] public float riseGravity = -6000;
        [BoxGroup("Gravity")] public float riseInitialSpeed = -1500;
        [BoxGroup("Pop Up Animation")] public PopUpEnterAnimationConfig popUpEnterAnimationConfig;
        [BoxGroup("Pop Up Animation")] public PopUpEnterAnimationConfig slowPopUpEnterAnimationConfig;
        [BoxGroup("Squeeze")] public float squeezeDuration = 1;
        [BoxGroup("Squeeze")] public AnimationCurve squeezeAnimationCurve;
        public MenuIconCollectTweenAnimationsConfigs MenuIconCollectTweenAnimationsConfigs;
    }

    [Serializable]
    public class PopUpEnterAnimationConfig
    {
        public float initialBackGroundAlpha;

        public float backgroundImageFadeStartTime;
        public float finalBackgroundAlpha;
        public float backGroundFadeInDuration;

        public float initialContentScale;
        public float contentAnimStartTime;
        public float contentPopInDuration;
        public AnimationCurve contentPopInCurve;

        public float initialContentAlpha;
        public float contentFadeInStartTime;
        public float contentFadeInDuration;
    }

    [Serializable]
    public class MenuIconCollectTweenAnimationsConfigs
    {
        public AnimationCurve JumpCurve;
        public float jumpDuration;
    }
}