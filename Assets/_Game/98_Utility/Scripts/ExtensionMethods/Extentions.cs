using System.Collections.Generic;
using System.Globalization;
using UnityEngine;
using Random = System.Random;

namespace Modules.Shared.Utility
{
    public static class Extensions
    {
        public static string KiloFormat(this int num)
        {
            if (num >= 100000000)
                return (num / 1000000).ToString("#,0M");

            if (num >= 10000000)
                return (num / 1000000).ToString("0.#") + "M";

            if (num >= 100000)
                return (num / 1000).ToString("#,0K");

            if (num >= 10000)
                return (num / 1000).ToString("0.#") + "K";
            if (num >= 1000)
                return (num / 1000f).ToString("N1") + "K";

            return num.ToString("#,0");
        }

        private static Random rand = new Random();

        public static void Shuffle<T>(this IList<T> values)
        {
            for (int i = values.Count - 1; i > 0; i--)
            {
                int k = rand.Next(i + 1);
                (values[k], values[i]) = (values[i], values[k]);
            }
        }

        public static int AppendHash(this int hash, int value)
        {
            unchecked
            {
                return hash * 31 + value;
            }
        }

        public static Vector2Int ToVector2Int(this Vector2 vector2)
        {
            return new Vector2Int(Mathf.RoundToInt(vector2.x), Mathf.RoundToInt(vector2.x));
        }

        public static string ToMoneyString(this int number)
        {
            if (number == 0)
            {
                return "0";
            }

            return number.ToString("### ###", CultureInfo.InvariantCulture);
        }
    }
}