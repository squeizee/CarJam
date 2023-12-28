using System.Collections.Generic;

namespace _Game.Library.PersistentDataNS.Scripts
{
    public static class PersistantDataCache
    {
        public static readonly List<ISaveLoad> AllPersistentData = new List<ISaveLoad>();

        public static void AddToList(ISaveLoad persistentData)
        {
            AllPersistentData.Add(persistentData);
        }

        public static void Clear()
        {
            AllPersistentData.Clear();
        }
    }
}