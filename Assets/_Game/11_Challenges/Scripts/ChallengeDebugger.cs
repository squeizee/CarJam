using System.ComponentModel;
using _Game._0_CraftCore.Scripts.Core;
using _Game._2_LinearLevel.Scripts.ChallangeLevel;

public partial class SROptions
{
    [Category("Challenge")]
    public void AddLife()
    {
        Craft.Get<ChallengeSystem>().LifeController.AddLife(1);
    }

    [Category("Challenge")]
    public void RemoveLife()
    {
        Craft.Get<ChallengeSystem>().LifeController.TrySpendLife();
    }
}