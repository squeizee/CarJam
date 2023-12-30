using System;
using System.Collections.Generic;
using System.Linq;
using _Game._0_CraftCore.Scripts.Core;
using _Game._3_GamePlay.Scripts;
using _Game.Library.CraftTime;
using Modules.Shared.Controller;
using Sirenix.OdinInspector;
using Sirenix.Utilities;
using UnityEngine;

namespace _Game._4_CarJam.Scripts
{
    public class CarJamGamePlay : BaseGamePlay
    {
        [SerializeField] private GridController gridController;
        
        private List<GameElement> _listGameElements;
        private CharacterController _selectedCharacter;

        public override void Initialize(BaseGamePlayStartArgs baseGamePlayStartArgs)
        {
            base.Initialize(baseGamePlayStartArgs);
            _listGameElements = GetComponentsInChildren<GameElement>().ToList();
            _listGameElements.ForEach(x => x.Initialize());
            gridController.Initialize(_listGameElements);
            SubscribeEvents();
            GamePlayState = GamePlayState.Started;
        }

        private void SubscribeEvents()
        {
            Craft.Get<CraftInputSystem>().UserButtonDown += OnUserButtonDown;
            Craft.Get<CraftTimeSystem>().Dispatcher.Subscribe(TimeIntervals.OnSecond, CheckCompleted);
            
        }

        private void CheckCompleted()
        {
            if (_listGameElements.All(x => x.State == GameElement.GameElementState.Completed))
            {
                OnGamePlayCompleted?.Invoke();
            }
        }

        private void OnDestroy()
        {
            Craft.Get<CraftInputSystem>().UserButtonDown -= OnUserButtonDown;
            Craft.Get<CraftTimeSystem>().Dispatcher.Unsubscribe(TimeIntervals.OnSecond, CheckCompleted);
        }
        

        #region Input Handling

        private void OnUserButtonDown(Vector3 obj)
        {
            if (ConstrainsController.CanMakeAMove() == false)
            {
                return;
            }

            if (GamePlayState != GamePlayState.Started)
            {
                return;
            }

            LayerMask layerMask = LayerMask.GetMask("GameElement");
            if (Craft.Get<CraftInputSystem>()
                .GetGameObjectUnderMouse(layerMask, out var objectUnderMouse, out var hit))
            {
                OnObjectTouched(objectUnderMouse);
            }
            else if (Craft.Get<CraftInputSystem>()
                     .GetGameObjectUnderMouseSphere(out var objectUnderMouse2, out var hit1, 0.05f, layerMask))
            {
                OnObjectTouched(objectUnderMouse2);
            }
        }

        private void OnObjectTouched(GameObject touchedObject)
        {
            if (touchedObject.transform.TryGetComponent<CharacterController>(out var characterController))
            {
                _selectedCharacter = characterController;
                _selectedCharacter.OnCorrectAction?.Invoke();
            }
            else if(gridController.IsEmpty(touchedObject.transform.position))
            {
                if (!_selectedCharacter) return;
                gridController.FindPath(touchedObject.transform.position, _selectedCharacter);
                
                _selectedCharacter = null;
            }
            
        }
        #endregion
    }
}