using DG.Tweening;
using UnityEngine;

namespace _Game._21_TutorialHand.Scripts
{
    public class TutorialHandView : MonoBehaviour
    {
        private Sequence _sequence;

        public void Hide()
        {
            _sequence?.Kill();
            gameObject.SetActive(false);
            transform.localScale = Vector3.one;
        }

        public void Show(Vector3 position)
        {
            var so = TutorialHandSo.Instance;

            _sequence?.Kill();
            _sequence = DOTween.Sequence();

            _sequence.AppendCallback((() =>
            {
                gameObject.SetActive(true);
                transform.position = position;
            }));
            _sequence.Append(DOVirtual
                .Float(0, 1, so.TutorialHandDuration,
                    f =>
                    {
                        transform.localScale = Vector3.one * so.TutorialHandScale * so.TutorialHandCurve.Evaluate(f);
                    }).SetEase(Ease.Linear).SetLoops(100));
        }
    }
}