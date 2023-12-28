using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using _Game.Systems._CoreSystem.Scripts;
using DG.Tweening;
using UnityEngine;

namespace Modules.Shared.Controller
{
    public class CraftCameraSystem : BaseCraftSystem, ICraftSystem
    {
        [SerializeField] private int referenceWidth = 1125;
        [SerializeField] private int referenceHeight = 2436;
        public static Action<int> LevelStarted;
        public Camera Camera => Camera.main;
        private Tween _cameraTween;

        public CraftCameraSystem()
        {
            Priority = 0;
        }
        

        public Tween SetCameraDataSmooth(CameraData cameraData)
        {
            var currentCameraData = GetCameraData();

            _cameraTween?.Kill();
            _cameraTween = DOVirtual.Float(0, 1, 0.7f, (value =>
            {
                Camera.transform.position = Vector3.Lerp(currentCameraData.Position, cameraData.Position, value);
                Camera.transform.rotation = Quaternion.Lerp(Quaternion.Euler(currentCameraData.Rotation),
                    Quaternion.Euler(cameraData.Rotation), value);
                Camera.fieldOfView = Mathf.Lerp(currentCameraData.Fov, cameraData.Fov, value);
                Camera.nearClipPlane =
                    Mathf.Lerp(currentCameraData.ClippingPlanes.x, cameraData.ClippingPlanes.x, value);
                Camera.farClipPlane =
                    Mathf.Lerp(currentCameraData.ClippingPlanes.y, cameraData.ClippingPlanes.y, value);
            }));
            return _cameraTween;
        }

        public void SetCameraData(CameraData cameraData)
        {
            Camera.transform.position = cameraData.Position;
            Camera.transform.rotation = Quaternion.Euler(cameraData.Rotation);
            Camera.fieldOfView = cameraData.Fov;
            Camera.nearClipPlane = cameraData.ClippingPlanes.x;
            Camera.farClipPlane =cameraData.ClippingPlanes.y;

        }

        public void SetCameraSettings(Vector3 pos, Quaternion Rot, float fov)
        {
            Camera.transform.position = pos;
            Camera.transform.rotation = Rot;
            Camera.fieldOfView = fov;
        }


        private float ReferenceRatio => (referenceHeight * 1f) / (referenceWidth * 1f);

        public float GetCurrentWidth()
        {
            var height = Camera.orthographicSize * 2f;
            var width = height * Camera.aspect;
            return width;
        }

        public Vector4 GetWorldCornersOfScreen()
        {
            List<Vector3> positions = new List<Vector3>();
            positions.Add(Camera.ViewportToWorldPoint(new Vector3(1, 1, 0)));
            positions.Add(Camera.ViewportToWorldPoint(new Vector3(1, 0, 0)));
            positions.Add(Camera.ViewportToWorldPoint(new Vector3(0, 1, 0)));
            positions.Add(Camera.ViewportToWorldPoint(new Vector3(0, 0, 0)));
            float maxX = int.MinValue;
            float minX = int.MaxValue;
            float maxY = int.MinValue;
            float minY = int.MaxValue;
            foreach (Vector3 position in positions)
            {
                maxX = Mathf.Max(maxX, position.x);
                minX = Mathf.Min(minX, position.x);
                maxY = Mathf.Max(maxY, position.y);
                minY = Mathf.Min(minY, position.y);
            }

            return new Vector4(maxX, minX, maxY, minY);
        }

        public static Vector2 GetScaledScreenResolution()
        {
            Vector2 referenceResolution = new Vector2(1125, 2436);
            float scaleFactor = referenceResolution.y / Screen.height;
#if UNITY_EDITOR
            scaleFactor = referenceResolution.y / Camera.main.pixelHeight;
            return new Vector2(Camera.main.pixelWidth * scaleFactor, referenceResolution.y);
#endif
            return new Vector2(Screen.width * scaleFactor, referenceResolution.y);
        }

        public CameraData GetCameraData()
        {
            return new CameraData()
            {
                Position = Camera.transform.position,
                Rotation = (Camera.transform.rotation.eulerAngles),
                Fov = Camera.fieldOfView,
                ClippingPlanes = new Vector2(Camera.nearClipPlane, Camera.farClipPlane)
            };
        }
    }

    [Serializable]
    public class CameraData
    {
        public Vector3 Position;
        public Vector3 Rotation;
        public float Fov;
        public Vector2 ClippingPlanes;
    }
}