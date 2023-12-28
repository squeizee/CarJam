using System;
using System.Text;

namespace Modules.Shared.Utility
{
    public static class TimeSpanExtensions
    {
        public static string GetText(this TimeSpan timeSpan, string zeroText = "0")
        {
            StringBuilder stringBuilder = new StringBuilder();
            if (timeSpan.Days > 0)
            {
                stringBuilder.Append($"{timeSpan.Days.ToString()}d");
                stringBuilder.Append(" ");
                stringBuilder.Append($"{timeSpan.Hours.ToString()}h");
                stringBuilder.Append(" ");
                stringBuilder.Append($"{timeSpan.Minutes.ToString()}m");
                return stringBuilder.ToString();
            }
            else if (timeSpan.Hours > 0)
            {
                stringBuilder.Append($"{timeSpan.Hours.ToString()}h");
                stringBuilder.Append(" ");
                stringBuilder.Append($"{timeSpan.Minutes.ToString()}m");
                stringBuilder.Append(" ");
                stringBuilder.Append($"{timeSpan.Seconds.ToString()}s");
                return stringBuilder.ToString();
            }
            else if (timeSpan.Minutes > 0)
            {
                stringBuilder.Append($"{timeSpan.Minutes.ToString()}m");
                stringBuilder.Append(" ");
                stringBuilder.Append($"{timeSpan.Seconds.ToString()}s");
                return stringBuilder.ToString();
            }
            else if (timeSpan.Seconds > 0)
            {
                stringBuilder.Append($"{timeSpan.Seconds.ToString()}s");
                return stringBuilder.ToString();
            }

            return zeroText;
        }

        public static string GetTextShort(this TimeSpan timeSpan, string zeroText = "0")
        {
            StringBuilder stringBuilder = new StringBuilder();
            if (timeSpan.Days > 0)
            {
                stringBuilder.Append($"{timeSpan.Days.ToString()}d");
                if (timeSpan.Hours != 0)
                {
                    stringBuilder.Append(" ");
                    stringBuilder.Append($"{timeSpan.Hours.ToString()}h");
                }

                return stringBuilder.ToString();
            }
            else if (timeSpan.Hours > 0)
            {
                stringBuilder.Append($"{timeSpan.Hours.ToString()}h");
                if (timeSpan.Minutes != 0)
                {
                    stringBuilder.Append(" ");
                    stringBuilder.Append($"{timeSpan.Minutes.ToString()}m");
                }

                return stringBuilder.ToString();
            }
            else if (timeSpan.Minutes > 0)
            {
                if (timeSpan.Minutes < 10)
                {
                    stringBuilder.Append("0");
                }

                stringBuilder.Append(timeSpan.Minutes);
                stringBuilder.Append(":");
                if (timeSpan.Seconds < 10)
                {
                    stringBuilder.Append("0");
                }

                stringBuilder.Append(timeSpan.Seconds);

                return stringBuilder.ToString();
            }
            else if (timeSpan.Seconds > 0)
            {
                stringBuilder.Append("00");
                stringBuilder.Append(":");
                if (timeSpan.Seconds < 10)
                {
                    stringBuilder.Append("0");
                }

                stringBuilder.Append(timeSpan.Seconds);

                return stringBuilder.ToString();
            }

            return zeroText;
        }

        public static string GetTextShort(this int timeInSeconds, string zeroText = "0")
        {
            var timeSpan = TimeSpan.FromSeconds(timeInSeconds);
            return timeSpan.GetTextShort(zeroText);
        }


        public static string GetTextShortForStore(this TimeSpan timeSpan, string zeroText = "0")
        {
            StringBuilder stringBuilder = new StringBuilder();
            if (timeSpan.Days > 0)
            {
                stringBuilder.Append($"{timeSpan.Days.ToString()}d");
                if (timeSpan.Hours != 0)
                {
                    stringBuilder.Append(" ");
                    stringBuilder.Append($"{timeSpan.Hours.ToString()}h");
                }

                return stringBuilder.ToString();
            }
            else if (timeSpan.Hours > 0)
            {
                stringBuilder.Append($"{timeSpan.Hours.ToString()}h");
                if (timeSpan.Minutes != 0)
                {
                    stringBuilder.Append(" ");
                    stringBuilder.Append($"{timeSpan.Minutes.ToString()}m");
                }

                return stringBuilder.ToString();
            }
            else if (timeSpan.Minutes > 0)
            {
                stringBuilder.Append($"{timeSpan.Minutes.ToString()}m");
                if (timeSpan.Seconds != 0)
                {
                    stringBuilder.Append(" ");
                    stringBuilder.Append($"{timeSpan.Seconds.ToString()}s");
                }

                return stringBuilder.ToString();
            }
            else if (timeSpan.Seconds > 0)
            {
                stringBuilder.Append("00");
                stringBuilder.Append(":");
                if (timeSpan.Seconds < 10)
                {
                    stringBuilder.Append("0");
                }

                stringBuilder.Append(timeSpan.Seconds);

                return stringBuilder.ToString();
            }

            return zeroText;
        }
    }
}