using System;
using DG.Tweening;
using UnityEngine;

namespace _Game._1_Animation.Scripts.Behaviour
{
    [Serializable]
    public class Animation : ScriptableObject
    {
        public Transform Target;

        public TimeLineDuration Duration;

        // const
        public Animation()
        {
            Target = null;
            Duration = new TimeLineDuration(0, 1);
        }

        public virtual Tween Play(float duration)
        {
            return null;
        }
    }
}