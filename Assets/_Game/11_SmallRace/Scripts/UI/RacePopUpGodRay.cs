using DG.Tweening;
using UnityEngine;

namespace _Game._11_SmallRace.UI
{
    public class RacePopUpGodRay : MonoBehaviour
    {
        [SerializeField] private RectTransform _godRayTransform;
        [SerializeField] private bool _isAutoStart = true;
        Sequence _sequence;

        public void OnEnable()
        {
            if (_isAutoStart)
            {
                Show();
            }
        }

        public void OnDisable()
        {
            _sequence?.Kill();
        }

        public void Show()
        {
            _godRayTransform.localRotation = Quaternion.Euler(0, 0, 0);

            _sequence?.Kill();
            _sequence = DOTween.Sequence();
            _sequence.Insert(0, _godRayTransform.DORotate(new Vector3(0, 0, 45), 1.5f * 1.5f, RotateMode.LocalAxisAdd)
                .SetEase(Ease.Linear).SetLoops(100, LoopType.Restart));
        }
    }
}