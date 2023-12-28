using System;
using _Game._3_GamePlay;
using DG.Tweening;
using Library.ScreenManagement.Scripts;
using Library.ScreenManagement.Scripts.Animation;
using UnityEngine;
using UnityEngine.UI;

namespace _Game._9_Marketplace.Scripts
{
    public class MarketPlaceOfferUIArgs : BaseScreenArgs
    {
        public int SkinIndex = -1;
        public int EnvironmentIndex = -1;
        public int SpatulaIndex = -1;
        public Action OnAccept;
        public Action OnDecline;
    }

    public class MarketPlaceOfferUI : BaseScreen<MarketPlaceOfferUIArgs>
    {
        [SerializeField] private Transform _multipleItemsTransform;
        [SerializeField] private Transform _singleItemTransform;
        [SerializeField] private Transform _doubleItemTransform;
        [SerializeField] private Image _skinImage;
        [SerializeField] private Image _environmentImage;
        [SerializeField] private Image _spatulaImage;
        [SerializeField] private Image _singleSpatulaImage;
        [SerializeField] private Image _skinImageDouble;
        [SerializeField] private Image _environmentImageDouble;


        [SerializeField] private Transform _godRayTransform;
        private Sequence _sequence;

        public override BaseScreenAnimationCommand GetAnimationCommand()
        {
            return new SlowPopupAnimationCommand();
        }

        public override void OnSetup()
        {
            int itemCount = 0;
            if (GetArgs().SkinIndex != -1)
            {
                itemCount++;
            }

            if (GetArgs().EnvironmentIndex != -1)
            {
                itemCount++;
            }

            if (GetArgs().SpatulaIndex != -1)
            {
                itemCount++;
            }

            _singleItemTransform.gameObject.SetActive(itemCount == 1);
            _doubleItemTransform.gameObject.SetActive(itemCount == 2);
            _multipleItemsTransform.gameObject.SetActive(itemCount == 3);

            var so = MarketPlaceSo.Instance;
            if (itemCount == 1)
            {
                _singleSpatulaImage.sprite = so.SpatulaItemDatas[GetArgs().SpatulaIndex - 1].Sprite;
            }
            else if (itemCount == 2)
            {
                _skinImageDouble.sprite = so.SkinItemDatas[GetArgs().SkinIndex - 1].Sprite;
                _environmentImageDouble.sprite = so.EnvironmentItemDatas[GetArgs().EnvironmentIndex - 1].Sprite;
            }
            else if (itemCount == 3)
            {
                _spatulaImage.sprite = so.SpatulaItemDatas[GetArgs().SpatulaIndex - 1].Sprite;
                _skinImage.sprite = so.SkinItemDatas[GetArgs().SkinIndex - 1].Sprite;
                _environmentImage.sprite = so.EnvironmentItemDatas[GetArgs().EnvironmentIndex - 1].Sprite;
            }

            _godRayTransform.localRotation = Quaternion.Euler(0, 0, 0);

            _sequence?.Kill();
            _sequence = DOTween.Sequence();
            _sequence.Insert(0, _godRayTransform.DORotate(new Vector3(0, 0, 30), 1.5f, RotateMode.LocalAxisAdd)
                .SetEase(Ease.Linear).SetLoops(100, LoopType.Restart));
        }

        public override void OnClose()
        {
            _sequence?.Kill();
        }

        public void OnCloseButtonPressed()
        {
            Close();
            GetArgs().OnDecline?.Invoke();
        }

        public void OnAcceptButtonPressed()
        {
            Close();
            GetArgs().OnAccept?.Invoke();
        }
    }
}