using UnityEngine;

namespace _Game._21_Jigsaw.Scripts
{
    [CreateAssetMenu(fileName = "JigsawPieceDataSo", menuName = "Craft/Jigsaw/JigsawPieceDataSo")]
    public class JigsawPieceDataSo : ScriptableObject
    {
        public int Id;
        public Sprite Sprite;
        public Vector3 Position;
    }
}