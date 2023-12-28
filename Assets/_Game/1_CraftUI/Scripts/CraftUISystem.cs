using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading.Tasks;
using _Game._1_CraftUI.Scripts.Utility;
using _Game.Systems._CoreSystem.Scripts;
using DG.Tweening;
using Library.ScreenManagement.Scripts.Animation;
using UnityEngine;
using Object = UnityEngine.Object;

namespace Library.ScreenManagement.Scripts
{
    public class CraftUISystem : BaseCraftSystem, ICraftSystem
    {
        public event Action<Type> OnOpened;
        public event Action<Type> OnClosed;

        public int TopScreenSortingOrder => UIUtility.GetCalculatedSortingOrder(_currentSortingOrderIndex);

        private bool _clearOnDestroy = true;

        private int _currentSortingOrderIndex;
        private readonly List<BaseScreen> _activeScreens = new();
        private List<BaseScreen> _createdScreens = new List<BaseScreen>();
        private Transform _parentTransform;

        public CraftUISystem()
        {
            Priority = -100;
        }

        public Task Init()
        {
            _currentSortingOrderIndex = 0;
            _parentTransform = Object.Instantiate(CraftUISystemSo.Instance.UIParentPrefab).transform;
            CreateUISound(_parentTransform);
            Object.DontDestroyOnLoad(_parentTransform.gameObject);

            List<BaseScreen> allScreenPrefabs = GetScreensOfAllSystems();
            for (int i = 0; i < allScreenPrefabs.Count; i++)
            {
                if (UIUtility.IsPrefab(allScreenPrefabs[i].gameObject))
                {
                    BaseScreen screen = Object.Instantiate(allScreenPrefabs[i], _parentTransform, false);
                    screen.transform.localScale = Vector3.one;
                    allScreenPrefabs[i] = screen;
                }

                allScreenPrefabs[i].Initialize(this);
                allScreenPrefabs[i].OnInitialize();
                _createdScreens.Add(allScreenPrefabs[i]);
            }

            foreach (BaseScreen createdScreen in _createdScreens)
            {
                if (createdScreen.ActivateOnStart)
                {
                    Open(createdScreen);
                    createdScreen.Canvas.sortingOrder = createdScreen.InitialSortingOrder;
                }
            }

            DOVirtual.DelayedCall(0.5f, () =>
            {
                var canvas = _parentTransform.GetComponent<Canvas>();
                canvas.renderMode = RenderMode.ScreenSpaceCamera;
                canvas.worldCamera = Camera.main;
                canvas.planeDistance = 4;
            });
            return Task.CompletedTask;
        }

        private void CreateUISound(Transform parentTransform)
        {
            var uiSoundPrefab = CraftUISystemSo.Instance.UISoundPrefab;
            if (uiSoundPrefab != null)
            {
                Object.Instantiate(uiSoundPrefab, parentTransform, false);
            }
        }

        private List<BaseScreen> GetScreensOfAllSystems()
        {
            List<BaseScreen> screens = new List<BaseScreen>();
            foreach (var craftSystem in GetContext().Systems)
            {
                screens.AddRange(craftSystem.GetScreens());
            }

            return screens;
        }


        public void OnDestroy()
        {
            if (_clearOnDestroy)
            {
                Clear();
            }
        }

        public void Clear()
        {
            for (int i = 0; i < _createdScreens.Count; i++)
            {
                _createdScreens[i].OnClear();
            }
        }

        public void Open<T>(BaseScreenArgs args = null, bool shouldHideScreenUnderneath = false,
            bool withBgAnimation = true) where T : BaseScreen
        {
            // log screens name

            BaseScreen screen = GetUI<T>();
            Open(screen, args, shouldHideScreenUnderneath, withBgAnimation);
        }

        private void Open(BaseScreen screen, BaseScreenArgs args = null, bool shouldHideScreenUnderneath = false,
            bool withBgAnimation = true)
        {
            for (int i = 0; i < _activeScreens.Count; i++)
            {
                if (shouldHideScreenUnderneath)
                {
                    Hide(_activeScreens[i]);
                }
                else
                {
                //    _activeScreens[i].GraphicRaycaster.enabled = false;
                }
            }

            bool shouldAnimateBg = withBgAnimation && (_activeScreens.Count <= 0 || !shouldHideScreenUnderneath);

            _activeScreens.Add(screen);

            _currentSortingOrderIndex++;
            screen.Canvas.sortingOrder = UIUtility.GetCalculatedSortingOrder(_currentSortingOrderIndex);

            screen.Setup(args);
            screen.OnSetup();

            screen.Canvas.enabled = true;
            BaseScreenAnimationCommand screenAnimCommand = screen.GetAnimationCommand();
            screenAnimCommand.PlayOpenAnimation(screen, shouldAnimateBg, () =>
            {
                screen.GraphicRaycaster.enabled = true;

                screen.OnOpen();
                screen.Args?.OnOpened?.Invoke();
                OnOpened?.Invoke(screen.GetType());
            });
        }

        public void Close<T>() where T : BaseScreen
        {
            Close(GetActive<T>());
        }

        public void Close(BaseScreen screen)
        {
            // log screens name 

            if (screen != null)
            {
                _activeScreens.Remove(screen);

                bool shouldAnimateBg = _activeScreens.Count <= 0 || GetTop().Canvas.enabled;

                screen.OnCloseBegin();

                _currentSortingOrderIndex--;
                screen.OnClose();
                screen.Args?.OnClosed?.Invoke();
                OnClosed?.Invoke(screen.GetType());
                BaseScreen topScreen = GetTop();
                if (topScreen != null)
                {
                    Show(topScreen);
                }

                BaseScreenAnimationCommand screenAnimCommand = screen.GetAnimationCommand();
                screenAnimCommand.PlayCloseAnimation(screen, shouldAnimateBg, () =>
                {
                    screen.GraphicRaycaster.enabled = false;
                    screen.Canvas.enabled = false;
                });
            }
        }

        public void CloseTop()
        {
            Close(GetTop());
        }

        public void CloseAll()
        {
            _currentSortingOrderIndex = 0;
            for (int i = 0; i < _activeScreens.Count; i++)
            {
                BaseScreen screen = _activeScreens[i];
                screen.Canvas.enabled = false;
                screen.GraphicRaycaster.enabled = false;
                screen.OnClose();
                screen.Args?.OnClosed?.Invoke();
                OnClosed?.Invoke(screen.GetType());
            }

            _activeScreens.Clear();
        }

        private void Hide(BaseScreen screen)
        {
            if (screen != null)
            {
                screen.GraphicRaycaster.enabled = false;
                screen.Canvas.enabled = false;
                screen.OnHide();
            }
        }

        private void Show(BaseScreen screen)
        {
            if (screen != null)
            {
                screen.OnShow();
                if (!screen.Canvas.enabled)
                {
                    screen.Canvas.enabled = true;
                    BaseScreenAnimationCommand screenAnimCommand = screen.GetAnimationCommand();
                    screenAnimCommand.PlayOpenAnimation(screen, false,
                        () => { screen.GraphicRaycaster.enabled = true; });
                }
                else
                {
                    screen.GraphicRaycaster.enabled = true;
                }
            }
        }

        public void UpdateArgs<T>(BaseScreenArgs args = null) where T : BaseScreen
        {
            T screen = GetActive<T>();
            if (screen != null)
            {
                screen.Setup(args);
                screen.OnSetup();
            }
        }

        private BaseScreen GetTop()
        {
            if (_activeScreens.Count > 0)
            {
                return _activeScreens.Last();
            }

            return null;
        }

        public T GetActive<T>() where T : BaseScreen
        {
            for (int i = 0; i < _activeScreens.Count; i++)
            {
                if (_activeScreens[i] != null && _activeScreens[i].GetType() == typeof(T))
                {
                    return (T)_activeScreens[i];
                }
            }

            return null;
        }

        public T GetUI<T>() where T : BaseScreen
        {
            for (int i = 0; i < _createdScreens.Count; i++)
            {
                if (_createdScreens[i] != null && _createdScreens[i].GetType() == typeof(T))
                {
                    return (T)_createdScreens[i];
                }
            }

            return null;
        }

        public List<BaseScreen> GetScreens()
        {
            return CraftUISystemSo.Instance.Screens;
        }
    }
}