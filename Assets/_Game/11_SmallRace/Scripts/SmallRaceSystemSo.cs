using System.Collections.Generic;
using Library.ScreenManagement.Scripts;
using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game._11_SmallRace
{
    [CreateAssetMenu(fileName = "SmallRaceSystemSo", menuName = "Craft/Other/SmallRaceSystemSo")]
    public class SmallRaceSystemSo : ScriptableSingleton<SmallRaceSystemSo>
    {
#if LION_RACE_INSTALLED
        public List<BaseScreen> Screens;
        public LionStudios.Suite.Leaderboards.Fake.RaceManager RaceManager;
        public LionStudios.Suite.Leaderboards.Fake.RaceConfig RaceConfig;
#endif
    }
}