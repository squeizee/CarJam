using System.Collections.Generic;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;

namespace _Game._1_Animation.Scripts.Behaviour
{
    public class AnimationPlayer : MonoBehaviour
    {
        public List<Animation> Animations;
        private Sequence _sequence;

        [Button]
        public void Play()
        {
            _sequence?.Kill();
            _sequence = DOTween.Sequence();

            int index = 0;
            while (IsAllCalculateStatic(Animations) == false)
            {
                CalculateStaticDuration(Animations[index]);
                index++;
                index %= Animations.Count;
            }

            foreach (Animation animation1 in Animations)
            {
                float duration = animation1.Duration.EndStatic.Time - animation1.Duration.StartStatic.Time;
                _sequence.Insert(animation1.Duration.StartStatic.Time, animation1.Play(duration));
            }

            _sequence.Play();

            // while all of the are static calculated check their animation if is there any dynamic duration
            // there can be 4 type of duration, start is given , end is given, both is given, none is given, other than both is given 

            // Play animations
        }

        public void CalculateStaticDuration(Animation animation)
        {
            if (animation.Duration.IsStaticCalculated)
            {
                return;
            }

            if (animation.Duration.Start.Type == TimelinePointType.Time &&
                animation.Duration.End.Type == TimelinePointType.Time)
            {
                animation.Duration.StartStatic = animation.Duration.Start;
                animation.Duration.EndStatic = animation.Duration.End;
                animation.Duration.IsStaticCalculated = true;
                return;
            }
            else if (animation.Duration.Start.Type == TimelinePointType.Time)
            {
                animation.Duration.StartStatic = animation.Duration.Start;
                CalculateStaticDuration(animation.Duration.End.Animation);
                animation.Duration.EndStatic = animation.Duration.End.GetStatic();
                animation.Duration.IsStaticCalculated = true;
                return;
            }
            else if (animation.Duration.End.Type == TimelinePointType.Time)
            {
                animation.Duration.EndStatic = animation.Duration.End;
                CalculateStaticDuration(animation.Duration.Start.Animation);
                animation.Duration.StartStatic = animation.Duration.Start.GetStatic();
                animation.Duration.IsStaticCalculated = true;
                return;
            }
            else
            {
                CalculateStaticDuration(animation.Duration.Start.Animation);
                CalculateStaticDuration(animation.Duration.End.Animation);
                animation.Duration.StartStatic = animation.Duration.Start.GetStatic();
                animation.Duration.EndStatic = animation.Duration.End.GetStatic();
                animation.Duration.IsStaticCalculated = true;
                return;
            }
        }


        public bool IsAllCalculateStatic(List<Animation> animations)
        {
            foreach (var animation in animations)
            {
                if (!animation.Duration.IsStaticCalculated)
                {
                    return false;
                }
            }

            return true;
        }

        [Button]
        public void Stop()
        {
            _sequence?.Kill();
        }
    }
}