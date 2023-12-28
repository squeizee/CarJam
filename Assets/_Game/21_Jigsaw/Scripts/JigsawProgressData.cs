using System.Collections.Generic;

namespace _Game._3_GamePlay
{
    public class JigsawProgressData 
    {
        public int Progress = 1;
        public List<int> UnlockedJigsawIds = new List<int>();

        public JigsawProgressData()
        {
            Progress = 1;
            UnlockedJigsawIds = new List<int>();
        }
    }
}