using _Game._0_CraftCore.Scripts.Core;
using _Game._2_LinearLevel.Scripts;
using _Game.Systems.GameFlow.Scripts.UI;

namespace _Game.Systems.GameFlow.Scripts.Commands
{
    public class RestartNormalLevelCommand
    {
        public void Execute()
        {
            Craft.CloseUI<NormalLevelUI>();
            var linearLevelSystem = Craft.Get<LinearLevelSystem>();

            linearLevelSystem.Dispatcher.Send(LinearLevelEvents.NormalLevelRestarted, new LinearLevelEventsArgs(
                linearLevelSystem.GetProgress(LinearLevelType.Normal),
                linearLevelSystem.GetProgress(LinearLevelType.Normal),
                0,
                linearLevelSystem.ProgressData.Value.GetLevelAttemptProgress(LinearLevelType.Normal),
                LinearLevelType.Normal,
                LinearLevelEvents.NormalLevelRestarted
            ));

            linearLevelSystem.ProgressData.Value.IncreaseLevelAttempt(LinearLevelType.Normal);

            new StartNormalLevelCommand().Execute();
        }
    }
}