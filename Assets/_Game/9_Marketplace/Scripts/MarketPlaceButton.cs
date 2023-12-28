using _Game._0_CraftCore.Scripts.Core;
using _Game._3_GamePlay;
using _Game._3_GamePlay.Scripts;
using UnityEngine;

namespace _Game._9_Marketplace.Scripts
{
    public class MarketPlaceButton : MonoBehaviour
    {
        [SerializeField] public Transform _notificaitonIcon;

        public void OnMarketPlaceButtonDown()
        {
            Craft.Get<GamePlaySystem>().PauseGamePlay();
            Craft.Get<MarketPlaceSystem>().OpenMarketPlace(() =>
            {
                Craft.Get<GamePlaySystem>().ResumeGamePlay();
                var gamePlay = Craft.Get<GamePlaySystem>().GetCurrentGamePlay();
            });
        }

        public void UpdateActivity()
        {
            gameObject.SetActive(Craft.Get<MarketPlaceSystem>().ShouldShowLevelButton());
            _notificaitonIcon.gameObject.SetActive(Craft.Get<MarketPlaceSystem>().ShouldShowNotificationIcon());
        }
    }
}