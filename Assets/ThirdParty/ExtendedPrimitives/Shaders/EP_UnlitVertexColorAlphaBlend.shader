Shader "Custom/ExtendedPrimitives/UnlitVertexColorAlphaBlend"
{
	Properties
	{
		_MainTex ("Texture UV", 2D) = "red" {}
		_MainTex2 ("Texture UV2", 2D) = "white" {}
		_BlendSharpeness ("Blend Sharpeness", Range (1,50)) = 1 // sliders
		_BlendOffset ("Blend Offset", Range (0,1)) = 0.5 // sliders
	}
	SubShader
	{
		Tags { "RenderType"="Opaque" }
		LOD 100

		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			// make fog work
			#pragma multi_compile_fog
			#define UNITY_SHADER_NO_UPGRADE 1 
			#include "UnityCG.cginc"

			fixed _AOStrength;
			fixed4 _Color;

			struct appdata
			{
				float4 vertex : POSITION;
				float4 color : COLOR;
				float2 uv : TEXCOORD0;
				float2 uv2 : TEXCOORD1;
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				float2 uv2 : TEXCOORD1;
				float4 color : COLOR;
				UNITY_FOG_COORDS(1)
				float4 vertex : SV_POSITION;
			};
 
			sampler2D _MainTex;
			sampler2D _MainTex2;
			float4 _MainTex_ST;
			float4 _MainTex2_ST;
			float _BlendSharpeness;
			float _BlendOffset;

			v2f vert (appdata v)
			{
				v2f o;
				o.vertex = mul(UNITY_MATRIX_MVP, v.vertex);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				o.uv2 = TRANSFORM_TEX(v.uv2, _MainTex2);
				UNITY_TRANSFER_FOG(o,o.vertex);
				o.color = v.color;
				return o;
			}
			
			fixed4 frag (v2f i) : SV_Target
			{
				// sample the texture
				fixed4 col = tex2D(_MainTex, i.uv);
				fixed4 col2 = tex2D(_MainTex2, i.uv2);
				float blend =  saturate( (i.color.a - _BlendOffset) * _BlendSharpeness  + _BlendOffset ) ;
				col =  lerp(col, col2, blend)  ;
 
				UNITY_APPLY_FOG(i.fogCoord, col);
				 //return col;
				  return i.color.a;
			}
			ENDCG
		}
	}
}
