using _Game._0_CraftCore.Scripts.Core;
using UnityEngine;

namespace _Game._0_CraftCore.Scripts.Utility
{
    public class GameStateSetter : MonoBehaviour
    {
        [SerializeField] private GameMode _gameMode;

        public void Awake()
        {
#if !UNITY_EDITOR
              CraftCoreSo.Instance.GameMode = GameMode.GamePlay;
#endif
            CraftCoreSo.Instance.GameMode = _gameMode;
        }
    }
}