using _Game.Systems._CoreSystem;
using _Game.Systems._CoreSystem.Scripts;

namespace _Game._1_IAP.Scripts
{
    public class IAPSystem : BaseCraftSystem, ICraftSystem
    {
        public Dispatcher<IAPEvents> Dispatcher = new Dispatcher<IAPEvents>();
    }
}