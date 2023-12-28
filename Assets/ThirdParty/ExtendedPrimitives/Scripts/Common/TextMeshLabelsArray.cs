using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11 {

    [System.Serializable]
    public class TextMeshLabelsArray {

        [System.Serializable]
        public class Item {
            Transform Root;
            public int Idx;
            public Transform TMtransform;
            public TextMesh TM;
 
            public Item(TextMeshLabelsArray parent, Transform root, int idx) {
                Idx = idx;
                Root = root;
                TMtransform = (new GameObject(string.Format("{0} label #{1}", parent.Name, idx))).transform;
                TMtransform.parent = Root;
                TM = TMtransform.gameObject.AddComponent<TextMesh>();
                TM.alignment = TextAlignment.Center;
                TM.anchor = TextAnchor.MiddleCenter;
            }

            public void Delete() {
                if (TMtransform != null) {
                    GameObject.DestroyImmediate(TMtransform.gameObject);
                }
            }

            public void SetPositionAndSize(TextMeshLabelsArray parent, Vector3 pos, Quaternion rotation) {
                TMtransform.localPosition = pos;
                TMtransform.localRotation = rotation;
                TMtransform.localScale = Vector3.one * parent.FontScale;
                TM.fontSize = parent.FontSize;
            }

            public void SetPositionAndSize(TextMeshLabelsArray parent, Vector3 pos, Vector3 textUpDir) {
                TMtransform.localPosition = pos;
                TMtransform.localRotation = Quaternion.LookRotation(-Vector3.up, textUpDir);
                TMtransform.localScale = Vector3.one * parent.FontScale;
                TM.fontSize = parent.FontSize;
            }

            public void SetPositionAndSize(TextMeshLabelsArray parent, Vector3 pos ) {
                TMtransform.localPosition = pos;
                TMtransform.localRotation = Quaternion.LookRotation(-Vector3.up, Vector3.forward);
                TMtransform.localScale = Vector3.one * parent.FontScale;
                TM.fontSize = parent.FontSize;
            }

            public void SetStrings( TextMeshLabelsArray parent ) {
                string numberText = Mathf.Lerp(parent.NameValueFrom, parent.NameValueTo, Idx / (float)parent.items.Length).ToString( parent.ToStringFormat );
                if (parent.CustomNames.Length > Idx) {
                    TM.text = parent.CustomNames[Idx];
                } else {
                    TM.text = TryFormat(parent.NamePattern, numberText);
                }
                if (parent.TextFont != null) {
                    TM.font = parent.TextFont;
                }
                TM.color = parent.TextColor;
                TM.fontStyle = parent.Style;

            }

            public string TryFormat(string format, params object[] args) {
                string result = format;
                try {
                    result = string.Format(format, args);
                } catch (System.FormatException) {
                    result = format;
                }
                return result;
            }

        }

        [A_ExpBool("Enable labels", false)]
        public ExpBool Enabled;
        public string Name;

        [Header("Position and size settings")]

        [A_ExpInt(1, 64, "Font size")]
        public ExpInt FontSize = 20;

        [A_ExpFloat(0f, 1f, "Scale")]
        public ExpFloat FontScale = 0.1f;

        [A_ExpVector2("Offset")]
        public ExpVector2 Offset;

        [Header("Text settings")]
        public string[] CustomNames = new string[0];
        public string NamePattern = @"#{0}";
        public string ToStringFormat = "F2";
        public float NameValueFrom = 0;
        public float NameValueTo = 10;
        public Color TextColor = Color.white;
        public Font TextFont;
        public FontStyle Style = FontStyle.Normal;

        [A_ExpBool("Align lavels vertically", true)]
        public ExpBool ApplyText;

        [HideInInspector]
        public Item[] items = new Item[0];
 
        public void SetCount(int count, Transform root) {
            for (int i = 0; i < items.Length; i++) {
                items[i].Delete();
            }

            items = new Item[count];
            for (int i = 0; i < items.Length; i++) {
                items[i] = new Item(this, root, i);
            }

            ApplyText.isChanged = true;
        }

        public bool isParamsChanged {
            get {
                return FontSize.isChanged | FontScale.isChanged | Offset.isChanged  ;
            }
        }

        public void UpdateStrings() {
            if (ApplyText.isChanged) {
                for (int i = 0; i<items.Length; i++) {
                    items[i].SetStrings(this);
                }
            }
        }
    }
}
