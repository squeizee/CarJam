using System;
using DG.Tweening;
using UnityEngine;

namespace _Game._1_Animation.Scripts.Behaviour.Animations
{
    [Serializable]
    [CreateAssetMenu(fileName = "MoveAnimation", menuName = "Craft/Animation/MoveAnimation")]
    public class MoveAnimation : Animation
    {
        public Vector3 Direction;

        public Ease Ease;

        // const
        public MoveAnimation() : base()
        {
            Direction = Vector3.zero;
            Ease = Ease.Linear;
        }

        public override Tween Play(float duration)
        {
            // burasini progressive hesaplamak gerekiyor. 
            return Target.DOMove(Target.position + Direction, duration).SetEase(Ease);
        }
    }
}