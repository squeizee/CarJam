using System;

namespace _Game._1_Animation.Scripts.Behaviour
{
    [Serializable]
    public class TimeLineDuration
    {
        public TimelinePoint Start;
        public TimelinePoint End;

        public bool IsStaticCalculated = false;
        public TimelinePoint StartStatic;
        public TimelinePoint EndStatic;

        public TimeLineDuration(float startTime, float endTime)
        {
            Start = new TimelinePoint(startTime);
            End = new TimelinePoint(endTime);
            IsStaticCalculated = false;
            StartStatic = Start;
            EndStatic = End;
        }
    }
}