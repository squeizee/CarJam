using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11.Examples{ 

    [ExecuteInEditMode]
    [DefaultExecutionOrder(90)]
    public class RadarChartDemo : DemoSceneOnGUI {

        [System.Serializable]
        public class Year {
            public string Name;
            public float Summ;
            public FilletDonut Bar;
            public float[] Month;

            [A_ExpColor32("Year color")]
            public ExpColor32 YearColor = Color.white;

            public void UpdateSumm() {
                Summ = 0;
                for (int i = 0; i < Month.Length; i++) {
                    Summ += Month[i];
                }
            }

            MaterialPropertyBlock _mpb;
            public MaterialPropertyBlock mpb {
                get {
                    if (_mpb == null) {
                        _mpb = new MaterialPropertyBlock();
                    }
                    
                    return _mpb;
                }
            }
        }

        [System.Serializable]
        public class Month {
            public string Name;
            public int Idx;
            public RadarChartDemo Parent;
            public float OnStartChangeValue;

            public float TargetValue;
            public float CurrentValue;
            float Transition;
            float TransitionSin;

            public Month(RadarChartDemo parent, int idx) {
                Idx = idx;
                Parent = parent;
            }

            public void SetNewValue(float newValue) {
                TargetValue = newValue;
                OnStartChangeValue = CurrentValue;
                Transition = 0;
                TransitionSin = 0;
            }

            public void UpdateYearTransition(float deltaTime) {
                CurrentValue = Mathf.Lerp(OnStartChangeValue, TargetValue, TransitionSin);
                Transition = Mathf.Clamp01(Transition + deltaTime);
                TransitionSin = Extension.LinearToSin(Transition);
                Parent.Radar.Values[Idx] = CurrentValue;
            }
        }

        public Year[] Years;

        public Month[] Months;

        [A_ExpFloat( 2, 5)]
        public ExpFloat OuterRadius = 4f;

        [A_ExpFloat(1, 5)]
        public ExpFloat InnerRadius = 0.5f;

        [A_ExpFloat(0, 1)]
        public ExpFloat DonutWidth = 0.1f;

        [A_ExpFloat(0,360)]
        public ExpFloat MaxBarAngle = 270;

        [A_ExpInt(0,4, "Selected Year")]
        public ExpInt SelectedYear;
        public Camera YearBarCamera;
        public Transform YearBarCenter;
        public float YearsBarOffset;
        public Color SelectedOutlineColor = Color.white;
        public Color UnselectedOutlineColor = Color.black;

        public float MaxRadarRadius  = 4.5f;

        public FilletRadar Radar;

        Color FromColor = Color.gray;
        Color ToColor = Color.gray;
        Color CurrentColor = Color.gray;
        float colorTransitionValue = 0;

        public ExtendedPrimitivesDemoSceneManager.Slider FilletRadius;
        public ExtendedPrimitivesDemoSceneManager.Slider OutlineFilletRadius;

        private void Awake() {
            if (Application.isPlaying) {
                StartCoroutine("AnimateMaxBarAngle");
                for (int i = 0; i<12; i++) {
                    Radar.Values[i] = 1;
                    Months[i].CurrentValue = 1;
                    Months[i].SetNewValue( 1f + (i % 2)*2);
                }
            } 
        }

        void OnEnable() {
            for (int y = 0; y < Years.Length; y++) {
                Years[y].YearColor.isChanged = true;
            }

            for (int i = 0; i < 12; i++) {
                Months[i].Parent = this;
            }
 
        }

        void Update() {
            for (int y = 0; y < Years.Length; y++) {
                if (Years[y].YearColor.isChanged) {
                    Years[y].mpb.SetColor("_Color", Years[y].YearColor);
                    Years[y].Bar._MeshRenderer.SetPropertyBlock(Years[y].mpb);
                 }
            }

            if (OuterRadius.isChanged | InnerRadius.isChanged | DonutWidth.isChanged) {
                float delta = OuterRadius - InnerRadius;
                DonutWidth.Set(Mathf.Clamp(DonutWidth, 0, delta / 5f));
                float spacing = (delta - DonutWidth * 5)/4f;

                float rVal = OuterRadius;
                for (int y = 0; y<Years.Length; y++) {
                    int iy = Years.Length - 1 - y;
                    Years[iy].Bar.Size.Radius = rVal;
                    rVal -= DonutWidth;
                    Years[iy].Bar.Size.InnerRadius = rVal;
                    rVal -= spacing;
                }
            }

            if (MaxBarAngle.isChanged) {
                float maxMonthSumm = 0;
                for (int y = 0; y < Years.Length; y++) {
                    maxMonthSumm = Mathf.Max(Years[y].Summ, maxMonthSumm);
                }
                for (int y = 0; y < Years.Length; y++) {
                    Years[y].Bar.Size.Angle = MaxBarAngle * (Years[y].Summ/maxMonthSumm);
                 }
            }

            UpdateYearBarOffset();

            UpdateYearsVisuals();

            if (SelectedYear.isChanged) {
                ToColor = Years[SelectedYear].YearColor;
                FromColor = CurrentColor;
                colorTransitionValue = 0;

                float maxMonthValue = 0;
                for (int i = 0; i<12; i++) {
                    maxMonthValue = Mathf.Max(maxMonthValue,  Years[SelectedYear].Month[i] );
                }

                float mult = MaxRadarRadius / maxMonthValue;

                for (int i = 0; i < 12; i++) {
                    Months[i].SetNewValue(Years[SelectedYear].Month[i] * mult);
                }
            }

            float dt = Application.isPlaying ? Time.deltaTime : 1f;

            CurrentColor = Color.Lerp(FromColor, ToColor, colorTransitionValue);
            colorTransitionValue += dt;

            Radar._MeshRenderer.sharedMaterial.SetColor("_Color", CurrentColor);

            for (int i = 0; i < 12; i++) {
                Months[i].UpdateYearTransition(dt) ;
            }
        }

        void UpdateYearBarOffset() {
            Vector3 localPos = new Vector3();
            localPos.x = YearBarCamera.orthographicSize * YearBarCamera.aspect - YearsBarOffset;
            localPos.y = -YearBarCamera.orthographicSize   + YearsBarOffset;
            localPos.z = 5f;
            YearBarCenter.localPosition = localPos;
        }

        void UpdateYearsVisuals() {
            if (Input.GetMouseButtonDown(0)) {
                Ray r = YearBarCamera.ScreenPointToRay(Input.mousePosition);
                for (int i = 0; i < Years.Length; i++) {
                    if (Years[i].Bar.Collider.Raycast(r)) {
                         
                        SelectedYear = i;
                        break;
                    }
                }
            }

            for (int i = 0; i < Years.Length; i++) {
                Color c = i == SelectedYear ? SelectedOutlineColor : UnselectedOutlineColor;
                Years[i].mpb.SetColor("_OutlineColor", c);
                float w = i == SelectedYear ? 0.05f : 0.025f;
                Years[i].mpb.SetFloat("_Outline", w);
                Years[i].Bar._MeshRenderer.SetPropertyBlock(Years[i].mpb);
            }
        }

        public override void DrawOnGUI() {
             FilletRadius.Draw();
             OutlineFilletRadius.Draw();
             Radar.Size.FilletRadius = FilletRadius.Value;
             Radar.Size.OutlineFilletRadius = OutlineFilletRadius.Value;
        }

        IEnumerator AnimateMaxBarAngle() {
           
            float targetVal = MaxBarAngle;
            MaxBarAngle = 0;
            yield return new WaitForSeconds(0.5f);
            float timer = 0;

            while (timer<=1f) {
                MaxBarAngle = Extension.LinearToSin(timer) * targetVal;
                timer += Time.deltaTime;
                yield return null;
            }
        }
    }
}
