using System;
using _Game._1_Animation.Scripts;
using DG.Tweening;
using UnityEngine;

namespace Modules.TweenPresets
{
    public static class TweenExtensions
    {
        public static Tween DoAnchoredGravity(this RectTransform rectTransform, Vector2 to)
        {
            if (to.y >= rectTransform.anchoredPosition.y)
            {
                return rectTransform.DoAnchoredGravityRise(to);
            }
            else
            {
                return rectTransform.DoAnchoredGravityFall(to);
            }
        }

        public static Tween DoAnchoredGravityWithScale(this RectTransform rectTransform, Vector2 to, float maxScale,
            float finalScale)
        {
            if (to.y >= rectTransform.anchoredPosition.y)
            {
                return rectTransform.DoAnchoredGravityRise(to);
            }
            else
            {
                return rectTransform.DoAnchoredGravityFall(to, maxScale, finalScale);
            }
        }

        public static Tween DoAnchoredGravityFall(this RectTransform rectTransform, Vector2 to, float maxScale,
            float finalScale)
        {
            Vector2 start = rectTransform.anchoredPosition;
            var so = TweenPresetsS0.Instance;
            float duration = TweenCalculations.TimeToFall(to.y - start.y, so.uiFallInitialSpeed, so.uiFallGravity);
            float peakDuration = so.uiFallInitialSpeed / so.uiFallGravity;
            return DOVirtual.Float(0, duration, duration, (timeStamp =>
            {
                float x = Mathf.Lerp(start.x, to.x, timeStamp / duration);
                float y = -TweenCalculations.CalculatePosition(to.y - start.y, so.uiFallInitialSpeed, so.uiFallGravity,
                    timeStamp) + to.y;
                rectTransform.anchoredPosition = new Vector2(x, y);
                if (timeStamp < peakDuration)
                {
                    rectTransform.localScale =
                        Vector3.one * Mathf.Lerp(1, maxScale, (timeStamp / peakDuration));
                }
                else
                {
                    rectTransform.localScale = Vector3.one * Mathf.Lerp(maxScale, finalScale,
                        ((timeStamp - peakDuration) /
                         (duration - peakDuration)));
                }
            })).SetEase(Ease.Linear);
        }

        public static Tween DoGravity(this Transform transform, Vector3 to)
        {
            var so = TweenPresetsS0.Instance;

            if (to.y >= transform.position.y)
            {
                return transform.DoGravityRise(to, so.riseGravity, so.riseInitialSpeed);
            }
            else
            {
                return transform.DoGravityFall(to, so.fallGravity, so.fallInitialSpeed);
            }
        }


        public static Tween DoAnchoredGravityFall(this RectTransform rectTransform, Vector2 to)
        {
            Vector2 start = rectTransform.anchoredPosition;
            var so = TweenPresetsS0.Instance;
            float duration = TweenCalculations.TimeToFall(to.y - start.y, so.uiFallInitialSpeed, so.uiFallGravity);
            return DOVirtual.Float(0, duration, duration, (timeStamp =>
            {
                float x = Mathf.Lerp(start.x, to.x, timeStamp / duration);
                float y = -TweenCalculations.CalculatePosition(to.y - start.y, so.uiFallInitialSpeed, so.uiFallGravity,
                    timeStamp) + to.y;
                rectTransform.anchoredPosition = new Vector2(x, y);
            })).SetEase(Ease.Linear);
        }

        public static Tween DoAnchoredGravityRise(this RectTransform rectTransform, Vector2 to)
        {
            Vector2 start = rectTransform.anchoredPosition;
            var so = TweenPresetsS0.Instance;
            float duration = TweenCalculations.TimeToFall(to.y - start.y, so.uiRiseInitialSpeed, so.uiRiseGravity);
            return DOVirtual.Float(0, duration, duration, (timeStamp =>
            {
                float x = Mathf.Lerp(start.x, to.x, timeStamp / duration);
                float y = -TweenCalculations.CalculatePosition(to.y - start.y, so.uiRiseInitialSpeed, so.uiRiseGravity,
                    timeStamp) + to.y;
                rectTransform.anchoredPosition = new Vector2(x, y);
            })).SetEase(Ease.Linear);
        }

        public static Tween DoAnchoredGravityY(this RectTransform rectTransform, float to, float initialSpeed = 1,
            float gravity = 1)
        {
            var so = TweenPresetsS0.Instance;
            initialSpeed = so.uiRiseInitialSpeed * initialSpeed;
            gravity = so.uiRiseGravity * gravity;
            Vector2 start = rectTransform.anchoredPosition;
            float duration = TweenCalculations.TimeToFall(to - start.y, initialSpeed, gravity);
            return DOVirtual.Float(0, duration, duration, (timeStamp =>
            {
                float y = -TweenCalculations.CalculatePosition(to - start.y, initialSpeed, gravity,
                    timeStamp) + to;
                rectTransform.anchoredPosition = new Vector2(rectTransform.anchoredPosition.x, y);
            })).SetEase(Ease.Linear);
        }

        public static Tween DoSqueezeScale(this Transform transform, float squeezeMultiplier = 1)
        {
            var so = TweenPresetsS0.Instance;

            return DOVirtual.Float(0, 1, so.squeezeDuration, (value =>
            {
                float squeezeRatio = 1 + (so.squeezeAnimationCurve.Evaluate(value) - 1) * squeezeMultiplier;
                transform.localScale = new Vector3(1 / squeezeRatio, squeezeRatio, 1);
            })).SetEase(Ease.Linear);
        }

        public static Tween DoGravityFall(this Transform transform, Vector3 to, float fallGravity,
            float fallInitialSpeed)
        {
            Vector3 start = transform.position;
            var so = TweenPresetsS0.Instance;
            float duration = TweenCalculations.TimeToFall(to.y - start.y, fallInitialSpeed, fallGravity);
            Debug.Log(duration);
            return DOVirtual.Float(0, duration, duration, (timeStamp =>
            {
                float x = Mathf.Lerp(start.x, to.x, timeStamp / duration);
                float y = -TweenCalculations.CalculatePosition(to.y - start.y, fallInitialSpeed, fallGravity,
                    timeStamp) + to.y;

                float yProgress = ((y - start.y) / Mathf.Abs(to.y - start.y));
                float z = start.z + yProgress * (to.z - start.z);

                transform.position = new Vector3(x, y, z);
            })).SetEase(Ease.Linear);
        }


        public static Tween DoGravityRise(this Transform transform, Vector3 to, float riseGravity,
            float riseInitialSpeed)
        {
            Vector3 start = transform.position;
            var so = TweenPresetsS0.Instance;
            float duration = TweenCalculations.TimeToFall(to.y - start.y, riseInitialSpeed, riseGravity);
            return DOVirtual.Float(0, duration, duration, (timeStamp =>
            {
                float x = Mathf.Lerp(start.x, to.x, timeStamp / duration);

                float y = -TweenCalculations.CalculatePosition(to.y - start.y, riseInitialSpeed, riseGravity,
                    timeStamp) + to.y;
                float yProgress = ((y - start.y) / Mathf.Abs(to.y - start.y));
                float z = start.z + yProgress * (to.z - start.z);

                transform.position = new Vector3(x, y, z);
            })).SetEase(Ease.Linear);
        }


    }
}