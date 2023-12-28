using System;
using System.Collections.Generic;
using Library.ScreenManagement.Scripts;
using TMPro;
using UnityEngine;

namespace _Game._2_LinearLevel.Scripts.ChallangeLevel
{
    public class ChallengeLevelSelectionUIArgs : BaseScreenArgs
    {
        public List<ChallengeLevelButtonItemData> HardLevels;
        public List<ChallengeLevelButtonItemData> EpicLevels;
        public Action<ChallengeLevelButtonItemData> OnHardLevelButtonDown;
        public Action<ChallengeLevelButtonItemData> OnEpicLevelButtonDown;
        public Action OnExitButtonDown;
    }

    public class ChallengeLevelSelectionUI : BaseScreen<ChallengeLevelSelectionUIArgs>
    {
        public List<ChallengeLevelButtonItem> HardButtons;
        public List<ChallengeLevelButtonItem> EpicButtons;
        public Transform HardLevelsContainer;
        public Transform EpicLevelsContainer;
        [SerializeField] private TMP_Text _hardText;
        [SerializeField] private TMP_Text _epicText;
        [SerializeField] private Color _selectedColor;
        [SerializeField] private Color _unSelectedColor;
        [SerializeField] private Transform _epicLockedTransform;
        [SerializeField] private TMP_Text _epicLockedRatio;
        [SerializeField] private RectTransform _epicRatioRect;
        [SerializeField] private ChallengeLifeDisplayer _lifeDisplayer;

        private int _completedHardLevels;
        private int _hardLevelCountToUnlockEpic = 10;
        private bool _isEpicLevelsEnabled = false;
        [SerializeField] private float _epicRatioWidth = 600;

        public override void OnSetup()
        {
            var hardLevels = GetArgs().HardLevels;
            _completedHardLevels = hardLevels.FindAll(x => x.Type == ChallengeLevelButtonItemType.DoBetter).Count;
            _isEpicLevelsEnabled = _completedHardLevels >= _hardLevelCountToUnlockEpic;
            for (int i = 0; i < HardButtons.Count; i++)
            {
                int hardLevelIndex = Mathf.Min(i, hardLevels.Count - 1);
                HardButtons[i].Initialize(hardLevels[hardLevelIndex], OnHardItemButtonDown);
            }

            if (_isEpicLevelsEnabled)
            {
                var epicLevels = GetArgs().EpicLevels;
                for (int i = 0; i < EpicButtons.Count; i++)
                {
                    int epicLevelIndex = Mathf.Min(i, epicLevels.Count - 1);
                    EpicButtons[i].Initialize(epicLevels[epicLevelIndex], OnEpicItemButtonDown);
                }
            }
            else
            {
                _epicLockedRatio.text = _completedHardLevels + "/" + _hardLevelCountToUnlockEpic;
                _epicRatioRect.sizeDelta = new Vector2(
                    _epicRatioWidth * _completedHardLevels * 1f / _hardLevelCountToUnlockEpic,
                    _epicRatioRect.sizeDelta.y);
            }

            OnHardButtonDown();
            _lifeDisplayer.Activate();
        }

        public override void OnClose()
        {
            _lifeDisplayer.Deactivate();
        }

        public void OnHardItemButtonDown(ChallengeLevelButtonItemData index)
        {
            GetArgs().OnHardLevelButtonDown?.Invoke(index);
        }

        public void OnEpicItemButtonDown(ChallengeLevelButtonItemData index)
        {
            GetArgs().OnEpicLevelButtonDown?.Invoke(index);
        }

        public void OnHardButtonDown()
        {
            _hardText.color = _selectedColor;
            _epicText.color = _unSelectedColor;
            HardLevelsContainer.gameObject.SetActive(true);
            EpicLevelsContainer.gameObject.SetActive(false);
            _epicLockedTransform.gameObject.SetActive(false);
        }

        public void OnEpicButtonDown()
        {
            _hardText.color = _unSelectedColor;
            _epicText.color = _selectedColor;
            HardLevelsContainer.gameObject.SetActive(false);
            EpicLevelsContainer.gameObject.SetActive(_isEpicLevelsEnabled);
            _epicLockedTransform.gameObject.SetActive(!_isEpicLevelsEnabled);
        }

        public void OnCloseButtonDown()
        {
            Close();
            GetArgs().OnExitButtonDown?.Invoke();
        }

        public void UpdateEpicButton(ChallengeLevelButtonItemData getEpicLevelsData)
        {
            var epicButton = EpicButtons[getEpicLevelsData.Index - 1];
            epicButton.Initialize(getEpicLevelsData, OnEpicItemButtonDown);
        }

        public void UpdateHardButton(ChallengeLevelButtonItemData getEpicLevelsData)
        {
            // log index
//            Debug.Log(getEpicLevelsData.Index);
            var epicButton = HardButtons[getEpicLevelsData.Index - 1];
            epicButton.Initialize(getEpicLevelsData, OnHardItemButtonDown);
        }
    }
}