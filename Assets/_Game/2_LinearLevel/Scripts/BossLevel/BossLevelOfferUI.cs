using DG.Tweening;
using Library.ScreenManagement.Scripts;
using Library.ScreenManagement.Scripts.Animation;
using Library.ScreenManagement.Scripts.Animation.UIAnimation;
using Library.Utility.Scripts.ExtensionMethods;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace _Game._2_LinearLevel.Scripts.BossLevel
{
    public class BossLevelOfferUIArgs : OfferScreenArgs
    {
        public int Reward;
    }

    public class BossLevelOfferUI : BaseScreen<BossLevelOfferUIArgs>
    {
        [SerializeField] private TMP_Text _coinReward;
        [SerializeField] private Image _backgroundImage;

        [SerializeField] private RiseAndFadeInCanvasGroup _bossLevelText;
        [SerializeField] private RiseAndFadeInCanvasGroup _centerCanvasGroup;
        [SerializeField] private RiseAndFadeInCanvasGroup _playButtonCanvasGroup;
        [SerializeField] private RiseAndFadeInTMP_Text _noThanksButtonText;
        [SerializeField] private RectTransform _godRayTransform;
        [SerializeField] private Button _nextButton;
        [SerializeField] private Button _noThanksButton;
        [SerializeField] private ShinyAnimation _shinyButtonAnimation;
        [SerializeField] private Transform _centerTransform;
        [SerializeField] private ParticleSystem _particleSystem;

        private Sequence _sequence;

        public override BaseScreenAnimationCommand GetAnimationCommand()
        {
            return new InstantEnterFadeOutAnimationCommand();
        }

        public override void OnSetup()
        {
            var so = LevelUIAnimationsSo.Instance;
            _nextButton.interactable = false;
            _noThanksButton.interactable = false;

            _coinReward.text = GetArgs().Reward.ToString();
            Background.SetAlpha(so.InitialBGAlpa);

            _bossLevelText.RiseAmount = so.AmazingTextRiseAmount;
            _bossLevelText.Initialize();

            _centerCanvasGroup.RiseAmount = so.EmojiRiseAmount;
            _centerCanvasGroup.Initialize();

            _playButtonCanvasGroup.RiseAmount = so.PlayButtonRiseAmount;
            _playButtonCanvasGroup.Initialize();

            _noThanksButtonText.RiseAmount = so.PlayButtonRiseAmount;
            _noThanksButtonText.Initialize();
            _godRayTransform.localRotation = Quaternion.Euler(0, 0, 0);

            _centerTransform.localScale = Vector3.one;

            _sequence?.Kill();
            _sequence = DOTween.Sequence();
            _sequence.Insert(0, _godRayTransform.DORotate(new Vector3(0, 0, 30), 1.5f, RotateMode.LocalAxisAdd)
                .SetEase(Ease.Linear).SetLoops(100, LoopType.Restart));
            _sequence.Insert(0, _backgroundImage.DOFade(1, 0.2f));
            //    _sequence.Insert(0.2f, _bossLevelText.MoveToPosAndRiseUp());
            _sequence.Insert(0, Background.DOFade(1, so.FadeDuration));
            _sequence.Insert(so.AmazingTextEnterTime, _bossLevelText.PlayAnimation(so.AmazingTextEnterDuration));
            _sequence.Insert(so.EmojiEnterTime, _centerCanvasGroup.PlayAnimation(so.EmojiEnterDuration));
            _sequence.InsertCallback(so.EmojiEnterTime + so.EmojiEnterDuration / 2, _particleSystem.Play);
            _sequence.Insert(so.EmojiEnterTime + so.EmojiEnterDuration / 2, ScaleImage());
            _sequence.Insert(so.PlayButtonEnterTime, _playButtonCanvasGroup.PlayAnimation(so.PlayButtonEnterDuration));

            _sequence.InsertCallback(so.PlayButtonEnterTime + so.PlayButtonEnterDuration,
                _shinyButtonAnimation.Play);
            _sequence.InsertCallback(so.PlayButtonEnterTime + so.PlayButtonEnterDuration,
                (() => { _nextButton.interactable = true; }));

            _sequence.Insert(so.PlayButtonEnterTime + 0.3f,
                _noThanksButtonText.PlayAnimation(so.PlayButtonEnterDuration));
            _sequence.InsertCallback(so.PlayButtonEnterTime + so.PlayButtonEnterDuration + 0.3f,
                (() => { _noThanksButton.interactable = true; }));
        }

        public Sequence ScaleImage()
        {
            Sequence sequence = DOTween.Sequence();
            for (int i = 0; i < 40; i++)
            {
                sequence.Append(_centerTransform.DOScale(0.95f, 1.2f));
                sequence.Append(_centerTransform.DOScale(1.0f, 1.2f));
            }

            return sequence;
        }

        public override void OnClose()
        {
            _sequence?.Kill();
            _shinyButtonAnimation.Stop();
            _particleSystem.Stop();
            _particleSystem.Clear();
        }


        public void OnOfferAcceptButtonDown()
        {
            GetArgs().OnAccepted?.Invoke();
        }

        public void OnOfferDeclineButtonDown()
        {
            GetArgs().OnDeclined?.Invoke();
        }
    }
}