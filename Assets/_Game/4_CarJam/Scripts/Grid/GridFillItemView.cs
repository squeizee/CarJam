using Sirenix.OdinInspector;
using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class GridFillItemView : MonoBehaviour
    {
        [SerializeField] private Transform _topLeft;
        [SerializeField] private Transform _top;
        [SerializeField] private Transform _topRight;
        [SerializeField] private Transform _right;
        [SerializeField] private Transform _bottomRight;
        [SerializeField] private Transform _bottom;
        [SerializeField] private Transform _bottomLeft;
        [SerializeField] private Transform _left;

        [Button]
        public void Initialize(bool isTopLeft, bool isTop, bool isTopRight, bool isRight, bool isBottomRight,
            bool isBottom, bool isBottomLeft, bool isLeft)
        {
            _topLeft.gameObject.SetActive(isTopLeft && isTop && isLeft);
            _top.gameObject.SetActive(isTop);
            _topRight.gameObject.SetActive(isTopRight && isTop && isRight);
            _right.gameObject.SetActive(isRight);
            _bottomRight.gameObject.SetActive(isBottomRight && isBottom && isRight);
            _bottom.gameObject.SetActive(isBottom);
            _bottomLeft.gameObject.SetActive(isBottomLeft && isBottom && isLeft);
            _left.gameObject.SetActive(isLeft);
        }
    }
}