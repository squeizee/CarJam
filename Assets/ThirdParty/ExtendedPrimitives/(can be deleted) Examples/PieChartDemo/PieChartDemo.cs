using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11.Examples {

    [DefaultExecutionOrder(80)]
    [ExecuteInEditMode]
    public class PieChartDemo : DemoSceneOnGUI {

        [System.Serializable]
        public class Year {
            public string Name;
            public float Summ;
            public FilletBox Bar;
            public float[] Month;

            public void UpdateSumm() {
                Summ = 0;
                for (int i = 0; i<Month.Length; i++) {
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
            PieChartDemo Parent;
            public float OnStartChangeValue;
            public FilletPie Pie;
            float TargetValue;
            public float CurrentValue;
            float Transition;
            float TransitionSin;
            public LineRenderer lr;

            public float HoverValue;
            public float SelectedValue;

            public void OnStart(int idx, FilletPie pie, PieChartDemo parent) {

                Idx = idx;
                Pie = pie;
                Parent = parent;
                CurrentValue = 1;
                OnStartChangeValue = CurrentValue;
                TargetValue = CurrentValue;
                lr = Pie.Constraints.Side.GetComponent<LineRenderer>();
                if (lr == null) {
                    lr = Pie.Constraints.Side.gameObject.AddComponent<LineRenderer>();
                }
                AnimationCurve curve = new AnimationCurve();
                curve.AddKey(0, 1);
                lr.widthCurve = curve;
                //{ new Keyframe(0, 1f) };

                lr.positionCount = 3;
                lr.useWorldSpace = false;
                lr.numCornerVertices = 4;
                lr.sharedMaterial = Parent.LabelLineMaterial;
            }

            public void UpdateHoverAndSelection(bool isHovered, bool isSelected) {
                float dt = (Application.isPlaying ? Time.deltaTime : 0.2f) * Parent.HoverAndSelectionAnimationSpeed;

                if (isHovered || isSelected) {
                    HoverValue = Mathf.Clamp01(HoverValue + dt);
                } else {
                    HoverValue = Mathf.Clamp01(HoverValue - dt);
                }

                if (isSelected) {
                    SelectedValue = Mathf.Clamp01(SelectedValue + dt);
                } else {
                    SelectedValue = Mathf.Clamp01(SelectedValue - dt);
                }
                float _hoverValue = Extension.LinearToSin(HoverValue);
                float _selectedValue = Extension.LinearToSin(SelectedValue);

                Pie.Size.Height = Mathf.Lerp(Parent.PiesHeight, Parent.PiesHoveredHeight, _hoverValue);
                Pie.Size.Radius = Mathf.Lerp(Parent.PiesRadius, Parent.PiesHoveredRadius, _hoverValue);
                Parent._RadialChart.Elements[Idx].Offset = _selectedValue * Parent.PiesSelectedOffset;
                Parent._RadialChart.Elements[Idx].OutlineWidth = _selectedValue * Parent.PiesSelectedOutlineWidth;
            }



            public void SetNewValue(float newValue) {
                TargetValue = newValue;
                OnStartChangeValue = CurrentValue;
                Transition = 0;
                TransitionSin = 0;
            }

            public void UpdateYearTransition(float deltaTime) {
                CurrentValue = Mathf.Lerp(OnStartChangeValue, TargetValue, TransitionSin);
                Transition  = Mathf.Clamp01( Transition + deltaTime);
                TransitionSin = Extension.LinearToSin(Transition);
            }
        }

        public bool GenerateRandomData;
        public Year[] Years;
        public Month[] Months = new Month[12];
        public RadialChart _RadialChart;

        public Camera MainCam;
        int _selectedYear = -1;
        public int SelectedYear = 0;

        public int HoveredMonthIndex = -1;
        public int SelectedMonthIndex = -1;

        public Camera BarCamera;
        public float YearBarSpacing = 2;
        public float YearBarOffset = 2;
        public float YearBarWidth = 0.7f;
        public Transform YearBarPlanar;

        public float LabelLineWidth = 0.01f;
        public float LabelLineRadialOffset = 1f;
        public float LabelLineHeightOffset = 1f;
        public Material LabelLineMaterial;

        public float HoverAndSelectionAnimationSpeed = 2f;
        public float PiesHeight = 0.8f;
        public float PiesHoveredHeight = 1f;
        public float PiesSelectedOffset = 0.2f;
        public float PiesSelectedOutlineWidth = 0.1f;
        public float PiesRadius = 3f;
        public float PiesHoveredRadius = 3.2f;

        public GUIStyle LabelStyle;
        bool clickIsUsed;



        private void OnEnable() {
            Init();
        }

        void Init() {
            _selectedYear = -1;
            for (int y = 0; y<Years.Length; y++) {
                Years[y].UpdateSumm();
            }

            for (int i = 0; i < 12; i++) {
                Months[i].OnStart(i, (FilletPie)_RadialChart.Elements[i].Primitive, this ) ;
                Months[i].Name = _RadialChart.Elements[i].Name;
            }
 
        }

        void Update() {
            clickIsUsed = false;
            //DoGenerateRandomData();
            UpdateYearBar();
            SelectYear();
            UpdateMonths();
           
  
        }

        public override void DrawOnGUI() {
            for (int i = 0; i<Months.Length; i++) {
                if (_RadialChart.Elements[i].Primitive._MeshRenderer.enabled) {
                    Vector3 anchorPos = Months[i].Pie.Constraints.Side.localToWorldMatrix.MultiplyPoint3x4(new Vector3(LabelLineRadialOffset, LabelLineHeightOffset, 0));
                    Vector2 screenPos = MainCam.WorldToScreenPoint(anchorPos);
                    screenPos.y = Screen.height - screenPos.y;
                    Rect r = new Rect(screenPos - new Vector2(48, 11), new Vector2(96, 22));
                    string labelText = string.Format("{0} {1}%", _RadialChart.Elements[i].Name, (_RadialChart.Elements[i].NormalizedValue * 100).ToString("F1"));
                    GUI.Label(r, labelText, LabelStyle);
                }
            }
        }

        void SelectYear() {
            if (Input.GetMouseButtonDown(0)) {
                Ray r = BarCamera.ScreenPointToRay(Input.mousePosition);
                for (int i = 0; i < Years.Length; i++) {
                    if (Years[i].Bar.Collider.Raycast(r)) {
                        SelectedYear = i;
                        clickIsUsed = true;
                        break;
                    }
                }
            }

            SelectedYear = Mathf.Clamp(SelectedYear, 0, Years.Length - 1);
            if (_selectedYear != SelectedYear) {
                _selectedYear = SelectedYear;

                for (int i = 0; i < 12; i++) {
                    Months[i].SetNewValue(Years[SelectedYear].Month[i]);
                }

                //Debug.Log("Setted new year");
            }
        }

        void UpdateYearBar() {
            Vector3 camRightBottomPos = Vector3.zero;
            camRightBottomPos.x += BarCamera.orthographicSize * BarCamera.aspect;
            camRightBottomPos.y -= BarCamera.orthographicSize ;
            camRightBottomPos.z += 7;
            camRightBottomPos.y += YearBarOffset;
            camRightBottomPos.x -= YearBarWidth/2 + YearBarOffset;

            //VisualDebug.DrawPoint(BarCamera.transform.localToWorldMatrix.MultiplyPoint3x4( camRightBottomPos), 0.2f, Color.red);

            float maxSumm = 0;

            for (int i = Years.Length-1; i>=0; i--) {
                Years[i].Bar.transform.localPosition = camRightBottomPos;
                Years[i].Bar.Size.Width = YearBarWidth;
                Years[i].Bar.Size.Length = YearBarWidth;
                
                camRightBottomPos.x -= YearBarSpacing;
                Color c = i == SelectedYear ? Color.white : Color.black;
                Years[i].mpb.SetColor("_OutlineColor", c);
                float w = i == SelectedYear ? 0.1f : 0.05f;
                Years[i].mpb.SetFloat("_Outline", w);
                Years[i].Bar._MeshRenderer.SetPropertyBlock(Years[i].mpb);

                maxSumm = Mathf.Max(maxSumm, Years[i].Summ);
            }

            for (int i = 0; i <Years.Length; i++) {
                Years[i].Bar.Size.Height = 10 * Years[i].Summ / maxSumm;
                Years[i].Bar.Apply();
            }


            camRightBottomPos.x += YearBarSpacing;
            camRightBottomPos.x -= YearBarWidth / 2;
            Vector3 planarScale = new Vector3(YearBarWidth + YearBarSpacing * (Years.Length-1), 10,0 );
            YearBarPlanar.localPosition = camRightBottomPos;
            YearBarPlanar.localScale = planarScale;
        }

        void DoGenerateRandomData() {
            if (GenerateRandomData) {
                for (int i = 0; i < Years.Length; i++) {
                    Years[i].Month = new float[12];
                    Years[i].Summ = 0;
                    for (int m = 0; m < Years[i].Month.Length; m++) {
                        float _from = (i+1) * 20 ;
                        float _to = (i+1) * 100 ;
                        Years[i].Month[m] = Random.Range(_from, _to);
                        Years[i].Summ += Years[i].Month[m];
                    }
                }

                GenerateRandomData = false;
            }
        }

        void UpdateMonths() {
            float dt = Application.isPlaying ? Time.deltaTime : 0.1f;

            float raycastMinDist = float.MaxValue;
            Ray r = MainCam.ScreenPointToRay(Input.mousePosition);
            Vector3 hit = Vector3.zero;
 
 
            int newSelection = -1;


            for (int i = 0; i < 12; i++) {
                Month m = Months[i];
                _RadialChart.Elements[i].Value = m.CurrentValue;
                m.UpdateYearTransition(dt);
                m.lr = m.Pie.Constraints.Side.gameObject.GetComponent<LineRenderer>();
                m.lr.enabled = _RadialChart.Elements[i].Primitive._MeshRenderer.enabled;
                m.lr.widthMultiplier = LabelLineWidth;
                m.lr.SetPosition(0, Vector3.zero);
                m.lr.SetPosition(1, new Vector3(LabelLineRadialOffset, 0, 0));
                m.lr.SetPosition(2, new Vector3(LabelLineRadialOffset, LabelLineHeightOffset, 0));
                float d = 0;
                if (m.Pie.Collider.Raycast(r, ref hit, ref d)){
                    if (d < raycastMinDist) {
                        raycastMinDist = d;
                        newSelection = i;
                     }
                }
            }

            HoveredMonthIndex = newSelection;

            if (Input.GetMouseButtonDown(0) && clickIsUsed == false) {
                if (newSelection == SelectedMonthIndex) {
                    SelectedMonthIndex = -1;
                } else {
                    SelectedMonthIndex = newSelection;
                }
            }

            for (int i = 0; i < 12; i++) {
                Month m = Months[i];
                m.UpdateHoverAndSelection(i == HoveredMonthIndex, i == SelectedMonthIndex);
            }

            //_RadialChart.UpdateElements( SelectedMonthIndex );
             
        }
    }
}
