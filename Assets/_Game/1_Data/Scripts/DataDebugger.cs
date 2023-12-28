using System.ComponentModel;
using _Game.Library.PersistentDataNS.Scripts;
using UnityEngine;

public partial class SROptions
{
    [Category("Data")]
    public void ResetData()
    {
        // PlayerData.Reset();
        // PlayerData.Save();
        PlayerPrefs.DeleteAll();
        PlayerPrefs.Save();
        PersistantDataCache.Clear();
#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;

#else
        Application.Quit();
#endif
    }
}