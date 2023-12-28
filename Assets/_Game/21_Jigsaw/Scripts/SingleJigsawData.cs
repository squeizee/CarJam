using System.Collections.Generic;
using _Game._21_Jigsaw.Scripts;
using Sirenix.OdinInspector;
using UnityEngine;

namespace _Game._3_GamePlay
{
    [CreateAssetMenu(fileName = "SingleJigsawData", menuName = "Craft/Jigsaw/SingleJigsawData")]
    public class SingleJigsawData : ScriptableObject
    {
        public string Name;
        public int Id;
        public Sprite MainSprite;
        public List<JigsawPieceDataSo> JigsawPieceDatas;
        public int UnlockLevel;
        [Button]
        public void CreateJigsawPieceDatas(int count)
        {
            JigsawPieceDatas = new List<JigsawPieceDataSo>();
            for (int i = 0; i < count; i++)
            {
                // create JigsawPieceDataSo object in resources folder for each jigsaw piece

                var jigsawPieceDataSo = ScriptableObject.CreateInstance<JigsawPieceDataSo>();
                jigsawPieceDataSo.Id = i;
                jigsawPieceDataSo.Sprite = null;
                jigsawPieceDataSo.Position = Vector3.zero;
                JigsawPieceDatas.Add(jigsawPieceDataSo);

#if UNITY_EDITOR
                // define the path where the asset should be created

                // create asset in resources folder
                UnityEditor.AssetDatabase.CreateAsset(jigsawPieceDataSo,
                    $"Assets/_Game/21_Jigsaw/Resources/JigsawPieceDataSo/JigsawPieceDataSo_{Id}_{i}.asset");
                UnityEditor.AssetDatabase.SaveAssets();
                UnityEditor.AssetDatabase.Refresh();
#endif
            }
        }
    }
}