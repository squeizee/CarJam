using System;
using _Game.Systems._CoreSystem.Scripts;
using UnityEngine;
using UnityEngine.EventSystems;

namespace Modules.Shared.Controller
{
    public class CraftInputSystem : BaseCraftSystemMono
    {
        public Action<Vector3> UserDragged;
        public Action<Vector3> UserButtonUp;
        public Action<Vector3> UserButtonUpAll;

        public Action<Vector3> UserButtonDown;
        public Action<Vector3> UserButtonDownAll;
        public float LastClickTime = 0;
        public Vector3 lastButtonPosition;
        public Vector3 lastClickPositionForDragCalculations;

        public void Awake()
        {
            lastClickPositionForDragCalculations = Vector3.one * 1000;
        }

        public void Update()
        {
            if (Input.GetMouseButtonDown(0))
            {
                UserButtonDownAll?.Invoke(Input.mousePosition);
            }

            if (Input.GetMouseButtonUp(0))
            {
                UserButtonUpAll?.Invoke(Input.mousePosition);
            }

            if (Input.GetMouseButtonUp(0))
            {
                UserButtonUp?.Invoke(Input.mousePosition);
                lastButtonPosition = Input.mousePosition;
                lastClickPositionForDragCalculations = Vector3.one * 1000;
            }

#if UNITY_EDITOR
            if (EventSystem.current.IsPointerOverGameObject())
            {
                return;
            }

#else
        if (Input.touchCount > 0)
        {
     if (EventSystem.current.IsPointerOverGameObject(Input.touches[0].fingerId))   {
return;}    
     
        }
#endif
            if (Input.GetMouseButtonDown(0))
            {
                UserButtonDown?.Invoke(Input.mousePosition);
                LastClickTime = Time.time;
                lastButtonPosition = Input.mousePosition;
                lastClickPositionForDragCalculations = Input.mousePosition;
            }
        }

        public float GetLastClickDuration()
        {
            return Time.time - LastClickTime;
        }

        public void FixedUpdate()
        {
            if (Input.GetMouseButton(0) && lastClickPositionForDragCalculations != Vector3.one * 1000)
            {
                UserDragged?.Invoke(Input.mousePosition - lastClickPositionForDragCalculations);
                lastButtonPosition = Input.mousePosition;
                lastClickPositionForDragCalculations = Input.mousePosition;
            }
        }

        public bool GetGameObjectUnderMouse(LayerMask layerMask, out GameObject underMouse, out RaycastHit hit)
        {
            if (Camera.main != null)
            {
                var ray = Camera.main.ScreenPointToRay(Input.mousePosition);

                if (Physics.Raycast(ray, out hit, Mathf.Infinity, layerMask))
                {
                    underMouse = hit.transform.gameObject;
                    return true;
                }
            }

            hit = new RaycastHit();
            underMouse = null;
            return false;
        }

        public bool GetGameObjectUnderMouse(out GameObject objectUnderMouse)
        {
            if (Camera.main != null)
            {
                var ray = Camera.main.ScreenPointToRay(Input.mousePosition);

                RaycastHit hit;
                if (Physics.Raycast(ray, out hit, Mathf.Infinity))
                {
                    objectUnderMouse = hit.transform.gameObject;
                    return true;
                }
            }

            objectUnderMouse = null;
            return false;
        }

        public bool GetGameObjectUnderMouseSphere(out GameObject objectUnderMouse, out RaycastHit hit, float radius,
            LayerMask mask)
        {
            if (Camera.main != null)
            {
                var ray = Camera.main.ScreenPointToRay(Input.mousePosition);

                if (Physics.SphereCast(ray, radius, out hit, Mathf.Infinity, mask))
                {
                    objectUnderMouse = hit.transform.gameObject;
                    return true;
                }
            }

            hit = new RaycastHit();
            objectUnderMouse = null;
            return false;
        }
    }
}