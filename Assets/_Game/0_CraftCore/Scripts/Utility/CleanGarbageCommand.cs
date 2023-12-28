using DG.Tweening;
using UnityEngine;

namespace _Game._0_CraftCore.Scripts.Utility
{
    public class CleanGarbageCommand
    {
        public static float lastCleanTime = 0;
        public static float cleanInterval = 5 * 60;

        public Tween Execute()
        {
            if (Time.time - lastCleanTime < cleanInterval)
            {
                return DOVirtual.DelayedCall(0f, () => { });
            }

            Resources.UnloadUnusedAssets();
            System.GC.Collect();
            lastCleanTime = Time.time;
            Debug.Log("Garbage Cleaned");
            return DOVirtual.DelayedCall(0.3f, () => { });
        }
    }
}