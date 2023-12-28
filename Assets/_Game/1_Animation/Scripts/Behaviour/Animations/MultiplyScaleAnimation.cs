using System;
using DG.Tweening;
using UnityEngine;

namespace _Game._1_Animation.Scripts.Behaviour.Animations
{
    [Serializable]
    [CreateAssetMenu(fileName = "MultiplyScaleAnimation", menuName = "Craft/Animation/MultiplyScaleAnimation")]

    public class MultiplyScaleAnimation : Animation
    {
        public Ease Ease;

        public float Scale;

        // const
        public MultiplyScaleAnimation() : base()
        {
            Ease = Ease.Linear;
            Scale = 1;
        }

        public override Tween Play(float duration)
        {
            return Target.DOScale(Target.localScale * Scale, duration).SetEase(Ease);
        }
    }
}