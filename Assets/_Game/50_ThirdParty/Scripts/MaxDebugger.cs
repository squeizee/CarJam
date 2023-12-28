
    using System.ComponentModel;
#if MAX_ADS
    public partial class SROptions
    {
        [Category("Max")]
        public void OpenMaxDebugger()
        {
            MaxSdk.ShowMediationDebugger();
        }
    }
#endif