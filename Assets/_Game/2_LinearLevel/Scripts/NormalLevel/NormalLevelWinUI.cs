using System;
using _Game._0_CraftCore.Scripts.Core;
using _Game._2_LinearLevel.Scripts;
using DG.Tweening;
using Library.ScreenManagement.Scripts;
using Library.ScreenManagement.Scripts.Animation;
using Library.ScreenManagement.Scripts.Animation.UIAnimation;
using Library.Utility.Scripts.ExtensionMethods;
using Modules.Inventory;
using Modules.Inventory.UI;
using Modules.UI;
using Modules.VFX.Scripts;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace _Game.Systems.GameFlow.Scripts.UI
{
    public class NormalLevelWinUIArgs : BaseScreenArgs
    {
        public int CoinReward = 12;
        public Action OnCoinMultiplierWatched;
        public bool ShouldShowMultiplier;
    }

    public class NormalLevelWinUI : BaseScreen<NormalLevelWinUIArgs>
    {
        [SerializeField] private RiseAndFadeInImage _amazingImage;
        [SerializeField] private RiseAndFadeInCanvasGroup _emojiCanvasGroup;
        [SerializeField] private RiseAndFadeInCanvasGroup _playButtonGroup;
        [SerializeField] private RiseAndFadeInCanvasGroup _multiplyButtonGroup;
        [SerializeField] private SingleSoundFxUnit _soundFxUnit;
        [SerializeField] private MultiplierPanelUI _multiplierPanelUI;

        [SerializeField] private Button _playButton;
        [SerializeField] private TMP_Text _coinText;

        [SerializeField] private InventoryDisplayerView _coinDisplayer;
        [SerializeField] private Animator _animator;
        [SerializeField] private ShinyAnimation _shinyAnimation;

        public override BaseScreenAnimationCommand GetAnimationCommand()
        {
            return new InstantEnterFadeOutAnimationCommand();
        }

        [Button]
        public void TestCoin(int coin = 25)
        {
            new CollectCoinAnimationCommand()
                .Execute(coin, _coinDisplayer.GetComponent<RectTransform>(), _playButtonGroup.RectTransform).Play();
        }

        public override void OnSetup()
        {
            _animator.enabled = true;

            var so = LevelUIAnimationsSo.Instance;
            _coinText.text = GetArgs().CoinReward.ToString();
            Background.SetAlpha(so.InitialBGAlpa);

            _amazingImage.RiseAmount = so.AmazingTextRiseAmount;
            _amazingImage.Initialize();

            _emojiCanvasGroup.RiseAmount = so.EmojiRiseAmount;
            _emojiCanvasGroup.Initialize();

            _playButtonGroup.RiseAmount = so.PlayButtonRiseAmount;
            _playButtonGroup.Initialize();

            _multiplyButtonGroup.RiseAmount = so.PlayButtonRiseAmount;
            _multiplyButtonGroup.Initialize();

            _multiplierPanelUI.gameObject.SetActive(GetArgs().ShouldShowMultiplier);
            _multiplierPanelUI.Setup(GetArgs().CoinReward, OnMultiplierPanelMultiplierOccured);

            Sequence?.Kill();
            Sequence = DOTween.Sequence();

            Sequence.Insert(0, Background.DOFade(so.FinalBGAlpha, so.FadeDuration));
            Sequence.InsertCallback(so.WinSoundDelay, _soundFxUnit.Play);
            Sequence.Insert(so.AmazingTextEnterTime, _amazingImage.PlayAnimation(so.AmazingTextEnterDuration));
            Sequence.Insert(so.EmojiEnterTime, _emojiCanvasGroup.PlayAnimation(so.EmojiEnterDuration));

            if (GetArgs().ShouldShowMultiplier)
            {
                Sequence.Insert(so.PlayButtonEnterTime, _multiplyButtonGroup.PlayAnimation(so.PlayButtonEnterDuration));
                Sequence.AppendCallback((() => _multiplierPanelUI.Activate()));
                float delay = 0.3f;
                Sequence.Insert(so.PlayButtonEnterTime + delay,
                    _playButtonGroup.PlayAnimation(so.PlayButtonEnterDuration));
                Sequence.AppendCallback((() => _shinyAnimation.Play()));
                Sequence.AppendCallback(() => _playButton.interactable = true);
            }
            else
            {
                Sequence.Insert(so.PlayButtonEnterTime, _playButtonGroup.PlayAnimation(so.PlayButtonEnterDuration));
                Sequence.AppendCallback((() => _shinyAnimation.Play()));
                Sequence.AppendCallback((() => _playButton.interactable = true));
            }
        }

        [Button]
        public void Test()
        {
        }

        public override void OnClose()
        {
            Sequence?.Kill();
            _animator.enabled = false;
            _multiplierPanelUI.Deactivate();
            _shinyAnimation.Stop();
        }

        public void OnNextButtonDown()
        {
            _playButton.interactable = false;
            _multiplierPanelUI.SetInteractable(false);
            var seq = new CollectCoinAnimationCommand()
                .Execute(GetArgs().CoinReward,
                    _coinDisplayer.GetComponent<RectTransform>(), _playButtonGroup.RectTransform).Play();
            seq.AppendCallback(Close);
            seq.AppendCallback(() => { _animator.enabled = false; });
        }

        private void OnMultiplierPanelMultiplierOccured(float multiplier)
        {
            GetArgs().OnCoinMultiplierWatched?.Invoke();

            Craft.Get<CraftInventorySystem>()
                .QueItemData(new ItemData(ItemId.Currency1, GetArgs().CoinReward * ((int)multiplier - 1)));

            var seq = new CollectCoinAnimationCommand()
                .Execute(GetArgs().CoinReward * (int)multiplier,
                    _coinDisplayer.GetComponent<RectTransform>(),
                    _multiplierPanelUI.GetButtonTransform().GetComponent<RectTransform>()).Play();

            seq.AppendCallback(Close);
            seq.AppendCallback(() => { _animator.enabled = false; });
        }
    }
}