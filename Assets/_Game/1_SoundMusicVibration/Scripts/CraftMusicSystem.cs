using _Game.Library.PersistentDataNS.Scripts;
using _Game.Systems._CoreSystem.Scripts;

namespace _Game.Systems._CraftCore
{
    public class CraftMusicSystem : BaseCraftSystem, ICraftSystem
    {
        private PersistentBool _isMusicOn =
            new PersistentBool($"{nameof(CraftMusicSystem)}_{nameof(_isMusicOn)}", true);


        public void OnInit()
        {
        }
    }
}