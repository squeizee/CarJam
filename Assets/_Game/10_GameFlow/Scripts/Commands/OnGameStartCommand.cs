using _Game._0_CraftCore.Scripts.Core;
using _Game.Systems._CoreSystem.Scripts;

namespace _Game.Systems.GameFlow.Scripts.Commands
{
    public class OnGameStartCommand
    {
        public void Execute()
        {
            if (CraftCoreSo.Instance.GameMode == GameMode.GamePlay)
            {
                Craft.Dispatcher.Send(CoreEventId.GameStarted);

                if (Craft.Get<GameFlowSystem>().ShouldOpenRoadMapOnStart())
                {
                    new OpenRoadMapCommand().Execute(true);
                }
                else
                {
                    new StartNormalLevelCommand().Execute();
                }
            }
            else if (CraftCoreSo.Instance.GameMode == GameMode.GamePlayTest)
            {
            }
        }
    }
}