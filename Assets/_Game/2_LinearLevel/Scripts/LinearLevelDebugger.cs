using System.ComponentModel;
using _Game._0_CraftCore.Scripts.Core;
using _Game._2_LinearLevel.Scripts;
using _Game._3_GamePlay.Scripts;
using _Game.Systems.GameFlow.Scripts.Commands;

public partial class SROptions
{
    private LinearLevelSystem System => Craft.Get<LinearLevelSystem>();

    [Category("LinearLevel")]
    public int NormalProgress
    {
        get => System.GetProgress(LinearLevelType.Normal);
        set => System.SetProgress(LinearLevelType.Normal, value);
    }

    [Category("LinearLevel")]
    public int BossProgress
    {
        get => System.GetProgress(LinearLevelType.Boss);
        set => System.SetProgress(LinearLevelType.Boss, value);
    }

    [Category("LinearLevel")]
    public void RestartLevel()
    {
        new RestartNormalLevelCommand().Execute();
    }

    [Category("LinearLevel")]
    public void NextLevel()
    {
        System.IncreaseProgress(LinearLevelType.Normal);
        new RestartNormalLevelCommand().Execute();
    }

    [Category("LinearLevel")]
    public void PrevLevel()
    {
        System.SetProgress(LinearLevelType.Normal, System.GetProgress(LinearLevelType.Normal) - 1);
        new RestartNormalLevelCommand().Execute();
    }

    [Category("LinearLevel")]
    public void WinLevel()
    {
        Craft.Get<GamePlaySystem>().GetCurrentGamePlay().OnCompleted();
    }

    [Category("LinearLevel")]
    public void LooseLevel()
    {
        Craft.Get<GamePlaySystem>().GetCurrentGamePlay().OnFailed(FailReason.NoSpaceLeft);
    }
}