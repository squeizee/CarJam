using System;
using DG.Tweening;
using UnityEngine;

namespace Modules.TweenPresets
{
    public static class TweenCalculations
    {
        public static Tween DoIncreasingSpeed(float initialSpeed, float speedIncreasePerTime, float duration,
            Action<float> action)
        {
            float totalDistance = initialSpeed * duration + speedIncreasePerTime * Mathf.Pow(duration, 2) / 2;

            return DOVirtual.Float(0, duration, duration, (timeStamp =>
            {
                float currentDistance =
                    timeStamp * (initialSpeed + speedIncreasePerTime * timeStamp / 2) / totalDistance;
                if (currentDistance >= 1)
                {
                    currentDistance = 1;
                }

                if (currentDistance <= 0)
                {
                    currentDistance = 0;
                }

                action?.Invoke(currentDistance);
            })).SetEase(Ease.Linear);
        }

        public static float CalculatePosition(float h, float v, float g, float t)
        {
            float position = h + v * t - 0.5f * g * Mathf.Pow(t, 2);
            return position;
        }

        public static float CalculateRequiredSpeed(float g, float h)
        {
            return Mathf.Sqrt(2 * g * h);
        }

        public static float TimeToFall(float h, float v, float g)
        {
            float a = 0.5f * g;
            float b = -v;
            float c = -h;

            float discriminant = b * b - 4 * a * c;

            if (discriminant < 0)
            {
                throw new Exception("No real solutions found for the given parameters.");
            }

            float sqrtDiscriminant = Mathf.Sqrt(discriminant);
            float t1 = (-b + sqrtDiscriminant) / (2 * a);
            float t2 = (-b - sqrtDiscriminant) / (2 * a);

            // Since time cannot be negative, choose the positive root as the valid solution
            return Mathf.Max(t1, t2);
        }

        public static float TimeToDistance(float distance, float intialSpeed, float speedIncrease)
        {
            // distance = intialSpeed * t + speedIncrease * t^2 / 2
            // 0 = speedIncrease * t^2 / 2 + intialSpeed * t - distance
            // t = (-intialSpeed +- sqrt(intialSpeed^2 + 2 * speedIncrease * distance)) / speedIncrease
            float a = speedIncrease / 2;
            float b = intialSpeed;
            float c = -distance;

            float discriminant = b * b - 4 * a * c;

            if (discriminant < 0)
            {
                throw new Exception("No real solutions found for the given parameters.");
            }

            float sqrtDiscriminant = Mathf.Sqrt(discriminant);
            float t1 = (-b + sqrtDiscriminant) / (2 * a);
            float t2 = (-b - sqrtDiscriminant) / (2 * a);

            // Since time cannot be negative, choose the positive root as the valid solution
            return Mathf.Max(t1, t2);
        }
    }
}