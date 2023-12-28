using System;
using _Game._2_LinearLevel.Scripts;
using DG.Tweening;
using Library.ScreenManagement.Scripts;
using Library.ScreenManagement.Scripts.Animation;
using Library.ScreenManagement.Scripts.Animation.UIAnimation;
using Library.Utility.Scripts.ExtensionMethods;
using Modules.VFX.Scripts;
using UnityEngine;
using UnityEngine.UI;

namespace _Game.Systems.GameFlow.Scripts.UI
{
    public class NormalLevelFailUIArgs : BaseScreenArgs
    {
        public Action OnRetryButtonDown;
    }

    public class NormalLevelFailUI : BaseScreen<NormalLevelFailUIArgs>
    {
        [SerializeField] private Image _backgroundImage;

        [SerializeField] private RiseAndFadeInTMP_Text _failText;
        [SerializeField] private RiseAndFadeInTMP_Text _noRetryButtonText;
        [SerializeField] private RiseAndFadeInCanvasGroup _centerCanvasGroup;
        [SerializeField] private SingleSoundFxUnit _soundFxUnit;

        [SerializeField] private Button _retryButton;

        private Sequence _sequence;
        [SerializeField] private Animator _animator;

        public override void OnSetup()
        {
            var so = LevelUIAnimationsSo.Instance;
            _animator.enabled = true;

            _retryButton.interactable = false;

            Background.SetAlpha(so.InitialBGAlpa);

            _failText.RiseAmount = so.AmazingTextRiseAmount;
            _failText.Initialize();

            _noRetryButtonText.RiseAmount = so.EmojiRiseAmount;
            _noRetryButtonText.Initialize();

            _centerCanvasGroup.RiseAmount = so.PlayButtonRiseAmount;
            _centerCanvasGroup.Initialize();

            _sequence?.Kill();
            _sequence = DOTween.Sequence();
            //   Sequence.InsertCallback(so.WinSoundDelay, _soundFxUnit.Play);
            _sequence.Insert(0, _backgroundImage.DOFade(1, 0.2f));
            //    _sequence.Insert(0.2f, _bossLevelText.MoveToPosAndRiseUp());

            _sequence.Insert(0, Background.DOFade(1, so.FadeDuration));
            _sequence.Insert(so.AmazingTextEnterTime, _failText.PlayAnimation(so.AmazingTextEnterDuration));
            _sequence.Insert(so.EmojiEnterTime, _centerCanvasGroup.PlayAnimation(so.EmojiEnterDuration));
            _sequence.Insert(so.PlayButtonEnterTime, _noRetryButtonText.PlayAnimation(so.PlayButtonEnterDuration));
            _sequence.InsertCallback(so.PlayButtonEnterTime + so.PlayButtonEnterDuration,
                (() => { _retryButton.interactable = true; }));
        }

        public override BaseScreenAnimationCommand GetAnimationCommand()
        {
            return new InstantEnterFadeOutAnimationCommand();
        }

        public override void OnClose()
        {
            _sequence?.Kill();
            _animator.enabled = false;
        }

        public void OnRetryButtonDown()
        {
            Close();
            GetArgs().OnRetryButtonDown?.Invoke();
        }
    }
}