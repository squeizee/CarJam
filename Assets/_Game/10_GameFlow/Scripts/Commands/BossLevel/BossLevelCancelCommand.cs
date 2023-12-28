using _Game._0_CraftCore.Scripts.Core;
using _Game._2_LinearLevel.Scripts.BossLevel;

namespace _Game.Systems.GameFlow.Scripts.Commands
{
    public class BossLevelCancelCommand
    {
        public void Execute()
        {
            Craft.CloseUI<BossLevelLevelUI>();
            new StartNormalLevelCommand().Execute();
        }
    }
}