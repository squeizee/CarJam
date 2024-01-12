using DG.Tweening;
using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class EnvironmentController : MonoBehaviour
    {
        [SerializeField] private Transform _topTransform;
        [SerializeField] private Transform _bottomTransform;
        [SerializeField] private Transform _leftTransform;
        [SerializeField] private Transform _rightTransform;
        [SerializeField] private Transform _barrierTransform;

        private Vector3 _barrierDefaultRotation;
        private Sequence _barrierSequence;
        public void Initialize(GridController gridController)
        {
            var rect = gridController.GetLocalRect();
            _topTransform.localPosition = new Vector3(0, 0, rect.yMax + 1);
            _bottomTransform.localPosition = new Vector3(0, 0, rect.yMin);
            _leftTransform.localPosition = new Vector3(rect.xMin, 0, 0);
            _rightTransform.localPosition = new Vector3(rect.xMax + 1, 0, rect.yMax - 1);
            
            _barrierDefaultRotation = _barrierTransform.rotation.eulerAngles;
        }
        
        public Tween RotateBarrier()
        {
            _barrierSequence?.Kill();
            _barrierSequence = DOTween.Sequence();

            _barrierSequence.Append(_barrierTransform.DORotate(_barrierDefaultRotation + Vector3.right * 60, .75f).SetEase(Ease.OutBack));
            return _barrierSequence.Append(_barrierTransform.DORotate(_barrierDefaultRotation, 1.25f).SetEase(Ease.OutBack).SetDelay(0.35f));
        }
    }
}