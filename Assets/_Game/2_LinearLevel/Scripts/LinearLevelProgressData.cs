using System.Collections.Generic;

namespace _Game._2_LinearLevel.Scripts
{
    public class LinearLevelProgressData
    {
        public Dictionary<LinearLevelType, int> LevelProgress = new Dictionary<LinearLevelType, int>();
        public Dictionary<LinearLevelType, int> LevelAttempts = new Dictionary<LinearLevelType, int>();

        public int GetProgress(LinearLevelType type = LinearLevelType.Normal)
        {
            if (LevelProgress.ContainsKey(type) == false)
            {
                ResetProgress(type);
            }

            return LevelProgress[type];
        }


        public void IncreaseProgress(LinearLevelType levelType = LinearLevelType.Normal)
        {
            if (LevelProgress.ContainsKey(levelType) == false)
            {
                ResetProgress(levelType);
            }

            LevelProgress[levelType] += 1;
        }

        public void ResetProgress(LinearLevelType levelType)
        {
            if (LevelProgress.ContainsKey(levelType) == false)
            {
                LevelProgress.Add(levelType, 1);
            }

            LevelProgress[levelType] = 1;
        }

        public void SetProgress(LinearLevelType levelType, int value)
        {
            if (LevelProgress.ContainsKey(levelType) == false)
            {
                LevelProgress.Add(levelType, 1);
            }

            LevelProgress[levelType] = value;
        }

        public int GetLevelAttemptProgress(LinearLevelType type)
        {
            if (LevelAttempts.ContainsKey(type) == false)
            {
                ResetLevelAttempt(type);
            }

            return LevelAttempts[type];
        }

        public void IncreaseLevelAttempt(LinearLevelType levelType)
        {
            if (LevelAttempts.ContainsKey(levelType) == false)
            {
                ResetLevelAttempt(levelType);
            }

            LevelAttempts[levelType] += 1;
        }

        public void ResetLevelAttempt(LinearLevelType levelType)
        {
            if (LevelAttempts.ContainsKey(levelType) == false)
            {
                LevelAttempts.Add(levelType, 0);
            }

            LevelAttempts[levelType] = 0;
        }
    }
}