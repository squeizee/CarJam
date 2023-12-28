using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ExtendedPrimitives_11.Internal;

namespace ExtendedPrimitives_11.Examples {

    [ExecuteInEditMode]
    [DefaultExecutionOrder(90)]
    public class RealtimeGraphDemoManager : DemoSceneOnGUI {
 
        public ExtendedPrimitivesDemoSceneManager SceneManager;
        public FilletGraph Graph;
        public ExtendedPrimitivesDemoSceneManager.Slider ValueSlider = new ExtendedPrimitivesDemoSceneManager.Slider(3, 1, 5, new Rect(20, 30, 120, 40), ExtendedPrimitivesDemoSceneManager.AnchorType.Bottom, new GUIContent("Value slider"));

        public Queue<float> vel = new Queue<float>(64);

        public float GraphHeight = 5f;
        float[] dataArr;
 
        public float smoothedValue;


        public int UpdatesPerSeconds = 30;
        float timer = 0;
        Vector2 prevMousePos;
 
        void Update() {
            if (vel.Count != 64) {
                vel = new Queue<float>(new float[64]);
                dataArr = new float[64];
            }

 
            smoothedValue = Mathf.Lerp(smoothedValue, ValueSlider.Value, 5f*Time.deltaTime);


            if (timer >= 1f / UpdatesPerSeconds) {
                vel.Enqueue(smoothedValue);
                vel.Dequeue();
                vel.CopyTo(dataArr, 0);
                Graph.Values.SetData(dataArr);
                timer = 0;
            }  
            timer += Time.deltaTime;
        }

        public override void DrawOnGUI() {
             ValueSlider.Draw();
        }
    }
}
