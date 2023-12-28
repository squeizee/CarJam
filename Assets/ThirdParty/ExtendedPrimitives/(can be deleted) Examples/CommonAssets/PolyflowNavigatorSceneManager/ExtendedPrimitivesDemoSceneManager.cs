using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ExtendedPrimitives_11.Examples{
	[ExecuteInEditMode]
    [DefaultExecutionOrder(70)]
	public class ExtendedPrimitivesDemoSceneManager : MonoBehaviour {

        public enum AnchorType {
            LeftBottom,
            Bottom,
            RightBottom,
            LeftTop,
            Top,
            RightTop
        }

        [System.Serializable]
		public class SpringValue{
            public string Name;
            public bool PrintDebug;
 
			public float Value;

            public float Min = 10;
            public float Max = 30;

			public float MaxSpeed = 10;
	 		public float IncreaseMultiplier = 0.25f;

            float _targetValue;
			float targetValue {
                get {
                    return _targetValue; 
                }

                set {
                    if (clamped) {
                        if (value >= Max) {
                            if (PrintDebug) {
                                Debug.LogFormat("clamped to Max: {0}", value);
                            }
                            value = Max;

                        } else if (value < Min) {
                            if (PrintDebug) {
                                Debug.LogFormat("clamped to min: {0}", value);
                            }
                            value = Min;

                        }
                    }

                    _targetValue = value;
                }
            }

            float minDampValue {
                get {
                    if (clamped) {
                        return Mathf.InverseLerp(Min + (Max - Min) * 0.1f, Min, Value);
                    } else {
                        return 0;
                    }
                }
            }

            float maxDampValue {
                get {
                    if (clamped) {
                        return Mathf.InverseLerp(Max - (Max - Min) * 0.1f, Max, Value);
                    } else {
                        return 0;
                    }
                }
            }

            float dir;
			float backDir;

			public bool clamped {
                get {
                    return (Max > Min);
                }
            }

			public void Init(float initialValue){
				Value = initialValue;
				targetValue = initialValue;
                dir = 0;
                backDir = 0;
                //Debug.LogFormat("{0} inited with :{1}", Name, initialValue);
			}

			public void Update(  ){
                backDir += minDampValue * Time.unscaledDeltaTime * 2;
                backDir -= maxDampValue * Time.unscaledDeltaTime * 2;
                targetValue += ( dir+ backDir ) * MaxSpeed * Time.unscaledDeltaTime;
                Value = Mathf.Lerp(Value, targetValue, 5 * Time.unscaledDeltaTime);
                backDir = Mathf.Lerp(backDir, 0, Time.unscaledDeltaTime * 2);
                dir = Mathf.Lerp( dir, 0, Time.unscaledDeltaTime*2  );
			}

			public void ChangeValue(float sign){
                dir += IncreaseMultiplier*sign;
                dir = Mathf.Clamp(dir, -1, 1);
            }

		}

        [System.Serializable]
        public class GUIElement {
            public bool Enabled = true;
            public GUIContent Content;
            public Rect _Rect;
            public AnchorType Anchor;

            public Rect GlobalRect {
                get {
                    Rect result = _Rect;
                    float x = 0;
                    float y = 0; 
                    switch (Anchor) {
                        case AnchorType.LeftBottom:
                            x = _Rect.position.x;
                            y = Screen.height - _Rect.height - _Rect.y;
                            break;
                        case AnchorType.Bottom:
                            x = Screen.width / 2 - _Rect.width / 2 + _Rect.position.x;
                            y = Screen.height - _Rect.height - _Rect.y;
                            break;
                        case AnchorType.RightBottom:
                            x = Screen.width - _Rect.position.x - _Rect.width;
                            y = Screen.height - _Rect.height - _Rect.y;
                            break;
                        case AnchorType.LeftTop:
                            x = _Rect.position.x;
                            y = _Rect.y;
                            break;
                        case AnchorType.Top:
                            x = Screen.width / 2 - _Rect.width / 2 + _Rect.position.x;
                            y = _Rect.y;
                            break;
                        case AnchorType.RightTop:
                            x =  Screen.width - _Rect.width - _Rect.position.x;
                            y = _Rect.y;
                            break;
                        default: break;
                    }
                    result.position = new Vector2(x, y);
  

                    return result;
                }
            }

            public virtual void Draw() { }

            public virtual void DrawDebugFrame() {
                GUI.Box(GlobalRect, GUIContent.none, GUI.skin.customStyles[5]);
            }

            GUIStyle controlLabelStyle;
            public GUIStyle ControlLabelStyle {
                get {
                    if (controlLabelStyle == null) {
                        controlLabelStyle = new GUIStyle();
                    }
                    controlLabelStyle.normal.textColor = new Color(1, 1, 1, 160f / 256f);
                    controlLabelStyle.fontSize = 15;

                    return controlLabelStyle;
                }
            }
        }

        [System.Serializable]
        public class KeyButton : GUIElement {
            public string KeyTitle;
            public string Caption;
 
            float pressedAtTime;

            public bool DisplayPressed;
            GUIStyle s_background;
            GUIStyle s_backgroundPressed;

            GUIStyle s_title;
            GUIStyle s_titlePressed;

            GUIStyle s_caption;
            GUIStyle s_captionPressed;

            public KeyButton(Rect r, string title, string caption, string tooltip) {
                _Rect = r;
                KeyTitle = title;
                Caption = caption;
                Content = new GUIContent("", tooltip);
            }

            public void SetPressed() {
                pressedAtTime = Time.unscaledTime;
            }

            public bool DrawButton() {
                if (s_background == null) {
                    s_background = new GUIStyle(GUI.skin.button);
                    s_backgroundPressed = new GUIStyle(GUI.skin.button);
                    s_backgroundPressed.normal.background = s_background.active.background;
                    s_backgroundPressed.normal.textColor = s_background.active.textColor;

                    s_title = new GUIStyle();
                    s_title.fontSize = 26;
                    s_title.alignment = TextAnchor.MiddleCenter;
                    s_title.fontStyle = FontStyle.Bold;
                    s_title.normal.textColor = new Color(0, 0, 0, 0.6f);

                    s_titlePressed = new GUIStyle(s_title);
                    s_titlePressed.normal.textColor = new Color(0, 0, 0, 0.8f);

                    s_caption = new GUIStyle();
                    s_caption.fontSize = 10;
                    s_caption.alignment = TextAnchor.MiddleCenter;
                    s_caption.normal.textColor = new Color(0, 0, 0, 0.6f);

                    s_captionPressed = new GUIStyle(s_caption);
                    s_captionPressed.normal.textColor = new Color(0, 0, 0, 0.8f);
                }
                Rect gr = GlobalRect;
                DisplayPressed = Application.isPlaying ? (pressedAtTime + 0.1f) > Time.unscaledTime : DisplayPressed;
                bool result = GUI.Button(gr, Content, DisplayPressed? s_backgroundPressed : s_background);
                Rect titleRect = new Rect(gr.position + gr.size * 0.1f,   new Vector2(gr.size.x * 0.8f, gr.size.y* 0.6f) );
                GUI.Label(titleRect, KeyTitle, DisplayPressed ? s_titlePressed : s_title);
                Rect captionRect = new Rect(gr.position + new Vector2(gr.size.x * 0.05f, gr.size.y * 0.6f ), new Vector2(gr.size.x * 0.9f, gr.size.y * 0.3f));
                GUI.Label(captionRect, Caption, DisplayPressed ?  s_captionPressed : s_caption);
                return result;
            }
        }

        [System.Serializable]
        public class Button : GUIElement {
 
            float pressedAtTime;
            public bool DisplayPressed;
            GUIStyle s_background;
            GUIStyle s_backgroundPressed;
            public int FontSize = 10; 

            public Button (Rect r, string title, string caption, string tooltip) {
                _Rect = r;
 
                Content = new GUIContent("", tooltip);
            }

            public void SetPressed() {
                pressedAtTime = Time.unscaledTime;
            }

            public bool DrawButton() {
                if (s_background == null) {
                    s_background = new GUIStyle(GUI.skin.button);
                    s_backgroundPressed = new GUIStyle(GUI.skin.button);
                    s_backgroundPressed.normal.background = s_background.active.background;
                    s_backgroundPressed.normal.textColor = s_background.active.textColor;
                }
                s_background.fontSize = FontSize;
                s_backgroundPressed.fontSize = FontSize;

                Rect gr = GlobalRect;

                bool  displayPressed = DisplayPressed;
                if ( Application.isPlaying    ){
                    displayPressed = displayPressed || (pressedAtTime + 0.1f) > Time.unscaledTime ;
                }
                bool result = GUI.Button(gr, Content, displayPressed ? s_backgroundPressed : s_background);
 
                return result;
            }
        }

        [System.Serializable]
        public class DescriptionLabel : GUIElement {
            [Multiline]
            public string Text;
            GUIStyle style;

            public override void Draw() {
                if (style == null) {
                    style = new GUIStyle();
                    style.alignment = TextAnchor.UpperLeft;
                    style.fontSize = 12;
                    style.fontStyle = FontStyle.Italic;
                    style.normal.textColor = new Color(1, 1, 1, 0.8f);
                }
                if (Anchor == AnchorType.RightBottom || Anchor == AnchorType.RightTop) {
                    style.alignment = TextAnchor.UpperRight;
                } else {
                    style.alignment = TextAnchor.UpperLeft;
                }
                
                GUI.Label(GlobalRect, Text, style);
            }
        }

        [System.Serializable]
        public class Toggle : GUIElement {
            public bool Value;
 
            public override void Draw() {
                if (!Enabled) {
                    return;
                }
 

                ControlLabelStyle.contentOffset = new Vector2(20, 2);
                _Rect.width = ControlLabelStyle.CalcSize(Content).x + 24;

                Rect gr = GlobalRect;
                GUI.Label(gr, Content, ControlLabelStyle);
                Value = GUI.Toggle(gr, Value, GUIContent.none);
            }
        }

        [System.Serializable]
        public class Slider : GUIElement {
 
            public float Value;
            public float ValueFrom;
            public float ValueTo;


            public Slider (float value, float min, float max, Rect rect, AnchorType anchor, GUIContent content) {
                Value = value;
                ValueFrom = min;
                ValueTo = max;
                _Rect = rect;
                Anchor = anchor;
                Content = content;
            }

            public override void Draw() {
                if (!Enabled) {
                    return;
                }
                Rect gr = GlobalRect;
                Rect sliderRect = gr;
                Rect labelRect = gr;

                sliderRect.height = 20;
                sliderRect.y += gr.height - 20;
 


                Value = GUI.HorizontalSlider(sliderRect, Value, ValueFrom, ValueTo);
                GUI.Label(labelRect, Content, ControlLabelStyle);
            }
        }

        [System.Serializable]
        public class IntSlider : GUIElement {

            public int Value;
            public int ValueFrom;
            public int ValueTo;

            public IntSlider( int value, int min, int max, Rect rect, AnchorType anchor, GUIContent content) {
                Value = value;
                ValueFrom = min;
                ValueTo = max;
                _Rect = rect;
                Anchor = anchor;
                Content = content;
            }

            public override void Draw() {
                if (!Enabled) {
                    return;
                }
                Rect gr = GlobalRect;
                Rect sliderRect = gr;
                Rect labelRect = gr;

                sliderRect.height = 20;
                sliderRect.y += gr.height - 20;

                Value = (int)GUI.HorizontalSlider(sliderRect, Value, ValueFrom, ValueTo);
                GUI.Label(labelRect, Content, ControlLabelStyle);
            }
        }

        [Header("Navigation")]
        public Camera Cam;
		public Transform CamRotateY;
		public Transform CamRotateX;
 
		public SpringValue HorizontalRotSpring;
		public SpringValue ZoomSpring;
		public SpringValue VerticalRotSpring;
        public SpringValue CameraPanSpring;

 		public float FPS;

        [Header("FPS")]
        public Vector2 FpsLabelOffset;
        public float FPSTimeSlice;
        float fpsUpdateTimer;
        public string FpsLabelText;
        public int fpsFrameCounter = 0;
        public float averageFps;

        [Header("GUI ")]
        public bool ShowControls;
        public bool DrawTooltip = true;
        public GUISkin Skin;
        public KeyButton qbW = new KeyButton( new Rect(52, 120, 46,52), "W", "up", "rotate camera up");
        public KeyButton qbA = new KeyButton( new Rect(8, 64, 46, 52), "A", "left", "rotate camera left");
        public KeyButton qbS = new KeyButton(new Rect(58, 64, 46, 52), "W", "up", "rotate camera down");  
        public KeyButton qbD = new KeyButton(new Rect(108, 64, 46, 52), "D", "right", "rotate camera right");
        public KeyButton qbZ = new KeyButton(new Rect(40, 8, 46, 52), "Z", "zoom -", "zoom camera out");
        public KeyButton qbX = new KeyButton(new Rect(90, 8, 46, 52), "X", "zoom +", "zoom camera in");
        public KeyButton qbC = new KeyButton(new Rect(140, 8, 46, 52), "C", "pan -", "pan camera down");
        public KeyButton qbV = new KeyButton(new Rect(190, 8, 46, 52), "V", "pan +", "pan camera up");

        public DescriptionLabel Description;

        public DemoSceneOnGUI[] demoSceneOnGUIs;

        void OnEnable() {
            qbW.Content.tooltip = "rotate camera up";
            qbA.Content.tooltip = "rotate camera left";
            qbS.Content.tooltip = "rotate camera down";
            qbD.Content.tooltip = "rotate camera right";
            qbZ.Content.tooltip = "zoom camera out";
            qbX.Content.tooltip = "zoom camera in";
            qbC.Content.tooltip = "pan camera down";
            qbV.Content.tooltip = "pan camera up";
            demoSceneOnGUIs = FindObjectsOfType<DemoSceneOnGUI>();
            _labelStyle = null;
            _tooltipStyle = null;
        }

        [Header("Background")]
        public float BackgroundDistance;
        public Transform BackgroundPlane;

 

        void Awake(){
            if (Application.isPlaying) {
                var p = Application.platform;
                ZoomSpring.Init(-Cam.transform.localPosition.z);
                CameraPanSpring.Init(CamRotateY.position.y);
                VerticalRotSpring.Init(CamRotateX.transform.eulerAngles.x);
                HorizontalRotSpring.Init(CamRotateY.transform.eulerAngles.y);
            }
 
		}

		void Update(){
			if(Application.isPlaying){
				UpdateKeys();
				ZoomSpring.Update();
 				VerticalRotSpring.Update();
 				HorizontalRotSpring.Update();
                CameraPanSpring.Update();

                CamRotateY.position = new Vector3(0, CameraPanSpring.Value, 0);
                CamRotateY.localEulerAngles = new Vector3(0, HorizontalRotSpring.Value,0);
				CamRotateX.localEulerAngles = new Vector3(VerticalRotSpring.Value,0,0);

				Cam.transform.localPosition = new Vector3(0, 0, -ZoomSpring.Value) ;
 
                if (fpsUpdateTimer>FPSTimeSlice){
					FPS = 1f/Time.unscaledDeltaTime;
                    FpsLabelText = string.Format("FPS:{0}", FPS.ToString("F1"));
                    fpsUpdateTimer = 0;
                    if (fpsFrameCounter >= 10) {
                        averageFps /= 10f;
                        if (averageFps < 30) {
                            QualitySettings.DecreaseLevel(true);
                         } else  {
                            QualitySettings.IncreaseLevel(true);
                         }
                        
                        averageFps = 0;
                        fpsFrameCounter = 0;
                    } else {
                        averageFps += FPS;
                        fpsFrameCounter++;
                    } 
				} else {
 					fpsUpdateTimer += Time.unscaledDeltaTime;
                     
				}
                tooltipTimer += Time.deltaTime;
			}

            if (BackgroundPlane != null) {
                BackgroundDistance = Mathf.Clamp(BackgroundDistance, 1, float.MaxValue);
                BackgroundPlane.rotation = Cam.transform.rotation;
                BackgroundPlane.position = Cam.transform.position + Cam.transform.forward * BackgroundDistance;
                Plane p = new Plane(Cam.transform.forward, BackgroundPlane.position);
                Ray r = Cam.ViewportPointToRay(Vector3.zero);
                float d = 0;
                p.Raycast(r, out d);
                Vector3 localPos = Cam.transform.InverseTransformPoint( r.GetPoint(d));
                BackgroundPlane.localScale = new Vector3(-localPos.x*2, -localPos.y*2, 1);
 
            }
		}

        void OnGUI() {
            if (!ShowControls) {
                return;
            }
            GUI.skin = Skin;
 
            Rect fpsRect = new Rect(FpsLabelOffset.x, FpsLabelOffset.y, 200, 30);
 
 
            GUI.Label(fpsRect, FpsLabelText);
 

            if (qbA.DrawButton()) {
                Rotate(1);
            }


            if (qbD.DrawButton()) {
                Rotate(-1);
            }

            if (qbW.DrawButton()) {
                Elevate(1);
            }

            if (qbS.DrawButton()) {
                Elevate(-1);
            }

            if (qbZ.DrawButton()) {
                Zoom(-1);
            }

            if (qbX.DrawButton()) {
                Zoom(1);
            }

            if (qbC.DrawButton()) {
                ElevateTarget(-1);
            }

            if (qbV.DrawButton()) {
                ElevateTarget(1);
            }

            Description.Draw();

            for (int i = 0; i<demoSceneOnGUIs.Length; i++) {
                demoSceneOnGUIs[i].DrawOnGUI();
            }

            if (DrawTooltip) {
                DoDrawTooltip();
            }

            //DoDrawLabel(new Vector2(100,200), "Donut");
        }

        private string prevTooltip;
        float tooltipTimer = 0;

        GUIStyle _tooltipStyle;
        GUIStyle TooltipStyle {
            get {
                if (_tooltipStyle == null || !Application.isPlaying) {
                    _tooltipStyle = GUI.skin.customStyles[1];
                }
                return _tooltipStyle;
            }
        }

        GUIStyle _labelStyle;
        GUIStyle LabelStyle {
            get {
                if (_labelStyle == null || !Application.isPlaying) {
                    _labelStyle = GUI.skin.customStyles[2];
                }
                return _labelStyle;
            }
        }

        public void DoDrawTooltip() {
            if (!string.IsNullOrEmpty(GUI.tooltip)) {
                if (prevTooltip != GUI.tooltip) {
                    tooltipTimer = 0;
                    prevTooltip = GUI.tooltip;
                }
                if (tooltipTimer < 2) {
                    Vector2 size = TooltipStyle.CalcSize(new GUIContent(GUI.tooltip));
                    size.x += 6;
                    size.y += 6;
                    Rect tooltiprect = new Rect(new Vector2(Input.mousePosition.x, Screen.height - Input.mousePosition.y - 19), size);
                    GUI.Label(tooltiprect, GUI.tooltip, TooltipStyle);
                }
            }
        }


        public void DoDrawLabel(Vector2 screenPos, string text) {
            GUIContent content = new GUIContent(text);
            Vector2 size = LabelStyle.CalcSize(content);
            size.x += 6;
            size.y += 6;
            Rect rect = new Rect(new Vector2(screenPos.x - size.x/2, Screen.height - screenPos.y - 19), size);
            GUI.Label(rect, content, LabelStyle);
        }
 
		public void Elevate(int sign){
			VerticalRotSpring.ChangeValue(sign);
		}

		public void ElevateTarget(int sign){
            CameraPanSpring.ChangeValue(sign);
		}

		public void Rotate(int sign){
 			HorizontalRotSpring.ChangeValue(sign);
		}

		public void Zoom (int sign){
			 ZoomSpring.ChangeValue(-sign);
		}

		void UpdateKeys(){
			if(Input.GetKeyDown(KeyCode.S)){
                qbS.SetPressed();
				Elevate(-1);
			}

			if(Input.GetKeyDown(KeyCode.W)){
                qbW.SetPressed();
				Elevate(1);
			}

			if(Input.GetKeyDown(KeyCode.A)){
                qbA.SetPressed();
				Rotate(-1);
			}

			if(Input.GetKeyDown(KeyCode.D)){
                qbD.SetPressed();
				Rotate(1);
			}

			if(Input.GetKeyDown(KeyCode.Z)){
                qbZ.SetPressed();
				Zoom(-1);
			}

			if(Input.GetKeyDown(KeyCode.X)){
                qbX.SetPressed();
				Zoom(1);
			}


            if (Input.GetKeyDown(KeyCode.C)) {
                qbC.SetPressed();
                ElevateTarget(-1);
            }

            if (Input.GetKeyDown(KeyCode.V)) {
                qbV.SetPressed();
                ElevateTarget(1);
            }


            if (Input.GetKeyDown(KeyCode.Space)) {
                //TestKeyButton.SetPressed();
                ShowControls = !ShowControls;
            }
 
 
        }

    }

    public abstract class DemoSceneOnGUI: MonoBehaviour {
        public abstract void DrawOnGUI();
        public ExtendedPrimitivesDemoSceneManager sceneManager;
    }
}
