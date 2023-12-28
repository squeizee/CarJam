using _Game._0_CraftCore.Scripts.Core;
using _Game.Library.CraftTime;
using TMPro;
using UnityEngine;

namespace _Game._2_LinearLevel.Scripts.ChallangeLevel
{
    public class ChallengeLifeDisplayer : MonoBehaviour
    {
        public bool IsOpenPopUp = false;
        [SerializeField] private TMP_Text _lifeCountText;
        [SerializeField] private TMP_Text _lifeTimerText;
        ChallengeLifeController LifeController => Craft.Get<ChallengeSystem>().LifeController;

        public void OnButtonDown()
        {
            if (IsOpenPopUp && LifeController.IsLifeFull() == false)
            {
                Craft.OpenUI<ChallengeLifePopUp>(new ChallengeLifePopUpArgs());
            }
        }

        public void Activate()
        {
            LifeController.OnLifeChanged += UpdateVisual;
            Craft.Get<CraftTimeSystem>().Dispatcher.Subscribe(TimeIntervals.OnSecond, UpdateVisual);
            UpdateVisual();
        }

        public void Deactivate()
        {
            LifeController.OnLifeChanged -= UpdateVisual;
            Craft.Get<CraftTimeSystem>().Dispatcher.Unsubscribe(TimeIntervals.OnSecond, UpdateVisual);
        }


        public void UpdateVisual()
        {
            if (LifeController.IsLifeFull())
            {
                _lifeTimerText.text = "MAX";
                _lifeCountText.text = "5";
            }
            else
            {
                _lifeTimerText.text = LifeController.GetRemainingRefillTimeString();
                _lifeCountText.text = LifeController.LifeCount.Value.ToString();
            }
        }
    }
}