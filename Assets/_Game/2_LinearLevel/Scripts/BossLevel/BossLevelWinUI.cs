using DG.Tweening;
using Library.ScreenManagement.Scripts;
using Library.ScreenManagement.Scripts.Animation;
using Library.ScreenManagement.Scripts.Animation.UIAnimation;
using Library.Utility.Scripts.ExtensionMethods;
using Modules.Inventory.UI;
using Modules.VFX.Scripts;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace _Game._2_LinearLevel.Scripts.BossLevel
{
    public class BossLevelWinUIArgs : BaseScreenArgs
    {
        public int Reward;
    }

    public class BossLevelWinUI : BaseScreen<BossLevelWinUIArgs>
    {
        [SerializeField] private RiseAndFadeInImage _amazingImage;
        [SerializeField] private RiseAndFadeInTMP_Text _bossLevelText;

        [SerializeField] private RiseAndFadeInCanvasGroup _emojiCanvasGroup;
        [SerializeField] private RiseAndFadeInCanvasGroup _playButtonGroup;
        [SerializeField] private SingleSoundFxUnit _soundFxUnit;

        [SerializeField] private Button _playButton;

        [SerializeField] private InventoryDisplayerView _coinDisplayer;

        [SerializeField] private TMP_Text _coinText;

        [SerializeField] private Animator _animator;
        [SerializeField] private ShinyAnimation _shinyAnimation;

        [SerializeField] private Transform _withCoin;
        [SerializeField] private Transform _withOutCoin;


        public override BaseScreenAnimationCommand GetAnimationCommand()
        {
            return new InstantEnterFadeOutAnimationCommand();
        }

        public override void OnSetup()
        {
            var so = LevelUIAnimationsSo.Instance;

            _animator.enabled = true;

            _coinText.text = GetArgs().Reward.ToString();
            Background.SetAlpha(so.InitialBGAlpa);

            _amazingImage.RiseAmount = so.AmazingTextRiseAmount;
            _amazingImage.Initialize();

            _bossLevelText.RiseAmount = so.AmazingTextRiseAmount;
            _bossLevelText.Initialize();

            _emojiCanvasGroup.RiseAmount = so.EmojiRiseAmount;
            _emojiCanvasGroup.Initialize();

            _playButtonGroup.RiseAmount = so.PlayButtonRiseAmount;
            _playButtonGroup.Initialize();

            _withCoin.gameObject.SetActive(GetArgs().Reward > 0);
            _withOutCoin.gameObject.SetActive(GetArgs().Reward == 0);

            Sequence?.Kill();
            Sequence = DOTween.Sequence();

            float delay = 0.3f;

            Sequence.Insert(0, Background.DOFade(so.FinalBGAlpha, so.FadeDuration));
            Sequence.InsertCallback(so.WinSoundDelay, _soundFxUnit.Play);
            Sequence.Insert(so.AmazingTextEnterTime, _amazingImage.PlayAnimation(so.AmazingTextEnterDuration));
            Sequence.Insert(so.AmazingTextEnterTime + delay, _bossLevelText.PlayAnimation(so.AmazingTextEnterDuration));
            Sequence.Insert(so.EmojiEnterTime + delay, _emojiCanvasGroup.PlayAnimation(so.EmojiEnterDuration));
            Sequence.Insert(so.PlayButtonEnterTime + delay, _playButtonGroup.PlayAnimation(so.PlayButtonEnterDuration));
            Sequence.AppendCallback(() => _shinyAnimation.Play());
            Sequence.AppendCallback(() => _playButton.interactable = true);
        }

        public void OnNextButtonDown()
        {
            _playButton.interactable = false;
            if (GetArgs().Reward == 0)
            {
                Close();
            }
            else
            {
                var seq = new CollectCoinAnimationCommand()
                    .Execute(GetArgs().Reward,
                        _coinDisplayer.GetComponent<RectTransform>(), _playButtonGroup.RectTransform).Play();
                seq.AppendCallback(Close);
            }
        }

        public override void OnClose()
        {
            _shinyAnimation.Stop();
            _animator.enabled = false;
        }
    }
}