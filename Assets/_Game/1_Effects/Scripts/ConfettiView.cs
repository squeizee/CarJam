using Modules.VFX.Scripts;
using Sirenix.OdinInspector;
using UnityEngine;

namespace _Game._1_Effects.Scripts
{
    public class ConfettiView : MonoBehaviour
    {
        [SerializeField] private ParticleSystem _particleSystem;
        [SerializeField] private ParticleSystem _particleSystem2;
        [SerializeField] private ParticleSystem _topParticleSystem;
        [SerializeField] private SingleSoundFxUnit _soundFxUnit;

        [Button]
        public void Play(bool isLoop = false)
        {
            var particleSystemMain = _particleSystem.main;
            particleSystemMain.loop = isLoop;
            var particleSystemMain2 = _particleSystem2.main;
            particleSystemMain2.loop = isLoop;
            _particleSystem.Play();
            _particleSystem2.Play();
            _topParticleSystem.Play();
            _soundFxUnit.Play();
        }

        [Button]
        public void Stop()
        {
            _particleSystem.Stop();
            _particleSystem2.Stop();
            _topParticleSystem.Stop();
            _topParticleSystem.Clear();
        }
    }
}