using System;
using Sirenix.OdinInspector;
using UnityEngine;

namespace _Game._9_Marketplace.Scripts
{
    public class UVScaler : MonoBehaviour
    {
        [SerializeField] private float _scale;
        [SerializeField] private MeshFilter _meshFilter;
        [SerializeField] private Mesh _mesh;
        public float RefScale = 1;

        private void Start()
        {
            _scale = 0.4f;
            Updatem();
        }


        [Button]
        private void Updatem()
        {
            if (_meshFilter == null)
            {
                _meshFilter = GetComponent<MeshFilter>();
            }

            if (_meshFilter == null)
            {
                return;
            }

            if (IsUVUpdated())
            {
                return;
            }

            _mesh = _meshFilter.sharedMesh;

            RefScale *= _scale;
            Vector2[] uvs = _mesh.uv;
            for (int i = 0; i < uvs.Length; i++)
            {
                uvs[i] = uvs[i] * _scale;
            }

            _mesh.uv = uvs;

            _meshFilter.sharedMesh = _mesh;
        }

        public bool IsUVUpdated()
        {
            // find the largest uv coordinate
            Vector2[] uvs = _meshFilter.sharedMesh.uv;
            float maxU = 0;
            float maxV = 0;
            for (int i = 0; i < uvs.Length; i++)
            {
                if (uvs[i].x > maxU)
                {
                    maxU = uvs[i].x;
                }

                if (uvs[i].y > maxV)
                {
                    maxV = uvs[i].y;
                }
            }

            return Math.Abs(maxU - _scale) < 0.2f && Math.Abs(maxV - _scale) > 0.2f;
        }
    }
}