using System;
using System.Collections.Generic;
using _Game._0_CraftCore.Scripts.Core;
using _Game._0_CraftCore.Scripts.Utility;
using _Game._1_Effects.Scripts;
using _Game._11_SmallRace.Scripts;
using _Game._2_LinearLevel.Scripts;
using _Game._2_LinearLevel.Scripts.ChallangeLevel;
using _Game._9_Marketplace.Scripts;
using _Game.Systems.GameFlow.Scripts.Commands.ChallengeLevel;
using _Game.Systems.GameFlow.Scripts.UI;
using DG.Tweening;
using Modules.Inventory;
using Modules.Inventory.UI;
using UnityEngine;

namespace _Game.Systems.GameFlow.Scripts.Commands
{
    public class NormalLevelCompletedCommand
    {
        public void Execute()
        {
            Craft.CloseUI<NormalLevelUI>();

            var linearLevelSystem = Craft.Get<LinearLevelSystem>();

            linearLevelSystem.Dispatcher.Send(LinearLevelEvents.NormalLevelCompleted, new LinearLevelEventsArgs(
                linearLevelSystem.GetProgress(LinearLevelType.Normal),
                linearLevelSystem.GetProgress(LinearLevelType.Normal),
                0,
                linearLevelSystem.ProgressData.Value.GetLevelAttemptProgress(LinearLevelType.Normal),
                LinearLevelType.Normal,
                LinearLevelEvents.NormalLevelCompleted
            ));

            linearLevelSystem.ProgressData.Value.ResetLevelAttempt(LinearLevelType.Normal);
            linearLevelSystem.IncreaseProgress(LinearLevelType.Normal);

            int reward =
                linearLevelSystem.So.NormalLevelConfig.GetReward(linearLevelSystem.GetProgress(LinearLevelType.Normal));
            // Add Reward To Que 
            Craft.Get<CraftInventorySystem>().QueItemData(new ItemData(ItemId.Currency1, reward));
            Craft.Get<SmallRaceSystem>().IncreasePlayerScore();
            // SHOW WIN SCREEN
            Craft.Get<EffectsSystem>().ConfettiView.Play(false);
            var target = Craft.GetUI<NormalLevelUI>().CoinRewardView;
            new CollectCoinAnimationCommand().Execute(reward, target).Play();
            DOVirtual.DelayedCall(0.4f, () => { OnWinScreenClosed(); });

            return;
        }

        private void OnWinScreenClosed()
        {
            Craft.CloseUI<NormalLevelUI>();
            Craft.Get<EffectsSystem>().ConfettiView.Stop();

            var linearLevelSystem = Craft.Get<LinearLevelSystem>();
            var challengeSystem = Craft.Get<ChallengeSystem>();
            var gameFlowSystem = Craft.Get<GameFlowSystem>();
            var raceSystem = Craft.Get<SmallRaceSystem>();
            // if should offer 
            int levelProgress = linearLevelSystem.GetProgress(LinearLevelType.Normal);

            if (linearLevelSystem.So.BossLevelConfig.ShouldOfferBossLevel(levelProgress))
            {
                new ShowBossLevelOfferCommand().Execute();
            }
            else if (challengeSystem.ShouldShowNewChallengeUnlockedUI())
            {
                new ShowChallengeLevelUnlockedCommand().Execute();
            }
            else if (gameFlowSystem.ShouldReturnToRoadMap(levelProgress))
            {
                new OpenRoadMapCommand().Execute();
            }
            else if (Craft.Get<MarketPlaceSystem>().ShouldOffer(levelProgress))
            {
                new OpenMarketPlaceOfferUICommand().Execute(levelProgress);
            }
            else if (raceSystem.ShouldShowInfo())
            {
                raceSystem.ShowInfo(() => { new StartNormalLevelCommand().Execute(true); });
            }
            else
            {
                new CleanGarbageCommand().Execute().OnComplete(() => { new StartNormalLevelCommand().Execute(true); });
            }
        }


        private void OnCoinMultiplierWatched()
        {
            LinearLevelSystem linearLevelSystem = Craft.Get<LinearLevelSystem>();

            int levelProgress = linearLevelSystem.GetProgress(LinearLevelType.Normal);
            int bossProgress = linearLevelSystem.GetProgress(LinearLevelType.Boss);
            int levelIndex = levelProgress + bossProgress - 1;
#if LION_INSTALLED
            LionStudios.Suite.Analytics.LionAnalytics.RewardVideoShow("multiplyCoins", "unknown", levelIndex,
                new Dictionary<string, object>()
                {
                    { "level", levelIndex },
                });
#endif
        }
    }
}