using System;
using _Game._3_GamePlay.Scripts;

namespace _Game._2_LinearLevel.Scripts
{
    public class LinearLevelEventsArgs : EventArgs
    {
        public int Progress;
        public int LevelId;
        public int Score;
        public int Attempts;
        public LinearLevelType LevelType;
        public LinearLevelEvents LinearLevelEvent;
        public FailReason FailReason;
        
        
        // constructor
        public LinearLevelEventsArgs(int progress, int levelId, int score, int attempts, LinearLevelType levelType, LinearLevelEvents linearLevelEvent)
        {
            Progress = progress;
            LevelId = levelId;
            Score = score;
            Attempts = attempts;
            LevelType = levelType;
            LinearLevelEvent = linearLevelEvent;
        }
        // new constructor for fail reason
        public LinearLevelEventsArgs(int progress, int levelId, int score, int attempts, LinearLevelType levelType, LinearLevelEvents linearLevelEvent, FailReason failReason)
        {
            Progress = progress;
            LevelId = levelId;
            Score = score;
            Attempts = attempts;
            LevelType = levelType;
            LinearLevelEvent = linearLevelEvent;
            FailReason = failReason;
        }
    }

    public enum LinearLevelEvents
    {
        NormalLevelStarted,
        NormalLevelFailed,
        NormalLevelCompleted,
        NormalLevelRestarted,
        NormalLevelRevived,
        BossLevelStarted,
        BossLevelFailed,
        BossLevelCompleted,
        BossLevelRestarted,
        BossLevelRevived,
        ChallengeLevelStarted,
        ChallengeLevelFailed,
        ChallengeLevelCompleted,
        ChallengeLevelRevived,
    }
}