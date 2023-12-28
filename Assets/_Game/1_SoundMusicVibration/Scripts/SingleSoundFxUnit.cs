using System.Collections.Generic;
using _Game._0_CraftCore.Scripts.Core;
using _Game.Systems._CraftCore;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Modules.VFX.Scripts
{
    public class SingleSoundFxUnit : MonoBehaviour
    {
        [SerializeField] private AudioSource _soundPlayer;
        [SerializeField] private AudioClip _audioClip;
        [SerializeField] private float _pitch = 1;
        [SerializeField] private float _volume = 1;

        [SerializeField] private bool _isLoop;
        public float MinInterval = 0;
        private float lastPlayTime = 0;


        [Button]
        public void Play()
        {
            if (Craft.Get<CraftSoundSystem>().IsOn == false)
            {
                return;
            }

            float curTime = Time.time;
            if (curTime >= MinInterval + lastPlayTime)
            {
                _soundPlayer.pitch = _pitch;
                _soundPlayer.volume = _volume;
                _soundPlayer.clip = _audioClip;
                _soundPlayer.loop = _isLoop;
                _soundPlayer.Play();
                lastPlayTime = curTime;
            }
        }


        public void Stop()
        {
            _soundPlayer.Stop();
        }

        public void PlayWithDelay(float delay)
        {
            DOVirtual.DelayedCall(delay, (() => { Play(); }));
        }
    }
}