using System.Collections;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.UI;

namespace _Game.Library.CraftUISystemNS.Scripts
{
    public class PopUpBackground : MonoBehaviour
    {
        [SerializeField] private ContentSizeFitter _outerBgContentSizeFitter;
        [SerializeField] private VerticalLayoutGroup _outerVerticalLayoutGroup;
        [SerializeField] private ContentSizeFitter _innerBgContentSizeFitter;
        [SerializeField] private VerticalLayoutGroup _innerVerticalLayoutGroup;

        [Button]
        public void Initialize()
        {
            _innerBgContentSizeFitter.enabled = true;
            _innerVerticalLayoutGroup.enabled = true;
            _outerBgContentSizeFitter.enabled = false;
            StartCoroutine(WaitForSizeChange());
        }

        IEnumerator WaitForSizeChange()
        {
            yield return null;
            _outerVerticalLayoutGroup.enabled = true;
            _outerBgContentSizeFitter.enabled = true;
            _innerBgContentSizeFitter.enabled = false;
            _innerVerticalLayoutGroup.enabled = false;

            yield return null;
            _outerBgContentSizeFitter.enabled = false;
            _outerVerticalLayoutGroup.enabled = false;
        }

        [Button]
        public void DeactivateAll()
        {
            _outerVerticalLayoutGroup.enabled = false;
            _outerBgContentSizeFitter.enabled = false;
            _innerBgContentSizeFitter.enabled = false;
            _innerVerticalLayoutGroup.enabled = false;
        }

        [Button]
        public void ActivateAll()
        {
            _outerVerticalLayoutGroup.enabled = true;
            _outerBgContentSizeFitter.enabled = true;
            _innerBgContentSizeFitter.enabled = true;
            _innerVerticalLayoutGroup.enabled = true;
        }
    }
}