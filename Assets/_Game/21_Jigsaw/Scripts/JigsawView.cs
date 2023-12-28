using System.Collections.Generic;
using _Game._0_CraftCore.Scripts.Core;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;

namespace _Game._3_GamePlay
{
    public class JigsawView : MonoBehaviour
    {
        [SerializeField] private Transform _container;
        [SerializeField] private SingleJigsawData _data;
        [SerializeField] private SpriteRenderer _mainImage;
        [SerializeField] private List<JigsawPieceView> _jigsawPieceViews;
        [SerializeField] private Transform _maskTransform;

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
            foreach (JigsawPieceView pieceView in _jigsawPieceViews)
            {
                if (pieceView.gameObject.activeSelf)
                {
                    pieceView.Data.Position = pieceView.transform.localPosition;
#if UNITY_EDITOR
                    UnityEditor.EditorUtility.SetDirty(pieceView.Data);
                    UnityEditor.AssetDatabase.SaveAssetIfDirty(pieceView.Data);
#endif
                }
            }
        }


        [Button]
        public void Init(SingleJigsawData data)
        {
            _data = data;
            _mainImage.sprite = _data.MainSprite;
            List<int> unlockedJigsawIds = Craft.Get<JigsawSystem>().GetUnlockedJigsawIds();
            for (int i = 0; i < _jigsawPieceViews.Count; i++)
            {
                if (i >= _data.JigsawPieceDatas.Count)
                {
                    _jigsawPieceViews[i].SetActive(false);
                    continue;
                }

                // check from progress data if this piece is unlocked
                if (!unlockedJigsawIds.Contains(_data.JigsawPieceDatas[i].Id))
                {
                    _jigsawPieceViews[i].SetActive(false);
                    continue;
                }

                _jigsawPieceViews[i].SetActive(true);
                _jigsawPieceViews[i].Data = _data.JigsawPieceDatas[i];
                _jigsawPieceViews[i].UpdateData();
                _jigsawPieceViews[i].SetGreyScale(0);
            }

            _maskTransform.localScale = new Vector3(1, 0, 1);
        }

        public void Setup()
        {
            transform.localPosition = Vector3.zero;
            transform.localRotation = Quaternion.identity;
            transform.localScale = Vector3.one * 56;
            _container.localScale = Vector3.zero;
            _maskTransform.localScale = new Vector3(1, 0, 1);
            gameObject.SetActive(true);
        }

        public Tween PopIn()
        {
            return _container.DOScale(Vector3.one, 0.5f);
        }

        public void Hide()
        {
            gameObject.SetActive(false);
        }

        public Tween Claim(JigsawPieceView piece, bool isCompleted)
        {
            Sequence sequence = DOTween.Sequence();
            piece.transform.parent = transform;
            float duration = 0.5f;
            sequence.Append(piece.MakeItColorFull(0.4f));
            sequence.AppendInterval(0.15f);
            sequence.Append(piece.transform.DOScale(Vector3.one * 0.5f, duration));
            sequence.Join(piece.transform.DOLocalRotate(Vector3.zero, duration));
            sequence.Join(piece.transform.DOLocalMove(Vector3.up * 10f, duration));

            sequence.AppendInterval(0.2f);
            sequence.Append(PopIn());
            sequence.Append(piece.MoveToJigsawPosition());
            sequence.Join(piece.transform.DOScale(Vector3.one, duration));
            if (isCompleted)
            {
                sequence.Append(_maskTransform.DOScaleY(20, 0.5f));
            }

            return sequence;
        }

        public Tween TestClaim()
        {
            Sequence sequence = DOTween.Sequence();
            float duration = 0.5f;
            sequence.AppendInterval(0.15f);

            sequence.AppendInterval(0.2f);
            sequence.Append(PopIn());

            return sequence;
        }
    }
}