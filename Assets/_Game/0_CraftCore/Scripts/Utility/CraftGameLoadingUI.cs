using System;
using _Game.Systems._CoreSystem.Scripts;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;

namespace _Game._0_CraftCore.Scripts.Utility
{
    public class CraftGameLoadingUI : MonoBehaviour
    {
        [SerializeField] private GameObject _loadingCanvas;
        [SerializeField] private RectTransform _loadingBar;
        [SerializeField] private float _loadingBarDuration = 1f;
        [SerializeField] private float _loadingBarLenght = 1f;
        [SerializeField] private AnimationCurve _curve;
        private Tween _loadingBarTween;

        [Button]
        public void Awake()
        {
            _loadingCanvas.SetActive(true);
            CraftCore.Dispatcher.Subscribe(CoreEventId.GameStarted, OnCraftCoreInitialized);
        }

        public void Start()
        {
            _loadingBar.sizeDelta = new Vector2(0, _loadingBar.sizeDelta.y);
            _loadingBarTween?.Kill();
            _loadingBarTween = DOVirtual.Float(0, 1, _loadingBarDuration,
                value =>
                {
                    _loadingBar.sizeDelta =
                        new Vector2(_loadingBarLenght * _curve.Evaluate(value), _loadingBar.sizeDelta.y);
                });
        }

        private void OnCraftCoreInitialized()
        {
            CraftCore.Dispatcher.Unsubscribe(CoreEventId.GameStarted, OnCraftCoreInitialized);
            _loadingCanvas.SetActive(false);
            _loadingBarTween.Kill();
        }
    }
}