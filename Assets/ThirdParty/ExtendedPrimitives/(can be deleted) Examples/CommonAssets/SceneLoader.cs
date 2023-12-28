using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace ExtendedPrimitives_11.Examples      {
    [ExecuteInEditMode]
    [DefaultExecutionOrder(71)]
    public class SceneLoader : DemoSceneOnGUI {

        public ExtendedPrimitivesDemoSceneManager.Button ButtonPrev;
        public ExtendedPrimitivesDemoSceneManager.Button ButtonNext;

        private void OnEnable() {
            if (Application.isPlaying) {
                DontDestroyOnLoad(gameObject);
                 
            }
        }

         public override void DrawOnGUI(){
            if (ButtonPrev.DrawButton()) {
                Scene scene = SceneManager.GetActiveScene();
                 LoadByIndex( scene.buildIndex - 1 );
            }

            if (ButtonNext.DrawButton()) {
                Scene scene = SceneManager.GetActiveScene();
                LoadByIndex(scene.buildIndex + 1);
            }
 
        }

        public void LoadByIndex(int idx) {
            int count = SceneManager.sceneCountInBuildSettings;
            idx = (idx + count) % count;
            SceneManager.LoadScene(idx);
        }

    }


}
