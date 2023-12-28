using System.Collections.Generic;
using _Game._21_Jigsaw.Scripts;
using _Game.Library.PersistentDataNS.Scripts;
using _Game.Systems._CoreSystem.Scripts;
using Library.ScreenManagement.Scripts;
using UnityEngine;

namespace _Game._3_GamePlay
{
    public class JigsawSystem : BaseCraftSystem, ICraftSystem
    {
        public PersistentData<JigsawProgressData> ProgressData =
            new PersistentData<JigsawProgressData>($"{nameof(JigsawSystem)}_{nameof(JigsawProgressData)}",
                new JigsawProgressData());

        public SingleJigsawData GetActiveJigsawData()
        {
            int progress = ProgressData.Value.Progress;
            if (progress > JigsawSo.Instance.JigsawDatas.Count)
            {
                progress = JigsawSo.Instance.JigsawDatas.Count;
            }

            return JigsawSo.Instance.JigsawDatas[progress - 1];
        }

        public List<JigsawPieceDataSo> GetActiveJigsawPieceData()
        {
            var currentJigsawData = GetActiveJigsawData();
            var activeJigsawPieceData = new List<JigsawPieceDataSo>();
            foreach (var jigsawPieceData in currentJigsawData.JigsawPieceDatas)
            {
                if (ProgressData.Value.UnlockedJigsawIds.Contains(jigsawPieceData.Id))
                {
                    activeJigsawPieceData.Add(jigsawPieceData);
                }
            }

            return activeJigsawPieceData;
        }

        public bool IsCurrentJigsawCompleted()
        {
            int index = Mathf.Clamp(ProgressData.Value.Progress - 1, 0, JigsawSo.Instance.JigsawDatas.Count - 1);

            var currentJigsawData = JigsawSo.Instance.JigsawDatas[index];
            var activeJigsawPieceData = GetActiveJigsawPieceData();
            return activeJigsawPieceData.Count >= currentJigsawData.JigsawPieceDatas.Count;
        }

        public void UnlockJigsawPiece(int id)
        {
            if (ProgressData.Value.UnlockedJigsawIds.Contains(id) == false)
            {
                ProgressData.Value.UnlockedJigsawIds.Add(id);
            }

            UnlockNextJigsawIfCompleted();
            ProgressData.Save();
        }

        public void UnlockNextJigsawIfCompleted()
        {
            if (IsCurrentJigsawCompleted())
            {
                ProgressData.Value.Progress++;
                ProgressData.Value.UnlockedJigsawIds.Clear();
            }
        }

        public bool WillItBeCompletedAfterClaimOne()
        {
            int index = Mathf.Clamp(ProgressData.Value.Progress - 1, 0, JigsawSo.Instance.JigsawDatas.Count - 1);

            var currentJigsawData = JigsawSo.Instance.JigsawDatas[index];
            var activeJigsawPieceData = GetActiveJigsawPieceData();
            return activeJigsawPieceData.Count >= currentJigsawData.JigsawPieceDatas.Count - 1;
        }

        public List<int> GetUnlockedJigsawIds()
        {
            return ProgressData.Value.UnlockedJigsawIds;
        }

        public List<BaseScreen> GetScreens()
        {
            return JigsawSo.Instance.Screens;
        }

        public bool ShouldDisplayLevelButton()
        {
            return ProgressData.Value.Progress > 1 || ProgressData.Value.UnlockedJigsawIds.Count > 0;
        }
    }
}