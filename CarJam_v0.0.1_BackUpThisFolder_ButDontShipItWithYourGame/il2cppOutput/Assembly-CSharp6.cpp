#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Element>
struct List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474;
// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Face>
struct List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2;
// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.MeshEdge>
struct List_1_t9535C53413AED810FC1D8418ADA8834974E63B61;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad>
struct List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A;
// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris>
struct List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// ExtendedPrimitives_11.Internal.Element[]
struct ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD;
// ExtendedPrimitives_11.Internal.Face[]
struct FaceU5BU5D_tC88286ABC68354114768AB87F926E366881ED709;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// ExtendedPrimitives_11.Internal.Matrix2d[]
struct Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
// ExtendedPrimitives_11.Internal.MeshEdge[]
struct MeshEdgeU5BU5D_t406C5B30EBA07B5BE74882FC72A96967796000F8;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// ExtendedPrimitives_11.Internal.Vertex[]
struct VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC;
// ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad[]
struct QuadU5BU5D_t6F0BDE1BACD2276B7C8B16BE97546BF173FCDA21;
// ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris[]
struct TrisU5BU5D_tA7E1996FF15D766253EE11012E299CEF4DD6EC99;
// ExtendedPrimitives_11.Internal.A_ExpBool
struct A_ExpBool_t2219105D9695E9FA97970EE44161E3256A6F21C1;
// ExtendedPrimitives_11.Internal.A_ExpColor32
struct A_ExpColor32_t1A17B44C6BC2E52E23E74B7044EF52B655EDA408;
// ExtendedPrimitives_11.Internal.A_ExpFloat
struct A_ExpFloat_tB7200A9108956CE2C80EA271E5BCFE530C95A847;
// ExtendedPrimitives_11.Internal.A_ExpGradient
struct A_ExpGradient_tFD39074918823B461796FC692589BB847018F5D9;
// ExtendedPrimitives_11.Internal.A_ExpInt
struct A_ExpInt_t8C3CD667A6586350588BD30E9C7AF7F11C09011E;
// ExtendedPrimitives_11.Internal.A_ExpVector2
struct A_ExpVector2_tF59C8CD3B27B215CA7E78C21CE9C6370A677B89D;
// ExtendedPrimitives_11.Internal.A_OverrideFloatParam
struct A_OverrideFloatParam_tA5E7612A3D04A50C79AD370A177226803EDACF69;
// ExtendedPrimitives_11.Internal.ArcSegment
struct ArcSegment_t923B1379845A603ABAE8C75954ECE467E666C3AC;
// ExtendedPrimitives_11.Internal.ColliderClass
struct ColliderClass_t5FE6C5399144E41B3616F31EEA571440C57F3A01;
// ExtendedPrimitives_11.Internal.ConnectTriangulator
struct ConnectTriangulator_tAB17DED97D659CCD781B96E21912F159E348414F;
// ExtendedPrimitives_11.Internal.ConstraintsClass
struct ConstraintsClass_t2BDA6C8AC6F9C8B7035B6B27AEC6937202A40D3C;
// ExtendedPrimitives_11.Internal.Element
struct Element_tDD021D15E39F04405664845456EE25BFDC6FC663;
// ExtendedPrimitives_11.ExtendedPrimitive
struct ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6;
// ExtendedPrimitives_11.Internal.Face
struct Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF;
// ExtendedPrimitives_11.Internal.HorizontalCorner
struct HorizontalCorner_tC026C2646D5CDDC1EFF412E4C4A1F232C3A27C9E;
// ExtendedPrimitives_11.Internal.HorizontalEdge
struct HorizontalEdge_t8E15517F5F37F75115B54750EE5065CB8EBCE152;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// ExtendedPrimitives_11.Internal.NGonCap
struct NGonCap_t0C4EEAA9D6942B60BBECCEA2AEB8B7FC7F74879A;
// ExtendedPrimitives_11.Internal.NGonCorner
struct NGonCorner_tA1E87375BF5AF6D149E4B4D8CACB8A8BC6C2B4C2;
// ExtendedPrimitives_11.Internal.OctaCorner
struct OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2;
// ExtendedPrimitives_11.Internal.PieCap
struct PieCap_tDAD4D8145ED6AE686031F7C8C74D35BF62E7C845;
// ExtendedPrimitives_11.Internal.PieCenter
struct PieCenter_t538558E0F3A586314A724B4F6B540201E0322606;
// ExtendedPrimitives_11.Internal.PieCorner
struct PieCorner_t834B3B56F1D5AF6C1B6864B63801EFDA6B6C8BC7;
// ExtendedPrimitives_11.Internal.PieFilletEdge
struct PieFilletEdge_tB5FFC918C40DE19AAA267E2EA77271DABDE3C6DD;
// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0;
// ExtendedPrimitives_11.Internal.StatisticClass
struct StatisticClass_tC0DAF0E7EC4079C841A68D111C7DB914FE05B776;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// ExtendedPrimitives_11.Internal.Vertex
struct Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ExtendedPrimitives_11.Internal.Face/Channel
struct Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D;

IL2CPP_EXTERN_C RuntimeClass* Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectTriangulator_tAB17DED97D659CCD781B96E21912F159E348414F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4BA827B79865F018C33CAD4070604E2A54E0FF08;
IL2CPP_EXTERN_C String_t* _stringLiteralB3312B5F5FE977DBC98BFFF43A809C3713ADC6B9;
IL2CPP_EXTERN_C String_t* _stringLiteralE587F6877BF2672FCEB77AB76C911BB1D7FE3874;
IL2CPP_EXTERN_C String_t* _stringLiteralED905B208B2448144CF1EE7862B90C0D8624E374;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3F80BE64454866C0017404FD9982589BD24AA937_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9C5174F33DA348C1CCEE60DAD5F7EF573C222CD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mDF34CBAB9854577F2EE8F361B0B911A4EAE60CF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m0811C7908F1676BB48418E5DBCD981C162E1EDFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4C9E10CBE1F85D0E7D84F6C20A47B6C82095919C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2952044ED6E9480CB8E3A315E64C74A2A47643EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2EC40DADF72E14C9D3DE8DA195F85B4A281BACA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD13362A8BF778F6BA2FCCB62EA00CBA762161A53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m167A28803E058E32996ED5459DF38D914B227242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m68B8F85B440B5481DF9E5FF1F77AA409EDE22F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEA285FA16F9957C70AC184FE2D18B84BAED3B1A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m211D86FDD740048B73656BF38CED93EA193951F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE1288AE6638F18E17AE5FC11BC4F237FB7270FFB_RuntimeMethod_var;
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6;

struct ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D;
struct MeshEdgeU5BU5D_t406C5B30EBA07B5BE74882FC72A96967796000F8;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC;
struct QuadU5BU5D_t6F0BDE1BACD2276B7C8B16BE97546BF173FCDA21;
struct TrisU5BU5D_tA7E1996FF15D766253EE11012E299CEF4DD6EC99;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Element>
struct List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Face>
struct List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	FaceU5BU5D_tC88286ABC68354114768AB87F926E366881ED709* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	FaceU5BU5D_tC88286ABC68354114768AB87F926E366881ED709* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.MeshEdge>
struct List_1_t9535C53413AED810FC1D8418ADA8834974E63B61  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MeshEdgeU5BU5D_t406C5B30EBA07B5BE74882FC72A96967796000F8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9535C53413AED810FC1D8418ADA8834974E63B61_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MeshEdgeU5BU5D_t406C5B30EBA07B5BE74882FC72A96967796000F8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad>
struct List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	QuadU5BU5D_t6F0BDE1BACD2276B7C8B16BE97546BF173FCDA21* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	QuadU5BU5D_t6F0BDE1BACD2276B7C8B16BE97546BF173FCDA21* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris>
struct List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TrisU5BU5D_tA7E1996FF15D766253EE11012E299CEF4DD6EC99* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TrisU5BU5D_tA7E1996FF15D766253EE11012E299CEF4DD6EC99* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// ExtendedPrimitives_11.Internal.ConnectTriangulator
struct ConnectTriangulator_tAB17DED97D659CCD781B96E21912F159E348414F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris> ExtendedPrimitives_11.Internal.ConnectTriangulator::ResultTris
	List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* ___ResultTris_0;
	// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad> ExtendedPrimitives_11.Internal.ConnectTriangulator::ResultQuads
	List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* ___ResultQuads_1;
};

// ExtendedPrimitives_11.Internal.Face
struct Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF  : public RuntimeObject
{
	// System.Int32 ExtendedPrimitives_11.Internal.Face::v0
	int32_t ___v0_0;
	// System.Int32 ExtendedPrimitives_11.Internal.Face::v1
	int32_t ___v1_1;
	// System.Int32 ExtendedPrimitives_11.Internal.Face::v2
	int32_t ___v2_2;
	// ExtendedPrimitives_11.Internal.Face/Channel ExtendedPrimitives_11.Internal.Face::UV0
	Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D* ___UV0_3;
	// ExtendedPrimitives_11.Internal.Face/Channel ExtendedPrimitives_11.Internal.Face::UV2
	Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D* ___UV2_4;
};

// ExtendedPrimitives_11.Internal.GizmosExtension
struct GizmosExtension_t8BE6D9B542C1414FCCAEAC5C8837E964E3EB1F03  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// ExtendedPrimitives_11.Internal.ExpBool
struct ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F 
{
	// System.Boolean ExtendedPrimitives_11.Internal.ExpBool::prevValue
	bool ___prevValue_0;
	// System.Boolean ExtendedPrimitives_11.Internal.ExpBool::Value
	bool ___Value_1;
};
// Native definition for P/Invoke marshalling of ExtendedPrimitives_11.Internal.ExpBool
struct ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F_marshaled_pinvoke
{
	int32_t ___prevValue_0;
	int32_t ___Value_1;
};
// Native definition for COM marshalling of ExtendedPrimitives_11.Internal.ExpBool
struct ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F_marshaled_com
{
	int32_t ___prevValue_0;
	int32_t ___Value_1;
};

// ExtendedPrimitives_11.Internal.ExpFloat
struct ExpFloat_t25A2295EC87D1815849FBE729E1F861E7CA77C0B 
{
	// System.Single ExtendedPrimitives_11.Internal.ExpFloat::prevValue
	float ___prevValue_0;
	// System.Single ExtendedPrimitives_11.Internal.ExpFloat::Value
	float ___Value_1;
};

// ExtendedPrimitives_11.Internal.ExpInt
struct ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 
{
	// System.Int32 ExtendedPrimitives_11.Internal.ExpInt::prevValue
	int32_t ___prevValue_0;
	// System.Int32 ExtendedPrimitives_11.Internal.ExpInt::Value
	int32_t ___Value_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// ExtendedPrimitives_11.Internal.Matrix2d
struct Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D 
{
	// System.Single ExtendedPrimitives_11.Internal.Matrix2d::m00
	float ___m00_2;
	// System.Single ExtendedPrimitives_11.Internal.Matrix2d::m10
	float ___m10_3;
	// System.Single ExtendedPrimitives_11.Internal.Matrix2d::m20
	float ___m20_4;
	// System.Single ExtendedPrimitives_11.Internal.Matrix2d::m01
	float ___m01_5;
	// System.Single ExtendedPrimitives_11.Internal.Matrix2d::m11
	float ___m11_6;
	// System.Single ExtendedPrimitives_11.Internal.Matrix2d::m21
	float ___m21_7;
	// System.Single ExtendedPrimitives_11.Internal.Matrix2d::m02
	float ___m02_8;
	// System.Single ExtendedPrimitives_11.Internal.Matrix2d::m12
	float ___m12_9;
	// System.Single ExtendedPrimitives_11.Internal.Matrix2d::m22
	float ___m22_10;
};

struct Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D_StaticFields
{
	// ExtendedPrimitives_11.Internal.Matrix2d ExtendedPrimitives_11.Internal.Matrix2d::identity
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D ___identity_0;
	// ExtendedPrimitives_11.Internal.Matrix2d ExtendedPrimitives_11.Internal.Matrix2d::zero
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D ___zero_1;
};

// ExtendedPrimitives_11.Internal.MeshEdge
struct MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 
{
	// System.Int32 ExtendedPrimitives_11.Internal.MeshEdge::A
	int32_t ___A_0;
	// System.Int32 ExtendedPrimitives_11.Internal.MeshEdge::B
	int32_t ___B_1;
};

// ExtendedPrimitives_11.Internal.OverrideFloatParam
struct OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745 
{
	// System.Boolean ExtendedPrimitives_11.Internal.OverrideFloatParam::Enabled
	bool ___Enabled_0;
	// System.Single ExtendedPrimitives_11.Internal.OverrideFloatParam::Value
	float ___Value_1;
};
// Native definition for P/Invoke marshalling of ExtendedPrimitives_11.Internal.OverrideFloatParam
struct OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745_marshaled_pinvoke
{
	int32_t ___Enabled_0;
	float ___Value_1;
};
// Native definition for COM marshalling of ExtendedPrimitives_11.Internal.OverrideFloatParam
struct OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745_marshaled_com
{
	int32_t ___Enabled_0;
	float ___Value_1;
};

// UnityEngine.PropertyAttribute
struct PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// ExtendedPrimitives_11.Internal.ConnectTriangulator/IndexCounter
struct IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D 
{
	// System.Int32 ExtendedPrimitives_11.Internal.ConnectTriangulator/IndexCounter::i
	int32_t ___i_0;
	// System.Int32 ExtendedPrimitives_11.Internal.ConnectTriangulator/IndexCounter::ni
	int32_t ___ni_1;
	// System.Int32 ExtendedPrimitives_11.Internal.ConnectTriangulator/IndexCounter::Dir
	int32_t ___Dir_2;
	// System.Int32 ExtendedPrimitives_11.Internal.ConnectTriangulator/IndexCounter::Length
	int32_t ___Length_3;
};

// ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad
struct Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B 
{
	// System.Int32 ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad::A
	int32_t ___A_0;
	// System.Int32 ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad::B
	int32_t ___B_1;
	// System.Int32 ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad::C
	int32_t ___C_2;
	// System.Int32 ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad::D
	int32_t ___D_3;
	// System.Boolean ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad::Flipped
	bool ___Flipped_4;
};
// Native definition for P/Invoke marshalling of ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad
struct Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B_marshaled_pinvoke
{
	int32_t ___A_0;
	int32_t ___B_1;
	int32_t ___C_2;
	int32_t ___D_3;
	int32_t ___Flipped_4;
};
// Native definition for COM marshalling of ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad
struct Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B_marshaled_com
{
	int32_t ___A_0;
	int32_t ___B_1;
	int32_t ___C_2;
	int32_t ___D_3;
	int32_t ___Flipped_4;
};

// ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris
struct Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC 
{
	// System.Int32 ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris::A
	int32_t ___A_0;
	// System.Int32 ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris::B
	int32_t ___B_1;
	// System.Int32 ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris::C
	int32_t ___C_2;
	// System.Boolean ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris::Flipped
	bool ___Flipped_3;
};
// Native definition for P/Invoke marshalling of ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris
struct Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC_marshaled_pinvoke
{
	int32_t ___A_0;
	int32_t ___B_1;
	int32_t ___C_2;
	int32_t ___Flipped_3;
};
// Native definition for COM marshalling of ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris
struct Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC_marshaled_com
{
	int32_t ___A_0;
	int32_t ___B_1;
	int32_t ___C_2;
	int32_t ___Flipped_3;
};

// ExtendedPrimitives_11.Internal.A_ExpBool
struct A_ExpBool_t2219105D9695E9FA97970EE44161E3256A6F21C1  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String ExtendedPrimitives_11.Internal.A_ExpBool::Tooltip
	String_t* ___Tooltip_0;
	// System.Boolean ExtendedPrimitives_11.Internal.A_ExpBool::IsButton
	bool ___IsButton_1;
};

// ExtendedPrimitives_11.Internal.A_ExpColor32
struct A_ExpColor32_t1A17B44C6BC2E52E23E74B7044EF52B655EDA408  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String ExtendedPrimitives_11.Internal.A_ExpColor32::Tooltip
	String_t* ___Tooltip_0;
};

// ExtendedPrimitives_11.Internal.A_ExpFloat
struct A_ExpFloat_tB7200A9108956CE2C80EA271E5BCFE530C95A847  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Boolean ExtendedPrimitives_11.Internal.A_ExpFloat::IsSlider
	bool ___IsSlider_0;
	// System.String ExtendedPrimitives_11.Internal.A_ExpFloat::Tooltip
	String_t* ___Tooltip_1;
	// System.Single ExtendedPrimitives_11.Internal.A_ExpFloat::Min
	float ___Min_2;
	// System.Single ExtendedPrimitives_11.Internal.A_ExpFloat::Max
	float ___Max_3;
};

// ExtendedPrimitives_11.Internal.A_ExpGradient
struct A_ExpGradient_tFD39074918823B461796FC692589BB847018F5D9  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String ExtendedPrimitives_11.Internal.A_ExpGradient::Tooltip
	String_t* ___Tooltip_0;
};

// ExtendedPrimitives_11.Internal.A_ExpInt
struct A_ExpInt_t8C3CD667A6586350588BD30E9C7AF7F11C09011E  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.Boolean ExtendedPrimitives_11.Internal.A_ExpInt::IsSlider
	bool ___IsSlider_0;
	// System.String ExtendedPrimitives_11.Internal.A_ExpInt::Tooltip
	String_t* ___Tooltip_1;
	// System.Int32 ExtendedPrimitives_11.Internal.A_ExpInt::Min
	int32_t ___Min_2;
	// System.Int32 ExtendedPrimitives_11.Internal.A_ExpInt::Max
	int32_t ___Max_3;
};

// ExtendedPrimitives_11.Internal.A_ExpVector2
struct A_ExpVector2_tF59C8CD3B27B215CA7E78C21CE9C6370A677B89D  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String ExtendedPrimitives_11.Internal.A_ExpVector2::Tooltip
	String_t* ___Tooltip_0;
};

// ExtendedPrimitives_11.Internal.A_OverrideFloatParam
struct A_OverrideFloatParam_tA5E7612A3D04A50C79AD370A177226803EDACF69  : public PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0
{
	// System.String ExtendedPrimitives_11.Internal.A_OverrideFloatParam::Tooltip
	String_t* ___Tooltip_0;
};

// ExtendedPrimitives_11.Internal.ArcSegment
struct ArcSegment_t923B1379845A603ABAE8C75954ECE467E666C3AC  : public RuntimeObject
{
	// UnityEngine.Vector2[] ExtendedPrimitives_11.Internal.ArcSegment::points
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___points_0;
	// System.Int32 ExtendedPrimitives_11.Internal.ArcSegment::aidx
	int32_t ___aidx_1;
	// System.Int32 ExtendedPrimitives_11.Internal.ArcSegment::bidx
	int32_t ___bidx_2;
	// System.Int32 ExtendedPrimitives_11.Internal.ArcSegment::cidx
	int32_t ___cidx_3;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.ArcSegment::A
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___A_4;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.ArcSegment::B
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___B_5;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.ArcSegment::C
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___C_6;
	// System.Int32 ExtendedPrimitives_11.Internal.ArcSegment::Detalization
	int32_t ___Detalization_7;
	// System.Single ExtendedPrimitives_11.Internal.ArcSegment::Radius
	float ___Radius_8;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.ArcSegment::Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Center_9;
	// System.Single ExtendedPrimitives_11.Internal.ArcSegment::angleA
	float ___angleA_10;
	// System.Single ExtendedPrimitives_11.Internal.ArcSegment::angleB
	float ___angleB_11;
	// System.Single ExtendedPrimitives_11.Internal.ArcSegment::angleC
	float ___angleC_12;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// ExtendedPrimitives_11.Internal.Edge2d
struct Edge2d_t52914D645107AC4D516052D5BF3B9563D31015EE 
{
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Edge2d::A
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___A_0;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Edge2d::B
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___B_1;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Edge2d::ab
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ab_2;
	// System.Single ExtendedPrimitives_11.Internal.Edge2d::length
	float ___length_3;
	// System.Single ExtendedPrimitives_11.Internal.Edge2d::length2
	float ___length2_4;
};

// ExtendedPrimitives_11.Internal.Element
struct Element_tDD021D15E39F04405664845456EE25BFDC6FC663  : public RuntimeObject
{
	// System.Boolean ExtendedPrimitives_11.Internal.Element::Displayed
	bool ___Displayed_0;
	// ExtendedPrimitives_11.ExtendedPrimitive ExtendedPrimitives_11.Internal.Element::parent
	ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* ___parent_5;
	// System.Int32 ExtendedPrimitives_11.Internal.Element::SegmentsX
	int32_t ___SegmentsX_6;
	// System.Int32 ExtendedPrimitives_11.Internal.Element::SegmentsY
	int32_t ___SegmentsY_7;
	// System.Int32 ExtendedPrimitives_11.Internal.Element::LengthX
	int32_t ___LengthX_8;
	// System.Int32 ExtendedPrimitives_11.Internal.Element::LengthY
	int32_t ___LengthY_9;
	// ExtendedPrimitives_11.Internal.Vertex[] ExtendedPrimitives_11.Internal.Element::vertices
	VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___vertices_10;
	// ExtendedPrimitives_11.Internal.Vertex[] ExtendedPrimitives_11.Internal.Element::Left
	VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___Left_11;
	// ExtendedPrimitives_11.Internal.Vertex[] ExtendedPrimitives_11.Internal.Element::LeftReversed
	VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___LeftReversed_12;
	// ExtendedPrimitives_11.Internal.Vertex[] ExtendedPrimitives_11.Internal.Element::Top
	VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___Top_13;
	// ExtendedPrimitives_11.Internal.Vertex[] ExtendedPrimitives_11.Internal.Element::TopReversed
	VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___TopReversed_14;
	// ExtendedPrimitives_11.Internal.Vertex[] ExtendedPrimitives_11.Internal.Element::Right
	VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___Right_15;
	// ExtendedPrimitives_11.Internal.Vertex[] ExtendedPrimitives_11.Internal.Element::RightReversed
	VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___RightReversed_16;
	// ExtendedPrimitives_11.Internal.Vertex[] ExtendedPrimitives_11.Internal.Element::Bottom
	VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___Bottom_17;
	// ExtendedPrimitives_11.Internal.Vertex[] ExtendedPrimitives_11.Internal.Element::BottomReversed
	VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___BottomReversed_18;
	// ExtendedPrimitives_11.Internal.Vertex[] ExtendedPrimitives_11.Internal.Element::Corners
	VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___Corners_19;
	// ExtendedPrimitives_11.Internal.Vertex[] ExtendedPrimitives_11.Internal.Element::Outline
	VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___Outline_20;
	// System.Single ExtendedPrimitives_11.Internal.Element::NormalSign
	float ___NormalSign_21;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Element::uvScale
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uvScale_22;
};

// ExtendedPrimitives_11.Internal.ExpColor32
struct ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 
{
	// ExtendedPrimitives_11.Internal.ExpInt ExtendedPrimitives_11.Internal.ExpColor32::r
	ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 ___r_0;
	// ExtendedPrimitives_11.Internal.ExpInt ExtendedPrimitives_11.Internal.ExpColor32::g
	ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 ___g_1;
	// ExtendedPrimitives_11.Internal.ExpInt ExtendedPrimitives_11.Internal.ExpColor32::b
	ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 ___b_2;
	// ExtendedPrimitives_11.Internal.ExpInt ExtendedPrimitives_11.Internal.ExpColor32::a
	ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 ___a_3;
};

// ExtendedPrimitives_11.Internal.ExpVector2
struct ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF 
{
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.ExpVector2::prevValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___prevValue_0;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.ExpVector2::Value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Value_1;
};

// ExtendedPrimitives_11.Internal.Fillet
struct Fillet_t3251BF5FFD5D573ECFCDE0D3312736BE9E2E135D 
{
	// System.Int32 ExtendedPrimitives_11.Internal.Fillet::InNormal
	int32_t ___InNormal_0;
	// System.Single ExtendedPrimitives_11.Internal.Fillet::InNormalPos
	float ___InNormalPos_1;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Fillet::A
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___A_2;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Fillet::B
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___B_3;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Fillet::C
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___C_4;
	// System.Single ExtendedPrimitives_11.Internal.Fillet::Rot
	float ___Rot_5;
	// System.Single ExtendedPrimitives_11.Internal.Fillet::Angle
	float ___Angle_6;
	// System.Single ExtendedPrimitives_11.Internal.Fillet::Sign
	float ___Sign_7;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Fillet::center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___center_8;
	// System.Single ExtendedPrimitives_11.Internal.Fillet::ClampedRadius
	float ___ClampedRadius_9;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// ExtendedPrimitives_11.Internal.OutlinedFillet
struct OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9 
{
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::A
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___A_0;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::B
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___B_1;
	// System.Single ExtendedPrimitives_11.Internal.OutlinedFillet::Rot
	float ___Rot_2;
	// System.Single ExtendedPrimitives_11.Internal.OutlinedFillet::Angle
	float ___Angle_3;
	// System.Single ExtendedPrimitives_11.Internal.OutlinedFillet::Sign
	float ___Sign_4;
	// System.Single ExtendedPrimitives_11.Internal.OutlinedFillet::ClampedRadius
	float ___ClampedRadius_5;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Center_6;
	// System.Single ExtendedPrimitives_11.Internal.OutlinedFillet::InnerOutline
	float ___InnerOutline_7;
	// System.Single ExtendedPrimitives_11.Internal.OutlinedFillet::OuterOutline
	float ___OuterOutline_8;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::abOrtho
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___abOrtho_9;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::bcOrtho
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___bcOrtho_10;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::ba
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___ba_11;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::cb
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cb_12;
	// System.Single ExtendedPrimitives_11.Internal.OutlinedFillet::baMagnitude
	float ___baMagnitude_13;
	// System.Single ExtendedPrimitives_11.Internal.OutlinedFillet::cbMagnitude
	float ___cbMagnitude_14;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::MiddleDir
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___MiddleDir_15;
};

// ExtendedPrimitives_11.Internal.TextureChannelParams
struct TextureChannelParams_tCDC80E2CF3127F9A457EE8DF8616C9BC89A139C6 
{
	// ExtendedPrimitives_11.Internal.UpdateTextureCoordsModeEnum ExtendedPrimitives_11.Internal.TextureChannelParams::UpdateMode
	int32_t ___UpdateMode_0;
	// ExtendedPrimitives_11.Internal.MappingMethodEnum ExtendedPrimitives_11.Internal.TextureChannelParams::MappintType
	int32_t ___MappintType_1;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.TextureChannelParams::Scale
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Scale_2;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.TextureChannelParams::Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Offset_3;
	// UnityEngine.Transform ExtendedPrimitives_11.Internal.TextureChannelParams::TopTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___TopTransform_4;
	// UnityEngine.Transform ExtendedPrimitives_11.Internal.TextureChannelParams::BottomTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___BottomTransform_5;
	// UnityEngine.Matrix4x4[] ExtendedPrimitives_11.Internal.TextureChannelParams::PlanarTMs
	Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___PlanarTMs_6;
};
// Native definition for P/Invoke marshalling of ExtendedPrimitives_11.Internal.TextureChannelParams
struct TextureChannelParams_tCDC80E2CF3127F9A457EE8DF8616C9BC89A139C6_marshaled_pinvoke
{
	int32_t ___UpdateMode_0;
	int32_t ___MappintType_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Scale_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Offset_3;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___TopTransform_4;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___BottomTransform_5;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___PlanarTMs_6;
};
// Native definition for COM marshalling of ExtendedPrimitives_11.Internal.TextureChannelParams
struct TextureChannelParams_tCDC80E2CF3127F9A457EE8DF8616C9BC89A139C6_marshaled_com
{
	int32_t ___UpdateMode_0;
	int32_t ___MappintType_1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Scale_2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Offset_3;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___TopTransform_4;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___BottomTransform_5;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___PlanarTMs_6;
};

// ExtendedPrimitives_11.Internal.Triangle2d
struct Triangle2d_t5046FEE31532C61D5C03507D4C536B56F4F504DB 
{
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Triangle2d::a
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a_0;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Triangle2d::b
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b_1;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Triangle2d::c
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___c_2;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Triangle2d::v0
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0_3;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Triangle2d::v1
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v1_4;
	// System.Single ExtendedPrimitives_11.Internal.Triangle2d::dot00
	float ___dot00_5;
	// System.Single ExtendedPrimitives_11.Internal.Triangle2d::dot01
	float ___dot01_6;
	// System.Single ExtendedPrimitives_11.Internal.Triangle2d::dot11
	float ___dot11_7;
	// System.Single ExtendedPrimitives_11.Internal.Triangle2d::invDenom
	float ___invDenom_8;
};

// ExtendedPrimitives_11.Internal.Vertex
struct Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964  : public RuntimeObject
{
	// System.Int32 ExtendedPrimitives_11.Internal.Vertex::LocalX
	int32_t ___LocalX_0;
	// System.Int32 ExtendedPrimitives_11.Internal.Vertex::LocalY
	int32_t ___LocalY_1;
	// System.Int32 ExtendedPrimitives_11.Internal.Vertex::Local
	int32_t ___Local_2;
	// System.Int32 ExtendedPrimitives_11.Internal.Vertex::Global
	int32_t ___Global_3;
	// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Vertex::RefNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RefNormal_4;
	// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Vertex::Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Normal_5;
	// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Vertex::RefPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RefPos_6;
	// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Vertex::Pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Pos_7;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Vertex::RefUV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___RefUV_8;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Vertex::UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___UV_9;
	// UnityEngine.Color ExtendedPrimitives_11.Internal.Vertex::Col
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Col_10;
	// UnityEngine.Vector4 ExtendedPrimitives_11.Internal.Vertex::Tangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Tangent_11;
	// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Face> ExtendedPrimitives_11.Internal.Vertex::AdjacentFaces
	List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* ___AdjacentFaces_12;
	// System.Single ExtendedPrimitives_11.Internal.Vertex::AdjacentMult
	float ___AdjacentMult_13;
	// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Vertex::NormalizedCoords
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___NormalizedCoords_14;
};

// ExtendedPrimitives_11.Internal.Face/Channel
struct Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D  : public RuntimeObject
{
	// ExtendedPrimitives_11.Internal.Face ExtendedPrimitives_11.Internal.Face/Channel::face
	Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF* ___face_0;
	// System.Single ExtendedPrimitives_11.Internal.Face/Channel::tv
	float ___tv_1;
	// System.Single ExtendedPrimitives_11.Internal.Face/Channel::sign
	float ___sign_2;
	// System.Boolean ExtendedPrimitives_11.Internal.Face/Channel::isParallel
	bool ___isParallel_3;
	// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Face/Channel::tangent
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangent_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// ExtendedPrimitives_11.Internal.ExpGradient
struct ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A 
{
	// ExtendedPrimitives_11.Internal.ExpInt ExtendedPrimitives_11.Internal.ExpGradient::KeysCount
	ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 ___KeysCount_0;
	// ExtendedPrimitives_11.Internal.ExpColor32 ExtendedPrimitives_11.Internal.ExpGradient::c0
	ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ___c0_1;
	// ExtendedPrimitives_11.Internal.ExpColor32 ExtendedPrimitives_11.Internal.ExpGradient::c1
	ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ___c1_2;
	// ExtendedPrimitives_11.Internal.ExpColor32 ExtendedPrimitives_11.Internal.ExpGradient::c2
	ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ___c2_3;
	// ExtendedPrimitives_11.Internal.ExpColor32 ExtendedPrimitives_11.Internal.ExpGradient::c3
	ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ___c3_4;
	// ExtendedPrimitives_11.Internal.ExpColor32 ExtendedPrimitives_11.Internal.ExpGradient::c4
	ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ___c4_5;
	// ExtendedPrimitives_11.Internal.ExpColor32 ExtendedPrimitives_11.Internal.ExpGradient::c5
	ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ___c5_6;
	// ExtendedPrimitives_11.Internal.ExpColor32 ExtendedPrimitives_11.Internal.ExpGradient::c6
	ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ___c6_7;
	// ExtendedPrimitives_11.Internal.ExpColor32 ExtendedPrimitives_11.Internal.ExpGradient::c7
	ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ___c7_8;
};

// ExtendedPrimitives_11.Internal.HorizontalCorner
struct HorizontalCorner_tC026C2646D5CDDC1EFF412E4C4A1F232C3A27C9E  : public Element_tDD021D15E39F04405664845456EE25BFDC6FC663
{
	// System.Single ExtendedPrimitives_11.Internal.HorizontalCorner::angle
	float ___angle_23;
	// ExtendedPrimitives_11.Internal.Matrix2d[] ExtendedPrimitives_11.Internal.HorizontalCorner::yRotMatrices
	Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* ___yRotMatrices_24;
};

// ExtendedPrimitives_11.Internal.HorizontalEdge
struct HorizontalEdge_t8E15517F5F37F75115B54750EE5065CB8EBCE152  : public Element_tDD021D15E39F04405664845456EE25BFDC6FC663
{
};

// ExtendedPrimitives_11.Internal.NGonCap
struct NGonCap_t0C4EEAA9D6942B60BBECCEA2AEB8B7FC7F74879A  : public Element_tDD021D15E39F04405664845456EE25BFDC6FC663
{
};

// ExtendedPrimitives_11.Internal.NGonCorner
struct NGonCorner_tA1E87375BF5AF6D149E4B4D8CACB8A8BC6C2B4C2  : public Element_tDD021D15E39F04405664845456EE25BFDC6FC663
{
	// ExtendedPrimitives_11.Internal.Matrix2d[] ExtendedPrimitives_11.Internal.NGonCorner::yRotMatrices
	Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* ___yRotMatrices_23;
	// System.Single ExtendedPrimitives_11.Internal.NGonCorner::uvOffset
	float ___uvOffset_24;
	// System.Single ExtendedPrimitives_11.Internal.NGonCorner::uvRadialLength
	float ___uvRadialLength_25;
};

// ExtendedPrimitives_11.Internal.OctaCorner
struct OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2  : public Element_tDD021D15E39F04405664845456EE25BFDC6FC663
{
};

// ExtendedPrimitives_11.Internal.PieCap
struct PieCap_tDAD4D8145ED6AE686031F7C8C74D35BF62E7C845  : public Element_tDD021D15E39F04405664845456EE25BFDC6FC663
{
	// System.Int32 ExtendedPrimitives_11.Internal.PieCap::InnerSegments
	int32_t ___InnerSegments_23;
	// System.Int32 ExtendedPrimitives_11.Internal.PieCap::OuterSegments
	int32_t ___OuterSegments_24;
	// System.Int32 ExtendedPrimitives_11.Internal.PieCap::InnerLength
	int32_t ___InnerLength_25;
	// System.Int32 ExtendedPrimitives_11.Internal.PieCap::OuterLength
	int32_t ___OuterLength_26;
};

// ExtendedPrimitives_11.Internal.PieCenter
struct PieCenter_t538558E0F3A586314A724B4F6B540201E0322606  : public Element_tDD021D15E39F04405664845456EE25BFDC6FC663
{
	// System.Single ExtendedPrimitives_11.Internal.PieCenter::cachedAngle
	float ___cachedAngle_23;
};

// ExtendedPrimitives_11.Internal.PieCorner
struct PieCorner_t834B3B56F1D5AF6C1B6864B63801EFDA6B6C8BC7  : public Element_tDD021D15E39F04405664845456EE25BFDC6FC663
{
};

// ExtendedPrimitives_11.Internal.PieFilletEdge
struct PieFilletEdge_tB5FFC918C40DE19AAA267E2EA77271DABDE3C6DD  : public Element_tDD021D15E39F04405664845456EE25BFDC6FC663
{
	// System.Single[] ExtendedPrimitives_11.Internal.PieFilletEdge::profileAngles
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___profileAngles_23;
	// UnityEngine.Vector3[] ExtendedPrimitives_11.Internal.PieFilletEdge::profilePoints
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___profilePoints_24;
	// UnityEngine.Vector3[] ExtendedPrimitives_11.Internal.PieFilletEdge::profileBeginNormals
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___profileBeginNormals_25;
	// UnityEngine.Vector3[] ExtendedPrimitives_11.Internal.PieFilletEdge::profileNormalsDelta
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___profileNormalsDelta_26;
	// System.Single ExtendedPrimitives_11.Internal.PieFilletEdge::cachedRadialLength
	float ___cachedRadialLength_27;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ExtendedPrimitives_11.ExtendedPrimitive
struct ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ExtendedPrimitives_11.Internal.StatisticClass ExtendedPrimitives_11.ExtendedPrimitive::Statistic
	StatisticClass_tC0DAF0E7EC4079C841A68D111C7DB914FE05B776* ___Statistic_4;
	// ExtendedPrimitives_11.Internal.UpdateModeEnum ExtendedPrimitives_11.ExtendedPrimitive::UpdateMode
	int32_t ___UpdateMode_5;
	// ExtendedPrimitives_11.Internal.TangentRecalculationModeEnum ExtendedPrimitives_11.ExtendedPrimitive::_tangentsMode
	int32_t ____tangentsMode_6;
	// ExtendedPrimitives_11.Internal.TangentRecalculationModeEnum ExtendedPrimitives_11.ExtendedPrimitive::TangentsMode
	int32_t ___TangentsMode_7;
	// ExtendedPrimitives_11.Internal.ColliderClass ExtendedPrimitives_11.ExtendedPrimitive::Collider
	ColliderClass_t5FE6C5399144E41B3616F31EEA571440C57F3A01* ___Collider_8;
	// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Element> ExtendedPrimitives_11.ExtendedPrimitive::Elements
	List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* ___Elements_9;
	// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Element> ExtendedPrimitives_11.ExtendedPrimitive::Top
	List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* ___Top_10;
	// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Element> ExtendedPrimitives_11.ExtendedPrimitive::Side
	List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* ___Side_11;
	// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Element> ExtendedPrimitives_11.ExtendedPrimitive::Bottom
	List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* ___Bottom_12;
	// UnityEngine.Mesh ExtendedPrimitives_11.ExtendedPrimitive::m
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_13;
	// UnityEngine.MeshRenderer ExtendedPrimitives_11.ExtendedPrimitive::_meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ____meshRenderer_14;
	// UnityEngine.MeshFilter ExtendedPrimitives_11.ExtendedPrimitive::_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ____meshFilter_15;
	// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.MeshEdge> ExtendedPrimitives_11.ExtendedPrimitive::MEdges
	List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* ___MEdges_16;
	// System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Face> ExtendedPrimitives_11.ExtendedPrimitive::Faces
	List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* ___Faces_17;
	// UnityEngine.Vector3[] ExtendedPrimitives_11.ExtendedPrimitive::mvertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___mvertices_18;
	// UnityEngine.Vector3[] ExtendedPrimitives_11.ExtendedPrimitive::mnormals
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___mnormals_19;
	// UnityEngine.Color[] ExtendedPrimitives_11.ExtendedPrimitive::mcolors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___mcolors_20;
	// UnityEngine.Vector2[] ExtendedPrimitives_11.ExtendedPrimitive::muv
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___muv_21;
	// UnityEngine.Vector2[] ExtendedPrimitives_11.ExtendedPrimitive::muv2
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___muv2_22;
	// UnityEngine.Vector4[] ExtendedPrimitives_11.ExtendedPrimitive::mtangents
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___mtangents_23;
	// System.Int32[] ExtendedPrimitives_11.ExtendedPrimitive::trisIndeces
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___trisIndeces_24;
	// UnityEngine.Bounds ExtendedPrimitives_11.ExtendedPrimitive::bounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___bounds_25;
	// System.Int32 ExtendedPrimitives_11.ExtendedPrimitive::vertsCounter
	int32_t ___vertsCounter_26;
	// System.Single ExtendedPrimitives_11.ExtendedPrimitive::BoundsInflateMultiplier
	float ___BoundsInflateMultiplier_31;
	// UnityEngine.Color ExtendedPrimitives_11.ExtendedPrimitive::ObjectGizmoColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ObjectGizmoColor_32;
	// ExtendedPrimitives_11.Internal.ConstraintsClass ExtendedPrimitives_11.ExtendedPrimitive::Constraints
	ConstraintsClass_t2BDA6C8AC6F9C8B7035B6B27AEC6937202A40D3C* ___Constraints_33;
	// ExtendedPrimitives_11.Internal.TextureChannelParams ExtendedPrimitives_11.ExtendedPrimitive::_UV0
	TextureChannelParams_tCDC80E2CF3127F9A457EE8DF8616C9BC89A139C6 ____UV0_34;
	// ExtendedPrimitives_11.Internal.TextureChannelParams ExtendedPrimitives_11.ExtendedPrimitive::UV0
	TextureChannelParams_tCDC80E2CF3127F9A457EE8DF8616C9BC89A139C6 ___UV0_35;
	// ExtendedPrimitives_11.Internal.TextureChannelParams ExtendedPrimitives_11.ExtendedPrimitive::_UV2
	TextureChannelParams_tCDC80E2CF3127F9A457EE8DF8616C9BC89A139C6 ____UV2_36;
	// ExtendedPrimitives_11.Internal.TextureChannelParams ExtendedPrimitives_11.ExtendedPrimitive::UV2
	TextureChannelParams_tCDC80E2CF3127F9A457EE8DF8616C9BC89A139C6 ___UV2_37;
	// System.Single[] ExtendedPrimitives_11.ExtendedPrimitive::UVInspectorParams
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___UVInspectorParams_38;
	// System.Single ExtendedPrimitives_11.ExtendedPrimitive::<PivotOffset>k__BackingField
	float ___U3CPivotOffsetU3Ek__BackingField_39;
	// System.Single ExtendedPrimitives_11.ExtendedPrimitive::<Height>k__BackingField
	float ___U3CHeightU3Ek__BackingField_40;
	// System.Single ExtendedPrimitives_11.ExtendedPrimitive::<FilletRadius>k__BackingField
	float ___U3CFilletRadiusU3Ek__BackingField_41;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// ExtendedPrimitives_11.Internal.Vertex[]
struct VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC  : public RuntimeArray
{
	ALIGN_FIELD (8) Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* m_Items[1];

	inline Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ExtendedPrimitives_11.Internal.Matrix2d[]
struct Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D m_Items[1];

	inline Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ExtendedPrimitives_11.Internal.Element[]
struct ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD  : public RuntimeArray
{
	ALIGN_FIELD (8) Element_tDD021D15E39F04405664845456EE25BFDC6FC663* m_Items[1];

	inline Element_tDD021D15E39F04405664845456EE25BFDC6FC663* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Element_tDD021D15E39F04405664845456EE25BFDC6FC663** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Element_tDD021D15E39F04405664845456EE25BFDC6FC663* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Element_tDD021D15E39F04405664845456EE25BFDC6FC663* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Element_tDD021D15E39F04405664845456EE25BFDC6FC663** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Element_tDD021D15E39F04405664845456EE25BFDC6FC663* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris[]
struct TrisU5BU5D_tA7E1996FF15D766253EE11012E299CEF4DD6EC99  : public RuntimeArray
{
	ALIGN_FIELD (8) Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC m_Items[1];

	inline Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC value)
	{
		m_Items[index] = value;
	}
};
// ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad[]
struct QuadU5BU5D_t6F0BDE1BACD2276B7C8B16BE97546BF173FCDA21  : public RuntimeArray
{
	ALIGN_FIELD (8) Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B m_Items[1];

	inline Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B value)
	{
		m_Items[index] = value;
	}
};
// ExtendedPrimitives_11.Internal.MeshEdge[]
struct MeshEdgeU5BU5D_t406C5B30EBA07B5BE74882FC72A96967796000F8  : public RuntimeArray
{
	ALIGN_FIELD (8) MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 m_Items[1];

	inline MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2EC40DADF72E14C9D3DE8DA195F85B4A281BACA7_gshared (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mD13362A8BF778F6BA2FCCB62EA00CBA762161A53_gshared (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m4C9E10CBE1F85D0E7D84F6C20A47B6C82095919C_gshared_inline (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m0811C7908F1676BB48418E5DBCD981C162E1EDFA_gshared_inline (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m9C5174F33DA348C1CCEE60DAD5F7EF573C222CD8_gshared_inline (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* __this, Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m3F80BE64454866C0017404FD9982589BD24AA937_gshared_inline (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* __this, Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.MeshEdge>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_gshared_inline (List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* __this, MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC List_1_get_Item_mE1288AE6638F18E17AE5FC11BC4F237FB7270FFB_gshared (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m68B8F85B440B5481DF9E5FF1F77AA409EDE22F8F_gshared_inline (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B List_1_get_Item_m211D86FDD740048B73656BF38CED93EA193951F8_gshared (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m167A28803E058E32996ED5459DF38D914B227242_gshared_inline (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* __this, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris>::.ctor()
inline void List_1__ctor_m2EC40DADF72E14C9D3DE8DA195F85B4A281BACA7 (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0*, const RuntimeMethod*))List_1__ctor_m2EC40DADF72E14C9D3DE8DA195F85B4A281BACA7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad>::.ctor()
inline void List_1__ctor_mD13362A8BF778F6BA2FCCB62EA00CBA762161A53 (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A*, const RuntimeMethod*))List_1__ctor_mD13362A8BF778F6BA2FCCB62EA00CBA762161A53_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris>::Clear()
inline void List_1_Clear_m4C9E10CBE1F85D0E7D84F6C20A47B6C82095919C_inline (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0*, const RuntimeMethod*))List_1_Clear_m4C9E10CBE1F85D0E7D84F6C20A47B6C82095919C_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad>::Clear()
inline void List_1_Clear_m0811C7908F1676BB48418E5DBCD981C162E1EDFA_inline (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A*, const RuntimeMethod*))List_1_Clear_m0811C7908F1676BB48418E5DBCD981C162E1EDFA_gshared_inline)(__this, method);
}
// System.Void ExtendedPrimitives_11.Internal.ConnectTriangulator/IndexCounter::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexCounter__ctor_m0965AEE29FC1722360A1FD363A067E849A1D3C96 (IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D* __this, int32_t ___length0, int32_t ___dir1, const RuntimeMethod* method) ;
// System.Boolean ExtendedPrimitives_11.Internal.ConnectTriangulator/IndexCounter::get_Completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexCounter_get_Completed_mB34BF01B373E1B80D3595452C87C35FAF5147146 (IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D* __this, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tris__ctor_m57E0A514F75DC835FA833754F56F2BF52ECB03D3 (Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, bool ___flipped3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris>::Add(T)
inline void List_1_Add_m9C5174F33DA348C1CCEE60DAD5F7EF573C222CD8_inline (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* __this, Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0*, Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC, const RuntimeMethod*))List_1_Add_m9C5174F33DA348C1CCEE60DAD5F7EF573C222CD8_gshared_inline)(__this, ___item0, method);
}
// System.Void ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quad__ctor_m704A29B0B46FA57EF32461457593E4E98655000A (Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, bool ___flipped4, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad>::Add(T)
inline void List_1_Add_m3F80BE64454866C0017404FD9982589BD24AA937_inline (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* __this, Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A*, Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B, const RuntimeMethod*))List_1_Add_m3F80BE64454866C0017404FD9982589BD24AA937_gshared_inline)(__this, ___item0, method);
}
// System.Void ExtendedPrimitives_11.Internal.ConnectTriangulator/IndexCounter::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexCounter_MoveNext_m136F3EA31F2BB648376C4AFA558BAF00F35105F4 (IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Matrix2d::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Matrix2d_get_Position_m101637DC9A94CD1C97C3825EBA2BCDFE761F1698 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::set_Position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d_set_Position_mD838CB941C6435377986552E6DEE53DAB15F1798 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Matrix2d::get_Right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Matrix2d_get_Right_mE73BCA083EA6B559B0BE0E0C34C38A9680E73469 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Matrix2d::get_Up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Matrix2d_get_Up_m087209B281F15755DE2CBFFD09D740DD73642A4E (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::.ctor(System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d__ctor_m96A7C271BE9406B5E0E2280A92D10EB2FA5BFB7B (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, float ___xDegreeAngle0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos1, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::.ctor(System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d__ctor_m27E3FB6F6839589B357ADD174341C787E8B95E18 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, float ___xDegreeAngle0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale2, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d__ctor_m9E71271929F7DF381898399D3ED5F523542C00FC (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, float ___xRadiansAngle0, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::.ctor(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d__ctor_mD10D587E24A7C6D04EF23F45B882E4979F41C870 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dirX0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dirY1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos2, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d__ctor_m44BA0249B8A626878BABFD6C70EBD20A9872594A (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, float ___a000, float ___a101, float ___a202, float ___a013, float ___a114, float ___a215, float ___a026, float ___a127, float ___a228, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::.ctor(UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d__ctor_m01745626D28DF5B367C189FF35225F18EE22B5C9 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, bool ___normalized2, const RuntimeMethod* method) ;
// ExtendedPrimitives_11.Internal.Matrix2d ExtendedPrimitives_11.Internal.Matrix2d::op_Multiply(ExtendedPrimitives_11.Internal.Matrix2d,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D Matrix2d_op_Multiply_m37BDEEAAA233492BB0B76C0ECB25CCFDF250A275 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D ___m0, float ___f1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Matrix2d::MultiplyPoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Matrix2d_MultiplyPoint_mBF8C8C2058394C3E7B1BB47732A87F9D2FF7A165 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::DrawGizmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d_DrawGizmo_m363BF80F79ED988C438A136A8663D32F89EAAEB0 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Extension::XYtoXyZ(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Extension_XYtoXyZ_mFDBCB3387A74A2EC5EACC58373133523FF42B2F2 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::DrawGizmoXZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d_DrawGizmoXZ_m42A3E569F67043D9965CBFEF5B0F86E31F42D055 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Matrix2d::MultiplyVector(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Matrix2d_MultiplyVector_m2BA54FBD7A6ADB115B409F21901CDED5EFE47E09 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Matrix2d::MultiplyVectorX(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyVectorX_m4568F969C03A57915742A680F0C4717CC8764550 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Matrix2d::MultiplyPointX(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyPointX_mAF6B827D018204B5F420949D070BBD565A04637A (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Matrix2d::MultiplyVectorY(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Matrix2d::MultiplyPointY(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyPointY_mF09D4CD0799D7F4DD424FC6B0E6CEBB564F6D5B0 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Matrix2d::MultiplyVectorZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyVectorZ_mD0F32EB5D6B7BF55D3DCD29E655401073347CAB8 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Matrix2d::MultiplyPointZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyPointZ_m775AA84E38B223E849DEFCB584D1FE642E278079 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method) ;
// ExtendedPrimitives_11.Internal.Matrix2d ExtendedPrimitives_11.Internal.Matrix2d::get_Transpose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D Matrix2d_get_Transpose_m544D18CEEF8F24C7DBCD3FB3BC5B9429EF8B2724 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, const RuntimeMethod* method) ;
// ExtendedPrimitives_11.Internal.Matrix2d ExtendedPrimitives_11.Internal.Matrix2d::op_Multiply(System.Single,ExtendedPrimitives_11.Internal.Matrix2d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D Matrix2d_op_Multiply_mE58D8B96AA5F1D0A27756FEFC1525A2113E2A64E (float ___f0, Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D ___m1, const RuntimeMethod* method) ;
// ExtendedPrimitives_11.Internal.Matrix2d ExtendedPrimitives_11.Internal.Matrix2d::get_Inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D Matrix2d_get_Inverse_m12620DF3E42432AD24DFBF7210793CAD88FFF7FA (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Edge2d::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge2d__ctor_m1CD975934B76EFEC3A30C00B9FA02127472535BE (Edge2d_t52914D645107AC4D516052D5BF3B9563D31015EE* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single ExtendedPrimitives_11.Internal.Edge2d::GetDistance(UnityEngine.Vector2,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Edge2d_GetDistance_m612224270207B2DD896BEBFC8B86D90C5E4164EE (Edge2d_t52914D645107AC4D516052D5BF3B9563D31015EE* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, float* ___lv1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::LerpUnclamped(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_LerpUnclamped_mB0B50875D4509E21FF43F4D87610333D55E6A44F_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Boolean ExtendedPrimitives_11.Internal.Extension::LineLineItersection(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Extension_LineLineItersection_mB507787B3409ED765BB6C6C9AA01E5AA004BFACE (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___red0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___redDir1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___green2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___greenDir3, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___intersection4, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Triangle2d::.ctor(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle2d__ctor_m91262B9ED1C39D5050368277FE13C1DE2CCD0C21 (Triangle2d_t5046FEE31532C61D5C03507D4C536B56F4F504DB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____b1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____c2, const RuntimeMethod* method) ;
// System.Boolean ExtendedPrimitives_11.Internal.Triangle2d::PointTest(UnityEngine.Vector2,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangle2d_PointTest_m373E8222245D8A51DCDD1ED61C40188243C0531C (Triangle2d_t5046FEE31532C61D5C03507D4C536B56F4F504DB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___bary1, const RuntimeMethod* method) ;
// System.Boolean ExtendedPrimitives_11.Internal.Triangle2d::PointTest(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangle2d_PointTest_m3D71540A5EECD8961737004175DCC3721FF7DF2B (Triangle2d_t5046FEE31532C61D5C03507D4C536B56F4F504DB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p0, const RuntimeMethod* method) ;
// System.Single ExtendedPrimitives_11.Internal.Edge2d::GetDistance(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Edge2d_GetDistance_mCD5F8847BC5E73188BAE5A13F1FA76EE2C84D54F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point2, float* ___lv3, const RuntimeMethod* method) ;
// System.Boolean ExtendedPrimitives_11.Internal.Extension::ApproximatelyZero(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Extension_ApproximatelyZero_m23CD442F2C7EB64193FBD963840479DA8A4349B3 (float ___f0, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.OverrideFloatParam::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverrideFloatParam__ctor_m6DA6682657FC9174404508C92FD6212DE9CAAF59 (OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745* __this, float ___f0, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.OverrideFloatParam::ClampZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverrideFloatParam_ClampZero_m395647F1DDF1458B63AC0223865C5A900BFF5E05 (OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D (PropertyAttribute_t5E0CB5A6CDA6E24CBD4FF26DE3B0C29D8BB54BF0* __this, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpBool::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpBool__ctor_mB596E89ABA805238DD3561C145501210FF7D0545 (ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F* __this, bool ___val0, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpBool::Set(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpBool_Set_mB6780033DB45F761DEBFF3A28E35B923B9BAF6F3 (ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F* __this, bool ___val0, const RuntimeMethod* method) ;
// System.Boolean ExtendedPrimitives_11.Internal.ExpBool::get_isChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpBool_get_isChanged_m60617B25CB0281DB80EC5C67D75574B498E32E86 (ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F* __this, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpBool::set_isChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpBool_set_isChanged_m15F9F573502B47D54AF1F95E6BC8F8F88C682C0E (ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.String ExtendedPrimitives_11.Internal.ExpBool::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExpBool_ToString_mCDAA1CA22E7A911B39F19C6D356A6987E4A0E049 (ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F* __this, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpInt::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpInt__ctor_mB41754559BE8262BB82E11D15B3FC120827BDF6A (ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* __this, int32_t ___val0, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpInt::Set(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpInt_Set_m02633F213463CA135F5FF357665853817D3036EA (ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* __this, int32_t ___val0, const RuntimeMethod* method) ;
// System.Boolean ExtendedPrimitives_11.Internal.ExpInt::get_isChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpInt_get_isChanged_m58D6886D12526223EDC5586A085347C40D9974F8 (ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* __this, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpInt::set_isChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpInt_set_isChanged_m315311E6D32F6B343BB84B3A6261844DD0CE9917 (ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String ExtendedPrimitives_11.Internal.ExpInt::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExpInt_ToString_m9C37D6C224D7B58EDE1BCC3A369CAB2FB7396B90 (ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* __this, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpFloat::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpFloat__ctor_m716B017C4F64AA69A9C979EBF8D471F27427FC98 (ExpFloat_t25A2295EC87D1815849FBE729E1F861E7CA77C0B* __this, float ___val0, const RuntimeMethod* method) ;
// System.Boolean ExtendedPrimitives_11.Internal.ExpFloat::get_isChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpFloat_get_isChanged_m2F4E170240B58BF3A0AA9FF63630F99E1522FFD2 (ExpFloat_t25A2295EC87D1815849FBE729E1F861E7CA77C0B* __this, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpFloat::Set(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpFloat_Set_mFC3922AFA93811926F94966A7AF41FDB06B9A98A (ExpFloat_t25A2295EC87D1815849FBE729E1F861E7CA77C0B* __this, float ___val0, const RuntimeMethod* method) ;
// ExtendedPrimitives_11.Internal.ExpInt ExtendedPrimitives_11.Internal.ExpInt::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 ExpInt_op_Implicit_mC28016EE88F030C243A955C7BB378FBE05B3102D (int32_t ___i0, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpColor32::.ctor(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpColor32__ctor_m89D5CB67B7D9DDD867712FB2016B38EB26792E63 (ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___val0, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpColor32::.ctor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpColor32__ctor_m5655200717D6FF13B94CED7A18DD7BFAF1AFF200 (ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cval0, const RuntimeMethod* method) ;
// System.Boolean ExtendedPrimitives_11.Internal.ExpColor32::get_isChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpColor32_get_isChanged_m520F2AFC37C41490FB982D7760829200EED763F4 (ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* __this, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpColor32::set_isChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpColor32_set_isChanged_mA7907947D2B26C53011E4658EB98441296693179 (ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpColor32::Set(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpColor32_Set_m96971E2CB9CD168C5F5F1666A84719704B9F47D0 (ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___val0, const RuntimeMethod* method) ;
// System.Byte ExtendedPrimitives_11.Internal.ExpInt::op_Implicit(ExtendedPrimitives_11.Internal.ExpInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ExpInt_op_Implicit_m1A4E27C5EA47326D6CBD6390F39E4017E127E26C (ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 ___i0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// ExtendedPrimitives_11.Internal.ExpColor32 ExtendedPrimitives_11.Internal.ExpColor32::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ExpColor32_op_Implicit_mC638EA731F83762E4EA1446D17246BFAD44079E9 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___i0, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpGradient::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpGradient__ctor_mF763ABC67656447B4F583F012080351B646A768C (ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A* __this, int32_t ___keysCount0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// ExtendedPrimitives_11.Internal.ExpColor32 ExtendedPrimitives_11.Internal.ExpGradient::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ExpGradient_get_Item_m5653545411D718BA6528772AD73DD08ED67D958F (ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A* __this, int32_t ___idx0, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpGradient::set_Item(System.Int32,ExtendedPrimitives_11.Internal.ExpColor32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpGradient_set_Item_m4C58A331FF278B908192766BEBA0AAB078B76725 (ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A* __this, int32_t ___idx0, ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ___value1, const RuntimeMethod* method) ;
// System.Int32 ExtendedPrimitives_11.Internal.ExpInt::op_Implicit(ExtendedPrimitives_11.Internal.ExpInt)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ExpInt_op_Implicit_m10EB04737A5F55E8D1BBF2DA0FA8CAD213A02D16_inline (ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 ___i0, const RuntimeMethod* method) ;
// UnityEngine.Color ExtendedPrimitives_11.Internal.ExpColor32::op_Implicit(ExtendedPrimitives_11.Internal.ExpColor32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ExpColor32_op_Implicit_m460AC2A9083FB5BF7821163A85C02F9412FEB2F5 (ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ___i0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.Color ExtendedPrimitives_11.Internal.ExpGradient::get_Item(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ExpGradient_get_Item_mB2487F2799F4C94C9DCDC5A8EC13F090085AF758 (ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A* __this, float ___time0, const RuntimeMethod* method) ;
// System.Boolean ExtendedPrimitives_11.Internal.ExpGradient::get_isChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpGradient_get_isChanged_m3E35C7C22565C8D92D542703820EDCBD1A34D530 (ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpVector2::.ctor(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpVector2__ctor_m061A563587BEE0E1667191AA813D54877825CE28 (ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___val0, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpVector2::Set(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpVector2_Set_mFF7BE76F287978081966201B89A5434B47DB235C (ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___val0, const RuntimeMethod* method) ;
// System.Single ExtendedPrimitives_11.Internal.ExpVector2::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ExpVector2_get_x_m7B9443E95C3C6B12C939F3A94A9266733CFE9702 (ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* __this, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpVector2::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpVector2_set_x_m556FA5A45CD3907069EE8E0167DE2C4D9BEC4283 (ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single ExtendedPrimitives_11.Internal.ExpVector2::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ExpVector2_get_y_mD2D765EEA6F08CE620D7466A07CD8176C7110FA2 (ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* __this, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpVector2::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpVector2_set_y_m0E78799167E65AAB4C2AC4F6BDF020C649FBA863 (ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean ExtendedPrimitives_11.Internal.Extension::ApproximatelyEquals(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Extension_ApproximatelyEquals_mE01DE05B5A935856699A129081D0A76D3E7722F8 (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Boolean ExtendedPrimitives_11.Internal.ExpVector2::get_isChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpVector2_get_isChanged_m12F74E1CFBFCC2BEE3533A82FC8A2FEEE335B46D (ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* __this, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ExpVector2::set_isChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpVector2_set_isChanged_m61E37775C69B348E1B54F6A8EAF20780FB7AAAAA (ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 ExtendedPrimitives_11.Internal.Triangle2d::Clockwise(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Triangle2d_Clockwise_m31666E2225915D293832BC8DEDA6B3006BAE4B45 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pa0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pb1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pc2, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Edge2d::Rotate90(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Edge2d_Rotate90_m409F3CCD7EBB3F60D2F89817FBD7C499A8304957 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, const RuntimeMethod* method) ;
// System.Single ExtendedPrimitives_11.Internal.Edge2d::RotationAngle(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Edge2d_RotationAngle_m52317973048D939B423A592B4221D79477DDDE9E (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dir0, const RuntimeMethod* method) ;
// System.Single ExtendedPrimitives_11.Internal.Extension::DeltaAngleRad(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Extension_DeltaAngleRad_m665F34914B1A2436BFD8D2248DC0321B0DCF0121 (float ___current0, float ___target1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.OutlinedFillet::Set(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlinedFillet_Set_mCA84A6D352F0B30AFF13107F335CFD315C246CB0 (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___c2, float ___radius3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_GetPoint_m3CFB47920B67651903D4623BA8750D3101165E01 (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, float ___lv0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::GetPoint(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_GetPoint_m68C94564B06F82DCCBD9DD856887BD0A95720A43 (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, float ___lv0, float ___radius1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::GetInnerOutlinePoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_GetInnerOutlinePoint_m26600B1D1F8F050F2275296ACD43A9CC221FB8FA (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, float ___lv0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::GetOuterOutlinePoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_GetOuterOutlinePoint_mDAA8A00322D5013AE033F34F0C78C9E6F53D872A (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, float ___lv0, const RuntimeMethod* method) ;
// System.Single ExtendedPrimitives_11.Internal.OutlinedFillet::GetOuterOutlineLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OutlinedFillet_GetOuterOutlineLength_m48B3FCC9180E8DA003F998123A9D3A006871C5C5 (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, const RuntimeMethod* method) ;
// System.Single ExtendedPrimitives_11.Internal.OutlinedFillet::GetInnerOutlineLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OutlinedFillet_GetInnerOutlineLength_m430217C1B0429BFA409B7A505AB90EC26A0FF550 (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, const RuntimeMethod* method) ;
// System.Single ExtendedPrimitives_11.Internal.OutlinedFillet::GetFilletLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OutlinedFillet_GetFilletLength_m7BFDE9002F1FECCCE6AB59CCBDEDE928D8EFEFE8 (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::get_FilletBeginPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_get_FilletBeginPoint_m0256661518CDF5532BE33B64F514D4048F310874 (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::get_FilletEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_get_FilletEndPoint_m54D7B18DC361F6EAF4C643AF06FBCDA4BBD5C998 (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___from0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___to1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Element::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Element__ctor_mDB22061F7FB986E21DF9889FE888A2BA49205420 (Element_tDD021D15E39F04405664845456EE25BFDC6FC663* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Element>::Add(T)
inline void List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_inline (List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* __this, Element_tDD021D15E39F04405664845456EE25BFDC6FC663* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474*, Element_tDD021D15E39F04405664845456EE25BFDC6FC663*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void ExtendedPrimitives_11.Internal.Vertex::.ctor(System.Int32&,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mA971C36E661FEC1EB7F3B31BA80BB9F2918643D3 (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* __this, int32_t* ___verticesCounter0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalizedCoords1, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Element::CreateLayoutArrays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Element_CreateLayoutArrays_mD9D4604B5653AD456A66C6D4E29D33122527E6BD (Element_tDD021D15E39F04405664845456EE25BFDC6FC663* __this, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Element::BuildQuad(System.Boolean,System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Face>,ExtendedPrimitives_11.Internal.Vertex,ExtendedPrimitives_11.Internal.Vertex,ExtendedPrimitives_11.Internal.Vertex,ExtendedPrimitives_11.Internal.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Element_BuildQuad_mA3F4F5EDDC213CC056BEE9CF209CC1A27637DC70 (bool ___invert0, List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* ___faces1, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* ___idx02, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* ___idx13, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* ___idx24, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* ___idx35, const RuntimeMethod* method) ;
// System.Int32 ExtendedPrimitives_11.Internal.Vertex::op_Implicit(ExtendedPrimitives_11.Internal.Vertex)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* ___i0, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.MeshEdge::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A (MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5* __this, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.MeshEdge>::Add(T)
inline void List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline (List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* __this, MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9535C53413AED810FC1D8418ADA8834974E63B61*, MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5, const RuntimeMethod*))List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_gshared_inline)(__this, ___item0, method);
}
// System.Boolean ExtendedPrimitives_11.Internal.Triangle2d::IsClockwise(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangle2d_IsClockwise_m5B90012A2AE29FE014C50686F235206BF99C80BD (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pa0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pb1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pc2, const RuntimeMethod* method) ;
// System.Single ExtendedPrimitives_11.Internal.Edge2d::RotationAngle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Edge2d_RotationAngle_mDA59E98D34F31AFD81859623DB70E6AE8D8E3DB9 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::LerpUnclamped(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Vertex::.ctor(System.Int32&,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_m9966433876DF6AEBD36F68B6AFB1498DC29A25EC (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* __this, int32_t* ___verticesCounter0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalizedCoords1, float ___colorAlpha2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Face>::.ctor()
inline void List_1__ctor_m2952044ED6E9480CB8E3A315E64C74A2A47643EA (List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Face>::Add(T)
inline void List_1_Add_mDF34CBAB9854577F2EE8F361B0B911A4EAE60CF7_inline (List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* __this, Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2*, Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Face>::get_Count()
inline int32_t List_1_get_Count_mEA285FA16F9957C70AC184FE2D18B84BAED3B1A9_inline (List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector3::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector3_ToString_m3185BD544ED9BA81E88936544EC298C19207BDF1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector4::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector4_ToString_m4C4C2F9E02CFA5A872366863D9ACDDCF42F643A9 (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Vertex::AddAdjacentFace(ExtendedPrimitives_11.Internal.Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_AddAdjacentFace_m5814C61936FB8BC79F7B789DFD0F7037AD16B7BD (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* __this, Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF* ___item0, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Face/Channel::.ctor(ExtendedPrimitives_11.Internal.Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Channel__ctor_m5A5A9A6D2388388336AD7F1F4344B4FF96858BE1 (Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D* __this, Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF* ____face0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::LerpUnclamped(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_LerpUnclamped_m4109A459C1DB823310A10B8B1E80CB6877418347_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Vertex::.ctor(System.Int32&,System.Int32&,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mA99B489056B0AFCE32FBA90F0946C16830A4F6F1 (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* __this, int32_t* ___localCounter0, int32_t* ___verticesCounter1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalizedCoords2, float ___colorAlpha3, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Element::BuildTriangle(System.Boolean,System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Face>,ExtendedPrimitives_11.Internal.Vertex,ExtendedPrimitives_11.Internal.Vertex,ExtendedPrimitives_11.Internal.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Element_BuildTriangle_mB92059645D4AC5A46904359E787A6DF46948083C (bool ___invert0, List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* ___faces1, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* ___idx02, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* ___idx13, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* ___idx24, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Fillet::get_Center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Fillet_get_Center_m1FA289BC0A597183420C5C8CC73A2677D8EE6F49 (Fillet_t3251BF5FFD5D573ECFCDE0D3312736BE9E2E135D* __this, const RuntimeMethod* method) ;
// System.Int32 ExtendedPrimitives_11.Internal.OctaCorner::CalcVerticesCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OctaCorner_CalcVerticesCount_mB06BA42A1DD5E170A5EC3505428F347DF9944815 (int32_t ___segments0, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.Vertex::.ctor(System.Int32&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mF9AEFE689362BDDBCE317513256BAB212DD3AE7B (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* __this, int32_t* ___verticesCounter0, float ___colorAlpha1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::Scale(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Int32 ExtendedPrimitives_11.Internal.PieCap::CalcVerticesCount(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PieCap_CalcVerticesCount_m70418773A61A171788B4F056D5437C8A7424FAD9 (int32_t ___innerSegments0, int32_t ___outerSegments1, const RuntimeMethod* method) ;
// System.Void ExtendedPrimitives_11.Internal.ConnectTriangulator::.ctor(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectTriangulator__ctor_m15DE3BA37B9B42F2901A9301839DBDC2B767A441 (ConnectTriangulator_tAB17DED97D659CCD781B96E21912F159E348414F* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___inner0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___outer1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris>::get_Item(System.Int32)
inline Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC List_1_get_Item_mE1288AE6638F18E17AE5FC11BC4F237FB7270FFB (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC (*) (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0*, int32_t, const RuntimeMethod*))List_1_get_Item_mE1288AE6638F18E17AE5FC11BC4F237FB7270FFB_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris>::get_Count()
inline int32_t List_1_get_Count_m68B8F85B440B5481DF9E5FF1F77AA409EDE22F8F_inline (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0*, const RuntimeMethod*))List_1_get_Count_m68B8F85B440B5481DF9E5FF1F77AA409EDE22F8F_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad>::get_Item(System.Int32)
inline Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B List_1_get_Item_m211D86FDD740048B73656BF38CED93EA193951F8 (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B (*) (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A*, int32_t, const RuntimeMethod*))List_1_get_Item_m211D86FDD740048B73656BF38CED93EA193951F8_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad>::get_Count()
inline int32_t List_1_get_Count_m167A28803E058E32996ED5459DF38D914B227242_inline (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A*, const RuntimeMethod*))List_1_get_Count_m167A28803E058E32996ED5459DF38D914B227242_gshared_inline)(__this, method);
}
// ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.PieCap::Inner(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* PieCap_Inner_m909BF1D68699FFDC823B62D6917CBB89E7C46628 (PieCap_tDAD4D8145ED6AE686031F7C8C74D35BF62E7C845* __this, int32_t ___idx0, const RuntimeMethod* method) ;
// ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.PieCap::Outer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* PieCap_Outer_m3224BC92BD86651CEBAF9E2F365DC02884A72B1A (PieCap_tDAD4D8145ED6AE686031F7C8C74D35BF62E7C845* __this, int32_t ___idx0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.ConnectTriangulator::.ctor(System.Int32[],System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectTriangulator__ctor_m15DE3BA37B9B42F2901A9301839DBDC2B767A441 (ConnectTriangulator_tAB17DED97D659CCD781B96E21912F159E348414F* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___inner0, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___outer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3F80BE64454866C0017404FD9982589BD24AA937_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9C5174F33DA348C1CCEE60DAD5F7EF573C222CD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m0811C7908F1676BB48418E5DBCD981C162E1EDFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4C9E10CBE1F85D0E7D84F6C20A47B6C82095919C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2EC40DADF72E14C9D3DE8DA195F85B4A281BACA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD13362A8BF778F6BA2FCCB62EA00CBA762161A53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D V_2;
	memset((&V_2), 0, sizeof(V_2));
	IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D V_3;
	memset((&V_3), 0, sizeof(V_3));
	IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D V_4;
	memset((&V_4), 0, sizeof(V_4));
	IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// public List<Tris> ResultTris = new List<Tris>();
		List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* L_0 = (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0*)il2cpp_codegen_object_new(List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2EC40DADF72E14C9D3DE8DA195F85B4A281BACA7(L_0, List_1__ctor_m2EC40DADF72E14C9D3DE8DA195F85B4A281BACA7_RuntimeMethod_var);
		__this->___ResultTris_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ResultTris_0), (void*)L_0);
		// public List<Quad> ResultQuads = new List<Quad>();
		List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* L_1 = (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A*)il2cpp_codegen_object_new(List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mD13362A8BF778F6BA2FCCB62EA00CBA762161A53(L_1, List_1__ctor_mD13362A8BF778F6BA2FCCB62EA00CBA762161A53_RuntimeMethod_var);
		__this->___ResultQuads_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ResultQuads_1), (void*)L_1);
		// public ConnectTriangulator(int[] inner, int[] outer) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// ResultTris.Clear();
		List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* L_2 = __this->___ResultTris_0;
		NullCheck(L_2);
		List_1_Clear_m4C9E10CBE1F85D0E7D84F6C20A47B6C82095919C_inline(L_2, List_1_Clear_m4C9E10CBE1F85D0E7D84F6C20A47B6C82095919C_RuntimeMethod_var);
		// ResultQuads.Clear();
		List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* L_3 = __this->___ResultQuads_1;
		NullCheck(L_3);
		List_1_Clear_m0811C7908F1676BB48418E5DBCD981C162E1EDFA_inline(L_3, List_1_Clear_m0811C7908F1676BB48418E5DBCD981C162E1EDFA_RuntimeMethod_var);
		// int InnerSegments = inner.Length - 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___inner0;
		NullCheck(L_4);
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1));
		// int OuterSegments = outer.Length - 1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___outer1;
		NullCheck(L_5);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1));
		// IndexCounter ip = new IndexCounter(InnerSegments, 1);
		int32_t L_6 = V_0;
		IndexCounter__ctor_m0965AEE29FC1722360A1FD363A067E849A1D3C96((&V_2), L_6, 1, NULL);
		// IndexCounter im = new IndexCounter(InnerSegments, -1);
		int32_t L_7 = V_0;
		IndexCounter__ctor_m0965AEE29FC1722360A1FD363A067E849A1D3C96((&V_3), L_7, (-1), NULL);
		// IndexCounter op = new IndexCounter(OuterSegments, 1);
		int32_t L_8 = V_1;
		IndexCounter__ctor_m0965AEE29FC1722360A1FD363A067E849A1D3C96((&V_4), L_8, 1, NULL);
		// IndexCounter om = new IndexCounter(OuterSegments, -1);
		int32_t L_9 = V_1;
		IndexCounter__ctor_m0965AEE29FC1722360A1FD363A067E849A1D3C96((&V_5), L_9, (-1), NULL);
	}

IL_0062:
	{
		// if (ip.Completed && op.Completed) {
		bool L_10;
		L_10 = IndexCounter_get_Completed_mB34BF01B373E1B80D3595452C87C35FAF5147146((&V_2), NULL);
		if (!L_10)
		{
			goto IL_0077;
		}
	}
	{
		bool L_11;
		L_11 = IndexCounter_get_Completed_mB34BF01B373E1B80D3595452C87C35FAF5147146((&V_4), NULL);
		if (L_11)
		{
			goto IL_0128;
		}
	}

IL_0077:
	{
		// if (ip.Completed) {
		bool L_12;
		L_12 = IndexCounter_get_Completed_mB34BF01B373E1B80D3595452C87C35FAF5147146((&V_2), NULL);
		if (!L_12)
		{
			goto IL_00ad;
		}
	}
	{
		// ResultTris.Add(new Tris(inner[ip.i], outer[op.i], outer[op.ni], true));
		List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* L_13 = __this->___ResultTris_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___inner0;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_15 = V_2;
		int32_t L_16 = L_15.___i_0;
		NullCheck(L_14);
		int32_t L_17 = L_16;
		int32_t L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ___outer1;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_20 = V_4;
		int32_t L_21 = L_20.___i_0;
		NullCheck(L_19);
		int32_t L_22 = L_21;
		int32_t L_23 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = ___outer1;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_25 = V_4;
		int32_t L_26 = L_25.___ni_1;
		NullCheck(L_24);
		int32_t L_27 = L_26;
		int32_t L_28 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC L_29;
		memset((&L_29), 0, sizeof(L_29));
		Tris__ctor_m57E0A514F75DC835FA833754F56F2BF52ECB03D3((&L_29), L_18, L_23, L_28, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_13);
		List_1_Add_m9C5174F33DA348C1CCEE60DAD5F7EF573C222CD8_inline(L_13, L_29, List_1_Add_m9C5174F33DA348C1CCEE60DAD5F7EF573C222CD8_RuntimeMethod_var);
		goto IL_0115;
	}

IL_00ad:
	{
		// } else if (op.Completed) {
		bool L_30;
		L_30 = IndexCounter_get_Completed_mB34BF01B373E1B80D3595452C87C35FAF5147146((&V_4), NULL);
		if (!L_30)
		{
			goto IL_00e2;
		}
	}
	{
		// ResultTris.Add(new Tris(inner[ip.i], outer[op.i], inner[ip.ni], true));
		List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* L_31 = __this->___ResultTris_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = ___inner0;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_33 = V_2;
		int32_t L_34 = L_33.___i_0;
		NullCheck(L_32);
		int32_t L_35 = L_34;
		int32_t L_36 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = ___outer1;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_38 = V_4;
		int32_t L_39 = L_38.___i_0;
		NullCheck(L_37);
		int32_t L_40 = L_39;
		int32_t L_41 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = ___inner0;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_43 = V_2;
		int32_t L_44 = L_43.___ni_1;
		NullCheck(L_42);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC L_47;
		memset((&L_47), 0, sizeof(L_47));
		Tris__ctor_m57E0A514F75DC835FA833754F56F2BF52ECB03D3((&L_47), L_36, L_41, L_46, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_31);
		List_1_Add_m9C5174F33DA348C1CCEE60DAD5F7EF573C222CD8_inline(L_31, L_47, List_1_Add_m9C5174F33DA348C1CCEE60DAD5F7EF573C222CD8_RuntimeMethod_var);
		goto IL_0115;
	}

IL_00e2:
	{
		// ResultQuads.Add(new Quad(inner[ip.i], outer[op.i], outer[op.ni], inner[ip.ni], true));
		List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* L_48 = __this->___ResultQuads_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = ___inner0;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_50 = V_2;
		int32_t L_51 = L_50.___i_0;
		NullCheck(L_49);
		int32_t L_52 = L_51;
		int32_t L_53 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = ___outer1;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_55 = V_4;
		int32_t L_56 = L_55.___i_0;
		NullCheck(L_54);
		int32_t L_57 = L_56;
		int32_t L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = ___outer1;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_60 = V_4;
		int32_t L_61 = L_60.___ni_1;
		NullCheck(L_59);
		int32_t L_62 = L_61;
		int32_t L_63 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_64 = ___inner0;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_65 = V_2;
		int32_t L_66 = L_65.___ni_1;
		NullCheck(L_64);
		int32_t L_67 = L_66;
		int32_t L_68 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B L_69;
		memset((&L_69), 0, sizeof(L_69));
		Quad__ctor_m704A29B0B46FA57EF32461457593E4E98655000A((&L_69), L_53, L_58, L_63, L_68, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_48);
		List_1_Add_m3F80BE64454866C0017404FD9982589BD24AA937_inline(L_48, L_69, List_1_Add_m3F80BE64454866C0017404FD9982589BD24AA937_RuntimeMethod_var);
	}

IL_0115:
	{
		// op.MoveNext();
		IndexCounter_MoveNext_m136F3EA31F2BB648376C4AFA558BAF00F35105F4((&V_4), NULL);
		// ip.MoveNext();
		IndexCounter_MoveNext_m136F3EA31F2BB648376C4AFA558BAF00F35105F4((&V_2), NULL);
		// while (true) {
		goto IL_0062;
	}

IL_0128:
	{
		// if (im.Completed && om.Completed) {
		bool L_70;
		L_70 = IndexCounter_get_Completed_mB34BF01B373E1B80D3595452C87C35FAF5147146((&V_3), NULL);
		if (!L_70)
		{
			goto IL_013d;
		}
	}
	{
		bool L_71;
		L_71 = IndexCounter_get_Completed_mB34BF01B373E1B80D3595452C87C35FAF5147146((&V_5), NULL);
		if (L_71)
		{
			goto IL_01ee;
		}
	}

IL_013d:
	{
		// if (im.Completed) {
		bool L_72;
		L_72 = IndexCounter_get_Completed_mB34BF01B373E1B80D3595452C87C35FAF5147146((&V_3), NULL);
		if (!L_72)
		{
			goto IL_0173;
		}
	}
	{
		// ResultTris.Add(new Tris(inner[im.i], outer[om.i], outer[om.ni], false));
		List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* L_73 = __this->___ResultTris_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_74 = ___inner0;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_75 = V_3;
		int32_t L_76 = L_75.___i_0;
		NullCheck(L_74);
		int32_t L_77 = L_76;
		int32_t L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_79 = ___outer1;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_80 = V_5;
		int32_t L_81 = L_80.___i_0;
		NullCheck(L_79);
		int32_t L_82 = L_81;
		int32_t L_83 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_84 = ___outer1;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_85 = V_5;
		int32_t L_86 = L_85.___ni_1;
		NullCheck(L_84);
		int32_t L_87 = L_86;
		int32_t L_88 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC L_89;
		memset((&L_89), 0, sizeof(L_89));
		Tris__ctor_m57E0A514F75DC835FA833754F56F2BF52ECB03D3((&L_89), L_78, L_83, L_88, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_73);
		List_1_Add_m9C5174F33DA348C1CCEE60DAD5F7EF573C222CD8_inline(L_73, L_89, List_1_Add_m9C5174F33DA348C1CCEE60DAD5F7EF573C222CD8_RuntimeMethod_var);
		goto IL_01db;
	}

IL_0173:
	{
		// } else if (om.Completed) {
		bool L_90;
		L_90 = IndexCounter_get_Completed_mB34BF01B373E1B80D3595452C87C35FAF5147146((&V_5), NULL);
		if (!L_90)
		{
			goto IL_01a8;
		}
	}
	{
		// ResultTris.Add(new Tris(inner[im.i], outer[om.i], inner[im.ni], false));
		List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* L_91 = __this->___ResultTris_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_92 = ___inner0;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_93 = V_3;
		int32_t L_94 = L_93.___i_0;
		NullCheck(L_92);
		int32_t L_95 = L_94;
		int32_t L_96 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_97 = ___outer1;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_98 = V_5;
		int32_t L_99 = L_98.___i_0;
		NullCheck(L_97);
		int32_t L_100 = L_99;
		int32_t L_101 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_102 = ___inner0;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_103 = V_3;
		int32_t L_104 = L_103.___ni_1;
		NullCheck(L_102);
		int32_t L_105 = L_104;
		int32_t L_106 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC L_107;
		memset((&L_107), 0, sizeof(L_107));
		Tris__ctor_m57E0A514F75DC835FA833754F56F2BF52ECB03D3((&L_107), L_96, L_101, L_106, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_91);
		List_1_Add_m9C5174F33DA348C1CCEE60DAD5F7EF573C222CD8_inline(L_91, L_107, List_1_Add_m9C5174F33DA348C1CCEE60DAD5F7EF573C222CD8_RuntimeMethod_var);
		goto IL_01db;
	}

IL_01a8:
	{
		// ResultQuads.Add(new Quad(inner[im.i], outer[om.i], outer[om.ni], inner[im.ni], false));
		List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* L_108 = __this->___ResultQuads_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_109 = ___inner0;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_110 = V_3;
		int32_t L_111 = L_110.___i_0;
		NullCheck(L_109);
		int32_t L_112 = L_111;
		int32_t L_113 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_114 = ___outer1;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_115 = V_5;
		int32_t L_116 = L_115.___i_0;
		NullCheck(L_114);
		int32_t L_117 = L_116;
		int32_t L_118 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_119 = ___outer1;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_120 = V_5;
		int32_t L_121 = L_120.___ni_1;
		NullCheck(L_119);
		int32_t L_122 = L_121;
		int32_t L_123 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124 = ___inner0;
		IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D L_125 = V_3;
		int32_t L_126 = L_125.___ni_1;
		NullCheck(L_124);
		int32_t L_127 = L_126;
		int32_t L_128 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B L_129;
		memset((&L_129), 0, sizeof(L_129));
		Quad__ctor_m704A29B0B46FA57EF32461457593E4E98655000A((&L_129), L_113, L_118, L_123, L_128, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_108);
		List_1_Add_m3F80BE64454866C0017404FD9982589BD24AA937_inline(L_108, L_129, List_1_Add_m3F80BE64454866C0017404FD9982589BD24AA937_RuntimeMethod_var);
	}

IL_01db:
	{
		// om.MoveNext();
		IndexCounter_MoveNext_m136F3EA31F2BB648376C4AFA558BAF00F35105F4((&V_5), NULL);
		// im.MoveNext();
		IndexCounter_MoveNext_m136F3EA31F2BB648376C4AFA558BAF00F35105F4((&V_3), NULL);
		// while (true) {
		goto IL_0128;
	}

IL_01ee:
	{
		// }
		return;
	}
}
// System.Int32[] ExtendedPrimitives_11.Internal.ConnectTriangulator::NaturalNumbers(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ConnectTriangulator_NaturalNumbers_m711466D9687DE7AF5600C74CF33678BB39C2BA32 (int32_t ___start0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// int[] result = new int[length];
		int32_t L_0 = ___length1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// for (int i = 0; i < result.Length; i++) {
		V_1 = 0;
		goto IL_0015;
	}

IL_000b:
	{
		// result[i] = start + i;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = ___start0;
		int32_t L_5 = V_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (int32_t)((int32_t)il2cpp_codegen_add(L_4, L_5)));
		// for (int i = 0; i < result.Length; i++) {
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0015:
	{
		// for (int i = 0; i < result.Length; i++) {
		int32_t L_7 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// return result;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris
IL2CPP_EXTERN_C void Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC_marshal_pinvoke(const Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC& unmarshaled, Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC_marshaled_pinvoke& marshaled)
{
	marshaled.___A_0 = unmarshaled.___A_0;
	marshaled.___B_1 = unmarshaled.___B_1;
	marshaled.___C_2 = unmarshaled.___C_2;
	marshaled.___Flipped_3 = static_cast<int32_t>(unmarshaled.___Flipped_3);
}
IL2CPP_EXTERN_C void Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC_marshal_pinvoke_back(const Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC_marshaled_pinvoke& marshaled, Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC& unmarshaled)
{
	int32_t unmarshaledA_temp_0 = 0;
	unmarshaledA_temp_0 = marshaled.___A_0;
	unmarshaled.___A_0 = unmarshaledA_temp_0;
	int32_t unmarshaledB_temp_1 = 0;
	unmarshaledB_temp_1 = marshaled.___B_1;
	unmarshaled.___B_1 = unmarshaledB_temp_1;
	int32_t unmarshaledC_temp_2 = 0;
	unmarshaledC_temp_2 = marshaled.___C_2;
	unmarshaled.___C_2 = unmarshaledC_temp_2;
	bool unmarshaledFlipped_temp_3 = false;
	unmarshaledFlipped_temp_3 = static_cast<bool>(marshaled.___Flipped_3);
	unmarshaled.___Flipped_3 = unmarshaledFlipped_temp_3;
}
// Conversion method for clean up from marshalling of: ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris
IL2CPP_EXTERN_C void Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC_marshal_pinvoke_cleanup(Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris
IL2CPP_EXTERN_C void Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC_marshal_com(const Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC& unmarshaled, Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC_marshaled_com& marshaled)
{
	marshaled.___A_0 = unmarshaled.___A_0;
	marshaled.___B_1 = unmarshaled.___B_1;
	marshaled.___C_2 = unmarshaled.___C_2;
	marshaled.___Flipped_3 = static_cast<int32_t>(unmarshaled.___Flipped_3);
}
IL2CPP_EXTERN_C void Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC_marshal_com_back(const Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC_marshaled_com& marshaled, Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC& unmarshaled)
{
	int32_t unmarshaledA_temp_0 = 0;
	unmarshaledA_temp_0 = marshaled.___A_0;
	unmarshaled.___A_0 = unmarshaledA_temp_0;
	int32_t unmarshaledB_temp_1 = 0;
	unmarshaledB_temp_1 = marshaled.___B_1;
	unmarshaled.___B_1 = unmarshaledB_temp_1;
	int32_t unmarshaledC_temp_2 = 0;
	unmarshaledC_temp_2 = marshaled.___C_2;
	unmarshaled.___C_2 = unmarshaledC_temp_2;
	bool unmarshaledFlipped_temp_3 = false;
	unmarshaledFlipped_temp_3 = static_cast<bool>(marshaled.___Flipped_3);
	unmarshaled.___Flipped_3 = unmarshaledFlipped_temp_3;
}
// Conversion method for clean up from marshalling of: ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris
IL2CPP_EXTERN_C void Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC_marshal_com_cleanup(Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC_marshaled_com& marshaled)
{
}
// System.Void ExtendedPrimitives_11.Internal.ConnectTriangulator/Tris::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tris__ctor_m57E0A514F75DC835FA833754F56F2BF52ECB03D3 (Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, bool ___flipped3, const RuntimeMethod* method) 
{
	{
		// A = a;
		int32_t L_0 = ___a0;
		__this->___A_0 = L_0;
		// B = b;
		int32_t L_1 = ___b1;
		__this->___B_1 = L_1;
		// C = c;
		int32_t L_2 = ___c2;
		__this->___C_2 = L_2;
		// Flipped = flipped;
		bool L_3 = ___flipped3;
		__this->___Flipped_3 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Tris__ctor_m57E0A514F75DC835FA833754F56F2BF52ECB03D3_AdjustorThunk (RuntimeObject* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, bool ___flipped3, const RuntimeMethod* method)
{
	Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC*>(__this + _offset);
	Tris__ctor_m57E0A514F75DC835FA833754F56F2BF52ECB03D3(_thisAdjusted, ___a0, ___b1, ___c2, ___flipped3, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad
IL2CPP_EXTERN_C void Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B_marshal_pinvoke(const Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B& unmarshaled, Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B_marshaled_pinvoke& marshaled)
{
	marshaled.___A_0 = unmarshaled.___A_0;
	marshaled.___B_1 = unmarshaled.___B_1;
	marshaled.___C_2 = unmarshaled.___C_2;
	marshaled.___D_3 = unmarshaled.___D_3;
	marshaled.___Flipped_4 = static_cast<int32_t>(unmarshaled.___Flipped_4);
}
IL2CPP_EXTERN_C void Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B_marshal_pinvoke_back(const Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B_marshaled_pinvoke& marshaled, Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B& unmarshaled)
{
	int32_t unmarshaledA_temp_0 = 0;
	unmarshaledA_temp_0 = marshaled.___A_0;
	unmarshaled.___A_0 = unmarshaledA_temp_0;
	int32_t unmarshaledB_temp_1 = 0;
	unmarshaledB_temp_1 = marshaled.___B_1;
	unmarshaled.___B_1 = unmarshaledB_temp_1;
	int32_t unmarshaledC_temp_2 = 0;
	unmarshaledC_temp_2 = marshaled.___C_2;
	unmarshaled.___C_2 = unmarshaledC_temp_2;
	int32_t unmarshaledD_temp_3 = 0;
	unmarshaledD_temp_3 = marshaled.___D_3;
	unmarshaled.___D_3 = unmarshaledD_temp_3;
	bool unmarshaledFlipped_temp_4 = false;
	unmarshaledFlipped_temp_4 = static_cast<bool>(marshaled.___Flipped_4);
	unmarshaled.___Flipped_4 = unmarshaledFlipped_temp_4;
}
// Conversion method for clean up from marshalling of: ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad
IL2CPP_EXTERN_C void Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B_marshal_pinvoke_cleanup(Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad
IL2CPP_EXTERN_C void Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B_marshal_com(const Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B& unmarshaled, Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B_marshaled_com& marshaled)
{
	marshaled.___A_0 = unmarshaled.___A_0;
	marshaled.___B_1 = unmarshaled.___B_1;
	marshaled.___C_2 = unmarshaled.___C_2;
	marshaled.___D_3 = unmarshaled.___D_3;
	marshaled.___Flipped_4 = static_cast<int32_t>(unmarshaled.___Flipped_4);
}
IL2CPP_EXTERN_C void Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B_marshal_com_back(const Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B_marshaled_com& marshaled, Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B& unmarshaled)
{
	int32_t unmarshaledA_temp_0 = 0;
	unmarshaledA_temp_0 = marshaled.___A_0;
	unmarshaled.___A_0 = unmarshaledA_temp_0;
	int32_t unmarshaledB_temp_1 = 0;
	unmarshaledB_temp_1 = marshaled.___B_1;
	unmarshaled.___B_1 = unmarshaledB_temp_1;
	int32_t unmarshaledC_temp_2 = 0;
	unmarshaledC_temp_2 = marshaled.___C_2;
	unmarshaled.___C_2 = unmarshaledC_temp_2;
	int32_t unmarshaledD_temp_3 = 0;
	unmarshaledD_temp_3 = marshaled.___D_3;
	unmarshaled.___D_3 = unmarshaledD_temp_3;
	bool unmarshaledFlipped_temp_4 = false;
	unmarshaledFlipped_temp_4 = static_cast<bool>(marshaled.___Flipped_4);
	unmarshaled.___Flipped_4 = unmarshaledFlipped_temp_4;
}
// Conversion method for clean up from marshalling of: ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad
IL2CPP_EXTERN_C void Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B_marshal_com_cleanup(Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B_marshaled_com& marshaled)
{
}
// System.Void ExtendedPrimitives_11.Internal.ConnectTriangulator/Quad::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quad__ctor_m704A29B0B46FA57EF32461457593E4E98655000A (Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, bool ___flipped4, const RuntimeMethod* method) 
{
	{
		// A = a;
		int32_t L_0 = ___a0;
		__this->___A_0 = L_0;
		// B = b;
		int32_t L_1 = ___b1;
		__this->___B_1 = L_1;
		// C = c;
		int32_t L_2 = ___c2;
		__this->___C_2 = L_2;
		// D = d;
		int32_t L_3 = ___d3;
		__this->___D_3 = L_3;
		// Flipped = flipped;
		bool L_4 = ___flipped4;
		__this->___Flipped_4 = L_4;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Quad__ctor_m704A29B0B46FA57EF32461457593E4E98655000A_AdjustorThunk (RuntimeObject* __this, int32_t ___a0, int32_t ___b1, int32_t ___c2, int32_t ___d3, bool ___flipped4, const RuntimeMethod* method)
{
	Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B*>(__this + _offset);
	Quad__ctor_m704A29B0B46FA57EF32461457593E4E98655000A(_thisAdjusted, ___a0, ___b1, ___c2, ___d3, ___flipped4, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.ConnectTriangulator/IndexCounter::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexCounter__ctor_m0965AEE29FC1722360A1FD363A067E849A1D3C96 (IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D* __this, int32_t ___length0, int32_t ___dir1, const RuntimeMethod* method) 
{
	{
		// Dir = dir;
		int32_t L_0 = ___dir1;
		__this->___Dir_2 = L_0;
		// Length = length;
		int32_t L_1 = ___length0;
		__this->___Length_3 = L_1;
		// i = Length / 2;
		int32_t L_2 = __this->___Length_3;
		__this->___i_0 = ((int32_t)(L_2/2));
		// ni = Mathf.Clamp(i + dir, 0, Length);
		int32_t L_3 = __this->___i_0;
		int32_t L_4 = ___dir1;
		int32_t L_5 = __this->___Length_3;
		int32_t L_6;
		L_6 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(((int32_t)il2cpp_codegen_add(L_3, L_4)), 0, L_5, NULL);
		__this->___ni_1 = L_6;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void IndexCounter__ctor_m0965AEE29FC1722360A1FD363A067E849A1D3C96_AdjustorThunk (RuntimeObject* __this, int32_t ___length0, int32_t ___dir1, const RuntimeMethod* method)
{
	IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D*>(__this + _offset);
	IndexCounter__ctor_m0965AEE29FC1722360A1FD363A067E849A1D3C96(_thisAdjusted, ___length0, ___dir1, method);
}
// System.Boolean ExtendedPrimitives_11.Internal.ConnectTriangulator/IndexCounter::get_Completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexCounter_get_Completed_mB34BF01B373E1B80D3595452C87C35FAF5147146 (IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D* __this, const RuntimeMethod* method) 
{
	{
		// return i == ni;
		int32_t L_0 = __this->___i_0;
		int32_t L_1 = __this->___ni_1;
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool IndexCounter_get_Completed_mB34BF01B373E1B80D3595452C87C35FAF5147146_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D*>(__this + _offset);
	bool _returnValue;
	_returnValue = IndexCounter_get_Completed_mB34BF01B373E1B80D3595452C87C35FAF5147146(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ExtendedPrimitives_11.Internal.ConnectTriangulator/IndexCounter::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexCounter_MoveNext_m136F3EA31F2BB648376C4AFA558BAF00F35105F4 (IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D* __this, const RuntimeMethod* method) 
{
	{
		// i = Mathf.Clamp(i + Dir, 0, Length);
		int32_t L_0 = __this->___i_0;
		int32_t L_1 = __this->___Dir_2;
		int32_t L_2 = __this->___Length_3;
		int32_t L_3;
		L_3 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(((int32_t)il2cpp_codegen_add(L_0, L_1)), 0, L_2, NULL);
		__this->___i_0 = L_3;
		// ni = Mathf.Clamp(i + Dir, 0, Length);
		int32_t L_4 = __this->___i_0;
		int32_t L_5 = __this->___Dir_2;
		int32_t L_6 = __this->___Length_3;
		int32_t L_7;
		L_7 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(((int32_t)il2cpp_codegen_add(L_4, L_5)), 0, L_6, NULL);
		__this->___ni_1 = L_7;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void IndexCounter_MoveNext_m136F3EA31F2BB648376C4AFA558BAF00F35105F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<IndexCounter_tC7A9F83A78EAB84E88D93D6C532A99978C9F212D*>(__this + _offset);
	IndexCounter_MoveNext_m136F3EA31F2BB648376C4AFA558BAF00F35105F4(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Matrix2d::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Matrix2d_get_Position_m101637DC9A94CD1C97C3825EBA2BCDFE761F1698 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, const RuntimeMethod* method) 
{
	{
		// return new Vector2(m20, m21);
		float L_0 = __this->___m20_4;
		float L_1 = __this->___m21_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Matrix2d_get_Position_m101637DC9A94CD1C97C3825EBA2BCDFE761F1698_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = Matrix2d_get_Position_m101637DC9A94CD1C97C3825EBA2BCDFE761F1698(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::set_Position(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d_set_Position_mD838CB941C6435377986552E6DEE53DAB15F1798 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// m20 = value.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		float L_1 = L_0.___x_0;
		__this->___m20_4 = L_1;
		// m21 = value.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___value0;
		float L_3 = L_2.___y_1;
		__this->___m21_7 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Matrix2d_set_Position_mD838CB941C6435377986552E6DEE53DAB15F1798_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Matrix2d_set_Position_mD838CB941C6435377986552E6DEE53DAB15F1798(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Matrix2d::get_Right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Matrix2d_get_Right_mE73BCA083EA6B559B0BE0E0C34C38A9680E73469 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, const RuntimeMethod* method) 
{
	{
		// return new Vector2(m00, m10);
		float L_0 = __this->___m00_2;
		float L_1 = __this->___m10_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Matrix2d_get_Right_mE73BCA083EA6B559B0BE0E0C34C38A9680E73469_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = Matrix2d_get_Right_mE73BCA083EA6B559B0BE0E0C34C38A9680E73469(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Matrix2d::get_Up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Matrix2d_get_Up_m087209B281F15755DE2CBFFD09D740DD73642A4E (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, const RuntimeMethod* method) 
{
	{
		// return new Vector2(m01, m11);
		float L_0 = __this->___m01_5;
		float L_1 = __this->___m11_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Matrix2d_get_Up_m087209B281F15755DE2CBFFD09D740DD73642A4E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = Matrix2d_get_Up_m087209B281F15755DE2CBFFD09D740DD73642A4E(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::.ctor(System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d__ctor_m96A7C271BE9406B5E0E2280A92D10EB2FA5BFB7B (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, float ___xDegreeAngle0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float axRad = xDegreeAngle * Mathf.Deg2Rad;
		float L_0 = ___xDegreeAngle0;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, (0.0174532924f)));
		// m00 = Mathf.Cos(axRad);
		float L_1 = V_0;
		float L_2;
		L_2 = cosf(L_1);
		__this->___m00_2 = L_2;
		// m10 = Mathf.Sin(axRad);
		float L_3 = V_0;
		float L_4;
		L_4 = sinf(L_3);
		__this->___m10_3 = L_4;
		// m20 = pos.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___pos1;
		float L_6 = L_5.___x_0;
		__this->___m20_4 = L_6;
		// m01 = -m10;
		float L_7 = __this->___m10_3;
		__this->___m01_5 = ((-L_7));
		// m11 = m00;
		float L_8 = __this->___m00_2;
		__this->___m11_6 = L_8;
		// m21 = pos.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___pos1;
		float L_10 = L_9.___y_1;
		__this->___m21_7 = L_10;
		// m02 = 0;
		__this->___m02_8 = (0.0f);
		// m12 = 0;
		__this->___m12_9 = (0.0f);
		// m22 = 1;
		__this->___m22_10 = (1.0f);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Matrix2d__ctor_m96A7C271BE9406B5E0E2280A92D10EB2FA5BFB7B_AdjustorThunk (RuntimeObject* __this, float ___xDegreeAngle0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos1, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Matrix2d__ctor_m96A7C271BE9406B5E0E2280A92D10EB2FA5BFB7B(_thisAdjusted, ___xDegreeAngle0, ___pos1, method);
}
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::.ctor(System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d__ctor_m27E3FB6F6839589B357ADD174341C787E8B95E18 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, float ___xDegreeAngle0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float axRad = xDegreeAngle * Mathf.Deg2Rad;
		float L_0 = ___xDegreeAngle0;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, (0.0174532924f)));
		// m00 = Mathf.Cos(axRad);
		float L_1 = V_0;
		float L_2;
		L_2 = cosf(L_1);
		__this->___m00_2 = L_2;
		// m10 = Mathf.Sin(axRad);
		float L_3 = V_0;
		float L_4;
		L_4 = sinf(L_3);
		__this->___m10_3 = L_4;
		// m20 = pos.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___pos1;
		float L_6 = L_5.___x_0;
		__this->___m20_4 = L_6;
		// m01 = -m10;
		float L_7 = __this->___m10_3;
		__this->___m01_5 = ((-L_7));
		// m11 = m00;
		float L_8 = __this->___m00_2;
		__this->___m11_6 = L_8;
		// m21 = pos.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___pos1;
		float L_10 = L_9.___y_1;
		__this->___m21_7 = L_10;
		// m00 *= scale.x;
		float L_11 = __this->___m00_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___scale2;
		float L_13 = L_12.___x_0;
		__this->___m00_2 = ((float)il2cpp_codegen_multiply(L_11, L_13));
		// m10 *= scale.x;
		float L_14 = __this->___m10_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___scale2;
		float L_16 = L_15.___x_0;
		__this->___m10_3 = ((float)il2cpp_codegen_multiply(L_14, L_16));
		// m01 *= scale.y;
		float L_17 = __this->___m01_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___scale2;
		float L_19 = L_18.___y_1;
		__this->___m01_5 = ((float)il2cpp_codegen_multiply(L_17, L_19));
		// m11 *= scale.y;
		float L_20 = __this->___m11_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___scale2;
		float L_22 = L_21.___y_1;
		__this->___m11_6 = ((float)il2cpp_codegen_multiply(L_20, L_22));
		// m02 = 0;
		__this->___m02_8 = (0.0f);
		// m12 = 0;
		__this->___m12_9 = (0.0f);
		// m22 = 1;
		__this->___m22_10 = (1.0f);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Matrix2d__ctor_m27E3FB6F6839589B357ADD174341C787E8B95E18_AdjustorThunk (RuntimeObject* __this, float ___xDegreeAngle0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale2, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Matrix2d__ctor_m27E3FB6F6839589B357ADD174341C787E8B95E18(_thisAdjusted, ___xDegreeAngle0, ___pos1, ___scale2, method);
}
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d__ctor_m9E71271929F7DF381898399D3ED5F523542C00FC (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, float ___xRadiansAngle0, const RuntimeMethod* method) 
{
	{
		// m00 = Mathf.Cos(xRadiansAngle);
		float L_0 = ___xRadiansAngle0;
		float L_1;
		L_1 = cosf(L_0);
		__this->___m00_2 = L_1;
		// m10 = Mathf.Sin(xRadiansAngle);
		float L_2 = ___xRadiansAngle0;
		float L_3;
		L_3 = sinf(L_2);
		__this->___m10_3 = L_3;
		// m20 = 0;
		__this->___m20_4 = (0.0f);
		// m01 = -m10;
		float L_4 = __this->___m10_3;
		__this->___m01_5 = ((-L_4));
		// m11 = m00;
		float L_5 = __this->___m00_2;
		__this->___m11_6 = L_5;
		// m21 = 0;
		__this->___m21_7 = (0.0f);
		// m02 = 0;
		__this->___m02_8 = (0.0f);
		// m12 = 0;
		__this->___m12_9 = (0.0f);
		// m22 = 1;
		__this->___m22_10 = (1.0f);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Matrix2d__ctor_m9E71271929F7DF381898399D3ED5F523542C00FC_AdjustorThunk (RuntimeObject* __this, float ___xRadiansAngle0, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Matrix2d__ctor_m9E71271929F7DF381898399D3ED5F523542C00FC(_thisAdjusted, ___xRadiansAngle0, method);
}
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::.ctor(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d__ctor_mD10D587E24A7C6D04EF23F45B882E4979F41C870 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dirX0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dirY1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos2, const RuntimeMethod* method) 
{
	{
		// m00 = dirX.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___dirX0;
		float L_1 = L_0.___x_0;
		__this->___m00_2 = L_1;
		// m10 = -dirX.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___dirX0;
		float L_3 = L_2.___y_1;
		__this->___m10_3 = ((-L_3));
		// m20 = pos.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___pos2;
		float L_5 = L_4.___x_0;
		__this->___m20_4 = L_5;
		// m01 = -dirY.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___dirY1;
		float L_7 = L_6.___x_0;
		__this->___m01_5 = ((-L_7));
		// m11 = dirY.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___dirY1;
		float L_9 = L_8.___y_1;
		__this->___m11_6 = L_9;
		// m21 = pos.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___pos2;
		float L_11 = L_10.___y_1;
		__this->___m21_7 = L_11;
		// m02 = 0;
		__this->___m02_8 = (0.0f);
		// m12 = 0;
		__this->___m12_9 = (0.0f);
		// m22 = 1;
		__this->___m22_10 = (1.0f);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Matrix2d__ctor_mD10D587E24A7C6D04EF23F45B882E4979F41C870_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dirX0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dirY1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos2, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Matrix2d__ctor_mD10D587E24A7C6D04EF23F45B882E4979F41C870(_thisAdjusted, ___dirX0, ___dirY1, ___pos2, method);
}
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::.ctor(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d__ctor_m44BA0249B8A626878BABFD6C70EBD20A9872594A (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, float ___a000, float ___a101, float ___a202, float ___a013, float ___a114, float ___a215, float ___a026, float ___a127, float ___a228, const RuntimeMethod* method) 
{
	{
		// m00 = a00;
		float L_0 = ___a000;
		__this->___m00_2 = L_0;
		// m10 = a10;
		float L_1 = ___a101;
		__this->___m10_3 = L_1;
		// m20 = a20;
		float L_2 = ___a202;
		__this->___m20_4 = L_2;
		// m01 = a01;
		float L_3 = ___a013;
		__this->___m01_5 = L_3;
		// m11 = a11;
		float L_4 = ___a114;
		__this->___m11_6 = L_4;
		// m21 = a21;
		float L_5 = ___a215;
		__this->___m21_7 = L_5;
		// m02 = a02;
		float L_6 = ___a026;
		__this->___m02_8 = L_6;
		// m12 = a12;
		float L_7 = ___a127;
		__this->___m12_9 = L_7;
		// m22 = a22;
		float L_8 = ___a228;
		__this->___m22_10 = L_8;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Matrix2d__ctor_m44BA0249B8A626878BABFD6C70EBD20A9872594A_AdjustorThunk (RuntimeObject* __this, float ___a000, float ___a101, float ___a202, float ___a013, float ___a114, float ___a215, float ___a026, float ___a127, float ___a228, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Matrix2d__ctor_m44BA0249B8A626878BABFD6C70EBD20A9872594A(_thisAdjusted, ___a000, ___a101, ___a202, ___a013, ___a114, ___a215, ___a026, ___a127, ___a228, method);
}
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::.ctor(UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d__ctor_m01745626D28DF5B367C189FF35225F18EE22B5C9 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, bool ___normalized2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 dirX = (target - pos);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___target1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___pos0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// if (normalized) {
		bool L_3 = ___normalized2;
		if (!L_3)
		{
			goto IL_0013;
		}
	}
	{
		// dirX = dirX.normalized;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_0), NULL);
		V_0 = L_4;
	}

IL_0013:
	{
		// m00 = dirX.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		float L_6 = L_5.___x_0;
		__this->___m00_2 = L_6;
		// m10 = dirX.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		float L_8 = L_7.___y_1;
		__this->___m10_3 = L_8;
		// m20 = pos.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___pos0;
		float L_10 = L_9.___x_0;
		__this->___m20_4 = L_10;
		// m01 = -m10;
		float L_11 = __this->___m10_3;
		__this->___m01_5 = ((-L_11));
		// m11 = m00;
		float L_12 = __this->___m00_2;
		__this->___m11_6 = L_12;
		// m21 = pos.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___pos0;
		float L_14 = L_13.___y_1;
		__this->___m21_7 = L_14;
		// m02 = 0;
		__this->___m02_8 = (0.0f);
		// m12 = 0;
		__this->___m12_9 = (0.0f);
		// m22 = 1;
		__this->___m22_10 = (1.0f);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Matrix2d__ctor_m01745626D28DF5B367C189FF35225F18EE22B5C9_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, bool ___normalized2, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Matrix2d__ctor_m01745626D28DF5B367C189FF35225F18EE22B5C9(_thisAdjusted, ___pos0, ___target1, ___normalized2, method);
}
// ExtendedPrimitives_11.Internal.Matrix2d ExtendedPrimitives_11.Internal.Matrix2d::op_Multiply(ExtendedPrimitives_11.Internal.Matrix2d,ExtendedPrimitives_11.Internal.Matrix2d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D Matrix2d_op_Multiply_mCDF0C020666603ACF8F13F1F22729F8FE0FA6EBA (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D ___m10, Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D ___m21, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// float a11 = m1.m00 * m2.m00 + m1.m10 * m2.m01 + m1.m20 * m2.m02;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_0 = ___m10;
		float L_1 = L_0.___m00_2;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_2 = ___m21;
		float L_3 = L_2.___m00_2;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_4 = ___m10;
		float L_5 = L_4.___m10_3;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_6 = ___m21;
		float L_7 = L_6.___m01_5;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_8 = ___m10;
		float L_9 = L_8.___m20_4;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_10 = ___m21;
		float L_11 = L_10.___m02_8;
		// float a12 = m1.m00 * m2.m10 + m1.m10 * m2.m11 + m1.m20 * m2.m12;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_12 = ___m10;
		float L_13 = L_12.___m00_2;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_14 = ___m21;
		float L_15 = L_14.___m10_3;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_16 = ___m10;
		float L_17 = L_16.___m10_3;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_18 = ___m21;
		float L_19 = L_18.___m11_6;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_20 = ___m10;
		float L_21 = L_20.___m20_4;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_22 = ___m21;
		float L_23 = L_22.___m12_9;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_13, L_15)), ((float)il2cpp_codegen_multiply(L_17, L_19)))), ((float)il2cpp_codegen_multiply(L_21, L_23))));
		// float a13 = m1.m00 * m2.m20 + m1.m10 * m2.m21 + m1.m20 * m2.m22;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_24 = ___m10;
		float L_25 = L_24.___m00_2;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_26 = ___m21;
		float L_27 = L_26.___m20_4;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_28 = ___m10;
		float L_29 = L_28.___m10_3;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_30 = ___m21;
		float L_31 = L_30.___m21_7;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_32 = ___m10;
		float L_33 = L_32.___m20_4;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_34 = ___m21;
		float L_35 = L_34.___m22_10;
		V_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_25, L_27)), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_multiply(L_33, L_35))));
		// float a21 = m1.m01 * m2.m00 + m1.m11 * m2.m01 + m1.m21 * m2.m02;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_36 = ___m10;
		float L_37 = L_36.___m01_5;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_38 = ___m21;
		float L_39 = L_38.___m00_2;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_40 = ___m10;
		float L_41 = L_40.___m11_6;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_42 = ___m21;
		float L_43 = L_42.___m01_5;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_44 = ___m10;
		float L_45 = L_44.___m21_7;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_46 = ___m21;
		float L_47 = L_46.___m02_8;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_37, L_39)), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47))));
		// float a22 = m1.m01 * m2.m10 + m1.m11 * m2.m11 + m1.m21 * m2.m12;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_48 = ___m10;
		float L_49 = L_48.___m01_5;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_50 = ___m21;
		float L_51 = L_50.___m10_3;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_52 = ___m10;
		float L_53 = L_52.___m11_6;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_54 = ___m21;
		float L_55 = L_54.___m11_6;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_56 = ___m10;
		float L_57 = L_56.___m21_7;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_58 = ___m21;
		float L_59 = L_58.___m12_9;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59))));
		// float a23 = m1.m01 * m2.m20 + m1.m11 * m2.m21 + m1.m21 * m2.m22;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_60 = ___m10;
		float L_61 = L_60.___m01_5;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_62 = ___m21;
		float L_63 = L_62.___m20_4;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_64 = ___m10;
		float L_65 = L_64.___m11_6;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_66 = ___m21;
		float L_67 = L_66.___m21_7;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_68 = ___m10;
		float L_69 = L_68.___m21_7;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_70 = ___m21;
		float L_71 = L_70.___m22_10;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_61, L_63)), ((float)il2cpp_codegen_multiply(L_65, L_67)))), ((float)il2cpp_codegen_multiply(L_69, L_71))));
		// float a31 = m1.m02 * m2.m00 + m1.m12 * m2.m01 + m1.m22 * m2.m02;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_72 = ___m10;
		float L_73 = L_72.___m02_8;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_74 = ___m21;
		float L_75 = L_74.___m00_2;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_76 = ___m10;
		float L_77 = L_76.___m12_9;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_78 = ___m21;
		float L_79 = L_78.___m01_5;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_80 = ___m10;
		float L_81 = L_80.___m22_10;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_82 = ___m21;
		float L_83 = L_82.___m02_8;
		V_5 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_73, L_75)), ((float)il2cpp_codegen_multiply(L_77, L_79)))), ((float)il2cpp_codegen_multiply(L_81, L_83))));
		// float a32 = m1.m02 * m2.m10 + m1.m12 * m2.m11 + m1.m22 * m2.m12;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_84 = ___m10;
		float L_85 = L_84.___m02_8;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_86 = ___m21;
		float L_87 = L_86.___m10_3;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_88 = ___m10;
		float L_89 = L_88.___m12_9;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_90 = ___m21;
		float L_91 = L_90.___m11_6;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_92 = ___m10;
		float L_93 = L_92.___m22_10;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_94 = ___m21;
		float L_95 = L_94.___m12_9;
		V_6 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_85, L_87)), ((float)il2cpp_codegen_multiply(L_89, L_91)))), ((float)il2cpp_codegen_multiply(L_93, L_95))));
		// float a33 = m1.m02 * m2.m20 + m1.m12 * m2.m21 + m1.m22 * m2.m22;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_96 = ___m10;
		float L_97 = L_96.___m02_8;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_98 = ___m21;
		float L_99 = L_98.___m20_4;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_100 = ___m10;
		float L_101 = L_100.___m12_9;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_102 = ___m21;
		float L_103 = L_102.___m21_7;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_104 = ___m10;
		float L_105 = L_104.___m22_10;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_106 = ___m21;
		float L_107 = L_106.___m22_10;
		V_7 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_97, L_99)), ((float)il2cpp_codegen_multiply(L_101, L_103)))), ((float)il2cpp_codegen_multiply(L_105, L_107))));
		// return new Matrix2d(a11, a12, a13, a21, a22, a23, a31, a32, a33);
		float L_108 = V_0;
		float L_109 = V_1;
		float L_110 = V_2;
		float L_111 = V_3;
		float L_112 = V_4;
		float L_113 = V_5;
		float L_114 = V_6;
		float L_115 = V_7;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_116;
		memset((&L_116), 0, sizeof(L_116));
		Matrix2d__ctor_m44BA0249B8A626878BABFD6C70EBD20A9872594A((&L_116), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), L_108, L_109, L_110, L_111, L_112, L_113, L_114, L_115, /*hidden argument*/NULL);
		return L_116;
	}
}
// ExtendedPrimitives_11.Internal.Matrix2d ExtendedPrimitives_11.Internal.Matrix2d::op_Multiply(ExtendedPrimitives_11.Internal.Matrix2d,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D Matrix2d_op_Multiply_m37BDEEAAA233492BB0B76C0ECB25CCFDF250A275 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D ___m0, float ___f1, const RuntimeMethod* method) 
{
	{
		// m.m00 *= f;
		float* L_0 = (&(&___m0)->___m00_2);
		float* L_1 = L_0;
		float L_2 = *((float*)L_1);
		float L_3 = ___f1;
		*((float*)L_1) = (float)((float)il2cpp_codegen_multiply(L_2, L_3));
		// m.m10 *= f;
		float* L_4 = (&(&___m0)->___m10_3);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		float L_7 = ___f1;
		*((float*)L_5) = (float)((float)il2cpp_codegen_multiply(L_6, L_7));
		// m.m20 *= f;
		float* L_8 = (&(&___m0)->___m20_4);
		float* L_9 = L_8;
		float L_10 = *((float*)L_9);
		float L_11 = ___f1;
		*((float*)L_9) = (float)((float)il2cpp_codegen_multiply(L_10, L_11));
		// m.m01 *= f;
		float* L_12 = (&(&___m0)->___m01_5);
		float* L_13 = L_12;
		float L_14 = *((float*)L_13);
		float L_15 = ___f1;
		*((float*)L_13) = (float)((float)il2cpp_codegen_multiply(L_14, L_15));
		// m.m11 *= f;
		float* L_16 = (&(&___m0)->___m11_6);
		float* L_17 = L_16;
		float L_18 = *((float*)L_17);
		float L_19 = ___f1;
		*((float*)L_17) = (float)((float)il2cpp_codegen_multiply(L_18, L_19));
		// m.m21 *= f;
		float* L_20 = (&(&___m0)->___m21_7);
		float* L_21 = L_20;
		float L_22 = *((float*)L_21);
		float L_23 = ___f1;
		*((float*)L_21) = (float)((float)il2cpp_codegen_multiply(L_22, L_23));
		// m.m02 *= f;
		float* L_24 = (&(&___m0)->___m02_8);
		float* L_25 = L_24;
		float L_26 = *((float*)L_25);
		float L_27 = ___f1;
		*((float*)L_25) = (float)((float)il2cpp_codegen_multiply(L_26, L_27));
		// m.m12 *= f;
		float* L_28 = (&(&___m0)->___m12_9);
		float* L_29 = L_28;
		float L_30 = *((float*)L_29);
		float L_31 = ___f1;
		*((float*)L_29) = (float)((float)il2cpp_codegen_multiply(L_30, L_31));
		// m.m22 *= f;
		float* L_32 = (&(&___m0)->___m22_10);
		float* L_33 = L_32;
		float L_34 = *((float*)L_33);
		float L_35 = ___f1;
		*((float*)L_33) = (float)((float)il2cpp_codegen_multiply(L_34, L_35));
		// return m;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_36 = ___m0;
		return L_36;
	}
}
// ExtendedPrimitives_11.Internal.Matrix2d ExtendedPrimitives_11.Internal.Matrix2d::op_Multiply(System.Single,ExtendedPrimitives_11.Internal.Matrix2d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D Matrix2d_op_Multiply_mE58D8B96AA5F1D0A27756FEFC1525A2113E2A64E (float ___f0, Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D ___m1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m * f;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_0 = ___m1;
		float L_1 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D_il2cpp_TypeInfo_var);
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_2;
		L_2 = Matrix2d_op_Multiply_m37BDEEAAA233492BB0B76C0ECB25CCFDF250A275(L_0, L_1, NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Matrix2d::op_Multiply(UnityEngine.Vector2,ExtendedPrimitives_11.Internal.Matrix2d)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Matrix2d_op_Multiply_m96C2B3010AF851C0981D6A7ABD39E644B2852794 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D ___m1, const RuntimeMethod* method) 
{
	{
		// return m.MultiplyPoint(v);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Matrix2d_MultiplyPoint_mBF8C8C2058394C3E7B1BB47732A87F9D2FF7A165((&___m1), L_0, NULL);
		return L_1;
	}
}
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::DrawGizmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d_DrawGizmo_m363BF80F79ED988C438A136A8663D32F89EAAEB0 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.DrawLine(Position, Position + Up, Color.green);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Matrix2d_get_Position_m101637DC9A94CD1C97C3825EBA2BCDFE761F1698(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Matrix2d_get_Position_m101637DC9A94CD1C97C3825EBA2BCDFE761F1698(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Matrix2d_get_Up_m087209B281F15755DE2CBFFD09D740DD73642A4E(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_1, L_5, L_6, NULL);
		// Debug.DrawLine(Position, Position + Right, Color.red);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Matrix2d_get_Position_m101637DC9A94CD1C97C3825EBA2BCDFE761F1698(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Matrix2d_get_Position_m101637DC9A94CD1C97C3825EBA2BCDFE761F1698(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Matrix2d_get_Right_mE73BCA083EA6B559B0BE0E0C34C38A9680E73469(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_8, L_12, L_13, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Matrix2d_DrawGizmo_m363BF80F79ED988C438A136A8663D32F89EAAEB0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Matrix2d_DrawGizmo_m363BF80F79ED988C438A136A8663D32F89EAAEB0(_thisAdjusted, method);
}
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::DrawGizmoXZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d_DrawGizmoXZ_m42A3E569F67043D9965CBFEF5B0F86E31F42D055 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.DrawLine(Position.XYtoXyZ(), (Position + Up).XYtoXyZ(), Color.green);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Matrix2d_get_Position_m101637DC9A94CD1C97C3825EBA2BCDFE761F1698(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Extension_XYtoXyZ_mFDBCB3387A74A2EC5EACC58373133523FF42B2F2(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Matrix2d_get_Position_m101637DC9A94CD1C97C3825EBA2BCDFE761F1698(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Matrix2d_get_Up_m087209B281F15755DE2CBFFD09D740DD73642A4E(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Extension_XYtoXyZ_mFDBCB3387A74A2EC5EACC58373133523FF42B2F2(L_4, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_1, L_5, L_6, NULL);
		// Debug.DrawLine(Position.XYtoXyZ(), (Position + Right).XYtoXyZ(), Color.red);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Matrix2d_get_Position_m101637DC9A94CD1C97C3825EBA2BCDFE761F1698(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Extension_XYtoXyZ_mFDBCB3387A74A2EC5EACC58373133523FF42B2F2(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Matrix2d_get_Position_m101637DC9A94CD1C97C3825EBA2BCDFE761F1698(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Matrix2d_get_Right_mE73BCA083EA6B559B0BE0E0C34C38A9680E73469(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_9, L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Extension_XYtoXyZ_mFDBCB3387A74A2EC5EACC58373133523FF42B2F2(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_8, L_12, L_13, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Matrix2d_DrawGizmoXZ_m42A3E569F67043D9965CBFEF5B0F86E31F42D055_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Matrix2d_DrawGizmoXZ_m42A3E569F67043D9965CBFEF5B0F86E31F42D055(_thisAdjusted, method);
}
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Matrix2d::MultiplyPoint(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Matrix2d_MultiplyPoint_mBF8C8C2058394C3E7B1BB47732A87F9D2FF7A165 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// newPoint.x = this.m00 * point.x + this.m01 * point.y + this.m20;
		float L_0 = __this->___m00_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___point0;
		float L_2 = L_1.___x_0;
		float L_3 = __this->___m01_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___point0;
		float L_5 = L_4.___y_1;
		float L_6 = __this->___m20_4;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_2)), ((float)il2cpp_codegen_multiply(L_3, L_5)))), L_6));
		// newPoint.y = this.m10 * point.x + this.m11 * point.y + this.m21;
		float L_7 = __this->___m10_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___point0;
		float L_9 = L_8.___x_0;
		float L_10 = __this->___m11_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___point0;
		float L_12 = L_11.___y_1;
		float L_13 = __this->___m21_7;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_7, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_12)))), L_13));
		// return newPoint;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Matrix2d_MultiplyPoint_mBF8C8C2058394C3E7B1BB47732A87F9D2FF7A165_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = Matrix2d_MultiplyPoint_mBF8C8C2058394C3E7B1BB47732A87F9D2FF7A165(_thisAdjusted, ___point0, method);
	return _returnValue;
}
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Matrix2d::MultiplyVector(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Matrix2d_MultiplyVector_m2BA54FBD7A6ADB115B409F21901CDED5EFE47E09 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// newPoint.x = this.m00 * point.x + this.m01 * point.y;
		float L_0 = __this->___m00_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___point0;
		float L_2 = L_1.___x_0;
		float L_3 = __this->___m01_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___point0;
		float L_5 = L_4.___y_1;
		(&V_0)->___x_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_2)), ((float)il2cpp_codegen_multiply(L_3, L_5))));
		// newPoint.y = this.m10 * point.x + this.m11 * point.y;
		float L_6 = __this->___m10_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___point0;
		float L_8 = L_7.___x_0;
		float L_9 = __this->___m11_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___point0;
		float L_11 = L_10.___y_1;
		(&V_0)->___y_1 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_6, L_8)), ((float)il2cpp_codegen_multiply(L_9, L_11))));
		// return newPoint;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		return L_12;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Matrix2d_MultiplyVector_m2BA54FBD7A6ADB115B409F21901CDED5EFE47E09_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = Matrix2d_MultiplyVector_m2BA54FBD7A6ADB115B409F21901CDED5EFE47E09(_thisAdjusted, ___point0, method);
	return _returnValue;
}
// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Matrix2d::MultiplyVectorX(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyVectorX_m4568F969C03A57915742A680F0C4717CC8764550 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 r = MultiplyVector(new Vector2(vec.z, vec.y));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vec0;
		float L_1 = L_0.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vec0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Matrix2d_MultiplyVector_m2BA54FBD7A6ADB115B409F21901CDED5EFE47E09(__this, L_4, NULL);
		V_0 = L_5;
		// return new Vector3(vec.x, r.y, r.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vec0;
		float L_7 = L_6.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11 = L_10.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_7, L_9, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyVectorX_m4568F969C03A57915742A680F0C4717CC8764550_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Matrix2d_MultiplyVectorX_m4568F969C03A57915742A680F0C4717CC8764550(_thisAdjusted, ___vec0, method);
	return _returnValue;
}
// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Matrix2d::MultiplyPointX(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyPointX_mAF6B827D018204B5F420949D070BBD565A04637A (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 r = MultiplyPoint(new Vector2(vec.z, vec.y));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vec0;
		float L_1 = L_0.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vec0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Matrix2d_MultiplyPoint_mBF8C8C2058394C3E7B1BB47732A87F9D2FF7A165(__this, L_4, NULL);
		V_0 = L_5;
		// return new Vector3(vec.x, r.y, r.x);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vec0;
		float L_7 = L_6.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11 = L_10.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_7, L_9, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyPointX_mAF6B827D018204B5F420949D070BBD565A04637A_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Matrix2d_MultiplyPointX_mAF6B827D018204B5F420949D070BBD565A04637A(_thisAdjusted, ___vec0, method);
	return _returnValue;
}
// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Matrix2d::MultiplyVectorY(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 r = MultiplyVector(new Vector2(vec.x, vec.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vec0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vec0;
		float L_3 = L_2.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Matrix2d_MultiplyVector_m2BA54FBD7A6ADB115B409F21901CDED5EFE47E09(__this, L_4, NULL);
		V_0 = L_5;
		// return new Vector3(r.x, vec.y, r.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vec0;
		float L_9 = L_8.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11 = L_10.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_7, L_9, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4(_thisAdjusted, ___vec0, method);
	return _returnValue;
}
// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Matrix2d::MultiplyPointY(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyPointY_mF09D4CD0799D7F4DD424FC6B0E6CEBB564F6D5B0 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 r = MultiplyPoint(new Vector2(vec.x, vec.z));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vec0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vec0;
		float L_3 = L_2.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Matrix2d_MultiplyPoint_mBF8C8C2058394C3E7B1BB47732A87F9D2FF7A165(__this, L_4, NULL);
		V_0 = L_5;
		// return new Vector3(r.x, vec.y, r.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vec0;
		float L_9 = L_8.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		float L_11 = L_10.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_7, L_9, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyPointY_mF09D4CD0799D7F4DD424FC6B0E6CEBB564F6D5B0_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Matrix2d_MultiplyPointY_mF09D4CD0799D7F4DD424FC6B0E6CEBB564F6D5B0(_thisAdjusted, ___vec0, method);
	return _returnValue;
}
// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Matrix2d::MultiplyVectorZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyVectorZ_mD0F32EB5D6B7BF55D3DCD29E655401073347CAB8 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 r = MultiplyVector(new Vector2(vec.x, vec.y));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vec0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vec0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Matrix2d_MultiplyVector_m2BA54FBD7A6ADB115B409F21901CDED5EFE47E09(__this, L_4, NULL);
		V_0 = L_5;
		// return new Vector3(r.x, r.y, vec.z);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9 = L_8.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vec0;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_7, L_9, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyVectorZ_mD0F32EB5D6B7BF55D3DCD29E655401073347CAB8_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Matrix2d_MultiplyVectorZ_mD0F32EB5D6B7BF55D3DCD29E655401073347CAB8(_thisAdjusted, ___vec0, method);
	return _returnValue;
}
// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Matrix2d::MultiplyPointZ(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyPointZ_m775AA84E38B223E849DEFCB584D1FE642E278079 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 r = MultiplyPoint(new Vector2(vec.x, vec.y));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vec0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vec0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Matrix2d_MultiplyPoint_mBF8C8C2058394C3E7B1BB47732A87F9D2FF7A165(__this, L_4, NULL);
		V_0 = L_5;
		// return new Vector3(r.x, r.y, vec.z);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		float L_7 = L_6.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9 = L_8.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vec0;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), L_7, L_9, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix2d_MultiplyPointZ_m775AA84E38B223E849DEFCB584D1FE642E278079_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vec0, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = Matrix2d_MultiplyPointZ_m775AA84E38B223E849DEFCB584D1FE642E278079(_thisAdjusted, ___vec0, method);
	return _returnValue;
}
// ExtendedPrimitives_11.Internal.Matrix2d ExtendedPrimitives_11.Internal.Matrix2d::get_Transpose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D Matrix2d_get_Transpose_m544D18CEEF8F24C7DBCD3FB3BC5B9429EF8B2724 (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, const RuntimeMethod* method) 
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Matrix2d newM = new Matrix2d();
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D));
		// newM.m00 = this.m00;
		float L_0 = __this->___m00_2;
		(&V_0)->___m00_2 = L_0;
		// newM.m01 = this.m10;
		float L_1 = __this->___m10_3;
		(&V_0)->___m01_5 = L_1;
		// newM.m02 = this.m20;
		float L_2 = __this->___m20_4;
		(&V_0)->___m02_8 = L_2;
		// newM.m10 = this.m01;
		float L_3 = __this->___m01_5;
		(&V_0)->___m10_3 = L_3;
		// newM.m11 = this.m11;
		float L_4 = __this->___m11_6;
		(&V_0)->___m11_6 = L_4;
		// newM.m12 = this.m21;
		float L_5 = __this->___m21_7;
		(&V_0)->___m12_9 = L_5;
		// newM.m20 = this.m02;
		float L_6 = __this->___m02_8;
		(&V_0)->___m20_4 = L_6;
		// newM.m21 = this.m12;
		float L_7 = __this->___m12_9;
		(&V_0)->___m21_7 = L_7;
		// newM.m22 = this.m22;
		float L_8 = __this->___m22_10;
		(&V_0)->___m22_10 = L_8;
		// return newM;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C  Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D Matrix2d_get_Transpose_m544D18CEEF8F24C7DBCD3FB3BC5B9429EF8B2724_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D _returnValue;
	_returnValue = Matrix2d_get_Transpose_m544D18CEEF8F24C7DBCD3FB3BC5B9429EF8B2724(_thisAdjusted, method);
	return _returnValue;
}
// ExtendedPrimitives_11.Internal.Matrix2d ExtendedPrimitives_11.Internal.Matrix2d::get_Inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D Matrix2d_get_Inverse_m12620DF3E42432AD24DFBF7210793CAD88FFF7FA (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D V_17;
	memset((&V_17), 0, sizeof(V_17));
	float V_18 = 0.0f;
	{
		// float a11 = this.m00;
		float L_0 = __this->___m00_2;
		// float a12 = this.m10;
		float L_1 = __this->___m10_3;
		V_0 = L_1;
		// float a13 = this.m20;
		float L_2 = __this->___m20_4;
		V_1 = L_2;
		// float a21 = this.m01;
		float L_3 = __this->___m01_5;
		V_2 = L_3;
		// float a22 = this.m11;
		float L_4 = __this->___m11_6;
		V_3 = L_4;
		// float a23 = this.m21;
		float L_5 = __this->___m21_7;
		V_4 = L_5;
		// float a31 = this.m02;
		float L_6 = __this->___m02_8;
		V_5 = L_6;
		// float a32 = this.m12;
		float L_7 = __this->___m12_9;
		V_6 = L_7;
		// float a33 = this.m22;
		float L_8 = __this->___m22_10;
		V_7 = L_8;
		// float m11 = (a22 * a33) - (a23 * a32);
		float L_9 = V_3;
		float L_10 = V_7;
		float L_11 = V_4;
		float L_12 = V_6;
		V_8 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_10)), ((float)il2cpp_codegen_multiply(L_11, L_12))));
		// float m12 = (a21 * a33) - (a23 * a31);
		float L_13 = V_2;
		float L_14 = V_7;
		float L_15 = V_4;
		float L_16 = V_5;
		V_9 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16))));
		// float m13 = (a21 * a32) - (a22 * a31);
		float L_17 = V_2;
		float L_18 = V_6;
		float L_19 = V_3;
		float L_20 = V_5;
		V_10 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_18)), ((float)il2cpp_codegen_multiply(L_19, L_20))));
		// float m21 = (a12 * a33) - (a13 * a32);
		float L_21 = V_0;
		float L_22 = V_7;
		float L_23 = V_1;
		float L_24 = V_6;
		V_11 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_21, L_22)), ((float)il2cpp_codegen_multiply(L_23, L_24))));
		// float m22 = (a11 * a33) - (a13 * a31);
		float L_25 = L_0;
		float L_26 = V_7;
		float L_27 = V_1;
		float L_28 = V_5;
		V_12 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_25, L_26)), ((float)il2cpp_codegen_multiply(L_27, L_28))));
		// float m23 = (a11 * a32) - (a12 * a31);
		float L_29 = L_25;
		float L_30 = V_6;
		float L_31 = V_0;
		float L_32 = V_5;
		V_13 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_29, L_30)), ((float)il2cpp_codegen_multiply(L_31, L_32))));
		// float m31 = (a12 * a23) - (a13 * a22);
		float L_33 = V_0;
		float L_34 = V_4;
		float L_35 = V_1;
		float L_36 = V_3;
		V_14 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_33, L_34)), ((float)il2cpp_codegen_multiply(L_35, L_36))));
		// float m32 = (a11 * a23) - (a13 * a21);
		float L_37 = L_29;
		float L_38 = V_4;
		float L_39 = V_1;
		float L_40 = V_2;
		V_15 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_37, L_38)), ((float)il2cpp_codegen_multiply(L_39, L_40))));
		// float m33 = (a11 * a22) - (a12 * a21);
		float L_41 = V_3;
		float L_42 = V_0;
		float L_43 = V_2;
		V_16 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_37, L_41)), ((float)il2cpp_codegen_multiply(L_42, L_43))));
		// Matrix2d newM = new Matrix2d(m11, -m12, m13, -m21, m22, -m23, m31, -m32, m33);
		float L_44 = V_8;
		float L_45 = V_9;
		float L_46 = V_10;
		float L_47 = V_11;
		float L_48 = V_12;
		float L_49 = V_13;
		float L_50 = V_14;
		float L_51 = V_15;
		float L_52 = V_16;
		Matrix2d__ctor_m44BA0249B8A626878BABFD6C70EBD20A9872594A((&V_17), L_44, ((-L_45)), L_46, ((-L_47)), L_48, ((-L_49)), L_50, ((-L_51)), L_52, NULL);
		// newM = newM.Transpose;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_53;
		L_53 = Matrix2d_get_Transpose_m544D18CEEF8F24C7DBCD3FB3BC5B9429EF8B2724((&V_17), NULL);
		V_17 = L_53;
		// float detM = this.m00 * newM.m00 + this.m10 * newM.m01 + this.m20 * newM.m02;
		float L_54 = __this->___m00_2;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_55 = V_17;
		float L_56 = L_55.___m00_2;
		float L_57 = __this->___m10_3;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_58 = V_17;
		float L_59 = L_58.___m01_5;
		float L_60 = __this->___m20_4;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_61 = V_17;
		float L_62 = L_61.___m02_8;
		V_18 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_54, L_56)), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_60, L_62))));
		// if (detM == 0) {
		float L_63 = V_18;
		if ((!(((float)L_63) == ((float)(0.0f)))))
		{
			goto IL_0106;
		}
	}
	{
		// return this;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_64 = (*(Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*)__this);
		return L_64;
	}

IL_0106:
	{
		// detM = 1f / detM;
		float L_65 = V_18;
		V_18 = ((float)((1.0f)/L_65));
		// newM = detM * newM;
		float L_66 = V_18;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_67 = V_17;
		il2cpp_codegen_runtime_class_init_inline(Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D_il2cpp_TypeInfo_var);
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_68;
		L_68 = Matrix2d_op_Multiply_mE58D8B96AA5F1D0A27756FEFC1525A2113E2A64E(L_66, L_67, NULL);
		V_17 = L_68;
		// return newM;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_69 = V_17;
		return L_69;
	}
}
IL2CPP_EXTERN_C  Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D Matrix2d_get_Inverse_m12620DF3E42432AD24DFBF7210793CAD88FFF7FA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D*>(__this + _offset);
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D _returnValue;
	_returnValue = Matrix2d_get_Inverse_m12620DF3E42432AD24DFBF7210793CAD88FFF7FA(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ExtendedPrimitives_11.Internal.Matrix2d::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Matrix2d__cctor_m610C82E12F863870972E366D80FF5A74B57148F0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Matrix2d identity = new Matrix2d(1, 0, 0, 0, 1, 0, 0, 0, 1);
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Matrix2d__ctor_m44BA0249B8A626878BABFD6C70EBD20A9872594A((&L_0), (1.0f), (0.0f), (0.0f), (0.0f), (1.0f), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		((Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D_StaticFields*)il2cpp_codegen_static_fields_for(Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D_il2cpp_TypeInfo_var))->___identity_0 = L_0;
		// public static Matrix2d zero = new Matrix2d(0, 0, 0, 0, 0, 0, 0, 0, 0);
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_1;
		memset((&L_1), 0, sizeof(L_1));
		Matrix2d__ctor_m44BA0249B8A626878BABFD6C70EBD20A9872594A((&L_1), (0.0f), (0.0f), (0.0f), (0.0f), (0.0f), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		((Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D_StaticFields*)il2cpp_codegen_static_fields_for(Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D_il2cpp_TypeInfo_var))->___zero_1 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.Edge2d::.ctor(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Edge2d__ctor_m1CD975934B76EFEC3A30C00B9FA02127472535BE (Edge2d_t52914D645107AC4D516052D5BF3B9563D31015EE* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	{
		// A = a;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		__this->___A_0 = L_0;
		// B = b;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___b1;
		__this->___B_1 = L_1;
		// ab = B - A;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___B_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___A_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_2, L_3, NULL);
		__this->___ab_2 = L_4;
		// length = ab.magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___ab_2);
		float L_6;
		L_6 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_5, NULL);
		__this->___length_3 = L_6;
		// length2 = length * length;
		float L_7 = __this->___length_3;
		float L_8 = __this->___length_3;
		__this->___length2_4 = ((float)il2cpp_codegen_multiply(L_7, L_8));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Edge2d__ctor_m1CD975934B76EFEC3A30C00B9FA02127472535BE_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method)
{
	Edge2d_t52914D645107AC4D516052D5BF3B9563D31015EE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Edge2d_t52914D645107AC4D516052D5BF3B9563D31015EE*>(__this + _offset);
	Edge2d__ctor_m1CD975934B76EFEC3A30C00B9FA02127472535BE(_thisAdjusted, ___a0, ___b1, method);
}
// System.Single ExtendedPrimitives_11.Internal.Edge2d::GetDistance(UnityEngine.Vector2,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Edge2d_GetDistance_m612224270207B2DD896BEBFC8B86D90C5E4164EE (Edge2d_t52914D645107AC4D516052D5BF3B9563D31015EE* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, float* ___lv1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 ap = point - A;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___point0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___A_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		// float u = Vector2.Dot(ap, ab) / length2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___ab_2;
		float L_4;
		L_4 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_2, L_3, NULL);
		float L_5 = __this->___length2_4;
		V_0 = ((float)(L_4/L_5));
		// Vector3 nearestPoint = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_1 = L_6;
		// if (u < 0) {
		float L_7 = V_0;
		if ((!(((float)L_7) < ((float)(0.0f)))))
		{
			goto IL_0042;
		}
	}
	{
		// lv = 0;
		float* L_8 = ___lv1;
		*((float*)L_8) = (float)(0.0f);
		// nearestPoint = A;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = __this->___A_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_9, NULL);
		V_1 = L_10;
		goto IL_007f;
	}

IL_0042:
	{
		// } else if (u > 1) {
		float L_11 = V_0;
		if ((!(((float)L_11) > ((float)(1.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		// lv = 1f;
		float* L_12 = ___lv1;
		*((float*)L_12) = (float)(1.0f);
		// nearestPoint = B;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = __this->___B_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_13, NULL);
		V_1 = L_14;
		goto IL_007f;
	}

IL_005f:
	{
		// lv = u;
		float* L_15 = ___lv1;
		float L_16 = V_0;
		*((float*)L_15) = (float)L_16;
		// nearestPoint = A + ab * u;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = __this->___A_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = __this->___ab_2;
		float L_19 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_18, L_19, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_17, L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_21, NULL);
		V_1 = L_22;
	}

IL_007f:
	{
		// return Vector2.Distance(nearestPoint, point);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_23, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = ___point0;
		float L_26;
		L_26 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_24, L_25, NULL);
		return L_26;
	}
}
IL2CPP_EXTERN_C  float Edge2d_GetDistance_m612224270207B2DD896BEBFC8B86D90C5E4164EE_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, float* ___lv1, const RuntimeMethod* method)
{
	Edge2d_t52914D645107AC4D516052D5BF3B9563D31015EE* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Edge2d_t52914D645107AC4D516052D5BF3B9563D31015EE*>(__this + _offset);
	float _returnValue;
	_returnValue = Edge2d_GetDistance_m612224270207B2DD896BEBFC8B86D90C5E4164EE(_thisAdjusted, ___point0, ___lv1, method);
	return _returnValue;
}
// System.Single ExtendedPrimitives_11.Internal.Edge2d::GetDistance(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Edge2d_GetDistance_mCD5F8847BC5E73188BAE5A13F1FA76EE2C84D54F (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point2, float* ___lv3, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector2 _ab = b - a;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// float _length = _ab.magnitude;
		float L_3;
		L_3 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_0), NULL);
		// float _length2 = _length * _length;
		float L_4 = L_3;
		V_1 = ((float)il2cpp_codegen_multiply(L_4, L_4));
		// Vector2 ap = point - a;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___point2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_5, L_6, NULL);
		// float u = Vector2.Dot(ap, _ab) / _length2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = V_0;
		float L_9;
		L_9 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_7, L_8, NULL);
		float L_10 = V_1;
		V_2 = ((float)(L_9/L_10));
		// Vector3 nearestPoint = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_3 = L_11;
		// if (u < 0) {
		float L_12 = V_2;
		if ((!(((float)L_12) < ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		// nearestPoint = a;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___a0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_13, NULL);
		V_3 = L_14;
		// lv = 0;
		float* L_15 = ___lv3;
		*((float*)L_15) = (float)(0.0f);
		goto IL_006e;
	}

IL_0040:
	{
		// } else if (u > 1) {
		float L_16 = V_2;
		if ((!(((float)L_16) > ((float)(1.0f)))))
		{
			goto IL_0058;
		}
	}
	{
		// nearestPoint = b;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___b1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_17, NULL);
		V_3 = L_18;
		// lv = 1f;
		float* L_19 = ___lv3;
		*((float*)L_19) = (float)(1.0f);
		goto IL_006e;
	}

IL_0058:
	{
		// nearestPoint = a + _ab * u;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_0;
		float L_22 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_21, L_22, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_20, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_24, NULL);
		V_3 = L_25;
		// lv = u;
		float* L_26 = ___lv3;
		float L_27 = V_2;
		*((float*)L_26) = (float)L_27;
	}

IL_006e:
	{
		// return Vector2.Distance(nearestPoint, point);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_28, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = ___point2;
		float L_31;
		L_31 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_29, L_30, NULL);
		return L_31;
	}
}
// System.Single ExtendedPrimitives_11.Internal.Edge2d::RotationAngle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Edge2d_RotationAngle_mDA59E98D34F31AFD81859623DB70E6AE8D8E3DB9 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 ab = b - a;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// return Mathf.Atan2(ab.y, ab.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		float L_4 = L_3.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		float L_6 = L_5.___x_0;
		float L_7;
		L_7 = atan2f(L_4, L_6);
		return L_7;
	}
}
// System.Single ExtendedPrimitives_11.Internal.Edge2d::RotationAngle(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Edge2d_RotationAngle_m52317973048D939B423A592B4221D79477DDDE9E (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dir0, const RuntimeMethod* method) 
{
	{
		// return Mathf.Atan2(dir.y, dir.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___dir0;
		float L_1 = L_0.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___dir0;
		float L_3 = L_2.___x_0;
		float L_4;
		L_4 = atan2f(L_1, L_3);
		return L_4;
	}
}
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.Edge2d::Rotate90(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Edge2d_Rotate90_m409F3CCD7EBB3F60D2F89817FBD7C499A8304957 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector0, const RuntimeMethod* method) 
{
	{
		// return new Vector2(vector.y, -vector.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___vector0;
		float L_1 = L_0.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___vector0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, ((-L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.ArcSegment::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSegment__ctor_m1635EA59BC2C6F3262186AFF12138C269AB12DEB (ArcSegment_t923B1379845A603ABAE8C75954ECE467E666C3AC* __this, int32_t ___detalization0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ArcSegment(int detalization) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// detalization = Mathf.Clamp(detalization, 1, 64);
		int32_t L_0 = ___detalization0;
		int32_t L_1;
		L_1 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_0, 1, ((int32_t)64), NULL);
		___detalization0 = L_1;
		// points = new Vector2[detalization * 2 + 1];
		int32_t L_2 = ___detalization0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)SZArrayNew(Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, 2)), 1)));
		__this->___points_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_0), (void*)L_3);
		// bidx = detalization;
		int32_t L_4 = ___detalization0;
		__this->___bidx_2 = L_4;
		// cidx = detalization * 2;
		int32_t L_5 = ___detalization0;
		__this->___cidx_3 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		// Detalization = detalization;
		int32_t L_6 = ___detalization0;
		__this->___Detalization_7 = L_6;
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.ArcSegment::Set(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSegment_Set_m19E9A027654CC3FBE6688B1D2E72819488EB7CAF (ArcSegment_t923B1379845A603ABAE8C75954ECE467E666C3AC* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___c2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	float V_15 = 0.0f;
	int32_t V_16 = 0;
	float V_17 = 0.0f;
	int32_t V_18 = 0;
	float V_19 = 0.0f;
	int32_t V_20 = 0;
	float V_21 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B14_0 = 0.0f;
	float G_B17_0 = 0.0f;
	float G_B20_0 = 0.0f;
	{
		// A = a;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		__this->___A_4 = L_0;
		// B = b;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___b1;
		__this->___B_5 = L_1;
		// C = c;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___c2;
		__this->___C_6 = L_2;
		// Vector2 ab = b - a;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_3, L_4, NULL);
		V_0 = L_5;
		// Vector2 bc = c - b;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___c2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_6, L_7, NULL);
		V_1 = L_8;
		// Vector2 abOrtho = new Vector2(-ab.y, ab.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		float L_12 = L_11.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), ((-L_10)), L_12, NULL);
		// Vector2 bcOrtho = new Vector2(-bc.y, bc.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		float L_14 = L_13.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		float L_16 = L_15.___x_0;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), ((-L_14)), L_16, NULL);
		// Vector2 abCenter = Vector2.LerpUnclamped(a, b, 0.5f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_LerpUnclamped_mB0B50875D4509E21FF43F4D87610333D55E6A44F_inline(L_17, L_18, (0.5f), NULL);
		// Vector2 bcCenter = Vector2.LerpUnclamped(b, c, 0.5f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___c2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_LerpUnclamped_mB0B50875D4509E21FF43F4D87610333D55E6A44F_inline(L_20, L_21, (0.5f), NULL);
		V_4 = L_22;
		// if (Extension.LineLineItersection(abCenter, abOrtho, bcCenter, bcOrtho, ref Center) == false) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_26 = (&__this->___Center_9);
		bool L_27;
		L_27 = Extension_LineLineItersection_mB507787B3409ED765BB6C6C9AA01E5AA004BFACE(L_19, L_23, L_24, L_25, L_26, NULL);
		if (L_27)
		{
			goto IL_0129;
		}
	}
	{
		// for (int i = 1; i < Detalization; i++) {
		V_14 = 1;
		goto IL_00a9;
	}

IL_0080:
	{
		// float lv = (float)i / Detalization;
		int32_t L_28 = V_14;
		int32_t L_29 = __this->___Detalization_7;
		V_15 = ((float)(((float)L_28)/((float)L_29)));
		// points[i] = Vector2.LerpUnclamped(a, b, lv);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_30 = __this->___points_0;
		int32_t L_31 = V_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = ___b1;
		float L_34 = V_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35;
		L_35 = Vector2_LerpUnclamped_mB0B50875D4509E21FF43F4D87610333D55E6A44F_inline(L_32, L_33, L_34, NULL);
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_35);
		// for (int i = 1; i < Detalization; i++) {
		int32_t L_36 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00a9:
	{
		// for (int i = 1; i < Detalization; i++) {
		int32_t L_37 = V_14;
		int32_t L_38 = __this->___Detalization_7;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0080;
		}
	}
	{
		// for (int i = 1; i < Detalization; i++) {
		V_16 = 1;
		goto IL_00e8;
	}

IL_00b8:
	{
		// float lv = (float)i / Detalization;
		int32_t L_39 = V_16;
		int32_t L_40 = __this->___Detalization_7;
		V_17 = ((float)(((float)L_39)/((float)L_40)));
		// points[Detalization + i] = Vector2.LerpUnclamped(b, c, lv);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_41 = __this->___points_0;
		int32_t L_42 = __this->___Detalization_7;
		int32_t L_43 = V_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = ___c2;
		float L_46 = V_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Vector2_LerpUnclamped_mB0B50875D4509E21FF43F4D87610333D55E6A44F_inline(L_44, L_45, L_46, NULL);
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_42, L_43))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_47);
		// for (int i = 1; i < Detalization; i++) {
		int32_t L_48 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00e8:
	{
		// for (int i = 1; i < Detalization; i++) {
		int32_t L_49 = V_16;
		int32_t L_50 = __this->___Detalization_7;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_00b8;
		}
	}
	{
		// points[aidx] = a;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_51 = __this->___points_0;
		int32_t L_52 = __this->___aidx_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = ___a0;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_53);
		// points[bidx] = b;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_54 = __this->___points_0;
		int32_t L_55 = __this->___bidx_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = ___b1;
		NullCheck(L_54);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(L_55), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_56);
		// points[cidx] = c;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_57 = __this->___points_0;
		int32_t L_58 = __this->___cidx_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = ___c2;
		NullCheck(L_57);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(L_58), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_59);
		// return;
		return;
	}

IL_0129:
	{
		// Vector2 oa = a - Center;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61 = __this->___Center_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62;
		L_62 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_60, L_61, NULL);
		V_5 = L_62;
		// Vector2 ob = b - Center;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = __this->___Center_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		L_65 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_63, L_64, NULL);
		V_6 = L_65;
		// Vector2 oc = c - Center;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66 = ___c2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = __this->___Center_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68;
		L_68 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_66, L_67, NULL);
		V_7 = L_68;
		// Radius = oa.magnitude;
		float L_69;
		L_69 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_5), NULL);
		__this->___Radius_8 = L_69;
		// angleA = Mathf.Atan2(oa.y, oa.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = V_5;
		float L_71 = L_70.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_5;
		float L_73 = L_72.___x_0;
		float L_74;
		L_74 = atan2f(L_71, L_73);
		__this->___angleA_10 = L_74;
		// angleB = Mathf.Atan2(ob.y, ob.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75 = V_6;
		float L_76 = L_75.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77 = V_6;
		float L_78 = L_77.___x_0;
		float L_79;
		L_79 = atan2f(L_76, L_78);
		__this->___angleB_11 = L_79;
		// angleC = Mathf.Atan2(oc.y, oc.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80 = V_7;
		float L_81 = L_80.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_7;
		float L_83 = L_82.___x_0;
		float L_84;
		L_84 = atan2f(L_81, L_83);
		__this->___angleC_12 = L_84;
		// float _angleA = (angleA < 0 ? 6.2831852f + angleA : angleA);
		float L_85 = __this->___angleA_10;
		if ((((float)L_85) < ((float)(0.0f))))
		{
			goto IL_01c0;
		}
	}
	{
		float L_86 = __this->___angleA_10;
		G_B11_0 = L_86;
		goto IL_01cc;
	}

IL_01c0:
	{
		float L_87 = __this->___angleA_10;
		G_B11_0 = ((float)il2cpp_codegen_add((6.28318501f), L_87));
	}

IL_01cc:
	{
		V_8 = G_B11_0;
		// float _angleB = (angleB < 0 ? 6.2831852f + angleB : angleB);
		float L_88 = __this->___angleB_11;
		if ((((float)L_88) < ((float)(0.0f))))
		{
			goto IL_01e3;
		}
	}
	{
		float L_89 = __this->___angleB_11;
		G_B14_0 = L_89;
		goto IL_01ef;
	}

IL_01e3:
	{
		float L_90 = __this->___angleB_11;
		G_B14_0 = ((float)il2cpp_codegen_add((6.28318501f), L_90));
	}

IL_01ef:
	{
		V_9 = G_B14_0;
		// float _angleC = (angleC < 0 ? 6.2831852f + angleC : angleC);
		float L_91 = __this->___angleC_12;
		if ((((float)L_91) < ((float)(0.0f))))
		{
			goto IL_0206;
		}
	}
	{
		float L_92 = __this->___angleC_12;
		G_B17_0 = L_92;
		goto IL_0212;
	}

IL_0206:
	{
		float L_93 = __this->___angleC_12;
		G_B17_0 = ((float)il2cpp_codegen_add((6.28318501f), L_93));
	}

IL_0212:
	{
		V_10 = G_B17_0;
		// _angleB = Mathf.Repeat(_angleB - _angleA, 6.2831852f);
		float L_94 = V_9;
		float L_95 = V_8;
		float L_96;
		L_96 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_subtract(L_94, L_95)), (6.28318501f), NULL);
		V_9 = L_96;
		// _angleC = Mathf.Repeat(_angleC - _angleA, 6.2831852f);
		float L_97 = V_10;
		float L_98 = V_8;
		float L_99;
		L_99 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_subtract(L_97, L_98)), (6.28318501f), NULL);
		V_10 = L_99;
		// float angularDistAB = _angleC > _angleB ? _angleB : -(6.2831852f - _angleB);
		float L_100 = V_10;
		float L_101 = V_9;
		if ((((float)L_100) > ((float)L_101)))
		{
			goto IL_0247;
		}
	}
	{
		float L_102 = V_9;
		G_B20_0 = ((-((float)il2cpp_codegen_subtract((6.28318501f), L_102))));
		goto IL_0249;
	}

IL_0247:
	{
		float L_103 = V_9;
		G_B20_0 = L_103;
	}

IL_0249:
	{
		// float angularDistBC = _angleC - _angleB;
		float L_104 = V_10;
		float L_105 = V_9;
		V_11 = ((float)il2cpp_codegen_subtract(L_104, L_105));
		// float abStep = angularDistAB / Detalization;
		int32_t L_106 = __this->___Detalization_7;
		V_12 = ((float)(G_B20_0/((float)L_106)));
		// float bcStep = angularDistBC / Detalization;
		float L_107 = V_11;
		int32_t L_108 = __this->___Detalization_7;
		V_13 = ((float)(L_107/((float)L_108)));
		// for (int i = 1; i < Detalization; i++) {
		V_18 = 1;
		goto IL_02b9;
	}

IL_026b:
	{
		// float _a = angleA + i * abStep;
		float L_109 = __this->___angleA_10;
		int32_t L_110 = V_18;
		float L_111 = V_12;
		V_19 = ((float)il2cpp_codegen_add(L_109, ((float)il2cpp_codegen_multiply(((float)L_110), L_111))));
		// points[i] = new Vector2(Mathf.Cos(_a) * Radius, Mathf.Sin(_a) * Radius) + Center;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_112 = __this->___points_0;
		int32_t L_113 = V_18;
		float L_114 = V_19;
		float L_115;
		L_115 = cosf(L_114);
		float L_116 = __this->___Radius_8;
		float L_117 = V_19;
		float L_118;
		L_118 = sinf(L_117);
		float L_119 = __this->___Radius_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_120;
		memset((&L_120), 0, sizeof(L_120));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_120), ((float)il2cpp_codegen_multiply(L_115, L_116)), ((float)il2cpp_codegen_multiply(L_118, L_119)), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_121 = __this->___Center_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_122;
		L_122 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_120, L_121, NULL);
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(L_113), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_122);
		// for (int i = 1; i < Detalization; i++) {
		int32_t L_123 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02b9:
	{
		// for (int i = 1; i < Detalization; i++) {
		int32_t L_124 = V_18;
		int32_t L_125 = __this->___Detalization_7;
		if ((((int32_t)L_124) < ((int32_t)L_125)))
		{
			goto IL_026b;
		}
	}
	{
		// for (int i = 1; i < Detalization; i++) {
		V_20 = 1;
		goto IL_031d;
	}

IL_02c8:
	{
		// float _a = angleB + i * bcStep;
		float L_126 = __this->___angleB_11;
		int32_t L_127 = V_20;
		float L_128 = V_13;
		V_21 = ((float)il2cpp_codegen_add(L_126, ((float)il2cpp_codegen_multiply(((float)L_127), L_128))));
		// points[Detalization + i] = new Vector2(Mathf.Cos(_a) * Radius, Mathf.Sin(_a) * Radius) + Center;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_129 = __this->___points_0;
		int32_t L_130 = __this->___Detalization_7;
		int32_t L_131 = V_20;
		float L_132 = V_21;
		float L_133;
		L_133 = cosf(L_132);
		float L_134 = __this->___Radius_8;
		float L_135 = V_21;
		float L_136;
		L_136 = sinf(L_135);
		float L_137 = __this->___Radius_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_138;
		memset((&L_138), 0, sizeof(L_138));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_138), ((float)il2cpp_codegen_multiply(L_133, L_134)), ((float)il2cpp_codegen_multiply(L_136, L_137)), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_139 = __this->___Center_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_140;
		L_140 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_138, L_139, NULL);
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_130, L_131))), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_140);
		// for (int i = 1; i < Detalization; i++) {
		int32_t L_141 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_031d:
	{
		// for (int i = 1; i < Detalization; i++) {
		int32_t L_142 = V_20;
		int32_t L_143 = __this->___Detalization_7;
		if ((((int32_t)L_142) < ((int32_t)L_143)))
		{
			goto IL_02c8;
		}
	}
	{
		// points[aidx] = a;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_144 = __this->___points_0;
		int32_t L_145 = __this->___aidx_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_146 = ___a0;
		NullCheck(L_144);
		(L_144)->SetAt(static_cast<il2cpp_array_size_t>(L_145), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_146);
		// points[bidx] = b;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_147 = __this->___points_0;
		int32_t L_148 = __this->___bidx_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_149 = ___b1;
		NullCheck(L_147);
		(L_147)->SetAt(static_cast<il2cpp_array_size_t>(L_148), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_149);
		// points[cidx] = c;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_150 = __this->___points_0;
		int32_t L_151 = __this->___cidx_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_152 = ___c2;
		NullCheck(L_150);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(L_151), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_152);
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.ArcSegment::DrawDebug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArcSegment_DrawDebug_m1A79D0FE8ECA3E581B7872BE218980B543F111EE (ArcSegment_t923B1379845A603ABAE8C75954ECE467E666C3AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.DrawLine(Center, A, Color.yellow);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___Center_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = __this->___A_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_2, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_1, L_3, L_4, NULL);
		// Debug.DrawLine(Center, C, Color.blue);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = __this->___Center_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___C_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_7, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_6, L_8, L_9, NULL);
		// for (int i = 0; i < points.Length - 1; i++) {
		V_0 = 0;
		goto IL_0076;
	}

IL_0044:
	{
		// Debug.DrawLine(points[i], points[i + 1], Color.blue);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_10 = __this->___points_0;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_13, NULL);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_15 = __this->___points_0;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_18, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m873C7065638CFE611C48F429742690508044B75A(L_14, L_19, L_20, NULL);
		// for (int i = 0; i < points.Length - 1; i++) {
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0076:
	{
		// for (int i = 0; i < points.Length - 1; i++) {
		int32_t L_22 = V_0;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_23 = __this->___points_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), 1)))))
		{
			goto IL_0044;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.Triangle2d::.ctor(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle2d__ctor_m91262B9ED1C39D5050368277FE13C1DE2CCD0C21 (Triangle2d_t5046FEE31532C61D5C03507D4C536B56F4F504DB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____b1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____c2, const RuntimeMethod* method) 
{
	{
		// a = _a;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ____a0;
		__this->___a_0 = L_0;
		// b = _b;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ____b1;
		__this->___b_1 = L_1;
		// c = _c;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ____c2;
		__this->___c_2 = L_2;
		// v0 = c - a;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___c_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = __this->___a_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_3, L_4, NULL);
		__this->___v0_3 = L_5;
		// v1 = b - a;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___b_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___a_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_6, L_7, NULL);
		__this->___v1_4 = L_8;
		// dot00 = Vector2.Dot(v0, v0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = __this->___v0_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___v0_3;
		float L_11;
		L_11 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_9, L_10, NULL);
		__this->___dot00_5 = L_11;
		// dot01 = Vector2.Dot(v0, v1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = __this->___v0_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = __this->___v1_4;
		float L_14;
		L_14 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_12, L_13, NULL);
		__this->___dot01_6 = L_14;
		// dot11 = Vector2.Dot(v1, v1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = __this->___v1_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = __this->___v1_4;
		float L_17;
		L_17 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_15, L_16, NULL);
		__this->___dot11_7 = L_17;
		// invDenom = 1f / (dot00 * dot11 - dot01 * dot01);
		float L_18 = __this->___dot00_5;
		float L_19 = __this->___dot11_7;
		float L_20 = __this->___dot01_6;
		float L_21 = __this->___dot01_6;
		__this->___invDenom_8 = ((float)((1.0f)/((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_18, L_19)), ((float)il2cpp_codegen_multiply(L_20, L_21))))));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Triangle2d__ctor_m91262B9ED1C39D5050368277FE13C1DE2CCD0C21_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____b1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____c2, const RuntimeMethod* method)
{
	Triangle2d_t5046FEE31532C61D5C03507D4C536B56F4F504DB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Triangle2d_t5046FEE31532C61D5C03507D4C536B56F4F504DB*>(__this + _offset);
	Triangle2d__ctor_m91262B9ED1C39D5050368277FE13C1DE2CCD0C21(_thisAdjusted, ____a0, ____b1, ____c2, method);
}
// System.Boolean ExtendedPrimitives_11.Internal.Triangle2d::PointTest(UnityEngine.Vector2,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangle2d_PointTest_m373E8222245D8A51DCDD1ED61C40188243C0531C (Triangle2d_t5046FEE31532C61D5C03507D4C536B56F4F504DB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___bary1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Vector2 v2 = p - a;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___p0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___a_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// float dot02 = Vector2.Dot(v0, v2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___v0_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		float L_5;
		L_5 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_3, L_4, NULL);
		V_1 = L_5;
		// float dot12 = Vector2.Dot(v1, v2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___v1_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		float L_8;
		L_8 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_6, L_7, NULL);
		V_2 = L_8;
		// bary.z = (dot11 * dot02 - dot01 * dot12) * invDenom; // u
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = ___bary1;
		float L_10 = __this->___dot11_7;
		float L_11 = V_1;
		float L_12 = __this->___dot01_6;
		float L_13 = V_2;
		float L_14 = __this->___invDenom_8;
		L_9->___z_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_10, L_11)), ((float)il2cpp_codegen_multiply(L_12, L_13)))), L_14));
		// bary.y = (dot00 * dot12 - dot01 * dot02) * invDenom; // v
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = ___bary1;
		float L_16 = __this->___dot00_5;
		float L_17 = V_2;
		float L_18 = __this->___dot01_6;
		float L_19 = V_1;
		float L_20 = __this->___invDenom_8;
		L_15->___y_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), L_20));
		// bary.x = 1f - (bary.z + bary.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = ___bary1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = ___bary1;
		float L_23 = L_22->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = ___bary1;
		float L_25 = L_24->___y_3;
		L_21->___x_2 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_add(L_23, L_25))));
		// return (bary.z >= 0) && (bary.y >= 0) && (bary.z + bary.y < 1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = ___bary1;
		float L_27 = L_26->___z_4;
		if ((!(((float)L_27) >= ((float)(0.0f)))))
		{
			goto IL_00ab;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = ___bary1;
		float L_29 = L_28->___y_3;
		if ((!(((float)L_29) >= ((float)(0.0f)))))
		{
			goto IL_00ab;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = ___bary1;
		float L_31 = L_30->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = ___bary1;
		float L_33 = L_32->___y_3;
		return (bool)((((float)((float)il2cpp_codegen_add(L_31, L_33))) < ((float)(1.0f)))? 1 : 0);
	}

IL_00ab:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Triangle2d_PointTest_m373E8222245D8A51DCDD1ED61C40188243C0531C_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___bary1, const RuntimeMethod* method)
{
	Triangle2d_t5046FEE31532C61D5C03507D4C536B56F4F504DB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Triangle2d_t5046FEE31532C61D5C03507D4C536B56F4F504DB*>(__this + _offset);
	bool _returnValue;
	_returnValue = Triangle2d_PointTest_m373E8222245D8A51DCDD1ED61C40188243C0531C(_thisAdjusted, ___p0, ___bary1, method);
	return _returnValue;
}
// System.Boolean ExtendedPrimitives_11.Internal.Triangle2d::PointTest(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangle2d_PointTest_m3D71540A5EECD8961737004175DCC3721FF7DF2B (Triangle2d_t5046FEE31532C61D5C03507D4C536B56F4F504DB* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// Vector2 v2 = p - a;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___p0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___a_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		V_1 = L_2;
		// float dot02 = Vector2.Dot(v0, v2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___v0_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_1;
		float L_5;
		L_5 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_3, L_4, NULL);
		V_2 = L_5;
		// float dot12 = Vector2.Dot(v1, v2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = __this->___v1_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_1;
		float L_8;
		L_8 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_6, L_7, NULL);
		V_3 = L_8;
		// _bary.z = (dot11 * dot02 - dot01 * dot12) * invDenom; // u
		float L_9 = __this->___dot11_7;
		float L_10 = V_2;
		float L_11 = __this->___dot01_6;
		float L_12 = V_3;
		float L_13 = __this->___invDenom_8;
		(&V_0)->___z_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_10)), ((float)il2cpp_codegen_multiply(L_11, L_12)))), L_13));
		// _bary.y = (dot00 * dot12 - dot01 * dot02) * invDenom; // v
		float L_14 = __this->___dot00_5;
		float L_15 = V_3;
		float L_16 = __this->___dot01_6;
		float L_17 = V_2;
		float L_18 = __this->___invDenom_8;
		(&V_0)->___y_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_14, L_15)), ((float)il2cpp_codegen_multiply(L_16, L_17)))), L_18));
		// _bary.x = 1f - (_bary.z + _bary.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_0;
		float L_20 = L_19.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_0;
		float L_22 = L_21.___y_3;
		(&V_0)->___x_2 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_add(L_20, L_22))));
		// return (_bary.z >= 0) && (_bary.y >= 0) && (_bary.z + _bary.y < 1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		float L_24 = L_23.___z_4;
		if ((!(((float)L_24) >= ((float)(0.0f)))))
		{
			goto IL_00ae;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		float L_26 = L_25.___y_3;
		if ((!(((float)L_26) >= ((float)(0.0f)))))
		{
			goto IL_00ae;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_0;
		float L_28 = L_27.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		float L_30 = L_29.___y_3;
		return (bool)((((float)((float)il2cpp_codegen_add(L_28, L_30))) < ((float)(1.0f)))? 1 : 0);
	}

IL_00ae:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Triangle2d_PointTest_m3D71540A5EECD8961737004175DCC3721FF7DF2B_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___p0, const RuntimeMethod* method)
{
	Triangle2d_t5046FEE31532C61D5C03507D4C536B56F4F504DB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Triangle2d_t5046FEE31532C61D5C03507D4C536B56F4F504DB*>(__this + _offset);
	bool _returnValue;
	_returnValue = Triangle2d_PointTest_m3D71540A5EECD8961737004175DCC3721FF7DF2B(_thisAdjusted, ___p0, method);
	return _returnValue;
}
// System.Boolean ExtendedPrimitives_11.Internal.Triangle2d::PointTest(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangle2d_PointTest_m1D98CA57520C7EF2C1A2C1A8E454ACB758CCD867 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pa0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pb1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pc2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pp3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ____bary4, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// if (pa.x < pp.x && pb.x < pp.x && pc.x < pp.x) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___pa0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___pp3;
		float L_3 = L_2.___x_0;
		if ((!(((float)L_1) < ((float)L_3))))
		{
			goto IL_002c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___pb1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___pp3;
		float L_7 = L_6.___x_0;
		if ((!(((float)L_5) < ((float)L_7))))
		{
			goto IL_002c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___pc2;
		float L_9 = L_8.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___pp3;
		float L_11 = L_10.___x_0;
		if ((!(((float)L_9) < ((float)L_11))))
		{
			goto IL_002c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002c:
	{
		// if (pa.x > pp.x && pb.x > pp.x && pc.x > pp.x) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___pa0;
		float L_13 = L_12.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___pp3;
		float L_15 = L_14.___x_0;
		if ((!(((float)L_13) > ((float)L_15))))
		{
			goto IL_0058;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___pb1;
		float L_17 = L_16.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___pp3;
		float L_19 = L_18.___x_0;
		if ((!(((float)L_17) > ((float)L_19))))
		{
			goto IL_0058;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = ___pc2;
		float L_21 = L_20.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = ___pp3;
		float L_23 = L_22.___x_0;
		if ((!(((float)L_21) > ((float)L_23))))
		{
			goto IL_0058;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0058:
	{
		// if (pa.y > 0 && pb.y > 0 && pc.y > 0) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = ___pa0;
		float L_25 = L_24.___y_1;
		if ((!(((float)L_25) > ((float)(0.0f)))))
		{
			goto IL_0081;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ___pb1;
		float L_27 = L_26.___y_1;
		if ((!(((float)L_27) > ((float)(0.0f)))))
		{
			goto IL_0081;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = ___pc2;
		float L_29 = L_28.___y_1;
		if ((!(((float)L_29) > ((float)(0.0f)))))
		{
			goto IL_0081;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0081:
	{
		// if (pa.y < pp.y && pb.y < pp.y && pc.y < pp.y) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = ___pa0;
		float L_31 = L_30.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = ___pp3;
		float L_33 = L_32.___y_1;
		if ((!(((float)L_31) < ((float)L_33))))
		{
			goto IL_00ad;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = ___pb1;
		float L_35 = L_34.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = ___pp3;
		float L_37 = L_36.___y_1;
		if ((!(((float)L_35) < ((float)L_37))))
		{
			goto IL_00ad;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = ___pc2;
		float L_39 = L_38.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = ___pp3;
		float L_41 = L_40.___y_1;
		if ((!(((float)L_39) < ((float)L_41))))
		{
			goto IL_00ad;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00ad:
	{
		// if (((pc.x - pa.x) * (pb.y - pa.y) - (pc.y - pa.y) * (pb.x - pa.x)) < 0) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = ___pc2;
		float L_43 = L_42.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = ___pa0;
		float L_45 = L_44.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = ___pb1;
		float L_47 = L_46.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = ___pa0;
		float L_49 = L_48.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50 = ___pc2;
		float L_51 = L_50.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = ___pa0;
		float L_53 = L_52.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = ___pb1;
		float L_55 = L_54.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56 = ___pa0;
		float L_57 = L_56.___x_0;
		if ((!(((float)((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_43, L_45)), ((float)il2cpp_codegen_subtract(L_47, L_49)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_51, L_53)), ((float)il2cpp_codegen_subtract(L_55, L_57))))))) < ((float)(0.0f)))))
		{
			goto IL_00ed;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00ed:
	{
		// Vector2 _v0 = pc - pa;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = ___pc2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = ___pa0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60;
		L_60 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_58, L_59, NULL);
		// Vector2 _v1 = pb - pa;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61 = ___pb1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = ___pa0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63;
		L_63 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_61, L_62, NULL);
		V_0 = L_63;
		// Vector2 _v2 = pp - pa;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = ___pp3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65 = ___pa0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		L_66 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_64, L_65, NULL);
		V_1 = L_66;
		// float _dot00 = Vector2.Dot(_v0, _v0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = L_60;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68 = L_67;
		float L_69;
		L_69 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_68, L_68, NULL);
		V_2 = L_69;
		// float _dot01 = Vector2.Dot(_v0, _v1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = L_67;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71 = V_0;
		float L_72;
		L_72 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_70, L_71, NULL);
		V_3 = L_72;
		// float _dot11 = Vector2.Dot(_v1, _v1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74 = V_0;
		float L_75;
		L_75 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_73, L_74, NULL);
		V_4 = L_75;
		// float _invDenom = 1f / (_dot00 * _dot11 - _dot01 * _dot01);
		float L_76 = V_2;
		float L_77 = V_4;
		float L_78 = V_3;
		float L_79 = V_3;
		V_5 = ((float)((1.0f)/((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_76, L_77)), ((float)il2cpp_codegen_multiply(L_78, L_79))))));
		// float _dot02 = Vector2.Dot(_v0, _v2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80 = V_1;
		float L_81;
		L_81 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_70, L_80, NULL);
		V_6 = L_81;
		// float _dot12 = Vector2.Dot(_v1, _v2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83 = V_1;
		float L_84;
		L_84 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_82, L_83, NULL);
		V_7 = L_84;
		// _bary.z = (_dot11 * _dot02 - _dot01 * _dot12) * _invDenom;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_85 = ____bary4;
		float L_86 = V_4;
		float L_87 = V_6;
		float L_88 = V_3;
		float L_89 = V_7;
		float L_90 = V_5;
		L_85->___z_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_86, L_87)), ((float)il2cpp_codegen_multiply(L_88, L_89)))), L_90));
		// _bary.y = (_dot00 * _dot12 - _dot01 * _dot02) * _invDenom;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_91 = ____bary4;
		float L_92 = V_2;
		float L_93 = V_7;
		float L_94 = V_3;
		float L_95 = V_6;
		float L_96 = V_5;
		L_91->___y_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_92, L_93)), ((float)il2cpp_codegen_multiply(L_94, L_95)))), L_96));
		// _bary.x = 1f - (_bary.z + _bary.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_97 = ____bary4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_98 = ____bary4;
		float L_99 = L_98->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_100 = ____bary4;
		float L_101 = L_100->___y_3;
		L_97->___x_2 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_add(L_99, L_101))));
		// return (_bary.z >= 0) && (_bary.y >= 0) && (_bary.z + _bary.y < 1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_102 = ____bary4;
		float L_103 = L_102->___z_4;
		if ((!(((float)L_103) >= ((float)(0.0f)))))
		{
			goto IL_01b4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_104 = ____bary4;
		float L_105 = L_104->___y_3;
		if ((!(((float)L_105) >= ((float)(0.0f)))))
		{
			goto IL_01b4;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_106 = ____bary4;
		float L_107 = L_106->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_108 = ____bary4;
		float L_109 = L_108->___y_3;
		return (bool)((((float)((float)il2cpp_codegen_add(L_107, L_109))) < ((float)(1.0f)))? 1 : 0);
	}

IL_01b4:
	{
		return (bool)0;
	}
}
// System.Boolean ExtendedPrimitives_11.Internal.Triangle2d::PointTestDoublesided(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangle2d_PointTestDoublesided_m74486E52F84D57BDF8465975324BCB44D453F29B (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pa0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pb1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pc2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pp3, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ____bary4, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	{
		// if (pa.x < pp.x && pb.x < pp.x && pc.x < pp.x) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___pa0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___pp3;
		float L_3 = L_2.___x_0;
		if ((!(((float)L_1) < ((float)L_3))))
		{
			goto IL_002c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___pb1;
		float L_5 = L_4.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___pp3;
		float L_7 = L_6.___x_0;
		if ((!(((float)L_5) < ((float)L_7))))
		{
			goto IL_002c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___pc2;
		float L_9 = L_8.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___pp3;
		float L_11 = L_10.___x_0;
		if ((!(((float)L_9) < ((float)L_11))))
		{
			goto IL_002c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002c:
	{
		// if (pa.x > pp.x && pb.x > pp.x && pc.x > pp.x) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___pa0;
		float L_13 = L_12.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___pp3;
		float L_15 = L_14.___x_0;
		if ((!(((float)L_13) > ((float)L_15))))
		{
			goto IL_0058;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___pb1;
		float L_17 = L_16.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___pp3;
		float L_19 = L_18.___x_0;
		if ((!(((float)L_17) > ((float)L_19))))
		{
			goto IL_0058;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = ___pc2;
		float L_21 = L_20.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = ___pp3;
		float L_23 = L_22.___x_0;
		if ((!(((float)L_21) > ((float)L_23))))
		{
			goto IL_0058;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0058:
	{
		// if (pa.y > 0 && pb.y > 0 && pc.y > 0) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = ___pa0;
		float L_25 = L_24.___y_1;
		if ((!(((float)L_25) > ((float)(0.0f)))))
		{
			goto IL_0081;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ___pb1;
		float L_27 = L_26.___y_1;
		if ((!(((float)L_27) > ((float)(0.0f)))))
		{
			goto IL_0081;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = ___pc2;
		float L_29 = L_28.___y_1;
		if ((!(((float)L_29) > ((float)(0.0f)))))
		{
			goto IL_0081;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0081:
	{
		// if (pa.y < pp.y && pb.y < pp.y && pc.y < pp.y) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = ___pa0;
		float L_31 = L_30.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = ___pp3;
		float L_33 = L_32.___y_1;
		if ((!(((float)L_31) < ((float)L_33))))
		{
			goto IL_00ad;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = ___pb1;
		float L_35 = L_34.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = ___pp3;
		float L_37 = L_36.___y_1;
		if ((!(((float)L_35) < ((float)L_37))))
		{
			goto IL_00ad;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = ___pc2;
		float L_39 = L_38.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = ___pp3;
		float L_41 = L_40.___y_1;
		if ((!(((float)L_39) < ((float)L_41))))
		{
			goto IL_00ad;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_00ad:
	{
		// Vector2 _v0 = pc - pa;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = ___pc2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = ___pa0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_42, L_43, NULL);
		// Vector2 _v1 = pb - pa;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = ___pb1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = ___pa0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_45, L_46, NULL);
		V_0 = L_47;
		// Vector2 _v2 = pp - pa;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = ___pp3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = ___pa0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_50;
		L_50 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_48, L_49, NULL);
		V_1 = L_50;
		// float _dot00 = Vector2.Dot(_v0, _v0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = L_44;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = L_51;
		float L_53;
		L_53 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_52, L_52, NULL);
		V_2 = L_53;
		// float _dot01 = Vector2.Dot(_v0, _v1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = L_51;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = V_0;
		float L_56;
		L_56 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_54, L_55, NULL);
		V_3 = L_56;
		// float _dot11 = Vector2.Dot(_v1, _v1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = V_0;
		float L_59;
		L_59 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_57, L_58, NULL);
		V_4 = L_59;
		// float _invDenom = 1f / (_dot00 * _dot11 - _dot01 * _dot01);
		float L_60 = V_2;
		float L_61 = V_4;
		float L_62 = V_3;
		float L_63 = V_3;
		V_5 = ((float)((1.0f)/((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_60, L_61)), ((float)il2cpp_codegen_multiply(L_62, L_63))))));
		// float _dot02 = Vector2.Dot(_v0, _v2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = V_1;
		float L_65;
		L_65 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_54, L_64, NULL);
		V_6 = L_65;
		// float _dot12 = Vector2.Dot(_v1, _v2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = V_1;
		float L_68;
		L_68 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_66, L_67, NULL);
		V_7 = L_68;
		// _bary.z = (_dot11 * _dot02 - _dot01 * _dot12) * _invDenom;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_69 = ____bary4;
		float L_70 = V_4;
		float L_71 = V_6;
		float L_72 = V_3;
		float L_73 = V_7;
		float L_74 = V_5;
		L_69->___z_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_70, L_71)), ((float)il2cpp_codegen_multiply(L_72, L_73)))), L_74));
		// _bary.y = (_dot00 * _dot12 - _dot01 * _dot02) * _invDenom;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_75 = ____bary4;
		float L_76 = V_2;
		float L_77 = V_7;
		float L_78 = V_3;
		float L_79 = V_6;
		float L_80 = V_5;
		L_75->___y_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_76, L_77)), ((float)il2cpp_codegen_multiply(L_78, L_79)))), L_80));
		// _bary.x = 1f - (_bary.z + _bary.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_81 = ____bary4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_82 = ____bary4;
		float L_83 = L_82->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_84 = ____bary4;
		float L_85 = L_84->___y_3;
		L_81->___x_2 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_add(L_83, L_85))));
		// return (_bary.z >= 0) && (_bary.y >= 0) && (_bary.z + _bary.y < 1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_86 = ____bary4;
		float L_87 = L_86->___z_4;
		if ((!(((float)L_87) >= ((float)(0.0f)))))
		{
			goto IL_0174;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_88 = ____bary4;
		float L_89 = L_88->___y_3;
		if ((!(((float)L_89) >= ((float)(0.0f)))))
		{
			goto IL_0174;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_90 = ____bary4;
		float L_91 = L_90->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_92 = ____bary4;
		float L_93 = L_92->___y_3;
		return (bool)((((float)((float)il2cpp_codegen_add(L_91, L_93))) < ((float)(1.0f)))? 1 : 0);
	}

IL_0174:
	{
		return (bool)0;
	}
}
// UnityEngine.Vector3 ExtendedPrimitives_11.Internal.Triangle2d::InscribedCircle(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Triangle2d_InscribedCircle_m3578CCD670DA0A2A87E482EDCF6E688CD81F32D5 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___c2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// Vector2 aBisectorsDir = Vector2.LerpUnclamped((c - a).normalized, (b - a).normalized, 0.5f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___c2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_0, L_1, NULL);
		V_3 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_3), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_4, L_5, NULL);
		V_3 = L_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_3), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_LerpUnclamped_mB0B50875D4509E21FF43F4D87610333D55E6A44F_inline(L_3, L_7, (0.5f), NULL);
		V_0 = L_8;
		// Vector2 bBisectorsDir = Vector2.LerpUnclamped((c - b).normalized, (a - b).normalized, 0.5f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___c2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_9, L_10, NULL);
		V_3 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_3), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_13, L_14, NULL);
		V_3 = L_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_3), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_LerpUnclamped_mB0B50875D4509E21FF43F4D87610333D55E6A44F_inline(L_12, L_16, (0.5f), NULL);
		V_1 = L_17;
		// Vector2 center = new Vector2();
		il2cpp_codegen_initobj((&V_2), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// if (Extension.LineLineItersection(a, aBisectorsDir, b, bBisectorsDir, ref center)) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_1;
		bool L_22;
		L_22 = Extension_LineLineItersection_mB507787B3409ED765BB6C6C9AA01E5AA004BFACE(L_18, L_19, L_20, L_21, (&V_2), NULL);
		if (!L_22)
		{
			goto IL_008e;
		}
	}
	{
		// float lv = 0;
		V_4 = (0.0f);
		// float radius = Edge2d.GetDistance(a, b, center, ref lv);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_2;
		float L_26;
		L_26 = Edge2d_GetDistance_mCD5F8847BC5E73188BAE5A13F1FA76EE2C84D54F(L_23, L_24, L_25, (&V_4), NULL);
		V_5 = L_26;
		// return new Vector3(center.x, center.y, radius);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_2;
		float L_28 = L_27.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_2;
		float L_30 = L_29.___y_1;
		float L_31 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), L_28, L_30, L_31, /*hidden argument*/NULL);
		return L_32;
	}

IL_008e:
	{
		// return new Vector3(a.x, a.y, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = ___a0;
		float L_34 = L_33.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = ___a0;
		float L_36 = L_35.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_37), L_34, L_36, (0.0f), /*hidden argument*/NULL);
		return L_37;
	}
}
// System.Boolean ExtendedPrimitives_11.Internal.Triangle2d::IsClockwise(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Triangle2d_IsClockwise_m5B90012A2AE29FE014C50686F235206BF99C80BD (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pa0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pb1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pc2, const RuntimeMethod* method) 
{
	{
		// return ((pc.x - pa.x) * (pb.y - pa.y) - (pc.y - pa.y) * (pb.x - pa.x)) >= 0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___pc2;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___pa0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___pb1;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___pa0;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___pc2;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___pa0;
		float L_11 = L_10.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___pb1;
		float L_13 = L_12.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___pa0;
		float L_15 = L_14.___x_0;
		return (bool)((((int32_t)((!(((float)((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15))))))) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int32 ExtendedPrimitives_11.Internal.Triangle2d::Clockwise(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Triangle2d_Clockwise_m31666E2225915D293832BC8DEDA6B3006BAE4B45 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pa0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pb1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pc2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float num = ((pc.x - pa.x) * (pb.y - pa.y) - (pc.y - pa.y) * (pb.x - pa.x));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___pc2;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___pa0;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___pb1;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___pa0;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___pc2;
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___pa0;
		float L_11 = L_10.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = ___pb1;
		float L_13 = L_12.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___pa0;
		float L_15 = L_14.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_9, L_11)), ((float)il2cpp_codegen_subtract(L_13, L_15))))));
		// if (Extension.ApproximatelyZero(num)) {
		float L_16 = V_0;
		bool L_17;
		L_17 = Extension_ApproximatelyZero_m23CD442F2C7EB64193FBD963840479DA8A4349B3(L_16, NULL);
		if (!L_17)
		{
			goto IL_0042;
		}
	}
	{
		// return 0;
		return 0;
	}

IL_0042:
	{
		// if (num < 0) {
		float L_18 = V_0;
		if ((!(((float)L_18) < ((float)(0.0f)))))
		{
			goto IL_004c;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_004c:
	{
		// return 1;
		return 1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ExtendedPrimitives_11.Internal.OverrideFloatParam
IL2CPP_EXTERN_C void OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745_marshal_pinvoke(const OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745& unmarshaled, OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745_marshaled_pinvoke& marshaled)
{
	marshaled.___Enabled_0 = static_cast<int32_t>(unmarshaled.___Enabled_0);
	marshaled.___Value_1 = unmarshaled.___Value_1;
}
IL2CPP_EXTERN_C void OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745_marshal_pinvoke_back(const OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745_marshaled_pinvoke& marshaled, OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745& unmarshaled)
{
	bool unmarshaledEnabled_temp_0 = false;
	unmarshaledEnabled_temp_0 = static_cast<bool>(marshaled.___Enabled_0);
	unmarshaled.___Enabled_0 = unmarshaledEnabled_temp_0;
	float unmarshaledValue_temp_1 = 0.0f;
	unmarshaledValue_temp_1 = marshaled.___Value_1;
	unmarshaled.___Value_1 = unmarshaledValue_temp_1;
}
// Conversion method for clean up from marshalling of: ExtendedPrimitives_11.Internal.OverrideFloatParam
IL2CPP_EXTERN_C void OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745_marshal_pinvoke_cleanup(OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ExtendedPrimitives_11.Internal.OverrideFloatParam
IL2CPP_EXTERN_C void OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745_marshal_com(const OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745& unmarshaled, OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745_marshaled_com& marshaled)
{
	marshaled.___Enabled_0 = static_cast<int32_t>(unmarshaled.___Enabled_0);
	marshaled.___Value_1 = unmarshaled.___Value_1;
}
IL2CPP_EXTERN_C void OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745_marshal_com_back(const OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745_marshaled_com& marshaled, OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745& unmarshaled)
{
	bool unmarshaledEnabled_temp_0 = false;
	unmarshaledEnabled_temp_0 = static_cast<bool>(marshaled.___Enabled_0);
	unmarshaled.___Enabled_0 = unmarshaledEnabled_temp_0;
	float unmarshaledValue_temp_1 = 0.0f;
	unmarshaledValue_temp_1 = marshaled.___Value_1;
	unmarshaled.___Value_1 = unmarshaledValue_temp_1;
}
// Conversion method for clean up from marshalling of: ExtendedPrimitives_11.Internal.OverrideFloatParam
IL2CPP_EXTERN_C void OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745_marshal_com_cleanup(OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745_marshaled_com& marshaled)
{
}
// System.Void ExtendedPrimitives_11.Internal.OverrideFloatParam::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverrideFloatParam__ctor_m6DA6682657FC9174404508C92FD6212DE9CAAF59 (OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745* __this, float ___f0, const RuntimeMethod* method) 
{
	{
		// Enabled = false;
		__this->___Enabled_0 = (bool)0;
		// Value = f;
		float L_0 = ___f0;
		__this->___Value_1 = L_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void OverrideFloatParam__ctor_m6DA6682657FC9174404508C92FD6212DE9CAAF59_AdjustorThunk (RuntimeObject* __this, float ___f0, const RuntimeMethod* method)
{
	OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745*>(__this + _offset);
	OverrideFloatParam__ctor_m6DA6682657FC9174404508C92FD6212DE9CAAF59(_thisAdjusted, ___f0, method);
}
// System.Void ExtendedPrimitives_11.Internal.OverrideFloatParam::ClampZero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverrideFloatParam_ClampZero_m395647F1DDF1458B63AC0223865C5A900BFF5E05 (OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745* __this, const RuntimeMethod* method) 
{
	OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745* G_B2_0 = NULL;
	OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745* G_B3_1 = NULL;
	{
		// Value = Value < 0 ? 0 : Value;
		float L_0 = __this->___Value_1;
		G_B1_0 = __this;
		if ((((float)L_0) < ((float)(0.0f))))
		{
			G_B2_0 = __this;
			goto IL_0016;
		}
	}
	{
		float L_1 = __this->___Value_1;
		G_B3_0 = L_1;
		G_B3_1 = G_B1_0;
		goto IL_001b;
	}

IL_0016:
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B2_0;
	}

IL_001b:
	{
		G_B3_1->___Value_1 = G_B3_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void OverrideFloatParam_ClampZero_m395647F1DDF1458B63AC0223865C5A900BFF5E05_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745*>(__this + _offset);
	OverrideFloatParam_ClampZero_m395647F1DDF1458B63AC0223865C5A900BFF5E05(_thisAdjusted, method);
}
// System.Single ExtendedPrimitives_11.Internal.OverrideFloatParam::op_Implicit(ExtendedPrimitives_11.Internal.OverrideFloatParam)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OverrideFloatParam_op_Implicit_m6797BB56C7AFC64E9C8BDABC9F9D7BAFDF590A71 (OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745 ___f0, const RuntimeMethod* method) 
{
	{
		// return f.Value;
		OverrideFloatParam_tF46286AF11C66B6BAB2FC69A00E4B06CA53F0745 L_0 = ___f0;
		float L_1 = L_0.___Value_1;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.A_OverrideFloatParam::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A_OverrideFloatParam__ctor_mC7E512EAD340FC8DB649FDEDCCF612CA2CB68FCD (A_OverrideFloatParam_tA5E7612A3D04A50C79AD370A177226803EDACF69* __this, String_t* ___tooltip0, const RuntimeMethod* method) 
{
	{
		// public A_OverrideFloatParam(string tooltip) {
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// Tooltip = tooltip;
		String_t* L_0 = ___tooltip0;
		__this->___Tooltip_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tooltip_0), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: ExtendedPrimitives_11.Internal.ExpBool
IL2CPP_EXTERN_C void ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F_marshal_pinvoke(const ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F& unmarshaled, ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F_marshaled_pinvoke& marshaled)
{
	marshaled.___prevValue_0 = static_cast<int32_t>(unmarshaled.___prevValue_0);
	marshaled.___Value_1 = static_cast<int32_t>(unmarshaled.___Value_1);
}
IL2CPP_EXTERN_C void ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F_marshal_pinvoke_back(const ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F_marshaled_pinvoke& marshaled, ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F& unmarshaled)
{
	bool unmarshaledprevValue_temp_0 = false;
	unmarshaledprevValue_temp_0 = static_cast<bool>(marshaled.___prevValue_0);
	unmarshaled.___prevValue_0 = unmarshaledprevValue_temp_0;
	bool unmarshaledValue_temp_1 = false;
	unmarshaledValue_temp_1 = static_cast<bool>(marshaled.___Value_1);
	unmarshaled.___Value_1 = unmarshaledValue_temp_1;
}
// Conversion method for clean up from marshalling of: ExtendedPrimitives_11.Internal.ExpBool
IL2CPP_EXTERN_C void ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F_marshal_pinvoke_cleanup(ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: ExtendedPrimitives_11.Internal.ExpBool
IL2CPP_EXTERN_C void ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F_marshal_com(const ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F& unmarshaled, ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F_marshaled_com& marshaled)
{
	marshaled.___prevValue_0 = static_cast<int32_t>(unmarshaled.___prevValue_0);
	marshaled.___Value_1 = static_cast<int32_t>(unmarshaled.___Value_1);
}
IL2CPP_EXTERN_C void ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F_marshal_com_back(const ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F_marshaled_com& marshaled, ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F& unmarshaled)
{
	bool unmarshaledprevValue_temp_0 = false;
	unmarshaledprevValue_temp_0 = static_cast<bool>(marshaled.___prevValue_0);
	unmarshaled.___prevValue_0 = unmarshaledprevValue_temp_0;
	bool unmarshaledValue_temp_1 = false;
	unmarshaledValue_temp_1 = static_cast<bool>(marshaled.___Value_1);
	unmarshaled.___Value_1 = unmarshaledValue_temp_1;
}
// Conversion method for clean up from marshalling of: ExtendedPrimitives_11.Internal.ExpBool
IL2CPP_EXTERN_C void ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F_marshal_com_cleanup(ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F_marshaled_com& marshaled)
{
}
// System.Void ExtendedPrimitives_11.Internal.ExpBool::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpBool__ctor_mB596E89ABA805238DD3561C145501210FF7D0545 (ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F* __this, bool ___val0, const RuntimeMethod* method) 
{
	{
		// Value = val;
		bool L_0 = ___val0;
		__this->___Value_1 = L_0;
		// prevValue = !val;
		bool L_1 = ___val0;
		__this->___prevValue_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpBool__ctor_mB596E89ABA805238DD3561C145501210FF7D0545_AdjustorThunk (RuntimeObject* __this, bool ___val0, const RuntimeMethod* method)
{
	ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F*>(__this + _offset);
	ExpBool__ctor_mB596E89ABA805238DD3561C145501210FF7D0545(_thisAdjusted, ___val0, method);
}
// System.Void ExtendedPrimitives_11.Internal.ExpBool::Set(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpBool_Set_mB6780033DB45F761DEBFF3A28E35B923B9BAF6F3 (ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F* __this, bool ___val0, const RuntimeMethod* method) 
{
	{
		// Value = val;
		bool L_0 = ___val0;
		__this->___Value_1 = L_0;
		// prevValue = val;
		bool L_1 = ___val0;
		__this->___prevValue_0 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpBool_Set_mB6780033DB45F761DEBFF3A28E35B923B9BAF6F3_AdjustorThunk (RuntimeObject* __this, bool ___val0, const RuntimeMethod* method)
{
	ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F*>(__this + _offset);
	ExpBool_Set_mB6780033DB45F761DEBFF3A28E35B923B9BAF6F3(_thisAdjusted, ___val0, method);
}
// System.Boolean ExtendedPrimitives_11.Internal.ExpBool::get_isChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpBool_get_isChanged_m60617B25CB0281DB80EC5C67D75574B498E32E86 (ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool result = false;
		V_0 = (bool)0;
		// if (Value != prevValue) {
		bool L_0 = __this->___Value_1;
		bool L_1 = __this->___prevValue_0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		// prevValue = Value;
		bool L_2 = __this->___Value_1;
		__this->___prevValue_0 = L_2;
		// result = true;
		V_0 = (bool)1;
	}

IL_001e:
	{
		// return result;
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool ExpBool_get_isChanged_m60617B25CB0281DB80EC5C67D75574B498E32E86_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F*>(__this + _offset);
	bool _returnValue;
	_returnValue = ExpBool_get_isChanged_m60617B25CB0281DB80EC5C67D75574B498E32E86(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ExtendedPrimitives_11.Internal.ExpBool::set_isChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpBool_set_isChanged_m15F9F573502B47D54AF1F95E6BC8F8F88C682C0E (ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value) {
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// prevValue = !Value;
		bool L_1 = __this->___Value_1;
		__this->___prevValue_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		return;
	}

IL_0013:
	{
		// prevValue = Value;
		bool L_2 = __this->___Value_1;
		__this->___prevValue_0 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpBool_set_isChanged_m15F9F573502B47D54AF1F95E6BC8F8F88C682C0E_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F*>(__this + _offset);
	ExpBool_set_isChanged_m15F9F573502B47D54AF1F95E6BC8F8F88C682C0E(_thisAdjusted, ___value0, method);
}
// System.Boolean ExtendedPrimitives_11.Internal.ExpBool::op_Implicit(ExtendedPrimitives_11.Internal.ExpBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpBool_op_Implicit_m24E6025A68B43B5FEE798659058EFBA8E24A294B (ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F ___i0, const RuntimeMethod* method) 
{
	{
		// return i.Value;
		ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F L_0 = ___i0;
		bool L_1 = L_0.___Value_1;
		return L_1;
	}
}
// ExtendedPrimitives_11.Internal.ExpBool ExtendedPrimitives_11.Internal.ExpBool::op_Implicit(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F ExpBool_op_Implicit_mDF4AEAB56C2F81380798C89EFB0257785AD6E427 (bool ___i0, const RuntimeMethod* method) 
{
	{
		// return new ExpBool(i);
		bool L_0 = ___i0;
		ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F L_1;
		memset((&L_1), 0, sizeof(L_1));
		ExpBool__ctor_mB596E89ABA805238DD3561C145501210FF7D0545((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String ExtendedPrimitives_11.Internal.ExpBool::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExpBool_ToString_mCDAA1CA22E7A911B39F19C6D356A6987E4A0E049 (ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F* __this, const RuntimeMethod* method) 
{
	{
		// return Value.ToString();
		bool* L_0 = (&__this->___Value_1);
		String_t* L_1;
		L_1 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* ExpBool_ToString_mCDAA1CA22E7A911B39F19C6D356A6987E4A0E049_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpBool_t190EEAFBE96597C51743882D8527114A46A3E72F*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ExpBool_ToString_mCDAA1CA22E7A911B39F19C6D356A6987E4A0E049(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.ExpInt::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpInt__ctor_mB41754559BE8262BB82E11D15B3FC120827BDF6A (ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* __this, int32_t ___val0, const RuntimeMethod* method) 
{
	{
		// Value = val;
		int32_t L_0 = ___val0;
		__this->___Value_1 = L_0;
		// prevValue = val-1;
		int32_t L_1 = ___val0;
		__this->___prevValue_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpInt__ctor_mB41754559BE8262BB82E11D15B3FC120827BDF6A_AdjustorThunk (RuntimeObject* __this, int32_t ___val0, const RuntimeMethod* method)
{
	ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349*>(__this + _offset);
	ExpInt__ctor_mB41754559BE8262BB82E11D15B3FC120827BDF6A(_thisAdjusted, ___val0, method);
}
// System.Void ExtendedPrimitives_11.Internal.ExpInt::Set(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpInt_Set_m02633F213463CA135F5FF357665853817D3036EA (ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* __this, int32_t ___val0, const RuntimeMethod* method) 
{
	{
		// Value = val;
		int32_t L_0 = ___val0;
		__this->___Value_1 = L_0;
		// prevValue = val;
		int32_t L_1 = ___val0;
		__this->___prevValue_0 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpInt_Set_m02633F213463CA135F5FF357665853817D3036EA_AdjustorThunk (RuntimeObject* __this, int32_t ___val0, const RuntimeMethod* method)
{
	ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349*>(__this + _offset);
	ExpInt_Set_m02633F213463CA135F5FF357665853817D3036EA(_thisAdjusted, ___val0, method);
}
// System.Boolean ExtendedPrimitives_11.Internal.ExpInt::get_isChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpInt_get_isChanged_m58D6886D12526223EDC5586A085347C40D9974F8 (ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool result = false;
		V_0 = (bool)0;
		// if (Value != prevValue) {
		int32_t L_0 = __this->___Value_1;
		int32_t L_1 = __this->___prevValue_0;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		// prevValue = Value;
		int32_t L_2 = __this->___Value_1;
		__this->___prevValue_0 = L_2;
		// result = true;
		V_0 = (bool)1;
	}

IL_001e:
	{
		// return result;
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool ExpInt_get_isChanged_m58D6886D12526223EDC5586A085347C40D9974F8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349*>(__this + _offset);
	bool _returnValue;
	_returnValue = ExpInt_get_isChanged_m58D6886D12526223EDC5586A085347C40D9974F8(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ExtendedPrimitives_11.Internal.ExpInt::set_isChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpInt_set_isChanged_m315311E6D32F6B343BB84B3A6261844DD0CE9917 (ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value) {
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// prevValue = Value - 1;
		int32_t L_1 = __this->___Value_1;
		__this->___prevValue_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		return;
	}

IL_0012:
	{
		// prevValue = Value;
		int32_t L_2 = __this->___Value_1;
		__this->___prevValue_0 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpInt_set_isChanged_m315311E6D32F6B343BB84B3A6261844DD0CE9917_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349*>(__this + _offset);
	ExpInt_set_isChanged_m315311E6D32F6B343BB84B3A6261844DD0CE9917(_thisAdjusted, ___value0, method);
}
// System.Int32 ExtendedPrimitives_11.Internal.ExpInt::op_Implicit(ExtendedPrimitives_11.Internal.ExpInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ExpInt_op_Implicit_m10EB04737A5F55E8D1BBF2DA0FA8CAD213A02D16 (ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 ___i0, const RuntimeMethod* method) 
{
	{
		// return i.Value;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_0 = ___i0;
		int32_t L_1 = L_0.___Value_1;
		return L_1;
	}
}
// System.Byte ExtendedPrimitives_11.Internal.ExpInt::op_Implicit(ExtendedPrimitives_11.Internal.ExpInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ExpInt_op_Implicit_m1A4E27C5EA47326D6CBD6390F39E4017E127E26C (ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 ___i0, const RuntimeMethod* method) 
{
	{
		// return (byte)i.Value;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_0 = ___i0;
		int32_t L_1 = L_0.___Value_1;
		return (uint8_t)((int32_t)(uint8_t)L_1);
	}
}
// ExtendedPrimitives_11.Internal.ExpInt ExtendedPrimitives_11.Internal.ExpInt::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 ExpInt_op_Implicit_mC28016EE88F030C243A955C7BB378FBE05B3102D (int32_t ___i0, const RuntimeMethod* method) 
{
	{
		// return new ExpInt(i);
		int32_t L_0 = ___i0;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ExpInt__ctor_mB41754559BE8262BB82E11D15B3FC120827BDF6A((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String ExtendedPrimitives_11.Internal.ExpInt::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExpInt_ToString_m9C37D6C224D7B58EDE1BCC3A369CAB2FB7396B90 (ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* __this, const RuntimeMethod* method) 
{
	{
		// return Value.ToString();
		int32_t* L_0 = (&__this->___Value_1);
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* ExpInt_ToString_m9C37D6C224D7B58EDE1BCC3A369CAB2FB7396B90_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ExpInt_ToString_m9C37D6C224D7B58EDE1BCC3A369CAB2FB7396B90(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.ExpFloat::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpFloat__ctor_m716B017C4F64AA69A9C979EBF8D471F27427FC98 (ExpFloat_t25A2295EC87D1815849FBE729E1F861E7CA77C0B* __this, float ___val0, const RuntimeMethod* method) 
{
	{
		// Value = val;
		float L_0 = ___val0;
		__this->___Value_1 = L_0;
		// prevValue = val-1;
		float L_1 = ___val0;
		__this->___prevValue_0 = ((float)il2cpp_codegen_subtract(L_1, (1.0f)));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpFloat__ctor_m716B017C4F64AA69A9C979EBF8D471F27427FC98_AdjustorThunk (RuntimeObject* __this, float ___val0, const RuntimeMethod* method)
{
	ExpFloat_t25A2295EC87D1815849FBE729E1F861E7CA77C0B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpFloat_t25A2295EC87D1815849FBE729E1F861E7CA77C0B*>(__this + _offset);
	ExpFloat__ctor_m716B017C4F64AA69A9C979EBF8D471F27427FC98(_thisAdjusted, ___val0, method);
}
// System.Boolean ExtendedPrimitives_11.Internal.ExpFloat::get_isChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpFloat_get_isChanged_m2F4E170240B58BF3A0AA9FF63630F99E1522FFD2 (ExpFloat_t25A2295EC87D1815849FBE729E1F861E7CA77C0B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool result = false;
		V_0 = (bool)0;
		// if (Value != prevValue) {
		float L_0 = __this->___Value_1;
		float L_1 = __this->___prevValue_0;
		if ((((float)L_0) == ((float)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		// prevValue = Value;
		float L_2 = __this->___Value_1;
		__this->___prevValue_0 = L_2;
		// result = true;
		V_0 = (bool)1;
	}

IL_001e:
	{
		// return result;
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool ExpFloat_get_isChanged_m2F4E170240B58BF3A0AA9FF63630F99E1522FFD2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ExpFloat_t25A2295EC87D1815849FBE729E1F861E7CA77C0B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpFloat_t25A2295EC87D1815849FBE729E1F861E7CA77C0B*>(__this + _offset);
	bool _returnValue;
	_returnValue = ExpFloat_get_isChanged_m2F4E170240B58BF3A0AA9FF63630F99E1522FFD2(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ExtendedPrimitives_11.Internal.ExpFloat::Set(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpFloat_Set_mFC3922AFA93811926F94966A7AF41FDB06B9A98A (ExpFloat_t25A2295EC87D1815849FBE729E1F861E7CA77C0B* __this, float ___val0, const RuntimeMethod* method) 
{
	{
		// Value = val;
		float L_0 = ___val0;
		__this->___Value_1 = L_0;
		// prevValue = val;
		float L_1 = ___val0;
		__this->___prevValue_0 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpFloat_Set_mFC3922AFA93811926F94966A7AF41FDB06B9A98A_AdjustorThunk (RuntimeObject* __this, float ___val0, const RuntimeMethod* method)
{
	ExpFloat_t25A2295EC87D1815849FBE729E1F861E7CA77C0B* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpFloat_t25A2295EC87D1815849FBE729E1F861E7CA77C0B*>(__this + _offset);
	ExpFloat_Set_mFC3922AFA93811926F94966A7AF41FDB06B9A98A(_thisAdjusted, ___val0, method);
}
// System.Single ExtendedPrimitives_11.Internal.ExpFloat::op_Implicit(ExtendedPrimitives_11.Internal.ExpFloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ExpFloat_op_Implicit_mB0A9234FCAB4F53B3D48D3E07D3E63BA232CFADB (ExpFloat_t25A2295EC87D1815849FBE729E1F861E7CA77C0B ___i0, const RuntimeMethod* method) 
{
	{
		// return i.Value;
		ExpFloat_t25A2295EC87D1815849FBE729E1F861E7CA77C0B L_0 = ___i0;
		float L_1 = L_0.___Value_1;
		return L_1;
	}
}
// ExtendedPrimitives_11.Internal.ExpFloat ExtendedPrimitives_11.Internal.ExpFloat::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpFloat_t25A2295EC87D1815849FBE729E1F861E7CA77C0B ExpFloat_op_Implicit_m1A0C0010C146A9E30BE62A27A2DF7ADAB2107355 (float ___i0, const RuntimeMethod* method) 
{
	{
		// return new ExpFloat(i);
		float L_0 = ___i0;
		ExpFloat_t25A2295EC87D1815849FBE729E1F861E7CA77C0B L_1;
		memset((&L_1), 0, sizeof(L_1));
		ExpFloat__ctor_m716B017C4F64AA69A9C979EBF8D471F27427FC98((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.ExpColor32::.ctor(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpColor32__ctor_m89D5CB67B7D9DDD867712FB2016B38EB26792E63 (ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___val0, const RuntimeMethod* method) 
{
	{
		// r = val.r;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___val0;
		uint8_t L_1 = L_0.___r_1;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_2;
		L_2 = ExpInt_op_Implicit_mC28016EE88F030C243A955C7BB378FBE05B3102D(L_1, NULL);
		__this->___r_0 = L_2;
		// g = val.g;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_3 = ___val0;
		uint8_t L_4 = L_3.___g_2;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_5;
		L_5 = ExpInt_op_Implicit_mC28016EE88F030C243A955C7BB378FBE05B3102D(L_4, NULL);
		__this->___g_1 = L_5;
		// b = val.b;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___val0;
		uint8_t L_7 = L_6.___b_3;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_8;
		L_8 = ExpInt_op_Implicit_mC28016EE88F030C243A955C7BB378FBE05B3102D(L_7, NULL);
		__this->___b_2 = L_8;
		// a = val.a;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9 = ___val0;
		uint8_t L_10 = L_9.___a_4;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_11;
		L_11 = ExpInt_op_Implicit_mC28016EE88F030C243A955C7BB378FBE05B3102D(L_10, NULL);
		__this->___a_3 = L_11;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpColor32__ctor_m89D5CB67B7D9DDD867712FB2016B38EB26792E63_AdjustorThunk (RuntimeObject* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___val0, const RuntimeMethod* method)
{
	ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027*>(__this + _offset);
	ExpColor32__ctor_m89D5CB67B7D9DDD867712FB2016B38EB26792E63(_thisAdjusted, ___val0, method);
}
// System.Void ExtendedPrimitives_11.Internal.ExpColor32::.ctor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpColor32__ctor_m5655200717D6FF13B94CED7A18DD7BFAF1AFF200 (ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cval0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color32 val = cval;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___cval0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1;
		L_1 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_0, NULL);
		V_0 = L_1;
		// r = val.r;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = V_0;
		uint8_t L_3 = L_2.___r_1;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_4;
		L_4 = ExpInt_op_Implicit_mC28016EE88F030C243A955C7BB378FBE05B3102D(L_3, NULL);
		__this->___r_0 = L_4;
		// g = val.g;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5 = V_0;
		uint8_t L_6 = L_5.___g_2;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_7;
		L_7 = ExpInt_op_Implicit_mC28016EE88F030C243A955C7BB378FBE05B3102D(L_6, NULL);
		__this->___g_1 = L_7;
		// b = val.b;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_8 = V_0;
		uint8_t L_9 = L_8.___b_3;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_10;
		L_10 = ExpInt_op_Implicit_mC28016EE88F030C243A955C7BB378FBE05B3102D(L_9, NULL);
		__this->___b_2 = L_10;
		// a = val.a;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11 = V_0;
		uint8_t L_12 = L_11.___a_4;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_13;
		L_13 = ExpInt_op_Implicit_mC28016EE88F030C243A955C7BB378FBE05B3102D(L_12, NULL);
		__this->___a_3 = L_13;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpColor32__ctor_m5655200717D6FF13B94CED7A18DD7BFAF1AFF200_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___cval0, const RuntimeMethod* method)
{
	ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027*>(__this + _offset);
	ExpColor32__ctor_m5655200717D6FF13B94CED7A18DD7BFAF1AFF200(_thisAdjusted, ___cval0, method);
}
// System.Boolean ExtendedPrimitives_11.Internal.ExpColor32::get_isChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpColor32_get_isChanged_m520F2AFC37C41490FB982D7760829200EED763F4 (ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool result = false;
		V_0 = (bool)0;
		// if (r.isChanged) {
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* L_0 = (&__this->___r_0);
		bool L_1;
		L_1 = ExpInt_get_isChanged_m58D6886D12526223EDC5586A085347C40D9974F8(L_0, NULL);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// result = true;
		V_0 = (bool)1;
	}

IL_0011:
	{
		// if (g.isChanged) {
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* L_2 = (&__this->___g_1);
		bool L_3;
		L_3 = ExpInt_get_isChanged_m58D6886D12526223EDC5586A085347C40D9974F8(L_2, NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		// result = true;
		V_0 = (bool)1;
	}

IL_0020:
	{
		// if (b.isChanged) {
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* L_4 = (&__this->___b_2);
		bool L_5;
		L_5 = ExpInt_get_isChanged_m58D6886D12526223EDC5586A085347C40D9974F8(L_4, NULL);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// result = true;
		V_0 = (bool)1;
	}

IL_002f:
	{
		// if (a.isChanged) {
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* L_6 = (&__this->___a_3);
		bool L_7;
		L_7 = ExpInt_get_isChanged_m58D6886D12526223EDC5586A085347C40D9974F8(L_6, NULL);
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		// result = true;
		V_0 = (bool)1;
	}

IL_003e:
	{
		// return result;
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  bool ExpColor32_get_isChanged_m520F2AFC37C41490FB982D7760829200EED763F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027*>(__this + _offset);
	bool _returnValue;
	_returnValue = ExpColor32_get_isChanged_m520F2AFC37C41490FB982D7760829200EED763F4(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ExtendedPrimitives_11.Internal.ExpColor32::set_isChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpColor32_set_isChanged_mA7907947D2B26C53011E4658EB98441296693179 (ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value) {
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0034;
		}
	}
	{
		// r.isChanged = true;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* L_1 = (&__this->___r_0);
		ExpInt_set_isChanged_m315311E6D32F6B343BB84B3A6261844DD0CE9917(L_1, (bool)1, NULL);
		// g.isChanged = true;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* L_2 = (&__this->___g_1);
		ExpInt_set_isChanged_m315311E6D32F6B343BB84B3A6261844DD0CE9917(L_2, (bool)1, NULL);
		// b.isChanged = true;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* L_3 = (&__this->___b_2);
		ExpInt_set_isChanged_m315311E6D32F6B343BB84B3A6261844DD0CE9917(L_3, (bool)1, NULL);
		// a.isChanged = true;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* L_4 = (&__this->___a_3);
		ExpInt_set_isChanged_m315311E6D32F6B343BB84B3A6261844DD0CE9917(L_4, (bool)1, NULL);
		return;
	}

IL_0034:
	{
		// r.isChanged = false;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* L_5 = (&__this->___r_0);
		ExpInt_set_isChanged_m315311E6D32F6B343BB84B3A6261844DD0CE9917(L_5, (bool)0, NULL);
		// g.isChanged = false;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* L_6 = (&__this->___g_1);
		ExpInt_set_isChanged_m315311E6D32F6B343BB84B3A6261844DD0CE9917(L_6, (bool)0, NULL);
		// b.isChanged = false;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* L_7 = (&__this->___b_2);
		ExpInt_set_isChanged_m315311E6D32F6B343BB84B3A6261844DD0CE9917(L_7, (bool)0, NULL);
		// a.isChanged = false;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* L_8 = (&__this->___a_3);
		ExpInt_set_isChanged_m315311E6D32F6B343BB84B3A6261844DD0CE9917(L_8, (bool)0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpColor32_set_isChanged_mA7907947D2B26C53011E4658EB98441296693179_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027*>(__this + _offset);
	ExpColor32_set_isChanged_mA7907947D2B26C53011E4658EB98441296693179(_thisAdjusted, ___value0, method);
}
// System.Void ExtendedPrimitives_11.Internal.ExpColor32::Set(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpColor32_Set_m96971E2CB9CD168C5F5F1666A84719704B9F47D0 (ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___val0, const RuntimeMethod* method) 
{
	{
		// r.Set(val.r);
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* L_0 = (&__this->___r_0);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = ___val0;
		uint8_t L_2 = L_1.___r_1;
		ExpInt_Set_m02633F213463CA135F5FF357665853817D3036EA(L_0, L_2, NULL);
		// g.Set(val.g);
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* L_3 = (&__this->___g_1);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___val0;
		uint8_t L_5 = L_4.___g_2;
		ExpInt_Set_m02633F213463CA135F5FF357665853817D3036EA(L_3, L_5, NULL);
		// b.Set(val.b);
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* L_6 = (&__this->___b_2);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_7 = ___val0;
		uint8_t L_8 = L_7.___b_3;
		ExpInt_Set_m02633F213463CA135F5FF357665853817D3036EA(L_6, L_8, NULL);
		// a.Set(val.a);
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* L_9 = (&__this->___a_3);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_10 = ___val0;
		uint8_t L_11 = L_10.___a_4;
		ExpInt_Set_m02633F213463CA135F5FF357665853817D3036EA(L_9, L_11, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpColor32_Set_m96971E2CB9CD168C5F5F1666A84719704B9F47D0_AdjustorThunk (RuntimeObject* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___val0, const RuntimeMethod* method)
{
	ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027*>(__this + _offset);
	ExpColor32_Set_m96971E2CB9CD168C5F5F1666A84719704B9F47D0(_thisAdjusted, ___val0, method);
}
// UnityEngine.Color ExtendedPrimitives_11.Internal.ExpColor32::op_Implicit(ExtendedPrimitives_11.Internal.ExpColor32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ExpColor32_op_Implicit_m460AC2A9083FB5BF7821163A85C02F9412FEB2F5 (ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ___i0, const RuntimeMethod* method) 
{
	{
		// return new Color32(i.r, i.g, i.b, i.a);
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_0 = ___i0;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_1 = L_0.___r_0;
		uint8_t L_2;
		L_2 = ExpInt_op_Implicit_m1A4E27C5EA47326D6CBD6390F39E4017E127E26C(L_1, NULL);
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_3 = ___i0;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_4 = L_3.___g_1;
		uint8_t L_5;
		L_5 = ExpInt_op_Implicit_m1A4E27C5EA47326D6CBD6390F39E4017E127E26C(L_4, NULL);
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_6 = ___i0;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_7 = L_6.___b_2;
		uint8_t L_8;
		L_8 = ExpInt_op_Implicit_m1A4E27C5EA47326D6CBD6390F39E4017E127E26C(L_7, NULL);
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_9 = ___i0;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_10 = L_9.___a_3;
		uint8_t L_11;
		L_11 = ExpInt_op_Implicit_m1A4E27C5EA47326D6CBD6390F39E4017E127E26C(L_10, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_12), L_2, L_5, L_8, L_11, /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_12, NULL);
		return L_13;
	}
}
// ExtendedPrimitives_11.Internal.ExpColor32 ExtendedPrimitives_11.Internal.ExpColor32::op_Implicit(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ExpColor32_op_Implicit_mC638EA731F83762E4EA1446D17246BFAD44079E9 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___i0, const RuntimeMethod* method) 
{
	{
		// return new ExpColor32(i);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___i0;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ExpColor32__ctor_m5655200717D6FF13B94CED7A18DD7BFAF1AFF200((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.ExpGradient::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpGradient__ctor_mF763ABC67656447B4F583F012080351B646A768C (ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A* __this, int32_t ___keysCount0, const RuntimeMethod* method) 
{
	{
		// KeysCount = keysCount;
		int32_t L_0 = ___keysCount0;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_1;
		L_1 = ExpInt_op_Implicit_mC28016EE88F030C243A955C7BB378FBE05B3102D(L_0, NULL);
		__this->___KeysCount_0 = L_1;
		// c0 = Color.Lerp(Color.blue, Color.green, 0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_2, L_3, (0.0f), NULL);
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_5;
		L_5 = ExpColor32_op_Implicit_mC638EA731F83762E4EA1446D17246BFAD44079E9(L_4, NULL);
		__this->___c0_1 = L_5;
		// c1 = Color.Lerp(Color.blue, Color.green, 0.333f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_6, L_7, (0.333000004f), NULL);
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_9;
		L_9 = ExpColor32_op_Implicit_mC638EA731F83762E4EA1446D17246BFAD44079E9(L_8, NULL);
		__this->___c1_2 = L_9;
		// c2 = Color.Lerp(Color.blue, Color.green, 0.666f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_10, L_11, (0.666000009f), NULL);
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_13;
		L_13 = ExpColor32_op_Implicit_mC638EA731F83762E4EA1446D17246BFAD44079E9(L_12, NULL);
		__this->___c2_3 = L_13;
		// c3 = Color.Lerp(Color.blue, Color.green, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_14, L_15, (1.0f), NULL);
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_17;
		L_17 = ExpColor32_op_Implicit_mC638EA731F83762E4EA1446D17246BFAD44079E9(L_16, NULL);
		__this->___c3_4 = L_17;
		// c4 = Color.Lerp(Color.green, Color.yellow, 0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_18, L_19, (0.0f), NULL);
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_21;
		L_21 = ExpColor32_op_Implicit_mC638EA731F83762E4EA1446D17246BFAD44079E9(L_20, NULL);
		__this->___c4_5 = L_21;
		// c5 = Color.Lerp(Color.green, Color.yellow, 0.333f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		L_23 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_22, L_23, (0.333000004f), NULL);
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_25;
		L_25 = ExpColor32_op_Implicit_mC638EA731F83762E4EA1446D17246BFAD44079E9(L_24, NULL);
		__this->___c5_6 = L_25;
		// c6 = Color.Lerp(Color.green, Color.yellow, 0.666f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		L_26 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_26, L_27, (0.666000009f), NULL);
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_29;
		L_29 = ExpColor32_op_Implicit_mC638EA731F83762E4EA1446D17246BFAD44079E9(L_28, NULL);
		__this->___c6_7 = L_29;
		// c7 = Color.Lerp(Color.green, Color.yellow, 1f);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		L_30 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		L_31 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32;
		L_32 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_30, L_31, (1.0f), NULL);
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_33;
		L_33 = ExpColor32_op_Implicit_mC638EA731F83762E4EA1446D17246BFAD44079E9(L_32, NULL);
		__this->___c7_8 = L_33;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpGradient__ctor_mF763ABC67656447B4F583F012080351B646A768C_AdjustorThunk (RuntimeObject* __this, int32_t ___keysCount0, const RuntimeMethod* method)
{
	ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A*>(__this + _offset);
	ExpGradient__ctor_mF763ABC67656447B4F583F012080351B646A768C(_thisAdjusted, ___keysCount0, method);
}
// ExtendedPrimitives_11.Internal.ExpColor32 ExtendedPrimitives_11.Internal.ExpGradient::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ExpGradient_get_Item_m5653545411D718BA6528772AD73DD08ED67D958F (ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE587F6877BF2672FCEB77AB76C911BB1D7FE3874);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (idx >= 8) {
		int32_t L_0 = ___idx0;
		if ((((int32_t)L_0) < ((int32_t)8)))
		{
			goto IL_000e;
		}
	}
	{
		// Debug.LogWarning("Out of range");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralE587F6877BF2672FCEB77AB76C911BB1D7FE3874, NULL);
	}

IL_000e:
	{
		// idx = Mathf.Clamp(idx, 0, 8);
		int32_t L_1 = ___idx0;
		int32_t L_2;
		L_2 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_1, 0, 8, NULL);
		___idx0 = L_2;
		int32_t L_3 = ___idx0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0040;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_004e;
			}
			case 3:
			{
				goto IL_0055;
			}
			case 4:
			{
				goto IL_005c;
			}
			case 5:
			{
				goto IL_0063;
			}
			case 6:
			{
				goto IL_006a;
			}
			case 7:
			{
				goto IL_0071;
			}
		}
	}
	{
		goto IL_0078;
	}

IL_0040:
	{
		// case 0: return c0;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_4 = __this->___c0_1;
		return L_4;
	}

IL_0047:
	{
		// case 1: return c1;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_5 = __this->___c1_2;
		return L_5;
	}

IL_004e:
	{
		// case 2: return c2;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_6 = __this->___c2_3;
		return L_6;
	}

IL_0055:
	{
		// case 3: return c3;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_7 = __this->___c3_4;
		return L_7;
	}

IL_005c:
	{
		// case 4: return c4;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_8 = __this->___c4_5;
		return L_8;
	}

IL_0063:
	{
		// case 5: return c5;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_9 = __this->___c5_6;
		return L_9;
	}

IL_006a:
	{
		// case 6: return c6;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_10 = __this->___c6_7;
		return L_10;
	}

IL_0071:
	{
		// case 7: return c7;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_11 = __this->___c7_8;
		return L_11;
	}

IL_0078:
	{
		// default: return c0;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_12 = __this->___c0_1;
		return L_12;
	}
}
IL2CPP_EXTERN_C  ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ExpGradient_get_Item_m5653545411D718BA6528772AD73DD08ED67D958F_AdjustorThunk (RuntimeObject* __this, int32_t ___idx0, const RuntimeMethod* method)
{
	ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A*>(__this + _offset);
	ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 _returnValue;
	_returnValue = ExpGradient_get_Item_m5653545411D718BA6528772AD73DD08ED67D958F(_thisAdjusted, ___idx0, method);
	return _returnValue;
}
// System.Void ExtendedPrimitives_11.Internal.ExpGradient::set_Item(System.Int32,ExtendedPrimitives_11.Internal.ExpColor32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpGradient_set_Item_m4C58A331FF278B908192766BEBA0AAB078B76725 (ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A* __this, int32_t ___idx0, ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE587F6877BF2672FCEB77AB76C911BB1D7FE3874);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (idx >= 8) {
		int32_t L_0 = ___idx0;
		if ((((int32_t)L_0) < ((int32_t)8)))
		{
			goto IL_000e;
		}
	}
	{
		// Debug.LogWarning("Out of range");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralE587F6877BF2672FCEB77AB76C911BB1D7FE3874, NULL);
	}

IL_000e:
	{
		// idx = Mathf.Clamp(idx, 0, 8);
		int32_t L_1 = ___idx0;
		int32_t L_2;
		L_2 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_1, 0, 8, NULL);
		___idx0 = L_2;
		int32_t L_3 = ___idx0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_003f;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_004f;
			}
			case 3:
			{
				goto IL_0057;
			}
			case 4:
			{
				goto IL_005f;
			}
			case 5:
			{
				goto IL_0067;
			}
			case 6:
			{
				goto IL_006f;
			}
			case 7:
			{
				goto IL_0077;
			}
		}
	}
	{
		return;
	}

IL_003f:
	{
		// case 0: c0 = value; break;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_4 = ___value1;
		__this->___c0_1 = L_4;
		// case 0: c0 = value; break;
		return;
	}

IL_0047:
	{
		// case 1: c1 = value; break;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_5 = ___value1;
		__this->___c1_2 = L_5;
		// case 1: c1 = value; break;
		return;
	}

IL_004f:
	{
		// case 2: c2 = value; break;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_6 = ___value1;
		__this->___c2_3 = L_6;
		// case 2: c2 = value; break;
		return;
	}

IL_0057:
	{
		// case 3: c3 = value; break;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_7 = ___value1;
		__this->___c3_4 = L_7;
		// case 3: c3 = value; break;
		return;
	}

IL_005f:
	{
		// case 4: c4 = value; break;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_8 = ___value1;
		__this->___c4_5 = L_8;
		// case 4: c4 = value; break;
		return;
	}

IL_0067:
	{
		// case 5: c5 = value; break;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_9 = ___value1;
		__this->___c5_6 = L_9;
		// case 5: c5 = value; break;
		return;
	}

IL_006f:
	{
		// case 6: c6 = value; break;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_10 = ___value1;
		__this->___c6_7 = L_10;
		// case 6: c6 = value; break;
		return;
	}

IL_0077:
	{
		// case 7: c7 = value; break;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_11 = ___value1;
		__this->___c7_8 = L_11;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpGradient_set_Item_m4C58A331FF278B908192766BEBA0AAB078B76725_AdjustorThunk (RuntimeObject* __this, int32_t ___idx0, ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 ___value1, const RuntimeMethod* method)
{
	ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A*>(__this + _offset);
	ExpGradient_set_Item_m4C58A331FF278B908192766BEBA0AAB078B76725(_thisAdjusted, ___idx0, ___value1, method);
}
// UnityEngine.Color ExtendedPrimitives_11.Internal.ExpGradient::get_Item(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ExpGradient_get_Item_mB2487F2799F4C94C9DCDC5A8EC13F090085AF758 (ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A* __this, float ___time0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		// if (KeysCount == 1) {
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_0 = __this->___KeysCount_0;
		int32_t L_1;
		L_1 = ExpInt_op_Implicit_m10EB04737A5F55E8D1BBF2DA0FA8CAD213A02D16_inline(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}
	{
		// return c0;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_2 = __this->___c0_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = ExpColor32_op_Implicit_m460AC2A9083FB5BF7821163A85C02F9412FEB2F5(L_2, NULL);
		return L_3;
	}

IL_001a:
	{
		// float f = 1f / (KeysCount - 1);
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_4 = __this->___KeysCount_0;
		int32_t L_5;
		L_5 = ExpInt_op_Implicit_m10EB04737A5F55E8D1BBF2DA0FA8CAD213A02D16_inline(L_4, NULL);
		V_0 = ((float)((1.0f)/((float)((int32_t)il2cpp_codegen_subtract(L_5, 1)))));
		// int cIdx = Mathf.FloorToInt (time / f);
		float L_6 = ___time0;
		float L_7 = V_0;
		int32_t L_8;
		L_8 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(L_6/L_7)), NULL);
		V_1 = L_8;
		// float lv = (time - (cIdx * f)) / f;
		float L_9 = ___time0;
		int32_t L_10 = V_1;
		float L_11 = V_0;
		float L_12 = V_0;
		V_2 = ((float)(((float)il2cpp_codegen_subtract(L_9, ((float)il2cpp_codegen_multiply(((float)L_10), L_11))))/L_12));
		// return Color.Lerp(this[cIdx], this[cIdx+1], lv );
		int32_t L_13 = V_1;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_14;
		L_14 = ExpGradient_get_Item_m5653545411D718BA6528772AD73DD08ED67D958F(__this, L_13, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = ExpColor32_op_Implicit_m460AC2A9083FB5BF7821163A85C02F9412FEB2F5(L_14, NULL);
		int32_t L_16 = V_1;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027 L_17;
		L_17 = ExpGradient_get_Item_m5653545411D718BA6528772AD73DD08ED67D958F(__this, ((int32_t)il2cpp_codegen_add(L_16, 1)), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = ExpColor32_op_Implicit_m460AC2A9083FB5BF7821163A85C02F9412FEB2F5(L_17, NULL);
		float L_19 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_15, L_18, L_19, NULL);
		return L_20;
	}
}
IL2CPP_EXTERN_C  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ExpGradient_get_Item_mB2487F2799F4C94C9DCDC5A8EC13F090085AF758_AdjustorThunk (RuntimeObject* __this, float ___time0, const RuntimeMethod* method)
{
	ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A*>(__this + _offset);
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F _returnValue;
	_returnValue = ExpGradient_get_Item_mB2487F2799F4C94C9DCDC5A8EC13F090085AF758(_thisAdjusted, ___time0, method);
	return _returnValue;
}
// System.Boolean ExtendedPrimitives_11.Internal.ExpGradient::get_isChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpGradient_get_isChanged_m3E35C7C22565C8D92D542703820EDCBD1A34D530 (ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool result = KeysCount.isChanged;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349* L_0 = (&__this->___KeysCount_0);
		bool L_1;
		L_1 = ExpInt_get_isChanged_m58D6886D12526223EDC5586A085347C40D9974F8(L_0, NULL);
		V_0 = L_1;
		// result = c0.isChanged || result;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* L_2 = (&__this->___c0_1);
		bool L_3;
		L_3 = ExpColor32_get_isChanged_m520F2AFC37C41490FB982D7760829200EED763F4(L_2, NULL);
		bool L_4 = V_0;
		V_0 = (bool)((int32_t)((int32_t)L_3|(int32_t)L_4));
		// result = c1.isChanged || result;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* L_5 = (&__this->___c1_2);
		bool L_6;
		L_6 = ExpColor32_get_isChanged_m520F2AFC37C41490FB982D7760829200EED763F4(L_5, NULL);
		bool L_7 = V_0;
		V_0 = (bool)((int32_t)((int32_t)L_6|(int32_t)L_7));
		// result = c2.isChanged || result;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* L_8 = (&__this->___c2_3);
		bool L_9;
		L_9 = ExpColor32_get_isChanged_m520F2AFC37C41490FB982D7760829200EED763F4(L_8, NULL);
		bool L_10 = V_0;
		V_0 = (bool)((int32_t)((int32_t)L_9|(int32_t)L_10));
		// result = c3.isChanged || result;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* L_11 = (&__this->___c3_4);
		bool L_12;
		L_12 = ExpColor32_get_isChanged_m520F2AFC37C41490FB982D7760829200EED763F4(L_11, NULL);
		bool L_13 = V_0;
		V_0 = (bool)((int32_t)((int32_t)L_12|(int32_t)L_13));
		// result = c4.isChanged || result;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* L_14 = (&__this->___c4_5);
		bool L_15;
		L_15 = ExpColor32_get_isChanged_m520F2AFC37C41490FB982D7760829200EED763F4(L_14, NULL);
		bool L_16 = V_0;
		V_0 = (bool)((int32_t)((int32_t)L_15|(int32_t)L_16));
		// result = c5.isChanged || result;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* L_17 = (&__this->___c5_6);
		bool L_18;
		L_18 = ExpColor32_get_isChanged_m520F2AFC37C41490FB982D7760829200EED763F4(L_17, NULL);
		bool L_19 = V_0;
		V_0 = (bool)((int32_t)((int32_t)L_18|(int32_t)L_19));
		// result = c6.isChanged || result;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* L_20 = (&__this->___c6_7);
		bool L_21;
		L_21 = ExpColor32_get_isChanged_m520F2AFC37C41490FB982D7760829200EED763F4(L_20, NULL);
		bool L_22 = V_0;
		V_0 = (bool)((int32_t)((int32_t)L_21|(int32_t)L_22));
		// result = c7.isChanged || result;
		ExpColor32_t53FF0B64E659976D9BE100112E4E0FE720625027* L_23 = (&__this->___c7_8);
		bool L_24;
		L_24 = ExpColor32_get_isChanged_m520F2AFC37C41490FB982D7760829200EED763F4(L_23, NULL);
		bool L_25 = V_0;
		V_0 = (bool)((int32_t)((int32_t)L_24|(int32_t)L_25));
		// return result;
		bool L_26 = V_0;
		return L_26;
	}
}
IL2CPP_EXTERN_C  bool ExpGradient_get_isChanged_m3E35C7C22565C8D92D542703820EDCBD1A34D530_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpGradient_tAB2AA2679D35C6B5EFE4046EDB0CA2A3460D818A*>(__this + _offset);
	bool _returnValue;
	_returnValue = ExpGradient_get_isChanged_m3E35C7C22565C8D92D542703820EDCBD1A34D530(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.ExpVector2::.ctor(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpVector2__ctor_m061A563587BEE0E1667191AA813D54877825CE28 (ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___val0, const RuntimeMethod* method) 
{
	{
		// Value = val;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___val0;
		__this->___Value_1 = L_0;
		// prevValue = -val;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___val0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline(L_1, NULL);
		__this->___prevValue_0 = L_2;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpVector2__ctor_m061A563587BEE0E1667191AA813D54877825CE28_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___val0, const RuntimeMethod* method)
{
	ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF*>(__this + _offset);
	ExpVector2__ctor_m061A563587BEE0E1667191AA813D54877825CE28(_thisAdjusted, ___val0, method);
}
// System.Void ExtendedPrimitives_11.Internal.ExpVector2::Set(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpVector2_Set_mFF7BE76F287978081966201B89A5434B47DB235C (ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___val0, const RuntimeMethod* method) 
{
	{
		// Value = val;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___val0;
		__this->___Value_1 = L_0;
		// prevValue = val;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___val0;
		__this->___prevValue_0 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpVector2_Set_mFF7BE76F287978081966201B89A5434B47DB235C_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___val0, const RuntimeMethod* method)
{
	ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF*>(__this + _offset);
	ExpVector2_Set_mFF7BE76F287978081966201B89A5434B47DB235C(_thisAdjusted, ___val0, method);
}
// System.Single ExtendedPrimitives_11.Internal.ExpVector2::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ExpVector2_get_x_m7B9443E95C3C6B12C939F3A94A9266733CFE9702 (ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* __this, const RuntimeMethod* method) 
{
	{
		// return Value.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___Value_1);
		float L_1 = L_0->___x_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float ExpVector2_get_x_m7B9443E95C3C6B12C939F3A94A9266733CFE9702_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF*>(__this + _offset);
	float _returnValue;
	_returnValue = ExpVector2_get_x_m7B9443E95C3C6B12C939F3A94A9266733CFE9702(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ExtendedPrimitives_11.Internal.ExpVector2::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpVector2_set_x_m556FA5A45CD3907069EE8E0167DE2C4D9BEC4283 (ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// Value.x = value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___Value_1);
		float L_1 = ___value0;
		L_0->___x_0 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpVector2_set_x_m556FA5A45CD3907069EE8E0167DE2C4D9BEC4283_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF*>(__this + _offset);
	ExpVector2_set_x_m556FA5A45CD3907069EE8E0167DE2C4D9BEC4283(_thisAdjusted, ___value0, method);
}
// System.Single ExtendedPrimitives_11.Internal.ExpVector2::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ExpVector2_get_y_mD2D765EEA6F08CE620D7466A07CD8176C7110FA2 (ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* __this, const RuntimeMethod* method) 
{
	{
		// return Value.y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___Value_1);
		float L_1 = L_0->___y_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float ExpVector2_get_y_mD2D765EEA6F08CE620D7466A07CD8176C7110FA2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF*>(__this + _offset);
	float _returnValue;
	_returnValue = ExpVector2_get_y_mD2D765EEA6F08CE620D7466A07CD8176C7110FA2(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ExtendedPrimitives_11.Internal.ExpVector2::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpVector2_set_y_m0E78799167E65AAB4C2AC4F6BDF020C649FBA863 (ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// Value.y = value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___Value_1);
		float L_1 = ___value0;
		L_0->___y_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpVector2_set_y_m0E78799167E65AAB4C2AC4F6BDF020C649FBA863_AdjustorThunk (RuntimeObject* __this, float ___value0, const RuntimeMethod* method)
{
	ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF*>(__this + _offset);
	ExpVector2_set_y_m0E78799167E65AAB4C2AC4F6BDF020C649FBA863(_thisAdjusted, ___value0, method);
}
// System.Boolean ExtendedPrimitives_11.Internal.ExpVector2::get_isChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ExpVector2_get_isChanged_m12F74E1CFBFCC2BEE3533A82FC8A2FEEE335B46D (ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// bool result = false;
		V_0 = (bool)0;
		// if ( !Extension.ApproximatelyEquals( Value.x , prevValue.x) || !Extension.ApproximatelyEquals(Value.y, prevValue.y)) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___Value_1);
		float L_1 = L_0->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___prevValue_0);
		float L_3 = L_2->___x_0;
		bool L_4;
		L_4 = Extension_ApproximatelyEquals_mE01DE05B5A935856699A129081D0A76D3E7722F8(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___Value_1);
		float L_6 = L_5->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___prevValue_0);
		float L_8 = L_7->___y_1;
		bool L_9;
		L_9 = Extension_ApproximatelyEquals_mE01DE05B5A935856699A129081D0A76D3E7722F8(L_6, L_8, NULL);
		if (L_9)
		{
			goto IL_004a;
		}
	}

IL_003c:
	{
		// prevValue = Value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___Value_1;
		__this->___prevValue_0 = L_10;
		// result = true;
		V_0 = (bool)1;
	}

IL_004a:
	{
		// return result;
		bool L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  bool ExpVector2_get_isChanged_m12F74E1CFBFCC2BEE3533A82FC8A2FEEE335B46D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF*>(__this + _offset);
	bool _returnValue;
	_returnValue = ExpVector2_get_isChanged_m12F74E1CFBFCC2BEE3533A82FC8A2FEEE335B46D(_thisAdjusted, method);
	return _returnValue;
}
// System.Void ExtendedPrimitives_11.Internal.ExpVector2::set_isChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpVector2_set_isChanged_m61E37775C69B348E1B54F6A8EAF20780FB7AAAAA (ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// if (value) {
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// prevValue = -Value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = __this->___Value_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline(L_1, NULL);
		__this->___prevValue_0 = L_2;
		return;
	}

IL_0015:
	{
		// prevValue = Value;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___Value_1;
		__this->___prevValue_0 = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ExpVector2_set_isChanged_m61E37775C69B348E1B54F6A8EAF20780FB7AAAAA_AdjustorThunk (RuntimeObject* __this, bool ___value0, const RuntimeMethod* method)
{
	ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF*>(__this + _offset);
	ExpVector2_set_isChanged_m61E37775C69B348E1B54F6A8EAF20780FB7AAAAA(_thisAdjusted, ___value0, method);
}
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.ExpVector2::op_Implicit(ExtendedPrimitives_11.Internal.ExpVector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ExpVector2_op_Implicit_m5A77D406DFA9AFB1B009CCF9EA8CF964A2F79E67 (ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF ___i0, const RuntimeMethod* method) 
{
	{
		// return i.Value;
		ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF L_0 = ___i0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = L_0.___Value_1;
		return L_1;
	}
}
// ExtendedPrimitives_11.Internal.ExpVector2 ExtendedPrimitives_11.Internal.ExpVector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF ExpVector2_op_Implicit_mFBF3F3C8150DEC94C536F43BAFD533FDC247F728 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___i0, const RuntimeMethod* method) 
{
	{
		// return new ExpVector2(i);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___i0;
		ExpVector2_tB3B6D8E656537A296EEE97686BC25BC778050EAF L_1;
		memset((&L_1), 0, sizeof(L_1));
		ExpVector2__ctor_m061A563587BEE0E1667191AA813D54877825CE28((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.A_ExpBool::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A_ExpBool__ctor_m84DCED7733BCF1DB10A20A43A5295E9C0C851890 (A_ExpBool_t2219105D9695E9FA97970EE44161E3256A6F21C1* __this, String_t* ___tooltip0, bool ___isButton1, const RuntimeMethod* method) 
{
	{
		// public A_ExpBool(string tooltip, bool isButton) {
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// Tooltip = tooltip;
		String_t* L_0 = ___tooltip0;
		__this->___Tooltip_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tooltip_0), (void*)L_0);
		// IsButton = isButton;
		bool L_1 = ___isButton1;
		__this->___IsButton_1 = L_1;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.A_ExpInt::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A_ExpInt__ctor_mA9EEA0CF9FDA314EFDFB835C5F309310A2D9B9BC (A_ExpInt_t8C3CD667A6586350588BD30E9C7AF7F11C09011E* __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method) 
{
	{
		// public A_ExpInt(int min, int max) {
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// IsSlider = true;
		__this->___IsSlider_0 = (bool)1;
		// Min = min;
		int32_t L_0 = ___min0;
		__this->___Min_2 = L_0;
		// Max = max;
		int32_t L_1 = ___max1;
		__this->___Max_3 = L_1;
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.A_ExpInt::.ctor(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A_ExpInt__ctor_m90B321AF44716F1ABF6753BA6587826ADFABF35C (A_ExpInt_t8C3CD667A6586350588BD30E9C7AF7F11C09011E* __this, int32_t ___min0, int32_t ___max1, String_t* ___tooltip2, const RuntimeMethod* method) 
{
	{
		// public A_ExpInt(int min, int max, string tooltip) {
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// IsSlider = true;
		__this->___IsSlider_0 = (bool)1;
		// Min = min;
		int32_t L_0 = ___min0;
		__this->___Min_2 = L_0;
		// Max = max;
		int32_t L_1 = ___max1;
		__this->___Max_3 = L_1;
		// Tooltip = tooltip;
		String_t* L_2 = ___tooltip2;
		__this->___Tooltip_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tooltip_1), (void*)L_2);
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.A_ExpInt::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A_ExpInt__ctor_m87DEFADC0904E0126DC71AAA4F743CB7FF4296A2 (A_ExpInt_t8C3CD667A6586350588BD30E9C7AF7F11C09011E* __this, String_t* ___tooltip0, const RuntimeMethod* method) 
{
	{
		// public A_ExpInt(string tooltip) {
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// IsSlider = false;
		__this->___IsSlider_0 = (bool)0;
		// Tooltip = tooltip;
		String_t* L_0 = ___tooltip0;
		__this->___Tooltip_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tooltip_1), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.A_ExpFloat::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A_ExpFloat__ctor_m55979A4182B0BBB8F7FA4F53413713F65B594B54 (A_ExpFloat_tB7200A9108956CE2C80EA271E5BCFE530C95A847* __this, float ___min0, float ___max1, const RuntimeMethod* method) 
{
	{
		// public A_ExpFloat(float min, float max) {
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// IsSlider = true;
		__this->___IsSlider_0 = (bool)1;
		// Min = min;
		float L_0 = ___min0;
		__this->___Min_2 = L_0;
		// Max = max;
		float L_1 = ___max1;
		__this->___Max_3 = L_1;
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.A_ExpFloat::.ctor(System.Single,System.Single,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A_ExpFloat__ctor_m9C3EE75519B0B54D75E08DCEF729688632ED88CC (A_ExpFloat_tB7200A9108956CE2C80EA271E5BCFE530C95A847* __this, float ___min0, float ___max1, String_t* ___tooltip2, const RuntimeMethod* method) 
{
	{
		// public A_ExpFloat(float min, float max, string tooltip) {
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// IsSlider = true;
		__this->___IsSlider_0 = (bool)1;
		// Min = min;
		float L_0 = ___min0;
		__this->___Min_2 = L_0;
		// Max = max;
		float L_1 = ___max1;
		__this->___Max_3 = L_1;
		// Tooltip = tooltip;
		String_t* L_2 = ___tooltip2;
		__this->___Tooltip_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tooltip_1), (void*)L_2);
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.A_ExpFloat::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A_ExpFloat__ctor_mFC77D61196F5B4F03D1B191CD17A4029AFDCBDC0 (A_ExpFloat_tB7200A9108956CE2C80EA271E5BCFE530C95A847* __this, String_t* ___tooltip0, const RuntimeMethod* method) 
{
	{
		// public A_ExpFloat(string tooltip) {
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// IsSlider = false;
		__this->___IsSlider_0 = (bool)0;
		// Tooltip = tooltip;
		String_t* L_0 = ___tooltip0;
		__this->___Tooltip_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tooltip_1), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.A_ExpColor32::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A_ExpColor32__ctor_m2BAB81353F3C2EB85EB17837A1E08FFF9CDAC886 (A_ExpColor32_t1A17B44C6BC2E52E23E74B7044EF52B655EDA408* __this, String_t* ___tooltip0, const RuntimeMethod* method) 
{
	{
		// public A_ExpColor32(string tooltip) {
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// Tooltip = tooltip;
		String_t* L_0 = ___tooltip0;
		__this->___Tooltip_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tooltip_0), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.A_ExpGradient::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A_ExpGradient__ctor_m7B89D72BE6FEAECFEBF9406859EB8CBA70CD2958 (A_ExpGradient_tFD39074918823B461796FC692589BB847018F5D9* __this, String_t* ___tooltip0, const RuntimeMethod* method) 
{
	{
		// public A_ExpGradient(string tooltip) {
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// Tooltip = tooltip;
		String_t* L_0 = ___tooltip0;
		__this->___Tooltip_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tooltip_0), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.A_ExpVector2::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void A_ExpVector2__ctor_m247A0CAB59C0838B0967284839548F248489FB34 (A_ExpVector2_tF59C8CD3B27B215CA7E78C21CE9C6370A677B89D* __this, String_t* ___tooltip0, const RuntimeMethod* method) 
{
	{
		// public A_ExpVector2(string tooltip) {
		PropertyAttribute__ctor_m19247686E165101F140615C7306DC2DA3953D97D(__this, NULL);
		// Tooltip = tooltip;
		String_t* L_0 = ___tooltip0;
		__this->___Tooltip_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tooltip_0), (void*)L_0);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.OutlinedFillet::Set(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutlinedFillet_Set_mCA84A6D352F0B30AFF13107F335CFD315C246CB0 (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___c2, float ___radius3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	{
		// A = a;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		__this->___A_0 = L_0;
		// B = b;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___b1;
		__this->___B_1 = L_1;
		// Sign = -Triangle2d.Clockwise(a, b, c);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___c2;
		int32_t L_5;
		L_5 = Triangle2d_Clockwise_m31666E2225915D293832BC8DEDA6B3006BAE4B45(L_2, L_3, L_4, NULL);
		__this->___Sign_4 = ((float)((-L_5)));
		// ClampedRadius = radius;
		float L_6 = ___radius3;
		__this->___ClampedRadius_5 = L_6;
		// ba = b - a;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_7, L_8, NULL);
		__this->___ba_11 = L_9;
		// cb = c - b;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___c2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_10, L_11, NULL);
		__this->___cb_12 = L_12;
		// baMagnitude = ba.magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___ba_11);
		float L_14;
		L_14 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_13, NULL);
		__this->___baMagnitude_13 = L_14;
		// cbMagnitude = cb.magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___cb_12);
		float L_16;
		L_16 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_15, NULL);
		__this->___cbMagnitude_14 = L_16;
		// if (Extension.ApproximatelyZero(baMagnitude) || Extension.ApproximatelyZero(cbMagnitude)) {
		float L_17 = __this->___baMagnitude_13;
		bool L_18;
		L_18 = Extension_ApproximatelyZero_m23CD442F2C7EB64193FBD963840479DA8A4349B3(L_17, NULL);
		if (L_18)
		{
			goto IL_007c;
		}
	}
	{
		float L_19 = __this->___cbMagnitude_14;
		bool L_20;
		L_20 = Extension_ApproximatelyZero_m23CD442F2C7EB64193FBD963840479DA8A4349B3(L_19, NULL);
		if (!L_20)
		{
			goto IL_00a5;
		}
	}

IL_007c:
	{
		// ClampedRadius = 0;
		__this->___ClampedRadius_5 = (0.0f);
		// Center = b;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___b1;
		__this->___Center_6 = L_21;
		// Rot = 0;
		__this->___Rot_2 = (0.0f);
		// Angle = 0;
		__this->___Angle_3 = (0.0f);
		// return;
		return;
	}

IL_00a5:
	{
		// ba = ba / baMagnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = __this->___ba_11;
		float L_23 = __this->___baMagnitude_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_22, L_23, NULL);
		__this->___ba_11 = L_24;
		// cb = cb / cbMagnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = __this->___cb_12;
		float L_26 = __this->___cbMagnitude_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_25, L_26, NULL);
		__this->___cb_12 = L_27;
		// abOrtho = Edge2d.Rotate90(ba);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = __this->___ba_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Edge2d_Rotate90_m409F3CCD7EBB3F60D2F89817FBD7C499A8304957(L_28, NULL);
		__this->___abOrtho_9 = L_29;
		// bcOrtho = Edge2d.Rotate90(cb);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = __this->___cb_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Edge2d_Rotate90_m409F3CCD7EBB3F60D2F89817FBD7C499A8304957(L_30, NULL);
		__this->___bcOrtho_10 = L_31;
		// float baRot = Edge2d.RotationAngle(-ba);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = __this->___ba_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline(L_32, NULL);
		float L_34;
		L_34 = Edge2d_RotationAngle_m52317973048D939B423A592B4221D79477DDDE9E(L_33, NULL);
		V_0 = L_34;
		// float bcRot = Edge2d.RotationAngle(cb);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = __this->___cb_12;
		float L_36;
		L_36 = Edge2d_RotationAngle_m52317973048D939B423A592B4221D79477DDDE9E(L_35, NULL);
		V_1 = L_36;
		// if (Sign == 0) {
		float L_37 = __this->___Sign_4;
		if ((!(((float)L_37) == ((float)(0.0f)))))
		{
			goto IL_016e;
		}
	}
	{
		// Rot = Edge2d.RotationAngle(-abOrtho);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = __this->___abOrtho_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline(L_38, NULL);
		float L_40;
		L_40 = Edge2d_RotationAngle_m52317973048D939B423A592B4221D79477DDDE9E(L_39, NULL);
		__this->___Rot_2 = L_40;
		// Angle = 0;
		__this->___Angle_3 = (0.0f);
		// MiddleDir = abOrtho;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = __this->___abOrtho_9;
		__this->___MiddleDir_15 = L_41;
		// Center = b + MiddleDir * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = __this->___MiddleDir_15;
		float L_44 = ___radius3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45;
		L_45 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_43, L_44, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_42, L_45, NULL);
		__this->___Center_6 = L_46;
		// ClampedRadius = radius;
		float L_47 = ___radius3;
		__this->___ClampedRadius_5 = L_47;
		// return;
		return;
	}

IL_016e:
	{
		// float deltaAngle = Extension.DeltaAngleRad(baRot, bcRot);
		float L_48 = V_0;
		float L_49 = V_1;
		float L_50;
		L_50 = Extension_DeltaAngleRad_m665F34914B1A2436BFD8D2248DC0321B0DCF0121(L_48, L_49, NULL);
		V_2 = L_50;
		// float  delataAngleSign = Mathf.Sign(deltaAngle);
		float L_51 = V_2;
		float L_52;
		L_52 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(L_51, NULL);
		V_3 = L_52;
		// Angle = deltaAngle - Mathf.PI * delataAngleSign;
		float L_53 = V_2;
		float L_54 = V_3;
		__this->___Angle_3 = ((float)il2cpp_codegen_subtract(L_53, ((float)il2cpp_codegen_multiply((3.14159274f), L_54))));
		// Rot = baRot - 1.570796f * delataAngleSign;
		float L_55 = V_0;
		float L_56 = V_3;
		__this->___Rot_2 = ((float)il2cpp_codegen_subtract(L_55, ((float)il2cpp_codegen_multiply((1.57079601f), L_56))));
		// float midDirRotation = baRot + deltaAngle / 2;
		float L_57 = V_0;
		float L_58 = V_2;
		V_4 = ((float)il2cpp_codegen_add(L_57, ((float)(L_58/(2.0f)))));
		// MiddleDir = new Vector2(Mathf.Cos(midDirRotation), Mathf.Sin(midDirRotation));
		float L_59 = V_4;
		float L_60;
		L_60 = cosf(L_59);
		float L_61 = V_4;
		float L_62;
		L_62 = sinf(L_61);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_63), L_60, L_62, /*hidden argument*/NULL);
		__this->___MiddleDir_15 = L_63;
		// Vector2 aMidIntersect = new Vector2();
		il2cpp_codegen_initobj((&V_5), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// Vector2 cMidIntersect = new Vector2();
		il2cpp_codegen_initobj((&V_6), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// if (Extension.LineLineItersection(a, abOrtho, b, MiddleDir, ref aMidIntersect)) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = ___a0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65 = __this->___abOrtho_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67 = __this->___MiddleDir_15;
		bool L_68;
		L_68 = Extension_LineLineItersection_mB507787B3409ED765BB6C6C9AA01E5AA004BFACE(L_64, L_65, L_66, L_67, (&V_5), NULL);
		if (!L_68)
		{
			goto IL_0203;
		}
	}
	{
		// float aMidIntersectDist = Vector2.Distance(aMidIntersect, a);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70 = ___a0;
		float L_71;
		L_71 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_69, L_70, NULL);
		V_9 = L_71;
		// ClampedRadius = Mathf.Min(ClampedRadius, aMidIntersectDist);
		float L_72 = __this->___ClampedRadius_5;
		float L_73 = V_9;
		float L_74;
		L_74 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_72, L_73, NULL);
		__this->___ClampedRadius_5 = L_74;
	}

IL_0203:
	{
		// if (Extension.LineLineItersection(c, bcOrtho, b, MiddleDir, ref cMidIntersect)) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75 = ___c2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76 = __this->___bcOrtho_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_78 = __this->___MiddleDir_15;
		bool L_79;
		L_79 = Extension_LineLineItersection_mB507787B3409ED765BB6C6C9AA01E5AA004BFACE(L_75, L_76, L_77, L_78, (&V_6), NULL);
		if (!L_79)
		{
			goto IL_0237;
		}
	}
	{
		// float cMidIntersectDist = Vector2.Distance(cMidIntersect, c);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81 = ___c2;
		float L_82;
		L_82 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_80, L_81, NULL);
		V_10 = L_82;
		// ClampedRadius = Mathf.Min(ClampedRadius, cMidIntersectDist);
		float L_83 = __this->___ClampedRadius_5;
		float L_84 = V_10;
		float L_85;
		L_85 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_83, L_84, NULL);
		__this->___ClampedRadius_5 = L_85;
	}

IL_0237:
	{
		// float tan = Mathf.Tan((deltaAngle - Mathf.PI) / 2);
		float L_86 = V_2;
		float L_87;
		L_87 = tanf(((float)(((float)il2cpp_codegen_subtract(L_86, (3.14159274f)))/(2.0f))));
		// float opposite = tan * ClampedRadius;
		float L_88 = __this->___ClampedRadius_5;
		V_7 = ((float)il2cpp_codegen_multiply(L_87, L_88));
		// float midDirLength = Mathf.Sqrt(ClampedRadius * ClampedRadius + opposite * opposite);
		float L_89 = __this->___ClampedRadius_5;
		float L_90 = __this->___ClampedRadius_5;
		float L_91 = V_7;
		float L_92 = V_7;
		float L_93;
		L_93 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_89, L_90)), ((float)il2cpp_codegen_multiply(L_91, L_92)))));
		V_8 = L_93;
		// Center = b + MiddleDir * midDirLength;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_94 = ___b1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95 = __this->___MiddleDir_15;
		float L_96 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_97;
		L_97 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_95, L_96, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98;
		L_98 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_94, L_97, NULL);
		__this->___Center_6 = L_98;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void OutlinedFillet_Set_mCA84A6D352F0B30AFF13107F335CFD315C246CB0_AdjustorThunk (RuntimeObject* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___c2, float ___radius3, const RuntimeMethod* method)
{
	OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9*>(__this + _offset);
	OutlinedFillet_Set_mCA84A6D352F0B30AFF13107F335CFD315C246CB0(_thisAdjusted, ___a0, ___b1, ___c2, ___radius3, method);
}
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::GetPoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_GetPoint_m3CFB47920B67651903D4623BA8750D3101165E01 (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, float ___lv0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float a = Rot + Angle * lv;
		float L_0 = __this->___Rot_2;
		float L_1 = __this->___Angle_3;
		float L_2 = ___lv0;
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// float x = Center.x + Mathf.Cos(a) * ClampedRadius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___Center_6);
		float L_4 = L_3->___x_0;
		float L_5 = V_0;
		float L_6;
		L_6 = cosf(L_5);
		float L_7 = __this->___ClampedRadius_5;
		// float y = Center.y + Mathf.Sin(a) * ClampedRadius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___Center_6);
		float L_9 = L_8->___y_1;
		float L_10 = V_0;
		float L_11;
		L_11 = sinf(L_10);
		float L_12 = __this->___ClampedRadius_5;
		V_1 = ((float)il2cpp_codegen_add(L_9, ((float)il2cpp_codegen_multiply(L_11, L_12))));
		// return new Vector2(x, y);
		float L_13 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(L_6, L_7)))), L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_GetPoint_m3CFB47920B67651903D4623BA8750D3101165E01_AdjustorThunk (RuntimeObject* __this, float ___lv0, const RuntimeMethod* method)
{
	OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = OutlinedFillet_GetPoint_m3CFB47920B67651903D4623BA8750D3101165E01(_thisAdjusted, ___lv0, method);
	return _returnValue;
}
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::GetPoint(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_GetPoint_m68C94564B06F82DCCBD9DD856887BD0A95720A43 (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, float ___lv0, float ___radius1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float a = Rot + Angle * lv;
		float L_0 = __this->___Rot_2;
		float L_1 = __this->___Angle_3;
		float L_2 = ___lv0;
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(L_1, L_2))));
		// float x = Center.x + Mathf.Cos(a) * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___Center_6);
		float L_4 = L_3->___x_0;
		float L_5 = V_0;
		float L_6;
		L_6 = cosf(L_5);
		float L_7 = ___radius1;
		// float y = Center.y + Mathf.Sin(a) * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___Center_6);
		float L_9 = L_8->___y_1;
		float L_10 = V_0;
		float L_11;
		L_11 = sinf(L_10);
		float L_12 = ___radius1;
		V_1 = ((float)il2cpp_codegen_add(L_9, ((float)il2cpp_codegen_multiply(L_11, L_12))));
		// return new Vector2(x, y);
		float L_13 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(L_6, L_7)))), L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_GetPoint_m68C94564B06F82DCCBD9DD856887BD0A95720A43_AdjustorThunk (RuntimeObject* __this, float ___lv0, float ___radius1, const RuntimeMethod* method)
{
	OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = OutlinedFillet_GetPoint_m68C94564B06F82DCCBD9DD856887BD0A95720A43(_thisAdjusted, ___lv0, ___radius1, method);
	return _returnValue;
}
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::GetInnerOutlinePoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_GetInnerOutlinePoint_m26600B1D1F8F050F2275296ACD43A9CC221FB8FA (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, float ___lv0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// if (Sign < 0) {
		float L_0 = __this->___Sign_4;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_005b;
		}
	}
	{
		// float r = ClampedRadius + InnerOutline;
		float L_1 = __this->___ClampedRadius_5;
		float L_2 = __this->___InnerOutline_7;
		V_0 = ((float)il2cpp_codegen_add(L_1, L_2));
		// float a = Rot + Angle * lv;
		float L_3 = __this->___Rot_2;
		float L_4 = __this->___Angle_3;
		float L_5 = ___lv0;
		V_1 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(L_4, L_5))));
		// float x = Center.x + Mathf.Cos(a) * r;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___Center_6);
		float L_7 = L_6->___x_0;
		float L_8 = V_1;
		float L_9;
		L_9 = cosf(L_8);
		float L_10 = V_0;
		// float y = Center.y + Mathf.Sin(a) * r;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___Center_6);
		float L_12 = L_11->___y_1;
		float L_13 = V_1;
		float L_14;
		L_14 = sinf(L_13);
		float L_15 = V_0;
		V_2 = ((float)il2cpp_codegen_add(L_12, ((float)il2cpp_codegen_multiply(L_14, L_15))));
		// return new Vector2(x, y);
		float L_16 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), ((float)il2cpp_codegen_add(L_7, ((float)il2cpp_codegen_multiply(L_9, L_10)))), L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_005b:
	{
		// if (InnerOutline < ClampedRadius) {
		float L_18 = __this->___InnerOutline_7;
		float L_19 = __this->___ClampedRadius_5;
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_00bf;
		}
	}
	{
		// float r = (ClampedRadius - InnerOutline);
		float L_20 = __this->___ClampedRadius_5;
		float L_21 = __this->___InnerOutline_7;
		V_4 = ((float)il2cpp_codegen_subtract(L_20, L_21));
		// float a = Rot + Angle * lv;
		float L_22 = __this->___Rot_2;
		float L_23 = __this->___Angle_3;
		float L_24 = ___lv0;
		V_5 = ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(L_23, L_24))));
		// float x = Center.x + Mathf.Cos(a) * r;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = (&__this->___Center_6);
		float L_26 = L_25->___x_0;
		float L_27 = V_5;
		float L_28;
		L_28 = cosf(L_27);
		float L_29 = V_4;
		// float y = Center.y + Mathf.Sin(a) * r;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30 = (&__this->___Center_6);
		float L_31 = L_30->___y_1;
		float L_32 = V_5;
		float L_33;
		L_33 = sinf(L_32);
		float L_34 = V_4;
		V_6 = ((float)il2cpp_codegen_add(L_31, ((float)il2cpp_codegen_multiply(L_33, L_34))));
		// return new Vector2(x, y);
		float L_35 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_36), ((float)il2cpp_codegen_add(L_26, ((float)il2cpp_codegen_multiply(L_28, L_29)))), L_35, /*hidden argument*/NULL);
		return L_36;
	}

IL_00bf:
	{
		// Vector2 result = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_3 = L_37;
		// Extension.LineLineItersection(B, MiddleDir, A - abOrtho * InnerOutline, -ba, ref result);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = __this->___B_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = __this->___MiddleDir_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40 = __this->___A_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = __this->___abOrtho_9;
		float L_42 = __this->___InnerOutline_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		L_43 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_41, L_42, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_40, L_43, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = __this->___ba_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline(L_45, NULL);
		bool L_47;
		L_47 = Extension_LineLineItersection_mB507787B3409ED765BB6C6C9AA01E5AA004BFACE(L_38, L_39, L_44, L_46, (&V_3), NULL);
		// return result;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48 = V_3;
		return L_48;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_GetInnerOutlinePoint_m26600B1D1F8F050F2275296ACD43A9CC221FB8FA_AdjustorThunk (RuntimeObject* __this, float ___lv0, const RuntimeMethod* method)
{
	OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = OutlinedFillet_GetInnerOutlinePoint_m26600B1D1F8F050F2275296ACD43A9CC221FB8FA(_thisAdjusted, ___lv0, method);
	return _returnValue;
}
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::GetOuterOutlinePoint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_GetOuterOutlinePoint_mDAA8A00322D5013AE033F34F0C78C9E6F53D872A (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, float ___lv0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	{
		// if (Sign <= 0) {
		float L_0 = __this->___Sign_4;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_00af;
		}
	}
	{
		// if (OuterOutline < ClampedRadius) {
		float L_1 = __this->___OuterOutline_8;
		float L_2 = __this->___ClampedRadius_5;
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_006c;
		}
	}
	{
		// float r = ClampedRadius - OuterOutline;
		float L_3 = __this->___ClampedRadius_5;
		float L_4 = __this->___OuterOutline_8;
		V_1 = ((float)il2cpp_codegen_subtract(L_3, L_4));
		// float a = Rot + Angle * lv;
		float L_5 = __this->___Rot_2;
		float L_6 = __this->___Angle_3;
		float L_7 = ___lv0;
		V_2 = ((float)il2cpp_codegen_add(L_5, ((float)il2cpp_codegen_multiply(L_6, L_7))));
		// float x = Center.x + Mathf.Cos(a) * r;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = (&__this->___Center_6);
		float L_9 = L_8->___x_0;
		float L_10 = V_2;
		float L_11;
		L_11 = cosf(L_10);
		float L_12 = V_1;
		// float y = Center.y + Mathf.Sin(a) * r;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___Center_6);
		float L_14 = L_13->___y_1;
		float L_15 = V_2;
		float L_16;
		L_16 = sinf(L_15);
		float L_17 = V_1;
		V_3 = ((float)il2cpp_codegen_add(L_14, ((float)il2cpp_codegen_multiply(L_16, L_17))));
		// return new Vector2(x, y);
		float L_18 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_19), ((float)il2cpp_codegen_add(L_9, ((float)il2cpp_codegen_multiply(L_11, L_12)))), L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_006c:
	{
		// Vector2 result = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_0 = L_20;
		// Extension.LineLineItersection(B, MiddleDir, A + abOrtho * OuterOutline, -ba, ref result);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = __this->___B_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = __this->___MiddleDir_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = __this->___A_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = __this->___abOrtho_9;
		float L_25 = __this->___OuterOutline_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_24, L_25, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		L_27 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_23, L_26, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = __this->___ba_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline(L_28, NULL);
		bool L_30;
		L_30 = Extension_LineLineItersection_mB507787B3409ED765BB6C6C9AA01E5AA004BFACE(L_21, L_22, L_27, L_29, (&V_0), NULL);
		// return result;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_0;
		return L_31;
	}

IL_00af:
	{
		// float r =  ClampedRadius + OuterOutline ;
		float L_32 = __this->___ClampedRadius_5;
		float L_33 = __this->___OuterOutline_8;
		V_4 = ((float)il2cpp_codegen_add(L_32, L_33));
		// float a = Rot + Angle * lv;
		float L_34 = __this->___Rot_2;
		float L_35 = __this->___Angle_3;
		float L_36 = ___lv0;
		V_5 = ((float)il2cpp_codegen_add(L_34, ((float)il2cpp_codegen_multiply(L_35, L_36))));
		// float x = Center.x + Mathf.Cos(a) * r;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_37 = (&__this->___Center_6);
		float L_38 = L_37->___x_0;
		float L_39 = V_5;
		float L_40;
		L_40 = cosf(L_39);
		float L_41 = V_4;
		// float y = Center.y + Mathf.Sin(a) * r;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_42 = (&__this->___Center_6);
		float L_43 = L_42->___y_1;
		float L_44 = V_5;
		float L_45;
		L_45 = sinf(L_44);
		float L_46 = V_4;
		V_6 = ((float)il2cpp_codegen_add(L_43, ((float)il2cpp_codegen_multiply(L_45, L_46))));
		// return new Vector2(x, y);
		float L_47 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_48), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(L_40, L_41)))), L_47, /*hidden argument*/NULL);
		return L_48;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_GetOuterOutlinePoint_mDAA8A00322D5013AE033F34F0C78C9E6F53D872A_AdjustorThunk (RuntimeObject* __this, float ___lv0, const RuntimeMethod* method)
{
	OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = OutlinedFillet_GetOuterOutlinePoint_mDAA8A00322D5013AE033F34F0C78C9E6F53D872A(_thisAdjusted, ___lv0, method);
	return _returnValue;
}
// System.Single ExtendedPrimitives_11.Internal.OutlinedFillet::GetOuterOutlineLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OutlinedFillet_GetOuterOutlineLength_m48B3FCC9180E8DA003F998123A9D3A006871C5C5 (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, const RuntimeMethod* method) 
{
	{
		// if (Sign < 0) {
		float L_0 = __this->___Sign_4;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_003b;
		}
	}
	{
		// if (OuterOutline < ClampedRadius) {
		float L_1 = __this->___OuterOutline_8;
		float L_2 = __this->___ClampedRadius_5;
		if ((!(((float)L_1) < ((float)L_2))))
		{
			goto IL_0035;
		}
	}
	{
		// return (ClampedRadius - OuterOutline) * Mathf.Abs(Angle);
		float L_3 = __this->___ClampedRadius_5;
		float L_4 = __this->___OuterOutline_8;
		float L_5 = __this->___Angle_3;
		float L_6;
		L_6 = fabsf(L_5);
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_3, L_4)), L_6));
	}

IL_0035:
	{
		// return 0;
		return (0.0f);
	}

IL_003b:
	{
		// return (ClampedRadius + OuterOutline) * Mathf.Abs(Angle);
		float L_7 = __this->___ClampedRadius_5;
		float L_8 = __this->___OuterOutline_8;
		float L_9 = __this->___Angle_3;
		float L_10;
		L_10 = fabsf(L_9);
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_7, L_8)), L_10));
	}
}
IL2CPP_EXTERN_C  float OutlinedFillet_GetOuterOutlineLength_m48B3FCC9180E8DA003F998123A9D3A006871C5C5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9*>(__this + _offset);
	float _returnValue;
	_returnValue = OutlinedFillet_GetOuterOutlineLength_m48B3FCC9180E8DA003F998123A9D3A006871C5C5(_thisAdjusted, method);
	return _returnValue;
}
// System.Single ExtendedPrimitives_11.Internal.OutlinedFillet::GetInnerOutlineLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OutlinedFillet_GetInnerOutlineLength_m430217C1B0429BFA409B7A505AB90EC26A0FF550 (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, const RuntimeMethod* method) 
{
	{
		// if (Sign < 0) {
		float L_0 = __this->___Sign_4;
		if ((!(((float)L_0) < ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// return (ClampedRadius + InnerOutline) * Mathf.Abs(Angle);
		float L_1 = __this->___ClampedRadius_5;
		float L_2 = __this->___InnerOutline_7;
		float L_3 = __this->___Angle_3;
		float L_4;
		L_4 = fabsf(L_3);
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_add(L_1, L_2)), L_4));
	}

IL_0027:
	{
		// if (InnerOutline < ClampedRadius) {
		float L_5 = __this->___InnerOutline_7;
		float L_6 = __this->___ClampedRadius_5;
		if ((!(((float)L_5) < ((float)L_6))))
		{
			goto IL_004f;
		}
	}
	{
		// return (ClampedRadius - InnerOutline) * Mathf.Abs(Angle);
		float L_7 = __this->___ClampedRadius_5;
		float L_8 = __this->___InnerOutline_7;
		float L_9 = __this->___Angle_3;
		float L_10;
		L_10 = fabsf(L_9);
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_7, L_8)), L_10));
	}

IL_004f:
	{
		// return 0;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C  float OutlinedFillet_GetInnerOutlineLength_m430217C1B0429BFA409B7A505AB90EC26A0FF550_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9*>(__this + _offset);
	float _returnValue;
	_returnValue = OutlinedFillet_GetInnerOutlineLength_m430217C1B0429BFA409B7A505AB90EC26A0FF550(_thisAdjusted, method);
	return _returnValue;
}
// System.Single ExtendedPrimitives_11.Internal.OutlinedFillet::GetFilletLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float OutlinedFillet_GetFilletLength_m7BFDE9002F1FECCCE6AB59CCBDEDE928D8EFEFE8 (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, const RuntimeMethod* method) 
{
	{
		// return ClampedRadius * Mathf.Abs(Angle);
		float L_0 = __this->___ClampedRadius_5;
		float L_1 = __this->___Angle_3;
		float L_2;
		L_2 = fabsf(L_1);
		return ((float)il2cpp_codegen_multiply(L_0, L_2));
	}
}
IL2CPP_EXTERN_C  float OutlinedFillet_GetFilletLength_m7BFDE9002F1FECCCE6AB59CCBDEDE928D8EFEFE8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9*>(__this + _offset);
	float _returnValue;
	_returnValue = OutlinedFillet_GetFilletLength_m7BFDE9002F1FECCCE6AB59CCBDEDE928D8EFEFE8(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::get_FilletBeginPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_get_FilletBeginPoint_m0256661518CDF5532BE33B64F514D4048F310874 (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, const RuntimeMethod* method) 
{
	{
		// return GetPoint(0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = OutlinedFillet_GetPoint_m3CFB47920B67651903D4623BA8750D3101165E01(__this, (0.0f), NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_get_FilletBeginPoint_m0256661518CDF5532BE33B64F514D4048F310874_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = OutlinedFillet_get_FilletBeginPoint_m0256661518CDF5532BE33B64F514D4048F310874(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector2 ExtendedPrimitives_11.Internal.OutlinedFillet::get_FilletEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_get_FilletEndPoint_m54D7B18DC361F6EAF4C643AF06FBCDA4BBD5C998 (OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* __this, const RuntimeMethod* method) 
{
	{
		// return GetPoint(1f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = OutlinedFillet_GetPoint_m3CFB47920B67651903D4623BA8750D3101165E01(__this, (1.0f), NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 OutlinedFillet_get_FilletEndPoint_m54D7B18DC361F6EAF4C643AF06FBCDA4BBD5C998_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9*>(__this + _offset);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _returnValue;
	_returnValue = OutlinedFillet_get_FilletEndPoint_m54D7B18DC361F6EAF4C643AF06FBCDA4BBD5C998(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.GizmosExtension::DrawPoint(UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GizmosExtension_DrawPoint_mA1806336199ED541783345D9A8EAFE17A18D0334 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, float ___size1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// Gizmos.color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___color2;
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		// float halfSize = size / 2;
		float L_1 = ___size1;
		V_0 = ((float)(L_1/(2.0f)));
		// Gizmos.DrawLine(pos + Vector3.up * halfSize, pos - Vector3.up * halfSize);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_9 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_10, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_6, L_11, NULL);
		// Gizmos.DrawLine(pos + Vector3.right * halfSize, pos - Vector3.right * halfSize);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		float L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		float L_19 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_17, L_20, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_16, L_21, NULL);
		// Gizmos.DrawLine(pos + Vector3.forward * halfSize, pos - Vector3.forward * halfSize);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_24 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_22, L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_29 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_27, L_30, NULL);
		Gizmos_DrawLine_mB139054F55D615637A39A3127AADB16043387F8A(L_26, L_31, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.HorizontalCorner::.ctor(System.Boolean,ExtendedPrimitives_11.ExtendedPrimitive,System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Element>,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalCorner__ctor_m9589DD98FFC6BB22303CB1B050B344E63BA0DEBD (HorizontalCorner_tC026C2646D5CDDC1EFF412E4C4A1F232C3A27C9E* __this, bool ___displayed0, ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* ____ep1, List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* ___eList2, bool ___flipNormals3, int32_t ___filletSegments4, int32_t ___radialSegments5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t G_B3_0 = 0;
	HorizontalCorner_tC026C2646D5CDDC1EFF412E4C4A1F232C3A27C9E* G_B5_0 = NULL;
	HorizontalCorner_tC026C2646D5CDDC1EFF412E4C4A1F232C3A27C9E* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	HorizontalCorner_tC026C2646D5CDDC1EFF412E4C4A1F232C3A27C9E* G_B6_1 = NULL;
	{
		// public HorizontalCorner(bool displayed, ExtendedPrimitive _ep, List<Element> eList, bool flipNormals, int filletSegments, int radialSegments) {
		Element__ctor_mDB22061F7FB986E21DF9889FE888A2BA49205420(__this, NULL);
		// Displayed = displayed;
		bool L_0 = ___displayed0;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0 = L_0;
		// eList.Add(this);
		List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* L_1 = ___eList2;
		NullCheck(L_1);
		List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_inline(L_1, __this, List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		// parent = _ep;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_2 = ____ep1;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5), (void*)L_2);
		// flipNormals = parent.FlipNormals ? !flipNormals : flipNormals;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_3 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExtendedPrimitives_11.ExtendedPrimitive::get_FlipNormals() */, L_3);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		bool L_5 = ___flipNormals3;
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0031;
	}

IL_002c:
	{
		bool L_6 = ___flipNormals3;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0031:
	{
		___flipNormals3 = (bool)G_B3_0;
		// NormalSign = parent.FlipNormals ? -1f : 1f;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_7 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExtendedPrimitives_11.ExtendedPrimitive::get_FlipNormals() */, L_7);
		G_B4_0 = __this;
		if (L_8)
		{
			G_B5_0 = __this;
			goto IL_0048;
		}
	}
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B4_0;
		goto IL_004d;
	}

IL_0048:
	{
		G_B6_0 = (-1.0f);
		G_B6_1 = G_B5_0;
	}

IL_004d:
	{
		NullCheck(G_B6_1);
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)G_B6_1)->___NormalSign_21 = G_B6_0;
		// SegmentsX = radialSegments;
		int32_t L_9 = ___radialSegments5;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6 = L_9;
		// SegmentsY = filletSegments;
		int32_t L_10 = ___filletSegments4;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7 = L_10;
		// LengthX = SegmentsX + 1;
		int32_t L_11 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// LengthY = SegmentsY + 1;
		int32_t L_12 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// vertices = new Vertex[LengthX * LengthY];
		int32_t L_13 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		int32_t L_14 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_15 = (VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)SZArrayNew(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_13, L_14)));
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10), (void*)L_15);
		// for (int y = 0; y < LengthY; y++) {
		V_0 = 0;
		goto IL_0124;
	}

IL_009d:
	{
		// for (int x = 0; x < LengthX; x++) {
		V_1 = 0;
		goto IL_0117;
	}

IL_00a1:
	{
		// Vertex vert = new Vertex(ref parent.vertsCounter, new Vector2(x / (float)SegmentsX, y / (float)SegmentsY));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_16 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_16);
		int32_t* L_17 = (&L_16->___vertsCounter_26);
		int32_t L_18 = V_1;
		int32_t L_19 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_20 = V_0;
		int32_t L_21 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), ((float)(((float)L_18)/((float)L_19))), ((float)(((float)L_20)/((float)L_21))), /*hidden argument*/NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_23 = (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)il2cpp_codegen_object_new(Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Vertex__ctor_mA971C36E661FEC1EB7F3B31BA80BB9F2918643D3(L_23, L_17, L_22, NULL);
		V_2 = L_23;
		// vert.LocalX = x;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_24 = V_2;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		L_24->___LocalX_0 = L_25;
		// vert.LocalY = y;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_26 = V_2;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		L_26->___LocalY_1 = L_27;
		// if (!Displayed) {
		bool L_28 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (L_28)
		{
			goto IL_00f4;
		}
	}
	{
		// parent.vertsCounter--;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_29 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_30 = L_29;
		NullCheck(L_30);
		int32_t L_31 = L_30->___vertsCounter_26;
		NullCheck(L_30);
		L_30->___vertsCounter_26 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
	}

IL_00f4:
	{
		// vert.Col.a = vert.NormalizedCoords.y;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_32 = V_2;
		NullCheck(L_32);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_33 = (&L_32->___Col_10);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_34 = V_2;
		NullCheck(L_34);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_35 = (&L_34->___NormalizedCoords_14);
		float L_36 = L_35->___y_1;
		L_33->___a_3 = L_36;
		// this[x, y] = vert;
		int32_t L_37 = V_1;
		int32_t L_38 = V_0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_39 = V_2;
		VirtualActionInvoker3< int32_t, int32_t, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* >::Invoke(5 /* System.Void ExtendedPrimitives_11.Internal.Element::set_Item(System.Int32,System.Int32,ExtendedPrimitives_11.Internal.Vertex) */, __this, L_37, L_38, L_39);
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0117:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_41 = V_1;
		int32_t L_42 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_00a1;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_43 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_0124:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_44 = V_0;
		int32_t L_45 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_009d;
		}
	}
	{
		// CreateLayoutArrays();
		Element_CreateLayoutArrays_mD9D4604B5653AD456A66C6D4E29D33122527E6BD(__this, NULL);
		// if (Displayed) {
		bool L_46 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_46)
		{
			goto IL_0263;
		}
	}
	{
		// for (int y = 0; y < SegmentsY; y++) {
		V_3 = 0;
		goto IL_019c;
	}

IL_0145:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		V_4 = 0;
		goto IL_018e;
	}

IL_014a:
	{
		// BuildQuad(flipNormals, parent.Faces, this[x, y], this[x, y + 1], this[x + 1, y + 1], this[x + 1, y]);
		bool L_47 = ___flipNormals3;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_48 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_48);
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_49 = L_48->___Faces_17;
		int32_t L_50 = V_4;
		int32_t L_51 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_52;
		L_52 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_50, L_51);
		int32_t L_53 = V_4;
		int32_t L_54 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_55;
		L_55 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_53, ((int32_t)il2cpp_codegen_add(L_54, 1)));
		int32_t L_56 = V_4;
		int32_t L_57 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_58;
		L_58 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_56, 1)), ((int32_t)il2cpp_codegen_add(L_57, 1)));
		int32_t L_59 = V_4;
		int32_t L_60 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_61;
		L_61 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_59, 1)), L_60);
		Element_BuildQuad_mA3F4F5EDDC213CC056BEE9CF209CC1A27637DC70(L_47, L_49, L_52, L_55, L_58, L_61, NULL);
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_62 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_018e:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_63 = V_4;
		int32_t L_64 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_014a;
		}
	}
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_65 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_019c:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_66 = V_3;
		int32_t L_67 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_0145;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		V_5 = 0;
		goto IL_01fa;
	}

IL_01aa:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		V_6 = 0;
		goto IL_01ea;
	}

IL_01af:
	{
		// parent.MEdges.Add(new MeshEdge(this[x, y], this[x + 1, y]));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_68 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_68);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_69 = L_68->___MEdges_16;
		int32_t L_70 = V_6;
		int32_t L_71 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_72;
		L_72 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_70, L_71);
		int32_t L_73;
		L_73 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_72, NULL);
		int32_t L_74 = V_6;
		int32_t L_75 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_76;
		L_76 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_74, 1)), L_75);
		int32_t L_77;
		L_77 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_76, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_78;
		memset((&L_78), 0, sizeof(L_78));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_78), L_73, L_77, /*hidden argument*/NULL);
		NullCheck(L_69);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_69, L_78, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_79 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_79, 1));
	}

IL_01ea:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_80 = V_6;
		int32_t L_81 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		if ((((int32_t)L_80) < ((int32_t)L_81)))
		{
			goto IL_01af;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_82 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01fa:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_83 = V_5;
		int32_t L_84 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_01aa;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		V_7 = 0;
		goto IL_0259;
	}

IL_0209:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		V_8 = 0;
		goto IL_0249;
	}

IL_020e:
	{
		// parent.MEdges.Add(new MeshEdge(this[x, y], this[x, y + 1]));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_85 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_85);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_86 = L_85->___MEdges_16;
		int32_t L_87 = V_7;
		int32_t L_88 = V_8;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_89;
		L_89 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_87, L_88);
		int32_t L_90;
		L_90 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_89, NULL);
		int32_t L_91 = V_7;
		int32_t L_92 = V_8;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_93;
		L_93 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_91, ((int32_t)il2cpp_codegen_add(L_92, 1)));
		int32_t L_94;
		L_94 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_93, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_95;
		memset((&L_95), 0, sizeof(L_95));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_95), L_90, L_94, /*hidden argument*/NULL);
		NullCheck(L_86);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_86, L_95, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_96 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_0249:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_97 = V_8;
		int32_t L_98 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		if ((((int32_t)L_97) < ((int32_t)L_98)))
		{
			goto IL_020e;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_99 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_99, 1));
	}

IL_0259:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_100 = V_7;
		int32_t L_101 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_100) < ((int32_t)L_101)))
		{
			goto IL_0209;
		}
	}

IL_0263:
	{
		// yRotMatrices = new Matrix2d[LengthX];
		int32_t L_102 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_103 = (Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D*)(Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D*)SZArrayNew(Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D_il2cpp_TypeInfo_var, (uint32_t)L_102);
		__this->___yRotMatrices_24 = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___yRotMatrices_24), (void*)L_103);
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.HorizontalCorner::SetPositionAndSize(System.Boolean,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalCorner_SetPositionAndSize_mA049398B3C0BCE5870654FF3FCF6B03E167865D6 (HorizontalCorner_tC026C2646D5CDDC1EFF412E4C4A1F232C3A27C9E* __this, bool ___outlineOnly0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____prev1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____this2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____next3, float ___fillet4, float ___capfillet5, float ___yPos6, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	int32_t V_11 = 0;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	float V_16 = 0.0f;
	int32_t V_17 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_18 = NULL;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_19 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	float V_23 = 0.0f;
	int32_t V_24 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_25 = NULL;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_26 = NULL;
	int32_t V_27 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_28 = NULL;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_29 = NULL;
	int32_t G_B3_0 = 0;
	float G_B9_0 = 0.0f;
	float G_B12_0 = 0.0f;
	int32_t G_B19_0 = 0;
	int32_t G_B29_0 = 0;
	{
		// bool isClockwice = Triangle2d.IsClockwise(_prev, _this, _next);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ____prev1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ____this2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ____next3;
		bool L_3;
		L_3 = Triangle2d_IsClockwise_m5B90012A2AE29FE014C50686F235206BF99C80BD(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// Vector2 _prevDir = _this - _prev;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ____this2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ____prev1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_4, L_5, NULL);
		V_1 = L_6;
		// Vector2 _nextDir = _this - _next;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ____this2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ____next3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_7, L_8, NULL);
		V_2 = L_9;
		// yPos -= capfillet;
		float L_10 = ___yPos6;
		float L_11 = ___capfillet5;
		___yPos6 = ((float)il2cpp_codegen_subtract(L_10, L_11));
		// float clockwiseSign = isClockwice ? 1 : -1;
		bool L_12 = V_0;
		if (L_12)
		{
			goto IL_0028;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 1;
	}

IL_0029:
	{
		V_3 = ((float)G_B3_0);
		// Vector2 _prevDirOrtho = Edge2d.Rotate90(_prevDir.normalized) * clockwiseSign;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Edge2d_Rotate90_m409F3CCD7EBB3F60D2F89817FBD7C499A8304957(L_13, NULL);
		float L_15 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_14, L_15, NULL);
		V_4 = L_16;
		// Vector2 _nextDirOrtho = -Edge2d.Rotate90(_nextDir.normalized) * clockwiseSign;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_2), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Edge2d_Rotate90_m409F3CCD7EBB3F60D2F89817FBD7C499A8304957(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline(L_18, NULL);
		float L_20 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_19, L_20, NULL);
		V_5 = L_21;
		// Vector2 filletCenter = new Vector2();
		il2cpp_codegen_initobj((&V_6), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		// Extension.LineLineItersection(_prev + _prevDirOrtho * fillet, _prevDir, _next + _nextDirOrtho * fillet, _nextDir, ref filletCenter);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = ____prev1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = V_4;
		float L_24 = ___fillet4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_23, L_24, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_22, L_25, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = ____next3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_5;
		float L_30 = ___fillet4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_29, L_30, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_28, L_31, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_2;
		bool L_34;
		L_34 = Extension_LineLineItersection_mB507787B3409ED765BB6C6C9AA01E5AA004BFACE(L_26, L_27, L_32, L_33, (&V_6), NULL);
		// float xOffset = fillet - capfillet;
		float L_35 = ___fillet4;
		float L_36 = ___capfillet5;
		V_7 = ((float)il2cpp_codegen_subtract(L_35, L_36));
		// float normalSign  = NormalSign *  clockwiseSign;
		float L_37 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___NormalSign_21;
		float L_38 = V_3;
		V_8 = ((float)il2cpp_codegen_multiply(L_37, L_38));
		// for (int y = 0; y < LengthY; y++) {
		V_11 = 0;
		goto IL_0134;
	}

IL_00a2:
	{
		// float ya = this[0, y].NormalizedCoords.y * r90;
		int32_t L_39 = V_11;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_40;
		L_40 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_39);
		NullCheck(L_40);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_41 = (&L_40->___NormalizedCoords_14);
		float L_42 = L_41->___y_1;
		// float nX = Mathf.Cos(ya);
		float L_43 = ((float)il2cpp_codegen_multiply(L_42, (1.57079625f)));
		float L_44;
		L_44 = cosf(L_43);
		V_12 = L_44;
		// float nY = Mathf.Sin(ya);
		float L_45;
		L_45 = sinf(L_43);
		V_13 = L_45;
		// Vertex v = this[0, y];
		int32_t L_46 = V_11;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_47;
		L_47 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_46);
		// v.RefNormal = new Vector3(nX, nY, 0) ;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_48 = L_47;
		float L_49 = V_12;
		float L_50 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_51), L_49, L_50, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_48);
		L_48->___RefNormal_4 = L_51;
		// v.RefPos = v.RefNormal * capfillet;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_52 = L_48;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_53 = L_52;
		NullCheck(L_53);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = L_53->___RefNormal_4;
		float L_55 = ___capfillet5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_54, L_55, NULL);
		NullCheck(L_53);
		L_53->___RefPos_6 = L_56;
		// v.RefPos.x += xOffset;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_57 = L_52;
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_58 = (&L_57->___RefPos_6);
		float* L_59 = (&L_58->___x_2);
		float* L_60 = L_59;
		float L_61 = *((float*)L_60);
		float L_62 = V_7;
		*((float*)L_60) = (float)((float)il2cpp_codegen_add(L_61, L_62));
		// v.RefPos.y += yPos;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_63 = L_57;
		NullCheck(L_63);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_64 = (&L_63->___RefPos_6);
		float* L_65 = (&L_64->___y_3);
		float* L_66 = L_65;
		float L_67 = *((float*)L_66);
		float L_68 = ___yPos6;
		*((float*)L_66) = (float)((float)il2cpp_codegen_add(L_67, L_68));
		// v.RefNormal *= normalSign;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_69 = L_63;
		NullCheck(L_69);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = L_69->___RefNormal_4;
		float L_71 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_70, L_71, NULL);
		NullCheck(L_69);
		L_69->___RefNormal_4 = L_72;
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_73 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_0134:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_74 = V_11;
		int32_t L_75 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_00a2;
		}
	}
	{
		// float rotAngleFrom = Edge2d.RotationAngle(_this, _next) + r90;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_76 = ____this2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77 = ____next3;
		float L_78;
		L_78 = Edge2d_RotationAngle_mDA59E98D34F31AFD81859623DB70E6AE8D8E3DB9(L_76, L_77, NULL);
		V_9 = ((float)il2cpp_codegen_add(L_78, (1.57079625f)));
		// rotAngleFrom = rotAngleFrom < 0 ? rotAngleFrom + r360 : rotAngleFrom;
		float L_79 = V_9;
		if ((((float)L_79) < ((float)(0.0f))))
		{
			goto IL_015e;
		}
	}
	{
		float L_80 = V_9;
		G_B9_0 = L_80;
		goto IL_0166;
	}

IL_015e:
	{
		float L_81 = V_9;
		G_B9_0 = ((float)il2cpp_codegen_add(L_81, (6.28318501f)));
	}

IL_0166:
	{
		V_9 = G_B9_0;
		// float rotAngleTo = Edge2d.RotationAngle( _this, _prev ) - r90;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = ____this2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83 = ____prev1;
		float L_84;
		L_84 = Edge2d_RotationAngle_mDA59E98D34F31AFD81859623DB70E6AE8D8E3DB9(L_82, L_83, NULL);
		V_10 = ((float)il2cpp_codegen_subtract(L_84, (1.57079625f)));
		// rotAngleTo = rotAngleTo < 0 ? rotAngleTo + r360 : rotAngleTo;
		float L_85 = V_10;
		if ((((float)L_85) < ((float)(0.0f))))
		{
			goto IL_0184;
		}
	}
	{
		float L_86 = V_10;
		G_B12_0 = L_86;
		goto IL_018c;
	}

IL_0184:
	{
		float L_87 = V_10;
		G_B12_0 = ((float)il2cpp_codegen_add(L_87, (6.28318501f)));
	}

IL_018c:
	{
		V_10 = G_B12_0;
		// if (!isClockwice) {
		bool L_88 = V_0;
		if (L_88)
		{
			goto IL_01a5;
		}
	}
	{
		// float _rotAngleFrom = rotAngleFrom;
		float L_89 = V_9;
		// float _rotAngleTo = rotAngleTo;
		float L_90 = V_10;
		// rotAngleFrom = _rotAngleTo + r180;
		V_9 = ((float)il2cpp_codegen_add(L_90, (3.1415925f)));
		// rotAngleTo = _rotAngleFrom + r180;
		V_10 = ((float)il2cpp_codegen_add(L_89, (3.1415925f)));
	}

IL_01a5:
	{
		// angle =  (rotAngleTo  - rotAngleFrom + r360) % r360  ;
		float L_91 = V_10;
		float L_92 = V_9;
		__this->___angle_23 = (fmodf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(L_91, L_92)), (6.28318501f))), (6.28318501f)));
		// if (Displayed) {
		bool L_93 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_93)
		{
			goto IL_02e6;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		V_14 = 0;
		goto IL_02d8;
	}

IL_01cf:
	{
		// int _x = isClockwice ? x : SegmentsX - x;
		bool L_94 = V_0;
		if (L_94)
		{
			goto IL_01dd;
		}
	}
	{
		int32_t L_95 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_96 = V_14;
		G_B19_0 = ((int32_t)il2cpp_codegen_subtract(L_95, L_96));
		goto IL_01df;
	}

IL_01dd:
	{
		int32_t L_97 = V_14;
		G_B19_0 = L_97;
	}

IL_01df:
	{
		V_15 = G_B19_0;
		// float rotation = rotAngleFrom + angle * this[_x, 0].NormalizedCoords.x;
		float L_98 = V_9;
		float L_99 = __this->___angle_23;
		int32_t L_100 = V_15;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_101;
		L_101 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_100, 0);
		NullCheck(L_101);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_102 = (&L_101->___NormalizedCoords_14);
		float L_103 = L_102->___x_0;
		V_16 = ((float)il2cpp_codegen_add(L_98, ((float)il2cpp_codegen_multiply(L_99, L_103))));
		// yRotMatrices[x] = new Matrix2d(rotation);
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_104 = __this->___yRotMatrices_24;
		int32_t L_105 = V_14;
		float L_106 = V_16;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_107;
		memset((&L_107), 0, sizeof(L_107));
		Matrix2d__ctor_m9E71271929F7DF381898399D3ED5F523542C00FC((&L_107), L_106, /*hidden argument*/NULL);
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(L_105), (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D)L_107);
		// yRotMatrices[x].Position = filletCenter;
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_108 = __this->___yRotMatrices_24;
		int32_t L_109 = V_14;
		NullCheck(L_108);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_110 = V_6;
		Matrix2d_set_Position_mD838CB941C6435377986552E6DEE53DAB15F1798(((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_109))), L_110, NULL);
		// for (int y = 0; y < LengthY; y++) {
		V_17 = 0;
		goto IL_02c5;
	}

IL_0230:
	{
		// Vertex v = this[x, y];
		int32_t L_111 = V_14;
		int32_t L_112 = V_17;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_113;
		L_113 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_111, L_112);
		V_18 = L_113;
		// Vertex refVert = this[0, y];
		int32_t L_114 = V_17;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_115;
		L_115 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_114);
		V_19 = L_115;
		// v.Pos = parent.mvertices[v] = yRotMatrices[x].MultiplyPointY(refVert.RefPos);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_116 = V_18;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_117 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_117);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_118 = L_117->___mvertices_18;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_119 = V_18;
		int32_t L_120;
		L_120 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_119, NULL);
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_121 = __this->___yRotMatrices_24;
		int32_t L_122 = V_14;
		NullCheck(L_121);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_123 = V_19;
		NullCheck(L_123);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124 = L_123->___RefPos_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125;
		L_125 = Matrix2d_MultiplyPointY_mF09D4CD0799D7F4DD424FC6B0E6CEBB564F6D5B0(((L_121)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_122))), L_124, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = L_125;
		V_20 = L_126;
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(L_120), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_126);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127 = V_20;
		NullCheck(L_116);
		L_116->___Pos_7 = L_127;
		// v.Normal = parent.mnormals[v] = yRotMatrices[x].MultiplyVectorY(refVert.RefNormal);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_128 = V_18;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_129 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_129);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_130 = L_129->___mnormals_19;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_131 = V_18;
		int32_t L_132;
		L_132 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_131, NULL);
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_133 = __this->___yRotMatrices_24;
		int32_t L_134 = V_14;
		NullCheck(L_133);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_135 = V_19;
		NullCheck(L_135);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136 = L_135->___RefNormal_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137;
		L_137 = Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4(((L_133)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_134))), L_136, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138 = L_137;
		V_20 = L_138;
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(L_132), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_138);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139 = V_20;
		NullCheck(L_128);
		L_128->___Normal_5 = L_139;
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_140 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_140, 1));
	}

IL_02c5:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_141 = V_17;
		int32_t L_142 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_141) < ((int32_t)L_142)))
		{
			goto IL_0230;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_143 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_02d8:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_144 = V_14;
		int32_t L_145 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_01cf;
		}
	}
	{
		return;
	}

IL_02e6:
	{
		// for (int x = 0; x < LengthX; x++) {
		V_21 = 0;
		goto IL_034a;
	}

IL_02eb:
	{
		// int _x = isClockwice ? x : SegmentsX - x;
		bool L_146 = V_0;
		if (L_146)
		{
			goto IL_02f9;
		}
	}
	{
		int32_t L_147 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_148 = V_21;
		G_B29_0 = ((int32_t)il2cpp_codegen_subtract(L_147, L_148));
		goto IL_02fb;
	}

IL_02f9:
	{
		int32_t L_149 = V_21;
		G_B29_0 = L_149;
	}

IL_02fb:
	{
		V_22 = G_B29_0;
		// float rotation = rotAngleFrom + angle * this[_x, 0].NormalizedCoords.x;
		float L_150 = V_9;
		float L_151 = __this->___angle_23;
		int32_t L_152 = V_22;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_153;
		L_153 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_152, 0);
		NullCheck(L_153);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_154 = (&L_153->___NormalizedCoords_14);
		float L_155 = L_154->___x_0;
		V_23 = ((float)il2cpp_codegen_add(L_150, ((float)il2cpp_codegen_multiply(L_151, L_155))));
		// yRotMatrices[x] = new Matrix2d(rotation);
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_156 = __this->___yRotMatrices_24;
		int32_t L_157 = V_21;
		float L_158 = V_23;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_159;
		memset((&L_159), 0, sizeof(L_159));
		Matrix2d__ctor_m9E71271929F7DF381898399D3ED5F523542C00FC((&L_159), L_158, /*hidden argument*/NULL);
		NullCheck(L_156);
		(L_156)->SetAt(static_cast<il2cpp_array_size_t>(L_157), (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D)L_159);
		// yRotMatrices[x].Position = filletCenter;
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_160 = __this->___yRotMatrices_24;
		int32_t L_161 = V_21;
		NullCheck(L_160);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_162 = V_6;
		Matrix2d_set_Position_mD838CB941C6435377986552E6DEE53DAB15F1798(((L_160)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_161))), L_162, NULL);
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_163 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_163, 1));
	}

IL_034a:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_164 = V_21;
		int32_t L_165 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_164) < ((int32_t)L_165)))
		{
			goto IL_02eb;
		}
	}
	{
		// if (outlineOnly) {
		bool L_166 = ___outlineOnly0;
		if (!L_166)
		{
			goto IL_03d4;
		}
	}
	{
		// for (int i = 0; i < Outline.Length; i++) {
		V_24 = 0;
		goto IL_03c7;
	}

IL_035c:
	{
		// Vertex v = Outline[i];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_167 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Outline_20;
		int32_t L_168 = V_24;
		NullCheck(L_167);
		int32_t L_169 = L_168;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		V_25 = L_170;
		// Vertex refVert = this[0, v.LocalY];
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_171 = V_25;
		NullCheck(L_171);
		int32_t L_172 = L_171->___LocalY_1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_173;
		L_173 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_172);
		V_26 = L_173;
		// v.Pos = yRotMatrices[v.LocalX].MultiplyPointY(refVert.RefPos);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_174 = V_25;
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_175 = __this->___yRotMatrices_24;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_176 = V_25;
		NullCheck(L_176);
		int32_t L_177 = L_176->___LocalX_0;
		NullCheck(L_175);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_178 = V_26;
		NullCheck(L_178);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_179 = L_178->___RefPos_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_180;
		L_180 = Matrix2d_MultiplyPointY_mF09D4CD0799D7F4DD424FC6B0E6CEBB564F6D5B0(((L_175)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_177))), L_179, NULL);
		NullCheck(L_174);
		L_174->___Pos_7 = L_180;
		// v.Normal = yRotMatrices[v.LocalX].MultiplyVectorY(refVert.RefNormal);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_181 = V_25;
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_182 = __this->___yRotMatrices_24;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_183 = V_25;
		NullCheck(L_183);
		int32_t L_184 = L_183->___LocalX_0;
		NullCheck(L_182);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_185 = V_26;
		NullCheck(L_185);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_186 = L_185->___RefNormal_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_187;
		L_187 = Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4(((L_182)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_184))), L_186, NULL);
		NullCheck(L_181);
		L_181->___Normal_5 = L_187;
		// for (int i = 0; i < Outline.Length; i++) {
		int32_t L_188 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_188, 1));
	}

IL_03c7:
	{
		// for (int i = 0; i < Outline.Length; i++) {
		int32_t L_189 = V_24;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_190 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Outline_20;
		NullCheck(L_190);
		if ((((int32_t)L_189) < ((int32_t)((int32_t)(((RuntimeArray*)L_190)->max_length)))))
		{
			goto IL_035c;
		}
	}
	{
		return;
	}

IL_03d4:
	{
		// for (int i = 0; i < vertices.Length; i++) {
		V_27 = 0;
		goto IL_0444;
	}

IL_03d9:
	{
		// Vertex v = vertices[i];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_191 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_192 = V_27;
		NullCheck(L_191);
		int32_t L_193 = L_192;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_194 = (L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		V_28 = L_194;
		// Vertex refVert = this[0, v.LocalY];
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_195 = V_28;
		NullCheck(L_195);
		int32_t L_196 = L_195->___LocalY_1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_197;
		L_197 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_196);
		V_29 = L_197;
		// v.Pos = yRotMatrices[v.LocalX].MultiplyPointY(refVert.RefPos);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_198 = V_28;
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_199 = __this->___yRotMatrices_24;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_200 = V_28;
		NullCheck(L_200);
		int32_t L_201 = L_200->___LocalX_0;
		NullCheck(L_199);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_202 = V_29;
		NullCheck(L_202);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_203 = L_202->___RefPos_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_204;
		L_204 = Matrix2d_MultiplyPointY_mF09D4CD0799D7F4DD424FC6B0E6CEBB564F6D5B0(((L_199)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_201))), L_203, NULL);
		NullCheck(L_198);
		L_198->___Pos_7 = L_204;
		// v.Normal = yRotMatrices[v.LocalX].MultiplyVectorY(refVert.RefNormal);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_205 = V_28;
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_206 = __this->___yRotMatrices_24;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_207 = V_28;
		NullCheck(L_207);
		int32_t L_208 = L_207->___LocalX_0;
		NullCheck(L_206);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_209 = V_29;
		NullCheck(L_209);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_210 = L_209->___RefNormal_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_211;
		L_211 = Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4(((L_206)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_208))), L_210, NULL);
		NullCheck(L_205);
		L_205->___Normal_5 = L_211;
		// for (int i = 0; i < vertices.Length; i++) {
		int32_t L_212 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_212, 1));
	}

IL_0444:
	{
		// for (int i = 0; i < vertices.Length; i++) {
		int32_t L_213 = V_27;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_214 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_214);
		if ((((int32_t)L_213) < ((int32_t)((int32_t)(((RuntimeArray*)L_214)->max_length)))))
		{
			goto IL_03d9;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.HorizontalCorner::SetPositionAndSize(System.Boolean,ExtendedPrimitives_11.Internal.OutlinedFillet,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalCorner_SetPositionAndSize_mCF09649CCE4FA7449AE8C635C7E90311EEE5F5C8 (HorizontalCorner_tC026C2646D5CDDC1EFF412E4C4A1F232C3A27C9E* __this, bool ___outlineOnly0, OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9 ___of1, float ___yPos2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_12 = NULL;
	int32_t V_13 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_14 = NULL;
	{
		// float yOffset = yPos - of.OuterOutline;
		float L_0 = ___yPos2;
		OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9 L_1 = ___of1;
		float L_2 = L_1.___OuterOutline_8;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_2));
		// uvScale.x = Mathf.LerpUnclamped( of.GetFilletLength(), of.GetOuterOutlineLength(), 0.5f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___uvScale_22);
		float L_4;
		L_4 = OutlinedFillet_GetFilletLength_m7BFDE9002F1FECCCE6AB59CCBDEDE928D8EFEFE8((&___of1), NULL);
		float L_5;
		L_5 = OutlinedFillet_GetOuterOutlineLength_m48B3FCC9180E8DA003F998123A9D3A006871C5C5((&___of1), NULL);
		float L_6;
		L_6 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_4, L_5, (0.5f), NULL);
		L_3->___x_0 = L_6;
		// uvScale.y = of.OuterOutline * r90;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___uvScale_22);
		OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9 L_8 = ___of1;
		float L_9 = L_8.___OuterOutline_8;
		L_7->___y_1 = ((float)il2cpp_codegen_multiply(L_9, (1.57079625f)));
		// for (int y = 0; y<LengthY; y++) {
		V_1 = 0;
		goto IL_00c1;
	}

IL_0047:
	{
		// float a = this[0, y].NormalizedCoords.y * r90;
		int32_t L_10 = V_1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_11;
		L_11 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_10);
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&L_11->___NormalizedCoords_14);
		float L_13 = L_12->___y_1;
		V_2 = ((float)il2cpp_codegen_multiply(L_13, (1.57079625f)));
		// Vector3 normal = new Vector3(Mathf.Cos(a), Mathf.Sin(a) , 0);
		float L_14 = V_2;
		float L_15;
		L_15 = cosf(L_14);
		float L_16 = V_2;
		float L_17;
		L_17 = sinf(L_16);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), L_15, L_17, (0.0f), NULL);
		// this[0, y].RefNormal = normal * NormalSign;
		int32_t L_18 = V_1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_19;
		L_19 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_3;
		float L_21 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___NormalSign_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_21, NULL);
		NullCheck(L_19);
		L_19->___RefNormal_4 = L_22;
		// this[0, y].RefPos = new Vector3(normal.x, normal.y * of.OuterOutline + yOffset, 0);
		int32_t L_23 = V_1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_24;
		L_24 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_3;
		float L_26 = L_25.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_3;
		float L_28 = L_27.___y_3;
		OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9 L_29 = ___of1;
		float L_30 = L_29.___OuterOutline_8;
		float L_31 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), L_26, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_28, L_30)), L_31)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		L_24->___RefPos_6 = L_32;
		// for (int y = 0; y<LengthY; y++) {
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00c1:
	{
		// for (int y = 0; y<LengthY; y++) {
		int32_t L_34 = V_1;
		int32_t L_35 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0047;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		V_4 = 0;
		goto IL_0195;
	}

IL_00d5:
	{
		// float lv = this[x, 0].NormalizedCoords.x;
		int32_t L_36 = V_4;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_37;
		L_37 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_36, 0);
		NullCheck(L_37);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_38 = (&L_37->___NormalizedCoords_14);
		float L_39 = L_38->___x_0;
		V_5 = L_39;
		// Vector2 _from = of.GetPoint(lv);
		float L_40 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		L_41 = OutlinedFillet_GetPoint_m3CFB47920B67651903D4623BA8750D3101165E01((&___of1), L_40, NULL);
		V_6 = L_41;
		// Vector2 _to = of.GetOuterOutlinePoint(lv);
		float L_42 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43;
		L_43 = OutlinedFillet_GetOuterOutlinePoint_mDAA8A00322D5013AE033F34F0C78C9E6F53D872A((&___of1), L_42, NULL);
		V_7 = L_43;
		// Matrix2d tmPos = new Matrix2d(_from, _to, false);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = V_7;
		Matrix2d__ctor_m01745626D28DF5B367C189FF35225F18EE22B5C9((&V_8), L_44, L_45, (bool)0, NULL);
		// float na = of.Rot + of.Angle * lv;
		OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9 L_46 = ___of1;
		float L_47 = L_46.___Rot_2;
		OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9 L_48 = ___of1;
		float L_49 = L_48.___Angle_3;
		float L_50 = V_5;
		V_9 = ((float)il2cpp_codegen_add(L_47, ((float)il2cpp_codegen_multiply(L_49, L_50))));
		// if (of.Sign <= 0) {
		OutlinedFillet_t5752F44B1C54FC85D5ED23CA3AC8A6AF1ADA76F9 L_51 = ___of1;
		float L_52 = L_51.___Sign_4;
		if ((!(((float)L_52) <= ((float)(0.0f)))))
		{
			goto IL_0135;
		}
	}
	{
		// na += r180;
		float L_53 = V_9;
		V_9 = ((float)il2cpp_codegen_add(L_53, (3.1415925f)));
	}

IL_0135:
	{
		// Matrix2d tmNorm = new Matrix2d(na);
		float L_54 = V_9;
		Matrix2d__ctor_m9E71271929F7DF381898399D3ED5F523542C00FC((&V_10), L_54, NULL);
		// for (int y = 0; y < LengthY; y++) {
		V_11 = 0;
		goto IL_0185;
	}

IL_0143:
	{
		// Vertex vert = this[x, y];
		int32_t L_55 = V_4;
		int32_t L_56 = V_11;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_57;
		L_57 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_55, L_56);
		// Vertex refvert = this[0, y];
		int32_t L_58 = V_11;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_59;
		L_59 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_58);
		V_12 = L_59;
		// vert.Pos = tmPos.MultiplyPointY(refvert.RefPos);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_60 = L_57;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_61 = V_12;
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = L_61->___RefPos_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Matrix2d_MultiplyPointY_mF09D4CD0799D7F4DD424FC6B0E6CEBB564F6D5B0((&V_8), L_62, NULL);
		NullCheck(L_60);
		L_60->___Pos_7 = L_63;
		// vert.Normal = tmNorm.MultiplyVectorY(refvert.RefNormal);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_64 = V_12;
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = L_64->___RefNormal_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4((&V_10), L_65, NULL);
		NullCheck(L_60);
		L_60->___Normal_5 = L_66;
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_67 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_0185:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_68 = V_11;
		int32_t L_69 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_68) < ((int32_t)L_69)))
		{
			goto IL_0143;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_70 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_0195:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_71 = V_4;
		int32_t L_72 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_00d5;
		}
	}
	{
		// if (Displayed) {
		bool L_73 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_73)
		{
			goto IL_0208;
		}
	}
	{
		// for (int v = 0; v < vertices.Length; v++) {
		V_13 = 0;
		goto IL_01fc;
	}

IL_01af:
	{
		// Vertex vert = vertices[v];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_74 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_75 = V_13;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_14 = L_77;
		// parent.mvertices[vert] = vert.Pos ;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_78 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_78);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_79 = L_78->___mvertices_18;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_80 = V_14;
		int32_t L_81;
		L_81 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_80, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_82 = V_14;
		NullCheck(L_82);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = L_82->___Pos_7;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_83);
		// parent.mnormals[vert] = vert.Normal ;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_84 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_84);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_85 = L_84->___mnormals_19;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_86 = V_14;
		int32_t L_87;
		L_87 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_86, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_88 = V_14;
		NullCheck(L_88);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = L_88->___Normal_5;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_87), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_89);
		// for (int v = 0; v < vertices.Length; v++) {
		int32_t L_90 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_01fc:
	{
		// for (int v = 0; v < vertices.Length; v++) {
		int32_t L_91 = V_13;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_92 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_92);
		if ((((int32_t)L_91) < ((int32_t)((int32_t)(((RuntimeArray*)L_92)->max_length)))))
		{
			goto IL_01af;
		}
	}

IL_0208:
	{
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.HorizontalCorner::SetUVPositionAndSize(System.Boolean,UnityEngine.Vector2[],System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalCorner_SetUVPositionAndSize_mD77ECC3DA19C600D210A08ED7E986491DB0CBBD6 (HorizontalCorner_tC026C2646D5CDDC1EFF412E4C4A1F232C3A27C9E* __this, bool ___outlineOnly0, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs1, float ___capFilletRadius2, float ___filletRadius3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_4 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_10 = NULL;
	{
		// float radOffset = filletRadius - capFilletRadius;
		float L_0 = ___filletRadius3;
		float L_1 = ___capFilletRadius2;
		V_0 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// float radLength = capFilletRadius * r90;
		float L_2 = ___capFilletRadius2;
		V_1 = ((float)il2cpp_codegen_multiply(L_2, (1.57079625f)));
		// if (Displayed) {
		bool L_3 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_3)
		{
			goto IL_008c;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		V_2 = 0;
		goto IL_0082;
	}

IL_0019:
	{
		// for (int y = 0; y < LengthY; y++) {
		V_3 = 0;
		goto IL_0075;
	}

IL_001d:
	{
		// Vertex v = this[x, y];
		int32_t L_4 = V_2;
		int32_t L_5 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_6;
		L_6 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_4, L_5);
		V_4 = L_6;
		// uvs[v] = v.UV = yRotMatrices[x].MultiplyPoint(new Vector2(radOffset + (1f - v.NormalizedCoords.y) * radLength, 0));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_7 = ___uvs1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_8 = V_4;
		int32_t L_9;
		L_9 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_8, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_10 = V_4;
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_11 = __this->___yRotMatrices_24;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		float L_13 = V_0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_14 = V_4;
		NullCheck(L_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&L_14->___NormalizedCoords_14);
		float L_16 = L_15->___y_1;
		float L_17 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), ((float)il2cpp_codegen_add(L_13, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_16)), L_17)))), (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Matrix2d_MultiplyPoint_mBF8C8C2058394C3E7B1BB47732A87F9D2FF7A165(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = L_19;
		V_5 = L_20;
		NullCheck(L_10);
		L_10->___UV_9 = L_20;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_5;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_21);
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0075:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_23 = V_3;
		int32_t L_24 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_001d;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0082:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_26 = V_2;
		int32_t L_27 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_008c:
	{
		// if (outlineOnly) {
		bool L_28 = ___outlineOnly0;
		if (!L_28)
		{
			goto IL_00eb;
		}
	}
	{
		// for (int x = 0; x < Outline.Length; x++) {
		V_6 = 0;
		goto IL_00de;
	}

IL_0094:
	{
		// Vertex v = Outline[x];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_29 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Outline_20;
		int32_t L_30 = V_6;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		V_7 = L_32;
		// v.UV = yRotMatrices[x].MultiplyPoint(new Vector2(radOffset + (1f - v.NormalizedCoords.y) * radLength, 0));
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_33 = V_7;
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_34 = __this->___yRotMatrices_24;
		int32_t L_35 = V_6;
		NullCheck(L_34);
		float L_36 = V_0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_37 = V_7;
		NullCheck(L_37);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_38 = (&L_37->___NormalizedCoords_14);
		float L_39 = L_38->___y_1;
		float L_40 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_41), ((float)il2cpp_codegen_add(L_36, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_39)), L_40)))), (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		L_42 = Matrix2d_MultiplyPoint_mBF8C8C2058394C3E7B1BB47732A87F9D2FF7A165(((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))), L_41, NULL);
		NullCheck(L_33);
		L_33->___UV_9 = L_42;
		// for (int x = 0; x < Outline.Length; x++) {
		int32_t L_43 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00de:
	{
		// for (int x = 0; x < Outline.Length; x++) {
		int32_t L_44 = V_6;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_45 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Outline_20;
		NullCheck(L_45);
		if ((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))
		{
			goto IL_0094;
		}
	}
	{
		return;
	}

IL_00eb:
	{
		// for (int x = 0; x < LengthX; x++) {
		V_8 = 0;
		goto IL_0150;
	}

IL_00f0:
	{
		// for (int y = 0; y < LengthY; y++) {
		V_9 = 0;
		goto IL_0140;
	}

IL_00f5:
	{
		// Vertex v = this[x, y];
		int32_t L_46 = V_8;
		int32_t L_47 = V_9;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_48;
		L_48 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_46, L_47);
		V_10 = L_48;
		// v.UV = yRotMatrices[x].MultiplyPoint(new Vector2(radOffset + (1f - v.NormalizedCoords.y) * radLength, 0));
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_49 = V_10;
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_50 = __this->___yRotMatrices_24;
		int32_t L_51 = V_8;
		NullCheck(L_50);
		float L_52 = V_0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_53 = V_10;
		NullCheck(L_53);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_54 = (&L_53->___NormalizedCoords_14);
		float L_55 = L_54->___y_1;
		float L_56 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_57), ((float)il2cpp_codegen_add(L_52, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_55)), L_56)))), (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		L_58 = Matrix2d_MultiplyPoint_mBF8C8C2058394C3E7B1BB47732A87F9D2FF7A165(((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), L_57, NULL);
		NullCheck(L_49);
		L_49->___UV_9 = L_58;
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_59 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0140:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_60 = V_9;
		int32_t L_61 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_00f5;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_62 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0150:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_63 = V_8;
		int32_t L_64 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_63) < ((int32_t)L_64)))
		{
			goto IL_00f0;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.HorizontalEdge::.ctor(System.Boolean,ExtendedPrimitives_11.ExtendedPrimitive,System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Element>,System.Boolean,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalEdge__ctor_m4A33E7C13396F0CAB484FFB0C97257E4766408B8 (HorizontalEdge_t8E15517F5F37F75115B54750EE5065CB8EBCE152* __this, bool ___displayed0, ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* ___ep1, List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* ___eList2, bool ___flipped3, int32_t ___segments4, bool ___flipAlpha5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t G_B3_0 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B7_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B6_0 = NULL;
	float G_B8_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B8_1 = NULL;
	{
		// public HorizontalEdge(bool displayed, ExtendedPrimitive ep, List<Element> eList, bool flipped, int segments , bool flipAlpha) {
		Element__ctor_mDB22061F7FB986E21DF9889FE888A2BA49205420(__this, NULL);
		// Displayed = displayed;
		bool L_0 = ___displayed0;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0 = L_0;
		// parent = ep;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_1 = ___ep1;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5), (void*)L_1);
		// eList.Add(this);
		List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* L_2 = ___eList2;
		NullCheck(L_2);
		List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_inline(L_2, __this, List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		// flipped = ep.FlipNormals ? !flipped : flipped;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_3 = ___ep1;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExtendedPrimitives_11.ExtendedPrimitive::get_FlipNormals() */, L_3);
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		bool L_5 = ___flipped3;
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002c;
	}

IL_0027:
	{
		bool L_6 = ___flipped3;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_002c:
	{
		___flipped3 = (bool)G_B3_0;
		// SegmentsX = 1;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6 = 1;
		// SegmentsY = segments;
		int32_t L_7 = ___segments4;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7 = L_7;
		// LengthX = SegmentsX + 1;
		int32_t L_8 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// LengthY = SegmentsY + 1;
		int32_t L_9 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// vertices = new Vertex[LengthX * LengthY];
		int32_t L_10 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		int32_t L_11 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_12 = (VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)SZArrayNew(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_10, L_11)));
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10), (void*)L_12);
		// for (int y = 0; y < LengthY; y++) {
		V_0 = 0;
		goto IL_0104;
	}

IL_0078:
	{
		// for (int x = 0; x < LengthX; x++) {
		V_1 = 0;
		goto IL_00f4;
	}

IL_007c:
	{
		// Vertex vert = new Vertex(ref ep.vertsCounter,  new Vector2(x/1f, y/(float)SegmentsY),    y / (float)SegmentsY );
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_13 = ___ep1;
		NullCheck(L_13);
		int32_t* L_14 = (&L_13->___vertsCounter_26);
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		int32_t L_17 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), ((float)(((float)L_15)/(1.0f))), ((float)(((float)L_16)/((float)L_17))), /*hidden argument*/NULL);
		int32_t L_19 = V_0;
		int32_t L_20 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_21 = (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)il2cpp_codegen_object_new(Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Vertex__ctor_m9966433876DF6AEBD36F68B6AFB1498DC29A25EC(L_21, L_14, L_18, ((float)(((float)L_19)/((float)L_20))), NULL);
		V_2 = L_21;
		// vert.Col.a = flipAlpha ? 1f - vert.NormalizedCoords.y : vert.NormalizedCoords.y;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_22 = V_2;
		NullCheck(L_22);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_23 = (&L_22->___Col_10);
		bool L_24 = ___flipAlpha5;
		G_B6_0 = L_23;
		if (L_24)
		{
			G_B7_0 = L_23;
			goto IL_00c0;
		}
	}
	{
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_25 = V_2;
		NullCheck(L_25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_26 = (&L_25->___NormalizedCoords_14);
		float L_27 = L_26->___y_1;
		G_B8_0 = L_27;
		G_B8_1 = G_B6_0;
		goto IL_00d1;
	}

IL_00c0:
	{
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_28 = V_2;
		NullCheck(L_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_29 = (&L_28->___NormalizedCoords_14);
		float L_30 = L_29->___y_1;
		G_B8_0 = ((float)il2cpp_codegen_subtract((1.0f), L_30));
		G_B8_1 = G_B7_0;
	}

IL_00d1:
	{
		G_B8_1->___a_3 = G_B8_0;
		// if (!displayed) {
		bool L_31 = ___displayed0;
		if (L_31)
		{
			goto IL_00e7;
		}
	}
	{
		// ep.vertsCounter--;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_32 = ___ep1;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_33 = L_32;
		NullCheck(L_33);
		int32_t L_34 = L_33->___vertsCounter_26;
		NullCheck(L_33);
		L_33->___vertsCounter_26 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
	}

IL_00e7:
	{
		// this[x, y] = vert;
		int32_t L_35 = V_1;
		int32_t L_36 = V_0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_37 = V_2;
		VirtualActionInvoker3< int32_t, int32_t, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* >::Invoke(5 /* System.Void ExtendedPrimitives_11.Internal.Element::set_Item(System.Int32,System.Int32,ExtendedPrimitives_11.Internal.Vertex) */, __this, L_35, L_36, L_37);
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00f4:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_39 = V_1;
		int32_t L_40 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_007c;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_41 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_0104:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_42 = V_0;
		int32_t L_43 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_0078;
		}
	}
	{
		// base.CreateLayoutArrays();
		Element_CreateLayoutArrays_mD9D4604B5653AD456A66C6D4E29D33122527E6BD(__this, NULL);
		// if (Displayed) {
		bool L_44 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_44)
		{
			goto IL_0215;
		}
	}
	{
		// for (int y = 0; y < SegmentsY; y++) {
		V_3 = 0;
		goto IL_015a;
	}

IL_0125:
	{
		// BuildQuad(flipped, ep.Faces, this[0, y], this[0, y + 1], this[1, y + 1], this[1, y]);
		bool L_45 = ___flipped3;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_46 = ___ep1;
		NullCheck(L_46);
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_47 = L_46->___Faces_17;
		int32_t L_48 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_49;
		L_49 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_48);
		int32_t L_50 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_51;
		L_51 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, ((int32_t)il2cpp_codegen_add(L_50, 1)));
		int32_t L_52 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_53;
		L_53 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 1, ((int32_t)il2cpp_codegen_add(L_52, 1)));
		int32_t L_54 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_55;
		L_55 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 1, L_54);
		Element_BuildQuad_mA3F4F5EDDC213CC056BEE9CF209CC1A27637DC70(L_45, L_47, L_49, L_51, L_53, L_55, NULL);
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_015a:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_57 = V_3;
		int32_t L_58 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0125;
		}
	}
	{
		// for (int y = 0; y <= SegmentsY; y++) {
		V_4 = 0;
		goto IL_019a;
	}

IL_0168:
	{
		// ep.MEdges.Add(new MeshEdge(this[0, y], this[1, y]));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_59 = ___ep1;
		NullCheck(L_59);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_60 = L_59->___MEdges_16;
		int32_t L_61 = V_4;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_62;
		L_62 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_61);
		int32_t L_63;
		L_63 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_62, NULL);
		int32_t L_64 = V_4;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_65;
		L_65 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 1, L_64);
		int32_t L_66;
		L_66 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_65, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_67;
		memset((&L_67), 0, sizeof(L_67));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_67), L_63, L_66, /*hidden argument*/NULL);
		NullCheck(L_60);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_60, L_67, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// for (int y = 0; y <= SegmentsY; y++) {
		int32_t L_68 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_019a:
	{
		// for (int y = 0; y <= SegmentsY; y++) {
		int32_t L_69 = V_4;
		int32_t L_70 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		if ((((int32_t)L_69) <= ((int32_t)L_70)))
		{
			goto IL_0168;
		}
	}
	{
		// for (int y = 0; y < SegmentsY; y++) {
		V_5 = 0;
		goto IL_020b;
	}

IL_01a9:
	{
		// ep.MEdges.Add(new MeshEdge(this[0, y], this[0, y + 1]));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_71 = ___ep1;
		NullCheck(L_71);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_72 = L_71->___MEdges_16;
		int32_t L_73 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_74;
		L_74 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_73);
		int32_t L_75;
		L_75 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_74, NULL);
		int32_t L_76 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_77;
		L_77 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, ((int32_t)il2cpp_codegen_add(L_76, 1)));
		int32_t L_78;
		L_78 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_77, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_79;
		memset((&L_79), 0, sizeof(L_79));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_79), L_75, L_78, /*hidden argument*/NULL);
		NullCheck(L_72);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_72, L_79, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// ep.MEdges.Add(new MeshEdge(this[1, y], this[1, y + 1]));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_80 = ___ep1;
		NullCheck(L_80);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_81 = L_80->___MEdges_16;
		int32_t L_82 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_83;
		L_83 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 1, L_82);
		int32_t L_84;
		L_84 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_83, NULL);
		int32_t L_85 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_86;
		L_86 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 1, ((int32_t)il2cpp_codegen_add(L_85, 1)));
		int32_t L_87;
		L_87 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_86, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_88;
		memset((&L_88), 0, sizeof(L_88));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_88), L_84, L_87, /*hidden argument*/NULL);
		NullCheck(L_81);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_81, L_88, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_89 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_020b:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_90 = V_5;
		int32_t L_91 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_01a9;
		}
	}

IL_0215:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Color ExtendedPrimitives_11.Internal.Vertex::get_DebugColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Vertex_get_DebugColor_m8349951A16F8715A51837EA0F5442F2BFB150149 (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* __this, const RuntimeMethod* method) 
{
	{
		// Color c = Color.Lerp(Color.red, Color.yellow,  NormalizedCoords.x);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___NormalizedCoords_14);
		float L_3 = L_2->___x_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_0, L_1, L_3, NULL);
		// return Color.Lerp(c, Color.green,  NormalizedCoords.y);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		L_5 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_6 = (&__this->___NormalizedCoords_14);
		float L_7 = L_6->___y_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_4, L_5, L_7, NULL);
		return L_8;
	}
}
// System.Void ExtendedPrimitives_11.Internal.Vertex::.ctor(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mCDECFA223DC32B0F3D31929E6FEF3E6B2DF828F4 (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* __this, int32_t* ___verticesCounter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2952044ED6E9480CB8E3A315E64C74A2A47643EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Face> AdjacentFaces = new List<Face>();
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_0 = (List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2*)il2cpp_codegen_object_new(List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2952044ED6E9480CB8E3A315E64C74A2A47643EA(L_0, List_1__ctor_m2952044ED6E9480CB8E3A315E64C74A2A47643EA_RuntimeMethod_var);
		__this->___AdjacentFaces_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AdjacentFaces_12), (void*)L_0);
		// public Vertex(ref int verticesCounter) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Global = verticesCounter;
		int32_t* L_1 = ___verticesCounter0;
		int32_t L_2 = *((int32_t*)L_1);
		__this->___Global_3 = L_2;
		// verticesCounter++;
		int32_t* L_3 = ___verticesCounter0;
		int32_t* L_4 = ___verticesCounter0;
		int32_t L_5 = *((int32_t*)L_4);
		*((int32_t*)L_3) = (int32_t)((int32_t)il2cpp_codegen_add(L_5, 1));
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.Vertex::.ctor(System.Int32&,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mA971C36E661FEC1EB7F3B31BA80BB9F2918643D3 (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* __this, int32_t* ___verticesCounter0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalizedCoords1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2952044ED6E9480CB8E3A315E64C74A2A47643EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Face> AdjacentFaces = new List<Face>();
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_0 = (List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2*)il2cpp_codegen_object_new(List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2952044ED6E9480CB8E3A315E64C74A2A47643EA(L_0, List_1__ctor_m2952044ED6E9480CB8E3A315E64C74A2A47643EA_RuntimeMethod_var);
		__this->___AdjacentFaces_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AdjacentFaces_12), (void*)L_0);
		// public Vertex(ref int verticesCounter, Vector2 normalizedCoords) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Global = verticesCounter;
		int32_t* L_1 = ___verticesCounter0;
		int32_t L_2 = *((int32_t*)L_1);
		__this->___Global_3 = L_2;
		// NormalizedCoords = normalizedCoords;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___normalizedCoords1;
		__this->___NormalizedCoords_14 = L_3;
		// verticesCounter++;
		int32_t* L_4 = ___verticesCounter0;
		int32_t* L_5 = ___verticesCounter0;
		int32_t L_6 = *((int32_t*)L_5);
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add(L_6, 1));
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.Vertex::.ctor(System.Int32&,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_m9966433876DF6AEBD36F68B6AFB1498DC29A25EC (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* __this, int32_t* ___verticesCounter0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalizedCoords1, float ___colorAlpha2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2952044ED6E9480CB8E3A315E64C74A2A47643EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Face> AdjacentFaces = new List<Face>();
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_0 = (List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2*)il2cpp_codegen_object_new(List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2952044ED6E9480CB8E3A315E64C74A2A47643EA(L_0, List_1__ctor_m2952044ED6E9480CB8E3A315E64C74A2A47643EA_RuntimeMethod_var);
		__this->___AdjacentFaces_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AdjacentFaces_12), (void*)L_0);
		// public Vertex(ref int verticesCounter, Vector2 normalizedCoords, float colorAlpha) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Global = verticesCounter;
		int32_t* L_1 = ___verticesCounter0;
		int32_t L_2 = *((int32_t*)L_1);
		__this->___Global_3 = L_2;
		// NormalizedCoords = normalizedCoords;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___normalizedCoords1;
		__this->___NormalizedCoords_14 = L_3;
		// verticesCounter++;
		int32_t* L_4 = ___verticesCounter0;
		int32_t* L_5 = ___verticesCounter0;
		int32_t L_6 = *((int32_t*)L_5);
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add(L_6, 1));
		// Col.a = colorAlpha;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_7 = (&__this->___Col_10);
		float L_8 = ___colorAlpha2;
		L_7->___a_3 = L_8;
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.Vertex::.ctor(System.Int32&,System.Int32&,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mA99B489056B0AFCE32FBA90F0946C16830A4F6F1 (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* __this, int32_t* ___localCounter0, int32_t* ___verticesCounter1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___normalizedCoords2, float ___colorAlpha3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2952044ED6E9480CB8E3A315E64C74A2A47643EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Face> AdjacentFaces = new List<Face>();
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_0 = (List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2*)il2cpp_codegen_object_new(List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2952044ED6E9480CB8E3A315E64C74A2A47643EA(L_0, List_1__ctor_m2952044ED6E9480CB8E3A315E64C74A2A47643EA_RuntimeMethod_var);
		__this->___AdjacentFaces_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AdjacentFaces_12), (void*)L_0);
		// public Vertex(ref int localCounter, ref int verticesCounter, Vector2 normalizedCoords, float colorAlpha) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Global = verticesCounter;
		int32_t* L_1 = ___verticesCounter1;
		int32_t L_2 = *((int32_t*)L_1);
		__this->___Global_3 = L_2;
		// NormalizedCoords = normalizedCoords;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___normalizedCoords2;
		__this->___NormalizedCoords_14 = L_3;
		// verticesCounter++;
		int32_t* L_4 = ___verticesCounter1;
		int32_t* L_5 = ___verticesCounter1;
		int32_t L_6 = *((int32_t*)L_5);
		*((int32_t*)L_4) = (int32_t)((int32_t)il2cpp_codegen_add(L_6, 1));
		// Local = localCounter;
		int32_t* L_7 = ___localCounter0;
		int32_t L_8 = *((int32_t*)L_7);
		__this->___Local_2 = L_8;
		// localCounter++;
		int32_t* L_9 = ___localCounter0;
		int32_t* L_10 = ___localCounter0;
		int32_t L_11 = *((int32_t*)L_10);
		*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add(L_11, 1));
		// Col.a = colorAlpha;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_12 = (&__this->___Col_10);
		float L_13 = ___colorAlpha3;
		L_12->___a_3 = L_13;
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.Vertex::.ctor(System.Int32&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mF9AEFE689362BDDBCE317513256BAB212DD3AE7B (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* __this, int32_t* ___verticesCounter0, float ___colorAlpha1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2952044ED6E9480CB8E3A315E64C74A2A47643EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Face> AdjacentFaces = new List<Face>();
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_0 = (List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2*)il2cpp_codegen_object_new(List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m2952044ED6E9480CB8E3A315E64C74A2A47643EA(L_0, List_1__ctor_m2952044ED6E9480CB8E3A315E64C74A2A47643EA_RuntimeMethod_var);
		__this->___AdjacentFaces_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AdjacentFaces_12), (void*)L_0);
		// public Vertex(ref int verticesCounter, float colorAlpha) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Global = verticesCounter;
		int32_t* L_1 = ___verticesCounter0;
		int32_t L_2 = *((int32_t*)L_1);
		__this->___Global_3 = L_2;
		// verticesCounter++;
		int32_t* L_3 = ___verticesCounter0;
		int32_t* L_4 = ___verticesCounter0;
		int32_t L_5 = *((int32_t*)L_4);
		*((int32_t*)L_3) = (int32_t)((int32_t)il2cpp_codegen_add(L_5, 1));
		// Col.a = colorAlpha;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = (&__this->___Col_10);
		float L_7 = ___colorAlpha1;
		L_6->___a_3 = L_7;
		// }
		return;
	}
}
// System.Int32 ExtendedPrimitives_11.Internal.Vertex::op_Implicit(ExtendedPrimitives_11.Internal.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* ___i0, const RuntimeMethod* method) 
{
	{
		// return i.Global;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_0 = ___i0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Global_3;
		return L_1;
	}
}
// UnityEngine.Color ExtendedPrimitives_11.Internal.Vertex::op_Implicit(ExtendedPrimitives_11.Internal.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Vertex_op_Implicit_mA50890C4651EACDF6BA57D31DFD11B596DD6DC3B (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* ___i0, const RuntimeMethod* method) 
{
	{
		// return i.Col;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_0 = ___i0;
		NullCheck(L_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = L_0->___Col_10;
		return L_1;
	}
}
// System.Void ExtendedPrimitives_11.Internal.Vertex::AddAdjacentFace(ExtendedPrimitives_11.Internal.Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_AddAdjacentFace_m5814C61936FB8BC79F7B789DFD0F7037AD16B7BD (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* __this, Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mDF34CBAB9854577F2EE8F361B0B911A4EAE60CF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEA285FA16F9957C70AC184FE2D18B84BAED3B1A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AdjacentFaces.Add( item ) ;
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_0 = __this->___AdjacentFaces_12;
		Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF* L_1 = ___item0;
		NullCheck(L_0);
		List_1_Add_mDF34CBAB9854577F2EE8F361B0B911A4EAE60CF7_inline(L_0, L_1, List_1_Add_mDF34CBAB9854577F2EE8F361B0B911A4EAE60CF7_RuntimeMethod_var);
		// AdjacentMult = 1f / AdjacentFaces.Count;
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_2 = __this->___AdjacentFaces_12;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_mEA285FA16F9957C70AC184FE2D18B84BAED3B1A9_inline(L_2, List_1_get_Count_mEA285FA16F9957C70AC184FE2D18B84BAED3B1A9_RuntimeMethod_var);
		__this->___AdjacentMult_13 = ((float)((1.0f)/((float)L_3)));
		// }
		return;
	}
}
// System.String ExtendedPrimitives_11.Internal.Vertex::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vertex_ToString_m6A50DCDA94A78182F76EFAA60322B4E2C0A5CE80 (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BA827B79865F018C33CAD4070604E2A54E0FF08);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("Vertex #{0} pos:{1}", Global, Pos);
		int32_t L_0 = __this->___Global_3;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___Pos_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3;
		RuntimeObject* L_5 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral4BA827B79865F018C33CAD4070604E2A54E0FF08, L_2, L_5, NULL);
		return L_6;
	}
}
// System.Void ExtendedPrimitives_11.Internal.Vertex::PrintNormalsAndTangents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex_PrintNormalsAndTangents_mEA5CCD04A2C89EEE1DB5C6C0EE45165E9CBAABBB (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3312B5F5FE977DBC98BFFF43A809C3713ADC6B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED905B208B2448144CF1EE7862B90C0D8624E374);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("normal:{0} tangent:{1}", Normal.ToString("F3" ), Tangent.ToString("F3"));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___Normal_5);
		String_t* L_3;
		L_3 = Vector3_ToString_m3185BD544ED9BA81E88936544EC298C19207BDF1(L_2, _stringLiteralB3312B5F5FE977DBC98BFFF43A809C3713ADC6B9, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* L_5 = (&__this->___Tangent_11);
		String_t* L_6;
		L_6 = Vector4_ToString_m4C4C2F9E02CFA5A872366863D9ACDDCF42F643A9(L_5, _stringLiteralB3312B5F5FE977DBC98BFFF43A809C3713ADC6B9, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralED905B208B2448144CF1EE7862B90C0D8624E374, L_4, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.MeshEdge::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A (MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5* __this, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	{
		// A = a;
		int32_t L_0 = ___a0;
		__this->___A_0 = L_0;
		// B = b;
		int32_t L_1 = ___b1;
		__this->___B_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A_AdjustorThunk (RuntimeObject* __this, int32_t ___a0, int32_t ___b1, const RuntimeMethod* method)
{
	MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5*>(__this + _offset);
	MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A(_thisAdjusted, ___a0, ___b1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.Face::.ctor(ExtendedPrimitives_11.Internal.Vertex,ExtendedPrimitives_11.Internal.Vertex,ExtendedPrimitives_11.Internal.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Face__ctor_m0B2031BC5B9108132BF7CCCEA816E9067C9D1F6A (Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF* __this, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* ___va0, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* ___vb1, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* ___vc2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Face(Vertex va, Vertex vb, Vertex vc) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// va.AddAdjacentFace(this);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_0 = ___va0;
		NullCheck(L_0);
		Vertex_AddAdjacentFace_m5814C61936FB8BC79F7B789DFD0F7037AD16B7BD(L_0, __this, NULL);
		// vb.AddAdjacentFace(this);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_1 = ___vb1;
		NullCheck(L_1);
		Vertex_AddAdjacentFace_m5814C61936FB8BC79F7B789DFD0F7037AD16B7BD(L_1, __this, NULL);
		// vc.AddAdjacentFace(this);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_2 = ___vc2;
		NullCheck(L_2);
		Vertex_AddAdjacentFace_m5814C61936FB8BC79F7B789DFD0F7037AD16B7BD(L_2, __this, NULL);
		// v0 = va;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_3 = ___va0;
		int32_t L_4;
		L_4 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_3, NULL);
		__this->___v0_0 = L_4;
		// v1 = vb;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_5 = ___vb1;
		int32_t L_6;
		L_6 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_5, NULL);
		__this->___v1_1 = L_6;
		// v2 = vc;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_7 = ___vc2;
		int32_t L_8;
		L_8 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_7, NULL);
		__this->___v2_2 = L_8;
		// UV0 = new Channel(this);
		Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D* L_9 = (Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D*)il2cpp_codegen_object_new(Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Channel__ctor_m5A5A9A6D2388388336AD7F1F4344B4FF96858BE1(L_9, __this, NULL);
		__this->___UV0_3 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UV0_3), (void*)L_9);
		// UV2 = new Channel(this);
		Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D* L_10 = (Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D*)il2cpp_codegen_object_new(Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Channel__ctor_m5A5A9A6D2388388336AD7F1F4344B4FF96858BE1(L_10, __this, NULL);
		__this->___UV2_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___UV2_4), (void*)L_10);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.Face/Channel::.ctor(ExtendedPrimitives_11.Internal.Face)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Channel__ctor_m5A5A9A6D2388388336AD7F1F4344B4FF96858BE1 (Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D* __this, Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF* ____face0, const RuntimeMethod* method) 
{
	{
		// public Channel(Face _face) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// face = _face;
		Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF* L_0 = ____face0;
		__this->___face_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___face_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.Face/Channel::SetUV(UnityEngine.Vector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Channel_SetUV_m67BA90C8C2B1A540F5E7B2D4C4148EEBE3371F56 (Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D* G_B4_0 = NULL;
	Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D* G_B5_1 = NULL;
	{
		// Vector2 _0 = uvs[face.v0];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_0 = ___uvs0;
		Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF* L_1 = __this->___face_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___v0_0;
		NullCheck(L_0);
		int32_t L_3 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// Vector2 _1 = uvs[face.v1];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = ___uvs0;
		Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF* L_6 = __this->___face_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___v1_1;
		NullCheck(L_5);
		int32_t L_8 = L_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		// Vector2 _2 = uvs[face.v2];
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_10 = ___uvs0;
		Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF* L_11 = __this->___face_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___v2_2;
		NullCheck(L_10);
		int32_t L_13 = L_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		// if (Mathf.Approximately(_1.y, _2.y)) {
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		float L_16 = L_15.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_2;
		float L_18 = L_17.___y_1;
		bool L_19;
		L_19 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_0069;
		}
	}
	{
		// isParallel = true;
		__this->___isParallel_3 = (bool)1;
		// sign = Mathf.Sign(_2.x - _1.x);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_2;
		float L_21 = L_20.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_1;
		float L_23 = L_22.___x_0;
		float L_24;
		L_24 = Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline(((float)il2cpp_codegen_subtract(L_21, L_23)), NULL);
		__this->___sign_2 = L_24;
		return;
	}

IL_0069:
	{
		// isParallel = false;
		__this->___isParallel_3 = (bool)0;
		// tv = (_0.y - _1.y) / (_2.y - _1.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_0;
		float L_26 = L_25.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_1;
		float L_28 = L_27.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29 = V_2;
		float L_30 = L_29.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_1;
		float L_32 = L_31.___y_1;
		__this->___tv_1 = ((float)(((float)il2cpp_codegen_subtract(L_26, L_28))/((float)il2cpp_codegen_subtract(L_30, L_32))));
		// float _x = Mathf.LerpUnclamped(_1.x, _2.x, tv);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33 = V_1;
		float L_34 = L_33.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_2;
		float L_36 = L_35.___x_0;
		float L_37 = __this->___tv_1;
		float L_38;
		L_38 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_34, L_36, L_37, NULL);
		V_3 = L_38;
		// sign = _0.x < _x ? 1 : -1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_0;
		float L_40 = L_39.___x_0;
		float L_41 = V_3;
		G_B3_0 = __this;
		if ((((float)L_40) < ((float)L_41)))
		{
			G_B4_0 = __this;
			goto IL_00b6;
		}
	}
	{
		G_B5_0 = (-1);
		G_B5_1 = G_B3_0;
		goto IL_00b7;
	}

IL_00b6:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_00b7:
	{
		NullCheck(G_B5_1);
		G_B5_1->___sign_2 = ((float)G_B5_0);
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.Face/Channel::UpdateTangents(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Channel_UpdateTangents_mF5F5566C3215E3B569551456AFBD739A6E41CFD7 (Channel_tA7398A1506CDEE1D7EA134683733DEB43F7BA05D* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___mvertices0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 _0 = mvertices[face.v0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___mvertices0;
		Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF* L_1 = __this->___face_0;
		NullCheck(L_1);
		int32_t L_2 = L_1->___v0_0;
		NullCheck(L_0);
		int32_t L_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		// Vector3 _1 = mvertices[face.v1];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = ___mvertices0;
		Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF* L_6 = __this->___face_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___v1_1;
		NullCheck(L_5);
		int32_t L_8 = L_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		// Vector3 _2 = mvertices[face.v2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = ___mvertices0;
		Face_tB4167F2BBCF0AFD3B1B11CF455909C3D762B64AF* L_11 = __this->___face_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___v2_2;
		NullCheck(L_10);
		int32_t L_13 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		// if (isParallel) {
		bool L_15 = __this->___isParallel_3;
		if (!L_15)
		{
			goto IL_0057;
		}
	}
	{
		// tangent = ((_2 - _1) * sign);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_16, L_17, NULL);
		float L_19 = __this->___sign_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		__this->___tangent_4 = L_20;
		return;
	}

IL_0057:
	{
		// Vector3 pointOn12 = Vector3.LerpUnclamped(_1, _2, tv);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_2;
		float L_23 = __this->___tv_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_LerpUnclamped_m4109A459C1DB823310A10B8B1E80CB6877418347_inline(L_21, L_22, L_23, NULL);
		V_3 = L_24;
		// tangent = (pointOn12 - _0) * sign;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_25, L_26, NULL);
		float L_28 = __this->___sign_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, L_28, NULL);
		__this->___tangent_4 = L_29;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.NGonCap::.ctor(System.Boolean,ExtendedPrimitives_11.ExtendedPrimitive,System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Element>,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGonCap__ctor_mAF6F662BA7AD6581EC26C7EDB512069F8343D58F (NGonCap_t0C4EEAA9D6942B60BBECCEA2AEB8B7FC7F74879A* __this, bool ___displayed0, ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* ___ep1, List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* ___eList2, bool ___flipNormals3, int32_t ___filletSegments4, int32_t ___elementsCount5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t G_B3_0 = 0;
	{
		// public NGonCap(bool displayed, ExtendedPrimitive ep, List<Element> eList, bool flipNormals, int filletSegments, int elementsCount) {
		Element__ctor_mDB22061F7FB986E21DF9889FE888A2BA49205420(__this, NULL);
		// Displayed = displayed;
		bool L_0 = ___displayed0;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0 = L_0;
		// parent = ep;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_1 = ___ep1;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5), (void*)L_1);
		// eList.Add(this);
		List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* L_2 = ___eList2;
		NullCheck(L_2);
		List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_inline(L_2, __this, List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		// flipNormals = ep.FlipNormals ? !flipNormals : flipNormals;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_3 = ___ep1;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExtendedPrimitives_11.ExtendedPrimitive::get_FlipNormals() */, L_3);
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		bool L_5 = ___flipNormals3;
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002c;
	}

IL_0027:
	{
		bool L_6 = ___flipNormals3;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_002c:
	{
		___flipNormals3 = (bool)G_B3_0;
		// vertices = new Vertex[(filletSegments + 1) * elementsCount + 1 ];
		int32_t L_7 = ___filletSegments4;
		int32_t L_8 = ___elementsCount5;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_9 = (VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)SZArrayNew(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_7, 1)), L_8)), 1)));
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10), (void*)L_9);
		// int localCounter = 0;
		V_0 = 0;
		// for (int i = 0; i < vertices.Length; i++) {
		V_1 = 0;
		goto IL_0083;
	}

IL_0048:
	{
		// Vertex _vert = new Vertex(ref localCounter, ref ep.vertsCounter, Vector2.zero, 1f);
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_10 = ___ep1;
		NullCheck(L_10);
		int32_t* L_11 = (&L_10->___vertsCounter_26);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_13 = (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)il2cpp_codegen_object_new(Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Vertex__ctor_mA99B489056B0AFCE32FBA90F0946C16830A4F6F1(L_13, (&V_0), L_11, L_12, (1.0f), NULL);
		V_2 = L_13;
		// if (!Displayed) {
		bool L_14 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (L_14)
		{
			goto IL_0076;
		}
	}
	{
		// ep.vertsCounter--;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_15 = ___ep1;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_16 = L_15;
		NullCheck(L_16);
		int32_t L_17 = L_16->___vertsCounter_26;
		NullCheck(L_16);
		L_16->___vertsCounter_26 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
	}

IL_0076:
	{
		// vertices[i] = _vert;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_18 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_19 = V_1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_20 = V_2;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)L_20);
		// for (int i = 0; i < vertices.Length; i++) {
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0083:
	{
		// for (int i = 0; i < vertices.Length; i++) {
		int32_t L_22 = V_1;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_23 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0048;
		}
	}
	{
		// if (Displayed) {
		bool L_24 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_24)
		{
			goto IL_0191;
		}
	}
	{
		// for (int i = 1; i < vertices.Length - 1; i++) {
		V_3 = 1;
		goto IL_00cd;
	}

IL_009d:
	{
		// BuildTriangle(flipNormals, parent.Faces, vertices[0], vertices[i], vertices[i + 1]);
		bool L_25 = ___flipNormals3;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_26 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_26);
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_27 = L_26->___Faces_17;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_28 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_28);
		int32_t L_29 = 0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_31 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_32 = V_3;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_35 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_36 = V_3;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_add(L_36, 1));
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		Element_BuildTriangle_mB92059645D4AC5A46904359E787A6DF46948083C(L_25, L_27, L_30, L_34, L_38, NULL);
		// for (int i = 1; i < vertices.Length - 1; i++) {
		int32_t L_39 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00cd:
	{
		// for (int i = 1; i < vertices.Length - 1; i++) {
		int32_t L_40 = V_3;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_41 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_41)->max_length)), 1)))))
		{
			goto IL_009d;
		}
	}
	{
		// BuildTriangle(flipNormals, parent.Faces, vertices[0], vertices[vertices.Length - 1], vertices[1]);
		bool L_42 = ___flipNormals3;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_43 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_43);
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_44 = L_43->___Faces_17;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_45 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_45);
		int32_t L_46 = 0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_48 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_49 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_49);
		NullCheck(L_48);
		int32_t L_50 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_49)->max_length)), 1));
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_52 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_52);
		int32_t L_53 = 1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		Element_BuildTriangle_mB92059645D4AC5A46904359E787A6DF46948083C(L_42, L_44, L_47, L_51, L_54, NULL);
		// for (int i = 1; i < vertices.Length - 1; i++) {
		V_4 = 1;
		goto IL_014b;
	}

IL_0112:
	{
		// parent.MEdges.Add(new MeshEdge(vertices[i], vertices[i + 1]));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_55 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_55);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_56 = L_55->___MEdges_16;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_57 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_58 = V_4;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		int32_t L_61;
		L_61 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_60, NULL);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_62 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_63 = V_4;
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)il2cpp_codegen_add(L_63, 1));
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		int32_t L_66;
		L_66 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_65, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_67;
		memset((&L_67), 0, sizeof(L_67));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_67), L_61, L_66, /*hidden argument*/NULL);
		NullCheck(L_56);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_56, L_67, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// for (int i = 1; i < vertices.Length - 1; i++) {
		int32_t L_68 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_014b:
	{
		// for (int i = 1; i < vertices.Length - 1; i++) {
		int32_t L_69 = V_4;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_70 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_70);
		if ((((int32_t)L_69) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_70)->max_length)), 1)))))
		{
			goto IL_0112;
		}
	}
	{
		// parent.MEdges.Add(new MeshEdge(vertices[1], vertices[vertices.Length - 1]));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_71 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_71);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_72 = L_71->___MEdges_16;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_73 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_73);
		int32_t L_74 = 1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		int32_t L_76;
		L_76 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_75, NULL);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_77 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_78 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_78);
		NullCheck(L_77);
		int32_t L_79 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_78)->max_length)), 1));
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		int32_t L_81;
		L_81 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_80, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_82;
		memset((&L_82), 0, sizeof(L_82));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_82), L_76, L_81, /*hidden argument*/NULL);
		NullCheck(L_72);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_72, L_82, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
	}

IL_0191:
	{
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.NGonCap::SetPositionAndSize(ExtendedPrimitives_11.Internal.Element[],System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGonCap_SetPositionAndSize_mD1645A3937BBE197747DAA0F3E0AAC9458F82A64 (NGonCap_t0C4EEAA9D6942B60BBECCEA2AEB8B7FC7F74879A* __this, ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* ___cornersElements0, bool ___useTop1, bool ___zeroCenter2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_16 = NULL;
	{
		// int length = cornersElements[0].Top.Length;
		ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* L_0 = ___cornersElements0;
		NullCheck(L_0);
		int32_t L_1 = 0;
		Element_tDD021D15E39F04405664845456EE25BFDC6FC663* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_3 = L_2->___Top_13;
		NullCheck(L_3);
		V_0 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		// if (useTop) {
		bool L_4 = ___useTop1;
		if (!L_4)
		{
			goto IL_010b;
		}
	}
	{
		// Vector3 up = cornersElements[0].Top[0].Normal;
		ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* L_5 = ___cornersElements0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		Element_tDD021D15E39F04405664845456EE25BFDC6FC663* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_8 = L_7->___Top_13;
		NullCheck(L_8);
		int32_t L_9 = 0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10->___Normal_5;
		V_1 = L_11;
		// Vector3 centerVertPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_12;
		// if (zeroCenter) {
		bool L_13 = ___zeroCenter2;
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		// vertices[0].Pos = new Vector3(0, cornersElements[0].Top[0].Pos.y, 0);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_14 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_14);
		int32_t L_15 = 0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* L_17 = ___cornersElements0;
		NullCheck(L_17);
		int32_t L_18 = 0;
		Element_tDD021D15E39F04405664845456EE25BFDC6FC663* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_20 = L_19->___Top_13;
		NullCheck(L_20);
		int32_t L_21 = 0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (&L_22->___Pos_7);
		float L_24 = L_23->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_25), (0.0f), L_24, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->___Pos_7 = L_25;
		goto IL_009c;
	}

IL_005c:
	{
		// for (int e = 0; e < cornersElements.Length; e++) {
		V_4 = 0;
		goto IL_0087;
	}

IL_0061:
	{
		// centerVertPos += cornersElements[e].Top[0].Pos / cornersElements.Length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_2;
		ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* L_27 = ___cornersElements0;
		int32_t L_28 = V_4;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Element_tDD021D15E39F04405664845456EE25BFDC6FC663* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_31 = L_30->___Top_13;
		NullCheck(L_31);
		int32_t L_32 = 0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33->___Pos_7;
		ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* L_35 = ___cornersElements0;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_34, ((float)((int32_t)(((RuntimeArray*)L_35)->max_length))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_36, NULL);
		V_2 = L_37;
		// for (int e = 0; e < cornersElements.Length; e++) {
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0087:
	{
		// for (int e = 0; e < cornersElements.Length; e++) {
		int32_t L_39 = V_4;
		ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* L_40 = ___cornersElements0;
		NullCheck(L_40);
		if ((((int32_t)L_39) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))
		{
			goto IL_0061;
		}
	}
	{
		// vertices[0].Pos = centerVertPos;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_41 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_41);
		int32_t L_42 = 0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_2;
		NullCheck(L_43);
		L_43->___Pos_7 = L_44;
	}

IL_009c:
	{
		// vertices[0].Normal = up;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_45 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_45);
		int32_t L_46 = 0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = V_1;
		NullCheck(L_47);
		L_47->___Normal_5 = L_48;
		// int counter = 1;
		V_3 = 1;
		// for (int e = 0; e < cornersElements.Length; e++) {
		V_5 = 0;
		goto IL_00ff;
	}

IL_00b1:
	{
		// for (int i = 0; i < length; i++) {
		V_6 = 0;
		goto IL_00f4;
	}

IL_00b6:
	{
		// int reversedI = length - 1 - i;
		int32_t L_49 = V_0;
		int32_t L_50 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_49, 1)), L_50));
		// vertices[counter].Pos = cornersElements[e].Top[reversedI].Pos;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_51 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_52 = V_3;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* L_55 = ___cornersElements0;
		int32_t L_56 = V_5;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Element_tDD021D15E39F04405664845456EE25BFDC6FC663* L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_58);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_59 = L_58->___Top_13;
		int32_t L_60 = V_7;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = L_62->___Pos_7;
		NullCheck(L_54);
		L_54->___Pos_7 = L_63;
		// vertices[counter].Normal = up;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_64 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_65 = V_3;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_1;
		NullCheck(L_67);
		L_67->___Normal_5 = L_68;
		// counter++;
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		// for (int i = 0; i < length; i++) {
		int32_t L_70 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_00f4:
	{
		// for (int i = 0; i < length; i++) {
		int32_t L_71 = V_6;
		int32_t L_72 = V_0;
		if ((((int32_t)L_71) < ((int32_t)L_72)))
		{
			goto IL_00b6;
		}
	}
	{
		// for (int e = 0; e < cornersElements.Length; e++) {
		int32_t L_73 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_00ff:
	{
		// for (int e = 0; e < cornersElements.Length; e++) {
		int32_t L_74 = V_5;
		ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* L_75 = ___cornersElements0;
		NullCheck(L_75);
		if ((((int32_t)L_74) < ((int32_t)((int32_t)(((RuntimeArray*)L_75)->max_length)))))
		{
			goto IL_00b1;
		}
	}
	{
		goto IL_020c;
	}

IL_010b:
	{
		// Vector3 up = cornersElements[0].Bottom[0].Normal;
		ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* L_76 = ___cornersElements0;
		NullCheck(L_76);
		int32_t L_77 = 0;
		Element_tDD021D15E39F04405664845456EE25BFDC6FC663* L_78 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		NullCheck(L_78);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_79 = L_78->___Bottom_17;
		NullCheck(L_79);
		int32_t L_80 = 0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_81 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = L_81->___Normal_5;
		V_8 = L_82;
		// Vector3 centerVertPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_9 = L_83;
		// if (zeroCenter) {
		bool L_84 = ___zeroCenter2;
		if (!L_84)
		{
			goto IL_0158;
		}
	}
	{
		// vertices[0].Pos = new Vector3(0, cornersElements[0].Bottom[0].Pos.y, 0);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_85 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_85);
		int32_t L_86 = 0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* L_88 = ___cornersElements0;
		NullCheck(L_88);
		int32_t L_89 = 0;
		Element_tDD021D15E39F04405664845456EE25BFDC6FC663* L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_90);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_91 = L_90->___Bottom_17;
		NullCheck(L_91);
		int32_t L_92 = 0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_93 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_94 = (&L_93->___Pos_7);
		float L_95 = L_94->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		memset((&L_96), 0, sizeof(L_96));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_96), (0.0f), L_95, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_87);
		L_87->___Pos_7 = L_96;
		goto IL_019b;
	}

IL_0158:
	{
		// for (int e = 0; e < cornersElements.Length; e++) {
		V_11 = 0;
		goto IL_0185;
	}

IL_015d:
	{
		// centerVertPos += cornersElements[e].Bottom[0].Pos / cornersElements.Length;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_9;
		ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* L_98 = ___cornersElements0;
		int32_t L_99 = V_11;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		Element_tDD021D15E39F04405664845456EE25BFDC6FC663* L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_102 = L_101->___Bottom_17;
		NullCheck(L_102);
		int32_t L_103 = 0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		NullCheck(L_104);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = L_104->___Pos_7;
		ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* L_106 = ___cornersElements0;
		NullCheck(L_106);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_105, ((float)((int32_t)(((RuntimeArray*)L_106)->max_length))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_97, L_107, NULL);
		V_9 = L_108;
		// for (int e = 0; e < cornersElements.Length; e++) {
		int32_t L_109 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_109, 1));
	}

IL_0185:
	{
		// for (int e = 0; e < cornersElements.Length; e++) {
		int32_t L_110 = V_11;
		ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* L_111 = ___cornersElements0;
		NullCheck(L_111);
		if ((((int32_t)L_110) < ((int32_t)((int32_t)(((RuntimeArray*)L_111)->max_length)))))
		{
			goto IL_015d;
		}
	}
	{
		// vertices[0].Pos = centerVertPos;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_112 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_112);
		int32_t L_113 = 0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115 = V_9;
		NullCheck(L_114);
		L_114->___Pos_7 = L_115;
	}

IL_019b:
	{
		// vertices[0].Normal = up;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_116 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_116);
		int32_t L_117 = 0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119 = V_8;
		NullCheck(L_118);
		L_118->___Normal_5 = L_119;
		// int counter = 1;
		V_10 = 1;
		// for (int e = 0; e < cornersElements.Length; e++) {
		V_12 = 0;
		goto IL_0205;
	}

IL_01b2:
	{
		// for (int i = 0; i < length; i++) {
		V_13 = 0;
		goto IL_01fa;
	}

IL_01b7:
	{
		// int reversedI = length - 1 - i;
		int32_t L_120 = V_0;
		int32_t L_121 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_120, 1)), L_121));
		// vertices[counter].Pos = cornersElements[e].Bottom[reversedI].Pos;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_122 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_123 = V_10;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* L_126 = ___cornersElements0;
		int32_t L_127 = V_12;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		Element_tDD021D15E39F04405664845456EE25BFDC6FC663* L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		NullCheck(L_129);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_130 = L_129->___Bottom_17;
		int32_t L_131 = V_14;
		NullCheck(L_130);
		int32_t L_132 = L_131;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_133 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_132));
		NullCheck(L_133);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134 = L_133->___Pos_7;
		NullCheck(L_125);
		L_125->___Pos_7 = L_134;
		// vertices[counter].Normal = up;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_135 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_136 = V_10;
		NullCheck(L_135);
		int32_t L_137 = L_136;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139 = V_8;
		NullCheck(L_138);
		L_138->___Normal_5 = L_139;
		// counter++;
		int32_t L_140 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_140, 1));
		// for (int i = 0; i < length; i++) {
		int32_t L_141 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_01fa:
	{
		// for (int i = 0; i < length; i++) {
		int32_t L_142 = V_13;
		int32_t L_143 = V_0;
		if ((((int32_t)L_142) < ((int32_t)L_143)))
		{
			goto IL_01b7;
		}
	}
	{
		// for (int e = 0; e < cornersElements.Length; e++) {
		int32_t L_144 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_144, 1));
	}

IL_0205:
	{
		// for (int e = 0; e < cornersElements.Length; e++) {
		int32_t L_145 = V_12;
		ElementU5BU5D_t40F9642DB9798E0FB7FE698D5C43FE4D267D2BDD* L_146 = ___cornersElements0;
		NullCheck(L_146);
		if ((((int32_t)L_145) < ((int32_t)((int32_t)(((RuntimeArray*)L_146)->max_length)))))
		{
			goto IL_01b2;
		}
	}

IL_020c:
	{
		// if (Displayed) {
		bool L_147 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_147)
		{
			goto IL_0272;
		}
	}
	{
		// for (int v = 0; v<vertices.Length; v++) {
		V_15 = 0;
		goto IL_0266;
	}

IL_0219:
	{
		// Vertex vert = vertices[v];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_148 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_149 = V_15;
		NullCheck(L_148);
		int32_t L_150 = L_149;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_151 = (L_148)->GetAt(static_cast<il2cpp_array_size_t>(L_150));
		V_16 = L_151;
		// parent.mvertices[vert] = vert.Pos;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_152 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_152);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_153 = L_152->___mvertices_18;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_154 = V_16;
		int32_t L_155;
		L_155 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_154, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_156 = V_16;
		NullCheck(L_156);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157 = L_156->___Pos_7;
		NullCheck(L_153);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(L_155), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_157);
		// parent.mnormals[vert] = vert.Normal;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_158 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_158);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_159 = L_158->___mnormals_19;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_160 = V_16;
		int32_t L_161;
		L_161 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_160, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_162 = V_16;
		NullCheck(L_162);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_163 = L_162->___Normal_5;
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(L_161), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_163);
		// for (int v = 0; v<vertices.Length; v++) {
		int32_t L_164 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_164, 1));
	}

IL_0266:
	{
		// for (int v = 0; v<vertices.Length; v++) {
		int32_t L_165 = V_15;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_166 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_166);
		if ((((int32_t)L_165) < ((int32_t)((int32_t)(((RuntimeArray*)L_166)->max_length)))))
		{
			goto IL_0219;
		}
	}

IL_0272:
	{
		// }
		return;
	}
}
// System.Int32 ExtendedPrimitives_11.Internal.NGonCap::CalcVerticesCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NGonCap_CalcVerticesCount_mD6DE37F2EE433F4EA0DB63AE8A37670ECE52E73B (NGonCap_t0C4EEAA9D6942B60BBECCEA2AEB8B7FC7F74879A* __this, int32_t ___segments0, const RuntimeMethod* method) 
{
	{
		// return (segments + 1) * 3 + 1;
		int32_t L_0 = ___segments0;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_0, 1)), 3)), 1));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.NGonCorner::.ctor(System.Boolean,ExtendedPrimitives_11.ExtendedPrimitive,System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Element>,System.Boolean,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGonCorner__ctor_m6EBFDBB33CB2649F05751125DF18B43A0156435E (NGonCorner_tA1E87375BF5AF6D149E4B4D8CACB8A8BC6C2B4C2* __this, bool ___displayed0, ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* ____ep1, List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* ___eList2, bool ___flipNormals3, int32_t ___hSegments4, int32_t ___vSegments5, bool ___flipAlpha6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t G_B3_0 = 0;
	NGonCorner_tA1E87375BF5AF6D149E4B4D8CACB8A8BC6C2B4C2* G_B5_0 = NULL;
	NGonCorner_tA1E87375BF5AF6D149E4B4D8CACB8A8BC6C2B4C2* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	NGonCorner_tA1E87375BF5AF6D149E4B4D8CACB8A8BC6C2B4C2* G_B6_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B12_0 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B11_0 = NULL;
	float G_B13_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* G_B13_1 = NULL;
	{
		// public NGonCorner (bool displayed, ExtendedPrimitive _ep, List<Element> eList, bool flipNormals,  int hSegments, int vSegments, bool flipAlpha ) {
		Element__ctor_mDB22061F7FB986E21DF9889FE888A2BA49205420(__this, NULL);
		// Displayed = displayed;
		bool L_0 = ___displayed0;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0 = L_0;
		// eList.Add(this);
		List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* L_1 = ___eList2;
		NullCheck(L_1);
		List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_inline(L_1, __this, List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		// parent = _ep;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_2 = ____ep1;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5), (void*)L_2);
		// flipNormals = parent.FlipNormals ? !flipNormals : flipNormals;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_3 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExtendedPrimitives_11.ExtendedPrimitive::get_FlipNormals() */, L_3);
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		bool L_5 = ___flipNormals3;
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0031;
	}

IL_002c:
	{
		bool L_6 = ___flipNormals3;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0031:
	{
		___flipNormals3 = (bool)G_B3_0;
		// NormalSign = parent.FlipNormals ? -1f : 1f;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_7 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExtendedPrimitives_11.ExtendedPrimitive::get_FlipNormals() */, L_7);
		G_B4_0 = __this;
		if (L_8)
		{
			G_B5_0 = __this;
			goto IL_0048;
		}
	}
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B4_0;
		goto IL_004d;
	}

IL_0048:
	{
		G_B6_0 = (-1.0f);
		G_B6_1 = G_B5_0;
	}

IL_004d:
	{
		NullCheck(G_B6_1);
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)G_B6_1)->___NormalSign_21 = G_B6_0;
		// SegmentsX = hSegments;
		int32_t L_9 = ___hSegments4;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6 = L_9;
		// SegmentsY = vSegments;
		int32_t L_10 = ___vSegments5;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7 = L_10;
		// LengthX = SegmentsX + 1;
		int32_t L_11 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// LengthY = SegmentsY + 1;
		int32_t L_12 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// vertices = new Vertex[LengthX * LengthY];
		int32_t L_13 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		int32_t L_14 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_15 = (VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)SZArrayNew(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_13, L_14)));
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10), (void*)L_15);
		// for (int y = 0; y < LengthY; y++) {
		V_0 = 0;
		goto IL_0141;
	}

IL_009d:
	{
		// for (int x = 0; x < LengthX; x++) {
		V_1 = 0;
		goto IL_0131;
	}

IL_00a4:
	{
		// Vertex vert = new Vertex(ref parent.vertsCounter, new Vector2(x / (float)SegmentsX, y / (float)SegmentsY));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_16 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_16);
		int32_t* L_17 = (&L_16->___vertsCounter_26);
		int32_t L_18 = V_1;
		int32_t L_19 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_20 = V_0;
		int32_t L_21 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), ((float)(((float)L_18)/((float)L_19))), ((float)(((float)L_20)/((float)L_21))), /*hidden argument*/NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_23 = (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)il2cpp_codegen_object_new(Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Vertex__ctor_mA971C36E661FEC1EB7F3B31BA80BB9F2918643D3(L_23, L_17, L_22, NULL);
		V_2 = L_23;
		// vert.LocalX = x;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_24 = V_2;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		L_24->___LocalX_0 = L_25;
		// vert.LocalY = y;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_26 = V_2;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		L_26->___LocalY_1 = L_27;
		// if (!Displayed) {
		bool L_28 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (L_28)
		{
			goto IL_00f7;
		}
	}
	{
		// parent.vertsCounter--;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_29 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_30 = L_29;
		NullCheck(L_30);
		int32_t L_31 = L_30->___vertsCounter_26;
		NullCheck(L_30);
		L_30->___vertsCounter_26 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
	}

IL_00f7:
	{
		// vert.Col.a =  flipAlpha ? 1f- vert.NormalizedCoords.y : vert.NormalizedCoords.y ;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_32 = V_2;
		NullCheck(L_32);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_33 = (&L_32->___Col_10);
		bool L_34 = ___flipAlpha6;
		G_B11_0 = L_33;
		if (L_34)
		{
			G_B12_0 = L_33;
			goto IL_010e;
		}
	}
	{
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_35 = V_2;
		NullCheck(L_35);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_36 = (&L_35->___NormalizedCoords_14);
		float L_37 = L_36->___y_1;
		G_B13_0 = L_37;
		G_B13_1 = G_B11_0;
		goto IL_011f;
	}

IL_010e:
	{
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_38 = V_2;
		NullCheck(L_38);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_39 = (&L_38->___NormalizedCoords_14);
		float L_40 = L_39->___y_1;
		G_B13_0 = ((float)il2cpp_codegen_subtract((1.0f), L_40));
		G_B13_1 = G_B12_0;
	}

IL_011f:
	{
		G_B13_1->___a_3 = G_B13_0;
		// this[x, y] = vert;
		int32_t L_41 = V_1;
		int32_t L_42 = V_0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_43 = V_2;
		VirtualActionInvoker3< int32_t, int32_t, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* >::Invoke(5 /* System.Void ExtendedPrimitives_11.Internal.Element::set_Item(System.Int32,System.Int32,ExtendedPrimitives_11.Internal.Vertex) */, __this, L_41, L_42, L_43);
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_44 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_0131:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_45 = V_1;
		int32_t L_46 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_00a4;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_47 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0141:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_48 = V_0;
		int32_t L_49 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_009d;
		}
	}
	{
		// CreateLayoutArrays();
		Element_CreateLayoutArrays_mD9D4604B5653AD456A66C6D4E29D33122527E6BD(__this, NULL);
		// if (Displayed) {
		bool L_50 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_50)
		{
			goto IL_0280;
		}
	}
	{
		// for (int y = 0; y < SegmentsY; y++) {
		V_3 = 0;
		goto IL_01b9;
	}

IL_0162:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		V_4 = 0;
		goto IL_01ab;
	}

IL_0167:
	{
		// BuildQuad(flipNormals, parent.Faces, this[x, y], this[x, y + 1], this[x + 1, y + 1], this[x + 1, y]);
		bool L_51 = ___flipNormals3;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_52 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_52);
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_53 = L_52->___Faces_17;
		int32_t L_54 = V_4;
		int32_t L_55 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_56;
		L_56 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_54, L_55);
		int32_t L_57 = V_4;
		int32_t L_58 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_59;
		L_59 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_57, ((int32_t)il2cpp_codegen_add(L_58, 1)));
		int32_t L_60 = V_4;
		int32_t L_61 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_62;
		L_62 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_60, 1)), ((int32_t)il2cpp_codegen_add(L_61, 1)));
		int32_t L_63 = V_4;
		int32_t L_64 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_65;
		L_65 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_63, 1)), L_64);
		Element_BuildQuad_mA3F4F5EDDC213CC056BEE9CF209CC1A27637DC70(L_51, L_53, L_56, L_59, L_62, L_65, NULL);
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_66 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_66, 1));
	}

IL_01ab:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_67 = V_4;
		int32_t L_68 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		if ((((int32_t)L_67) < ((int32_t)L_68)))
		{
			goto IL_0167;
		}
	}
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_69 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_69, 1));
	}

IL_01b9:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_70 = V_3;
		int32_t L_71 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		if ((((int32_t)L_70) < ((int32_t)L_71)))
		{
			goto IL_0162;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		V_5 = 0;
		goto IL_0217;
	}

IL_01c7:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		V_6 = 0;
		goto IL_0207;
	}

IL_01cc:
	{
		// parent.MEdges.Add(new MeshEdge(this[x, y], this[x + 1, y]));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_72 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_72);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_73 = L_72->___MEdges_16;
		int32_t L_74 = V_6;
		int32_t L_75 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_76;
		L_76 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_74, L_75);
		int32_t L_77;
		L_77 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_76, NULL);
		int32_t L_78 = V_6;
		int32_t L_79 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_80;
		L_80 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_78, 1)), L_79);
		int32_t L_81;
		L_81 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_80, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_82;
		memset((&L_82), 0, sizeof(L_82));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_82), L_77, L_81, /*hidden argument*/NULL);
		NullCheck(L_73);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_73, L_82, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_83 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_83, 1));
	}

IL_0207:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_84 = V_6;
		int32_t L_85 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		if ((((int32_t)L_84) < ((int32_t)L_85)))
		{
			goto IL_01cc;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_86 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_0217:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_87 = V_5;
		int32_t L_88 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_01c7;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		V_7 = 0;
		goto IL_0276;
	}

IL_0226:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		V_8 = 0;
		goto IL_0266;
	}

IL_022b:
	{
		// parent.MEdges.Add(new MeshEdge(this[x, y], this[x, y + 1]));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_89 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_89);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_90 = L_89->___MEdges_16;
		int32_t L_91 = V_7;
		int32_t L_92 = V_8;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_93;
		L_93 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_91, L_92);
		int32_t L_94;
		L_94 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_93, NULL);
		int32_t L_95 = V_7;
		int32_t L_96 = V_8;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_97;
		L_97 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_95, ((int32_t)il2cpp_codegen_add(L_96, 1)));
		int32_t L_98;
		L_98 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_97, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_99;
		memset((&L_99), 0, sizeof(L_99));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_99), L_94, L_98, /*hidden argument*/NULL);
		NullCheck(L_90);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_90, L_99, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_100 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_0266:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_101 = V_8;
		int32_t L_102 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_022b;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_103 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_103, 1));
	}

IL_0276:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_104 = V_7;
		int32_t L_105 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_0226;
		}
	}

IL_0280:
	{
		// yRotMatrices = new Matrix2d[LengthX];
		int32_t L_106 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_107 = (Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D*)(Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D*)SZArrayNew(Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D_il2cpp_TypeInfo_var, (uint32_t)L_106);
		__this->___yRotMatrices_23 = L_107;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___yRotMatrices_23), (void*)L_107);
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.NGonCorner::SetPositionAndSize(ExtendedPrimitives_11.Internal.Fillet,ExtendedPrimitives_11.Internal.Fillet,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGonCorner_SetPositionAndSize_mC8D153A478A7D7A06C88CF9540514BC2EC7BED74 (NGonCorner_tA1E87375BF5AF6D149E4B4D8CACB8A8BC6C2B4C2* __this, Fillet_t3251BF5FFD5D573ECFCDE0D3312736BE9E2E135D ___horizontal0, Fillet_t3251BF5FFD5D573ECFCDE0D3312736BE9E2E135D ___vertical1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pivot2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_6 = NULL;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_7 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	int32_t V_12 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_13 = NULL;
	float V_14 = 0.0f;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_15 = NULL;
	{
		// if (Displayed) {
		bool L_0 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_0)
		{
			goto IL_01d8;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		V_0 = 0;
		goto IL_00b7;
	}

IL_0012:
	{
		// float ya = vertical.Rot + this[0, y].NormalizedCoords.y * vertical.Angle;
		Fillet_t3251BF5FFD5D573ECFCDE0D3312736BE9E2E135D L_1 = ___vertical1;
		float L_2 = L_1.___Rot_5;
		int32_t L_3 = V_0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_4;
		L_4 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_3);
		NullCheck(L_4);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&L_4->___NormalizedCoords_14);
		float L_6 = L_5->___y_1;
		Fillet_t3251BF5FFD5D573ECFCDE0D3312736BE9E2E135D L_7 = ___vertical1;
		float L_8 = L_7.___Angle_6;
		// float nX = Mathf.Cos(ya);
		float L_9 = ((float)il2cpp_codegen_add(L_2, ((float)il2cpp_codegen_multiply(L_6, L_8))));
		float L_10;
		L_10 = cosf(L_9);
		V_1 = L_10;
		// float nY = Mathf.Sin(ya);
		float L_11;
		L_11 = sinf(L_9);
		V_2 = L_11;
		// Vertex v = this[0, y];
		int32_t L_12 = V_0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_13;
		L_13 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_12);
		// v.RefNormal = new Vector3(nX, nY, 0);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_14 = L_13;
		float L_15 = V_1;
		float L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_15, L_16, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		L_14->___RefNormal_4 = L_17;
		// v.RefPos = v.RefNormal * vertical.ClampedRadius;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_18 = L_14;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_19 = L_18;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19->___RefNormal_4;
		Fillet_t3251BF5FFD5D573ECFCDE0D3312736BE9E2E135D L_21 = ___vertical1;
		float L_22 = L_21.___ClampedRadius_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, L_22, NULL);
		NullCheck(L_19);
		L_19->___RefPos_6 = L_23;
		// v.RefPos += vertical.Center;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_24 = L_18;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_25 = L_24;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = L_25->___RefPos_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Fillet_get_Center_m1FA289BC0A597183420C5C8CC73A2677D8EE6F49((&___vertical1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_27, NULL);
		NullCheck(L_25);
		L_25->___RefPos_6 = L_28;
		// v.RefPos.x -= pivot.x;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_29 = L_24;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_30 = (&L_29->___RefPos_6);
		float* L_31 = (&L_30->___x_2);
		float* L_32 = L_31;
		float L_33 = *((float*)L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ___pivot2;
		float L_35 = L_34.___x_2;
		*((float*)L_32) = (float)((float)il2cpp_codegen_subtract(L_33, L_35));
		// v.RefNormal *= NormalSign;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_36 = L_29;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36->___RefNormal_4;
		float L_38 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___NormalSign_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_37, L_38, NULL);
		NullCheck(L_36);
		L_36->___RefNormal_4 = L_39;
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_40 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00b7:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_41 = V_0;
		int32_t L_42 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_0012;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		V_3 = 0;
		goto IL_01cb;
	}

IL_00ca:
	{
		// float rotation = horizontal.Rot + horizontal.Angle * this[x, 0].NormalizedCoords.x;
		Fillet_t3251BF5FFD5D573ECFCDE0D3312736BE9E2E135D L_43 = ___horizontal0;
		float L_44 = L_43.___Rot_5;
		Fillet_t3251BF5FFD5D573ECFCDE0D3312736BE9E2E135D L_45 = ___horizontal0;
		float L_46 = L_45.___Angle_6;
		int32_t L_47 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_48;
		L_48 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_47, 0);
		NullCheck(L_48);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_49 = (&L_48->___NormalizedCoords_14);
		float L_50 = L_49->___x_0;
		V_4 = ((float)il2cpp_codegen_add(L_44, ((float)il2cpp_codegen_multiply(L_46, L_50))));
		// yRotMatrices[x] = new Matrix2d(rotation);
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_51 = __this->___yRotMatrices_23;
		int32_t L_52 = V_3;
		float L_53 = V_4;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_54;
		memset((&L_54), 0, sizeof(L_54));
		Matrix2d__ctor_m9E71271929F7DF381898399D3ED5F523542C00FC((&L_54), L_53, /*hidden argument*/NULL);
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D)L_54);
		// yRotMatrices[x].Position = new Vector2(pivot.x, 0);
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_55 = __this->___yRotMatrices_23;
		int32_t L_56 = V_3;
		NullCheck(L_55);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = ___pivot2;
		float L_58 = L_57.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_59), L_58, (0.0f), /*hidden argument*/NULL);
		Matrix2d_set_Position_mD838CB941C6435377986552E6DEE53DAB15F1798(((L_55)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_56))), L_59, NULL);
		// for (int y = 0; y < LengthY; y++) {
		V_5 = 0;
		goto IL_01ba;
	}

IL_0128:
	{
		// Vertex v = this[x, y];
		int32_t L_60 = V_3;
		int32_t L_61 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_62;
		L_62 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_60, L_61);
		V_6 = L_62;
		// Vertex refVert = this[0, y];
		int32_t L_63 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_64;
		L_64 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_63);
		V_7 = L_64;
		// v.Pos = parent.mvertices[v] = yRotMatrices[x].MultiplyPointY(refVert.RefPos);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_65 = V_6;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_66 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_66);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_67 = L_66->___mvertices_18;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_68 = V_6;
		int32_t L_69;
		L_69 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_68, NULL);
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_70 = __this->___yRotMatrices_23;
		int32_t L_71 = V_3;
		NullCheck(L_70);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_72 = V_7;
		NullCheck(L_72);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = L_72->___RefPos_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Matrix2d_MultiplyPointY_mF09D4CD0799D7F4DD424FC6B0E6CEBB564F6D5B0(((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71))), L_73, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = L_74;
		V_8 = L_75;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_75);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = V_8;
		NullCheck(L_65);
		L_65->___Pos_7 = L_76;
		// v.Normal = parent.mnormals[v] = yRotMatrices[x].MultiplyVectorY(refVert.RefNormal);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_77 = V_6;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_78 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_78);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_79 = L_78->___mnormals_19;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_80 = V_6;
		int32_t L_81;
		L_81 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_80, NULL);
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_82 = __this->___yRotMatrices_23;
		int32_t L_83 = V_3;
		NullCheck(L_82);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_84 = V_7;
		NullCheck(L_84);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = L_84->___RefNormal_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4(((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_83))), L_85, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = L_86;
		V_8 = L_87;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = V_8;
		NullCheck(L_77);
		L_77->___Normal_5 = L_88;
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_89 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01ba:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_90 = V_5;
		int32_t L_91 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_0128;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_92 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_01cb:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_93 = V_3;
		int32_t L_94 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_00ca;
		}
	}
	{
		return;
	}

IL_01d8:
	{
		// for (int y = 0; y < LengthY; y++) {
		V_9 = 0;
		goto IL_028d;
	}

IL_01e0:
	{
		// float ya = vertical.Rot + this[0, y].NormalizedCoords.y * vertical.Angle;
		Fillet_t3251BF5FFD5D573ECFCDE0D3312736BE9E2E135D L_95 = ___vertical1;
		float L_96 = L_95.___Rot_5;
		int32_t L_97 = V_9;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_98;
		L_98 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_97);
		NullCheck(L_98);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_99 = (&L_98->___NormalizedCoords_14);
		float L_100 = L_99->___y_1;
		Fillet_t3251BF5FFD5D573ECFCDE0D3312736BE9E2E135D L_101 = ___vertical1;
		float L_102 = L_101.___Angle_6;
		// float nX = Mathf.Cos(ya);
		float L_103 = ((float)il2cpp_codegen_add(L_96, ((float)il2cpp_codegen_multiply(L_100, L_102))));
		float L_104;
		L_104 = cosf(L_103);
		V_10 = L_104;
		// float nY = Mathf.Sin(ya);
		float L_105;
		L_105 = sinf(L_103);
		V_11 = L_105;
		// Vertex v = this[0, y];
		int32_t L_106 = V_9;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_107;
		L_107 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_106);
		// v.RefNormal = new Vector3(nX, nY, 0);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_108 = L_107;
		float L_109 = V_10;
		float L_110 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		memset((&L_111), 0, sizeof(L_111));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_111), L_109, L_110, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_108);
		L_108->___RefNormal_4 = L_111;
		// v.RefPos = v.RefNormal * vertical.ClampedRadius;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_112 = L_108;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_113 = L_112;
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = L_113->___RefNormal_4;
		Fillet_t3251BF5FFD5D573ECFCDE0D3312736BE9E2E135D L_115 = ___vertical1;
		float L_116 = L_115.___ClampedRadius_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_114, L_116, NULL);
		NullCheck(L_113);
		L_113->___RefPos_6 = L_117;
		// v.RefPos += vertical.Center;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_118 = L_112;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_119 = L_118;
		NullCheck(L_119);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = L_119->___RefPos_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Fillet_get_Center_m1FA289BC0A597183420C5C8CC73A2677D8EE6F49((&___vertical1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_120, L_121, NULL);
		NullCheck(L_119);
		L_119->___RefPos_6 = L_122;
		// v.RefPos.x -= pivot.x;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_123 = L_118;
		NullCheck(L_123);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_124 = (&L_123->___RefPos_6);
		float* L_125 = (&L_124->___x_2);
		float* L_126 = L_125;
		float L_127 = *((float*)L_126);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128 = ___pivot2;
		float L_129 = L_128.___x_2;
		*((float*)L_126) = (float)((float)il2cpp_codegen_subtract(L_127, L_129));
		// v.RefNormal *= NormalSign;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_130 = L_123;
		NullCheck(L_130);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131 = L_130->___RefNormal_4;
		float L_132 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___NormalSign_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133;
		L_133 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_131, L_132, NULL);
		NullCheck(L_130);
		L_130->___RefNormal_4 = L_133;
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_134 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_134, 1));
	}

IL_028d:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_135 = V_9;
		int32_t L_136 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_135) < ((int32_t)L_136)))
		{
			goto IL_01e0;
		}
	}
	{
		// for (int o = 0; o < Outline.Length; o++) {
		V_12 = 0;
		goto IL_03a1;
	}

IL_02a2:
	{
		// Vertex v = Outline[o];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_137 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Outline_20;
		int32_t L_138 = V_12;
		NullCheck(L_137);
		int32_t L_139 = L_138;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_140 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		V_13 = L_140;
		// float rotation = horizontal.Rot + horizontal.Angle * v.NormalizedCoords.x;
		Fillet_t3251BF5FFD5D573ECFCDE0D3312736BE9E2E135D L_141 = ___horizontal0;
		float L_142 = L_141.___Rot_5;
		Fillet_t3251BF5FFD5D573ECFCDE0D3312736BE9E2E135D L_143 = ___horizontal0;
		float L_144 = L_143.___Angle_6;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_145 = V_13;
		NullCheck(L_145);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_146 = (&L_145->___NormalizedCoords_14);
		float L_147 = L_146->___x_0;
		V_14 = ((float)il2cpp_codegen_add(L_142, ((float)il2cpp_codegen_multiply(L_144, L_147))));
		// yRotMatrices[v.LocalX] = new Matrix2d(rotation);
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_148 = __this->___yRotMatrices_23;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_149 = V_13;
		NullCheck(L_149);
		int32_t L_150 = L_149->___LocalX_0;
		float L_151 = V_14;
		Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D L_152;
		memset((&L_152), 0, sizeof(L_152));
		Matrix2d__ctor_m9E71271929F7DF381898399D3ED5F523542C00FC((&L_152), L_151, /*hidden argument*/NULL);
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(L_150), (Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D)L_152);
		// yRotMatrices[v.LocalX].Position = new Vector2(pivot.x, 0);
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_153 = __this->___yRotMatrices_23;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_154 = V_13;
		NullCheck(L_154);
		int32_t L_155 = L_154->___LocalX_0;
		NullCheck(L_153);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156 = ___pivot2;
		float L_157 = L_156.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_158;
		memset((&L_158), 0, sizeof(L_158));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_158), L_157, (0.0f), /*hidden argument*/NULL);
		Matrix2d_set_Position_mD838CB941C6435377986552E6DEE53DAB15F1798(((L_153)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_155))), L_158, NULL);
		// Vertex refVert = this[0, v.LocalY];
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_159 = V_13;
		NullCheck(L_159);
		int32_t L_160 = L_159->___LocalY_1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_161;
		L_161 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_160);
		V_15 = L_161;
		// v.Pos = parent.mvertices[v] = yRotMatrices[v.LocalX].MultiplyPointY(refVert.RefPos);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_162 = V_13;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_163 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_163);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_164 = L_163->___mvertices_18;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_165 = V_13;
		int32_t L_166;
		L_166 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_165, NULL);
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_167 = __this->___yRotMatrices_23;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_168 = V_13;
		NullCheck(L_168);
		int32_t L_169 = L_168->___LocalX_0;
		NullCheck(L_167);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_170 = V_15;
		NullCheck(L_170);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_171 = L_170->___RefPos_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_172;
		L_172 = Matrix2d_MultiplyPointY_mF09D4CD0799D7F4DD424FC6B0E6CEBB564F6D5B0(((L_167)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_169))), L_171, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_173 = L_172;
		V_8 = L_173;
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(L_166), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_173);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174 = V_8;
		NullCheck(L_162);
		L_162->___Pos_7 = L_174;
		// v.Normal = parent.mnormals[v] = yRotMatrices[v.LocalX].MultiplyVectorY(refVert.RefNormal);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_175 = V_13;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_176 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_176);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_177 = L_176->___mnormals_19;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_178 = V_13;
		int32_t L_179;
		L_179 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_178, NULL);
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_180 = __this->___yRotMatrices_23;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_181 = V_13;
		NullCheck(L_181);
		int32_t L_182 = L_181->___LocalX_0;
		NullCheck(L_180);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_183 = V_15;
		NullCheck(L_183);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_184 = L_183->___RefNormal_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_185;
		L_185 = Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4(((L_180)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_182))), L_184, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_186 = L_185;
		V_8 = L_186;
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(L_179), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_186);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_187 = V_8;
		NullCheck(L_175);
		L_175->___Normal_5 = L_187;
		// for (int o = 0; o < Outline.Length; o++) {
		int32_t L_188 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_188, 1));
	}

IL_03a1:
	{
		// for (int o = 0; o < Outline.Length; o++) {
		int32_t L_189 = V_12;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_190 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Outline_20;
		NullCheck(L_190);
		if ((((int32_t)L_189) < ((int32_t)((int32_t)(((RuntimeArray*)L_190)->max_length)))))
		{
			goto IL_02a2;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.NGonCorner::SetUVPositionAndSize(System.Boolean,UnityEngine.Vector2[],System.Single,ExtendedPrimitives_11.Internal.Vertex[],ExtendedPrimitives_11.Internal.Vertex[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGonCorner_SetUVPositionAndSize_m1E6DA49EC691F5C95A02AF5236891586D9A3AFCA (NGonCorner_tA1E87375BF5AF6D149E4B4D8CACB8A8BC6C2B4C2* __this, bool ___outlineOnly0, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs1, float ___verticalFillet2, VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___fromProfile3, VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___toProfile4, bool ___reverse5, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_6 = NULL;
	{
		// if (Displayed) {
		bool L_0 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_0)
		{
			goto IL_00ec;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		V_0 = 0;
		goto IL_00e0;
	}

IL_0012:
	{
		// Vector3 dir3d = toProfile[x].Pos - fromProfile[x].Pos;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_1 = ___toProfile4;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___Pos_7;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_6 = ___fromProfile3;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9->___Pos_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_10, NULL);
		V_1 = L_11;
		// Vector2 _from = new Vector2(fromProfile[x].Pos.x, fromProfile[x].Pos.z);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_12 = ___fromProfile3;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&L_15->___Pos_7);
		float L_17 = L_16->___x_2;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_18 = ___fromProfile3;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = (&L_21->___Pos_7);
		float L_23 = L_22->___z_4;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), L_17, L_23, NULL);
		// Vector2 dir2d = (new Vector2(dir3d.x, dir3d.z)).normalized * verticalFillet * r90;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_1;
		float L_25 = L_24.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_1;
		float L_27 = L_26.___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), L_25, L_27, /*hidden argument*/NULL);
		V_4 = L_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_4), NULL);
		float L_30 = ___verticalFillet2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_29, L_30, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_31, (1.57079625f), NULL);
		V_3 = L_32;
		// if (reverse) {
		bool L_33 = ___reverse5;
		if (!L_33)
		{
			goto IL_008b;
		}
	}
	{
		// _from += dir2d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_34, L_35, NULL);
		V_2 = L_36;
		// dir2d = -dir2d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline(L_37, NULL);
		V_3 = L_38;
	}

IL_008b:
	{
		// for (int y = 0; y < LengthY; y++) {
		V_5 = 0;
		goto IL_00d2;
	}

IL_0090:
	{
		// Vertex v = this[x, y];
		int32_t L_39 = V_0;
		int32_t L_40 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_41;
		L_41 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_39, L_40);
		V_6 = L_41;
		// uvs[v] = v.UV = _from + dir2d * v.NormalizedCoords.y ;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_42 = ___uvs1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_43 = V_6;
		int32_t L_44;
		L_44 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_43, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_45 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_48 = V_6;
		NullCheck(L_48);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_49 = (&L_48->___NormalizedCoords_14);
		float L_50 = L_49->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		L_51 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_47, L_50, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		L_52 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_46, L_51, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53 = L_52;
		V_4 = L_53;
		NullCheck(L_45);
		L_45->___UV_9 = L_53;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54 = V_4;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_44), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_54);
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_55 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_00d2:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_56 = V_5;
		int32_t L_57 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_0090;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_58 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_00e0:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_59 = V_0;
		int32_t L_60 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_0012;
		}
	}

IL_00ec:
	{
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.NGonCorner::SetUVPositionAndSizeInverted(System.Boolean,UnityEngine.Vector2[],System.Single,ExtendedPrimitives_11.Internal.Vertex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NGonCorner_SetUVPositionAndSizeInverted_mAA0AEC0D4A0F035220EE9668837F92776AF6ECC5 (NGonCorner_tA1E87375BF5AF6D149E4B4D8CACB8A8BC6C2B4C2* __this, bool ___outlineOnly0, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs1, float ___verticalFillet2, VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___capProfile3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_3 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_9 = NULL;
	{
		// float radLength = verticalFillet * r90;
		float L_0 = ___verticalFillet2;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, (1.57079625f)));
		// if (Displayed) {
		bool L_1 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_1)
		{
			goto IL_00b3;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		V_1 = 0;
		goto IL_00a6;
	}

IL_001a:
	{
		// for (int y = 0; y < LengthY; y++) {
		V_2 = 0;
		goto IL_0096;
	}

IL_001e:
	{
		// Vertex v = this[x, y];
		int32_t L_2 = V_1;
		int32_t L_3 = V_2;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_4;
		L_4 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_2, L_3);
		V_3 = L_4;
		// uvs[v] = v.UV = new Vector2(capProfile[x].Pos.x, capProfile[x].Pos.z) + yRotMatrices[x].MultiplyVector(new Vector2((1f - v.NormalizedCoords.y) * radLength, 0));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_5 = ___uvs1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_6 = V_3;
		int32_t L_7;
		L_7 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_6, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_8 = V_3;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_9 = ___capProfile3;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&L_12->___Pos_7);
		float L_14 = L_13->___x_2;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_15 = ___capProfile3;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (&L_18->___Pos_7);
		float L_20 = L_19->___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), L_14, L_20, /*hidden argument*/NULL);
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_22 = __this->___yRotMatrices_23;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_24 = V_3;
		NullCheck(L_24);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_25 = (&L_24->___NormalizedCoords_14);
		float L_26 = L_25->___y_1;
		float L_27 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_26)), L_27)), (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Matrix2d_MultiplyVector_m2BA54FBD7A6ADB115B409F21901CDED5EFE47E09(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23))), L_28, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30;
		L_30 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_21, L_29, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = L_30;
		V_4 = L_31;
		NullCheck(L_8);
		L_8->___UV_9 = L_31;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_32);
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_0096:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_34 = V_2;
		int32_t L_35 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_001e;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00a6:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_37 = V_1;
		int32_t L_38 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_001a;
		}
	}
	{
		return;
	}

IL_00b3:
	{
		// if (outlineOnly) {
		bool L_39 = ___outlineOnly0;
		if (!L_39)
		{
			goto IL_0132;
		}
	}
	{
		// for (int x = 0; x < Outline.Length; x++) {
		V_5 = 0;
		goto IL_0125;
	}

IL_00bb:
	{
		// Vertex v = Outline[x];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_40 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Outline_20;
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_6 = L_43;
		// v.UV = new Vector2(capProfile[x].Pos.x, capProfile[x].Pos.z) + yRotMatrices[x].MultiplyPoint(new Vector2(  v.NormalizedCoords.y  * radLength, 0));
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_44 = V_6;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_45 = ___capProfile3;
		int32_t L_46 = V_5;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_49 = (&L_48->___Pos_7);
		float L_50 = L_49->___x_2;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_51 = ___capProfile3;
		int32_t L_52 = V_5;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_55 = (&L_54->___Pos_7);
		float L_56 = L_55->___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_57), L_50, L_56, /*hidden argument*/NULL);
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_58 = __this->___yRotMatrices_23;
		int32_t L_59 = V_5;
		NullCheck(L_58);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_60 = V_6;
		NullCheck(L_60);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_61 = (&L_60->___NormalizedCoords_14);
		float L_62 = L_61->___y_1;
		float L_63 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_64), ((float)il2cpp_codegen_multiply(L_62, L_63)), (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		L_65 = Matrix2d_MultiplyPoint_mBF8C8C2058394C3E7B1BB47732A87F9D2FF7A165(((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59))), L_64, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		L_66 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_57, L_65, NULL);
		NullCheck(L_44);
		L_44->___UV_9 = L_66;
		// for (int x = 0; x < Outline.Length; x++) {
		int32_t L_67 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_0125:
	{
		// for (int x = 0; x < Outline.Length; x++) {
		int32_t L_68 = V_5;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_69 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Outline_20;
		NullCheck(L_69);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))))
		{
			goto IL_00bb;
		}
	}
	{
		return;
	}

IL_0132:
	{
		// for (int x = 0; x < LengthX; x++) {
		V_7 = 0;
		goto IL_01ba;
	}

IL_013a:
	{
		// for (int y = 0; y < LengthY; y++) {
		V_8 = 0;
		goto IL_01aa;
	}

IL_013f:
	{
		// Vertex v = this[x, y];
		int32_t L_70 = V_7;
		int32_t L_71 = V_8;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_72;
		L_72 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_70, L_71);
		V_9 = L_72;
		// v.UV = new Vector2(capProfile[x].Pos.x, capProfile[x].Pos.z) + yRotMatrices[x].MultiplyPoint(new Vector2( v.NormalizedCoords.y  * radLength, 0));
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_73 = V_9;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_74 = ___capProfile3;
		int32_t L_75 = V_7;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_78 = (&L_77->___Pos_7);
		float L_79 = L_78->___x_2;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_80 = ___capProfile3;
		int32_t L_81 = V_7;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_84 = (&L_83->___Pos_7);
		float L_85 = L_84->___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_86;
		memset((&L_86), 0, sizeof(L_86));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_86), L_79, L_85, /*hidden argument*/NULL);
		Matrix2dU5BU5D_t281092DF189216CC441C160A6D41B1587B03B44D* L_87 = __this->___yRotMatrices_23;
		int32_t L_88 = V_7;
		NullCheck(L_87);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_89 = V_9;
		NullCheck(L_89);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_90 = (&L_89->___NormalizedCoords_14);
		float L_91 = L_90->___y_1;
		float L_92 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_93;
		memset((&L_93), 0, sizeof(L_93));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_93), ((float)il2cpp_codegen_multiply(L_91, L_92)), (0.0f), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_94;
		L_94 = Matrix2d_MultiplyPoint_mBF8C8C2058394C3E7B1BB47732A87F9D2FF7A165(((L_87)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_88))), L_93, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95;
		L_95 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_86, L_94, NULL);
		NullCheck(L_73);
		L_73->___UV_9 = L_95;
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_96 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_96, 1));
	}

IL_01aa:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_97 = V_8;
		int32_t L_98 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_97) < ((int32_t)L_98)))
		{
			goto IL_013f;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_99 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_99, 1));
	}

IL_01ba:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_100 = V_7;
		int32_t L_101 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_100) < ((int32_t)L_101)))
		{
			goto IL_013a;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.OctaCorner::get_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* OctaCorner_get_Item_m0C5D378E25F04EB9408D362DD614E30D0309A3C6 (OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int _base = y * (SegmentsX + 1);
		int32_t L_0 = ___y1;
		int32_t L_1 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)il2cpp_codegen_add(L_1, 1))));
		// int _sub = ((y - 1) * y) / 2;
		int32_t L_2 = ___y1;
		int32_t L_3 = ___y1;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_2, 1)), L_3))/2));
		// int result = x + _base - _sub;
		int32_t L_4 = ___x0;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_4, L_5)), L_6));
		// return vertices[result];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_7 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
// System.Void ExtendedPrimitives_11.Internal.OctaCorner::set_Item(System.Int32,System.Int32,ExtendedPrimitives_11.Internal.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctaCorner_set_Item_m8E94FD5C1332F779FDFD4D7DA5154633E914D510 (OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* __this, int32_t ___x0, int32_t ___y1, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* ___value2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int _base = y * (SegmentsX + 1);
		int32_t L_0 = ___y1;
		int32_t L_1 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)il2cpp_codegen_add(L_1, 1))));
		// int _sub = ((y - 1) * y) / 2;
		int32_t L_2 = ___y1;
		int32_t L_3 = ___y1;
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_2, 1)), L_3))/2));
		// int result = x + _base - _sub;
		int32_t L_4 = ___x0;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_4, L_5)), L_6));
		// vertices[result] = value;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_7 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_8 = V_2;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_9 = ___value2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)L_9);
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.OctaCorner::.ctor(System.Boolean,ExtendedPrimitives_11.ExtendedPrimitive,System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Element>,System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctaCorner__ctor_mB588EC6029419397C8B74FEAE528F8FE6C57B410 (OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* __this, bool ___displayed0, ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* ___ep1, List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* ___eList2, bool ___isReference3, bool ___flipped4, int32_t ___segments5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_10 = NULL;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_11 = NULL;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_12 = NULL;
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	float V_21 = 0.0f;
	float V_22 = 0.0f;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* G_B8_0 = NULL;
	OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* G_B9_1 = NULL;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* G_B37_0 = NULL;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* G_B36_0 = NULL;
	float G_B38_0 = 0.0f;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* G_B38_1 = NULL;
	{
		// public OctaCorner(bool displayed, ExtendedPrimitive ep, List<Element> eList, bool isReference, bool flipped, int segments ) {
		Element__ctor_mDB22061F7FB986E21DF9889FE888A2BA49205420(__this, NULL);
		// Displayed = displayed;
		bool L_0 = ___displayed0;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0 = L_0;
		// parent = ep;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_1 = ___ep1;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5), (void*)L_1);
		// eList.Add(this);
		List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* L_2 = ___eList2;
		NullCheck(L_2);
		List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_inline(L_2, __this, List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		// float ySign = flipped ? -1 : 1;
		bool L_3 = ___flipped4;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = (-1);
	}

IL_0023:
	{
		V_0 = ((float)G_B3_0);
		// flipped =  ep.FlipNormals? !flipped : flipped;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_4 = ___ep1;
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExtendedPrimitives_11.ExtendedPrimitive::get_FlipNormals() */, L_4);
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		bool L_6 = ___flipped4;
		G_B6_0 = ((int32_t)(L_6));
		goto IL_0036;
	}

IL_0031:
	{
		bool L_7 = ___flipped4;
		G_B6_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}

IL_0036:
	{
		___flipped4 = (bool)G_B6_0;
		// NormalSign = ep.FlipNormals ? -1 : 1;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_8 = ___ep1;
		NullCheck(L_8);
		bool L_9;
		L_9 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExtendedPrimitives_11.ExtendedPrimitive::get_FlipNormals() */, L_8);
		G_B7_0 = __this;
		if (L_9)
		{
			G_B8_0 = __this;
			goto IL_0044;
		}
	}
	{
		G_B9_0 = 1;
		G_B9_1 = G_B7_0;
		goto IL_0045;
	}

IL_0044:
	{
		G_B9_0 = (-1);
		G_B9_1 = G_B8_0;
	}

IL_0045:
	{
		NullCheck(G_B9_1);
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)G_B9_1)->___NormalSign_21 = ((float)G_B9_0);
		// SegmentsX = segments;
		int32_t L_10 = ___segments5;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6 = L_10;
		// SegmentsY = segments;
		int32_t L_11 = ___segments5;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7 = L_11;
		// LengthX = segments + 1;
		int32_t L_12 = ___segments5;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// LengthY = segments + 1;
		int32_t L_13 = ___segments5;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		// vertices = new Vertex[CalcVerticesCount(segments)];
		int32_t L_14 = ___segments5;
		int32_t L_15;
		L_15 = OctaCorner_CalcVerticesCount_mB06BA42A1DD5E170A5EC3505428F347DF9944815(L_14, NULL);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_16 = (VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)SZArrayNew(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var, (uint32_t)L_15);
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10), (void*)L_16);
		// for (int y = 0; y <= segments; y++) {
		V_1 = 0;
		goto IL_00d1;
	}

IL_0085:
	{
		// int xSegments = segments - y;
		int32_t L_17 = ___segments5;
		int32_t L_18 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_17, L_18));
		// for (int x = 0; x <= xSegments; x++) {
		V_3 = 0;
		goto IL_00c9;
	}

IL_008e:
	{
		// Vertex vert = new Vertex(ref ep.vertsCounter, y / (float)SegmentsY);
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_19 = ___ep1;
		NullCheck(L_19);
		int32_t* L_20 = (&L_19->___vertsCounter_26);
		int32_t L_21 = V_1;
		int32_t L_22 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_23 = (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)il2cpp_codegen_object_new(Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Vertex__ctor_mF9AEFE689362BDDBCE317513256BAB212DD3AE7B(L_23, L_20, ((float)(((float)L_21)/((float)L_22))), NULL);
		V_4 = L_23;
		// if (!Displayed) {
		bool L_24 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (L_24)
		{
			goto IL_00bb;
		}
	}
	{
		// ep.vertsCounter--;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_25 = ___ep1;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_26 = L_25;
		NullCheck(L_26);
		int32_t L_27 = L_26->___vertsCounter_26;
		NullCheck(L_26);
		L_26->___vertsCounter_26 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
	}

IL_00bb:
	{
		// this[x, y] = vert;
		int32_t L_28 = V_3;
		int32_t L_29 = V_1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_30 = V_4;
		VirtualActionInvoker3< int32_t, int32_t, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* >::Invoke(5 /* System.Void ExtendedPrimitives_11.Internal.Element::set_Item(System.Int32,System.Int32,ExtendedPrimitives_11.Internal.Vertex) */, __this, L_28, L_29, L_30);
		// for (int x = 0; x <= xSegments; x++) {
		int32_t L_31 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00c9:
	{
		// for (int x = 0; x <= xSegments; x++) {
		int32_t L_32 = V_3;
		int32_t L_33 = V_2;
		if ((((int32_t)L_32) <= ((int32_t)L_33)))
		{
			goto IL_008e;
		}
	}
	{
		// for (int y = 0; y <= segments; y++) {
		int32_t L_34 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00d1:
	{
		// for (int y = 0; y <= segments; y++) {
		int32_t L_35 = V_1;
		int32_t L_36 = ___segments5;
		if ((((int32_t)L_35) <= ((int32_t)L_36)))
		{
			goto IL_0085;
		}
	}
	{
		// Left = new Vertex[LengthY];
		int32_t L_37 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_38 = (VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)SZArrayNew(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var, (uint32_t)L_37);
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Left_11 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Left_11), (void*)L_38);
		// Right = new Vertex[LengthY];
		int32_t L_39 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_40 = (VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)SZArrayNew(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var, (uint32_t)L_39);
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Right_15 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Right_15), (void*)L_40);
		// Top = new Vertex[1];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_41 = (VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)SZArrayNew(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var, (uint32_t)1);
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Top_13 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Top_13), (void*)L_41);
		// Bottom = new Vertex[LengthX];
		int32_t L_42 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_43 = (VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)SZArrayNew(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var, (uint32_t)L_42);
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Bottom_17 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Bottom_17), (void*)L_43);
		// Corners = new Vertex[4];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_44 = (VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)SZArrayNew(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var, (uint32_t)4);
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Corners_19 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Corners_19), (void*)L_44);
		// for (int y = 0; y < LengthY; y++) {
		V_5 = 0;
		goto IL_0158;
	}

IL_0126:
	{
		// Left[y] = this[0, y];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_45 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Left_11;
		int32_t L_46 = V_5;
		int32_t L_47 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_48;
		L_48 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_47);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_48);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_46), (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)L_48);
		// Right[y] = this[SegmentsX-y, y];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_49 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Right_15;
		int32_t L_50 = V_5;
		int32_t L_51 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_52 = V_5;
		int32_t L_53 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_54;
		L_54 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_subtract(L_51, L_52)), L_53);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_54);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)L_54);
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_55 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_0158:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_56 = V_5;
		int32_t L_57 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_0126;
		}
	}
	{
		// Top[0] = this[0, SegmentsY];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_58 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Top_13;
		int32_t L_59 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_60;
		L_60 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_59);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_60);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)L_60);
		// for (int x = 0; x < LengthX; x++) {
		V_6 = 0;
		goto IL_0194;
	}

IL_017c:
	{
		// Bottom[x] = this[x, 0];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_61 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Bottom_17;
		int32_t L_62 = V_6;
		int32_t L_63 = V_6;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_64;
		L_64 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_63, 0);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_64);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)L_64);
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_65 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0194:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_66 = V_6;
		int32_t L_67 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_66) < ((int32_t)L_67)))
		{
			goto IL_017c;
		}
	}
	{
		// Corners[0] = this[0, 0];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_68 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Corners_19;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_69;
		L_69 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, 0);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_69);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)L_69);
		// Corners[1] = this[0, SegmentsY];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_70 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Corners_19;
		int32_t L_71 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_72;
		L_72 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_71);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_72);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)L_72);
		// Corners[2] = this[0, SegmentsY];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_73 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Corners_19;
		int32_t L_74 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_75;
		L_75 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_74);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_75);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)L_75);
		// Corners[3] = this[SegmentsX, 0];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_76 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Corners_19;
		int32_t L_77 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_78;
		L_78 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_77, 0);
		NullCheck(L_76);
		ArrayElementTypeCheck (L_76, L_78);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)L_78);
		// if (Displayed) {
		bool L_79 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_79)
		{
			goto IL_0311;
		}
	}
	{
		// for (int y = 0; y < SegmentsY; y++) {
		V_7 = 0;
		goto IL_0304;
	}

IL_0200:
	{
		// int xSegments = SegmentsX - y;
		int32_t L_80 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_81 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_80, L_81));
		// for (int x = 0; x < xSegments; x++) {
		V_9 = 0;
		goto IL_02f5;
	}

IL_0213:
	{
		// Vertex idx0 = this[x, y];
		int32_t L_82 = V_9;
		int32_t L_83 = V_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_84;
		L_84 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_82, L_83);
		V_10 = L_84;
		// Vertex idx1 = this[x, y + 1];
		int32_t L_85 = V_9;
		int32_t L_86 = V_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_87;
		L_87 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_85, ((int32_t)il2cpp_codegen_add(L_86, 1)));
		V_11 = L_87;
		// Vertex idx2 = this[x + 1, y];
		int32_t L_88 = V_9;
		int32_t L_89 = V_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_90;
		L_90 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_88, 1)), L_89);
		V_12 = L_90;
		// BuildTriangle(flipped, ep.Faces, idx0, idx1, idx2);
		bool L_91 = ___flipped4;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_92 = ___ep1;
		NullCheck(L_92);
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_93 = L_92->___Faces_17;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_94 = V_10;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_95 = V_11;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_96 = V_12;
		Element_BuildTriangle_mB92059645D4AC5A46904359E787A6DF46948083C(L_91, L_93, L_94, L_95, L_96, NULL);
		// ep.MEdges.Add(new MeshEdge(idx0, idx1));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_97 = ___ep1;
		NullCheck(L_97);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_98 = L_97->___MEdges_16;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_99 = V_10;
		int32_t L_100;
		L_100 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_99, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_101 = V_11;
		int32_t L_102;
		L_102 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_101, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_103;
		memset((&L_103), 0, sizeof(L_103));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_103), L_100, L_102, /*hidden argument*/NULL);
		NullCheck(L_98);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_98, L_103, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// ep.MEdges.Add(new MeshEdge(idx1, idx2));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_104 = ___ep1;
		NullCheck(L_104);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_105 = L_104->___MEdges_16;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_106 = V_11;
		int32_t L_107;
		L_107 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_106, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_108 = V_12;
		int32_t L_109;
		L_109 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_108, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_110;
		memset((&L_110), 0, sizeof(L_110));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_110), L_107, L_109, /*hidden argument*/NULL);
		NullCheck(L_105);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_105, L_110, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// ep.MEdges.Add(new MeshEdge(idx2, idx0));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_111 = ___ep1;
		NullCheck(L_111);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_112 = L_111->___MEdges_16;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_113 = V_12;
		int32_t L_114;
		L_114 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_113, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_115 = V_10;
		int32_t L_116;
		L_116 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_115, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_117;
		memset((&L_117), 0, sizeof(L_117));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_117), L_114, L_116, /*hidden argument*/NULL);
		NullCheck(L_112);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_112, L_117, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// if (x < xSegments - 1) {
		int32_t L_118 = V_9;
		int32_t L_119 = V_8;
		if ((((int32_t)L_118) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_119, 1)))))
		{
			goto IL_02ef;
		}
	}
	{
		// idx0 = this[x + 1, y];
		int32_t L_120 = V_9;
		int32_t L_121 = V_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_122;
		L_122 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_120, 1)), L_121);
		V_10 = L_122;
		// idx1 = this[x, y + 1];
		int32_t L_123 = V_9;
		int32_t L_124 = V_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_125;
		L_125 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_123, ((int32_t)il2cpp_codegen_add(L_124, 1)));
		V_11 = L_125;
		// idx2 = this[x + 1, y + 1];
		int32_t L_126 = V_9;
		int32_t L_127 = V_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_128;
		L_128 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_126, 1)), ((int32_t)il2cpp_codegen_add(L_127, 1)));
		V_12 = L_128;
		// BuildTriangle(flipped, ep.Faces, idx0, idx1, idx2);
		bool L_129 = ___flipped4;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_130 = ___ep1;
		NullCheck(L_130);
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_131 = L_130->___Faces_17;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_132 = V_10;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_133 = V_11;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_134 = V_12;
		Element_BuildTriangle_mB92059645D4AC5A46904359E787A6DF46948083C(L_129, L_131, L_132, L_133, L_134, NULL);
	}

IL_02ef:
	{
		// for (int x = 0; x < xSegments; x++) {
		int32_t L_135 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_135, 1));
	}

IL_02f5:
	{
		// for (int x = 0; x < xSegments; x++) {
		int32_t L_136 = V_9;
		int32_t L_137 = V_8;
		if ((((int32_t)L_136) < ((int32_t)L_137)))
		{
			goto IL_0213;
		}
	}
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_138 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_138, 1));
	}

IL_0304:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_139 = V_7;
		int32_t L_140 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		if ((((int32_t)L_139) < ((int32_t)L_140)))
		{
			goto IL_0200;
		}
	}

IL_0311:
	{
		// if (isReference) {
		bool L_141 = ___isReference3;
		if (!L_141)
		{
			goto IL_03e9;
		}
	}
	{
		// float astep = 1.570796f / SegmentsY;
		int32_t L_142 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		V_13 = ((float)((1.57079601f)/((float)L_142)));
		// for (int y = 0; y<=SegmentsY; y++) {
		V_14 = 0;
		goto IL_03dc;
	}

IL_032f:
	{
		// float ylv = y / (float)SegmentsY;
		int32_t L_143 = V_14;
		int32_t L_144 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		V_15 = ((float)(((float)L_143)/((float)L_144)));
		// float mylv = (1 - ylv);
		float L_145 = V_15;
		V_16 = ((float)il2cpp_codegen_subtract((1.0f), L_145));
		// float angleY = y * astep;
		int32_t L_146 = V_14;
		float L_147 = V_13;
		// float yPos = Mathf.Sin(angleY);
		float L_148 = ((float)il2cpp_codegen_multiply(((float)L_146), L_147));
		float L_149;
		L_149 = sinf(L_148);
		V_17 = L_149;
		// float xRadius = Mathf.Cos(angleY);
		float L_150;
		L_150 = cosf(L_148);
		V_18 = L_150;
		// int xSegments = SegmentsX - y;
		int32_t L_151 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_152 = V_14;
		V_19 = ((int32_t)il2cpp_codegen_subtract(L_151, L_152));
		// for (int x = 0; x <= xSegments; x++) {
		V_20 = 0;
		goto IL_03d0;
	}

IL_036b:
	{
		// Vertex v = this[x, y];
		int32_t L_153 = V_20;
		int32_t L_154 = V_14;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_155;
		L_155 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_153, L_154);
		// float xLv = xSegments == 0 ? 0 : x / (float)xSegments;
		int32_t L_156 = V_19;
		G_B36_0 = L_155;
		if (!L_156)
		{
			G_B37_0 = L_155;
			goto IL_0382;
		}
	}
	{
		int32_t L_157 = V_20;
		int32_t L_158 = V_19;
		G_B38_0 = ((float)(((float)L_157)/((float)L_158)));
		G_B38_1 = G_B36_0;
		goto IL_0387;
	}

IL_0382:
	{
		G_B38_0 = (0.0f);
		G_B38_1 = G_B37_0;
	}

IL_0387:
	{
		// float angleX = xLv * 1.570796f;
		// float _x = Mathf.Cos(angleX);
		float L_159 = ((float)il2cpp_codegen_multiply(G_B38_0, (1.57079601f)));
		float L_160;
		L_160 = cosf(L_159);
		V_21 = L_160;
		// float _z = Mathf.Sin(angleX);
		float L_161;
		L_161 = sinf(L_159);
		V_22 = L_161;
		// v.RefUV = new Vector2(_x  , _z  ) * mylv;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_162 = G_B38_1;
		float L_163 = V_21;
		float L_164 = V_22;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_165;
		memset((&L_165), 0, sizeof(L_165));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_165), L_163, L_164, /*hidden argument*/NULL);
		float L_166 = V_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_167;
		L_167 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_165, L_166, NULL);
		NullCheck(L_162);
		L_162->___RefUV_8 = L_167;
		// v.RefNormal = new Vector3(_x * xRadius, yPos *ySign, _z * xRadius);
		float L_168 = V_21;
		float L_169 = V_18;
		float L_170 = V_17;
		float L_171 = V_0;
		float L_172 = V_22;
		float L_173 = V_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174;
		memset((&L_174), 0, sizeof(L_174));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_174), ((float)il2cpp_codegen_multiply(L_168, L_169)), ((float)il2cpp_codegen_multiply(L_170, L_171)), ((float)il2cpp_codegen_multiply(L_172, L_173)), /*hidden argument*/NULL);
		NullCheck(L_162);
		L_162->___RefNormal_4 = L_174;
		// for (int x = 0; x <= xSegments; x++) {
		int32_t L_175 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_175, 1));
	}

IL_03d0:
	{
		// for (int x = 0; x <= xSegments; x++) {
		int32_t L_176 = V_20;
		int32_t L_177 = V_19;
		if ((((int32_t)L_176) <= ((int32_t)L_177)))
		{
			goto IL_036b;
		}
	}
	{
		// for (int y = 0; y<=SegmentsY; y++) {
		int32_t L_178 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_178, 1));
	}

IL_03dc:
	{
		// for (int y = 0; y<=SegmentsY; y++) {
		int32_t L_179 = V_14;
		int32_t L_180 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		if ((((int32_t)L_179) <= ((int32_t)L_180)))
		{
			goto IL_032f;
		}
	}

IL_03e9:
	{
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.OctaCorner::SetPositionAndSize(ExtendedPrimitives_11.Internal.OctaCorner,UnityEngine.Vector3,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctaCorner_SetPositionAndSize_mEB326A697C74456A31551DDC337C6BC7D2A85A0E (OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* __this, OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* ___reference0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, float ___rotation2, float ___radius3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// if (Displayed) {
		bool L_0 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_0)
		{
			goto IL_00ee;
		}
	}
	{
		// float rotationRad = rotation * Mathf.Deg2Rad;
		float L_1 = ___rotation2;
		// float rotVectorX = Mathf.Cos(rotationRad);
		float L_2 = ((float)il2cpp_codegen_multiply(L_1, (0.0174532924f)));
		float L_3;
		L_3 = cosf(L_2);
		V_0 = L_3;
		// float rotVectorY = Mathf.Sin(rotationRad);
		float L_4;
		L_4 = sinf(L_2);
		V_1 = L_4;
		// for (int v = 0; v < reference.vertices.Length; v++) {
		V_2 = 0;
		goto IL_00df;
	}

IL_0026:
	{
		// Vector3 vec = reference.vertices[v].RefNormal;
		OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* L_5 = ___reference0;
		NullCheck(L_5);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_6 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)L_5)->___vertices_10;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9->___RefNormal_4;
		V_3 = L_10;
		// vec = new Vector3(rotVectorX * vec.x - rotVectorY * vec.z, vec.y, rotVectorY * vec.x + rotVectorX * vec.z);
		float L_11 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_3;
		float L_13 = L_12.___x_2;
		float L_14 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_3;
		float L_16 = L_15.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_3;
		float L_18 = L_17.___y_3;
		float L_19 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_3;
		float L_21 = L_20.___x_2;
		float L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_3;
		float L_24 = L_23.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_11, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_16)))), L_18, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_19, L_21)), ((float)il2cpp_codegen_multiply(L_22, L_24)))), NULL);
		// parent.mnormals[vertices[v]] = this.vertices[v].Normal = vec * NormalSign;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_25 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_25);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = L_25->___mnormals_19;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_27 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		int32_t L_31;
		L_31 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_30, NULL);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_32 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_3;
		float L_37 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___NormalSign_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_36, L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = L_38;
		V_4 = L_39;
		NullCheck(L_35);
		L_35->___Normal_5 = L_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_4;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_40);
		// parent.mvertices[vertices[v]] = this.vertices[v].Pos = vec * radius + position;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_41 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_41);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_42 = L_41->___mvertices_18;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_43 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_44 = V_2;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		int32_t L_47;
		L_47 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_46, NULL);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_48 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_49 = V_2;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_3;
		float L_53 = ___radius3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_52, L_53, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = ___position1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_54, L_55, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = L_56;
		V_4 = L_57;
		NullCheck(L_51);
		L_51->___Pos_7 = L_57;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_4;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_58);
		// for (int v = 0; v < reference.vertices.Length; v++) {
		int32_t L_59 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_00df:
	{
		// for (int v = 0; v < reference.vertices.Length; v++) {
		int32_t L_60 = V_2;
		OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* L_61 = ___reference0;
		NullCheck(L_61);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_62 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)L_61)->___vertices_10;
		NullCheck(L_62);
		if ((((int32_t)L_60) < ((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length)))))
		{
			goto IL_0026;
		}
	}
	{
		return;
	}

IL_00ee:
	{
		// float rotationRad = rotation * Mathf.Deg2Rad;
		float L_63 = ___rotation2;
		// float rotVectorX = Mathf.Cos(rotationRad);
		float L_64 = ((float)il2cpp_codegen_multiply(L_63, (0.0174532924f)));
		float L_65;
		L_65 = cosf(L_64);
		V_5 = L_65;
		// float rotVectorY = Mathf.Sin(rotationRad);
		float L_66;
		L_66 = sinf(L_64);
		V_6 = L_66;
		// for (int v = 0; v<Bottom.Length; v++) {
		V_7 = 0;
		goto IL_0192;
	}

IL_010c:
	{
		// Vector3 vec = reference.Bottom[v].RefNormal;
		OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* L_67 = ___reference0;
		NullCheck(L_67);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_68 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)L_67)->___Bottom_17;
		int32_t L_69 = V_7;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = L_71->___RefNormal_4;
		V_8 = L_72;
		// vec = new Vector3(rotVectorX * vec.x - rotVectorY * vec.z, vec.y, rotVectorY * vec.x + rotVectorX * vec.z);
		float L_73 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_8;
		float L_75 = L_74.___x_2;
		float L_76 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = V_8;
		float L_78 = L_77.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_8;
		float L_80 = L_79.___y_3;
		float L_81 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_8;
		float L_83 = L_82.___x_2;
		float L_84 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_8;
		float L_86 = L_85.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_8), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_73, L_75)), ((float)il2cpp_codegen_multiply(L_76, L_78)))), L_80, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_81, L_83)), ((float)il2cpp_codegen_multiply(L_84, L_86)))), NULL);
		// Bottom[v].Normal = vec * NormalSign;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_87 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Bottom_17;
		int32_t L_88 = V_7;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = V_8;
		float L_92 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___NormalSign_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_91, L_92, NULL);
		NullCheck(L_90);
		L_90->___Normal_5 = L_93;
		// Bottom[v].Pos = vec * radius + position;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_94 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Bottom_17;
		int32_t L_95 = V_7;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_97 = (L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98 = V_8;
		float L_99 = ___radius3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_98, L_99, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101 = ___position1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_100, L_101, NULL);
		NullCheck(L_97);
		L_97->___Pos_7 = L_102;
		// for (int v = 0; v<Bottom.Length; v++) {
		int32_t L_103 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_103, 1));
	}

IL_0192:
	{
		// for (int v = 0; v<Bottom.Length; v++) {
		int32_t L_104 = V_7;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_105 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Bottom_17;
		NullCheck(L_105);
		if ((((int32_t)L_104) < ((int32_t)((int32_t)(((RuntimeArray*)L_105)->max_length)))))
		{
			goto IL_010c;
		}
	}
	{
		// for (int v = 0; v < Left.Length; v++) {
		V_9 = 0;
		goto IL_02af;
	}

IL_01a9:
	{
		// Vector3 vec = reference.Left[v].RefNormal;
		OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* L_106 = ___reference0;
		NullCheck(L_106);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_107 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)L_106)->___Left_11;
		int32_t L_108 = V_9;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_110 = (L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		NullCheck(L_110);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = L_110->___RefNormal_4;
		V_10 = L_111;
		// vec = new Vector3(rotVectorX * vec.x - rotVectorY * vec.z, vec.y, rotVectorY * vec.x + rotVectorX * vec.z);
		float L_112 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = V_10;
		float L_114 = L_113.___x_2;
		float L_115 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = V_10;
		float L_117 = L_116.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = V_10;
		float L_119 = L_118.___y_3;
		float L_120 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121 = V_10;
		float L_122 = L_121.___x_2;
		float L_123 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124 = V_10;
		float L_125 = L_124.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_10), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_112, L_114)), ((float)il2cpp_codegen_multiply(L_115, L_117)))), L_119, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_120, L_122)), ((float)il2cpp_codegen_multiply(L_123, L_125)))), NULL);
		// Left[v].Normal = vec * NormalSign;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_126 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Left_11;
		int32_t L_127 = V_9;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_129 = (L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130 = V_10;
		float L_131 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___NormalSign_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132;
		L_132 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_130, L_131, NULL);
		NullCheck(L_129);
		L_129->___Normal_5 = L_132;
		// Left[v].Pos = vec * radius + position;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_133 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Left_11;
		int32_t L_134 = V_9;
		NullCheck(L_133);
		int32_t L_135 = L_134;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_136 = (L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137 = V_10;
		float L_138 = ___radius3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
		L_139 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_137, L_138, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140 = ___position1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		L_141 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_139, L_140, NULL);
		NullCheck(L_136);
		L_136->___Pos_7 = L_141;
		// vec = reference.Right[v].RefNormal;
		OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* L_142 = ___reference0;
		NullCheck(L_142);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_143 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)L_142)->___Right_15;
		int32_t L_144 = V_9;
		NullCheck(L_143);
		int32_t L_145 = L_144;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_146 = (L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		NullCheck(L_146);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_147 = L_146->___RefNormal_4;
		V_10 = L_147;
		// vec = new Vector3(rotVectorX * vec.x - rotVectorY * vec.z, vec.y, rotVectorY * vec.x + rotVectorX * vec.z);
		float L_148 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149 = V_10;
		float L_150 = L_149.___x_2;
		float L_151 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152 = V_10;
		float L_153 = L_152.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154 = V_10;
		float L_155 = L_154.___y_3;
		float L_156 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157 = V_10;
		float L_158 = L_157.___x_2;
		float L_159 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_160 = V_10;
		float L_161 = L_160.___z_4;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_10), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_148, L_150)), ((float)il2cpp_codegen_multiply(L_151, L_153)))), L_155, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_156, L_158)), ((float)il2cpp_codegen_multiply(L_159, L_161)))), NULL);
		// Right[v].Normal = vec * NormalSign;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_162 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Right_15;
		int32_t L_163 = V_9;
		NullCheck(L_162);
		int32_t L_164 = L_163;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_165 = (L_162)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166 = V_10;
		float L_167 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___NormalSign_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_168;
		L_168 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_166, L_167, NULL);
		NullCheck(L_165);
		L_165->___Normal_5 = L_168;
		// Right[v].Pos = vec * radius + position;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_169 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Right_15;
		int32_t L_170 = V_9;
		NullCheck(L_169);
		int32_t L_171 = L_170;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_172 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_173 = V_10;
		float L_174 = ___radius3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_175;
		L_175 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_173, L_174, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_176 = ___position1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_177;
		L_177 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_175, L_176, NULL);
		NullCheck(L_172);
		L_172->___Pos_7 = L_177;
		// for (int v = 0; v < Left.Length; v++) {
		int32_t L_178 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_178, 1));
	}

IL_02af:
	{
		// for (int v = 0; v < Left.Length; v++) {
		int32_t L_179 = V_9;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_180 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Left_11;
		NullCheck(L_180);
		if ((((int32_t)L_179) < ((int32_t)((int32_t)(((RuntimeArray*)L_180)->max_length)))))
		{
			goto IL_01a9;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.OctaCorner::SetUVPositionAndSize(ExtendedPrimitives_11.Internal.OctaCorner,UnityEngine.Vector2[],UnityEngine.Vector2,System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctaCorner_SetUVPositionAndSize_mCF7E776F2D2E74416B3416ED7A31D3B5D0F44A9A (OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* __this, OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* ___reference0, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position2, float ___radius3, float ___rotation4, int32_t ___flipx5, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// if (Displayed) {
		bool L_0 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_0)
		{
			goto IL_00b1;
		}
	}
	{
		// float rotationRad = rotation * Mathf.Deg2Rad;
		float L_1 = ___rotation4;
		// float rotVectorX = Mathf.Cos(rotationRad);
		float L_2 = ((float)il2cpp_codegen_multiply(L_1, (0.0174532924f)));
		float L_3;
		L_3 = cosf(L_2);
		V_0 = L_3;
		// float rotVectorY = Mathf.Sin(rotationRad);
		float L_4;
		L_4 = sinf(L_2);
		V_1 = L_4;
		// for (int v = 0; v < reference.vertices.Length; v++) {
		V_2 = 0;
		goto IL_00a2;
	}

IL_0024:
	{
		// Vector2 vec = reference.vertices[v].RefUV;
		OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* L_5 = ___reference0;
		NullCheck(L_5);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_6 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)L_5)->___vertices_10;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = L_9->___RefUV_8;
		V_3 = L_10;
		// vec = new Vector2(rotVectorX * vec.x - rotVectorY * vec.y, rotVectorY * vec.x + rotVectorX * vec.y);
		float L_11 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_3;
		float L_13 = L_12.___x_0;
		float L_14 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_3;
		float L_16 = L_15.___y_1;
		float L_17 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_3;
		float L_19 = L_18.___x_0;
		float L_20 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_3;
		float L_22 = L_21.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_11, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_16)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_20, L_22)))), NULL);
		// vec.x *= flipx;
		float* L_23 = (&(&V_3)->___x_0);
		float* L_24 = L_23;
		float L_25 = *((float*)L_24);
		int32_t L_26 = ___flipx5;
		*((float*)L_24) = (float)((float)il2cpp_codegen_multiply(L_25, ((float)L_26)));
		// vec = vec * radius + position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_3;
		float L_28 = ___radius3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_27, L_28, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = ___position2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_29, L_30, NULL);
		V_3 = L_31;
		// uvs[vertices[v]] = vertices[v].UV = vec;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_32 = ___uvs1;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_33 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_34 = V_2;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		int32_t L_37;
		L_37 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_36, NULL);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_38 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_39 = V_2;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = L_42;
		V_4 = L_43;
		NullCheck(L_41);
		L_41->___UV_9 = L_43;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = V_4;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_44);
		// for (int v = 0; v < reference.vertices.Length; v++) {
		int32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00a2:
	{
		// for (int v = 0; v < reference.vertices.Length; v++) {
		int32_t L_46 = V_2;
		OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* L_47 = ___reference0;
		NullCheck(L_47);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_48 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)L_47)->___vertices_10;
		NullCheck(L_48);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_00b1:
	{
		// float rotationRad = rotation * Mathf.Deg2Rad;
		float L_49 = ___rotation4;
		// float rotVectorX = Mathf.Cos(rotationRad);
		float L_50 = ((float)il2cpp_codegen_multiply(L_49, (0.0174532924f)));
		float L_51;
		L_51 = cosf(L_50);
		V_5 = L_51;
		// float rotVectorY = Mathf.Sin(rotationRad);
		float L_52;
		L_52 = sinf(L_50);
		V_6 = L_52;
		// for (int v = 0; v < Bottom.Length; v++) {
		V_7 = 0;
		goto IL_0143;
	}

IL_00cd:
	{
		// Vector2 vec = reference.Bottom[v].RefUV;
		OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* L_53 = ___reference0;
		NullCheck(L_53);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_54 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)L_53)->___Bottom_17;
		int32_t L_55 = V_7;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		NullCheck(L_57);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = L_57->___RefUV_8;
		V_8 = L_58;
		// vec = new Vector2(rotVectorX * vec.x - rotVectorY * vec.y, rotVectorY * vec.x + rotVectorX * vec.y);
		float L_59 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = V_8;
		float L_61 = L_60.___x_0;
		float L_62 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = V_8;
		float L_64 = L_63.___y_1;
		float L_65 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66 = V_8;
		float L_67 = L_66.___x_0;
		float L_68 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_8;
		float L_70 = L_69.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_8), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_59, L_61)), ((float)il2cpp_codegen_multiply(L_62, L_64)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_65, L_67)), ((float)il2cpp_codegen_multiply(L_68, L_70)))), NULL);
		// vec.x *= flipx;
		float* L_71 = (&(&V_8)->___x_0);
		float* L_72 = L_71;
		float L_73 = *((float*)L_72);
		int32_t L_74 = ___flipx5;
		*((float*)L_72) = (float)((float)il2cpp_codegen_multiply(L_73, ((float)L_74)));
		// vec = vec * radius + position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75 = V_8;
		float L_76 = ___radius3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_77;
		L_77 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_75, L_76, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_78 = ___position2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79;
		L_79 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_77, L_78, NULL);
		V_8 = L_79;
		// Bottom[v].UV = vec;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_80 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Bottom_17;
		int32_t L_81 = V_7;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_84 = V_8;
		NullCheck(L_83);
		L_83->___UV_9 = L_84;
		// for (int v = 0; v < Bottom.Length; v++) {
		int32_t L_85 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_85, 1));
	}

IL_0143:
	{
		// for (int v = 0; v < Bottom.Length; v++) {
		int32_t L_86 = V_7;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_87 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Bottom_17;
		NullCheck(L_87);
		if ((((int32_t)L_86) < ((int32_t)((int32_t)(((RuntimeArray*)L_87)->max_length)))))
		{
			goto IL_00cd;
		}
	}
	{
		// for (int v = 0; v < Left.Length; v++) {
		V_9 = 0;
		goto IL_0240;
	}

IL_015a:
	{
		// Vector2 vec = reference.Left[v].RefUV;
		OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* L_88 = ___reference0;
		NullCheck(L_88);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_89 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)L_88)->___Left_11;
		int32_t L_90 = V_9;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_92);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_93 = L_92->___RefUV_8;
		V_10 = L_93;
		// vec = new Vector2(rotVectorX * vec.x - rotVectorY * vec.y, rotVectorY * vec.x + rotVectorX * vec.y);
		float L_94 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_95 = V_10;
		float L_96 = L_95.___x_0;
		float L_97 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_98 = V_10;
		float L_99 = L_98.___y_1;
		float L_100 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_101 = V_10;
		float L_102 = L_101.___x_0;
		float L_103 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104 = V_10;
		float L_105 = L_104.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_10), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_94, L_96)), ((float)il2cpp_codegen_multiply(L_97, L_99)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_100, L_102)), ((float)il2cpp_codegen_multiply(L_103, L_105)))), NULL);
		// vec.x *= flipx;
		float* L_106 = (&(&V_10)->___x_0);
		float* L_107 = L_106;
		float L_108 = *((float*)L_107);
		int32_t L_109 = ___flipx5;
		*((float*)L_107) = (float)((float)il2cpp_codegen_multiply(L_108, ((float)L_109)));
		// vec = vec * radius + position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_110 = V_10;
		float L_111 = ___radius3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_112;
		L_112 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_110, L_111, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_113 = ___position2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_114;
		L_114 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_112, L_113, NULL);
		V_10 = L_114;
		// Left[v].UV = vec;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_115 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Left_11;
		int32_t L_116 = V_9;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_119 = V_10;
		NullCheck(L_118);
		L_118->___UV_9 = L_119;
		// vec = reference.Right[v].RefUV;
		OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* L_120 = ___reference0;
		NullCheck(L_120);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_121 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)L_120)->___Right_15;
		int32_t L_122 = V_9;
		NullCheck(L_121);
		int32_t L_123 = L_122;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_124 = (L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		NullCheck(L_124);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_125 = L_124->___RefUV_8;
		V_10 = L_125;
		// vec = new Vector2(rotVectorX * vec.x - rotVectorY * vec.y, rotVectorY * vec.x + rotVectorX * vec.y);
		float L_126 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_127 = V_10;
		float L_128 = L_127.___x_0;
		float L_129 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_130 = V_10;
		float L_131 = L_130.___y_1;
		float L_132 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_133 = V_10;
		float L_134 = L_133.___x_0;
		float L_135 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_136 = V_10;
		float L_137 = L_136.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_10), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_126, L_128)), ((float)il2cpp_codegen_multiply(L_129, L_131)))), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_132, L_134)), ((float)il2cpp_codegen_multiply(L_135, L_137)))), NULL);
		// vec.x *= flipx;
		float* L_138 = (&(&V_10)->___x_0);
		float* L_139 = L_138;
		float L_140 = *((float*)L_139);
		int32_t L_141 = ___flipx5;
		*((float*)L_139) = (float)((float)il2cpp_codegen_multiply(L_140, ((float)L_141)));
		// vec = vec * radius + position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_142 = V_10;
		float L_143 = ___radius3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_144;
		L_144 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_142, L_143, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_145 = ___position2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_146;
		L_146 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_144, L_145, NULL);
		V_10 = L_146;
		// Right[v].UV = vec;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_147 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Right_15;
		int32_t L_148 = V_9;
		NullCheck(L_147);
		int32_t L_149 = L_148;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_151 = V_10;
		NullCheck(L_150);
		L_150->___UV_9 = L_151;
		// for (int v = 0; v < Left.Length; v++) {
		int32_t L_152 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_152, 1));
	}

IL_0240:
	{
		// for (int v = 0; v < Left.Length; v++) {
		int32_t L_153 = V_9;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_154 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Left_11;
		NullCheck(L_154);
		if ((((int32_t)L_153) < ((int32_t)((int32_t)(((RuntimeArray*)L_154)->max_length)))))
		{
			goto IL_015a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.OctaCorner::SetUVPositionAndSizeUnfoldB(UnityEngine.Vector2[],UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OctaCorner_SetUVPositionAndSizeUnfoldB_m5D163845FC1489EDAF674915E3E0DF95DABEB30D (OctaCorner_t5B3FECE96D2CDF8A0B506AD81F99716D237C7EF2* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scale2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// for (int y = 0; y < LengthY; y++) {
		V_0 = 0;
		goto IL_00ba;
	}

IL_0007:
	{
		// float ylv = y / (float)SegmentsY;
		int32_t L_0 = V_0;
		int32_t L_1 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		V_1 = ((float)(((float)L_0)/((float)L_1)));
		// float xTo = Mathf.Sqrt(1.5625f - ylv * ylv) - 0.25f;
		float L_2 = V_1;
		float L_3 = V_1;
		float L_4;
		L_4 = sqrtf(((float)il2cpp_codegen_subtract((1.5625f), ((float)il2cpp_codegen_multiply(L_2, L_3)))));
		V_2 = ((float)il2cpp_codegen_subtract(L_4, (0.25f)));
		// float xFrom = 1f - xTo;
		float L_5 = V_2;
		V_3 = ((float)il2cpp_codegen_subtract((1.0f), L_5));
		// int xSegments = SegmentsX - y;
		int32_t L_6 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_7 = V_0;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		// for (int x = 0; x <= xSegments; x++) {
		V_5 = 0;
		goto IL_00b0;
	}

IL_003e:
	{
		// if (y == SegmentsY) {
		int32_t L_8 = V_0;
		int32_t L_9 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_005a;
		}
	}
	{
		// vec = new Vector2(0.5f, 1f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_6), (0.5f), (1.0f), NULL);
		goto IL_0070;
	}

IL_005a:
	{
		// vec = new Vector2(Mathf.LerpUnclamped(xFrom, xTo, (float)x / xSegments), ylv);
		float L_10 = V_3;
		float L_11 = V_2;
		int32_t L_12 = V_5;
		int32_t L_13 = V_4;
		float L_14;
		L_14 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_10, L_11, ((float)(((float)L_12)/((float)L_13))), NULL);
		float L_15 = V_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_6), L_14, L_15, NULL);
	}

IL_0070:
	{
		// vec = Vector2.Scale(vec, scale);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = ___scale2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline(L_16, L_17, NULL);
		V_6 = L_18;
		// vec += position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = ___position1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_19, L_20, NULL);
		V_6 = L_21;
		// this[x, y].UV = vec;
		int32_t L_22 = V_5;
		int32_t L_23 = V_0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_24;
		L_24 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_22, L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_6;
		NullCheck(L_24);
		L_24->___UV_9 = L_25;
		// uvs[this[x, y]] = vec;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_26 = ___uvs0;
		int32_t L_27 = V_5;
		int32_t L_28 = V_0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_29;
		L_29 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_27, L_28);
		int32_t L_30;
		L_30 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_29, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = V_6;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_31);
		// for (int x = 0; x <= xSegments; x++) {
		int32_t L_32 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_00b0:
	{
		// for (int x = 0; x <= xSegments; x++) {
		int32_t L_33 = V_5;
		int32_t L_34 = V_4;
		if ((((int32_t)L_33) <= ((int32_t)L_34)))
		{
			goto IL_003e;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_35 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00ba:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_36 = V_0;
		int32_t L_37 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 ExtendedPrimitives_11.Internal.OctaCorner::CalcVerticesCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OctaCorner_CalcVerticesCount_mB06BA42A1DD5E170A5EC3505428F347DF9944815 (int32_t ___segments0, const RuntimeMethod* method) 
{
	{
		// return ((segments+1) * (segments + 2))/2;
		int32_t L_0 = ___segments0;
		int32_t L_1 = ___segments0;
		return ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_0, 1)), ((int32_t)il2cpp_codegen_add(L_1, 2))))/2));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.PieCap::Inner(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* PieCap_Inner_m909BF1D68699FFDC823B62D6917CBB89E7C46628 (PieCap_tDAD4D8145ED6AE686031F7C8C74D35BF62E7C845* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	{
		// return this[idx,0];
		int32_t L_0 = ___idx0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_1;
		L_1 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_0, 0);
		return L_1;
	}
}
// ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.PieCap::Outer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* PieCap_Outer_m3224BC92BD86651CEBAF9E2F365DC02884A72B1A (PieCap_tDAD4D8145ED6AE686031F7C8C74D35BF62E7C845* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	{
		// return this[idx, 1];
		int32_t L_0 = ___idx0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_1;
		L_1 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_0, 1);
		return L_1;
	}
}
// ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.PieCap::get_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* PieCap_get_Item_mBCEB979754E6439F69738B2018DA6AF542A77F02 (PieCap_tDAD4D8145ED6AE686031F7C8C74D35BF62E7C845* __this, int32_t ___x0, int32_t ___y1, const RuntimeMethod* method) 
{
	{
		// if (y == 0) {
		int32_t L_0 = ___y1;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// return vertices[x];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_1 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_2 = ___x0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}

IL_000c:
	{
		// return vertices[InnerLength + x];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_5 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_6 = __this->___InnerLength_25;
		int32_t L_7 = ___x0;
		NullCheck(L_5);
		int32_t L_8 = ((int32_t)il2cpp_codegen_add(L_6, L_7));
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		return L_9;
	}
}
// System.Void ExtendedPrimitives_11.Internal.PieCap::set_Item(System.Int32,System.Int32,ExtendedPrimitives_11.Internal.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieCap_set_Item_mEFADB3BEAEF564310AF7FA43D2B476D629F9F3F3 (PieCap_tDAD4D8145ED6AE686031F7C8C74D35BF62E7C845* __this, int32_t ___x0, int32_t ___y1, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* ___value2, const RuntimeMethod* method) 
{
	{
		// if (y == 0) {
		int32_t L_0 = ___y1;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// vertices[x] = value;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_1 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_2 = ___x0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_3 = ___value2;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)L_3);
		return;
	}

IL_000d:
	{
		// vertices[InnerLength + x] = value;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_4 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_5 = __this->___InnerLength_25;
		int32_t L_6 = ___x0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_7 = ___value2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_5, L_6))), (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)L_7);
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.PieCap::.ctor(System.Boolean,ExtendedPrimitives_11.ExtendedPrimitive,System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Element>,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieCap__ctor_m2A3AD6E52F6A7FE06EEF50E848A695D6ACCB13BA (PieCap_tDAD4D8145ED6AE686031F7C8C74D35BF62E7C845* __this, bool ___displayed0, ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* ___ep1, List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* ___eList2, bool ___flipped3, int32_t ___innerSegments4, int32_t ___outerSegments5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectTriangulator_tAB17DED97D659CCD781B96E21912F159E348414F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m167A28803E058E32996ED5459DF38D914B227242_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m68B8F85B440B5481DF9E5FF1F77AA409EDE22F8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m211D86FDD740048B73656BF38CED93EA193951F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE1288AE6638F18E17AE5FC11BC4F237FB7270FFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_4 = NULL;
	int32_t V_5 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_6 = NULL;
	ConnectTriangulator_tAB17DED97D659CCD781B96E21912F159E348414F* V_7 = NULL;
	int32_t V_8 = 0;
	Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t G_B3_0 = 0;
	PieCap_tDAD4D8145ED6AE686031F7C8C74D35BF62E7C845* G_B5_0 = NULL;
	PieCap_tDAD4D8145ED6AE686031F7C8C74D35BF62E7C845* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	PieCap_tDAD4D8145ED6AE686031F7C8C74D35BF62E7C845* G_B6_1 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B27_0 = 0;
	{
		// public PieCap(bool displayed, ExtendedPrimitive ep, List<Element> eList, bool flipped, int innerSegments, int outerSegments) {
		Element__ctor_mDB22061F7FB986E21DF9889FE888A2BA49205420(__this, NULL);
		// Displayed = displayed;
		bool L_0 = ___displayed0;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0 = L_0;
		// parent = ep;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_1 = ___ep1;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5), (void*)L_1);
		// eList.Add(this);
		List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* L_2 = ___eList2;
		NullCheck(L_2);
		List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_inline(L_2, __this, List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		// flipped = ep.FlipNormals ? !flipped : flipped;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_3 = ___ep1;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExtendedPrimitives_11.ExtendedPrimitive::get_FlipNormals() */, L_3);
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		bool L_5 = ___flipped3;
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002c;
	}

IL_0027:
	{
		bool L_6 = ___flipped3;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_002c:
	{
		___flipped3 = (bool)G_B3_0;
		// NormalSign = ep.FlipNormals ? -1 : 1;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_7 = ___ep1;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExtendedPrimitives_11.ExtendedPrimitive::get_FlipNormals() */, L_7);
		G_B4_0 = __this;
		if (L_8)
		{
			G_B5_0 = __this;
			goto IL_003a;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B6_0 = (-1);
		G_B6_1 = G_B5_0;
	}

IL_003b:
	{
		NullCheck(G_B6_1);
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)G_B6_1)->___NormalSign_21 = ((float)G_B6_0);
		// InnerSegments = innerSegments;
		int32_t L_9 = ___innerSegments4;
		__this->___InnerSegments_23 = L_9;
		// OuterSegments = outerSegments;
		int32_t L_10 = ___outerSegments5;
		__this->___OuterSegments_24 = L_10;
		// InnerLength = innerSegments + 1;
		int32_t L_11 = ___innerSegments4;
		__this->___InnerLength_25 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// OuterLength = outerSegments + 1;
		int32_t L_12 = ___outerSegments5;
		__this->___OuterLength_26 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// vertices = new Vertex[CalcVerticesCount(innerSegments, outerSegments)];
		int32_t L_13 = ___innerSegments4;
		int32_t L_14 = ___outerSegments5;
		int32_t L_15;
		L_15 = PieCap_CalcVerticesCount_m70418773A61A171788B4F056D5437C8A7424FAD9(L_13, L_14, NULL);
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_16 = (VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)SZArrayNew(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var, (uint32_t)L_15);
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10), (void*)L_16);
		// int[] inner = new int[innerSegments+1];
		int32_t L_17 = ___innerSegments4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_17, 1)));
		V_0 = L_18;
		// int[] outer = new int[outerSegments + 1];
		int32_t L_19 = ___outerSegments5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_19, 1)));
		V_1 = L_20;
		// int localCounter = 0;
		V_2 = 0;
		// for (int i = 0; i < InnerLength; i++) {
		V_3 = 0;
		goto IL_00e9;
	}

IL_0093:
	{
		// Vertex vert = new Vertex(ref localCounter, ref ep.vertsCounter, new Vector2(i / (float)InnerSegments, 0), 1f);
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_21 = ___ep1;
		NullCheck(L_21);
		int32_t* L_22 = (&L_21->___vertsCounter_26);
		int32_t L_23 = V_3;
		int32_t L_24 = __this->___InnerSegments_23;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), ((float)(((float)L_23)/((float)L_24))), (0.0f), /*hidden argument*/NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_26 = (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)il2cpp_codegen_object_new(Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Vertex__ctor_mA99B489056B0AFCE32FBA90F0946C16830A4F6F1(L_26, (&V_2), L_22, L_25, (1.0f), NULL);
		V_4 = L_26;
		// if (!Displayed) {
		bool L_27 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (L_27)
		{
			goto IL_00d1;
		}
	}
	{
		// ep.vertsCounter--;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_28 = ___ep1;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_29 = L_28;
		NullCheck(L_29);
		int32_t L_30 = L_29->___vertsCounter_26;
		NullCheck(L_29);
		L_29->___vertsCounter_26 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
	}

IL_00d1:
	{
		// this[i, 0] = vert;
		int32_t L_31 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_32 = V_4;
		VirtualActionInvoker3< int32_t, int32_t, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* >::Invoke(5 /* System.Void ExtendedPrimitives_11.Internal.Element::set_Item(System.Int32,System.Int32,ExtendedPrimitives_11.Internal.Vertex) */, __this, L_31, 0, L_32);
		// inner[i] = vert.Local;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_0;
		int32_t L_34 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_35 = V_4;
		NullCheck(L_35);
		int32_t L_36 = L_35->___Local_2;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (int32_t)L_36);
		// for (int i = 0; i < InnerLength; i++) {
		int32_t L_37 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00e9:
	{
		// for (int i = 0; i < InnerLength; i++) {
		int32_t L_38 = V_3;
		int32_t L_39 = __this->___InnerLength_25;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0093;
		}
	}
	{
		// for (int i = 0; i < OuterLength; i++) {
		V_5 = 0;
		goto IL_0152;
	}

IL_00f7:
	{
		// Vertex vert = new Vertex(ref localCounter, ref ep.vertsCounter, new Vector2(i / (float)OuterSegments, 1), 1f);
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_40 = ___ep1;
		NullCheck(L_40);
		int32_t* L_41 = (&L_40->___vertsCounter_26);
		int32_t L_42 = V_5;
		int32_t L_43 = __this->___OuterSegments_24;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), ((float)(((float)L_42)/((float)L_43))), (1.0f), /*hidden argument*/NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_45 = (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)il2cpp_codegen_object_new(Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		Vertex__ctor_mA99B489056B0AFCE32FBA90F0946C16830A4F6F1(L_45, (&V_2), L_41, L_44, (1.0f), NULL);
		V_6 = L_45;
		// if (!Displayed) {
		bool L_46 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (L_46)
		{
			goto IL_0136;
		}
	}
	{
		// ep.vertsCounter--;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_47 = ___ep1;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_48 = L_47;
		NullCheck(L_48);
		int32_t L_49 = L_48->___vertsCounter_26;
		NullCheck(L_48);
		L_48->___vertsCounter_26 = ((int32_t)il2cpp_codegen_subtract(L_49, 1));
	}

IL_0136:
	{
		// this[i, 1] = vert;
		int32_t L_50 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_51 = V_6;
		VirtualActionInvoker3< int32_t, int32_t, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* >::Invoke(5 /* System.Void ExtendedPrimitives_11.Internal.Element::set_Item(System.Int32,System.Int32,ExtendedPrimitives_11.Internal.Vertex) */, __this, L_50, 1, L_51);
		// outer[i] = vert.Local;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_52 = V_1;
		int32_t L_53 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_54 = V_6;
		NullCheck(L_54);
		int32_t L_55 = L_54->___Local_2;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (int32_t)L_55);
		// for (int i = 0; i < OuterLength; i++) {
		int32_t L_56 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_0152:
	{
		// for (int i = 0; i < OuterLength; i++) {
		int32_t L_57 = V_5;
		int32_t L_58 = __this->___OuterLength_26;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_00f7;
		}
	}
	{
		// if (Displayed) {
		bool L_59 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_59)
		{
			goto IL_0350;
		}
	}
	{
		// ConnectTriangulator connect = new ConnectTriangulator(inner, outer);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_61 = V_1;
		ConnectTriangulator_tAB17DED97D659CCD781B96E21912F159E348414F* L_62 = (ConnectTriangulator_tAB17DED97D659CCD781B96E21912F159E348414F*)il2cpp_codegen_object_new(ConnectTriangulator_tAB17DED97D659CCD781B96E21912F159E348414F_il2cpp_TypeInfo_var);
		NullCheck(L_62);
		ConnectTriangulator__ctor_m15DE3BA37B9B42F2901A9301839DBDC2B767A441(L_62, L_60, L_61, NULL);
		V_7 = L_62;
		// for (int i = 0; i < connect.ResultTris.Count; i++) {
		V_8 = 0;
		goto IL_01d7;
	}

IL_0175:
	{
		// ConnectTriangulator.Tris tri = connect.ResultTris[i];
		ConnectTriangulator_tAB17DED97D659CCD781B96E21912F159E348414F* L_63 = V_7;
		NullCheck(L_63);
		List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* L_64 = L_63->___ResultTris_0;
		int32_t L_65 = V_8;
		NullCheck(L_64);
		Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC L_66;
		L_66 = List_1_get_Item_mE1288AE6638F18E17AE5FC11BC4F237FB7270FFB(L_64, L_65, List_1_get_Item_mE1288AE6638F18E17AE5FC11BC4F237FB7270FFB_RuntimeMethod_var);
		V_9 = L_66;
		// bool trisFlipped = flipped ? !tri.Flipped : tri.Flipped;
		bool L_67 = ___flipped3;
		if (L_67)
		{
			goto IL_0192;
		}
	}
	{
		Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC L_68 = V_9;
		bool L_69 = L_68.___Flipped_3;
		G_B21_0 = ((int32_t)(L_69));
		goto IL_019c;
	}

IL_0192:
	{
		Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC L_70 = V_9;
		bool L_71 = L_70.___Flipped_3;
		G_B21_0 = ((((int32_t)L_71) == ((int32_t)0))? 1 : 0);
	}

IL_019c:
	{
		// BuildTriangle(trisFlipped, ep.Faces, vertices[tri.A], vertices[tri.B], vertices[tri.C]);
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_72 = ___ep1;
		NullCheck(L_72);
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_73 = L_72->___Faces_17;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_74 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC L_75 = V_9;
		int32_t L_76 = L_75.___A_0;
		NullCheck(L_74);
		int32_t L_77 = L_76;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_78 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_79 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC L_80 = V_9;
		int32_t L_81 = L_80.___B_1;
		NullCheck(L_79);
		int32_t L_82 = L_81;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_83 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_84 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC L_85 = V_9;
		int32_t L_86 = L_85.___C_2;
		NullCheck(L_84);
		int32_t L_87 = L_86;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_88 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		Element_BuildTriangle_mB92059645D4AC5A46904359E787A6DF46948083C((bool)G_B21_0, L_73, L_78, L_83, L_88, NULL);
		// for (int i = 0; i < connect.ResultTris.Count; i++) {
		int32_t L_89 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01d7:
	{
		// for (int i = 0; i < connect.ResultTris.Count; i++) {
		int32_t L_90 = V_8;
		ConnectTriangulator_tAB17DED97D659CCD781B96E21912F159E348414F* L_91 = V_7;
		NullCheck(L_91);
		List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* L_92 = L_91->___ResultTris_0;
		NullCheck(L_92);
		int32_t L_93;
		L_93 = List_1_get_Count_m68B8F85B440B5481DF9E5FF1F77AA409EDE22F8F_inline(L_92, List_1_get_Count_m68B8F85B440B5481DF9E5FF1F77AA409EDE22F8F_RuntimeMethod_var);
		if ((((int32_t)L_90) < ((int32_t)L_93)))
		{
			goto IL_0175;
		}
	}
	{
		// for (int i = 0; i < connect.ResultQuads.Count; i++) {
		V_10 = 0;
		goto IL_025c;
	}

IL_01ec:
	{
		// ConnectTriangulator.Quad quad = connect.ResultQuads[i];
		ConnectTriangulator_tAB17DED97D659CCD781B96E21912F159E348414F* L_94 = V_7;
		NullCheck(L_94);
		List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* L_95 = L_94->___ResultQuads_1;
		int32_t L_96 = V_10;
		NullCheck(L_95);
		Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B L_97;
		L_97 = List_1_get_Item_m211D86FDD740048B73656BF38CED93EA193951F8(L_95, L_96, List_1_get_Item_m211D86FDD740048B73656BF38CED93EA193951F8_RuntimeMethod_var);
		V_11 = L_97;
		// bool quadFlipped = flipped ? !quad.Flipped : quad.Flipped;
		bool L_98 = ___flipped3;
		if (L_98)
		{
			goto IL_0209;
		}
	}
	{
		Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B L_99 = V_11;
		bool L_100 = L_99.___Flipped_4;
		G_B27_0 = ((int32_t)(L_100));
		goto IL_0213;
	}

IL_0209:
	{
		Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B L_101 = V_11;
		bool L_102 = L_101.___Flipped_4;
		G_B27_0 = ((((int32_t)L_102) == ((int32_t)0))? 1 : 0);
	}

IL_0213:
	{
		// BuildQuad(quadFlipped, ep.Faces, vertices[quad.A], vertices[quad.B], vertices[quad.C], vertices[quad.D]);
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_103 = ___ep1;
		NullCheck(L_103);
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_104 = L_103->___Faces_17;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_105 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B L_106 = V_11;
		int32_t L_107 = L_106.___A_0;
		NullCheck(L_105);
		int32_t L_108 = L_107;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_109 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_110 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B L_111 = V_11;
		int32_t L_112 = L_111.___B_1;
		NullCheck(L_110);
		int32_t L_113 = L_112;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_114 = (L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_115 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B L_116 = V_11;
		int32_t L_117 = L_116.___C_2;
		NullCheck(L_115);
		int32_t L_118 = L_117;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_119 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_120 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B L_121 = V_11;
		int32_t L_122 = L_121.___D_3;
		NullCheck(L_120);
		int32_t L_123 = L_122;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_124 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		Element_BuildQuad_mA3F4F5EDDC213CC056BEE9CF209CC1A27637DC70((bool)G_B27_0, L_104, L_109, L_114, L_119, L_124, NULL);
		// for (int i = 0; i < connect.ResultQuads.Count; i++) {
		int32_t L_125 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_125, 1));
	}

IL_025c:
	{
		// for (int i = 0; i < connect.ResultQuads.Count; i++) {
		int32_t L_126 = V_10;
		ConnectTriangulator_tAB17DED97D659CCD781B96E21912F159E348414F* L_127 = V_7;
		NullCheck(L_127);
		List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* L_128 = L_127->___ResultQuads_1;
		NullCheck(L_128);
		int32_t L_129;
		L_129 = List_1_get_Count_m167A28803E058E32996ED5459DF38D914B227242_inline(L_128, List_1_get_Count_m167A28803E058E32996ED5459DF38D914B227242_RuntimeMethod_var);
		if ((((int32_t)L_126) < ((int32_t)L_129)))
		{
			goto IL_01ec;
		}
	}
	{
		// for (int i = 0; i < InnerLength - 1; i++) {
		V_12 = 0;
		goto IL_02a3;
	}

IL_0271:
	{
		// ep.MEdges.Add(new MeshEdge(Inner(i), Inner(i + 1)));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_130 = ___ep1;
		NullCheck(L_130);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_131 = L_130->___MEdges_16;
		int32_t L_132 = V_12;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_133;
		L_133 = PieCap_Inner_m909BF1D68699FFDC823B62D6917CBB89E7C46628(__this, L_132, NULL);
		int32_t L_134;
		L_134 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_133, NULL);
		int32_t L_135 = V_12;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_136;
		L_136 = PieCap_Inner_m909BF1D68699FFDC823B62D6917CBB89E7C46628(__this, ((int32_t)il2cpp_codegen_add(L_135, 1)), NULL);
		int32_t L_137;
		L_137 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_136, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_138;
		memset((&L_138), 0, sizeof(L_138));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_138), L_134, L_137, /*hidden argument*/NULL);
		NullCheck(L_131);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_131, L_138, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// for (int i = 0; i < InnerLength - 1; i++) {
		int32_t L_139 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_139, 1));
	}

IL_02a3:
	{
		// for (int i = 0; i < InnerLength - 1; i++) {
		int32_t L_140 = V_12;
		int32_t L_141 = __this->___InnerLength_25;
		if ((((int32_t)L_140) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_141, 1)))))
		{
			goto IL_0271;
		}
	}
	{
		// for (int i = 0; i < OuterLength - 1; i++) {
		V_13 = 0;
		goto IL_02e6;
	}

IL_02b4:
	{
		// ep.MEdges.Add(new MeshEdge(Outer(i), Outer(i + 1)));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_142 = ___ep1;
		NullCheck(L_142);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_143 = L_142->___MEdges_16;
		int32_t L_144 = V_13;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_145;
		L_145 = PieCap_Outer_m3224BC92BD86651CEBAF9E2F365DC02884A72B1A(__this, L_144, NULL);
		int32_t L_146;
		L_146 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_145, NULL);
		int32_t L_147 = V_13;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_148;
		L_148 = PieCap_Outer_m3224BC92BD86651CEBAF9E2F365DC02884A72B1A(__this, ((int32_t)il2cpp_codegen_add(L_147, 1)), NULL);
		int32_t L_149;
		L_149 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_148, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_150;
		memset((&L_150), 0, sizeof(L_150));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_150), L_146, L_149, /*hidden argument*/NULL);
		NullCheck(L_143);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_143, L_150, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// for (int i = 0; i < OuterLength - 1; i++) {
		int32_t L_151 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_151, 1));
	}

IL_02e6:
	{
		// for (int i = 0; i < OuterLength - 1; i++) {
		int32_t L_152 = V_13;
		int32_t L_153 = __this->___OuterLength_26;
		if ((((int32_t)L_152) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_153, 1)))))
		{
			goto IL_02b4;
		}
	}
	{
		// ep.MEdges.Add(new MeshEdge(Outer(0), Inner(0)));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_154 = ___ep1;
		NullCheck(L_154);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_155 = L_154->___MEdges_16;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_156;
		L_156 = PieCap_Outer_m3224BC92BD86651CEBAF9E2F365DC02884A72B1A(__this, 0, NULL);
		int32_t L_157;
		L_157 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_156, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_158;
		L_158 = PieCap_Inner_m909BF1D68699FFDC823B62D6917CBB89E7C46628(__this, 0, NULL);
		int32_t L_159;
		L_159 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_158, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_160;
		memset((&L_160), 0, sizeof(L_160));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_160), L_157, L_159, /*hidden argument*/NULL);
		NullCheck(L_155);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_155, L_160, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// ep.MEdges.Add(new MeshEdge(Outer(OuterLength - 1), Inner(InnerLength - 1)));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_161 = ___ep1;
		NullCheck(L_161);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_162 = L_161->___MEdges_16;
		int32_t L_163 = __this->___OuterLength_26;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_164;
		L_164 = PieCap_Outer_m3224BC92BD86651CEBAF9E2F365DC02884A72B1A(__this, ((int32_t)il2cpp_codegen_subtract(L_163, 1)), NULL);
		int32_t L_165;
		L_165 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_164, NULL);
		int32_t L_166 = __this->___InnerLength_25;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_167;
		L_167 = PieCap_Inner_m909BF1D68699FFDC823B62D6917CBB89E7C46628(__this, ((int32_t)il2cpp_codegen_subtract(L_166, 1)), NULL);
		int32_t L_168;
		L_168 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_167, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_169;
		memset((&L_169), 0, sizeof(L_169));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_169), L_165, L_168, /*hidden argument*/NULL);
		NullCheck(L_162);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_162, L_169, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
	}

IL_0350:
	{
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.PieCap::SetPositionAndSize(ExtendedPrimitives_11.Internal.Vertex[],ExtendedPrimitives_11.Internal.Vertex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieCap_SetPositionAndSize_m99D70AA247B949AB535F96A83A1795A897C1DF52 (PieCap_tDAD4D8145ED6AE686031F7C8C74D35BF62E7C845* __this, VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___innerProfile0, VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___outerProfile1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// if (Displayed) {
		bool L_0 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_0)
		{
			goto IL_00ea;
		}
	}
	{
		// for (int i = 0; i < InnerLength; i++) {
		V_0 = 0;
		goto IL_0073;
	}

IL_000f:
	{
		// Vertex v = this[InnerLength - 1 - i, 0];
		int32_t L_1 = __this->___InnerLength_25;
		int32_t L_2 = V_0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_3;
		L_3 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_1, 1)), L_2)), 0);
		V_1 = L_3;
		// parent.mvertices[v] = v.Pos = innerProfile[i].Pos;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_4 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_4);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = L_4->___mvertices_18;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_6 = V_1;
		int32_t L_7;
		L_7 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_6, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_8 = V_1;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_9 = ___innerProfile0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___Pos_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13;
		V_2 = L_14;
		NullCheck(L_8);
		L_8->___Pos_7 = L_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_15);
		// parent.mnormals[v] = v.Normal = innerProfile[i].Normal;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_16 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_16);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = L_16->___mnormals_19;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_18 = V_1;
		int32_t L_19;
		L_19 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_18, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_20 = V_1;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_21 = ___innerProfile0;
		int32_t L_22 = V_0;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = L_24->___Normal_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = L_25;
		V_2 = L_26;
		NullCheck(L_20);
		L_20->___Normal_5 = L_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_27);
		// for (int i = 0; i < InnerLength; i++) {
		int32_t L_28 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0073:
	{
		// for (int i = 0; i < InnerLength; i++) {
		int32_t L_29 = V_0;
		int32_t L_30 = __this->___InnerLength_25;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_000f;
		}
	}
	{
		// for (int i = 0; i < OuterLength; i++) {
		V_3 = 0;
		goto IL_00e0;
	}

IL_0080:
	{
		// Vertex v = this[i, 1];
		int32_t L_31 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_32;
		L_32 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_31, 1);
		V_4 = L_32;
		// parent.mvertices[v] = v.Pos = outerProfile[i].Pos;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_33 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_33);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_34 = L_33->___mvertices_18;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_35 = V_4;
		int32_t L_36;
		L_36 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_35, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_37 = V_4;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_38 = ___outerProfile1;
		int32_t L_39 = V_3;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = L_41->___Pos_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = L_42;
		V_2 = L_43;
		NullCheck(L_37);
		L_37->___Pos_7 = L_43;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_2;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_44);
		// parent.mnormals[v] = v.Normal = outerProfile[i].Normal;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_45 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_45);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_46 = L_45->___mnormals_19;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_47 = V_4;
		int32_t L_48;
		L_48 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_47, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_49 = V_4;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_50 = ___outerProfile1;
		int32_t L_51 = V_3;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		NullCheck(L_53);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = L_53->___Normal_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = L_54;
		V_2 = L_55;
		NullCheck(L_49);
		L_49->___Normal_5 = L_55;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_2;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_56);
		// for (int i = 0; i < OuterLength; i++) {
		int32_t L_57 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00e0:
	{
		// for (int i = 0; i < OuterLength; i++) {
		int32_t L_58 = V_3;
		int32_t L_59 = __this->___OuterLength_26;
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_0080;
		}
	}
	{
		return;
	}

IL_00ea:
	{
		// for (int i = 0; i < InnerLength; i++) {
		V_5 = 0;
		goto IL_0124;
	}

IL_00ef:
	{
		// Vertex v = this[InnerLength - 1 - i, 0];
		int32_t L_60 = __this->___InnerLength_25;
		int32_t L_61 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_62;
		L_62 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_60, 1)), L_61)), 0);
		// v.Pos = innerProfile[i].Pos;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_63 = L_62;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_64 = ___innerProfile0;
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_67 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_67);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = L_67->___Pos_7;
		NullCheck(L_63);
		L_63->___Pos_7 = L_68;
		// v.Normal = innerProfile[i].Normal;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_69 = ___innerProfile0;
		int32_t L_70 = V_5;
		NullCheck(L_69);
		int32_t L_71 = L_70;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_72);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = L_72->___Normal_5;
		NullCheck(L_63);
		L_63->___Normal_5 = L_73;
		// for (int i = 0; i < InnerLength; i++) {
		int32_t L_74 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_0124:
	{
		// for (int i = 0; i < InnerLength; i++) {
		int32_t L_75 = V_5;
		int32_t L_76 = __this->___InnerLength_25;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_00ef;
		}
	}
	{
		// for (int i = 0; i < OuterLength; i++) {
		V_6 = 0;
		goto IL_015f;
	}

IL_0133:
	{
		// Vertex v = this[i, 1];
		int32_t L_77 = V_6;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_78;
		L_78 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_77, 1);
		// v.Pos = outerProfile[i].Pos;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_79 = L_78;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_80 = ___outerProfile1;
		int32_t L_81 = V_6;
		NullCheck(L_80);
		int32_t L_82 = L_81;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_83 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_82));
		NullCheck(L_83);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = L_83->___Pos_7;
		NullCheck(L_79);
		L_79->___Pos_7 = L_84;
		// v.Normal = outerProfile[i].Normal;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_85 = ___outerProfile1;
		int32_t L_86 = V_6;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		NullCheck(L_88);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = L_88->___Normal_5;
		NullCheck(L_79);
		L_79->___Normal_5 = L_89;
		// for (int i = 0; i < OuterLength; i++) {
		int32_t L_90 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_015f:
	{
		// for (int i = 0; i < OuterLength; i++) {
		int32_t L_91 = V_6;
		int32_t L_92 = __this->___OuterLength_26;
		if ((((int32_t)L_91) < ((int32_t)L_92)))
		{
			goto IL_0133;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 ExtendedPrimitives_11.Internal.PieCap::CalcVerticesCount(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PieCap_CalcVerticesCount_m70418773A61A171788B4F056D5437C8A7424FAD9 (int32_t ___innerSegments0, int32_t ___outerSegments1, const RuntimeMethod* method) 
{
	{
		// return innerSegments + outerSegments + 2;
		int32_t L_0 = ___innerSegments0;
		int32_t L_1 = ___outerSegments1;
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_0, L_1)), 2));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.PieCenter::.ctor(System.Boolean,ExtendedPrimitives_11.ExtendedPrimitive,System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Element>,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieCenter__ctor_m30CE89A86BE5E0CD10CBBFA3502F9E7E7AB3FE3F (PieCenter_t538558E0F3A586314A724B4F6B540201E0322606* __this, bool ___displayed0, ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* ___ep1, List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* ___eList2, bool ___flipNormals3, int32_t ___sFilletSegments4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_10 = NULL;
	float V_11 = 0.0f;
	int32_t G_B3_0 = 0;
	PieCenter_t538558E0F3A586314A724B4F6B540201E0322606* G_B5_0 = NULL;
	PieCenter_t538558E0F3A586314A724B4F6B540201E0322606* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	PieCenter_t538558E0F3A586314A724B4F6B540201E0322606* G_B6_1 = NULL;
	{
		// public PieCenter(bool displayed, ExtendedPrimitive ep, List<Element> eList,  bool flipNormals, int sFilletSegments ) {
		Element__ctor_mDB22061F7FB986E21DF9889FE888A2BA49205420(__this, NULL);
		// Displayed = displayed;
		bool L_0 = ___displayed0;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0 = L_0;
		// parent = ep;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_1 = ___ep1;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5), (void*)L_1);
		// eList.Add(this);
		List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* L_2 = ___eList2;
		NullCheck(L_2);
		List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_inline(L_2, __this, List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		// flipNormals = ep.FlipNormals ? !flipNormals : flipNormals;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_3 = ___ep1;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExtendedPrimitives_11.ExtendedPrimitive::get_FlipNormals() */, L_3);
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		bool L_5 = ___flipNormals3;
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002c;
	}

IL_0027:
	{
		bool L_6 = ___flipNormals3;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_002c:
	{
		___flipNormals3 = (bool)G_B3_0;
		// NormalSign = ep.FlipNormals ? -1f : 1f;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_7 = ___ep1;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExtendedPrimitives_11.ExtendedPrimitive::get_FlipNormals() */, L_7);
		G_B4_0 = __this;
		if (L_8)
		{
			G_B5_0 = __this;
			goto IL_003e;
		}
	}
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B4_0;
		goto IL_0043;
	}

IL_003e:
	{
		G_B6_0 = (-1.0f);
		G_B6_1 = G_B5_0;
	}

IL_0043:
	{
		NullCheck(G_B6_1);
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)G_B6_1)->___NormalSign_21 = G_B6_0;
		// SegmentsX = sFilletSegments;
		int32_t L_9 = ___sFilletSegments4;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6 = L_9;
		// SegmentsY = sFilletSegments;
		int32_t L_10 = ___sFilletSegments4;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7 = L_10;
		// LengthX = SegmentsX + 1;
		int32_t L_11 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// LengthY = SegmentsY + 1;
		int32_t L_12 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// vertices = new Vertex[LengthX * LengthY];
		int32_t L_13 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		int32_t L_14 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_15 = (VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)SZArrayNew(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_13, L_14)));
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10), (void*)L_15);
		// for (int y = 0; y < LengthY; y++) {
		V_0 = 0;
		goto IL_00ff;
	}

IL_0090:
	{
		// for (int x = 0; x < LengthX; x++) {
		V_1 = 0;
		goto IL_00f2;
	}

IL_0094:
	{
		// Vertex vert = new Vertex(ref ep.vertsCounter, new Vector2(x / (float)SegmentsX, y / (float)SegmentsY));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_16 = ___ep1;
		NullCheck(L_16);
		int32_t* L_17 = (&L_16->___vertsCounter_26);
		int32_t L_18 = V_1;
		int32_t L_19 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_20 = V_0;
		int32_t L_21 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), ((float)(((float)L_18)/((float)L_19))), ((float)(((float)L_20)/((float)L_21))), /*hidden argument*/NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_23 = (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)il2cpp_codegen_object_new(Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Vertex__ctor_mA971C36E661FEC1EB7F3B31BA80BB9F2918643D3(L_23, L_17, L_22, NULL);
		V_2 = L_23;
		// if (!Displayed) {
		bool L_24 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (L_24)
		{
			goto IL_00cf;
		}
	}
	{
		// ep.vertsCounter--;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_25 = ___ep1;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_26 = L_25;
		NullCheck(L_26);
		int32_t L_27 = L_26->___vertsCounter_26;
		NullCheck(L_26);
		L_26->___vertsCounter_26 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
	}

IL_00cf:
	{
		// vert.Col.a = vert.NormalizedCoords.y;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_28 = V_2;
		NullCheck(L_28);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_29 = (&L_28->___Col_10);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_30 = V_2;
		NullCheck(L_30);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = (&L_30->___NormalizedCoords_14);
		float L_32 = L_31->___y_1;
		L_29->___a_3 = L_32;
		// this[x, y] = vert;
		int32_t L_33 = V_1;
		int32_t L_34 = V_0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_35 = V_2;
		VirtualActionInvoker3< int32_t, int32_t, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* >::Invoke(5 /* System.Void ExtendedPrimitives_11.Internal.Element::set_Item(System.Int32,System.Int32,ExtendedPrimitives_11.Internal.Vertex) */, __this, L_33, L_34, L_35);
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00f2:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_37 = V_1;
		int32_t L_38 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0094;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_39 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00ff:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_40 = V_0;
		int32_t L_41 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0090;
		}
	}
	{
		// base.CreateLayoutArrays();
		Element_CreateLayoutArrays_mD9D4604B5653AD456A66C6D4E29D33122527E6BD(__this, NULL);
		// if (Displayed) {
		bool L_42 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_42)
		{
			goto IL_022e;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		V_3 = 0;
		goto IL_0164;
	}

IL_011d:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		V_4 = 0;
		goto IL_0156;
	}

IL_0122:
	{
		// ep.MEdges.Add(new MeshEdge(this[x, y], this[x + 1, y]));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_43 = ___ep1;
		NullCheck(L_43);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_44 = L_43->___MEdges_16;
		int32_t L_45 = V_4;
		int32_t L_46 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_47;
		L_47 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_45, L_46);
		int32_t L_48;
		L_48 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_47, NULL);
		int32_t L_49 = V_4;
		int32_t L_50 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_51;
		L_51 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_49, 1)), L_50);
		int32_t L_52;
		L_52 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_51, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_53;
		memset((&L_53), 0, sizeof(L_53));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_53), L_48, L_52, /*hidden argument*/NULL);
		NullCheck(L_44);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_44, L_53, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_54 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0156:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_55 = V_4;
		int32_t L_56 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_0122;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_57 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0164:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_58 = V_3;
		int32_t L_59 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_011d;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		V_5 = 0;
		goto IL_01bd;
	}

IL_0172:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		V_6 = 0;
		goto IL_01ad;
	}

IL_0177:
	{
		// ep.MEdges.Add(new MeshEdge(this[x, y], this[x, y + 1]));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_60 = ___ep1;
		NullCheck(L_60);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_61 = L_60->___MEdges_16;
		int32_t L_62 = V_5;
		int32_t L_63 = V_6;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_64;
		L_64 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_62, L_63);
		int32_t L_65;
		L_65 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_64, NULL);
		int32_t L_66 = V_5;
		int32_t L_67 = V_6;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_68;
		L_68 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_66, ((int32_t)il2cpp_codegen_add(L_67, 1)));
		int32_t L_69;
		L_69 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_68, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_70;
		memset((&L_70), 0, sizeof(L_70));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_70), L_65, L_69, /*hidden argument*/NULL);
		NullCheck(L_61);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_61, L_70, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_71 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_01ad:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_72 = V_6;
		int32_t L_73 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_0177;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_74 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_74, 1));
	}

IL_01bd:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_75 = V_5;
		int32_t L_76 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_0172;
		}
	}
	{
		// for (int y = 0; y < SegmentsY; y++) {
		V_7 = 0;
		goto IL_0224;
	}

IL_01cc:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		V_8 = 0;
		goto IL_0214;
	}

IL_01d1:
	{
		// BuildQuad(flipNormals, ep.Faces, this[x, y], this[x, y + 1], this[x + 1, y + 1], this[x + 1, y]);
		bool L_77 = ___flipNormals3;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_78 = ___ep1;
		NullCheck(L_78);
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_79 = L_78->___Faces_17;
		int32_t L_80 = V_8;
		int32_t L_81 = V_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_82;
		L_82 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_80, L_81);
		int32_t L_83 = V_8;
		int32_t L_84 = V_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_85;
		L_85 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_83, ((int32_t)il2cpp_codegen_add(L_84, 1)));
		int32_t L_86 = V_8;
		int32_t L_87 = V_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_88;
		L_88 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_86, 1)), ((int32_t)il2cpp_codegen_add(L_87, 1)));
		int32_t L_89 = V_8;
		int32_t L_90 = V_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_91;
		L_91 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_89, 1)), L_90);
		Element_BuildQuad_mA3F4F5EDDC213CC056BEE9CF209CC1A27637DC70(L_77, L_79, L_82, L_85, L_88, L_91, NULL);
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_92 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0214:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_93 = V_8;
		int32_t L_94 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01d1;
		}
	}
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_95 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_0224:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_96 = V_7;
		int32_t L_97 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_01cc;
		}
	}

IL_022e:
	{
		// for (int y = 0; y<LengthY; y++) {
		V_9 = 0;
		goto IL_0288;
	}

IL_0233:
	{
		// Vertex v = this[SegmentsX, y];
		int32_t L_98 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_99 = V_9;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_100;
		L_100 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_98, L_99);
		V_10 = L_100;
		// float a = r90 * v.NormalizedCoords.y;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_101 = V_10;
		NullCheck(L_101);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_102 = (&L_101->___NormalizedCoords_14);
		float L_103 = L_102->___y_1;
		V_11 = ((float)il2cpp_codegen_multiply((1.57079625f), L_103));
		// v.RefNormal = new Vector3(   0 , Mathf.Sin(a), -Mathf.Cos(a) ) * NormalSign;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_104 = V_10;
		float L_105 = V_11;
		float L_106;
		L_106 = sinf(L_105);
		float L_107 = V_11;
		float L_108;
		L_108 = cosf(L_107);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_109), (0.0f), L_106, ((-L_108)), /*hidden argument*/NULL);
		float L_110 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___NormalSign_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_109, L_110, NULL);
		NullCheck(L_104);
		L_104->___RefNormal_4 = L_111;
		// for (int y = 0; y<LengthY; y++) {
		int32_t L_112 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_112, 1));
	}

IL_0288:
	{
		// for (int y = 0; y<LengthY; y++) {
		int32_t L_113 = V_9;
		int32_t L_114 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_113) < ((int32_t)L_114)))
		{
			goto IL_0233;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.PieCenter::SetPositionAndSize(System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieCenter_SetPositionAndSize_mBE1049C716CFF5DD92042C21797CFDA0BE215972 (PieCenter_t538558E0F3A586314A724B4F6B540201E0322606* __this, float ___angle0, float ___sfillet1, float ___yPos2, bool ___sharpCenter3, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_5 = NULL;
	float V_6 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_9 = NULL;
	int32_t V_10 = 0;
	float V_11 = 0.0f;
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_14 = NULL;
	float V_15 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_16;
	memset((&V_16), 0, sizeof(V_16));
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	float V_19 = 0.0f;
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D V_20;
	memset((&V_20), 0, sizeof(V_20));
	int32_t V_21 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_22 = NULL;
	int32_t V_23 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_24 = NULL;
	{
		// cachedAngle = (angle - 180) * Mathf.Deg2Rad;
		float L_0 = ___angle0;
		__this->___cachedAngle_23 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_0, (180.0f))), (0.0174532924f)));
		// if (angle >= 180) {
		float L_1 = ___angle0;
		if ((!(((float)L_1) >= ((float)(180.0f)))))
		{
			goto IL_011c;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		V_0 = 0;
		goto IL_006f;
	}

IL_0022:
	{
		// Vertex rv = this[SegmentsX, y];
		int32_t L_2 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_3 = V_0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_4;
		L_4 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_2, L_3);
		// rv.RefPos = rv.RefNormal * sfillet * NormalSign;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_5 = L_4;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_6 = L_5;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___RefNormal_4;
		float L_8 = ___sfillet1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		float L_10 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___NormalSign_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		NullCheck(L_6);
		L_6->___RefPos_6 = L_11;
		// rv.RefPos.y += yPos;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_12 = L_5;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&L_12->___RefPos_6);
		float* L_14 = (&L_13->___y_3);
		float* L_15 = L_14;
		float L_16 = *((float*)L_15);
		float L_17 = ___yPos2;
		*((float*)L_15) = (float)((float)il2cpp_codegen_add(L_16, L_17));
		// rv.RefPos.z += sfillet;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = (&L_12->___RefPos_6);
		float* L_19 = (&L_18->___z_4);
		float* L_20 = L_19;
		float L_21 = *((float*)L_20);
		float L_22 = ___sfillet1;
		*((float*)L_20) = (float)((float)il2cpp_codegen_add(L_21, L_22));
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_23 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_006f:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_24 = V_0;
		int32_t L_25 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_0022;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		V_1 = 0;
		goto IL_0100;
	}

IL_007f:
	{
		// float a = cachedAngle * (1f - this[x, 0].NormalizedCoords.x);
		float L_26 = __this->___cachedAngle_23;
		int32_t L_27 = V_1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_28;
		L_28 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_27, 0);
		NullCheck(L_28);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_29 = (&L_28->___NormalizedCoords_14);
		float L_30 = L_29->___x_0;
		V_2 = ((float)il2cpp_codegen_multiply(L_26, ((float)il2cpp_codegen_subtract((1.0f), L_30))));
		// Matrix2d tm = new Matrix2d(a);
		float L_31 = V_2;
		Matrix2d__ctor_m9E71271929F7DF381898399D3ED5F523542C00FC((&V_3), L_31, NULL);
		// for (int y = 0; y < LengthY; y++) {
		V_4 = 0;
		goto IL_00f2;
	}

IL_00ac:
	{
		// Vertex rv = this[SegmentsX, y];
		int32_t L_32 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_33 = V_4;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_34;
		L_34 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_32, L_33);
		V_5 = L_34;
		// Vertex v = this[x, y];
		int32_t L_35 = V_1;
		int32_t L_36 = V_4;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_37;
		L_37 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_35, L_36);
		// v.Pos =  tm.MultiplyVectorY(rv.RefPos);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_38 = L_37;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_39 = V_5;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = L_39->___RefPos_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4((&V_3), L_40, NULL);
		NullCheck(L_38);
		L_38->___Pos_7 = L_41;
		// v.Normal =  tm.MultiplyVectorY(rv.RefNormal);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_42 = V_5;
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = L_42->___RefNormal_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4((&V_3), L_43, NULL);
		NullCheck(L_38);
		L_38->___Normal_5 = L_44;
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_45 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00f2:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_46 = V_4;
		int32_t L_47 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_00ac;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_48 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0100:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_49 = V_1;
		int32_t L_50 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_007f;
		}
	}
	{
		// cachedAngle = 0;
		__this->___cachedAngle_23 = (0.0f);
		goto IL_0377;
	}

IL_011c:
	{
		// if (sharpCenter) {
		bool L_51 = ___sharpCenter3;
		if (!L_51)
		{
			goto IL_0267;
		}
	}
	{
		// float t = Mathf.Tan(angle * 0.0087266f);
		float L_52 = ___angle0;
		float L_53;
		L_53 = tanf(((float)il2cpp_codegen_multiply(L_52, (0.00872659963f))));
		V_6 = L_53;
		// cachedAngle = (angle - 180) * Mathf.Deg2Rad;
		float L_54 = ___angle0;
		__this->___cachedAngle_23 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_54, (180.0f))), (0.0174532924f)));
		// for (int y = 0; y < LengthY; y++) {
		V_8 = 0;
		goto IL_01aa;
	}

IL_0149:
	{
		// Vertex rv = this[SegmentsX, y];
		int32_t L_55 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_56 = V_8;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_57;
		L_57 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_55, L_56);
		V_9 = L_57;
		// rv.RefPos = rv.RefNormal * sfillet * NormalSign;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_58 = V_9;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_59 = V_9;
		NullCheck(L_59);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = L_59->___RefNormal_4;
		float L_61 = ___sfillet1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_60, L_61, NULL);
		float L_63 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___NormalSign_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_62, L_63, NULL);
		NullCheck(L_58);
		L_58->___RefPos_6 = L_64;
		// rv.RefPos.z += sfillet;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_65 = V_9;
		NullCheck(L_65);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_66 = (&L_65->___RefPos_6);
		float* L_67 = (&L_66->___z_4);
		float* L_68 = L_67;
		float L_69 = *((float*)L_68);
		float L_70 = ___sfillet1;
		*((float*)L_68) = (float)((float)il2cpp_codegen_add(L_69, L_70));
		// rv.RefPos.x = rv.RefPos.z/t;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_71 = V_9;
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_72 = (&L_71->___RefPos_6);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_73 = V_9;
		NullCheck(L_73);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_74 = (&L_73->___RefPos_6);
		float L_75 = L_74->___z_4;
		float L_76 = V_6;
		L_72->___x_2 = ((float)(L_75/L_76));
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_77 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_01aa:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_78 = V_8;
		int32_t L_79 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_0149;
		}
	}
	{
		// Vector3 offset = new Vector3(0, yPos, 0);
		float L_80 = ___yPos2;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_7), (0.0f), L_80, (0.0f), NULL);
		// for (int x = 0; x < LengthX; x++) {
		V_10 = 0;
		goto IL_0255;
	}

IL_01ce:
	{
		// float a = cachedAngle * (1f - this[x, 0].NormalizedCoords.x);
		float L_81 = __this->___cachedAngle_23;
		int32_t L_82 = V_10;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_83;
		L_83 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_82, 0);
		NullCheck(L_83);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_84 = (&L_83->___NormalizedCoords_14);
		float L_85 = L_84->___x_0;
		V_11 = ((float)il2cpp_codegen_multiply(L_81, ((float)il2cpp_codegen_subtract((1.0f), L_85))));
		// Matrix2d tm = new Matrix2d(a);
		float L_86 = V_11;
		Matrix2d__ctor_m9E71271929F7DF381898399D3ED5F523542C00FC((&V_12), L_86, NULL);
		// for (int y = 0; y < LengthY; y++) {
		V_13 = 0;
		goto IL_0245;
	}

IL_01fe:
	{
		// Vertex rv = this[SegmentsX, y];
		int32_t L_87 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_88 = V_13;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_89;
		L_89 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_87, L_88);
		V_14 = L_89;
		// Vertex v = this[x, y];
		int32_t L_90 = V_10;
		int32_t L_91 = V_13;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_92;
		L_92 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_90, L_91);
		// v.Pos =  rv.RefPos + offset;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_93 = L_92;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_94 = V_14;
		NullCheck(L_94);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = L_94->___RefPos_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_95, L_96, NULL);
		NullCheck(L_93);
		L_93->___Pos_7 = L_97;
		// v.Normal =  tm.MultiplyVectorY(rv.RefNormal);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_98 = V_14;
		NullCheck(L_98);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = L_98->___RefNormal_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4((&V_12), L_99, NULL);
		NullCheck(L_93);
		L_93->___Normal_5 = L_100;
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_101 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_0245:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_102 = V_13;
		int32_t L_103 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_01fe;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_104 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_104, 1));
	}

IL_0255:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_105 = V_10;
		int32_t L_106 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_105) < ((int32_t)L_106)))
		{
			goto IL_01ce;
		}
	}
	{
		goto IL_0377;
	}

IL_0267:
	{
		// float filletCx = sfillet/  Mathf.Tan( angle * 0.0087266f ) ;
		float L_107 = ___sfillet1;
		float L_108 = ___angle0;
		float L_109;
		L_109 = tanf(((float)il2cpp_codegen_multiply(L_108, (0.00872659963f))));
		V_15 = ((float)(L_107/L_109));
		// cachedAngle = (angle - 180) * Mathf.Deg2Rad;
		float L_110 = ___angle0;
		__this->___cachedAngle_23 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_110, (180.0f))), (0.0174532924f)));
		// for (int y = 0; y < LengthY; y++) {
		V_17 = 0;
		goto IL_02bf;
	}

IL_028f:
	{
		// Vertex rv = this[SegmentsX, y];
		int32_t L_111 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_112 = V_17;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_113;
		L_113 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_111, L_112);
		// rv.RefPos = rv.RefNormal * sfillet * NormalSign;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_114 = L_113;
		NullCheck(L_114);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115 = L_114->___RefNormal_4;
		float L_116 = ___sfillet1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_115, L_116, NULL);
		float L_118 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___NormalSign_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_117, L_118, NULL);
		NullCheck(L_114);
		L_114->___RefPos_6 = L_119;
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_120 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_120, 1));
	}

IL_02bf:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_121 = V_17;
		int32_t L_122 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_121) < ((int32_t)L_122)))
		{
			goto IL_028f;
		}
	}
	{
		// Vector3 offset = new Vector3(filletCx, yPos, sfillet);
		float L_123 = V_15;
		float L_124 = ___yPos2;
		float L_125 = ___sfillet1;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_16), L_123, L_124, L_125, NULL);
		// for (int x = 0; x < LengthX; x++) {
		V_18 = 0;
		goto IL_036a;
	}

IL_02dc:
	{
		// float a = cachedAngle * (1f - this[x, 0].NormalizedCoords.x);
		float L_126 = __this->___cachedAngle_23;
		int32_t L_127 = V_18;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_128;
		L_128 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_127, 0);
		NullCheck(L_128);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_129 = (&L_128->___NormalizedCoords_14);
		float L_130 = L_129->___x_0;
		V_19 = ((float)il2cpp_codegen_multiply(L_126, ((float)il2cpp_codegen_subtract((1.0f), L_130))));
		// Matrix2d tm = new Matrix2d(a);
		float L_131 = V_19;
		Matrix2d__ctor_m9E71271929F7DF381898399D3ED5F523542C00FC((&V_20), L_131, NULL);
		// for (int y = 0; y < LengthY; y++) {
		V_21 = 0;
		goto IL_035a;
	}

IL_030c:
	{
		// Vertex rv = this[SegmentsX, y];
		int32_t L_132 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_133 = V_21;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_134;
		L_134 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_132, L_133);
		V_22 = L_134;
		// Vertex v = this[x, y];
		int32_t L_135 = V_18;
		int32_t L_136 = V_21;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_137;
		L_137 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_135, L_136);
		// v.Pos =  tm.MultiplyVectorY(rv.RefPos) + offset;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_138 = L_137;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_139 = V_22;
		NullCheck(L_139);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_140 = L_139->___RefPos_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141;
		L_141 = Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4((&V_20), L_140, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142 = V_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143;
		L_143 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_141, L_142, NULL);
		NullCheck(L_138);
		L_138->___Pos_7 = L_143;
		// v.Normal =  tm.MultiplyVectorY(rv.RefNormal);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_144 = V_22;
		NullCheck(L_144);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145 = L_144->___RefNormal_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		L_146 = Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4((&V_20), L_145, NULL);
		NullCheck(L_138);
		L_138->___Normal_5 = L_146;
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_147 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_147, 1));
	}

IL_035a:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_148 = V_21;
		int32_t L_149 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_148) < ((int32_t)L_149)))
		{
			goto IL_030c;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_150 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_150, 1));
	}

IL_036a:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_151 = V_18;
		int32_t L_152 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_151) < ((int32_t)L_152)))
		{
			goto IL_02dc;
		}
	}

IL_0377:
	{
		// if (Displayed) {
		bool L_153 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_153)
		{
			goto IL_03dd;
		}
	}
	{
		// for (int i = 0; i<vertices.Length; i++) {
		V_23 = 0;
		goto IL_03d1;
	}

IL_0384:
	{
		// Vertex vert = vertices[i];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_154 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_155 = V_23;
		NullCheck(L_154);
		int32_t L_156 = L_155;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_157 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		V_24 = L_157;
		// parent.mnormals[vert] = vert.Normal;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_158 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_158);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_159 = L_158->___mnormals_19;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_160 = V_24;
		int32_t L_161;
		L_161 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_160, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_162 = V_24;
		NullCheck(L_162);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_163 = L_162->___Normal_5;
		NullCheck(L_159);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(L_161), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_163);
		// parent.mvertices[vert] = vert.Pos;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_164 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_164);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_165 = L_164->___mvertices_18;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_166 = V_24;
		int32_t L_167;
		L_167 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_166, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_168 = V_24;
		NullCheck(L_168);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_169 = L_168->___Pos_7;
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(L_167), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_169);
		// for (int i = 0; i<vertices.Length; i++) {
		int32_t L_170 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_170, 1));
	}

IL_03d1:
	{
		// for (int i = 0; i<vertices.Length; i++) {
		int32_t L_171 = V_23;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_172 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_172);
		if ((((int32_t)L_171) < ((int32_t)((int32_t)(((RuntimeArray*)L_172)->max_length)))))
		{
			goto IL_0384;
		}
	}

IL_03dd:
	{
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.PieCenter::SetUVPositionAndSizeUnfoldB(UnityEngine.Vector2[],System.Single,System.Single,UnityEngine.Vector2,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieCenter_SetUVPositionAndSizeUnfoldB_m30B258CEB67A2E0FA373177BA4466925DEDB93ED (PieCenter_t538558E0F3A586314A724B4F6B540201E0322606* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs0, float ___sliceFilletRadius1, float ___pieAngle2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset3, bool ___sharpCenter4, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_8 = NULL;
	int32_t V_9 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_10 = NULL;
	float G_B3_0 = 0.0f;
	float G_B7_0 = 0.0f;
	{
		// float width = sharpCenter? 0 : (pieAngle - 180) * Mathf.Deg2Rad * sliceFilletRadius ;
		bool L_0 = ___sharpCenter4;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		float L_1 = ___pieAngle2;
		float L_2 = ___sliceFilletRadius1;
		G_B3_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, (180.0f))), (0.0174532924f))), L_2));
		goto IL_001a;
	}

IL_0015:
	{
		G_B3_0 = (0.0f);
	}

IL_001a:
	{
		V_0 = G_B3_0;
		// float height = sliceFilletRadius * 1.570796f;
		float L_3 = ___sliceFilletRadius1;
		V_1 = ((float)il2cpp_codegen_multiply(L_3, (1.57079601f)));
		// for (int y = 0; y < LengthY; y++) {
		V_2 = 0;
		goto IL_00d0;
	}

IL_002a:
	{
		// float yPos = height * this[0, y].NormalizedCoords.y;
		float L_4 = V_1;
		int32_t L_5 = V_2;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_6;
		L_6 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_5);
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&L_6->___NormalizedCoords_14);
		float L_8 = L_7->___y_1;
		V_3 = ((float)il2cpp_codegen_multiply(L_4, L_8));
		// float yVal = pieAngle > 180 ? this[0, y].NormalizedCoords.y : -1f + this[0, y].NormalizedCoords.y;
		float L_9 = ___pieAngle2;
		if ((((float)L_9) > ((float)(180.0f))))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_10 = V_2;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_11;
		L_11 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_10);
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&L_11->___NormalizedCoords_14);
		float L_13 = L_12->___y_1;
		G_B7_0 = ((float)il2cpp_codegen_add((-1.0f), L_13));
		goto IL_0073;
	}

IL_0061:
	{
		int32_t L_14 = V_2;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_15;
		L_15 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_14);
		NullCheck(L_15);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = (&L_15->___NormalizedCoords_14);
		float L_17 = L_16->___y_1;
		G_B7_0 = L_17;
	}

IL_0073:
	{
		V_4 = G_B7_0;
		// float _width =   width * yVal;
		float L_18 = V_0;
		float L_19 = V_4;
		V_5 = ((float)il2cpp_codegen_multiply(L_18, L_19));
		// float _fromX = -_width / 2f;
		float L_20 = V_5;
		V_6 = ((float)(((-L_20))/(2.0f)));
		// for (int x = 0; x < LengthX; x++) {
		V_7 = 0;
		goto IL_00c2;
	}

IL_008b:
	{
		// Vertex vert = this[x, y];
		int32_t L_21 = V_7;
		int32_t L_22 = V_2;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_23;
		L_23 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_21, L_22);
		V_8 = L_23;
		// vert.UV = new Vector2(_fromX + _width * vert.NormalizedCoords.x , yPos) + offset;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_24 = V_8;
		float L_25 = V_6;
		float L_26 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_27 = V_8;
		NullCheck(L_27);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = (&L_27->___NormalizedCoords_14);
		float L_29 = L_28->___x_0;
		float L_30 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), ((float)il2cpp_codegen_add(L_25, ((float)il2cpp_codegen_multiply(L_26, L_29)))), L_30, /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = ___offset3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_31, L_32, NULL);
		NullCheck(L_24);
		L_24->___UV_9 = L_33;
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_34 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00c2:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_35 = V_7;
		int32_t L_36 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_008b;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00d0:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_38 = V_2;
		int32_t L_39 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_002a;
		}
	}
	{
		// if (Displayed) {
		bool L_40 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_40)
		{
			goto IL_011a;
		}
	}
	{
		// for (int i = 0; i < vertices.Length; i++) {
		V_9 = 0;
		goto IL_010e;
	}

IL_00e9:
	{
		// Vertex vert = vertices[i];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_41 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_42 = V_9;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_10 = L_44;
		// uvs[vert] = vert.UV;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_45 = ___uvs0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_46 = V_10;
		int32_t L_47;
		L_47 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_46, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_48 = V_10;
		NullCheck(L_48);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = L_48->___UV_9;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_49);
		// for (int i = 0; i < vertices.Length; i++) {
		int32_t L_50 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_010e:
	{
		// for (int i = 0; i < vertices.Length; i++) {
		int32_t L_51 = V_9;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_52 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length)))))
		{
			goto IL_00e9;
		}
	}

IL_011a:
	{
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.PieCenter::SetUVPositionAndSize(UnityEngine.Vector2[],System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieCenter_SetUVPositionAndSize_m91B8475260413B69C9CE5D839C5ABD62296A0E07 (PieCenter_t538558E0F3A586314A724B4F6B540201E0322606* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs0, float ___sliceFilletRadius1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset2, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_1 = NULL;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_2 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_6 = NULL;
	int32_t V_7 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_8 = NULL;
	{
		// for (int x = 0; x < LengthX; x++) {
		V_0 = 0;
		goto IL_009d;
	}

IL_0007:
	{
		// Vertex VertFrom = this[x, 0];
		int32_t L_0 = V_0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_1;
		L_1 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_0, 0);
		V_1 = L_1;
		// Vertex VertTo = this[x, SegmentsY];
		int32_t L_2 = V_0;
		int32_t L_3 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_4;
		L_4 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_2, L_3);
		V_2 = L_4;
		// Vector2 uvFrom = new Vector2(VertFrom.Pos.x, VertFrom.Pos.z);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_5 = V_1;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&L_5->___Pos_7);
		float L_7 = L_6->___x_2;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_8 = V_1;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&L_8->___Pos_7);
		float L_10 = L_9->___z_4;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), L_7, L_10, NULL);
		// Vector2 uvTo = new Vector2(VertTo.Pos.x, VertTo.Pos.z);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_11 = V_2;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = (&L_11->___Pos_7);
		float L_13 = L_12->___x_2;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_14 = V_2;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_15 = (&L_14->___Pos_7);
		float L_16 = L_15->___z_4;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_4), L_13, L_16, NULL);
		// for (int y = 0; y < LengthY; y++) {
		V_5 = 0;
		goto IL_008f;
	}

IL_005d:
	{
		// Vertex vert = this[x, y];
		int32_t L_17 = V_0;
		int32_t L_18 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_19;
		L_19 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_17, L_18);
		V_6 = L_19;
		// vert.UV =  Vector2.LerpUnclamped( uvFrom, uvTo, vert.NormalizedCoords.y) + offset;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_20 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_4;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_23 = V_6;
		NullCheck(L_23);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_24 = (&L_23->___NormalizedCoords_14);
		float L_25 = L_24->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_LerpUnclamped_mB0B50875D4509E21FF43F4D87610333D55E6A44F_inline(L_21, L_22, L_25, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = ___offset2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_26, L_27, NULL);
		NullCheck(L_20);
		L_20->___UV_9 = L_28;
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_29 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_008f:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_30 = V_5;
		int32_t L_31 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_005d;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_32 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_32, 1));
	}

IL_009d:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_33 = V_0;
		int32_t L_34 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0007;
		}
	}
	{
		// if (Displayed) {
		bool L_35 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_35)
		{
			goto IL_00e7;
		}
	}
	{
		// for (int i = 0; i < vertices.Length; i++) {
		V_7 = 0;
		goto IL_00db;
	}

IL_00b6:
	{
		// Vertex vert = vertices[i];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_36 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_37 = V_7;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		V_8 = L_39;
		// uvs[vert] = vert.UV;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_40 = ___uvs0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_41 = V_8;
		int32_t L_42;
		L_42 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_41, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_43 = V_8;
		NullCheck(L_43);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44 = L_43->___UV_9;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(L_42), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_44);
		// for (int i = 0; i < vertices.Length; i++) {
		int32_t L_45 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00db:
	{
		// for (int i = 0; i < vertices.Length; i++) {
		int32_t L_46 = V_7;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_47 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)((int32_t)(((RuntimeArray*)L_47)->max_length)))))
		{
			goto IL_00b6;
		}
	}

IL_00e7:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.PieCorner::.ctor(System.Boolean,ExtendedPrimitives_11.ExtendedPrimitive,System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Element>,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieCorner__ctor_m00EC8B778605C4DA13E762E01812383C63643467 (PieCorner_t834B3B56F1D5AF6C1B6864B63801EFDA6B6C8BC7* __this, bool ___displayed0, ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* ___ep1, List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* ___eList2, bool ___flipNormals3, int32_t ___filletSegments4, int32_t ___sliceFilletSegments5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t G_B3_0 = 0;
	PieCorner_t834B3B56F1D5AF6C1B6864B63801EFDA6B6C8BC7* G_B5_0 = NULL;
	PieCorner_t834B3B56F1D5AF6C1B6864B63801EFDA6B6C8BC7* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	PieCorner_t834B3B56F1D5AF6C1B6864B63801EFDA6B6C8BC7* G_B6_1 = NULL;
	{
		// public PieCorner(bool displayed, ExtendedPrimitive ep, List<Element> eList, bool flipNormals,  int filletSegments, int sliceFilletSegments) {
		Element__ctor_mDB22061F7FB986E21DF9889FE888A2BA49205420(__this, NULL);
		// Displayed = displayed;
		bool L_0 = ___displayed0;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0 = L_0;
		// parent = ep;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_1 = ___ep1;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5), (void*)L_1);
		// eList.Add(this);
		List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* L_2 = ___eList2;
		NullCheck(L_2);
		List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_inline(L_2, __this, List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		// flipNormals = ep.FlipNormals ? !flipNormals : flipNormals;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_3 = ___ep1;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExtendedPrimitives_11.ExtendedPrimitive::get_FlipNormals() */, L_3);
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		bool L_5 = ___flipNormals3;
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002c;
	}

IL_0027:
	{
		bool L_6 = ___flipNormals3;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_002c:
	{
		___flipNormals3 = (bool)G_B3_0;
		// NormalSign = ep.FlipNormals ? -1f : 1f;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_7 = ___ep1;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExtendedPrimitives_11.ExtendedPrimitive::get_FlipNormals() */, L_7);
		G_B4_0 = __this;
		if (L_8)
		{
			G_B5_0 = __this;
			goto IL_003e;
		}
	}
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B4_0;
		goto IL_0043;
	}

IL_003e:
	{
		G_B6_0 = (-1.0f);
		G_B6_1 = G_B5_0;
	}

IL_0043:
	{
		NullCheck(G_B6_1);
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)G_B6_1)->___NormalSign_21 = G_B6_0;
		// SegmentsX = filletSegments;
		int32_t L_9 = ___filletSegments4;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6 = L_9;
		// SegmentsY = sliceFilletSegments;
		int32_t L_10 = ___sliceFilletSegments5;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7 = L_10;
		// LengthX = SegmentsX + 1;
		int32_t L_11 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// LengthY = SegmentsY + 1;
		int32_t L_12 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// vertices = new Vertex[LengthX * LengthY];
		int32_t L_13 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		int32_t L_14 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_15 = (VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)SZArrayNew(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_13, L_14)));
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10), (void*)L_15);
		// for (int y = 0; y < LengthY; y++) {
		V_0 = 0;
		goto IL_0114;
	}

IL_0093:
	{
		// for (int x = 0; x < LengthX; x++) {
		V_1 = 0;
		goto IL_0107;
	}

IL_0097:
	{
		// Vertex vert = new Vertex(ref ep.vertsCounter, new Vector2( x/(float)SegmentsX, y/(float)SegmentsY  ));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_16 = ___ep1;
		NullCheck(L_16);
		int32_t* L_17 = (&L_16->___vertsCounter_26);
		int32_t L_18 = V_1;
		int32_t L_19 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_20 = V_0;
		int32_t L_21 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), ((float)(((float)L_18)/((float)L_19))), ((float)(((float)L_20)/((float)L_21))), /*hidden argument*/NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_23 = (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)il2cpp_codegen_object_new(Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Vertex__ctor_mA971C36E661FEC1EB7F3B31BA80BB9F2918643D3(L_23, L_17, L_22, NULL);
		V_2 = L_23;
		// if (!Displayed) {
		bool L_24 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (L_24)
		{
			goto IL_00d2;
		}
	}
	{
		// ep.vertsCounter--;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_25 = ___ep1;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_26 = L_25;
		NullCheck(L_26);
		int32_t L_27 = L_26->___vertsCounter_26;
		NullCheck(L_26);
		L_26->___vertsCounter_26 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
	}

IL_00d2:
	{
		// vert.Col.a =   (1f-vert.NormalizedCoords.x) * vert.NormalizedCoords.y ;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_28 = V_2;
		NullCheck(L_28);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_29 = (&L_28->___Col_10);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_30 = V_2;
		NullCheck(L_30);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = (&L_30->___NormalizedCoords_14);
		float L_32 = L_31->___x_0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_33 = V_2;
		NullCheck(L_33);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_34 = (&L_33->___NormalizedCoords_14);
		float L_35 = L_34->___y_1;
		L_29->___a_3 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_32)), L_35));
		// this[x, y] = vert;
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_38 = V_2;
		VirtualActionInvoker3< int32_t, int32_t, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* >::Invoke(5 /* System.Void ExtendedPrimitives_11.Internal.Element::set_Item(System.Int32,System.Int32,ExtendedPrimitives_11.Internal.Vertex) */, __this, L_36, L_37, L_38);
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_39 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0107:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_40 = V_1;
		int32_t L_41 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0097;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_42 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0114:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_43 = V_0;
		int32_t L_44 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_0093;
		}
	}
	{
		// CreateLayoutArrays();
		Element_CreateLayoutArrays_mD9D4604B5653AD456A66C6D4E29D33122527E6BD(__this, NULL);
		// if (Displayed) {
		bool L_45 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_45)
		{
			goto IL_0244;
		}
	}
	{
		// for (int y = 0; y < SegmentsY; y++) {
		V_3 = 0;
		goto IL_0187;
	}

IL_0135:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		V_4 = 0;
		goto IL_0179;
	}

IL_013a:
	{
		// BuildQuad(flipNormals, ep.Faces, this[x, y], this[x, y + 1], this[x + 1, y + 1], this[x + 1, y]);
		bool L_46 = ___flipNormals3;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_47 = ___ep1;
		NullCheck(L_47);
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_48 = L_47->___Faces_17;
		int32_t L_49 = V_4;
		int32_t L_50 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_51;
		L_51 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_49, L_50);
		int32_t L_52 = V_4;
		int32_t L_53 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_54;
		L_54 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_52, ((int32_t)il2cpp_codegen_add(L_53, 1)));
		int32_t L_55 = V_4;
		int32_t L_56 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_57;
		L_57 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_55, 1)), ((int32_t)il2cpp_codegen_add(L_56, 1)));
		int32_t L_58 = V_4;
		int32_t L_59 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_60;
		L_60 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_58, 1)), L_59);
		Element_BuildQuad_mA3F4F5EDDC213CC056BEE9CF209CC1A27637DC70(L_46, L_48, L_51, L_54, L_57, L_60, NULL);
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_61 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_0179:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_62 = V_4;
		int32_t L_63 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		if ((((int32_t)L_62) < ((int32_t)L_63)))
		{
			goto IL_013a;
		}
	}
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_64 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_0187:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_65 = V_3;
		int32_t L_66 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		if ((((int32_t)L_65) < ((int32_t)L_66)))
		{
			goto IL_0135;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		V_5 = 0;
		goto IL_01e0;
	}

IL_0195:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		V_6 = 0;
		goto IL_01d0;
	}

IL_019a:
	{
		// ep.MEdges.Add(new MeshEdge(this[x, y], this[x + 1, y]));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_67 = ___ep1;
		NullCheck(L_67);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_68 = L_67->___MEdges_16;
		int32_t L_69 = V_6;
		int32_t L_70 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_71;
		L_71 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_69, L_70);
		int32_t L_72;
		L_72 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_71, NULL);
		int32_t L_73 = V_6;
		int32_t L_74 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_75;
		L_75 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_73, 1)), L_74);
		int32_t L_76;
		L_76 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_75, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_77;
		memset((&L_77), 0, sizeof(L_77));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_77), L_72, L_76, /*hidden argument*/NULL);
		NullCheck(L_68);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_68, L_77, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_78 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d0:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_79 = V_6;
		int32_t L_80 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_019a;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_81 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_01e0:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_82 = V_5;
		int32_t L_83 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_82) < ((int32_t)L_83)))
		{
			goto IL_0195;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		V_7 = 0;
		goto IL_023a;
	}

IL_01ef:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		V_8 = 0;
		goto IL_022a;
	}

IL_01f4:
	{
		// ep.MEdges.Add(new MeshEdge(this[x, y], this[x, y + 1]));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_84 = ___ep1;
		NullCheck(L_84);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_85 = L_84->___MEdges_16;
		int32_t L_86 = V_7;
		int32_t L_87 = V_8;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_88;
		L_88 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_86, L_87);
		int32_t L_89;
		L_89 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_88, NULL);
		int32_t L_90 = V_7;
		int32_t L_91 = V_8;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_92;
		L_92 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_90, ((int32_t)il2cpp_codegen_add(L_91, 1)));
		int32_t L_93;
		L_93 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_92, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_94;
		memset((&L_94), 0, sizeof(L_94));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_94), L_89, L_93, /*hidden argument*/NULL);
		NullCheck(L_85);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_85, L_94, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_95 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_022a:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_96 = V_8;
		int32_t L_97 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_01f4;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_98 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_023a:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_99 = V_7;
		int32_t L_100 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_99) < ((int32_t)L_100)))
		{
			goto IL_01ef;
		}
	}

IL_0244:
	{
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.PieCorner::SetPositionAndSize(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieCorner_SetPositionAndSize_mFA3C624ED47CCAFE2D15C4E13E88C3960113DD86 (PieCorner_t834B3B56F1D5AF6C1B6864B63801EFDA6B6C8BC7* __this, float ___radius0, float ___fillet1, float ___sfillet2, float ___yPos3, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_8 = NULL;
	int32_t V_9 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_10 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	{
		// for (int y = 0; y < LengthY; y++) {
		V_1 = 0;
		goto IL_008f;
	}

IL_0007:
	{
		// float ya = this[0, y].NormalizedCoords.y * r90;
		int32_t L_0 = V_1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_1;
		L_1 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_0);
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&L_1->___NormalizedCoords_14);
		float L_3 = L_2->___y_1;
		// float normalZ = -Mathf.Cos(ya);
		float L_4 = ((float)il2cpp_codegen_multiply(L_3, (1.57079625f)));
		float L_5;
		L_5 = cosf(L_4);
		V_2 = ((-L_5));
		// float normalY = Mathf.Sin(ya);
		float L_6;
		L_6 = sinf(L_4);
		V_3 = L_6;
		// Vertex v = this[0, y];
		int32_t L_7 = V_1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_8;
		L_8 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_7);
		// v.RefNormal = new Vector3(0, normalY, normalZ) * NormalSign;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_9 = L_8;
		float L_10 = V_3;
		float L_11 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), (0.0f), L_10, L_11, /*hidden argument*/NULL);
		float L_13 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___NormalSign_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		NullCheck(L_9);
		L_9->___RefNormal_4 = L_14;
		// v.RefPos = new Vector3(0, normalY, normalZ) * sfillet;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_15 = L_9;
		float L_16 = V_3;
		float L_17 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (0.0f), L_16, L_17, /*hidden argument*/NULL);
		float L_19 = ___sfillet2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_18, L_19, NULL);
		NullCheck(L_15);
		L_15->___RefPos_6 = L_20;
		// v.RefPos.y += fillet - sfillet;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_21 = L_15;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = (&L_21->___RefPos_6);
		float* L_23 = (&L_22->___y_3);
		float* L_24 = L_23;
		float L_25 = *((float*)L_24);
		float L_26 = ___fillet1;
		float L_27 = ___sfillet2;
		*((float*)L_24) = (float)((float)il2cpp_codegen_add(L_25, ((float)il2cpp_codegen_subtract(L_26, L_27))));
		// v.RefPos.z += sfillet;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&L_21->___RefPos_6);
		float* L_29 = (&L_28->___z_4);
		float* L_30 = L_29;
		float L_31 = *((float*)L_30);
		float L_32 = ___sfillet2;
		*((float*)L_30) = (float)((float)il2cpp_codegen_add(L_31, L_32));
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_33 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_008f:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_34 = V_1;
		int32_t L_35 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0007;
		}
	}
	{
		// for (int x = 1; x < LengthX; x++) {
		V_4 = 1;
		goto IL_011c;
	}

IL_00a0:
	{
		// float rotAlongX = -this[x, 0].NormalizedCoords.x * r90;
		int32_t L_36 = V_4;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_37;
		L_37 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_36, 0);
		NullCheck(L_37);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_38 = (&L_37->___NormalizedCoords_14);
		float L_39 = L_38->___x_0;
		V_5 = ((float)il2cpp_codegen_multiply(((-L_39)), (1.57079625f)));
		// Matrix2d rm = new Matrix2d(rotAlongX);
		float L_40 = V_5;
		Matrix2d__ctor_m9E71271929F7DF381898399D3ED5F523542C00FC((&V_6), L_40, NULL);
		// for (int y = 0; y < LengthY; y++) {
		V_7 = 0;
		goto IL_010c;
	}

IL_00ca:
	{
		// Vertex v = this[x, y];
		int32_t L_41 = V_4;
		int32_t L_42 = V_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_43;
		L_43 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_41, L_42);
		// Vertex vx0 = this[0, y];
		int32_t L_44 = V_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_45;
		L_45 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, L_44);
		V_8 = L_45;
		// v.RefPos = rm.MultiplyVectorZ(vx0.RefPos);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_46 = L_43;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_47 = V_8;
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = L_47->___RefPos_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Matrix2d_MultiplyVectorZ_mD0F32EB5D6B7BF55D3DCD29E655401073347CAB8((&V_6), L_48, NULL);
		NullCheck(L_46);
		L_46->___RefPos_6 = L_49;
		// v.RefNormal = rm.MultiplyVectorZ(vx0.RefNormal);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_50 = V_8;
		NullCheck(L_50);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = L_50->___RefNormal_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Matrix2d_MultiplyVectorZ_mD0F32EB5D6B7BF55D3DCD29E655401073347CAB8((&V_6), L_51, NULL);
		NullCheck(L_46);
		L_46->___RefNormal_4 = L_52;
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_53 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_010c:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_54 = V_7;
		int32_t L_55 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_54) < ((int32_t)L_55)))
		{
			goto IL_00ca;
		}
	}
	{
		// for (int x = 1; x < LengthX; x++) {
		int32_t L_56 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_011c:
	{
		// for (int x = 1; x < LengthX; x++) {
		int32_t L_57 = V_4;
		int32_t L_58 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_00a0;
		}
	}
	{
		// float radOffset = Mathf.Sqrt(Mathf.Pow(radius, 2) - Mathf.Pow(sfillet, 2)) - fillet;
		float L_59 = ___radius0;
		float L_60;
		L_60 = powf(L_59, (2.0f));
		float L_61 = ___sfillet2;
		float L_62;
		L_62 = powf(L_61, (2.0f));
		float L_63;
		L_63 = sqrtf(((float)il2cpp_codegen_subtract(L_60, L_62)));
		float L_64 = ___fillet1;
		V_0 = ((float)il2cpp_codegen_subtract(L_63, L_64));
		// if (Displayed) {
		bool L_65 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_65)
		{
			goto IL_01f3;
		}
	}
	{
		// for (int i = 0; i < vertices.Length; i++) {
		V_9 = 0;
		goto IL_01e3;
	}

IL_015b:
	{
		// Vertex v = vertices[i];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_66 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_67 = V_9;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_10 = L_69;
		// v.RefPos.x += radOffset;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_70 = V_10;
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_71 = (&L_70->___RefPos_6);
		float* L_72 = (&L_71->___x_2);
		float* L_73 = L_72;
		float L_74 = *((float*)L_73);
		float L_75 = V_0;
		*((float*)L_73) = (float)((float)il2cpp_codegen_add(L_74, L_75));
		// v.RefPos.y += yPos;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_76 = V_10;
		NullCheck(L_76);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_77 = (&L_76->___RefPos_6);
		float* L_78 = (&L_77->___y_3);
		float* L_79 = L_78;
		float L_80 = *((float*)L_79);
		float L_81 = ___yPos3;
		*((float*)L_79) = (float)((float)il2cpp_codegen_add(L_80, L_81));
		// parent.mvertices[v] = v.Pos = v.RefPos;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_82 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_82);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_83 = L_82->___mvertices_18;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_84 = V_10;
		int32_t L_85;
		L_85 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_84, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_86 = V_10;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_87 = V_10;
		NullCheck(L_87);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = L_87->___RefPos_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = L_88;
		V_11 = L_89;
		NullCheck(L_86);
		L_86->___Pos_7 = L_89;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_11;
		NullCheck(L_83);
		(L_83)->SetAt(static_cast<il2cpp_array_size_t>(L_85), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_90);
		// parent.mnormals[v] = v.Normal = v.RefNormal;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_91 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_91);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_92 = L_91->___mnormals_19;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_93 = V_10;
		int32_t L_94;
		L_94 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_93, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_95 = V_10;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_96 = V_10;
		NullCheck(L_96);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = L_96->___RefNormal_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98 = L_97;
		V_11 = L_98;
		NullCheck(L_95);
		L_95->___Normal_5 = L_98;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99 = V_11;
		NullCheck(L_92);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_94), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_99);
		// for (int i = 0; i < vertices.Length; i++) {
		int32_t L_100 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_01e3:
	{
		// for (int i = 0; i < vertices.Length; i++) {
		int32_t L_101 = V_9;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_102 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_102);
		if ((((int32_t)L_101) < ((int32_t)((int32_t)(((RuntimeArray*)L_102)->max_length)))))
		{
			goto IL_015b;
		}
	}
	{
		return;
	}

IL_01f3:
	{
		// for (int i = 0; i < vertices.Length; i++) {
		V_12 = 0;
		goto IL_023f;
	}

IL_01f8:
	{
		// Vertex v = vertices[i];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_103 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_104 = V_12;
		NullCheck(L_103);
		int32_t L_105 = L_104;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_106 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		// v.RefPos.x += radOffset;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_107 = L_106;
		NullCheck(L_107);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_108 = (&L_107->___RefPos_6);
		float* L_109 = (&L_108->___x_2);
		float* L_110 = L_109;
		float L_111 = *((float*)L_110);
		float L_112 = V_0;
		*((float*)L_110) = (float)((float)il2cpp_codegen_add(L_111, L_112));
		// v.RefPos.y += yPos;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_113 = L_107;
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_114 = (&L_113->___RefPos_6);
		float* L_115 = (&L_114->___y_3);
		float* L_116 = L_115;
		float L_117 = *((float*)L_116);
		float L_118 = ___yPos3;
		*((float*)L_116) = (float)((float)il2cpp_codegen_add(L_117, L_118));
		// v.Pos = v.RefPos;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_119 = L_113;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_120 = L_119;
		NullCheck(L_120);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121 = L_120->___RefPos_6;
		NullCheck(L_120);
		L_120->___Pos_7 = L_121;
		// v.Normal = v.RefNormal;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_122 = L_119;
		NullCheck(L_122);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_123 = L_122->___RefNormal_4;
		NullCheck(L_122);
		L_122->___Normal_5 = L_123;
		// for (int i = 0; i < vertices.Length; i++) {
		int32_t L_124 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_023f:
	{
		// for (int i = 0; i < vertices.Length; i++) {
		int32_t L_125 = V_12;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_126 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_126);
		if ((((int32_t)L_125) < ((int32_t)((int32_t)(((RuntimeArray*)L_126)->max_length)))))
		{
			goto IL_01f8;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.PieCorner::SetUVPlanarXYUnfoldB(UnityEngine.Vector2[],System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieCorner_SetUVPlanarXYUnfoldB_mBB75856DF5561010F6E908EFC8E3C62D1317CC10 (PieCorner_t834B3B56F1D5AF6C1B6864B63801EFDA6B6C8BC7* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs0, float ___sliceFilletRadius1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___snapTo2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_7 = NULL;
	int32_t V_8 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_9 = NULL;
	{
		// float l = sliceFilletRadius * r90;
		float L_0 = ___sliceFilletRadius1;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, (1.57079625f)));
		// Vector2 offset = snapTo - (Vector2)this[0, 0].Pos;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___snapTo2;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_2;
		L_2 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, 0, 0);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2->___Pos_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_1, L_4, NULL);
		V_1 = L_5;
		// for (int x = 0; x<LengthX; x++) {
		V_2 = 0;
		goto IL_00b5;
	}

IL_0028:
	{
		// Vector2 va = (Vector2)this[x, 0].Pos ;
		int32_t L_6 = V_2;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_7;
		L_7 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_6, 0);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7->___Pos_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_8, NULL);
		V_3 = L_9;
		// Vector2 vb = (Vector2)this[x, SegmentsY].Pos ;
		int32_t L_10 = V_2;
		int32_t L_11 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_12;
		L_12 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_10, L_11);
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12->___Pos_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_13, NULL);
		// Vector2 dir = (vb - va).normalized;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_14, L_15, NULL);
		V_5 = L_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_5), NULL);
		V_4 = L_17;
		// va += offset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_18, L_19, NULL);
		V_3 = L_20;
		// for (int y = 0; y<LengthY; y++) {
		V_6 = 0;
		goto IL_00a7;
	}

IL_0070:
	{
		// Vertex vert = this[x, y];
		int32_t L_21 = V_2;
		int32_t L_22 = V_6;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_23;
		L_23 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_21, L_22);
		V_7 = L_23;
		// vert.UV = va + dir * l * vert.NormalizedCoords.y;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_24 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = V_4;
		float L_27 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_26, L_27, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_29 = V_7;
		NullCheck(L_29);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_30 = (&L_29->___NormalizedCoords_14);
		float L_31 = L_30->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_28, L_31, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_25, L_32, NULL);
		NullCheck(L_24);
		L_24->___UV_9 = L_33;
		// for (int y = 0; y<LengthY; y++) {
		int32_t L_34 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00a7:
	{
		// for (int y = 0; y<LengthY; y++) {
		int32_t L_35 = V_6;
		int32_t L_36 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0070;
		}
	}
	{
		// for (int x = 0; x<LengthX; x++) {
		int32_t L_37 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00b5:
	{
		// for (int x = 0; x<LengthX; x++) {
		int32_t L_38 = V_2;
		int32_t L_39 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0028;
		}
	}
	{
		// if (Displayed) {
		bool L_40 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_40)
		{
			goto IL_00ff;
		}
	}
	{
		// for (int i = 0; i < vertices.Length; i++) {
		V_8 = 0;
		goto IL_00f3;
	}

IL_00ce:
	{
		// Vertex vert = vertices[i];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_41 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_42 = V_8;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		V_9 = L_44;
		// uvs[vert] = vert.UV;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_45 = ___uvs0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_46 = V_9;
		int32_t L_47;
		L_47 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_46, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_48 = V_9;
		NullCheck(L_48);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = L_48->___UV_9;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(L_47), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_49);
		// for (int i = 0; i < vertices.Length; i++) {
		int32_t L_50 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_50, 1));
	}

IL_00f3:
	{
		// for (int i = 0; i < vertices.Length; i++) {
		int32_t L_51 = V_8;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_52 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length)))))
		{
			goto IL_00ce;
		}
	}

IL_00ff:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ExtendedPrimitives_11.Internal.PieFilletEdge::.ctor(System.Boolean,ExtendedPrimitives_11.ExtendedPrimitive,System.Collections.Generic.List`1<ExtendedPrimitives_11.Internal.Element>,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieFilletEdge__ctor_mC76A533E4755CCBCC9288FAC79CF0E9035C586BA (PieFilletEdge_tB5FFC918C40DE19AAA267E2EA77271DABDE3C6DD* __this, bool ___displayed0, ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* ___ep1, List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* ___eList2, bool ___flipNormals3, int32_t ___filletSegments4, int32_t ___radialSegments5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t G_B3_0 = 0;
	PieFilletEdge_tB5FFC918C40DE19AAA267E2EA77271DABDE3C6DD* G_B5_0 = NULL;
	PieFilletEdge_tB5FFC918C40DE19AAA267E2EA77271DABDE3C6DD* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	PieFilletEdge_tB5FFC918C40DE19AAA267E2EA77271DABDE3C6DD* G_B6_1 = NULL;
	{
		// public PieFilletEdge(bool displayed,ExtendedPrimitive ep, List<Element> eList, bool flipNormals, int filletSegments, int radialSegments) {
		Element__ctor_mDB22061F7FB986E21DF9889FE888A2BA49205420(__this, NULL);
		// Displayed = displayed;
		bool L_0 = ___displayed0;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0 = L_0;
		// parent = ep;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_1 = ___ep1;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5), (void*)L_1);
		// eList.Add(this);
		List_1_t15C3D47D8307AB321D3C5317D6E11BB5ECACB474* L_2 = ___eList2;
		NullCheck(L_2);
		List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_inline(L_2, __this, List_1_Add_mE2A40DE387DAD41F002F62DA55B370F0482741FA_RuntimeMethod_var);
		// flipNormals = ep.FlipNormals ? !flipNormals : flipNormals;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_3 = ___ep1;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExtendedPrimitives_11.ExtendedPrimitive::get_FlipNormals() */, L_3);
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		bool L_5 = ___flipNormals3;
		G_B3_0 = ((int32_t)(L_5));
		goto IL_002c;
	}

IL_0027:
	{
		bool L_6 = ___flipNormals3;
		G_B3_0 = ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_002c:
	{
		___flipNormals3 = (bool)G_B3_0;
		// NormalSign = ep.FlipNormals ? -1f : 1f;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_7 = ___ep1;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(13 /* System.Boolean ExtendedPrimitives_11.ExtendedPrimitive::get_FlipNormals() */, L_7);
		G_B4_0 = __this;
		if (L_8)
		{
			G_B5_0 = __this;
			goto IL_003e;
		}
	}
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B4_0;
		goto IL_0043;
	}

IL_003e:
	{
		G_B6_0 = (-1.0f);
		G_B6_1 = G_B5_0;
	}

IL_0043:
	{
		NullCheck(G_B6_1);
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)G_B6_1)->___NormalSign_21 = G_B6_0;
		// SegmentsX = radialSegments;
		int32_t L_9 = ___radialSegments5;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6 = L_9;
		// SegmentsY = filletSegments;
		int32_t L_10 = ___filletSegments4;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7 = L_10;
		// LengthX = SegmentsX + 1;
		int32_t L_11 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// LengthY = SegmentsY + 1;
		int32_t L_12 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		// vertices = new Vertex[LengthX * LengthY];
		int32_t L_13 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		int32_t L_14 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_15 = (VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC*)SZArrayNew(VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_13, L_14)));
		((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10), (void*)L_15);
		// for (int y = 0; y < LengthY; y++) {
		V_0 = 0;
		goto IL_00ff;
	}

IL_0090:
	{
		// for (int x = 0; x < LengthX; x++) {
		V_1 = 0;
		goto IL_00f2;
	}

IL_0094:
	{
		// Vertex vert = new Vertex(ref ep.vertsCounter, new Vector2(x / (float)SegmentsX, y / (float)SegmentsY));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_16 = ___ep1;
		NullCheck(L_16);
		int32_t* L_17 = (&L_16->___vertsCounter_26);
		int32_t L_18 = V_1;
		int32_t L_19 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		int32_t L_20 = V_0;
		int32_t L_21 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), ((float)(((float)L_18)/((float)L_19))), ((float)(((float)L_20)/((float)L_21))), /*hidden argument*/NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_23 = (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*)il2cpp_codegen_object_new(Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Vertex__ctor_mA971C36E661FEC1EB7F3B31BA80BB9F2918643D3(L_23, L_17, L_22, NULL);
		V_2 = L_23;
		// if (!Displayed) {
		bool L_24 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (L_24)
		{
			goto IL_00cf;
		}
	}
	{
		// ep.vertsCounter--;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_25 = ___ep1;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_26 = L_25;
		NullCheck(L_26);
		int32_t L_27 = L_26->___vertsCounter_26;
		NullCheck(L_26);
		L_26->___vertsCounter_26 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
	}

IL_00cf:
	{
		// vert.Col.a = vert.NormalizedCoords.y;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_28 = V_2;
		NullCheck(L_28);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_29 = (&L_28->___Col_10);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_30 = V_2;
		NullCheck(L_30);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = (&L_30->___NormalizedCoords_14);
		float L_32 = L_31->___y_1;
		L_29->___a_3 = L_32;
		// this[x, y] = vert;
		int32_t L_33 = V_1;
		int32_t L_34 = V_0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_35 = V_2;
		VirtualActionInvoker3< int32_t, int32_t, Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* >::Invoke(5 /* System.Void ExtendedPrimitives_11.Internal.Element::set_Item(System.Int32,System.Int32,ExtendedPrimitives_11.Internal.Vertex) */, __this, L_33, L_34, L_35);
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_36 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00f2:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_37 = V_1;
		int32_t L_38 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0094;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_39 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_00ff:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_40 = V_0;
		int32_t L_41 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_40) < ((int32_t)L_41)))
		{
			goto IL_0090;
		}
	}
	{
		// CreateLayoutArrays();
		Element_CreateLayoutArrays_mD9D4604B5653AD456A66C6D4E29D33122527E6BD(__this, NULL);
		// if (Displayed) {
		bool L_42 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_42)
		{
			goto IL_022c;
		}
	}
	{
		// for (int y = 0; y < SegmentsY; y++) {
		V_3 = 0;
		goto IL_016f;
	}

IL_011d:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		V_4 = 0;
		goto IL_0161;
	}

IL_0122:
	{
		// BuildQuad(flipNormals, ep.Faces, this[x, y], this[x, y + 1], this[x + 1, y + 1], this[x + 1, y]);
		bool L_43 = ___flipNormals3;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_44 = ___ep1;
		NullCheck(L_44);
		List_1_tDF1F96E1850046B44B8E10411A1FAC6DB546B7D2* L_45 = L_44->___Faces_17;
		int32_t L_46 = V_4;
		int32_t L_47 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_48;
		L_48 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_46, L_47);
		int32_t L_49 = V_4;
		int32_t L_50 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_51;
		L_51 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_49, ((int32_t)il2cpp_codegen_add(L_50, 1)));
		int32_t L_52 = V_4;
		int32_t L_53 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_54;
		L_54 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_52, 1)), ((int32_t)il2cpp_codegen_add(L_53, 1)));
		int32_t L_55 = V_4;
		int32_t L_56 = V_3;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_57;
		L_57 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_55, 1)), L_56);
		Element_BuildQuad_mA3F4F5EDDC213CC056BEE9CF209CC1A27637DC70(L_43, L_45, L_48, L_51, L_54, L_57, NULL);
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_58 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_0161:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_59 = V_4;
		int32_t L_60 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_0122;
		}
	}
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_61 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_016f:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_62 = V_3;
		int32_t L_63 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		if ((((int32_t)L_62) < ((int32_t)L_63)))
		{
			goto IL_011d;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		V_5 = 0;
		goto IL_01c8;
	}

IL_017d:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		V_6 = 0;
		goto IL_01b8;
	}

IL_0182:
	{
		// ep.MEdges.Add(new MeshEdge(this[x, y], this[x + 1, y]));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_64 = ___ep1;
		NullCheck(L_64);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_65 = L_64->___MEdges_16;
		int32_t L_66 = V_6;
		int32_t L_67 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_68;
		L_68 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_66, L_67);
		int32_t L_69;
		L_69 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_68, NULL);
		int32_t L_70 = V_6;
		int32_t L_71 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_72;
		L_72 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, ((int32_t)il2cpp_codegen_add(L_70, 1)), L_71);
		int32_t L_73;
		L_73 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_72, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_74;
		memset((&L_74), 0, sizeof(L_74));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_74), L_69, L_73, /*hidden argument*/NULL);
		NullCheck(L_65);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_65, L_74, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_75 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_75, 1));
	}

IL_01b8:
	{
		// for (int x = 0; x < SegmentsX; x++) {
		int32_t L_76 = V_6;
		int32_t L_77 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsX_6;
		if ((((int32_t)L_76) < ((int32_t)L_77)))
		{
			goto IL_0182;
		}
	}
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_78 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01c8:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_79 = V_5;
		int32_t L_80 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_79) < ((int32_t)L_80)))
		{
			goto IL_017d;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		V_7 = 0;
		goto IL_0222;
	}

IL_01d7:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		V_8 = 0;
		goto IL_0212;
	}

IL_01dc:
	{
		// ep.MEdges.Add(new MeshEdge(this[x, y], this[x, y + 1]));
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_81 = ___ep1;
		NullCheck(L_81);
		List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* L_82 = L_81->___MEdges_16;
		int32_t L_83 = V_7;
		int32_t L_84 = V_8;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_85;
		L_85 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_83, L_84);
		int32_t L_86;
		L_86 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_85, NULL);
		int32_t L_87 = V_7;
		int32_t L_88 = V_8;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_89;
		L_89 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_87, ((int32_t)il2cpp_codegen_add(L_88, 1)));
		int32_t L_90;
		L_90 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_89, NULL);
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_91;
		memset((&L_91), 0, sizeof(L_91));
		MeshEdge__ctor_m3583D7723A40AE5F2CDF794DC719B8265D5FA83A((&L_91), L_86, L_90, /*hidden argument*/NULL);
		NullCheck(L_82);
		List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_inline(L_82, L_91, List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_RuntimeMethod_var);
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_92 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0212:
	{
		// for (int y = 0; y < SegmentsY; y++) {
		int32_t L_93 = V_8;
		int32_t L_94 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01dc;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_95 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_0222:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_96 = V_7;
		int32_t L_97 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_96) < ((int32_t)L_97)))
		{
			goto IL_01d7;
		}
	}

IL_022c:
	{
		// profileAngles = new float[LengthY];
		int32_t L_98 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_99 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_98);
		__this->___profileAngles_23 = L_99;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___profileAngles_23), (void*)L_99);
		// profilePoints = new Vector3[LengthY];
		int32_t L_100 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_101 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_100);
		__this->___profilePoints_24 = L_101;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___profilePoints_24), (void*)L_101);
		// profileBeginNormals = new Vector3[LengthY];
		int32_t L_102 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_103 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_102);
		__this->___profileBeginNormals_25 = L_103;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___profileBeginNormals_25), (void*)L_103);
		// profileNormalsDelta =   new Vector3[LengthY];
		int32_t L_104 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_105 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_104);
		__this->___profileNormalsDelta_26 = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___profileNormalsDelta_26), (void*)L_105);
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.PieFilletEdge::SetPositionAndSize(System.Single,System.Single,System.Single,System.Single,ExtendedPrimitives_11.Internal.Vertex[],ExtendedPrimitives_11.Internal.Vertex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieFilletEdge_SetPositionAndSize_m78A97AD9A87E7ECC92C148572F7852ABF92FB31D (PieFilletEdge_tB5FFC918C40DE19AAA267E2EA77271DABDE3C6DD* __this, float ___angle0, float ___radius1, float ___fillet2, float ___sfillet3, VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___beginProfile4, VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* ___endProfile5, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_2 = NULL;
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_6 = NULL;
	float V_7 = 0.0f;
	Matrix2d_t7114E047AFD342CC5D392155954E33677F98A05D V_8;
	memset((&V_8), 0, sizeof(V_8));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_11 = NULL;
	{
		// float _angle = angle * Mathf.Deg2Rad;
		float L_0 = ___angle0;
		V_0 = ((float)il2cpp_codegen_multiply(L_0, (0.0174532924f)));
		// for (int y = 0; y < LengthY; y++) {
		V_1 = 0;
		goto IL_00be;
	}

IL_000f:
	{
		// Vertex pv = beginProfile[SegmentsY - y];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_1 = ___beginProfile4;
		int32_t L_2 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		int32_t L_3 = V_1;
		NullCheck(L_1);
		int32_t L_4 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_5 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// profilePoints[ y  ] = pv.Pos;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_6 = __this->___profilePoints_24;
		int32_t L_7 = V_1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_8 = V_2;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8->___Pos_7;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_9);
		// profileAngles[y] = _angle - Mathf.Atan2(profilePoints[y].z, profilePoints[y].x) * 2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = __this->___profileAngles_23;
		int32_t L_11 = V_1;
		float L_12 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = __this->___profilePoints_24;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		float L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___z_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = __this->___profilePoints_24;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		float L_18 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___x_2;
		float L_19;
		L_19 = atan2f(L_15, L_18);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (float)((float)il2cpp_codegen_subtract(L_12, ((float)il2cpp_codegen_multiply(L_19, (2.0f))))));
		// profileBeginNormals[y] = pv.Normal;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = __this->___profileBeginNormals_25;
		int32_t L_21 = V_1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_22 = V_2;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22->___Normal_5;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_23);
		// Matrix2d backTM = new Matrix2d(-profileAngles[y]);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = __this->___profileAngles_23;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		float L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Matrix2d__ctor_m9E71271929F7DF381898399D3ED5F523542C00FC((&V_3), ((-L_27)), NULL);
		// profileNormalsDelta[y] =  backTM.MultiplyVectorY(endProfile[SegmentsY - y].Normal) - profileBeginNormals[y];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_28 = __this->___profileNormalsDelta_26;
		int32_t L_29 = V_1;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_30 = ___endProfile5;
		int32_t L_31 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		int32_t L_32 = V_1;
		NullCheck(L_30);
		int32_t L_33 = ((int32_t)il2cpp_codegen_subtract(L_31, L_32));
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_34 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = L_34->___Normal_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4((&V_3), L_35, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_37 = __this->___profileBeginNormals_25;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_36, L_40, NULL);
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_41);
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00be:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_43 = V_1;
		int32_t L_44 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_000f;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		V_4 = 0;
		goto IL_01c8;
	}

IL_00d2:
	{
		// for (int y = 0; y < LengthY; y++) {
		V_5 = 0;
		goto IL_01b5;
	}

IL_00da:
	{
		// Vertex v = this[x, y];
		int32_t L_45 = V_4;
		int32_t L_46 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_47;
		L_47 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_45, L_46);
		V_6 = L_47;
		// float rot =   profileAngles[y] * v.NormalizedCoords.x;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_48 = __this->___profileAngles_23;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		float L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_52 = V_6;
		NullCheck(L_52);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_53 = (&L_52->___NormalizedCoords_14);
		float L_54 = L_53->___x_0;
		V_7 = ((float)il2cpp_codegen_multiply(L_51, L_54));
		// Matrix2d tm = new Matrix2d(rot);
		float L_55 = V_7;
		Matrix2d__ctor_m9E71271929F7DF381898399D3ED5F523542C00FC((&V_8), L_55, NULL);
		// v.Pos = tm.MultiplyVectorY( profilePoints[y] );
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_56 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_57 = __this->___profilePoints_24;
		int32_t L_58 = V_5;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4((&V_8), L_60, NULL);
		NullCheck(L_56);
		L_56->___Pos_7 = L_61;
		// Vector3 n =  new Vector3( profileBeginNormals[y].x + profileNormalsDelta[y].x * v.NormalizedCoords.x, profileBeginNormals[y].y, profileBeginNormals[y].z + profileNormalsDelta[y].z * v.NormalizedCoords.x );
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_62 = __this->___profileBeginNormals_25;
		int32_t L_63 = V_5;
		NullCheck(L_62);
		float L_64 = ((L_62)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_63)))->___x_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_65 = __this->___profileNormalsDelta_26;
		int32_t L_66 = V_5;
		NullCheck(L_65);
		float L_67 = ((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___x_2;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_68 = V_6;
		NullCheck(L_68);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_69 = (&L_68->___NormalizedCoords_14);
		float L_70 = L_69->___x_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_71 = __this->___profileBeginNormals_25;
		int32_t L_72 = V_5;
		NullCheck(L_71);
		float L_73 = ((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_72)))->___y_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_74 = __this->___profileBeginNormals_25;
		int32_t L_75 = V_5;
		NullCheck(L_74);
		float L_76 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___z_4;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_77 = __this->___profileNormalsDelta_26;
		int32_t L_78 = V_5;
		NullCheck(L_77);
		float L_79 = ((L_77)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_78)))->___z_4;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_80 = V_6;
		NullCheck(L_80);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_81 = (&L_80->___NormalizedCoords_14);
		float L_82 = L_81->___x_0;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_9), ((float)il2cpp_codegen_add(L_64, ((float)il2cpp_codegen_multiply(L_67, L_70)))), L_73, ((float)il2cpp_codegen_add(L_76, ((float)il2cpp_codegen_multiply(L_79, L_82)))), NULL);
		// v.Normal = tm.MultiplyVectorY( n );
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_83 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Matrix2d_MultiplyVectorY_m13E4BE07FFBE2C7B84B19D1DE49D2630FA96C5F4((&V_8), L_84, NULL);
		NullCheck(L_83);
		L_83->___Normal_5 = L_85;
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_86 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_86, 1));
	}

IL_01b5:
	{
		// for (int y = 0; y < LengthY; y++) {
		int32_t L_87 = V_5;
		int32_t L_88 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_87) < ((int32_t)L_88)))
		{
			goto IL_00da;
		}
	}
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_89 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_01c8:
	{
		// for (int x = 0; x < LengthX; x++) {
		int32_t L_90 = V_4;
		int32_t L_91 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_90) < ((int32_t)L_91)))
		{
			goto IL_00d2;
		}
	}
	{
		// if (Displayed) {
		bool L_92 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_92)
		{
			goto IL_023b;
		}
	}
	{
		// for (int v = 0; v<vertices.Length; v++) {
		V_10 = 0;
		goto IL_022f;
	}

IL_01e2:
	{
		// Vertex vert = vertices[v];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_93 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_94 = V_10;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		V_11 = L_96;
		// parent.mvertices[vert] = vert.Pos;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_97 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_97);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_98 = L_97->___mvertices_18;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_99 = V_11;
		int32_t L_100;
		L_100 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_99, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_101 = V_11;
		NullCheck(L_101);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = L_101->___Pos_7;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_100), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_102);
		// parent.mnormals[vert] = vert.Normal;
		ExtendedPrimitive_tD22A257DC772C29D6BE7C68E11E11EA3564893F6* L_103 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___parent_5;
		NullCheck(L_103);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_104 = L_103->___mnormals_19;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_105 = V_11;
		int32_t L_106;
		L_106 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_105, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_107 = V_11;
		NullCheck(L_107);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = L_107->___Normal_5;
		NullCheck(L_104);
		(L_104)->SetAt(static_cast<il2cpp_array_size_t>(L_106), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_108);
		// for (int v = 0; v<vertices.Length; v++) {
		int32_t L_109 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_109, 1));
	}

IL_022f:
	{
		// for (int v = 0; v<vertices.Length; v++) {
		int32_t L_110 = V_10;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_111 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_111);
		if ((((int32_t)L_110) < ((int32_t)((int32_t)(((RuntimeArray*)L_111)->max_length)))))
		{
			goto IL_01e2;
		}
	}

IL_023b:
	{
		// cachedRadialLength = profileAngles[0] * radius;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_112 = __this->___profileAngles_23;
		NullCheck(L_112);
		int32_t L_113 = 0;
		float L_114 = (L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		float L_115 = ___radius1;
		__this->___cachedRadialLength_27 = ((float)il2cpp_codegen_multiply(L_114, L_115));
		// }
		return;
	}
}
// System.Void ExtendedPrimitives_11.Internal.PieFilletEdge::SetUVPositionAndSize(UnityEngine.Vector2[],System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PieFilletEdge_SetUVPositionAndSize_mD771450451BAF0973F1E5676BCC9F6ADBCFAFEBB (PieFilletEdge_tB5FFC918C40DE19AAA267E2EA77271DABDE3C6DD* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uvs0, float ___filletRadius1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___offset2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_2 = NULL;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_3 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_8 = NULL;
	int32_t V_9 = 0;
	Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* V_10 = NULL;
	{
		// float l = filletRadius * Mathf.PI / 2;
		float L_0 = ___filletRadius1;
		V_0 = ((float)(((float)il2cpp_codegen_multiply(L_0, (3.14159274f)))/(2.0f)));
		// for (int x = 0; x<LengthX; x++) {
		V_1 = 0;
		goto IL_00d1;
	}

IL_0015:
	{
		// Vertex VertFrom = this[x, 0];
		int32_t L_1 = V_1;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_2;
		L_2 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_1, 0);
		V_2 = L_2;
		// Vertex VertTo = this[x, SegmentsY];
		int32_t L_3 = V_1;
		int32_t L_4 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___SegmentsY_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_5;
		L_5 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_3, L_4);
		V_3 = L_5;
		// Vector2 uvFrom = new Vector2( VertFrom.Pos.x, VertFrom.Pos.z );
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_6 = V_2;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&L_6->___Pos_7);
		float L_8 = L_7->___x_2;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_9 = V_2;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = (&L_9->___Pos_7);
		float L_11 = L_10->___z_4;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_4), L_8, L_11, NULL);
		// Vector2 uvTo = new Vector2(VertTo.Pos.x, VertTo.Pos.z);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_12 = V_3;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&L_12->___Pos_7);
		float L_14 = L_13->___x_2;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_15 = V_3;
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&L_15->___Pos_7);
		float L_17 = L_16->___z_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_18), L_14, L_17, /*hidden argument*/NULL);
		// Vector2 dir = (uvTo - uvFrom).normalized * l;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = L_18;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_19, L_20, NULL);
		V_6 = L_21;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		L_22 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline((&V_6), NULL);
		float L_23 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_22, L_23, NULL);
		V_5 = L_24;
		// uvFrom = uvTo - dir;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25 = V_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_19, L_25, NULL);
		V_4 = L_26;
		// for (int y = 0; y<LengthY; y++ ) {
		V_7 = 0;
		goto IL_00c3;
	}

IL_008b:
	{
		// Vertex vert = this[x,y];
		int32_t L_27 = V_1;
		int32_t L_28 = V_7;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_29;
		L_29 = VirtualFuncInvoker2< Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964*, int32_t, int32_t >::Invoke(4 /* ExtendedPrimitives_11.Internal.Vertex ExtendedPrimitives_11.Internal.Element::get_Item(System.Int32,System.Int32) */, __this, L_27, L_28);
		V_8 = L_29;
		// vert.UV = offset + uvFrom + dir *  vert.NormalizedCoords.y ;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_30 = V_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = ___offset2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_31, L_32, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34 = V_5;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_35 = V_8;
		NullCheck(L_35);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_36 = (&L_35->___NormalizedCoords_14);
		float L_37 = L_36->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_34, L_37, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_33, L_38, NULL);
		NullCheck(L_30);
		L_30->___UV_9 = L_39;
		// for (int y = 0; y<LengthY; y++ ) {
		int32_t L_40 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00c3:
	{
		// for (int y = 0; y<LengthY; y++ ) {
		int32_t L_41 = V_7;
		int32_t L_42 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthY_9;
		if ((((int32_t)L_41) < ((int32_t)L_42)))
		{
			goto IL_008b;
		}
	}
	{
		// for (int x = 0; x<LengthX; x++) {
		int32_t L_43 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00d1:
	{
		// for (int x = 0; x<LengthX; x++) {
		int32_t L_44 = V_1;
		int32_t L_45 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___LengthX_8;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0015;
		}
	}
	{
		// if (Displayed) {
		bool L_46 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___Displayed_0;
		if (!L_46)
		{
			goto IL_011b;
		}
	}
	{
		// for (int v = 0; v < vertices.Length; v++) {
		V_9 = 0;
		goto IL_010f;
	}

IL_00ea:
	{
		// Vertex vert = vertices[v];
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_47 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		int32_t L_48 = V_9;
		NullCheck(L_47);
		int32_t L_49 = L_48;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		V_10 = L_50;
		// uvs[vert] = vert.UV;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_51 = ___uvs0;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_52 = V_10;
		int32_t L_53;
		L_53 = Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline(L_52, NULL);
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_54 = V_10;
		NullCheck(L_54);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55 = L_54->___UV_9;
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_55);
		// for (int v = 0; v < vertices.Length; v++) {
		int32_t L_56 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_010f:
	{
		// for (int v = 0; v < vertices.Length; v++) {
		int32_t L_57 = V_9;
		VertexU5BU5D_tAE4A8AB295F52ED080C349E7548E323BE4A3C8CC* L_58 = ((Element_tDD021D15E39F04405664845456EE25BFDC6FC663*)__this)->___vertices_10;
		NullCheck(L_58);
		if ((((int32_t)L_57) < ((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length)))))
		{
			goto IL_00ea;
		}
	}

IL_011b:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = ___min1;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___value0;
		int32_t L_5 = ___max2;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_LerpUnclamped_mB0B50875D4509E21FF43F4D87610333D55E6A44F_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___x_0;
		float L_6 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___a0;
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___b1;
		float L_10 = L_9.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___a0;
		float L_12 = L_11.___y_1;
		float L_13 = ___t2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_3, L_5)), L_6)))), ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_10, L_12)), L_13)))), /*hidden argument*/NULL);
		V_0 = L_14;
		goto IL_0035;
	}

IL_0035:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___c0;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___c0;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___c0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___c0;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___c0;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ExpInt_op_Implicit_m10EB04737A5F55E8D1BBF2DA0FA8CAD213A02D16_inline (ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 ___i0, const RuntimeMethod* method) 
{
	{
		// return i.Value;
		ExpInt_tF0CBCC832A8486E03D030C2953D6B1045D180349 L_0 = ___i0;
		int32_t L_1 = L_0.___Value_1;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_UnaryNegation_mBA9FC53A2194EE3CC067A12D11879F695B34D6F9_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((-L_1)), ((-L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m42EE1F0BC041AF14F89DED7F762BE996E2C50D8A_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vertex_op_Implicit_m22AC701722B2F1E7324E0ED0E16B3D41F4DE571F_inline (Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* ___i0, const RuntimeMethod* method) 
{
	{
		// return i.Global;
		Vertex_tA4BDDDD4E9C2B2CF46CE3FF22421B5CCCB4F6964* L_0 = ___i0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___Global_3;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_3))));
		goto IL_000b;
	}

IL_000b:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_LerpUnclamped_m4109A459C1DB823310A10B8B1E80CB6877418347_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___x_2;
		float L_6 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___a0;
		float L_8 = L_7.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___b1;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___a0;
		float L_12 = L_11.___y_3;
		float L_13 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___a0;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___b1;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___a0;
		float L_19 = L_18.___z_4;
		float L_20 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_3, L_5)), L_6)))), ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_10, L_12)), L_13)))), ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), L_20)))), /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_004b;
	}

IL_004b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_Scale_m8D61A8D2272549F1EF41256F7E8A206C6500EA6C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m4C9E10CBE1F85D0E7D84F6C20A47B6C82095919C_gshared_inline (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		TrisU5BU5D_tA7E1996FF15D766253EE11012E299CEF4DD6EC99* L_3 = (TrisU5BU5D_tA7E1996FF15D766253EE11012E299CEF4DD6EC99*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m0811C7908F1676BB48418E5DBCD981C162E1EDFA_gshared_inline (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		QuadU5BU5D_t6F0BDE1BACD2276B7C8B16BE97546BF173FCDA21* L_3 = (QuadU5BU5D_t6F0BDE1BACD2276B7C8B16BE97546BF173FCDA21*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m9C5174F33DA348C1CCEE60DAD5F7EF573C222CD8_gshared_inline (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* __this, Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC ___item0, const RuntimeMethod* method) 
{
	TrisU5BU5D_tA7E1996FF15D766253EE11012E299CEF4DD6EC99* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		TrisU5BU5D_tA7E1996FF15D766253EE11012E299CEF4DD6EC99* L_1 = (TrisU5BU5D_tA7E1996FF15D766253EE11012E299CEF4DD6EC99*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		TrisU5BU5D_tA7E1996FF15D766253EE11012E299CEF4DD6EC99* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		TrisU5BU5D_tA7E1996FF15D766253EE11012E299CEF4DD6EC99* L_6 = V_0;
		int32_t L_7 = V_1;
		Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC)L_8);
		return;
	}

IL_0034:
	{
		Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC L_9 = ___item0;
		((  void (*) (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0*, Tris_tBF8BCFA441D413CB221DC581DF3CD8C039009EBC, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m3F80BE64454866C0017404FD9982589BD24AA937_gshared_inline (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* __this, Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B ___item0, const RuntimeMethod* method) 
{
	QuadU5BU5D_t6F0BDE1BACD2276B7C8B16BE97546BF173FCDA21* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		QuadU5BU5D_t6F0BDE1BACD2276B7C8B16BE97546BF173FCDA21* L_1 = (QuadU5BU5D_t6F0BDE1BACD2276B7C8B16BE97546BF173FCDA21*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		QuadU5BU5D_t6F0BDE1BACD2276B7C8B16BE97546BF173FCDA21* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		QuadU5BU5D_t6F0BDE1BACD2276B7C8B16BE97546BF173FCDA21* L_6 = V_0;
		int32_t L_7 = V_1;
		Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B)L_8);
		return;
	}

IL_0034:
	{
		Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B L_9 = ___item0;
		((  void (*) (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A*, Quad_t229E4B7C3156921F8C632D25B575F630FB445E1B, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF5CB2DE04000FD6401B213385D80A362BD68C096_gshared_inline (List_1_t9535C53413AED810FC1D8418ADA8834974E63B61* __this, MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 ___item0, const RuntimeMethod* method) 
{
	MeshEdgeU5BU5D_t406C5B30EBA07B5BE74882FC72A96967796000F8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		MeshEdgeU5BU5D_t406C5B30EBA07B5BE74882FC72A96967796000F8* L_1 = (MeshEdgeU5BU5D_t406C5B30EBA07B5BE74882FC72A96967796000F8*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		MeshEdgeU5BU5D_t406C5B30EBA07B5BE74882FC72A96967796000F8* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		MeshEdgeU5BU5D_t406C5B30EBA07B5BE74882FC72A96967796000F8* L_6 = V_0;
		int32_t L_7 = V_1;
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5)L_8);
		return;
	}

IL_0034:
	{
		MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5 L_9 = ___item0;
		((  void (*) (List_1_t9535C53413AED810FC1D8418ADA8834974E63B61*, MeshEdge_t3FCD8A6BA6E6B6E39E49E6A74F905F76413947B5, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m68B8F85B440B5481DF9E5FF1F77AA409EDE22F8F_gshared_inline (List_1_tFEB546170EA45199DDD689FC49026749B2B62CA0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m167A28803E058E32996ED5459DF38D914B227242_gshared_inline (List_1_tBFD05818441C7B3AE9A9373B88211AF74611817A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
