using _Game._0_CraftCore.Scripts.Core;
using _Game._2_LinearLevel.Scripts.ChallangeLevel;

namespace _Game.Systems.GameFlow.Scripts.Commands.ChallengeLevel
{
    public class ChallengeCancelCommand
    {
        public void Execute()
        {
            Craft.CloseUI<ChallengeLevelUI>();
            Craft.Get<ChallengeSystem>().OpenChallengeLevelSelectionUI(false, false);
        }
    }
}