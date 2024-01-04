using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class VehicleView : MonoBehaviour
    {
        [SerializeField] private Transform _viewTransform;

        public void Initialize(GameElement.GameElementDirection gameElementDirection)
        {
            switch (gameElementDirection)
            {
                case GameElement.GameElementDirection.Up:
                    _viewTransform.localPosition = VehicleSo.Instance.UpDirectionViewTransformData.Position;
                    _viewTransform.localScale = VehicleSo.Instance.UpDirectionViewTransformData.LocalScale;
                    break;
                case GameElement.GameElementDirection.Down:
                    _viewTransform.localPosition = VehicleSo.Instance.DownDirectionViewTransformData.Position;
                    _viewTransform.localScale = VehicleSo.Instance.DownDirectionViewTransformData.LocalScale;
                    break;
                case GameElement.GameElementDirection.Left:
                    _viewTransform.localPosition = VehicleSo.Instance.LeftDirectionViewTransformData.Position;
                    _viewTransform.localScale = VehicleSo.Instance.LeftDirectionViewTransformData.LocalScale;
                    break;
                case GameElement.GameElementDirection.Right:
                    _viewTransform.localPosition = VehicleSo.Instance.RightDirectionViewTransformData.Position;
                    _viewTransform.localScale = VehicleSo.Instance.RightDirectionViewTransformData.LocalScale;
                    break;
            }
        }
    }
}