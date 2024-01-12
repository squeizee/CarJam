// #define FIREBASE_INSTALLED
using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using _Game.Systems._CoreSystem.Scripts;
using UnityEngine;

namespace _Game._1_Config.Scripts
{
    public class CraftConfigSystem : BaseCraftSystem, ICraftSystem
    {
        public bool IsConfigFetched = false;
#if FIREBASE_INSTALLED

        public Firebase.FirebaseApp app = null;
        private string _experimentCohort = "";

        private string _experimentName = "";

// Begins the firebase initialization process and afterwards, opens the main menu.
        public void OnInit()
        {
            InitializeFirebaseAndStartGame();
        }

        private void InitializeFirebaseAndStartGame()
        {
            Firebase.FirebaseApp.CheckAndFixDependenciesAsync()
                .ContinueWithOnMainThread(
                    previousTask =>
                    {
                        var dependencyStatus = previousTask.Result;
                        if (dependencyStatus == Firebase.DependencyStatus.Available)
                        {
                            // Create and hold a reference to your FirebaseApp,
                            app = Firebase.FirebaseApp.DefaultInstance;
                            // Set the recommended Crashlytics uncaught exception behavior.
                            SetRemoteConfigDefaults();
                        }
                        else
                        {
                            UnityEngine.Debug.LogError(
                                $"Could not resolve all Firebase dependencies: {dependencyStatus}\n" +
                                "Firebase Unity SDK is not safe to use here");
                        }
                    });
        }

        public void SetRemoteConfigDefaults()
        {
            System.Collections.Generic.Dictionary<string, object> defaults =
                new System.Collections.Generic.Dictionary<string, object>();
            GetDefaultsFromAllSystems(defaults);
            Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.SetDefaultsAsync(defaults)
                .ContinueWithOnMainThread(task => { });
            FetchDataAsync();
        }

        public Task FetchDataAsync()
        {
            Debug.Log("Fetching data...");
            System.Threading.Tasks.Task fetchTask =
                Firebase.RemoteConfig.FirebaseRemoteConfig.DefaultInstance.FetchAsync(
                    TimeSpan.Zero);
            return fetchTask.ContinueWithOnMainThread(FetchComplete);
        }

        private void FetchComplete(Task fetchTask)
        {
            if (!fetchTask.IsCompleted)
            {
                Debug.LogError("Retrieval hasn't finished.");
                return;
            }

            var remoteConfig = FirebaseRemoteConfig.DefaultInstance;
            var info = remoteConfig.Info;
            if (info.LastFetchStatus != LastFetchStatus.Success)
            {
                Debug.LogError(
                    $"{nameof(FetchComplete)} was unsuccessful\n{nameof(info.LastFetchStatus)}: {info.LastFetchStatus}");
                return;
            }

            // Fetch successful. Parameter values must be activated to use.
            remoteConfig.ActivateAsync()
                .ContinueWithOnMainThread(
                    task =>
                    {
                        Debug.Log($"Remote data loaded and ready for use. Last fetch time {info.FetchTime}.");
                        // Update all Systems
                        UpdateAllSystems();
                        IsConfigFetched = true;
                        GetContext().Dispatcher.Send(CoreEventId.OnConfigFetched);
                        InitAbsVariants();
                    });
        }

        private void UpdateAllSystems()
        {
            foreach (ICraftSystem craftSystem in GetContext().Systems)
            {
                craftSystem.UpdateConfigs(FirebaseRemoteConfig.DefaultInstance.AllValues);
            }
        }

        private void GetDefaultsFromAllSystems(System.Collections.Generic.Dictionary<string, object> defaults)
        {
            foreach (ICraftSystem craftSystem in GetContext().Systems)
            {
                craftSystem.SetDefaults(defaults);
            }
        }

        public void UpdateConfigs(IDictionary<string, ConfigValue> defaultInstanceAllValues)
        {
            if (defaultInstanceAllValues.TryGetValue("experimentCohort", out var experimentCohort))
            {
                _experimentCohort = experimentCohort.StringValue;
            }

            if (defaultInstanceAllValues.TryGetValue("experimentName", out var experimentName))
            {
                _experimentName = experimentName.StringValue;
            }
        }

        public void SetDefaults(System.Collections.Generic.Dictionary<string, object> defaults)
        {
            defaults.Add("experimentCohort", "");
            defaults.Add("experimentName", "");
        }

        private void InitAbsVariants()
        {
            if (_experimentCohort == "")
            {
                return;
            }

            Debug.Log($"InitAbsVariants: {_experimentName} {_experimentCohort}");
#if LK_HAS_LION_ANALYTICS
            LionAnalytics.AbCohort(_experimentName, _experimentCohort);
#endif
        }
        #else
        public void OnInit()
        {
            IsConfigFetched = true;
            GetContext().Dispatcher.Send(CoreEventId.OnConfigFetched);
        }
#endif
    }
}