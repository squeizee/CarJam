using Library.Utility.Scripts.Singleton;
using UnityEngine;

namespace _Game._2_LinearLevel.Scripts
{
    [CreateAssetMenu(fileName = "LevelUIAnimationsSo", menuName = "Craft/Other/LevelUIAnimationsSo")]
    public class LevelUIAnimationsSo : ScriptableSingleton<LevelUIAnimationsSo>
    {
        public float ScreenWaitTime = 0.3f;
        public float FadeDuration = 0.3f;
        public float AmazingTextEnterTime = 0.2f;
        public float AmazingTextEnterDuration = 0.3f;
        public float AmazingTextRiseAmount = 0.3f;
        public float EmojiEnterTime = 0.2f;
        public float EmojiEnterDuration = 0.3f;
        public float EmojiRiseAmount = 0.3f;
        public float PlayButtonEnterTime = 0.2f;
        public float PlayButtonEnterDuration = 0.3f;
        public float PlayButtonRiseAmount = 0.3f;
        public float InitialBGAlpa = 0;
        public float FinalBGAlpha = 0.3f;
        public float WinSoundDelay = 0.2f;
    }
}