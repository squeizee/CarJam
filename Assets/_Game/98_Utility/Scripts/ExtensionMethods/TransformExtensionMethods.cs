using UnityEngine;

namespace Library.Utility.Scripts.ExtensionMethods
{
    public static class TransformExtensionMethods
    {
        public static void SetPosX(this Transform transform, float posX)
        {
            transform.position = new Vector3(posX, transform.position.y, transform.position.z);
        }

        public static void SetPosY(this Transform transform, float posY)
        {
            transform.position = new Vector3(transform.position.x, posY, transform.position.z);
        }

        public static void SetPosZ(this Transform transform, float posZ)
        {
            transform.localPosition = new Vector3(transform.localPosition.x, transform.localPosition.y, posZ);
        }

        public static void SetLocalPosX(this Transform transform, float posX)
        {
            transform.localPosition = new Vector3(posX, transform.localPosition.y, transform.localPosition.z);
        }

        public static void SetLocalPosY(this Transform transform, float posY)
        {
            transform.localPosition = new Vector3(transform.localPosition.x, posY, transform.localPosition.z);
        }

        public static void SetLocalPosZ(this Transform transform, float posZ)
        {
            transform.localPosition = new Vector3(transform.localPosition.x, transform.localPosition.y, posZ);
        }

        public static void SetAnchorPosX(this RectTransform rectTransform, float posX)
        {
            rectTransform.anchoredPosition = new Vector2(posX, rectTransform.anchoredPosition.y);
        }

        public static void SetAnchorPosY(this RectTransform rectTransform, float posY)
        {
            rectTransform.anchoredPosition = new Vector2(rectTransform.anchoredPosition.x, posY);
        }
    }
}