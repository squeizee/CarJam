using _Game._0_CraftCore.Scripts.Core;
using _Game.Systems._CoreSystem.Scripts;
using Modules.Shared.Controller;

namespace _Game._1_Effects.Scripts
{
    public class EffectsSystem : BaseCraftSystemMono, ICraftSystem
    {
        public ConfettiView ConfettiView;
        public EffectsSystemSo So => EffectsSystemSo.Instance;

        public void OnInit()
        {
            var camera = Craft.Get<CraftCameraSystem>().Camera.transform;
            // create confetti and set parent to camera
            var confetti = Instantiate(So.ConfettiPrefab, camera);
            // set position
            confetti.transform.localPosition = So.InitialConfettiPosition;
            // get confetti view
            ConfettiView = confetti.GetComponent<ConfettiView>();
        }
    }
}