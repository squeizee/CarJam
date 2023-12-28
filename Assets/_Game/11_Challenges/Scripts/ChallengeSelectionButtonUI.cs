using _Game._0_CraftCore.Scripts.Core;
using TMPro;
using UnityEngine;

namespace _Game._2_LinearLevel.Scripts.ChallangeLevel
{
    public class ChallengeSelectionButtonUI : MonoBehaviour
    {
        [SerializeField] private TMP_Text _countText;
        [SerializeField] private Transform _notifTransform;

        [SerializeField] private bool _isFromRoadMap;


        public void OnButtonDown()
        {
            Craft.Get<ChallengeSystem>().OpenChallengeLevelSelectionUI(true, _isFromRoadMap);
        }

        public void UpdateActivity()
        {
            gameObject.SetActive(Craft.Get<ChallengeSystem>().ShouldShowLevelButton());
            int count = Craft.Get<ChallengeSystem>().GetUnreadChallengeCount();
            _countText.text = count.ToString();
            _notifTransform.gameObject.SetActive(count > 0);
        }
    }
}