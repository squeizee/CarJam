using UnityEngine;
using UnityEngine.UI;

namespace Library.ScreenManagement.Scripts
{
    public class UIUtility
    {
        private const int InitialSortingOrder = 20;
        private const int SortingOrderIncreaseAmount = 20;

        public static int GetCalculatedSortingOrder(int sortingOrderIndex)
        {
            return InitialSortingOrder + SortingOrderIncreaseAmount * sortingOrderIndex;
        }

        public static bool IsPrefab(GameObject go)
        {
            return go.scene.name == null;
        }

        public static Vector2 GetAnchorPosOfWorldPos(Vector3 worldPos, Camera mainCamera, CanvasScaler canvasScaler)
        {
            Vector2 viewportPoint = mainCamera.WorldToViewportPoint(worldPos);
            Vector2 anchorPoint = new Vector2(
                canvasScaler.referenceResolution.x * (viewportPoint.x - 0.5f),
                canvasScaler.referenceResolution.y * (viewportPoint.y - 0.5f));
            return anchorPoint;
        }

        public static Vector2 SwitchToRectTransform(RectTransform from, RectTransform to)
        {
            Vector2 localPoint;
            Vector2 fromPivotDerivedOffset = new Vector2(from.rect.width * from.pivot.x + from.rect.xMin,
                from.rect.height * from.pivot.y + from.rect.yMin);
            Vector2 screenP = RectTransformUtility.WorldToScreenPoint(null, from.position);
            screenP += fromPivotDerivedOffset;
            RectTransformUtility.ScreenPointToLocalPointInRectangle(to, screenP, null, out localPoint);
            Vector2 pivotDerivedOffset = new Vector2(to.rect.width * to.pivot.x + to.rect.xMin,
                to.rect.height * to.pivot.y + to.rect.yMin);
            return localPoint - pivotDerivedOffset;
        }

        public static Vector2 ConvertPosToTargetPivotSpace(Vector2 fromAnchoredPos, RectTransform fromPivotSpace,
            RectTransform toPivotSpace)
        {
            Vector2 convertedPos;

            Vector2 fromPivotDerivedOffset =
                new Vector2(fromPivotSpace.rect.width * fromPivotSpace.pivot.x + fromPivotSpace.rect.xMin,
                    fromPivotSpace.rect.height * fromPivotSpace.pivot.y + fromPivotSpace.rect.yMin);

            Vector3 fromWorldSpace = fromPivotSpace.TransformPoint(fromAnchoredPos);
            Vector2 screenP = RectTransformUtility.WorldToScreenPoint(null, fromWorldSpace);
            screenP += fromPivotDerivedOffset;

            RectTransformUtility.ScreenPointToLocalPointInRectangle(toPivotSpace, screenP, null, out convertedPos);
            Vector2 pivotDerivedOffset =
                new Vector2(toPivotSpace.rect.width * toPivotSpace.pivot.x + toPivotSpace.rect.xMin,
                    toPivotSpace.rect.height * toPivotSpace.pivot.y + toPivotSpace.rect.yMin);

            return toPivotSpace.anchoredPosition + convertedPos - pivotDerivedOffset;
        }
    }
}