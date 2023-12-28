using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.UI;

namespace _Game._21_Jigsaw.Scripts
{
    public class JigsawCollectionUIItemPiece : MonoBehaviour
    {
        public JigsawPieceDataSo Data;
        [SerializeField] private Image _image;

        [Button]
        public void UpdateData()
        {
            _image.sprite = Data.Sprite;
            _image.SetNativeSize();
            transform.localScale = Vector3.one * 0.01f;
            transform.GetComponent<RectTransform>().anchoredPosition = Data.Position;
        }

        public void SetActive(bool b)
        {
            gameObject.SetActive(b);
        }
    }
}