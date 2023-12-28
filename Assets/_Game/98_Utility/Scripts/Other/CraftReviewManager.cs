/*
using System.Collections;
#if UNITY_ANDROID
using Google.Play.Review;
#endif

namespace Modules.Shared.Utility
{
    public class CraftReviewManager : MonoSingleton<CraftReviewManager>
    {
#if UNITY_ANDROID
        private static ReviewManager _reviewManager;
        private static PlayReviewInfo _reviewInfo;
#endif
        public void SendReview()
        {
#if UNITY_IOS
            UnityEngine.iOS.Device.RequestStoreReview();
#elif UNITY_ANDROID
            StartCoroutine(Instance.StartReview());
#endif
        }


#if UNITY_ANDROID
        private IEnumerator StartReview()
        {
            _reviewManager = new ReviewManager();
            if (_reviewManager == null)
            {
                yield break;
            }

            var requestFlowOperation = _reviewManager.RequestReviewFlow();
            yield return requestFlowOperation;
         //   Debug.Log(requestFlowOperation.Error.ToString());

            if (requestFlowOperation.Error != ReviewErrorCode.NoError)
            {
                yield break;
            }

            _reviewInfo = requestFlowOperation.GetResult();
            yield return _reviewInfo;

            if (_reviewInfo == null)
            {
               // Debug.Log("StartReview - No Review Info");
                yield break;
            }

            var launchFlowOperation = _reviewManager.LaunchReviewFlow(_reviewInfo);
            yield return launchFlowOperation;
            _reviewInfo = null;
          //  Debug.Log("StartReview - " + launchFlowOperation.Error);

            if (launchFlowOperation.Error != ReviewErrorCode.NoError)
            {
                yield break;
            }
        }
#endif
    }
}
*/

