using System.Collections.Generic;
using _Game._2_LinearLevel.Scripts;
using _Game._3_GamePlay.Scripts;

namespace _Game._1_Analytics.Scripts
{
    public interface IEventSender
    {
        public  void Initialize();
        public void SendGameStartedEvent();

        public void SendLevelStartedEvent(int progress, LinearLevelType levelType, int attemptNum = 1, int score = 0);
        public void SendLevelCompletedEvent(int progress, LinearLevelType levelType, int attemptNum = 1, int score = 0);
        public void SendLevelFailedEvent(int progress, LinearLevelType levelType,FailReason failReason, int attemptNum = 1, int score = 0);
        public void SendLevelRestartedEvent(int progress, LinearLevelType levelType, int attemptNum = 1, int score = 0);
        public void SendReviveUsedEvent(int progress, LinearLevelType levelType,FailReason failReason, int attemptNum = 1, int score = 0);

        public void SendEvent(string name, Dictionary<string, object> parameters = null);
    }
}