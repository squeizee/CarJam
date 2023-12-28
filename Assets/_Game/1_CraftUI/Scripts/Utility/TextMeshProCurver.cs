using TMPro;
using UnityEngine;

namespace Library.Utility.Scripts.UI
{
    [ExecuteAlways]
    [RequireComponent(typeof(TextMeshProUGUI))]
    public class TextMeshProCurver : MonoBehaviour
    {
        [SerializeField] private float _scale = 1.0f;
        [SerializeField] private AnimationCurve _curve = new(new Keyframe(0, 0), new Keyframe(0.5f, 1.0f), new Keyframe(1, 0f));

        private TextMeshProUGUI _text;
        public TextMeshProUGUI Text
        {
            get
            {
                if (_text != null) return _text;
                _text = GetComponent<TextMeshProUGUI>();
                return _text;
            }
        }

        private void OnValidate()
        {
            CurveText();
        }

        private void OnEnable()
        {
            CurveText();
        }

        private void CurveText()
        {
            _curve.preWrapMode = WrapMode.Clamp;
            _curve.postWrapMode = WrapMode.Clamp;
            
            Text.havePropertiesChanged = true; // Need to force the TextMeshPro Object to be updated.
            Text.ForceMeshUpdate();

            TMP_TextInfo textInfo = Text.textInfo;
            if (textInfo == null) { return; }
            
            int characterCount = textInfo.characterCount;
            if (characterCount == 0) { return; }

            float boundsMinX = Text.bounds.min.x;
            float boundsMaxX = Text.bounds.max.x;
            
            for (int i = 0; i < characterCount; i++)
            {
                if (!textInfo.characterInfo[i].isVisible) { continue; }

                int vertexIndex = textInfo.characterInfo[i].vertexIndex;

                // Get the index of the mesh used by this character.
                int materialIndex = textInfo.characterInfo[i].materialReferenceIndex;

                var vertices = textInfo.meshInfo[materialIndex].vertices;

                // Compute the baseline mid point for each character
                Vector3 offsetToMidBaseline = new Vector2((vertices[vertexIndex + 0].x + vertices[vertexIndex + 2].x) / 2, textInfo.characterInfo[i].baseLine);

                // Apply offset to adjust our pivot point.
                vertices[vertexIndex + 0] += -offsetToMidBaseline;
                vertices[vertexIndex + 1] += -offsetToMidBaseline;
                vertices[vertexIndex + 2] += -offsetToMidBaseline;
                vertices[vertexIndex + 3] += -offsetToMidBaseline;

                // Compute the angle of rotation for each character based on the animation curve
                float x0 = (offsetToMidBaseline.x - boundsMinX) / (boundsMaxX - boundsMinX); // Character's position relative to the bounds of the mesh.
                float x1 = x0 + 0.0001f;
                float y0 = _curve.Evaluate(x0) * _scale * 10f;
                float y1 = _curve.Evaluate(x1) * _scale * 10f;

                Vector3 horizontal = new Vector3(1, 0, 0);
                Vector3 tangent = new Vector3(x1 * (boundsMaxX - boundsMinX) + boundsMinX, y1) - new Vector3(offsetToMidBaseline.x, y0);

                float dot = Mathf.Acos(Vector3.Dot(horizontal, tangent.normalized)) * 57.2957795f;
                Vector3 cross = Vector3.Cross(horizontal, tangent);
                float angle = cross.z > 0 ? dot : 360 - dot;

                var matrix = Matrix4x4.TRS(new Vector3(0, y0, 0), Quaternion.Euler(0, 0, angle), Vector3.one);

                vertices[vertexIndex + 0] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 0]);
                vertices[vertexIndex + 1] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 1]);
                vertices[vertexIndex + 2] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 2]);
                vertices[vertexIndex + 3] = matrix.MultiplyPoint3x4(vertices[vertexIndex + 3]);

                vertices[vertexIndex + 0] += offsetToMidBaseline;
                vertices[vertexIndex + 1] += offsetToMidBaseline;
                vertices[vertexIndex + 2] += offsetToMidBaseline;
                vertices[vertexIndex + 3] += offsetToMidBaseline;
            }

            Text.UpdateVertexData();
        }
    }
}