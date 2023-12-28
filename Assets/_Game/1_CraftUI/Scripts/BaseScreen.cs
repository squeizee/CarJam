using DG.Tweening;
using Library.ScreenManagement.Scripts.Animation;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.UI;

namespace Library.ScreenManagement.Scripts
{
    [RequireComponent(typeof(Canvas), typeof(GraphicRaycaster))]
    public abstract class BaseScreen : MonoBehaviour
    {
        public Canvas Canvas
        {
            get
            {
                if (_canvas != null)
                {
                    return _canvas;
                }

                _canvas = GetComponent<Canvas>();
                return _canvas;
            }
        }

        private Canvas _canvas;

        public GraphicRaycaster GraphicRaycaster
        {
            get
            {
                if (_graphicRaycaster != null)
                {
                    return _graphicRaycaster;
                }

                _graphicRaycaster = GetComponent<GraphicRaycaster>();
                return _graphicRaycaster;
            }
        }

        private GraphicRaycaster _graphicRaycaster;

        [Header("Screen References")] public Image Background;
        public CanvasGroup Content;
        public bool ActivateOnStart = false;
        [ShowIf(nameof(ActivateOnStart))] public int InitialSortingOrder = 0;

        public BaseScreenArgs Args;
        private CraftUISystem _craftUISystem;
        protected Sequence Sequence;

        public void Initialize(CraftUISystem craftUISystem)
        {
            _craftUISystem = craftUISystem;
            Canvas.enabled = false;
            GraphicRaycaster.enabled = false;
        }

        public void Setup(BaseScreenArgs args)
        {
            Args = args;
        }

        public void Clear()
        {
        }

        public void Close()
        {
            _craftUISystem.Close(this);
        }

        public virtual BaseScreenAnimationCommand GetAnimationCommand()
        {
            return new InstantScreenAnimationCommand();
        }

        public virtual void OnInitialize()
        {
        }

        public virtual void OnSetup()
        {
        }

        public virtual void OnOpen()
        {
        }

        public virtual void OnCloseBegin()
        {
        }

        public virtual void OnClose()
        {
        }

        public virtual void OnClear()
        {
        }

        public virtual void OnShow()
        {
        }

        public virtual void OnHide()
        {
        }
    }

    public abstract class BaseScreen<TArgs> : BaseScreen
        where TArgs : BaseScreenArgs
    {
        public TArgs GetArgs()
        {
            return (TArgs)Args;
        }
    }
}