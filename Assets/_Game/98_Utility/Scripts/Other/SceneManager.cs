using System;
using System.Collections;
using Library.CoroutineSystem.Scripts;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Library.SceneManagement.Scripts
{
    public static class SceneManager
    {
        public static event Action<string> OnSceneLoaded;
        public static event Action<string> OnSceneUnloaded;
        
        public static void LoadSceneSingle(string sceneName, Action onComplete = null)
        {
            LoadScene(sceneName, LoadSceneMode.Single, onComplete);
        }
        
        public static void LoadSceneAdditive(string sceneName, Action onComplete = null)
        {
            LoadScene(sceneName, LoadSceneMode.Additive, onComplete);
        }
        
        private static void LoadScene(string sceneName, LoadSceneMode loadSceneMode, Action onComplete = null)
        {
            CoroutineManager.BeginCoroutine(LoadSceneCoroutine(sceneName, loadSceneMode, onComplete));
        }
        
        public static CustomYieldInstruction LoadSceneSingleYield(string sceneName)
        {
            return LoadSceneYield(sceneName, LoadSceneMode.Single);
        }

        public static CustomYieldInstruction LoadSceneAdditiveYield(string sceneName)
        {
            return LoadSceneYield(sceneName, LoadSceneMode.Additive);
        }
        
        private static CustomYieldInstruction LoadSceneYield(string sceneName, LoadSceneMode loadSceneMode)
        {
            bool isSceneLoaded = false;
            LoadScene(sceneName, loadSceneMode, () =>
            {
                isSceneLoaded = true;
            });
            return new WaitUntil(() => isSceneLoaded);
        }
        
        private static IEnumerator LoadSceneCoroutine(string sceneName, LoadSceneMode loadSceneMode, Action onComplete)
        {
            AsyncOperation operation = UnityEngine.SceneManagement.SceneManager.LoadSceneAsync(sceneName, loadSceneMode);

            yield return new WaitUntil(() => operation.isDone);
            
            onComplete?.Invoke();
            
            OnSceneLoaded?.Invoke(sceneName);
        }

        public static void UnloadScene(string sceneName, Action onComplete = null)
        {
            CoroutineManager.BeginCoroutine(UnloadSceneCoroutine(sceneName, onComplete));
        }
        
        public static CustomYieldInstruction UnloadSceneYield(string sceneName)
        {
            bool isSceneUnloaded = false;
            UnloadScene(sceneName, () =>
            {
                isSceneUnloaded = true;
            });
            return new WaitUntil(() => isSceneUnloaded);
        }
        
        private static IEnumerator UnloadSceneCoroutine(string sceneName, Action onComplete)
        {
            AsyncOperation operation = UnityEngine.SceneManagement.SceneManager.UnloadSceneAsync(sceneName);

            yield return new WaitUntil(() => operation.isDone);
            
            onComplete?.Invoke();
            
            OnSceneUnloaded?.Invoke(sceneName);
        }
    }
}