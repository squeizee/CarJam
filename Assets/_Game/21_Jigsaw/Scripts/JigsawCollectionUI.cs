using System.Collections.Generic;
using _Game._0_CraftCore.Scripts.Core;
using _Game._3_GamePlay;
using Library.ScreenManagement.Scripts;
using Library.ScreenManagement.Scripts.Animation;
using UnityEngine;
using UnityEngine.UI;

namespace _Game._21_Jigsaw.Scripts
{
    public class JigsawCollectionUIArgs : BaseScreenArgs
    {
    }

    public class JigsawCollectionUI : BaseScreen<JigsawCollectionUIArgs>
    {
        public List<JigsawCollectionUIItem> JigsawCollectionUIItems;
        [SerializeField] private RectTransform _container;
        [SerializeField] private ScrollRect _scrollRect;

        public override BaseScreenAnimationCommand GetAnimationCommand()
        {
            return new InstantScreenAnimationCommand();
        }


        public override void OnOpen()
        {
            Craft.Get(out JigsawSystem jigsawSystem);
            int totalImageCount = JigsawSo.Instance.JigsawDatas.Count;
            int unlockedIndex = jigsawSystem.ProgressData.Value.Progress - 1;
            while (JigsawCollectionUIItems.Count < totalImageCount)
            {
                var jigsawCollectionUIItem = Instantiate(JigsawSo.Instance.JigsawCollectionUIItemPrefab, _container);
                JigsawCollectionUIItems.Add(jigsawCollectionUIItem.GetComponent<JigsawCollectionUIItem>());
            }
            
            for (int i = 0; i < totalImageCount; i++)
            {
                if (unlockedIndex > i)
                {
                    JigsawCollectionUIItems[i].LoadCompleted(JigsawSo.Instance.JigsawDatas[i]);
                }
                else if (unlockedIndex == i)
                {
                    if (jigsawSystem.GetUnlockedJigsawIds().Count == 0)
                    {
                        JigsawCollectionUIItems[i].LoadNotStarted(JigsawSo.Instance.JigsawDatas[i]);
                    }
                    else
                    {
                        JigsawCollectionUIItems[i].LoadOnProgress(JigsawSo.Instance.JigsawDatas[i]);
                    }
                }
                else
                {
                    JigsawCollectionUIItems[i].LoadNotStarted(JigsawSo.Instance.JigsawDatas[i]);
                }
            }

            _container.anchoredPosition = Vector2.zero;
        }

        public override void OnClose()
        {
        }

        public void OnCloseButtonDown()
        {
            Close();
        }
    }
}