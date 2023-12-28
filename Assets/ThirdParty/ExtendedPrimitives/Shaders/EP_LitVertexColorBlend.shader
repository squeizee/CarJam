// Upgrade NOTE: upgraded instancing buffer 'Props' to new syntax.

Shader "Custom/ExtendedPrimitives/BumpedVertexColorAlphaBlend" {
	Properties {
 
		_Color ("Color", Color) = (1, 1, 1, 1) // color

		_MainTex ("Albedo UV0", 2D) = "white" {}
		[NoScaleOffset] _BumpMap ("Bumpmap UV0", 2D) = "bump" {}

		_MainTex2 ("Albedo UV2", 2D) = "white" {}
		 [NoScaleOffset] _BumpMap2 ("Bumpmap UV2", 2D) = "bump" {}

		 _Glossiness ("Smoothness", Range(0,1)) = 0.5
		_Metallic ("Metallic", Range(0,1)) = 0.0
		_BlendSharpeness ("Blend Sharpeness", Range (1,50)) = 1 // sliders
		_BlendOffset ("Blend Offset", Range (0,1)) = 0.5 // sliders
	}
	SubShader {
		Tags { "RenderType"="Opaque" }
		LOD 200
		
		CGPROGRAM
		// Physically based Standard lighting model, and enable shadows on all light types
		#pragma surface surf Standard fullforwardshadows

		// Use shader model 3.0 target, to get nicer looking lighting
		#pragma target 3.0

 
 	    sampler2D _MainTex;
		sampler2D _MainTex2;
		sampler2D _BumpMap;
		sampler2D _BumpMap2;
		half _Glossiness;
		half _Metallic;
		float _BlendSharpeness;
		float _BlendOffset;
		half4 _Color;

		  struct Input {
			float2 uv_MainTex;
			float2 uv2_MainTex2;
			float4 color: Color; // Vertex color
		  };

		void surf (Input IN, inout SurfaceOutputStandard o) {
			fixed blend =  saturate( (IN.color.a - _BlendOffset) * _BlendSharpeness  + _BlendOffset ) ;
			fixed4 c = tex2D (_MainTex, IN.uv_MainTex);
			fixed4 c2 = tex2D (_MainTex2, IN.uv2_MainTex2);
			fixed3 n = UnpackNormal (tex2D (_BumpMap, IN.uv_MainTex));

			fixed3 n2 = UnpackNormal (tex2D (_BumpMap2, IN.uv2_MainTex2));
			o.Normal = lerp( n, n2, blend);
			o.Albedo =   lerp(c, c2, blend) *_Color ;
			o.Metallic =  c.a * _Metallic;
			o.Smoothness = c.a * _Glossiness;
 
		}
		ENDCG
	}
	FallBack "Diffuse"
}
