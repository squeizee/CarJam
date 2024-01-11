
using System.Collections.Generic;
using _Game._3_GamePlay.Scripts;
using DG.Tweening;
#if LK_HAS_LION_ANALYTICS
using Events.InGame.EventArgs;
using Events.Mission.EventArgs;
using LionStudios.Suite.Analytics;
using LionStudios.Suite.Core;
#endif
using UnityEngine;

namespace _Game._1_Analytics.Scripts
{
    public class LionAnalyticsEventSender
    {
#if LK_HAS_LION_ANALYTICS
        private bool _isInitialized = false;
        private float _tryAgainDelay = 1f;

        public void Initialize()
        {
            Debug.Log("Lion Event Sender Initialized");

            if (LionCore.IsInitialized)
            {
                OnLionSdkInitialized();
            }
            else
            {
                LionCore.OnInitialized += OnLionSdkInitialized;
            }
        }

        private void OnLionSdkInitialized()
        {
            Debug.Log("LionSdk Initialized");

            var level = EventPriorityLevel.P3;
            LionAnalytics.SetWhitelistPriorityLevel(level);
            var additionalCountries = new List<string>() { "tr" };
            LionAnalytics.AddWhitelistCountries(additionalCountries);
            _isInitialized = true;
        }

        public void SendEvent(string name, Dictionary<string, object> parameters = null)
        {
        }

        public void SendLevelStartedEvent(int progress, string levelType, int attemptNum = 1, int score = 0)
        {
            if (_isInitialized)
            {
                LionAnalytics.LevelStart(progress, attemptNum, score, missionName: levelType.ToString());
            }
            else
            {
                DOVirtual.DelayedCall(_tryAgainDelay,
                    () => SendLevelStartedEvent(progress, levelType, attemptNum, score));
            }
        }

        public void SendLevelCompletedEvent(int progress, string levelType, int attemptNum = 1, int score = 0)
        {
            if (_isInitialized)
            {
                LionAnalytics.LevelComplete(progress, attemptNum, score, missionName: levelType.ToString());
            }
            else
            {
                DOVirtual.DelayedCall(_tryAgainDelay,
                    () => SendLevelCompletedEvent(progress, levelType, attemptNum, score));
            }
        }

        public void SendLevelFailedEvent(int progress, string levelType, FailReason failReason,
            int attemptNum = 1, int score = 0)
        {
            if (_isInitialized)
            {
                LionAnalytics.LevelFail(progress, attemptNum, score, missionName: levelType.ToString());
            }
            else
            {
                DOVirtual.DelayedCall(_tryAgainDelay,
                    () => SendLevelFailedEvent(progress, levelType, failReason, attemptNum, score));
            }
        }

        public void SendLevelRestartedEvent(int progress, string levelType, int attemptNum = 1, int score = 0)
        {
            if (_isInitialized)
            {
                LionAnalytics.LevelRestart(progress, attemptNum, score, missionName: levelType.ToString());
            }
            else
            {
                DOVirtual.DelayedCall(_tryAgainDelay,
                    () => SendLevelRestartedEvent(progress, levelType, attemptNum, score));
            }
        }

        public void SendReviveUsedEvent(int progress, string levelName, FailReason failReason,
            int attemptNum = 1, int score = 0)
        {
            if (_isInitialized)
            {
                var additionalData = new Dictionary<string, object>();
                additionalData.Add("level", levelName);
                additionalData.Add("Progress", progress);
                additionalData.Add("attemptNum", attemptNum);
                additionalData.Add("score", score);
                additionalData.Add("failReason", failReason.ToString());

                LionAnalytics.PowerUpUsed(new PowerUpUsedEventArgs() { PowerUpName = "Revive", }, additionalData);
            }
            else
            {
                DOVirtual.DelayedCall(_tryAgainDelay,
                    () => SendReviveUsedEvent(progress, levelName, failReason, attemptNum, score));
            }
        }

        public void MissionStarted(string missionType, string missionID)
        {
            if (_isInitialized)
            {
                MissionEventArgs missionEventArgs = new MissionEventArgs()
                {
                    MissionName = missionType,
                    MissionType = missionType,
                    MissionID = missionID
                };

                LionAnalytics.MissionStarted(missionEventArgs);
            }
            else
            {
                DOVirtual.DelayedCall(_tryAgainDelay, () =>
                    MissionStarted(missionType, missionID));
            }
        }

        public void MissionCompleted(string missionType, string missionID)
        {
            if (_isInitialized)
            {
                MissionCompletedEventArgs missionEventArgs = new MissionCompletedEventArgs()
                {
                    MissionName = missionType,
                    MissionType = missionType,
                    MissionID = missionID
                };

                LionAnalytics.MissionCompleted(missionEventArgs, new Dictionary<string, object>());
            }
            else
            {
                {
                    DOVirtual.DelayedCall(_tryAgainDelay, () =>
                        MissionCompleted(missionType, missionID));
                }
            }
        }

        public void MissionFailed(string missionType, string missionID)
        {
            if (_isInitialized)
            {
                MissionEventArgs missionEventArgs = new MissionEventArgs()
                {
                    MissionName = missionType,
                    MissionType = missionType,
                    MissionID = missionID
                };
                MissionFailedEventArgs missionFailedEventArgs = new MissionFailedEventArgs(missionEventArgs)
                {
                    MissionName = missionType,
                    MissionType = missionType,
                    MissionID = missionID
                };

                LionAnalytics.MissionFailed(missionFailedEventArgs, new Dictionary<string, object>());
            }
            else
            {
                {
                    DOVirtual.DelayedCall(_tryAgainDelay, () =>
                        MissionFailed(missionType, missionID));
                }
            }
        }

        public void OnCoinSpend(int amount)
        {
            if (_isInitialized)
            {
                string purchaseName = "Coin";
                Product spendProduct = new Product();
                spendProduct.virtualCurrencies.Add(new VirtualCurrency("Coin", "Coin", amount));

                Product earnProduct = new Product();

                LionAnalytics.EconomyEvent(purchaseName, spendProduct, earnProduct);
            }
            else
            {
                DOVirtual.DelayedCall(_tryAgainDelay, () =>
                    OnCoinSpend(amount));
            }
        }

        public void OnCoinEarn(int amount)
        {
            if (_isInitialized)
            {
                string purchaseName = "Coin";
                Product spendProduct = new Product();

                Product earnProduct = new Product();
                earnProduct.virtualCurrencies.Add(new VirtualCurrency("Coin", "Coin", amount));

                LionAnalytics.EconomyEvent(purchaseName, spendProduct, earnProduct);
            }
            else
            {
                DOVirtual.DelayedCall(_tryAgainDelay, () =>
                    OnCoinEarn(amount));
            }
        }

        public void SendGameStartedEvent()
        {
            if (_isInitialized)
            {
                LionAnalytics.GameStart();
            }
            else
            {
                DOVirtual.DelayedCall(_tryAgainDelay, SendGameStartedEvent);
            }
        }

        public void OnRewardedAdsShown(string placement, int progress)
        {
            LionAnalytics.RewardVideoShow(placement, "unknown", progress);
        }
#endif
    }
}