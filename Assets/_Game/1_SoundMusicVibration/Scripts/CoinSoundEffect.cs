using System.Collections.Generic;
using DG.Tweening;
using Modules.VFX.Scripts;
using Sirenix.OdinInspector;
using UnityEngine;

namespace _Game._1_SoundMusicVibration.Scripts
{
    public class CoinSoundEffect : MonoBehaviour
    {
        [SerializeField] SoundFxUnit _soundFxUnit;
        public List<float> _pitchList = new List<float>();
        public List<float> _timeList = new List<float>();
        public float delay = 0.1f;
        private Sequence Sequence;

        [Button]
        public void Play()
        {
            Sequence = DOTween.Sequence();
            for (int i = 0; i < _pitchList.Count; i++)
            {
                int index = i;
                Sequence.InsertCallback(_timeList[index] + delay, () =>
                {
                    _soundFxUnit.SetPitch(_pitchList[index]);
                    _soundFxUnit.Play();
                });
            }
        }
    }
}