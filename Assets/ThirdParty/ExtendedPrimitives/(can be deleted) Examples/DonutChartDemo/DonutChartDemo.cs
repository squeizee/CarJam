using System.Collections;
using System.Collections.Generic;
using UnityEngine;
 

 namespace ExtendedPrimitives_11.Examples {

    [ExecuteInEditMode]
    [DefaultExecutionOrder(80)]
    public class DonutChartDemo : DemoSceneOnGUI {

        [System.Serializable]
        public class DonutItem {
            public SinAnimator AngleAnimator;
            public SinAnimator HeightAnimator;
            public SinAnimator RadiusAnimator;
            public string Name;
            public float SelectedAnimValue;
        }

        public Camera Cam;
        public Camera TopCamera;
        public float TopViewCornerOffset = 2;

        public float OutlineWidth;
        public bool AnimateValues = true;
        public int Selected;

        public AnimationCurve OnSelectMoveCurve;
        public AnimationCurve OnDeselectMoveCurve;

        public RadialChart DonutChart;
        public DonutItem[] Items;
        public ExtendedPrimitivesDemoSceneManager Manager;

        public ExtendedPrimitivesDemoSceneManager.Toggle FixedRadiusToggle;
        public ExtendedPrimitivesDemoSceneManager.Slider RadiusSlider;

        public ExtendedPrimitivesDemoSceneManager.Toggle FixedHeightToggle;
        public ExtendedPrimitivesDemoSceneManager.Slider HeightSlider;

        public ExtendedPrimitivesDemoSceneManager.Slider FilletRadiusSlider;
        public ExtendedPrimitivesDemoSceneManager.Slider SliceFilletRadiusSlider;


        public bool AlignLabelsToCamera;
        public float LabelsScale = 0.03312134f;

        void Start() {
            if (Application.isPlaying) {
                //Items = new DonutItem[DonutChart.Elements.Length];
                for (int i = 0; i < Items.Length; i++) {
                    DonutItem item = Items[i];
                    item.AngleAnimator = new SinAnimator(1, 10, .5f);
                    item.HeightAnimator = new SinAnimator(0.2f, 1.5f, .1f);
                    item.RadiusAnimator = new SinAnimator(0.3f, 3, .1f);
                }
            }
        }
 
        public override void DrawOnGUI() {
            FixedRadiusToggle.Draw();
            RadiusSlider.Draw();
            FixedHeightToggle.Draw();
            HeightSlider.Draw();
            FilletRadiusSlider.Draw();
            SliceFilletRadiusSlider.Draw();
        }

        void Update() {
            float ocHeight =  TopCamera.orthographicSize;
            float ocWidth = ocHeight * TopCamera.aspect;
            TopCamera.transform.localPosition = new Vector3(-ocWidth+TopViewCornerOffset, TopCamera.transform.localPosition.y, ocHeight-TopViewCornerOffset);

            if (!Application.isPlaying) {
                return;
            }

            for (int i = 0; i < Items.Length; i++) {
                DonutItem item = Items[i];

                if (AnimateValues) {
                    item.AngleAnimator.Update();
                    item.HeightAnimator.Update();
                    item.RadiusAnimator.Update();
                    DonutChart.Elements[i].Value = item.AngleAnimator.Result;
                    FilletDonut p = (FilletDonut)DonutChart.Elements[i].Primitive;

                    p.Size.FilletRadius = FilletRadiusSlider.Value;
                    p.Size.SliceFilletRadius = SliceFilletRadiusSlider.Value;


                    if (FixedHeightToggle.Value) {
                        p.Height = HeightSlider.Value;
                    } else {
                        p.Height = item.HeightAnimator.Result;
                    }

                    if (FixedRadiusToggle.Value) {
                        p.Size.InnerRadius = 0.5f;
                        p.Size.Radius = 0.5f + RadiusSlider.Value;
                    } else {
                        p.Size.InnerRadius = 1.5f - item.RadiusAnimator.Result / 2;
                        p.Size.Radius = 1.5f + item.RadiusAnimator.Result / 2;
                    }
                }
            }
 
            //RAYCAST SELECT
            if (Input.GetMouseButtonDown(0)) {
                float minDist = float.MaxValue;
                
                Vector3 hit = Vector3.zero;
                bool findedInTopCam = false;
                Ray r = TopCamera.ScreenPointToRay(Input.mousePosition);
                Debug.DrawRay(r.origin, r.direction * 30, Color.yellow);
 
                minDist = float.MaxValue;
                for (int i = 0; i < Items.Length; i++) {
                    float dist = 0;
                    if (DonutChart.Elements[i].Primitive.Collider.Raycast(r, ref hit, ref dist)) {
                        findedInTopCam = true;
                        if (dist < minDist) {
                            minDist = dist;
                            Selected = Selected == i ? -1 : i;
                        }
                    }
                }

                if (!findedInTopCam) {
                    r = Cam.ScreenPointToRay(Input.mousePosition);
                    Debug.DrawRay(r.origin, r.direction * 30, Color.red);
                    for (int i = 0; i < Items.Length; i++) {
                        float dist = 0;
                        if (DonutChart.Elements[i].Primitive.Collider.Raycast(r, ref hit, ref dist)) {

                            if (dist < minDist) {
                                minDist = dist;
                                Selected = Selected == i ? -1 : i;
                            }
                        }
                    }
                }
            }

            //UPDATE SELECTION ANIMATION
            for (int i = 0; i < Items.Length; i++) {
                DonutItem item = Items[i];
                bool isSelected = i == Selected;
                float sign = isSelected ? 2 : -2;
                item.SelectedAnimValue  = Mathf.Clamp01(item.SelectedAnimValue + Time.deltaTime * sign);
                float sv = sign>0? OnSelectMoveCurve.Evaluate( item.SelectedAnimValue  ) : OnDeselectMoveCurve.Evaluate(item.SelectedAnimValue);
                DonutChart.Elements[i].Offset = sv;
                DonutChart.Elements[i].OutlineWidth = sv * 0.05f ;
            }

        }

 
    }

}
