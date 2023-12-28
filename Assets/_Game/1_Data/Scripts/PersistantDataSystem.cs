using _Game.Systems._CoreSystem.Scripts;
using _Game.Systems._CraftCore.Scripts.Utility;

namespace _Game.Library.PersistentDataNS.Scripts
{
    public class PersistantDataSystem : BaseCraftSystem, ICraftSystem
    {
        private float _autoSavePeriod = 3f;
        private bool _isAutoSaveEnabled = true;
        private CraftQuartz _autoSaveQuartz;

        public PersistantDataSystem()
        {
            Priority = 100;
        }

        public void OnInit()
        {
            _autoSaveQuartz = new CraftQuartz(_autoSavePeriod, Save);
            GetContext().Dispatcher.Subscribe(CoreEventId.AppQuit, Save);
        }

        private void Save()
        {
            if (_isAutoSaveEnabled)
            {
                foreach (var persistentData in PersistantDataCache.AllPersistentData)
                {
                    if (persistentData.IsInit())
                    {
                        persistentData.Save();
                        //   Debug.Log(persistentData.GetType().Name + " saved");
                    }
                }
            }
        }
    }
}