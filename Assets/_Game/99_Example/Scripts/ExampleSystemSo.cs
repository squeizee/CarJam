using System.Collections.Generic;
using Library.ScreenManagement.Scripts;
using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game.Systems._ExampleSystem.Scripts
{
    [CreateAssetMenu(fileName = "ExampleSystemSo", menuName = "Craft/Example/ExampleSystemSo")]
    public class ExampleSystemSo : ScriptableSingleton<ExampleSystemSo>
    {
        public List<BaseScreen> Screens;
    }
}