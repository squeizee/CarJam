using UnityEngine;

namespace GJG_MAVI.Utils.StompyRobot.ProjectDependent
{
    public static class AutoInitializeDebugger
    {
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
        public static void OnLoadBeforeScene()
        {
            // Debug.Log("SRDEBUGGERINIT");
            // SRDebug.Init();
            // SRDebug.Instance.IsTriggerEnabled = true;
        }
    }
}