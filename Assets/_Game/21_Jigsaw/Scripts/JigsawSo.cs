using System.Collections.Generic;
using Library.ScreenManagement.Scripts;
using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game._3_GamePlay
{
    [CreateAssetMenu(fileName = "JigsawSo", menuName = "Craft/Jigsaw/JigsawSo")]
    public class JigsawSo : ScriptableSingleton<JigsawSo>
    {
        public List<SingleJigsawData> JigsawDatas;
        public List<BaseScreen> Screens;
        public GameObject JigsawCollectionUIItemPrefab;
    }
}