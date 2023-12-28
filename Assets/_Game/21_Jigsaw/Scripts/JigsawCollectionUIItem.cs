using System.Collections.Generic;
using _Game._0_CraftCore.Scripts.Core;
using _Game._3_GamePlay;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace _Game._21_Jigsaw.Scripts
{
    public class JigsawCollectionUIItem : MonoBehaviour
    {
        [SerializeField] private List<JigsawCollectionUIItemPiece> _jigsawPieceViews;
        [SerializeField] private SingleJigsawData _data;
        [SerializeField] private Image _mainImage;
        [SerializeField] private Transform _lockTransform;
        [SerializeField] private Transform _claimedContainer;
        [SerializeField] private TMP_Text _levelText;

        [Button]
        public void FillItAll()
        {
            _mainImage.sprite = _data.MainSprite;
            for (int i = 0; i < _jigsawPieceViews.Count; i++)
            {
                if (i >= _data.JigsawPieceDatas.Count)
                {
                    _jigsawPieceViews[i].SetActive(false);
                    continue;
                }

                _jigsawPieceViews[i].SetActive(true);
                _jigsawPieceViews[i].Data = _data.JigsawPieceDatas[i];
                _jigsawPieceViews[i].UpdateData();
            }
        }

        [Button]
        public void SaveLocations()
        {
            foreach (JigsawCollectionUIItemPiece pieceView in _jigsawPieceViews)
            {
                if (pieceView.gameObject.activeSelf)
                {
                    pieceView.Data.Position = pieceView.transform.GetComponent<RectTransform>().anchoredPosition;
#if UNITY_EDITOR
                    UnityEditor.EditorUtility.SetDirty(pieceView.Data);
                    UnityEditor.AssetDatabase.SaveAssetIfDirty(pieceView.Data);
#endif
                }
            }
        }


        public void LoadCompleted(SingleJigsawData data)
        {
            _data = data;
            _mainImage.sprite = _data.MainSprite;
            _mainImage.gameObject.SetActive(true);
            _claimedContainer.gameObject.SetActive(true);
            _lockTransform.gameObject.SetActive(false);

            foreach (JigsawCollectionUIItemPiece jigsawPieceView in _jigsawPieceViews)
            {
                jigsawPieceView.gameObject.SetActive(false);
            }
        }

        public void LoadNotStarted(SingleJigsawData data)
        {
            _data = data;
            _mainImage.gameObject.SetActive(false);
            _lockTransform.gameObject.SetActive(true);
            _levelText.text = "Level " + _data.UnlockLevel;
            _claimedContainer.gameObject.SetActive(false);
            foreach (JigsawCollectionUIItemPiece jigsawPieceView in _jigsawPieceViews)
            {
                jigsawPieceView.gameObject.SetActive(false);
            }
        }

        [Button]
        public void LoadOnProgress(SingleJigsawData data)
        {
            _mainImage.gameObject.SetActive(false);
            _lockTransform.gameObject.SetActive(false);
            _claimedContainer.gameObject.SetActive(true);
            _data = data;
            List<int> unlockedJigsawIds = Craft.Get<JigsawSystem>().GetUnlockedJigsawIds();
            for (int i = 0; i < _jigsawPieceViews.Count; i++)
            {
                if (i >= _data.JigsawPieceDatas.Count)
                {
                    _jigsawPieceViews[i].SetActive(false);
                    continue;
                }

                if (!unlockedJigsawIds.Contains(_data.JigsawPieceDatas[i].Id))
                {
                    _jigsawPieceViews[i].SetActive(false);
                    continue;
                }

                _jigsawPieceViews[i].SetActive(true);
                _jigsawPieceViews[i].Data = _data.JigsawPieceDatas[i];
                _jigsawPieceViews[i].UpdateData();
            }
        }
    }
}