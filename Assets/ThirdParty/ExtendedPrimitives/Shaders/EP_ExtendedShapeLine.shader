// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'
// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'

// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'
// Upgrade NOTE: replaced 'mul(UNITY_MATRIX_MVP,*)' with 'UnityObjectToClipPos(*)'


Shader "Custom/ExtendedPrimitives/ExtendedShapeLine"
{
	Properties
	{
		_MainTex ("Texture", 2D) = "white" {}
	}
	SubShader
	{
        Tags {"Queue"="Transparent" "IgnoreProjector"="True" "RenderType"="Transparent"}
        Cull Off
    
 
			
         Blend SrcAlpha OneMinusSrcAlpha 
		 ZWrite off
		Pass
		{
			CGPROGRAM
 			#pragma vertex vert
			#pragma fragment frag
			// make fog work
			#pragma multi_compile_fog
 

			#include "UnityCG.cginc"

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
				float4 color: COLOR;

			};

			struct v2f
			{
				float4 color : COLOR;
				float2 uv : TEXCOORD0;
				float3 worldPos : TEXCOORD1;
				float4 vertex : SV_POSITION;

			};

			sampler2D _MainTex;
			float4 _MainTex_ST;
 
 

			v2f vert (appdata v  )
			{
				v2f o;

 
				o.worldPos = mul (unity_ObjectToWorld, v.vertex);
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				o.color = v.color  ;
 				return o;
			}
			
			fixed4 frag (v2f i) : SV_Target
			{
				float4 result = i.color;
				float4 col = tex2D(_MainTex, i.uv);
				result.a *= col.a; 
 				return result;
			}
			ENDCG
		}
	}
}
