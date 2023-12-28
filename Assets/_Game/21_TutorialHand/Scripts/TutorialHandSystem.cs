using _Game.Systems._CoreSystem.Scripts;
using UnityEngine;

namespace _Game._21_TutorialHand.Scripts
{
    public class TutorialHandSystem : BaseCraftSystemMono, ICraftSystem
    {
        private TutorialHandSo TutorialHandSo => TutorialHandSo.Instance;
        private TutorialHandView _tutorialHandView;

        public void OnInit()
        {
            _tutorialHandView = GameObject.Instantiate(TutorialHandSo.TutorialHandPrefab, this.transform)
                .GetComponent<TutorialHandView>();
            _tutorialHandView.Hide();
        }


        public void ShowHand(Vector3 position)
        {
            _tutorialHandView.Show(position);
        }

        public void HideHand()
        {
            _tutorialHandView.Hide();
        }
    }
}