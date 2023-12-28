namespace _Game.Systems._CoreSystem.Scripts
{
    public class CraftCoreContext
    {
        public ICraftSystem[] Systems;
        public Dispatcher<CoreEventId> Dispatcher { get; set; }

        public T GetSystem<T>() where T: ICraftSystem
        {
            for (int i = 0; i < Systems.Length; i++)
            {
                if (Systems[i] != null && Systems[i].GetType() == typeof(T))
                {
                    return (T)Systems[i];
                }
            }

            return default(T);
        }
    }

    public enum CoreEventId
    {
        AppQuit,
        AppPaused,
        AppOutOfFocus,
        CraftCoreInitialized,
        GameStarted,
        OnConfigFetched
    }
}