using System.Collections.Generic;
using _Game._0_CraftCore.Scripts.Core;
using _Game._1_CraftUI.Scripts;
using _Game._11_SmallRace.Scripts;
using _Game._2_LinearLevel.Scripts;
using _Game._2_LinearLevel.Scripts.ChallangeLevel;
using _Game._21_Jigsaw.Scripts;
using _Game._9_Marketplace.Scripts;
using _Game.Systems.GameFlow.Scripts.Commands;
using DG.Tweening;
using Library.ScreenManagement.Scripts;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.UI;

namespace _Game.Systems.GameFlow.Scripts.UI
{
    public class RoadMapUIArgs : BaseScreenArgs
    {
        public int PlayerLevel;
        public int LastObservedLevel;
    }

    public class RoadMapUI : BaseScreen<RoadMapUIArgs>
    {
        [SerializeField] JigsawCollectionButton _jigsawCollectionButton;
        [SerializeField] ChallengeSelectionButtonUI _challengeSelectionButtonUI;
        [SerializeField] MarketPlaceButton _marketPlaceButton;
        [SerializeField] List<RoadMapItemUI> _roadMapItemUIs;
        [SerializeField] private Transform _raceButton;

        [SerializeField] private int _levelOffset;
        [SerializeField] private RectTransform _contentRect;
        [SerializeField] private ScrollRect _scrollRect;

        [SerializeField] private float _centerPos;
        [SerializeField] private float _stepDistance;

        private Sequence _sequence;

        [Button]
        public void Test(int playerLevel, int lastObservedLevel)
        {
            Craft.CloseUI<RoadMapUI>();
            Craft.OpenUI<RoadMapUI>(new RoadMapUIArgs()
            {
                PlayerLevel = playerLevel,
                LastObservedLevel = lastObservedLevel
            });
        }

        public override void OnSetup()
        {
            _jigsawCollectionButton.UpdateActivity();
            _challengeSelectionButtonUI.UpdateActivity();
            _marketPlaceButton.UpdateActivity();
            UpdateRoadMapItems(GetArgs().PlayerLevel, GetArgs().LastObservedLevel);
            var smallRaceSystem = Craft.Get<SmallRaceSystem>();
            _raceButton.gameObject.SetActive(smallRaceSystem.IsRaceUnlocked());
        }

        public void UpdateRoadMapItems(int playerLevel, int lastObservedLevel)
        {
            // starting level should be larger than 1 
            for (int i = 0; i < _roadMapItemUIs.Count; i++)
            {
                int index = _roadMapItemUIs.Count - i - 1;
                int displayLevel = i + playerLevel - _levelOffset;

                var linearLevelSystem = Craft.Get<LinearLevelSystem>();
                var challengeSystem = Craft.Get<ChallengeSystem>();
                var marketPlaceSystem = Craft.Get<MarketPlaceSystem>();
                var smallRaceSystem = Craft.Get<SmallRaceSystem>();
                // if should offer 
                _roadMapItemUIs[index].SetLevel(displayLevel,
                    linearLevelSystem.So.BossLevelConfig.ShouldOfferBossLevel(displayLevel + 1),
                    challengeSystem.IsChallengeLevel(displayLevel + 1),
                    marketPlaceSystem.ShouldShowOnRoadMap(displayLevel), smallRaceSystem.IsRaceLevel(displayLevel)
                    , displayLevel <= lastObservedLevel);
            }

            int levelCount = playerLevel - lastObservedLevel;
            _contentRect.anchoredPosition =
                new Vector2(0, _centerPos + _stepDistance * (levelCount));
            _scrollRect.StopMovement();
            _sequence?.Kill();
            _sequence = DOTween.Sequence();
            if (levelCount > 0)
            {
                _scrollRect.enabled = false;
                _sequence.AppendCallback(Craft.GetUI<InputBlockerUI>().Block);
                _sequence.AppendInterval(0.5f);
                for (int i = 0; i < levelCount; i++)
                {
                    int index = _roadMapItemUIs.Count - (_levelOffset + 2 + i - levelCount);
                    Debug.Log(index);
                    _sequence.Append(_roadMapItemUIs[index].Animate());
                }

                _sequence.Insert(0.5f, _contentRect.DOAnchorPosY(_centerPos, levelCount * .5f).SetEase(Ease.Linear));

                _sequence.AppendCallback(() =>
                {
                    Craft.GetUI<InputBlockerUI>().UnBlock();
                    _scrollRect.StopMovement();
                    _scrollRect.enabled = true;
                });
            }
        }

        public override void OnClose()
        {
            _sequence?.Kill();
            _scrollRect.StopMovement();
            _scrollRect.enabled = true;
        }

        public void PlayButtonDown()
        {
            Close();
            new StartNormalLevelCommand().Execute();
        }
    }
}