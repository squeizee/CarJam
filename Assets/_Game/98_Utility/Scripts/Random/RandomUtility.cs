namespace Library.Utility.Scripts.Random
{
    public static class RandomUtility
    {
        public static int GetRandomWithProbability(params float[] probabilities)
        {
            float totalProbability = 0f;
            for (int i = 0; i < probabilities.Length; i++) { totalProbability += probabilities[i]; }

            float randomValue = UnityEngine.Random.Range(0f, totalProbability);

            float lowerBound = 0f;
            for (int i = 0; i < probabilities.Length; i++)
            {
                if (randomValue >= lowerBound && randomValue < lowerBound + probabilities[i])
                {
                    return i;
                }

                lowerBound += probabilities[i];
            }
            
            return 0;
        }
    }
}