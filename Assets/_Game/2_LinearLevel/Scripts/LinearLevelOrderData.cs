using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using _Game._3_GamePlay;
using _Game._3_GamePlay.Scripts;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace _Game._2_LinearLevel.Scripts
{
    [CreateAssetMenu(fileName = "LinearLevelOrderData", menuName = "Craft/LinearLevel/LinearLevelOrderData")]
    public class LinearLevelOrderData : ScriptableObject
    {
        public LinearLevelType Type;
        [SerializeField] private bool _isTesting;
        public string Name;

        [SerializeField] [ShowIf(nameof(_isTesting))]
        private BaseGamePlay _testLevel;


        [ListDrawerSettings(ShowIndexLabels = true, NumberOfItemsPerPage = 10)] [HideIf(nameof(_isTesting))]
        public List<AssetReference> TutorialsReferences = new List<AssetReference>();

        [ListDrawerSettings(ShowIndexLabels = true, NumberOfItemsPerPage = 10)] [HideIf(nameof(_isTesting))]
        public List<AssetReference> LevelAssetReferences = new List<AssetReference>();

        public List<GameObject> TutorialsLevesReferences = new List<GameObject>();
        public List<GameObject> LevelAssetGameObjects = new List<GameObject>();

        private List<AssetReference> _loadedLevelAssetReferences = new List<AssetReference>();


        public int GetSpatulaCounts(int levelId, List<int> spatulaCounts)
        {
            if (levelId <= TutorialsReferences.Count)
            {
                int index = levelId - 1;
                index = Mathf.Clamp(index, 0, spatulaCounts.Count - 1);
                return spatulaCounts[index];
            }
            else
            {
                int index = (levelId - TutorialsReferences.Count - 1) % LevelAssetReferences.Count +
                            TutorialsReferences.Count;
                index = Mathf.Clamp(index, 0, spatulaCounts.Count - 1);
                return spatulaCounts[index];
            }
        }

        [Button]
        public void ConvertToAssetReferance()
        {
            TutorialsReferences = new List<AssetReference>();
#if UNITY_EDITOR
            foreach (var tutorial in TutorialsLevesReferences)
            {
                // unity asset to guid
                var path = UnityEditor.AssetDatabase.GetAssetPath(tutorial);
                var guid = UnityEditor.AssetDatabase.AssetPathToGUID(path);
                TutorialsReferences.Add(new AssetReference(guid));
            }

            LevelAssetReferences = new List<AssetReference>();

            foreach (var level in LevelAssetGameObjects)
            {
                // unity asset to guid
                var path = UnityEditor.AssetDatabase.GetAssetPath(level);
                var guid = UnityEditor.AssetDatabase.AssetPathToGUID(path);
                LevelAssetReferences.Add(new AssetReference(guid));
            }
#endif
        }

// Get Levels Asynchronously
        public async Task<GameObject> GetLevel(int levelId)
        {
            var levelreference = GetLevelReference(levelId);
            if (_loadedLevelAssetReferences.Contains(levelreference) == false)
            {
                _loadedLevelAssetReferences.Add(levelreference);
                return await levelreference.LoadAssetAsync<GameObject>().Task;
            }
            else
            {
                return (GameObject)levelreference.Asset;
            }
        }

        public AssetReference GetLevelReference(int levelId)
        {
            if (levelId <= TutorialsReferences.Count)
            {
                return TutorialsReferences[levelId - 1];
            }
            else
            {
                return LevelAssetReferences[
                    (levelId - TutorialsReferences.Count - 1) % LevelAssetReferences.Count];
            }
        }


        [Button]
        public void RemoveJigsawLevelsFromLevels()
        {
            for (int i = 0; i < LevelAssetReferences.Count; i++)
            {
                if (((GameObject)LevelAssetReferences[i].Asset).GetComponentInChildren<JigsawPieceView>())
                {
                    LevelAssetReferences.RemoveAt(i);
                    i--;
                }
            }
        }
    }

    [System.Serializable]
    public class BaseGamePlayReference : AssetReferenceT<BaseGamePlay>
    {
        public BaseGamePlayReference(string guid) : base(guid)
        {
        }
    }
}