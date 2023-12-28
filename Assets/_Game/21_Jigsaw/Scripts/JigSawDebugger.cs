using System.Collections.Generic;
using System.ComponentModel;
using _Game._0_CraftCore.Scripts.Core;
using _Game._3_GamePlay;

public partial class SROptions
{
    [Category("Jigsaw")]
    public int JigsawIndex
    {
        get { return Craft.Get<JigsawSystem>().ProgressData.Value.Progress; }
        set
        {
            Craft.Get<JigsawSystem>().ProgressData.Value.Progress = value;
            Craft.Get<JigsawSystem>().ProgressData.Save();
        }
    }

    [Category("Jigsaw")]
    public void ResetCurrentProgress()
    {
        Craft.Get<JigsawSystem>().ProgressData.Value.UnlockedJigsawIds = new List<int>();
        _jigsawPieceId = 0;
    }

    private int _jigsawPieceId = 0;

    [Category("Jigsaw")]
    public void UnlockJigsawPiece()
    {
        Craft.Get<JigsawSystem>().UnlockJigsawPiece(_jigsawPieceId);
        _jigsawPieceId++;
    }
}