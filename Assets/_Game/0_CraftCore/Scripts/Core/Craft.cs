using _Game._1_CraftUI.Scripts;
using _Game.Systems._CoreSystem;
using _Game.Systems._CoreSystem.Scripts;
using Library.ScreenManagement.Scripts;

namespace _Game._0_CraftCore.Scripts.Core
{
    public static class Craft
    {
        public static void OpenUI<T>(BaseScreenArgs args = null) where T : BaseScreen
        {
            CraftCore.GetSystem<CraftUISystem>().Open<T>(args);
        }

        public static void CloseUI<T>() where T : BaseScreen
        {
            CraftCore.GetSystem<CraftUISystem>().Close<T>();
        }

        public static void CloseTopUI()
        {
            CraftCore.GetSystem<CraftUISystem>().CloseTop();
        }

        public static T Get<T>() where T : ICraftSystem
        {
            return CraftCore.GetSystem<T>();
        }

        public static void Get<T>(out T system) where T : ICraftSystem
        {
            system = CraftCore.GetSystem<T>();
        }

        public static T GetUI<T>() where T : BaseScreen
        {
            return CraftCore.GetSystem<CraftUISystem>().GetUI<T>();
        }

        public static Dispatcher<CoreEventId> Dispatcher => CraftCore.Dispatcher;

        public static void BlockInput()
        {
            GetUI<InputBlockerUI>().Block();
        }

        public static void UnBlockInput()
        {
            GetUI<InputBlockerUI>().UnBlock();
        }
    }
}