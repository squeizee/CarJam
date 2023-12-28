using DG.Tweening;
using Library.ScreenManagement.Scripts;
using TMPro;
using UnityEngine;

namespace _Game._1_CraftUI.Scripts.Utility
{
    public class WarningUI : BaseScreen
    {
        [SerializeField] private TMP_Text _warningText;
        private RectTransform _warningTextRectTransform;
        private Sequence _sequence;

        public override void OnInitialize()
        {
            _warningText.alpha = 0;
            _warningText.text = "";
            _warningTextRectTransform = _warningText.GetComponent<RectTransform>();
        }

        public void ShowNotEnoughCoin(int startPos=-100)
        {
            ShowWarning("Not Enough Coin", startPos);
        }

        public void ShowWarning(string warning)
        {
            ShowWarning(warning, -100);
        }

        public void ShowWarning(string warning, int startPos, int increase = 100)
        {
            _warningText.text = warning;
            _warningText.alpha = 0;
            _warningTextRectTransform.anchoredPosition = new Vector2(0, startPos);
            _sequence?.Kill();
            _sequence = DOTween.Sequence();
            _sequence.Append(_warningText.DOFade(1, 0.5f));
            _sequence.Join(_warningTextRectTransform.DOAnchorPosY(startPos + increase, 0.5f));
            _sequence.AppendInterval(1.5f);
            _sequence.Append(_warningText.DOFade(0, 0.5f));
        }
    }
}