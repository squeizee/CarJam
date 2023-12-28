namespace _Game.Library.PersistentDataNS.Scripts
{
    public interface ISaveLoad
    {
        public void Save();
        public void Load();
        public bool IsInit();
    }
}