using System.ComponentModel;
using _Game._0_CraftCore.Scripts.Core;
using _Game._11_SmallRace.Scripts;

public partial class SROptions
{
#if LION_RACE_INSTALLED
    [Category("SmallRace")]
    public bool IsRaceEnabled
    {
        get => Craft.Get<SmallRaceSystem>().IsRaceEnabled;
        set => Craft.Get<SmallRaceSystem>().IsRaceEnabled = value;
    }
#endif

#if LION_RACE_INSTALLED
    [Category("SmallRace")]
    public void IncreaseRaceLevel()
    {
        var smallRaceSystem = Craft.Get<SmallRaceSystem>();
        smallRaceSystem.IncreasePlayerScore();
    }
#endif
}