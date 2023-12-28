using DG.Tweening;
using TMPro;
using UnityEngine;

namespace _Game.Systems.GameFlow.Scripts.UI
{
    public class RoadMapItemUI : MonoBehaviour
    {
        [SerializeField] private TMP_Text _levelText;
        [SerializeField] private Transform _currentLevel;
        [SerializeField] private Transform _bossLevel;
        [SerializeField] private Transform _challengeLevel;
        [SerializeField] private Transform _marketLevel;
        [SerializeField] private Transform _raceLevel;
        [SerializeField] private Transform _container;
        [SerializeField] private RectTransform _activeRoad;
        [SerializeField] private float _maxLenght;

        public void SetLevel(int level, bool isBossLevel, bool isChallengeLevel, bool isMarketLevel, bool isRace,
            bool isCurrentLevel)
        {
            _container.gameObject.SetActive(level > 0);
            _levelText.text = level.ToString();
            _currentLevel.gameObject.SetActive(isCurrentLevel);
            _activeRoad.gameObject.SetActive(isCurrentLevel);
            _bossLevel.gameObject.SetActive(isBossLevel);
            _challengeLevel.gameObject.SetActive(isChallengeLevel);
            _marketLevel.gameObject.SetActive(isMarketLevel);
            _raceLevel.gameObject.SetActive(isRace);
        }


        public Sequence Animate()
        {
            _activeRoad.sizeDelta = new Vector2(_activeRoad.sizeDelta.x, 0);
            Sequence sequence = DOTween.Sequence()
                .AppendCallback(() => _activeRoad.gameObject.SetActive(true))
                .Append(_activeRoad.DOSizeDelta(new Vector2(_activeRoad.sizeDelta.x, _maxLenght), 0.3f))
                .AppendCallback((() =>
                {
                    _currentLevel.gameObject.SetActive(true);
                    _currentLevel.localScale = Vector3.zero;
                })).Append(_currentLevel.DOScale(Vector3.one, 0.2f).SetEase(Ease.OutBack));
            return sequence;
        }
    }
}