using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ExtendedPrimitives_11.Examples {
    [ExecuteInEditMode]
    public class ShadowPlane : MonoBehaviour {

        public Camera LightCamera;
        public MeshFilter mf;
        public Mesh shadowQuad;
        public Vector3[] Vertices;

        void Update() {

            if (shadowQuad == null) {
                shadowQuad = new Mesh();
                shadowQuad.name = "ShadowQuad mesh";
                int[] tris = new int[6] { 0, 1, 2, 0, 2, 3 };
                Vector2[] uvs = new Vector2[4] { Vector2.zero, Vector2.up, Vector2.one, Vector2.right };
                Vertices = new Vector3[4];
                shadowQuad.vertices = Vertices;
                shadowQuad.triangles = tris;
                shadowQuad.uv = uvs;
            }
            if (mf.sharedMesh == null || mf.sharedMesh != shadowQuad) {
                mf.sharedMesh = shadowQuad;
            }

            Plane p = new Plane(transform.up, transform.position);
            float os = LightCamera.orthographicSize;
            Transform ctm = LightCamera.transform;

            Ray ray = new Ray(ctm.position - ctm.right * os - ctm.up * os, ctm.forward);
            float dist = 0;
            p.Raycast(ray, out dist);
            Vertices[0] = ray.GetPoint(dist);


            ray = new Ray(ctm.position - ctm.right * os + ctm.up * os, ctm.forward);
            dist = 0;
            p.Raycast(ray, out dist);
            Vertices[1] = ray.GetPoint(dist);


            ray = new Ray(ctm.position + ctm.right * os + ctm.up * os, ctm.forward);
            dist = 0;
            p.Raycast(ray, out dist);
            Vertices[2] = ray.GetPoint(dist);


            ray = new Ray(ctm.position + ctm.right * os - ctm.up * os, ctm.forward);
            dist = 0;
            p.Raycast(ray, out dist);
            Vertices[3] = ray.GetPoint(dist);

            Matrix4x4 wtl = transform.worldToLocalMatrix;
            for (int v = 0; v < 4; v++) {
                Vertices[v] = wtl.MultiplyPoint3x4(Vertices[v]);
            }

            shadowQuad.vertices = Vertices;
            shadowQuad.RecalculateNormals();
            shadowQuad.RecalculateBounds();
        }
    }
}
 