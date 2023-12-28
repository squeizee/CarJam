using System;
using Library.Utility.Scripts.UI;
using Modules.VFX.Scripts;
using UnityEngine;

namespace Library.ScreenManagement.Scripts
{
    public class UISound : MonoBehaviour
    {
        public SingleSoundFxUnit ClickSound;

        public void Start()
        {
            ButtonAnimation.OnClicked += OnClicked;
        }

        public void OnDestroy()
        {
            ButtonAnimation.OnClicked -= OnClicked;
        }

        private void OnClicked()
        {
            ClickSound.Play();
        }
    }
}