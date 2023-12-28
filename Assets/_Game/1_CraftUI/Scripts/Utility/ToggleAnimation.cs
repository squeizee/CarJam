using DG.Tweening;
using Library.Utility.Scripts.ExtensionMethods;
using UnityEngine;
using UnityEngine.UI;

namespace Library.Utility.Scripts.UI
{
    [RequireComponent(typeof(Toggle))]
    public class ToggleAnimation : MonoBehaviour
    {
        [SerializeField] private Image _onBg;
        [SerializeField] private Image _onHandle;
        [SerializeField] private RectTransform _handle;
        [SerializeField] private RectTransform _onHandlePoint;
        [SerializeField] private RectTransform _offHandlePoint;
        
        private Toggle _toggle;
        private Toggle Toggle
        {
            get
            {
                if (_toggle != null)
                {
                    return _toggle;
                }

                _toggle = GetComponent<Toggle>();
                return _toggle;
            }
        }

        private Sequence _sequence;

        private void Start()
        {
            Toggle.onValueChanged.AddListener(OnToggleValueChanged);
            if (Toggle.isOn)
            {
                PlayOnAnimation(false);
            }
            else
            {
                PlayOffAnimation(false);
            }
        }

        private void OnDestroy()
        {
            Toggle.onValueChanged.RemoveListener(OnToggleValueChanged);
        }

        private void PlayOnAnimation(bool withAnim = true)
        {
            if (withAnim)
            {
                if(_sequence != null) _sequence.Complete();
                
                _sequence = DOTween.Sequence();
                _sequence.Append(_onHandle.DOFade(1f, 0.15f));
                _sequence.Join(_onBg.DOFade(1f, 0.15f));
                _sequence.Join(_handle.DOAnchorPos(_onHandlePoint.anchoredPosition, 0.2f).SetEase(Ease.OutBack, 3f));
            }
            else
            {
                _onHandle.SetAlpha(1f);
                _onBg.SetAlpha(1f);
                _handle.anchoredPosition = _onHandlePoint.anchoredPosition;
            }
        }

        private void PlayOffAnimation(bool withAnim = true)
        {
            if (withAnim)
            {
                if(_sequence != null) _sequence.Complete();

                _sequence = DOTween.Sequence();
                _sequence.Append(_onHandle.DOFade(0f, 0.15f));
                _sequence.Join(_onBg.DOFade(0f, 0.15f));
                _sequence.Join(_handle.DOAnchorPos(_offHandlePoint.anchoredPosition, 0.2f).SetEase(Ease.OutBack, 3f));   
            }
            else
            {
                _onHandle.SetAlpha(0f);
                _onBg.SetAlpha(0f);
                _handle.anchoredPosition = _offHandlePoint.anchoredPosition;
            }
        }

        private void OnToggleValueChanged(bool value)
        {
            if (value)
            {
                PlayOnAnimation();
            }
            else
            {
                PlayOffAnimation();
            }
        }
    }
}