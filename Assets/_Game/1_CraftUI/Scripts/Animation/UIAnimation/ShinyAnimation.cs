using System.Collections;
using System.Collections.Generic;
using Coffee.UIExtensions;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;

public class ShinyAnimation : MonoBehaviour
{
    [SerializeField] private Transform _transform;
    [SerializeField] private ShinyEffectForUGUI _shinyEffectForUgui;
    private Sequence _sequence;

    public float waitDuration;
    public float popDuration;
    public float maxScale = 1.1f;

    [Button]
    public void Play()
    {
        _sequence?.Kill();
        _sequence = DOTween.Sequence();
        _transform.localScale = Vector3.one;

        float pos = 0;
        for (int i = 0; i < 40; i++)
        {
            _sequence.Insert(pos, _transform.DOScale(maxScale, popDuration / 2).SetEase(Ease.InOutSine));
            _sequence.Insert(pos + popDuration / 2, _transform.DOScale(1f, popDuration / 2).SetEase(Ease.InOutSine));
            _sequence.InsertCallback(pos, () => _shinyEffectForUgui.Play(popDuration));
            pos += waitDuration;
        }
    }

    public void Stop()
    {
        _sequence?.Kill();
    }
}