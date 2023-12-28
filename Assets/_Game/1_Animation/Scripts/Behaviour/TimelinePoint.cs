using System;

namespace _Game._1_Animation.Scripts.Behaviour
{
    [Serializable]
    public class TimelinePoint
    {
        public TimelinePointType Type;
        public float Time;
        public Animation Animation;

        public TimelinePoint(float time)
        {
            Time = time;
            Animation = null;
            Type = TimelinePointType.Time;
        }

        public TimelinePoint(float time, TimelinePointType type, Animation animation)
        {
            Time = time;
            Type = type;
            Animation = animation;
        }

        public TimelinePoint GetStatic()
        {
            switch (Type)
            {
                case TimelinePointType.Time:
                    return new TimelinePoint(Time);
                case TimelinePointType.AnimationStart:
                    return new TimelinePoint(Animation.Duration.StartStatic.Time);
                case TimelinePointType.AnimationComplete:
                    return new TimelinePoint(Animation.Duration.EndStatic.Time);
                case TimelinePointType.AfterAnimationStart:
                    return new TimelinePoint(Animation.Duration.StartStatic.Time + Time);
                case TimelinePointType.BeforeAnimationComplete:
                    return new TimelinePoint(Animation.Duration.EndStatic.Time - Time);
                default:
                    return new TimelinePoint(Time);
            }
        }
    }

    public enum TimelinePointType
    {
        Time,
        AnimationStart,
        AnimationComplete,
        AfterAnimationStart,
        BeforeAnimationComplete,
    }
}