using System;

namespace Library.ScreenManagement.Scripts
{
    public class OfferScreenArgs : BaseScreenArgs
    {
        public Action OnAccepted;
        public Action OnDeclined;
    }
}