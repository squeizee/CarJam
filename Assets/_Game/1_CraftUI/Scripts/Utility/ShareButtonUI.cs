using UnityEngine;
//using UnityNative.Sharing;

public class ShareButtonUI : MonoBehaviour
{
    string _shareMessageAndroid =
        "Amazing game! Relaxing yet challenging. Colorful designs make it so much fun 😄 Join the fun: https://linktr.ee/crazycupcakes";

    public void OnButtonDown()
    {
        // var sharing = UnityNativeSharing.Create();
        // sharing.ShareText(_shareMessageAndroid);
        // Debug.Log("Share Button Down");
    }
}