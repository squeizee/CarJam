using System;
using _Game._0_CraftCore.Scripts.Core;
using _Game._2_LinearLevel.Scripts;
using _Game._2_LinearLevel.Scripts.BossLevel;
using UnityEngine;

namespace _Game.Systems.GameFlow.Scripts.Commands
{
    public class ShowBossLevelOfferCommand
    {
        int reward;

        public void Execute()
        {
            var linearLevelSystem = Craft.Get<LinearLevelSystem>();
            int bossLevelProgress = linearLevelSystem.GetProgress(LinearLevelType.Boss);
            try
            {
                var level = linearLevelSystem.GetCurrentGamePlay(LinearLevelType.Boss);
            }
            catch (Exception e)
            {
                Debug.Log("Boss Level Not Found");
            }

            reward = linearLevelSystem.So.BossLevelConfig.GetReward(bossLevelProgress);

            Craft.OpenUI<BossLevelOfferUI>(new BossLevelOfferUIArgs()
            {
                Reward = reward,
                OnAccepted = OnAccept,
                OnDeclined = OnDecline
            });
        }

        public void OnAccept()
        {
            Craft.CloseUI<BossLevelOfferUI>();
            new StartBossLevelCommand().Execute(reward);
        }

        public void OnDecline()
        {
            Craft.CloseUI<BossLevelOfferUI>();
            new StartNormalLevelCommand().Execute();
        }
    }
}