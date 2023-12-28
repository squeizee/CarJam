using _Game._0_CraftCore.Scripts.Core;
using _Game._3_GamePlay;
using UnityEngine;

namespace _Game._21_Jigsaw.Scripts
{
    public class JigsawCollectionButton : MonoBehaviour
    {
        public void OnButtonDown()
        {
            Craft.OpenUI<JigsawCollectionUI>(new JigsawCollectionUIArgs() { });
        }

        public void UpdateActivity()
        {
            bool shouldShow = Craft.Get<JigsawSystem>().ShouldDisplayLevelButton();
            gameObject.SetActive(shouldShow);
        }
    }
}