using _Game._0_CraftCore.Scripts.Core;
using _Game._3_GamePlay;
using _Game.Systems.GameFlow.Scripts.Commands;

namespace _Game._9_Marketplace.Scripts
{
    public class OpenMarketPlaceOfferUICommand
    {
        public void Execute(int levelIndex)
        {
            var args = new MarketPlaceOfferUIArgs();

            var so = MarketPlaceSo.Instance;

            args.SkinIndex = so.GetSkinIndex(levelIndex);
            args.EnvironmentIndex = so.GetEnvironmentIndex(levelIndex);
            args.SpatulaIndex = so.GetSpatulaIndex(levelIndex);

            args.SpatulaIndex = -1;

            args.OnAccept = OnAccept;
            args.OnDecline = OnDecline;
            Craft.OpenUI<MarketPlaceOfferUI>(args);
        }

        public void OnAccept()
        {
            //  new StartNormalLevelCommand().Execute();

            Craft.Get<MarketPlaceSystem>()
                .OpenMarketPlace(() => { new StartNormalLevelCommand().Execute(); });
        }

        public void OnDecline()
        {
            new StartNormalLevelCommand().Execute();
        }
    }
}