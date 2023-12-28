using System;
using _Game._0_CraftCore.Scripts.Core;
using _Game._2_LinearLevel.Scripts;
using _Game.Systems._CoreSystem;

namespace _Game._1_Analytics.Scripts
{
    public class LevelAnalytics
    {
        Dispatcher<LinearLevelEvents> _dispatcher;
        private LionAnalyticsEventSender _eventSender;
        public LinearLevelSystem LinearLevelSystem;

        public LevelAnalytics(Dispatcher<LinearLevelEvents> coreDispatcher, LionAnalyticsEventSender eventSender)
        {
            LinearLevelSystem = Craft.Get<LinearLevelSystem>();
            _dispatcher = coreDispatcher;
            _eventSender = eventSender;
            _dispatcher.Subscribe(LinearLevelEvents.NormalLevelFailed, OnNormalLevelFailed);
            _dispatcher.Subscribe(LinearLevelEvents.NormalLevelCompleted, OnNormalLevelCompleted);
            _dispatcher.Subscribe(LinearLevelEvents.NormalLevelRestarted, OnNormalLevelRestarted);
            _dispatcher.Subscribe(LinearLevelEvents.NormalLevelStarted, OnNormalLevelStarted);
            _dispatcher.Subscribe(LinearLevelEvents.NormalLevelRevived, OnNormalLevelRevived);

            _dispatcher.Subscribe(LinearLevelEvents.BossLevelFailed, OnBossLevelFailed);
            _dispatcher.Subscribe(LinearLevelEvents.BossLevelCompleted, OnBossLevelCompleted);
            _dispatcher.Subscribe(LinearLevelEvents.BossLevelRestarted, OnBossLevelRestarted);
            _dispatcher.Subscribe(LinearLevelEvents.BossLevelStarted, OnBossLevelStarted);
            _dispatcher.Subscribe(LinearLevelEvents.BossLevelRevived, OnBossLevelRevived);

            _dispatcher.Subscribe(LinearLevelEvents.ChallengeLevelFailed, ChallengeLevelFailed);
            _dispatcher.Subscribe(LinearLevelEvents.ChallengeLevelCompleted, ChallengeLevelCompleted);
            _dispatcher.Subscribe(LinearLevelEvents.ChallengeLevelStarted, ChallengeLevelStarted);
            _dispatcher.Subscribe(LinearLevelEvents.ChallengeLevelRevived, ChallengeLevelRevived);
        }

        public void OnDestroy()
        {
            _dispatcher.Unsubscribe(LinearLevelEvents.NormalLevelFailed, OnNormalLevelFailed);
            _dispatcher.Unsubscribe(LinearLevelEvents.NormalLevelCompleted, OnNormalLevelCompleted);
            _dispatcher.Unsubscribe(LinearLevelEvents.NormalLevelRestarted, OnNormalLevelRestarted);
            _dispatcher.Unsubscribe(LinearLevelEvents.NormalLevelStarted, OnNormalLevelStarted);
            _dispatcher.Unsubscribe(LinearLevelEvents.NormalLevelRevived, OnNormalLevelRevived);

            _dispatcher.Unsubscribe(LinearLevelEvents.BossLevelFailed, OnBossLevelFailed);
            _dispatcher.Unsubscribe(LinearLevelEvents.BossLevelCompleted, OnBossLevelCompleted);
            _dispatcher.Unsubscribe(LinearLevelEvents.BossLevelRestarted, OnBossLevelRestarted);
            _dispatcher.Unsubscribe(LinearLevelEvents.BossLevelStarted, OnBossLevelStarted);
            _dispatcher.Unsubscribe(LinearLevelEvents.BossLevelRevived, OnBossLevelRevived);

            _dispatcher.Unsubscribe(LinearLevelEvents.ChallengeLevelFailed, ChallengeLevelFailed);
            _dispatcher.Unsubscribe(LinearLevelEvents.ChallengeLevelCompleted, ChallengeLevelCompleted);
            _dispatcher.Unsubscribe(LinearLevelEvents.ChallengeLevelStarted, ChallengeLevelStarted);
            _dispatcher.Unsubscribe(LinearLevelEvents.ChallengeLevelRevived, ChallengeLevelRevived);
        }


        public void OnNormalLevelStarted(EventArgs eventArgs)
        {
            int levelProgress = LinearLevelSystem.GetProgress(LinearLevelType.Normal);
            int bossProgress = LinearLevelSystem.GetProgress(LinearLevelType.Boss);
            string levelName = GetNameWithIndex("Normal_", levelProgress);

            var args = (LinearLevelEventsArgs)eventArgs;
#if LION_INSTALLED
            _eventSender.SendLevelStartedEvent(levelProgress + bossProgress, levelName, args.Attempts, args.Score);
#endif
        }

        public void OnNormalLevelFailed(EventArgs eventArgs)
        {
            int levelProgress = LinearLevelSystem.GetProgress(LinearLevelType.Normal);
            int bossProgress = LinearLevelSystem.GetProgress(LinearLevelType.Boss);
            string levelName = GetNameWithIndex("Normal_", levelProgress);

            var args = (LinearLevelEventsArgs)eventArgs;
#if LION_INSTALLED
            _eventSender.SendLevelFailedEvent(levelProgress + bossProgress, levelName, args.FailReason, args.Attempts,
                args.Score);
#endif
        }

        private void OnNormalLevelRevived(EventArgs eventArgs)
        {
            int levelProgress = LinearLevelSystem.GetProgress(LinearLevelType.Normal);
            int bossProgress = LinearLevelSystem.GetProgress(LinearLevelType.Boss);
            string levelName = GetNameWithIndex("Normal_", levelProgress);

            var args = (LinearLevelEventsArgs)eventArgs;
#if LION_INSTALLED
            _eventSender.SendReviveUsedEvent(levelProgress + bossProgress, levelName, args.FailReason, args.Attempts,
                args.Score);
#endif
        }

        public void OnNormalLevelCompleted(EventArgs eventArgs)
        {
            int levelProgress = LinearLevelSystem.GetProgress(LinearLevelType.Normal);
            int bossProgress = LinearLevelSystem.GetProgress(LinearLevelType.Boss);
            string levelName = GetNameWithIndex("Normal_", levelProgress);

            var args = (LinearLevelEventsArgs)eventArgs;
#if LION_INSTALLED
            _eventSender.SendLevelCompletedEvent(levelProgress + bossProgress, levelName, args.Attempts, args.Score);
#endif
        }

        public void OnNormalLevelRestarted(EventArgs eventArgs)
        {
            int levelProgress = LinearLevelSystem.GetProgress(LinearLevelType.Normal);
            int bossProgress = LinearLevelSystem.GetProgress(LinearLevelType.Boss);
            string levelName = GetNameWithIndex("Normal_", levelProgress);

            var args = (LinearLevelEventsArgs)eventArgs;
#if LION_INSTALLED
            _eventSender.SendLevelRestartedEvent(levelProgress + bossProgress, levelName, args.Attempts, args.Score);
#endif
        }

        public void OnBossLevelStarted(EventArgs eventArgs)
        {
            int levelProgress = LinearLevelSystem.GetProgress(LinearLevelType.Normal);
            int bossProgress = LinearLevelSystem.GetProgress(LinearLevelType.Boss);
            int levelIndex = levelProgress + bossProgress - 1;
            string levelName = GetNameWithIndex("Boss", bossProgress);
            var args = (LinearLevelEventsArgs)eventArgs;
            
#if LION_INSTALLED
            _eventSender.SendLevelStartedEvent(levelIndex, levelName, args.Attempts, args.Score);
#endif
        }

        public void OnBossLevelFailed(EventArgs eventArgs)
        {
            int levelProgress = LinearLevelSystem.GetProgress(LinearLevelType.Normal);
            int bossProgress = LinearLevelSystem.GetProgress(LinearLevelType.Boss);
            int levelIndex = levelProgress + bossProgress - 1;
            string levelName = GetNameWithIndex("Boss", bossProgress);
            var args = (LinearLevelEventsArgs)eventArgs;
#if LION_INSTALLED
            _eventSender.SendLevelFailedEvent(levelIndex, levelName, args.FailReason, args.Attempts,
                args.Score);
#endif
        }

        private void OnBossLevelRevived(EventArgs eventArgs)
        {
            int levelProgress = LinearLevelSystem.GetProgress(LinearLevelType.Normal);
            int bossProgress = LinearLevelSystem.GetProgress(LinearLevelType.Boss);
            int levelIndex = levelProgress + bossProgress - 1;
            string levelName = GetNameWithIndex("Boss", bossProgress);
            var args = (LinearLevelEventsArgs)eventArgs;
#if LION_INSTALLED
            _eventSender.SendReviveUsedEvent(levelIndex, levelName, args.FailReason, args.Attempts,
                args.Score);
#endif
        }

        public void OnBossLevelCompleted(EventArgs eventArgs)
        {
            int levelProgress = LinearLevelSystem.GetProgress(LinearLevelType.Normal);
            int bossProgress = LinearLevelSystem.GetProgress(LinearLevelType.Boss);
            string levelName = GetNameWithIndex("Boss", bossProgress);
            int levelIndex = levelProgress + bossProgress - 1;

            var args = (LinearLevelEventsArgs)eventArgs;
#if LION_INSTALLED
            _eventSender.SendLevelCompletedEvent(levelIndex, levelName, args.Attempts, args.Score);
#endif
        }

        public void OnBossLevelRestarted(EventArgs eventArgs)
        {
            int levelProgress = LinearLevelSystem.GetProgress(LinearLevelType.Normal);
            int bossProgress = LinearLevelSystem.GetProgress(LinearLevelType.Boss);
            string levelName = GetNameWithIndex("Boss", bossProgress);
            int levelIndex = levelProgress + bossProgress - 1;

            var args = (LinearLevelEventsArgs)eventArgs;
#if LION_INSTALLED
            _eventSender.SendLevelRestartedEvent(levelIndex, levelName, args.Attempts, args.Score);
#endif
        }


        private void ChallengeLevelStarted(EventArgs obj)
        {
            var args = (LinearLevelEventsArgs)obj;
            // if level id smaller than 10, add 00 before it to make it 3 digits

#if LION_INSTALLED
            _eventSender.MissionStarted(args.LevelType.ToString(),
                GetNameWithIndex(args.LevelType.ToString(), args.LevelId));
#endif
        }

        private void ChallengeLevelCompleted(EventArgs obj)
        {
            var args = (LinearLevelEventsArgs)obj;
#if LION_INSTALLED
            _eventSender.MissionCompleted(args.LevelType.ToString(),
                GetNameWithIndex(args.LevelType.ToString(), args.LevelId));
#endif
        }

        private void ChallengeLevelFailed(EventArgs obj)
        {
            var args = (LinearLevelEventsArgs)obj;
#if LION_INSTALLED
            _eventSender.MissionFailed(args.LevelType.ToString(),
                GetNameWithIndex(args.LevelType.ToString(), args.LevelId));
#endif
        }

        private void ChallengeLevelRevived(EventArgs obj)
        {
            var args = (LinearLevelEventsArgs)obj;

            int levelProgress = LinearLevelSystem.GetProgress(LinearLevelType.Normal);
            int bossProgress = LinearLevelSystem.GetProgress(LinearLevelType.Boss);
            int levelIndex = levelProgress + bossProgress - 1;
#if LION_INSTALLED
            _eventSender.SendReviveUsedEvent(levelIndex, GetNameWithIndex(args.LevelType.ToString(), args.LevelId),
                args.FailReason, 0, 0);
#endif
        }

        public string GetNameWithIndex(string name, int index)
        {
            if (index < 10)
            {
                return name + "_00" + index.ToString();
            }
            // if level id smaller than 100, add 0 before it to make it 3 digits
            else if (index < 100)
            {
                return name + "_0" + index.ToString();
            }
            else
            {
                return name + "_" + index.ToString();
            }
        }
    }
}