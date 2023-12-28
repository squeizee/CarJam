using System;
using System.Collections.Generic;
using _Game._0_CraftCore.Scripts.Core;
using _Game._1_Ads.Scripts;
using DG.Tweening;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Modules.UI
{
    public class MultiplierPanelUI : MonoBehaviour
    {
        public CanvasGroup CanvasGroup => _canvasGroup;

        [SerializeField] private CanvasGroup _canvasGroup;
        [SerializeField] private RectTransform _indicator;
        [SerializeField] private Button _adButton;
        [SerializeField] private TextMeshProUGUI _claimText;
        [SerializeField] private TextMeshProUGUI _coinText;
        [SerializeField] private List<Transform> _numTexts;
        [SerializeField] private Button _otherButton;
        [SerializeField] private ShinyAnimation _shinyAnimation;
        private int _coinAmount;
        private Action<float> _onMultiplierOccured;
        private Tweener _indicatorMoveTweener;
        private Tween buttonInteractionTween;

        public void Setup(int coinAmount, Action<float> onMultiplierOccured)
        {
            _canvasGroup.alpha = 0;
            _coinAmount = coinAmount;
            _onMultiplierOccured = onMultiplierOccured;
            _adButton.interactable = false;

            _indicatorMoveTweener?.Kill();
            buttonInteractionTween?.Kill();
            _indicator.localEulerAngles = new Vector3(0f, 0f, -27.5f);
            _claimText.text = $"Claim x{GetMultiplyAmount().ToString()}";
            _coinText.text = $"{(_coinAmount * GetMultiplyAmount()).ToString()}";
            foreach (Transform numText in _numTexts)
            {
                numText.transform.localScale = Vector3.one;
            }
        }

        public void Activate()
        {
            _indicatorMoveTweener?.Kill();

            _indicator.localEulerAngles = new Vector3(0f, 0f, -27.5f);
            _indicatorMoveTweener = _indicator.DOLocalRotate(new Vector3(0f, 0f, 27.5f), 1.5f)
                .SetEase(Ease.InOutQuad)
                .SetLoops(-1, LoopType.Yoyo)
                .OnUpdate(() =>
                {
                    _claimText.text = $"Claim x{GetMultiplyAmount().ToString()}";
                    _coinText.text = $"{(_coinAmount * GetMultiplyAmount()).ToString()}";
                    UpdateNumTextScales();
                });
            buttonInteractionTween = DOVirtual.DelayedCall(0.3f, () => { _adButton.interactable = true; });
            _shinyAnimation.Play();
        }


        public void Deactivate()
        {
            _indicatorMoveTweener.Kill();
            buttonInteractionTween.Kill();
            _shinyAnimation.Stop();
        }

        private float GetMultiplyAmount()
        {
            float rotationZ = _indicator.localEulerAngles.z;
            if (rotationZ > 180f)
            {
                rotationZ -= 360f;
            }

            if ((rotationZ >= -27.5f && rotationZ < -20.5f) || (rotationZ <= 27.5f && rotationZ > 20.5f))
            {
                return 2f;
            }

            if ((rotationZ >= -20.5f && rotationZ < -12.5f) || (rotationZ <= 20.5f && rotationZ > 12.5f))
            {
                return 3f;
            }

            if ((rotationZ >= -12.5f && rotationZ < -4f) || (rotationZ <= 12.5f && rotationZ > 4f))
            {
                return 4f;
            }

            if (rotationZ >= -4f && rotationZ <= 4f)
            {
                return 5f;
            }

            return 1f;
        }

        private void UpdateNumTextScales()
        {
            float rotationZ = _indicator.localEulerAngles.z;
            if (rotationZ > 180f)
            {
                rotationZ -= 360f;
            }

            UpdateNumTextScale(-24f, _numTexts[6], rotationZ);
            UpdateNumTextScale(-16f, _numTexts[5], rotationZ);
            UpdateNumTextScale(-8f, _numTexts[4], rotationZ);
            UpdateNumTextScale(0f, _numTexts[3], rotationZ);
            UpdateNumTextScale(8f, _numTexts[2], rotationZ);
            UpdateNumTextScale(16, _numTexts[1], rotationZ);
            UpdateNumTextScale(24f, _numTexts[0], rotationZ);
        }

        private void UpdateNumTextScale(float center, Transform numTransform, float currentAngle)
        {
            float angleCap = 4f;
            float diff = Mathf.Abs(center - currentAngle);
            if (diff > angleCap)
            {
                diff = angleCap;
            }

            float value = (1 - diff / angleCap);
            value = Mathf.Sin(value * Mathf.PI / 2f);
            //value = Mathf.Clamp(value * 3, 0f, 1f);
            float scale = 1 + value / 2;
            numTransform.localScale = new Vector3(scale, scale, scale);
        }

        public void OnWatchAdButtonClicked()
        {
            _adButton.interactable = false;
            _otherButton.interactable = false;
            _indicatorMoveTweener.Pause();
            DOVirtual.DelayedCall(0.4f, () =>
            {
                Craft.Get<AdsSystem>().ShowRewardedAd(isSuccess =>
                {
                    if (isSuccess)
                    {
                        _onMultiplierOccured?.Invoke(GetMultiplyAmount());
                    }
                    else
                    {
                        _indicatorMoveTweener.Play();
                        _adButton.interactable = true;
                        _otherButton.interactable = true;
                    }
                }, "multiplier");
            });
        }
        public  void SetInteractable(bool interactable)
        {
            _adButton.interactable = interactable;
        }
        public Transform GetButtonTransform()
        {
            return _adButton.transform;
        }
    }
}