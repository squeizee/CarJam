using Library.ScreenManagement.Scripts;

namespace _Game._1_Ads.Scripts
{
    public class AdBreakUIArgs : BaseScreenArgs
    {
    }

    public class AdBreakUI : BaseScreen<AdBreakUIArgs>
    {
        public override void OnSetup()
        {
            Deactivate();
        }

        public void Activate()
        {
            gameObject.SetActive(true);
        }

        public void Deactivate()
        {
            gameObject.SetActive(false);
        }
    }
}