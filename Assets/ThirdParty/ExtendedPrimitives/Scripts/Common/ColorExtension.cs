using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ExtendedPrimitives_11.Internal {
    public static class ColorExtension {

        public static Color[] ColorPallete = new Color[32] {
            new Color(0.9960784f, 0.1058824f, 0.05490196f, 1f ),
             new Color(0.9960784f, 0.2470588f, 0f, 1f ),
             new Color(0.9960784f, 0.427451f, 0f, 1f ),
             new Color(0.9960784f, 0.6117647f, 0f, 1f ),
             new Color(0.9960784f, 0.7960784f, 0f, 1f ),
             new Color(0.9843137f, 0.9686275f, 0f, 1f ),
             new Color(0.8235294f, 0.9960784f, 0f, 1f ),
             new Color(0.6392157f, 0.9960784f, 0f, 1f ),
             new Color(0.454902f, 0.9960784f, 0f, 1f ),
             new Color(0.2705882f, 0.9960784f, 0f, 1f ),
             new Color(0.08235294f, 0.9960784f, 0f, 1f ),
             new Color(0f, 0.9960784f, 0.09803922f, 1f ),
             new Color(0f, 0.9960784f, 0.282353f, 1f ),
             new Color(0f, 0.9960784f, 0.4666667f, 1f ),
             new Color(0f, 0.9960784f, 0.6509804f, 1f ),
             new Color(0f, 0.9960784f, 0.8352941f, 1f ),
             new Color(0f, 0.9607843f, 0.9882353f, 1f ),
             new Color(0f, 0.7882353f, 0.9960784f, 1f ),
             new Color(0f, 0.6039216f, 0.9960784f, 1f ),
             new Color(0f, 0.4196078f, 0.9960784f, 1f ),
             new Color(0f, 0.2392157f, 0.9960784f, 1f ),
             new Color(0f, 0.05098039f, 0.9960784f, 1f ),
             new Color(0.1333333f, 0f, 0.9960784f, 1f ),
             new Color(0.3176471f, 0f, 0.9960784f, 1f ),
             new Color(0.4980392f, 0f, 0.9960784f, 1f ),
             new Color(0.6862745f, 0f, 0.9960784f, 1f ),
             new Color(0.8745098f, 0f, 0.9960784f, 1f ),
             new Color(0.9960784f, 0f, 0.9372549f, 1f ),
             new Color(0.9960784f, 0f, 0.7529412f, 1f ),
             new Color(0.9960784f, 0f, 0.5686275f, 1f ),
             new Color(0.9960784f, 0f, 0.3843137f, 1f ),
             new Color(0.9960784f, 0f, 0.2039216f, 1f ),
        };

        static int RandomCounter;

        public static Color GetRandomColor {
            get {
                RandomCounter += System.DateTime.UtcNow.Millisecond ;
                RandomCounter += 15;
                return ColorPallete[RandomCounter % 32 ];
            }
        }
    }
}
