using System.Collections.Generic;
using _Game.Systems._CoreSystem.Scripts;
using Library.ScreenManagement.Scripts;

namespace _Game.Systems._ExampleSystem.Scripts
{
    public class ExampleSystem : BaseCraftSystem, ICraftSystem
    {
        public ExampleSystem()
        {
            Priority = 0;
        }

        public List<BaseScreen> GetScreens()
        {
            return ExampleSystemSo.Instance.Screens;
        }
    }
}