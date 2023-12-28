using System.Threading.Tasks;
using _Game.Systems._CoreSystem.Scripts;

namespace _Game.Systems._ExampleSystem.Scripts
{
    public class ExampleSystemMono : BaseCraftSystemMono, ICraftSystem
    {
        public void OnInit()
        {
        }

        public Task Init()
        {
            // create complete task
            return Task.CompletedTask;
        }
    }
}