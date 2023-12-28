using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11.Examples {

    [ExecuteInEditMode]
    [DefaultExecutionOrder(90)]
    public class GraphDemoManager : DemoSceneOnGUI {

        [System.Serializable]
        public class Year {
            public string Name;
            public float Summ;
            public Color _Color;
            public float[] Month;
            public float MaxMonth;

            public void UpdateSumm() {
                Summ = 0;
                MaxMonth = 0;
                for (int i = 0; i < Month.Length; i++) {
                    MaxMonth = Mathf.Max(MaxMonth, Month[i]);
                    Summ += Month[i];
                }
            }
        }
  
        public Year[] Years;
        public FilletGraph Graph;
        public ValueItem[] Items;
        public ExtendedPrimitivesDemoSceneManager.Slider FilletRadius ;
        public ExtendedPrimitivesDemoSceneManager.Slider OutlineFilletRadius;
        public ExtendedPrimitivesDemoSceneManager.Button button2014;
        public ExtendedPrimitivesDemoSceneManager.Button button2015;
        public ExtendedPrimitivesDemoSceneManager.Button button2016;
        public ExtendedPrimitivesDemoSceneManager.Button button2017;
        public ExtendedPrimitivesDemoSceneManager.Button button2018;
 

        [System.Serializable]
        public class ValueItem {
            public float FromValue;
            public float TargetValue;
            public float CurrentValue;
            public float timer;


            public void SetTargetValue( float targetVal) {
                FromValue = CurrentValue;
                TargetValue = targetVal;
                timer = 0;
            }

            public void UpdateValue() {
                CurrentValue = Mathf.Lerp(FromValue, TargetValue, Extension.LinearToSin( Mathf.Clamp01( timer ) ) );
                timer += Time.deltaTime;
            }
        }

        [A_ExpInt( 0, 4, "Year idx" )]
        public ExpInt YearIdx;
        public float GraphHeight = 5f;

        Color fromColor;
        Color targetColor;
        Color currentColor;
        float colorTransitionTimer = 0;


        private void Start() {
            fromColor = Years[YearIdx]._Color;
            currentColor = Years[YearIdx]._Color;
            targetColor = Years[YearIdx]._Color;
        }


        void Update() {
            if (YearIdx.isChanged) {
                float maxMonth = 0;

                for (int i = 0; i<Years.Length; i++) {
                    Years[i].UpdateSumm();
                    maxMonth = Mathf.Max(maxMonth, Years[i].MaxMonth);
                }

                float mult = GraphHeight / maxMonth;
                for (int i = 0; i<Items.Length; i++) {
                    Items[i].SetTargetValue( Years[YearIdx].Month[i] * mult);
                }

                fromColor = currentColor;
                targetColor = Years[YearIdx]._Color;
                colorTransitionTimer = 0;

            }

            currentColor = Color.Lerp(fromColor, targetColor, colorTransitionTimer);
            colorTransitionTimer += Time.deltaTime;
            Graph._MeshRenderer.sharedMaterial.SetColor("_Color", currentColor);

            for (int i = 0; i < Items.Length; i++) {
                Items[i].UpdateValue();
                Graph.Values[i] = Items[i].CurrentValue;
            }

            Graph.Size.FilletRadius = FilletRadius.Value;
            Graph.Size.OutlineFilletRadius = OutlineFilletRadius.Value ;

        }

        public override void DrawOnGUI() {
 
            button2014.DisplayPressed = YearIdx == 0;
            button2015.DisplayPressed = YearIdx == 1;
            button2016.DisplayPressed = YearIdx == 2;
            button2017.DisplayPressed = YearIdx == 3;
            button2018.DisplayPressed = YearIdx == 4;

            if (button2014.DrawButton()) {
                YearIdx = 0;
            }

            if (button2015.DrawButton()) {
                YearIdx = 1;
            }

            if (button2016.DrawButton()) {
                YearIdx = 2;
            }

            if (button2017.DrawButton()) {
                YearIdx = 3;
            }

            if (button2018.DrawButton()) {
                YearIdx = 4;
            }

            FilletRadius.Draw();
            OutlineFilletRadius.Draw();

 
        }
    }
}
