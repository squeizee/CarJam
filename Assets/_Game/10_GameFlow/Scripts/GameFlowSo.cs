using System.Collections.Generic;
using Library.ScreenManagement.Scripts;
using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game.Systems.GameFlow.Scripts
{
    [CreateAssetMenu(fileName = "GameFlowSo", menuName = "Craft/GameFlow/GameFlowSo")]
    public class GameFlowSo : ScriptableSingleton<GameFlowSo>
    {
        public List<BaseScreen> Screens = new List<BaseScreen>();
        public  GameFlowSystemConfig GameFlowSystemConfig = new GameFlowSystemConfig();
    }

    [SerializeField]
    public class GameFlowSystemConfig
    {
        public int RoadMapShowLevel = 5;
        public int RoadMapReturnPeriod = 7;
        public  bool IsRoadMapEnabled = true;
    }
}