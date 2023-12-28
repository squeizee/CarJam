using _Game._21_Jigsaw.Scripts;
using DG.Tweening;
using Library.Utility.Scripts.ExtensionMethods;
using Sirenix.OdinInspector;
using UnityEngine;

namespace _Game._3_GamePlay
{
    public class JigsawPieceView : MonoBehaviour
    {
        [OnValueChanged(nameof(UpdateData))] public JigsawPieceDataSo Data;
        [SerializeField] private SpriteRenderer _spriteRenderer;
        private static readonly int EffectAmount = Shader.PropertyToID("_EffectAmount");

        public void InitializeForLevel()
        {
            SetGreyScale(1);
            transform.SetLocalPosZ(-0.01f);
        }


        [Button]
        public void UpdateData()
        {
            _spriteRenderer.sprite = Data.Sprite;
            transform.localPosition = Data.Position;
        }

        [Button]
        public void SetGreyScale(float value)
        {
            _spriteRenderer.sharedMaterial.SetFloat(EffectAmount, value);
        }

        public void SetActive(bool b)
        {
            gameObject.SetActive(b);
        }

        public Tween MakeItColorFull(float duration)
        {
            var start = _spriteRenderer.sharedMaterial.GetFloat(EffectAmount);
            return DOVirtual.Float(start, 0, duration, SetGreyScale);
        }

        public Tween MoveToJigsawPosition()
        {
            return transform.DOLocalMove(Data.Position, 0.5f);
        }
    }
}