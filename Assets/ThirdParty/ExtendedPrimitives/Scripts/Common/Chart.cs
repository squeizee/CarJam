using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11 {

    [HelpURL("http://polyflow.studio/ExtendedPrimitivesDocumentation/ExtendedPrimitives_Documentation.html")]
    public abstract class Chart : MonoBehaviour {



        [System.Serializable]
        public class Element {
 
            public string Name;
            [HideInInspector]
            public float pValue = -1;
            public float Value = 1;

            [HideInInspector]
            public ExtendedPrimitive Primitive;

            [HideInInspector]
            public float NormalizedValue = 1;

            [Tooltip("Position offset")]
            public float Offset = 0;

            [A_ExpColor32("Main material color")]
            public ExpColor32 MainColor = ColorExtension.GetRandomColor;
            [A_ExpColor32("Outline color. Displayed when used outlined shader such as Custom/ExtendedPrimitives/OutlinedLit ")]
            public ExpColor32 OutlineColor = Color.white;

            [A_ExpFloat("Outline width. Displayed when used outlined shader such as Custom/ExtendedPrimitives/OutlinedLit ")]
            public ExpFloat OutlineWidth = 0;


            MaterialPropertyBlock mpb;
            public MaterialPropertyBlock MPB {
                get {
                    if (mpb == null) {
                        mpb = new MaterialPropertyBlock();
                    }
                    return mpb;
                }
            }

            public Element(string name) {
                Name = name;
            }

            public void UpdateMaterialProperties() {
                bool isPropertyChanged = false;
                if (MainColor.isChanged) {
                    MPB.SetColor("_Color", MainColor);
                    isPropertyChanged = true;
                }

                if (OutlineColor.isChanged) {
                    MPB.SetColor("_OutlineColor", OutlineColor);
                    isPropertyChanged = true;
                }

                if (OutlineWidth.isChanged) {
                    MPB.SetFloat("_Outline", OutlineWidth);
                    isPropertyChanged = true;
                }

                if (isPropertyChanged) {
                    Primitive._MeshRenderer.SetPropertyBlock(MPB);
                }
            }
        }

        public List<Element> Elements = new List<Element>(new Element[3] { new Element("Value 0"), new Element("Value 1"), new Element("Value 2") });
        int prevElementsCount = -1;

        public UpdateModeEnum UpdateMode = UpdateModeEnum.Update;

        [A_ExpBool("Show/hide primitives GameObjects in Hierarhy", false)]
        public ExpBool ShowPrimitivesInHierarhy;

        [Tooltip("Disables element`s MeshRenderer when value less than")]
        public float HideLessThan = 0.01f;

        [Tooltip("Override material")]
        public Material OverrideMaterial;
        Material prevMaterial;
 
        [A_OverrideFloatParam("Fillet radius")]
        public OverrideFloatParam OverrideFilletRadius = new OverrideFloatParam( 0.03f );

        void OnEnable() {
            prevElementsCount = -1;
            ShowPrimitivesInHierarhy.isChanged = true;
            Apply();
        }

        void LateUpdate() {
            if (UpdateMode == UpdateModeEnum.LateUpdate) {
                Apply();
            }
        }

        void Update() {
            if (UpdateMode == UpdateModeEnum.Update) {
                Apply();
            }
        }

        public virtual void Apply() {
            if (Elements.Count != prevElementsCount) {
                OnCountChanged();
                UpdateElements(0);
            }

            if (prevMaterial != OverrideMaterial && OverrideMaterial != null) {
                for (int i = 0; i < Elements.Count; i++) {
                    Elements[i].Primitive._MeshRenderer.sharedMaterial = OverrideMaterial;
                }
                prevMaterial = OverrideMaterial;
            }

            for (int i = 0; i < Elements.Count; i++) {
                Elements[i].UpdateMaterialProperties();
                Elements[i].Primitive._MeshRenderer.enabled = HideLessThan < Elements[i].Value;
                Elements[i].Primitive.UpdateMode = UpdateMode;
            }

            if (ShowPrimitivesInHierarhy.isChanged) {
                for (int i = 0; i < Elements.Count; i++) {
                    Elements[i].Primitive.gameObject.hideFlags = ShowPrimitivesInHierarhy ? HideFlags.None : HideFlags.HideInHierarchy;
                }
                #if UNITY_EDITOR
                try { UnityEditor.EditorApplication.DirtyHierarchyWindowSorting(); } catch { }
                #endif
            }

             UpdateElements(-1);
 
 
        }

        public abstract ExtendedPrimitive CreatePrimitive();

        internal virtual void UpdateElements(int idx) {
            if (OverrideFilletRadius.Enabled) {
                OverrideFilletRadius.ClampZero();
                for (int i = 0; i<Elements.Count; i++) {
                    Elements[i].Primitive.FilletRadius = OverrideFilletRadius.Value;
                }
            }
        } 
 
        void OnCountChanged() {

            ExtendedPrimitive[] childPrimitivess = GetComponentsInChildren<ExtendedPrimitive>();
            List<ExtendedPrimitive> unUsedPrimitives = new List<ExtendedPrimitive>();
            //filter zero length
            if (Elements.Count == 0) {
                Elements.Add(new Element(string.Format("Value {0}", 0)));
            }

            //filter null
            for (int i = 0; i<Elements.Count; i++) {
                if (Elements[i] == null) {
                    Elements[i] = new Element(string.Format("Value {0}", i)); 
                }
            }

            // collect unused primitives
            for (int i = 0; i < childPrimitivess.Length; i++) {
                ExtendedPrimitive childPrimitive = childPrimitivess[i];
                bool isUsed = false;
                for (int e = 0; e < Elements.Count; e++) {
                    if (Elements[e].Primitive == childPrimitive) {
                        isUsed = true;
                        break;
                    }
                }
                if (isUsed == false) {
                    unUsedPrimitives.Add(childPrimitive);
                }
            }


            //delete unused primitives
            for (int i = 0; i < unUsedPrimitives.Count; i++) {
                DestroyImmediate(unUsedPrimitives[i].gameObject);
            }

            //Filter duplicates;
            List<ExtendedPrimitive> usedPrimitives = new List<ExtendedPrimitive>();
            for (int i = 0; i < Elements.Count; i++) {
                if (Elements[i].Primitive != null) {
                    if (usedPrimitives.Contains(Elements[i].Primitive)) {
                        Elements[i].Primitive = null;
                    } else {
                        usedPrimitives.Add(Elements[i].Primitive);
                    }
                }
            }

            //fill empty elements
            for (int i = 0; i < Elements.Count; i++) {
                if (Elements[i].Primitive == null) {
                    Elements[i].Primitive = CreatePrimitive();
                    Elements[i].MainColor = ColorExtension.GetRandomColor;
                }
                Elements[i].Primitive.name = string.Format("Value {0}", i);
            }

            Elements[0].pValue = Elements[0].Value + 1;
            prevElementsCount = Elements.Count;
            ShowPrimitivesInHierarhy.isChanged = true;

            //Debug.Log("Count changed");
        }

        public void SetElementsCount(int count) {
            count = Mathf.Clamp(count, 2, 128);
            List<Element> newList = new List<Element>(new Element[count]);
            for (int i = 0; i<newList.Count; i++) {
                if (i < Elements.Count) {
                    newList[i] = Elements[i];
                }
            }
            Elements = newList;
            OnCountChanged();
        }

        internal float GetSummValues() {
            float summValues = 0;
            for (int i = 0; i < Elements.Count; i++) {
                summValues += Elements[i].Value;
            }
            return summValues;
        }

        public bool Raycast(Ray r, ref Vector3 hit, ref float hitDistance, ref int elementIdx) {
            bool result = false;
            hitDistance = float.MaxValue;
            Vector3 ihit = new Vector3();
            for (int i = 0; i<Elements.Count; i++) {
                float ihitDistance = 0;
              
                if (Elements[i].Primitive.Collider.Raycast(r, ref ihit, ref ihitDistance)){
                    if (ihitDistance < hitDistance) {
                        elementIdx = i;
                        hitDistance = ihitDistance;
                        result = true;
                        hit = ihit;
                    }
                }
            }
            return result;
        }
    }
}
