using _Game._0_CraftCore.Scripts.Core;
using _Game._2_LinearLevel.Scripts;
using _Game.Systems.GameFlow.Scripts.UI;
using UnityEngine;

namespace _Game.Systems.GameFlow.Scripts.Commands
{
    public class OpenRoadMapCommand
    {
        private static int _lastObservedLevel = 0;

        public void Execute(bool isFirstOpen = false)
        {
            int playerLevel = Craft.Get<LinearLevelSystem>().GetProgress(LinearLevelType.Normal);
            if (isFirstOpen)
            {
                _lastObservedLevel = playerLevel;
            }
            else
            {
                _lastObservedLevel = playerLevel - 1;
            }

            // if (playerLevel - _lastObservedLevel > 7)
            // {
            //     _lastObservedLevel = playerLevel;
            // }

            Craft.OpenUI<RoadMapUI>(new RoadMapUIArgs()
            {
                PlayerLevel = playerLevel,
                LastObservedLevel = _lastObservedLevel
            });
            _lastObservedLevel = playerLevel;
        }
    }
}