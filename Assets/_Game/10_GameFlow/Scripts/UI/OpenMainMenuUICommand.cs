using _Game._0_CraftCore.Scripts.Core;
using _Game.Systems.GameFlow.Scripts.Commands;

namespace _Game.Systems.GameFlow.Scripts.UI
{
    public class OpenMainMenuUICommand
    {
        public void Execute()
        {
            Craft.OpenUI<MainMenuUI>(new MainMenuUIArgs() { OnPlayButtonDown = OnPlayButtonDown });
        }
        public void OnPlayButtonDown()
        {
            Craft.CloseUI<MainMenuUI>();
            new StartNormalLevelCommand().Execute();
        }
    }
}