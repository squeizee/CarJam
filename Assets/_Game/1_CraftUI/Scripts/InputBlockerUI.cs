using Library.ScreenManagement.Scripts;
using Library.ScreenManagement.Scripts.Animation;
using UnityEngine;

namespace _Game._1_CraftUI.Scripts
{
    public class InputBlockerUI : BaseScreen
    {
        [SerializeField] private GameObject _blocker;

        public override BaseScreenAnimationCommand GetAnimationCommand()
        {
            return new InstantScreenAnimationCommand();
        }

        public void Block()
        {
            _blocker.SetActive(true);
        }

        public void UnBlock()
        {
            _blocker.SetActive(false);
        }
    }
}