using System.Collections.Generic;

namespace _Game.Library.PersistentDataNS.Scripts
{
    public class PersistentList<T> : PersistentData<List<T>>
    {
        public PersistentList(string saveKey, List<T> defaultValue) : base(saveKey, defaultValue) { }
    }
}