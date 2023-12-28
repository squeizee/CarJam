using System;
using _Game._0_CraftCore.Scripts.Core;
using _Game._1_Ads.Scripts;
using _Game._3_GamePlay.Scripts;
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
    public class BossLevelFailUIArgs : BaseScreenArgs
    {
        public FailReason FailReason;
        public Action OnExitButtonDown;
        public Action OnReviveButtonDown;
        public LinearLevelType LinearLevelType;
    }

    public class BossLevelFailUI : BaseScreen<BossLevelFailUIArgs>
    {
        [SerializeField] private TMP_Text _failReasonText;
        [SerializeField] private Image _backgroundImage;

        [SerializeField] private RiseAndFadeInTMP_Text _bossLevelText;
        [SerializeField] private RiseAndFadeInCanvasGroup _centerCanvasGroup;
        [SerializeField] private RiseAndFadeInCanvasGroup _playButtonCanvasGroup;
        [SerializeField] private RiseAndFadeInTMP_Text _noThanksButtonText;
        [SerializeField] private Button _nextButton;
        [SerializeField] private Button _noThanksButton;
        [SerializeField] private Animator _animator;
        [SerializeField] private ShinyAnimation _shinyButtonAnimation;
        [SerializeField] private Transform _reviveTransform;
        [SerializeField] private Transform _spatulaTransform;
        [SerializeField] private TMP_Text _spatulaCountText;

        private Sequence _sequence;

        public override BaseScreenAnimationCommand GetAnimationCommand()
        {
            return new InstantEnterFadeOutAnimationCommand();
        }

        public override void OnSetup()
        {
            if (GetArgs().FailReason == FailReason.OutOfMoves)
            {
                _failReasonText.text = "Out of moves";
            }
            else if (GetArgs().FailReason == FailReason.OutOfTime)
            {
                _failReasonText.text = "Out of time";
            }
            else if (GetArgs().FailReason == FailReason.WrongMove)
            {
                _failReasonText.text = "Level Failed";
            }
            else if (GetArgs().FailReason == FailReason.OutOfSpatula)
            {
                _failReasonText.text = "Out of Spatula";
                _spatulaCountText.text = "+" + LinearLevelSo.Instance.BossLevelConfig.AdditionalSpatula.ToString();
            }
            else
            {
                _failReasonText.text = "Level Failed";
            }

            _reviveTransform.gameObject.SetActive(GetArgs().FailReason != FailReason.OutOfSpatula);
            _spatulaTransform.gameObject.SetActive(GetArgs().FailReason == FailReason.OutOfSpatula);

            var so = LevelUIAnimationsSo.Instance;
            _animator.enabled = true;

            _nextButton.interactable = false;
            _noThanksButton.interactable = false;

            Background.SetAlpha(so.InitialBGAlpa);

            _bossLevelText.RiseAmount = so.AmazingTextRiseAmount;
            _bossLevelText.Initialize();

            _centerCanvasGroup.RiseAmount = so.EmojiRiseAmount;
            _centerCanvasGroup.Initialize();

            _playButtonCanvasGroup.RiseAmount = so.PlayButtonRiseAmount;
            _playButtonCanvasGroup.Initialize();

            _noThanksButtonText.RiseAmount = so.PlayButtonRiseAmount;
            _noThanksButtonText.Initialize();

            _sequence?.Kill();
            _sequence = DOTween.Sequence();
            _sequence.Insert(0, _backgroundImage.DOFade(1, 0.2f));
            //    _sequence.Insert(0.2f, _bossLevelText.MoveToPosAndRiseUp());

            _sequence.Insert(0, Background.DOFade(1, so.FadeDuration));
            _sequence.Insert(so.AmazingTextEnterTime, _bossLevelText.PlayAnimation(so.AmazingTextEnterDuration));
            _sequence.Insert(so.EmojiEnterTime, _centerCanvasGroup.PlayAnimation(so.EmojiEnterDuration));
            _sequence.Insert(so.PlayButtonEnterTime, _playButtonCanvasGroup.PlayAnimation(so.PlayButtonEnterDuration));
            _sequence.InsertCallback(so.PlayButtonEnterTime + so.PlayButtonEnterDuration,
                (() => { _nextButton.interactable = true; }));
            _sequence.InsertCallback(so.PlayButtonEnterTime + so.PlayButtonEnterDuration,
                (() => { _shinyButtonAnimation.Play(); }));

            _sequence.Insert(so.PlayButtonEnterTime + 0.3f,
                _noThanksButtonText.PlayAnimation(so.PlayButtonEnterDuration));
            _sequence.InsertCallback(so.PlayButtonEnterTime + so.PlayButtonEnterDuration + 0.3f,
                (() => { _noThanksButton.interactable = true; }));
        }

        public override void OnClose()
        {
            _sequence?.Kill();
            _animator.enabled = false;
            _shinyButtonAnimation.Stop();
        }

        public void OnExitButtonDown()
        {
            _nextButton.interactable = false;
            _noThanksButton.interactable = false;

            GetArgs().OnExitButtonDown?.Invoke();
        }

        public void OnReviveButtonDown()
        {
            _nextButton.interactable = false;
            _noThanksButton.interactable = false;

            Craft.Get<AdsSystem>().ShowRewardedAd(isSuccess =>
            {
                if (isSuccess)
                {
                    GetArgs().OnReviveButtonDown?.Invoke();
                }
                else
                {
                    _nextButton.interactable = true;
                    _noThanksButton.interactable = true;
                }
            }, "Revive" + GetArgs().LinearLevelType.ToString());
        }
    }
}