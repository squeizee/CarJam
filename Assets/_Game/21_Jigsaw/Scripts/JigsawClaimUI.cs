using System;
using _Game._0_CraftCore.Scripts.Core;
using _Game._1_Effects.Scripts;
using _Game._21_Jigsaw.Scripts;
using _Game.Systems.GameFlow.Scripts.UI;
using DG.Tweening;
using Library.ScreenManagement.Scripts;
using Library.ScreenManagement.Scripts.Animation;
using Modules.TweenPresets;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.UI;

namespace _Game._3_GamePlay
{
    public class JigsawClaimUIArgs : BaseScreenArgs
    {
        public JigsawPieceView JigsawPieceView;
        public Action OnClaimed;
        public bool IsCompleted;
    }

    public class JigsawClaimUI : BaseScreen<JigsawClaimUIArgs>
    {
        [SerializeField] private JigsawView _jigsawView;
        [SerializeField] private Button _nextButton;
        private Sequence _sequence;

        [Button]
        public void TestOpen()
        {
            Craft.OpenUI<JigsawClaimUI>(new JigsawClaimUIArgs()
            {
                JigsawPieceView = null,
                OnClaimed = null,
                IsCompleted = true
            });
        }

        public override BaseScreenAnimationCommand GetAnimationCommand()
        {
            return new InstantScreenAnimationCommand();
        }

        public override void OnSetup()
        {
            _jigsawView.Init(Craft.Get<JigsawSystem>().GetActiveJigsawData());
            _jigsawView.Setup();
            _nextButton.transform.localScale = Vector3.zero;
            var piece = GetArgs().JigsawPieceView;

            _sequence?.Kill();
            _sequence = DOTween.Sequence();

            if (piece == null)
            {
                _sequence.Append(_jigsawView.TestClaim());
            }
            else
            {
                _sequence.Append(_jigsawView.Claim(piece, GetArgs().IsCompleted));
            }

            if (GetArgs().IsCompleted)
            {
                _sequence.AppendCallback((() => { Craft.Get<EffectsSystem>().ConfettiView.Play(); }));
            }

            _sequence.Append(_nextButton.transform.DOScale(Vector3.one, 0.5f).SetEase(Ease.OutBack));
        }

        public override void OnClose()
        {
            _jigsawView.Hide();
        }

        public void OnNextButtonDown()
        {
            if (GetArgs().IsCompleted)
            {
                _sequence?.Kill();
                _sequence = DOTween.Sequence();

                NormalLevelUI normalLevelUI = Craft.GetUI<NormalLevelUI>();
                JigsawCollectionButton jigsawCollectionButton = normalLevelUI.GetJigsawCollectionButton();
                Vector3 worldPosition = jigsawCollectionButton.transform.position;
                _sequence.Append(_jigsawView.transform.DOMove(worldPosition, 0.3f));
                _sequence.Join(_jigsawView.transform.DOScale(Vector3.one * 5f, 0.3f));
                _sequence.Join(_nextButton.transform.DOScale(Vector3.zero, 0.2f));
                _sequence.AppendInterval(0.1f);
                _sequence.Join(jigsawCollectionButton.transform.DoSqueezeScale());
                _sequence.AppendCallback((() =>
                {
                    Craft.Get<EffectsSystem>().ConfettiView.Stop();
                    Close();
                    GetArgs().OnClaimed?.Invoke();
                }));
            }
            else
            {
                Close();
                GetArgs().OnClaimed?.Invoke();
            }
        }
    }
}