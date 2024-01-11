
    using System.ComponentModel;
#if HAS_LION_APPLOVIN_SDK
    public partial class SROptions
    {
        [Category("Max")]
        public void OpenMaxDebugger()
        {
            MaxSdk.ShowMediationDebugger();
        }
    }
#endif