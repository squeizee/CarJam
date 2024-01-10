using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class EnvironmentController : MonoBehaviour
    {
        [SerializeField] private Transform _topTransform;
        [SerializeField] private Transform _bottomTransform;
        [SerializeField] private Transform _leftTransform;
        [SerializeField] private Transform _rightTransform;


        public void Initialize(GridController gridController)
        {
            var rect = gridController.GetRect();
            _topTransform.localPosition = new Vector3(0, 0, rect.yMax + 1);
            _bottomTransform.localPosition = new Vector3(0, 0, rect.yMin);
            _leftTransform.localPosition = new Vector3(rect.xMin, 0, 0);
            _rightTransform.localPosition = new Vector3(rect.xMax + 1, 0, rect.yMax - 1);
        }
    }
}