using _Game._0_CraftCore.Scripts.Core;
using _Game._2_LinearLevel.Scripts.ChallangeLevel;

namespace _Game.Systems.GameFlow.Scripts.Commands.ChallengeLevel
{
    public class ShowChallengeLevelUnlockedCommand
    {
        int reward;

        public void Execute()
        {
            Craft.OpenUI<ChallengeLevelUnlockedUI>(new ChallengeLevelUnlockedUIArgs()
            {
                OnAccepted = OnAccept,
                OnDeclined = OnDecline
            });
        }

        public void OnAccept()
        {
            Craft.CloseUI<ChallengeLevelUnlockedUI>();
            Craft.Get<ChallengeSystem>().OpenChallengeLevelSelectionUI(false, false);
        }

        public void OnDecline()
        {
            Craft.CloseUI<ChallengeLevelUnlockedUI>();
            new StartNormalLevelCommand().Execute();
        }
    }
}