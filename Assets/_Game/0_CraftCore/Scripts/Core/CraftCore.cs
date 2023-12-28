using System;
using System.Linq;
using System.Threading.Tasks;
using LionStudios.Suite;
using LionStudios.Suite.Core;
using UnityEngine;

namespace _Game.Systems._CoreSystem.Scripts
{
    public class CraftCore
    {
        public static bool IsInitialized { get; private set; }
        public static CraftCoreContext Context;
        public static Dispatcher<CoreEventId> Dispatcher = new Dispatcher<CoreEventId>();

        public static ICraftSystem[] Systems => Context.Systems;

        public static async void Init()
        {
            float initStartTime = Time.time;
            Debug.Log($"Initializing Craft Core ...");

            if (IsInitialized)
            {
                Debug.Log("Craft Core already initialized. Aborting.");
                return;
            }

            Context = CreateContext();
            await InitializeSystems();

            IsInitialized = true;
            GetDispatcher().Send(CoreEventId.CraftCoreInitialized, EventArgs.Empty);
            Debug.Log($"Craft Core initialized in {Time.time - initStartTime}s ...");

            CraftApplicationHandle.Create(GetDispatcher());
            Context.Dispatcher.Subscribe(CoreEventId.AppQuit, OnDestroy);
        }

        private static async Task InitializeSystems()
        {
            ICraftSystem[] systems = Context.Systems.OrderBy((x) => { return -x.Priority; }).ToArray();

            foreach (var craftSystem in systems)
            {
                if (craftSystem == null)
                {
                    continue;
                }

                craftSystem.Setup(Context);
                await craftSystem.Init();
            }

            try
            {
                foreach (var craftSystem in systems)
                {
                    craftSystem.OnInit();
                }
            }
            catch (Exception e)
            {
                Debug.LogError(e.Message);
            }
        }

        public static void OnDestroy()
        {
            foreach (var craftSystem in Context.Systems)
            {
                craftSystem.OnDestroy();
            }
        }


        public static T GetSystem<T>() where T : ICraftSystem
        {
            return Context.GetSystem<T>();
        }

        public static Dispatcher<CoreEventId> GetDispatcher()
        {
            return Context.Dispatcher;
        }

        public static ICraftSystem[] CrateSystems()
        {
            var cache = NamespaceUtil.GetObjectsOfType<ICraftSystem>();
            string msg = $"Craft Core: System Cache initialized! {cache.Length} modules found.";
            foreach (var craftSystem in cache)
            {
                msg += $"\n{craftSystem.GetName()}";
            }

            Debug.Log(msg);
            return cache;
        }

        private static CraftCoreContext CreateContext()
        {
            return new CraftCoreContext()
            {
                Systems = CrateSystems(),
                Dispatcher = Dispatcher
            };
        }
    }
}