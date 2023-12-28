using System.Collections.Generic;
using _Game._0_CraftCore.Scripts.Core;
using _Game.Systems._CraftCore;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Modules.VFX.Scripts
{
    public class SoundFxUnit : MonoBehaviour
    {
        [SerializeField] private List<AudioSource> _soundPlayers;
        [SerializeField] private AudioClip _audioClip;
        [SerializeField] private float _pitch = 1;
        [SerializeField] private float _pitchRandomRange = 0;
        [SerializeField] private float _volume = 1;

        [SerializeField] private bool _isAutoBuild;
        [SerializeField] private bool _isLoop;
        public int index = 1;
        public int count = 1;
        public float MinInterval = 0;
        private float lastPlayTime = 0;

        private void Start()
        {
            if (_isAutoBuild)
            {
                Initialize();
            }
        }

        public void Initialize()
        {
            for (int i = 0; i < count; i++)
            {
                var soundPlayer = new GameObject("SoundPlayer" + i).AddComponent<AudioSource>();
                soundPlayer.transform.SetParent(transform);
                UpdateAudioSource(soundPlayer);
                soundPlayer.Stop();
                soundPlayer.playOnAwake = false;
                _soundPlayers.Add(soundPlayer);
            }
        }

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
                UpdateAudioSource(_soundPlayers[index % _soundPlayers.Count]);
                _soundPlayers[index % _soundPlayers.Count].pitch =
                    _pitch + Random.Range(-_pitchRandomRange, _pitchRandomRange);
                _soundPlayers[index % _soundPlayers.Count].Play();

                index += 1;

                lastPlayTime = curTime;
            }
        }

        private void UpdateAudioSource(AudioSource soundPlayer)
        {
            soundPlayer.pitch = _pitch;
            soundPlayer.volume = _volume;
            soundPlayer.clip = _audioClip;
            soundPlayer.loop = _isLoop;
        }

        public void Stop()
        {
            foreach (AudioSource soundPlayer in _soundPlayers)
            {
                soundPlayer.Stop();
            }
        }

        public void PlayWithDelay(float delay)
        {
            DOVirtual.DelayedCall(delay, (() => { Play(); }));
        }

        public void SetPitch(float pitch)
        {
            _pitch = pitch;
        }
    }
}