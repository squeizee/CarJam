using _Game._1_SoundMusicVibration.Scripts;
using _Game.Library.PersistentDataNS.Scripts;
using _Game.Systems._CoreSystem.Scripts;

namespace _Game.Systems._CraftCore
{
    public class CraftSoundSystem : BaseCraftSystemMono, ICraftSystem
    {
        public PersistentBool IsOn =
            new PersistentBool($"{nameof(CraftSoundSystem)}_{nameof(IsOn)}", true);

        public CoinSoundEffect CoinSoundEffect;

        public void SwitchSound()
        {
            IsOn.Value = !IsOn.Value;
        }

        public void OnInit()
        {
            // instantiate coin sound effect
            CoinSoundEffect = Instantiate(CraftSoundSystemSo.Instance.CoinSoundEffect, transform);
        }
    }
}