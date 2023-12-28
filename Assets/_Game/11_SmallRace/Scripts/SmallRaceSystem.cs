//#define LION_RACE_INSTALLED
using System;
using System.Collections.Generic;
using _Game._0_CraftCore.Scripts.Core;
using _Game._2_LinearLevel.Scripts;
using _Game.Systems._CoreSystem.Scripts;
using DG.Tweening;
using Library.ScreenManagement.Scripts;
#if LION_RACE_INSTALLED
using LionStudios.Suite.Leaderboards.Fake;
#endif
using Modules.Inventory;
using Modules.Inventory.UI;
using UnityEngine;

namespace _Game._11_SmallRace.Scripts
{
    public class SmallRaceSystem : BaseCraftSystemMono, ICraftSystem
    {
#if LION_RACE_INSTALLED
        // get screens
        RaceManager raceManager;
#endif
        private bool _isThisSessionShown = false;
        private const int FirstOfferLevel = 6;
        private const int OfferPeriod = 7;
        private const int OfferStartLevel = 11;
        public bool IsRaceEnabled = true;

        public void OnInit()
        {
#if LION_RACE_INSTALLED
            _isThisSessionShown = false;
            var raceConfig = SmallRaceSystemSo.Instance.RaceConfig;
            raceManager = GameObject.Instantiate(SmallRaceSystemSo.Instance.RaceManager);
            DOVirtual.DelayedCall(1f, (() =>
            {
                raceConfig.RaceDescription = "Race other players to complete " +
                                             raceConfig.Leaderboard.GetLeaderboardData().totalScore +
                                             " levels and win amazing rewards";
                RaceManager.Instance.OverrideConfig(raceConfig);
                RaceManager.Instance.OnJoinRequestedWithPrice += OnJoinRequestedWithInGameCurrency;
                RaceManager.Instance.OnContinueRequestedWithPrice += OnContinueRequestedWithInGameCurrency;
                RaceManager.Instance.OnClaimRewardClicked += OnRewardClaim;
                RaceManager.Instance.Initialize();
            }));
#endif
        }
#if LION_RACE_INSTALLED
        private void OnRewardClaim(List<Reward> allRewards)
        {
            if (allRewards.Count > 0)
            {
                for (int i = 0; i < allRewards.Count; i++)
                {
                    int reward = allRewards[i].amount;
                    Craft.Get<CraftInventorySystem>().QueItemData(new ItemData(ItemId.Currency1, allRewards[i].amount));
                    new CollectCoinAnimationCommand().Execute(reward).Play();
                }
            }
            else
            {
                Debug.Log("Got No Rewards");
            }
        }

        private bool OnJoinRequestedWithInGameCurrency(Requirement joinRequirement)
        {
            return Craft.Get<CraftInventorySystem>().GetInventoryItem(ItemId.Currency1)
                .TrySpend(joinRequirement.amount);
        }

        private bool OnContinueRequestedWithInGameCurrency(Requirement continueRequirement)
        {
            return Craft.Get<CraftInventorySystem>().GetInventoryItem(ItemId.Currency1)
                .TrySpend(continueRequirement.amount);
        }
#endif
        public void IncreasePlayerScore()
        {
#if LION_RACE_INSTALLED
            if (raceManager.isRaceModuleInitialized && raceManager.RaceFinished == false &&
                raceManager.JoinedRace)
            {
                raceManager.IncreasePlayerScore(1);
            }
#endif
        }

        public List<BaseScreen> GetScreens()
        {
#if LION_RACE_INSTALLED
            return SmallRaceSystemSo.Instance.Screens;
#else
            return new List<BaseScreen>();
#endif
        }

        public bool ShouldShowInfo()
        {
            if (IsRaceEnabled == false)
            {
                return false;
            }
#if LION_RACE_INSTALLED
            if (raceManager.isRaceModuleInitialized)
            {
                int levelProgress = Craft.Get<LinearLevelSystem>().GetProgress(LinearLevelType.Normal);
                if (levelProgress == FirstOfferLevel)
                {
                    return true;
                }
                else if (raceManager.JoinedRace && raceManager.RaceFinished == false)
                {
                    return false;
                }
                else if (raceManager.JoinedRace == false && raceManager.RaceFinished == false &&
                         _isThisSessionShown == false)
                {
                    bool raceLevel = levelProgress >= OfferStartLevel &&
                                     (levelProgress - OfferStartLevel) % OfferPeriod == 0;
                    bool shouldShow = (raceLevel && raceManager.RaceFinished) ||
                                      (_isThisSessionShown == false && raceLevel);
                    if (shouldShow)
                    {
                        return true;
                    }
                }
                else if (raceManager.RaceFinished)
                {
                    return true;
                }
            }
#endif

            return false;
        }

        public bool IsRaceUnlocked()
        {
            int levelProgress = Craft.Get<LinearLevelSystem>().GetProgress(LinearLevelType.Normal);
            return levelProgress >= 6 && IsRaceEnabled;
        }

        public bool IsRaceLevel(int levelProgress)
        {
#if LION_RACE_INSTALLED
            if (IsRaceEnabled == false)
            {
                return false;
            }

            if (levelProgress == FirstOfferLevel)
            {
                return true;
            }
            else if (raceManager.JoinedRace && raceManager.RaceFinished == false)
            {
                return false;
            }
            else if (raceManager.JoinedRace == false && raceManager.RaceFinished == false &&
                     _isThisSessionShown == false)
            {
                bool raceLevel = levelProgress >= OfferStartLevel &&
                                 (levelProgress - OfferStartLevel) % OfferPeriod == 0;
                bool shouldShow = (raceLevel && raceManager.RaceFinished) ||
                                  (_isThisSessionShown == false && raceLevel);
                if (shouldShow)
                {
                    return true;
                }
            }

            return false;
#else
            return false;
#endif
        }

        private Action onRaceloseAction;

        public void ShowInfo(Action onClose)
        {
#if LION_RACE_INSTALLED
            if (IsRaceEnabled == false)
            {
                onClose?.Invoke();
                return;
            }

            _isThisSessionShown = true;
            raceManager.OpenRace();
            raceManager.OnRaceJoinDeclined += OnClose;
            raceManager.OnClaimRewardClicked += OnClose;
            raceManager.OnRaceContinue += OnClose;
            raceManager.OnRaceJoined += OnClose;

            onRaceloseAction = onClose;
#endif
        }
#if LION_RACE_INSTALLED
        public void OnClose(List<Reward> allRewards)
        {
            OnClose();
        }
#endif
        public void OnClose()
        {
#if LION_RACE_INSTALLED
            raceManager.OnRaceJoinDeclined -= OnClose;
            raceManager.OnClaimRewardClicked -= OnClose;
            raceManager.OnRaceContinue -= OnClose;
            raceManager.OnRaceJoined -= OnClose;
            onRaceloseAction?.Invoke();
#endif
        }
#if FIREBASE_INSTALLED
        // setup configs 
        public void UpdateConfigs(IDictionary<string, Firebase.RemoteConfig.ConfigValue> defaultInstanceAllValues)
        {
            IsRaceEnabled = defaultInstanceAllValues["IsRaceEnabled"].BooleanValue;
        }
#endif
        public void SetDefaults(Dictionary<string, object> defaults)
        {
            defaults.Add("IsRaceEnabled", true);
        }

    }
}