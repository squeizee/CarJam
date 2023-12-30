#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// UnityEngine.Tilemaps.TileBase[]
struct TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7;
// UnityEngine.Tilemaps.TileChangeData[]
struct TileChangeDataU5BU5D_t5DE74D19BDE89021FB95C861E05CBDE852AED8BD;
// UnityEngine.Vector3Int[]
struct Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.Grid
struct Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE;
// UnityEngine.GridLayout
struct GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B;
// UnityEngine.Tilemaps.ITilemap
struct ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.U2D.SpriteAtlas
struct SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8;
// System.String
struct String_t;
// UnityEngine.Tilemaps.Tile
struct Tile_t33119F106CFC3DC767E7D9306A958AAE12133490;
// UnityEngine.Tilemaps.TileBase
struct TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9;
// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751;
// UnityEngine.Tilemaps.TilemapRenderer
struct TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7;
struct TileChangeDataU5BU5D_t5DE74D19BDE89021FB95C861E05CBDE852AED8BD;
struct Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5E8190EE43F4DF5D80E8A6651A0469A8FD445F94 
{
};
struct Il2CppArrayBounds;

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

// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Tilemaps.TileData>
struct NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>
struct NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
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

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Tilemaps.TileAnimationData
struct TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 
{
	// UnityEngine.Sprite[] UnityEngine.Tilemaps.TileAnimationData::m_AnimatedSprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___m_AnimatedSprites_0;
	// System.Single UnityEngine.Tilemaps.TileAnimationData::m_AnimationSpeed
	float ___m_AnimationSpeed_1;
	// System.Single UnityEngine.Tilemaps.TileAnimationData::m_AnimationStartTime
	float ___m_AnimationStartTime_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Tilemaps.TileAnimationData
struct TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_pinvoke
{
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___m_AnimatedSprites_0;
	float ___m_AnimationSpeed_1;
	float ___m_AnimationStartTime_2;
};
// Native definition for COM marshalling of UnityEngine.Tilemaps.TileAnimationData
struct TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_com
{
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___m_AnimatedSprites_0;
	float ___m_AnimationSpeed_1;
	float ___m_AnimationStartTime_2;
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

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
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

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.BoundsInt
struct BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 
{
	// UnityEngine.Vector3Int UnityEngine.BoundsInt::m_Position
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position_0;
	// UnityEngine.Vector3Int UnityEngine.BoundsInt::m_Size
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Size_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Tilemaps.ITilemap
struct ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164  : public RuntimeObject
{
	// UnityEngine.Tilemaps.Tilemap UnityEngine.Tilemaps.ITilemap::m_Tilemap
	Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* ___m_Tilemap_1;
	// System.Boolean UnityEngine.Tilemaps.ITilemap::m_AddToList
	bool ___m_AddToList_2;
	// System.Int32 UnityEngine.Tilemaps.ITilemap::m_RefreshCount
	int32_t ___m_RefreshCount_3;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3Int> UnityEngine.Tilemaps.ITilemap::m_RefreshPos
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___m_RefreshPos_4;
};

struct ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_StaticFields
{
	// UnityEngine.Tilemaps.ITilemap UnityEngine.Tilemaps.ITilemap::s_Instance
	ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___s_Instance_0;
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

// UnityEngine.Tilemaps.TileChangeData
struct TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E 
{
	// UnityEngine.Vector3Int UnityEngine.Tilemaps.TileChangeData::m_Position
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position_0;
	// UnityEngine.Object UnityEngine.Tilemaps.TileChangeData::m_TileAsset
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_TileAsset_1;
	// UnityEngine.Color UnityEngine.Tilemaps.TileChangeData::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_2;
	// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.TileChangeData::m_Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform_3;
};

// UnityEngine.Tilemaps.TileData
struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F 
{
	// System.Int32 UnityEngine.Tilemaps.TileData::m_Sprite
	int32_t ___m_Sprite_0;
	// UnityEngine.Color UnityEngine.Tilemaps.TileData::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_1;
	// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.TileData::m_Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform_2;
	// System.Int32 UnityEngine.Tilemaps.TileData::m_GameObject
	int32_t ___m_GameObject_3;
	// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.TileData::m_Flags
	int32_t ___m_Flags_4;
	// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.TileData::m_ColliderType
	int32_t ___m_ColliderType_5;
};

struct TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_StaticFields
{
	// UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileData::Default
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F ___Default_6;
};

// UnityEngine.Tilemaps.TileDataNative
struct TileDataNative_tAD277F2C587DC35577654A4C111ECE2C4114C528 
{
	// System.Int32 UnityEngine.Tilemaps.TileDataNative::m_Sprite
	int32_t ___m_Sprite_0;
	// UnityEngine.Color UnityEngine.Tilemaps.TileDataNative::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_1;
	// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.TileDataNative::m_Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform_2;
	// System.Int32 UnityEngine.Tilemaps.TileDataNative::m_GameObject
	int32_t ___m_GameObject_3;
	// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.TileDataNative::m_Flags
	int32_t ___m_Flags_4;
	// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.TileDataNative::m_ColliderType
	int32_t ___m_ColliderType_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.U2D.SpriteAtlas
struct SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Action`1<UnityEngine.U2D.SpriteAtlas>
struct Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Tilemaps.TileBase
struct TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.GridLayout
struct GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Tilemaps.Tile
struct Tile_t33119F106CFC3DC767E7D9306A958AAE12133490  : public TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9
{
	// UnityEngine.Sprite UnityEngine.Tilemaps.Tile::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_4;
	// UnityEngine.Color UnityEngine.Tilemaps.Tile::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_5;
	// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tile::m_Transform
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_Transform_6;
	// UnityEngine.GameObject UnityEngine.Tilemaps.Tile::m_InstancedGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_InstancedGameObject_7;
	// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tile::m_Flags
	int32_t ___m_Flags_8;
	// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tile::m_ColliderType
	int32_t ___m_ColliderType_9;
};

// UnityEngine.Tilemaps.TilemapRenderer
struct TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.Grid
struct Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE  : public GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B
{
};

// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751  : public GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Tilemaps.TileBase[]
struct TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7  : public RuntimeArray
{
	ALIGN_FIELD (8) TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* m_Items[1];

	inline TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3Int[]
struct Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 m_Items[1];

	inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Tilemaps.TileChangeData[]
struct TileChangeDataU5BU5D_t5DE74D19BDE89021FB95C861E05CBDE852AED8BD  : public RuntimeArray
{
	ALIGN_FIELD (8) TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E m_Items[1];

	inline TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_TileAsset_1), (void*)NULL);
	}
	inline TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_TileAsset_1), (void*)NULL);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_gshared (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>::Copy(Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24_gshared (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___src0, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___dst1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_gshared (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_gshared (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector3Int>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Tilemaps.TileData>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method) ;

// UnityEngine.Vector3 UnityEngine.Vector3Int::op_Implicit(UnityEngine.Vector3Int)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Int_op_Implicit_m13297B1F6D07F1E46C0627EAAB8413E637FCA442_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.GridLayout::CellToLocalInterpolated(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GridLayout_CellToLocalInterpolated_mE1FC35F36111BD0881573C6F51C37239BF3BD621 (GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cellPosition0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Tilemaps.Tilemap::get_tileAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Tilemap_get_tileAnchor_mD3C7F2A024DC43019CEB93682307ED41EC3329E4 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.GridLayout::LocalToWorld(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GridLayout_LocalToWorld_m4714A4DAF4FF9545E9CCB3A8ACB5731A498D9CA6 (GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___localPosition0, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.Tilemaps.Tilemap::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Tilemap_get_origin_mB5E10582CFAA76144BB44DECAADB84E904D02E55 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.Tilemaps.Tilemap::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Tilemap_get_size_m8B9F0C2CC3CD37626AE921047DA5DC239B3F00EA (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.BoundsInt::.ctor(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsInt__ctor_m93F7EDF326B3BA01465FA229F6CEED0ED48D32FF (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::get_localBounds_Injected(UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_localBounds_Injected_m4CAD2C2B9B4B9AEE6229C25DDFA54425B4AFEA9A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::get_localFrameBounds_Injected(UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_localFrameBounds_Injected_m5F4E34165C0EA88A26796EE6242729969D5DBB5C (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::get_color_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_color_Injected_m289F63DA71B34AAE6826E4D35A2164097C4813E6 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::set_color_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_color_Injected_m3301BC28A921760D04B61597AFF6E6022591F74F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::get_origin_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_origin_Injected_m151021A1FFF979A4AC9CC2C33CC34AB60CA11ADB (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::set_origin_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_origin_Injected_m719AD06C0133BEFC33997AC1D1524A57B1BFFBFC (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::get_size_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_size_Injected_m493367797FDFDAA59CC626261CE2F3D310BD3B17 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::set_size_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_size_Injected_mB517504AC10D24A29A73E001C6845078D537AB84 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::get_tileAnchor_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_tileAnchor_Injected_mDE5386464C63ACB22779CD1C0B6D78EF00D19ADE (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::set_tileAnchor_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_tileAnchor_Injected_m964D77CC892A3EAEBA530B9E478B8347056A2239 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::get_orientationMatrix_Injected(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_orientationMatrix_Injected_mBF67A03412A164065694FCE3B0A7A53627191128 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::set_orientationMatrix_Injected(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_orientationMatrix_Injected_mDBB95DE3F3D36296AC7985C5C8131A71E08A1A32 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Tilemaps.Tilemap::GetTileAsset_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Tilemap_GetTileAsset_Injected_m541A1F618DB6621D2ADCD4247D5127DEDDFA3B30 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Tilemaps.Tilemap::GetTileAsset(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Tilemap_GetTileAsset_m3B9C96C2E2488141C4F6EBD52C6D807C801C6922 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Object[] UnityEngine.Tilemaps.Tilemap::GetTileAssetsBlock_Injected(UnityEngine.Vector3Int&,UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Tilemap_GetTileAssetsBlock_Injected_m2CBEC1BB224C47AEB888F4C9FA39E64C73430BEE (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___blockDimensions1, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.BoundsInt::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 BoundsInt_get_min_m68D854200F7ED4AED677ECC53F26AA0834A715AE (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.BoundsInt::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) ;
// UnityEngine.Object[] UnityEngine.Tilemaps.Tilemap::GetTileAssetsBlock(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Tilemap_GetTileAssetsBlock_m28BAE62DD83EFD00528A150B7728880DACAC0026 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___blockDimensions1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetTileAssetsBlockNonAlloc_Injected(UnityEngine.Vector3Int&,UnityEngine.Vector3Int&,UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAssetsBlockNonAlloc_Injected_mA924FF04A2AE7A3AD7476DEB33A1A6D85BFC91F9 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___startPosition0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___endPosition1, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___tiles2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetTileAssetsBlockNonAlloc(UnityEngine.Vector3Int,UnityEngine.Vector3Int,UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAssetsBlockNonAlloc_m2BAA311398DE9C0B1590D662482FF292931B575F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___startPosition0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___endPosition1, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___tiles2, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetTilesRangeCount_Injected(UnityEngine.Vector3Int&,UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTilesRangeCount_Injected_m72E6122991422754F201528F8CD46273FD42FA11 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___startPosition0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___endPosition1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetTileAssetsRangeNonAlloc_Injected(UnityEngine.Vector3Int&,UnityEngine.Vector3Int&,UnityEngine.Vector3Int[],UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAssetsRangeNonAlloc_Injected_mA7E8C7D274060ECB4FB03EF48E4E550FD71E2CD3 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___startPosition0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___endPosition1, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___positions2, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___tiles3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetTileAssetsRangeNonAlloc(UnityEngine.Vector3Int,UnityEngine.Vector3Int,UnityEngine.Vector3Int[],UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAssetsRangeNonAlloc_mA42F628851793097696368EEA780D0240112D3DE (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___startPosition0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___endPosition1, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___positions2, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___tiles3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::SetTileAsset_Injected(UnityEngine.Vector3Int&,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileAsset_Injected_m45031F05D325CDEA542B7B64AAD9893B2FFDA3CA (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___tile1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::SetTileAsset(UnityEngine.Vector3Int,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileAsset_m88D70B08B3D291F99EB34F01136C2D4EEBE45D4B (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___tile1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::SetTileAssets(UnityEngine.Vector3Int[],UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileAssets_m80E6341D44AE4E50942B6A4A8E66CC45F8BEDAD5 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___positionArray0, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___tileArray1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::INTERNAL_CALL_SetTileAssetsBlock_Injected(UnityEngine.Vector3Int&,UnityEngine.Vector3Int&,UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_INTERNAL_CALL_SetTileAssetsBlock_Injected_mEE997E9C8EE9C12354F05C969389E956638AC091 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___blockDimensions1, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___tileArray2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::INTERNAL_CALL_SetTileAssetsBlock(UnityEngine.Vector3Int,UnityEngine.Vector3Int,UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_INTERNAL_CALL_SetTileAssetsBlock_mD20C1320B3C36E2A5F79BFF9A6B9EAABF3AF5437 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___blockDimensions1, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___tileArray2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::SetTile_Injected(UnityEngine.Tilemaps.TileChangeData&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTile_Injected_m898AA464C83D0CFDC77523C98C265F34D728DD19 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E* ___tileChangeData0, bool ___ignoreLockFlags1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTile_Injected_m99F1EC3F340590E282B01EC7C96F1F8D1BA03A69 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::SwapTileAsset(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SwapTileAsset_m8185544F41428C07809B2F7DCFC4DD808083C287 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___changeTile0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___newTile1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Tilemaps.Tilemap::ContainsTileAsset(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_ContainsTileAsset_m14064994385EE754CE7CCF34CE8FB8E5AB299282 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___tileAsset0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Tilemaps.Tilemap::Internal_GetUsedTilesNonAlloc(UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_Internal_GetUsedTilesNonAlloc_m79F745C755C26362833B0F0CC8C5846547EF5C4F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___usedTiles0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Tilemaps.Tilemap::Internal_GetUsedSpritesNonAlloc(UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_Internal_GetUsedSpritesNonAlloc_mCDD01ECE51A344C6224D34F199A9F553AF086784 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___usedSprites0, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.Tilemaps.Tilemap::GetSprite_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Tilemap_GetSprite_Injected_m1AC87EB502B50969FD98369D52D86AD559CA979D (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::GetTransformMatrix_Injected(UnityEngine.Vector3Int&,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_GetTransformMatrix_Injected_mC76882554060CD7648515C690BEFA2E9940B460B (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___ret1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::SetTransformMatrix_Injected(UnityEngine.Vector3Int&,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTransformMatrix_Injected_m88340E47F9B135ECFBEB7975CCEDD80CC1633E10 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___transform1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::GetColor_Injected(UnityEngine.Vector3Int&,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_GetColor_Injected_m5FD5600D223DFA45F0CEE26E610D4B67E7DCB208 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___ret1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::SetColor_Injected(UnityEngine.Vector3Int&,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetColor_Injected_m450C967EEEFE1174056E7EC2A15516F8E27A69AD (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___color1, const RuntimeMethod* method) ;
// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tilemap::GetTileFlags_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileFlags_Injected_mA2A6713301B3AB8CD4764CCFC81BAAC0AB466B0F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::SetTileFlags_Injected(UnityEngine.Vector3Int&,UnityEngine.Tilemaps.TileFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileFlags_Injected_m83119EED93BC5F0D99DC4CD9C55D8229C5666C0F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, int32_t ___flags1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::AddTileFlags_Injected(UnityEngine.Vector3Int&,UnityEngine.Tilemaps.TileFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_AddTileFlags_Injected_m64CCA40E2B0F79874B51530604054B79BDAB1B00 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, int32_t ___flags1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::RemoveTileFlags_Injected(UnityEngine.Vector3Int&,UnityEngine.Tilemaps.TileFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RemoveTileFlags_Injected_m8D6A05B5BC88CE2C5201C6EDF7500B3515E52412 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, int32_t ___flags1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Tilemaps.Tilemap::GetInstantiatedObject_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Tilemap_GetInstantiatedObject_Injected_m6C5E99B111B446D484D0C218655B7A73997F6B14 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Tilemaps.Tilemap::GetObjectToInstantiate_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Tilemap_GetObjectToInstantiate_Injected_m36912C90869C9A9DF7054EC0E8FCC6987E49E0B9 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::SetColliderType_Injected(UnityEngine.Vector3Int&,UnityEngine.Tilemaps.Tile/ColliderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetColliderType_Injected_m566B4B3BCF44CB5A30E2798BB5761DFA71548838 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, int32_t ___colliderType1, const RuntimeMethod* method) ;
// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tilemap::GetColliderType_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetColliderType_Injected_mC20B1CB561B1230391EE779C1B772DE672D0112B (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetAnimationFrameCount_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetAnimationFrameCount_Injected_m35D7E7AA8610A049D4CC20C5B0DD4FEE296A591A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetAnimationFrame_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetAnimationFrame_Injected_m7ED5754B942DBB734C8A29E7FD2DFAD611333A8F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::SetAnimationFrame_Injected(UnityEngine.Vector3Int&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetAnimationFrame_Injected_mDB66AD750CA91C833AA9BC4B6AF8C007D9406862 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, int32_t ___frame1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Tilemaps.Tilemap::GetAnimationTime_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tilemap_GetAnimationTime_Injected_m99ED64409B69D42969B5B2A425F8DCD4C85DA25A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::SetAnimationTime_Injected(UnityEngine.Vector3Int&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetAnimationTime_Injected_mB9A56E73F9820BBFB220E6B896DBC3FBD897EF77 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, float ___time1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::FloodFillTileAsset(UnityEngine.Vector3Int,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_FloodFillTileAsset_mE662F8026F3FA9E054D58640727D57417CD33A9F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___tile1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::FloodFillTileAsset_Injected(UnityEngine.Vector3Int&,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_FloodFillTileAsset_Injected_mE576684EA3396DA63CDD2A9046FECA35631F12B2 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___tile1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::BoxFillTileAsset(UnityEngine.Vector3Int,UnityEngine.Object,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_BoxFillTileAsset_mE880ED900FEA8679D2FAB08810A660402EF5A640 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___tile1, int32_t ___startX2, int32_t ___startY3, int32_t ___endX4, int32_t ___endY5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::BoxFillTileAsset_Injected(UnityEngine.Vector3Int&,UnityEngine.Object,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_BoxFillTileAsset_Injected_mAC37DD9FAF6B478739B95A55B82D601B29188965 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___tile1, int32_t ___startX2, int32_t ___startY3, int32_t ___endX4, int32_t ___endY5, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::InsertCells(UnityEngine.Vector3Int,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_InsertCells_mD674C03ECC2F720959DD5140FA70D610355274F3 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, int32_t ___numColumns1, int32_t ___numRows2, int32_t ___numLayers3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::InsertCells_Injected(UnityEngine.Vector3Int&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_InsertCells_Injected_m3C52681434780B1E732451BD8DC0CB313E8B4144 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, int32_t ___numColumns1, int32_t ___numRows2, int32_t ___numLayers3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::DeleteCells(UnityEngine.Vector3Int,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_DeleteCells_mF179BB21D0E8F5977ABF28FA370FB219CF2EAD6F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, int32_t ___numColumns1, int32_t ___numRows2, int32_t ___numLayers3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::DeleteCells_Injected(UnityEngine.Vector3Int&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_DeleteCells_Injected_m2AFB877EBE83B5C62B71D6615D12DE9E7AA0A19E (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, int32_t ___numColumns1, int32_t ___numRows2, int32_t ___numLayers3, const RuntimeMethod* method) ;
// System.Void UnityEngine.GridLayout::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLayout__ctor_m9266D2F9A58091E4214E9E5B69C0E5350F344828 (GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TilemapRenderer::get_chunkSize_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_get_chunkSize_Injected_m390939496D3FD6B77C79D106A081C53FBEB13AA1 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TilemapRenderer::set_chunkSize_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_set_chunkSize_Injected_mD9643F92E6B02C090F8D8E3540153ABBD8101E1B (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TilemapRenderer::get_chunkCullingBounds_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_get_chunkCullingBounds_Injected_m1B7F28F5B82681B2344D855F3B4E52428DA693DC (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TilemapRenderer::set_chunkCullingBounds_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_set_chunkCullingBounds_Injected_m61415554CF936B37FF57D6448A7F2A68496DE622 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.U2D.SpriteAtlas>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDAEB7161DF624FDF6A3DA3C6BE40319FFC05A2E3 (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.U2D.SpriteAtlasManager::add_atlasRegistered(System.Action`1<UnityEngine.U2D.SpriteAtlas>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAtlasManager_add_atlasRegistered_mA46A6A347F25B2E03DB4FD8044B93B4FD8ED50A5 (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.U2D.SpriteAtlasManager::remove_atlasRegistered(System.Action`1<UnityEngine.U2D.SpriteAtlas>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteAtlasManager_remove_atlasRegistered_m67E745D3503463E3DB9CC12C157ABB4F469ABE79 (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer__ctor_m8B4EE9696B155A1B0A2CF13EBFC363CE175B9271 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileData::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileData::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileData::set_transform(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileData::set_gameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_gameObject_m1CE5B2AAAB5BF5AEF36EBAF2BCE23E4D2E5A9E09 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileData::set_flags(UnityEngine.Tilemaps.TileFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileData::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileData::CreateDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F TileData_CreateDefault_m13A39001A47B60635B10FFD06AD65082CBB7D12D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.TileBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase__ctor_mBFD0A0ACF9DB1F08783B9F3F35D4E61C9205D4A2 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.ITilemap::RefreshTile(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap_RefreshTile_m4C4B0A062A13E986BD20AA87F056982D67FAF69D (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2 (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>::Copy(Unity.Collections.NativeArray`1<T>,Unity.Collections.NativeArray`1<T>,System.Int32)
inline void NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24 (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___src0, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___dst1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF, NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF, int32_t, const RuntimeMethod*))NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24_gshared)(___src0, ___dst1, ___length2, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>::Dispose()
inline void NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055 (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*, const RuntimeMethod*))NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_gshared)(__this, method);
}
// System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTile_mEF4F94212FD9B311431DFFAFE092A4A6EBA580DF (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.ITilemap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap__ctor_m3281F6903F18F9B867E6B81E18BCCD0828084258 (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector3Int>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30 (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF*, const RuntimeMethod*))NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_gshared)(__this, method);
}
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.Int32>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550 (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector3Int>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// UnityEngine.Object UnityEngine.Object::ForceLoadFromInstanceID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Object_ForceLoadFromInstanceID_mDC03EC6F7745D8194DF5A7A0C50188228F3E95B6 (int32_t ___instanceID0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Tilemaps.Tilemap::RefreshTilesNative(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTilesNative_mD73E77DFD7C808A3665CA8389F728CBC08A52232 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, void* ___positions0, int32_t ___count1, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Tilemaps.TileData>(System.Void*,System.Int32,Unity.Collections.Allocator)
inline NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C_gshared)(___dataPointer0, ___length1, ___allocator2, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Grid UnityEngine.Tilemaps.Tilemap::get_layoutGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* Tilemap_get_layoutGrid_m84B3A21E3E9744E83DBD07448DBD8C01CE0E257E (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	typedef Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* (*Tilemap_get_layoutGrid_m84B3A21E3E9744E83DBD07448DBD8C01CE0E257E_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*);
	static Tilemap_get_layoutGrid_m84B3A21E3E9744E83DBD07448DBD8C01CE0E257E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_layoutGrid_m84B3A21E3E9744E83DBD07448DBD8C01CE0E257E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_layoutGrid()");
	Grid_t4C0ACF986206D18240E35155E01B5A97DAA651FE* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Vector3 UnityEngine.Tilemaps.Tilemap::GetCellCenterLocal(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Tilemap_GetCellCenterLocal_m108918F862E23ECE7B0ED7AF2CF21A767F52124A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3Int_op_Implicit_m13297B1F6D07F1E46C0627EAAB8413E637FCA442_inline(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = GridLayout_CellToLocalInterpolated_mE1FC35F36111BD0881573C6F51C37239BF3BD621(__this, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Tilemap_get_tileAnchor_mD3C7F2A024DC43019CEB93682307ED41EC3329E4(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = GridLayout_CellToLocalInterpolated_mE1FC35F36111BD0881573C6F51C37239BF3BD621(__this, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_4, NULL);
		V_0 = L_5;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}
}
// UnityEngine.Vector3 UnityEngine.Tilemaps.Tilemap::GetCellCenterWorld(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Tilemap_GetCellCenterWorld_m567FBE8E0822C9A75681D3B95AD9FDDF3C43A4F3 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___position0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3Int_op_Implicit_m13297B1F6D07F1E46C0627EAAB8413E637FCA442_inline(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = GridLayout_CellToLocalInterpolated_mE1FC35F36111BD0881573C6F51C37239BF3BD621(__this, L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Tilemap_get_tileAnchor_mD3C7F2A024DC43019CEB93682307ED41EC3329E4(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = GridLayout_CellToLocalInterpolated_mE1FC35F36111BD0881573C6F51C37239BF3BD621(__this, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = GridLayout_LocalToWorld_m4714A4DAF4FF9545E9CCB3A8ACB5731A498D9CA6(__this, L_5, NULL);
		V_0 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
// UnityEngine.BoundsInt UnityEngine.Tilemaps.Tilemap::get_cellBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 Tilemap_get_cellBounds_m2C1EDCFFD145175A83457B4F7A88CEA037DF8EB9 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0;
		L_0 = Tilemap_get_origin_mB5E10582CFAA76144BB44DECAADB84E904D02E55(__this, NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1;
		L_1 = Tilemap_get_size_m8B9F0C2CC3CD37626AE921047DA5DC239B3F00EA(__this, NULL);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_2;
		memset((&L_2), 0, sizeof(L_2));
		BoundsInt__ctor_m93F7EDF326B3BA01465FA229F6CEED0ED48D32FF((&L_2), L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.Bounds UnityEngine.Tilemaps.Tilemap::get_localBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Tilemap_get_localBounds_m6188638F4F369F32E16D25AB71AFC41691A95342 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Tilemap_get_localBounds_Injected_m4CAD2C2B9B4B9AEE6229C25DDFA54425B4AFEA9A(__this, (&V_0), NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Bounds UnityEngine.Tilemaps.Tilemap::get_localFrameBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 Tilemap_get_localFrameBounds_mA6650197618602764BC071D494CD32442B01B82E (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Tilemap_get_localFrameBounds_Injected_m5F4E34165C0EA88A26796EE6242729969D5DBB5C(__this, (&V_0), NULL);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.Tilemaps.Tilemap::get_animationFrameRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tilemap_get_animationFrameRate_m391ACF664A9239DCB5A3344AE6A27A6D924234AE (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	typedef float (*Tilemap_get_animationFrameRate_m391ACF664A9239DCB5A3344AE6A27A6D924234AE_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*);
	static Tilemap_get_animationFrameRate_m391ACF664A9239DCB5A3344AE6A27A6D924234AE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_animationFrameRate_m391ACF664A9239DCB5A3344AE6A27A6D924234AE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_animationFrameRate()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Tilemaps.Tilemap::set_animationFrameRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_animationFrameRate_m38571B9C6F0E7ED975531118CA4240730C44F55F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, float ___value0, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_set_animationFrameRate_m38571B9C6F0E7ED975531118CA4240730C44F55F_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, float);
	static Tilemap_set_animationFrameRate_m38571B9C6F0E7ED975531118CA4240730C44F55F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_set_animationFrameRate_m38571B9C6F0E7ED975531118CA4240730C44F55F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::set_animationFrameRate(System.Single)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Color UnityEngine.Tilemaps.Tilemap::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Tilemap_get_color_mCA6C50E1BFAD7110551D2A261C2A0508CBDA7B93 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Tilemap_get_color_Injected_m289F63DA71B34AAE6826E4D35A2164097C4813E6(__this, (&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_color_m27BC001757EF2950802916FAAF2BE86BEFEBF577 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		Tilemap_set_color_Injected_m3301BC28A921760D04B61597AFF6E6022591F74F(__this, (&___value0), NULL);
		return;
	}
}
// UnityEngine.Vector3Int UnityEngine.Tilemaps.Tilemap::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Tilemap_get_origin_mB5E10582CFAA76144BB44DECAADB84E904D02E55 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Tilemap_get_origin_Injected_m151021A1FFF979A4AC9CC2C33CC34AB60CA11ADB(__this, (&V_0), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::set_origin(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_origin_mA02F4D6E5E74AC5AC9026F9C044A8D581345560A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___value0, const RuntimeMethod* method) 
{
	{
		Tilemap_set_origin_Injected_m719AD06C0133BEFC33997AC1D1524A57B1BFFBFC(__this, (&___value0), NULL);
		return;
	}
}
// UnityEngine.Vector3Int UnityEngine.Tilemaps.Tilemap::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 Tilemap_get_size_m8B9F0C2CC3CD37626AE921047DA5DC239B3F00EA (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Tilemap_get_size_Injected_m493367797FDFDAA59CC626261CE2F3D310BD3B17(__this, (&V_0), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::set_size(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_size_m83996A5DFE30566272FD3D29E17944510A61F7C6 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___value0, const RuntimeMethod* method) 
{
	{
		Tilemap_set_size_Injected_mB517504AC10D24A29A73E001C6845078D537AB84(__this, (&___value0), NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Tilemaps.Tilemap::get_tileAnchor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Tilemap_get_tileAnchor_mD3C7F2A024DC43019CEB93682307ED41EC3329E4 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Tilemap_get_tileAnchor_Injected_mDE5386464C63ACB22779CD1C0B6D78EF00D19ADE(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::set_tileAnchor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_tileAnchor_m0B89DD209FCB7B2B47C3B434E6D73BFF77A3D817 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		Tilemap_set_tileAnchor_Injected_m964D77CC892A3EAEBA530B9E478B8347056A2239(__this, (&___value0), NULL);
		return;
	}
}
// UnityEngine.Tilemaps.Tilemap/Orientation UnityEngine.Tilemaps.Tilemap::get_orientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_get_orientation_m711F644B1523FA2D94AE0069C949C82C0579DA17 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_get_orientation_m711F644B1523FA2D94AE0069C949C82C0579DA17_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*);
	static Tilemap_get_orientation_m711F644B1523FA2D94AE0069C949C82C0579DA17_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_orientation_m711F644B1523FA2D94AE0069C949C82C0579DA17_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_orientation()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Tilemaps.Tilemap::set_orientation(UnityEngine.Tilemaps.Tilemap/Orientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_orientation_m77F1E6BA44321F1B2607F24028BB8A99D939FD7C (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_set_orientation_m77F1E6BA44321F1B2607F24028BB8A99D939FD7C_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, int32_t);
	static Tilemap_set_orientation_m77F1E6BA44321F1B2607F24028BB8A99D939FD7C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_set_orientation_m77F1E6BA44321F1B2607F24028BB8A99D939FD7C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::set_orientation(UnityEngine.Tilemaps.Tilemap/Orientation)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tilemap::get_orientationMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Tilemap_get_orientationMatrix_mF63DF1E4FC7E4B7DE10CE67DFDBB130262784F24 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Tilemap_get_orientationMatrix_Injected_mBF67A03412A164065694FCE3B0A7A53627191128(__this, (&V_0), NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::set_orientationMatrix(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_orientationMatrix_m92B5E5D5135DFFAAAE61EFC7FA72934B1FA33D47 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) 
{
	{
		Tilemap_set_orientationMatrix_Injected_mDBB95DE3F3D36296AC7985C5C8131A71E08A1A32(__this, (&___value0), NULL);
		return;
	}
}
// UnityEngine.Object UnityEngine.Tilemaps.Tilemap::GetTileAsset(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Tilemap_GetTileAsset_m3B9C96C2E2488141C4F6EBD52C6D807C801C6922 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Tilemap_GetTileAsset_Injected_m541A1F618DB6621D2ADCD4247D5127DEDDFA3B30(__this, (&___position0), NULL);
		return L_0;
	}
}
// UnityEngine.Tilemaps.TileBase UnityEngine.Tilemaps.Tilemap::GetTile(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* Tilemap_GetTile_m8500FBFF853C9E813810929BD29D7A866B516225 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_0 = NULL;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___position0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1;
		L_1 = Tilemap_GetTileAsset_m3B9C96C2E2488141C4F6EBD52C6D807C801C6922(__this, L_0, NULL);
		V_0 = ((TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*)IsInstClass((RuntimeObject*)L_1, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var));
		goto IL_0010;
	}

IL_0010:
	{
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Object[] UnityEngine.Tilemaps.Tilemap::GetTileAssetsBlock(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Tilemap_GetTileAssetsBlock_m28BAE62DD83EFD00528A150B7728880DACAC0026 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___blockDimensions1, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_0;
		L_0 = Tilemap_GetTileAssetsBlock_Injected_m2CBEC1BB224C47AEB888F4C9FA39E64C73430BEE(__this, (&___position0), (&___blockDimensions1), NULL);
		return L_0;
	}
}
// UnityEngine.Tilemaps.TileBase[] UnityEngine.Tilemaps.Tilemap::GetTilesBlock(UnityEngine.BoundsInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* Tilemap_GetTilesBlock_mC108BEC2990B85024511A1B531D534843DEC2052 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___bounds0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_0 = NULL;
	TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* V_4 = NULL;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0;
		L_0 = BoundsInt_get_min_m68D854200F7ED4AED677ECC53F26AA0834A715AE((&___bounds0), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1;
		L_1 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C((&___bounds0), NULL);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2;
		L_2 = Tilemap_GetTileAssetsBlock_m28BAE62DD83EFD00528A150B7728880DACAC0026(__this, L_0, L_1, NULL);
		V_0 = L_2;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_3 = V_0;
		NullCheck(L_3);
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_4 = (TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7*)(TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7*)SZArrayNew(TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		V_1 = L_4;
		V_2 = 0;
		goto IL_0034;
	}

IL_0023:
	{
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_5 = V_1;
		int32_t L_6 = V_2;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, ((TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*)CastclassClass((RuntimeObject*)L_10, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var)));
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*)((TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*)CastclassClass((RuntimeObject*)L_10, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var)));
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0034:
	{
		int32_t L_12 = V_2;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_13 = V_0;
		NullCheck(L_13);
		V_3 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))? 1 : 0);
		bool L_14 = V_3;
		if (L_14)
		{
			goto IL_0023;
		}
	}
	{
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_15 = V_1;
		V_4 = L_15;
		goto IL_0043;
	}

IL_0043:
	{
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_16 = V_4;
		return L_16;
	}
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetTileAssetsBlockNonAlloc(UnityEngine.Vector3Int,UnityEngine.Vector3Int,UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAssetsBlockNonAlloc_m2BAA311398DE9C0B1590D662482FF292931B575F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___startPosition0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___endPosition1, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___tiles2, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_0 = ___tiles2;
		int32_t L_1;
		L_1 = Tilemap_GetTileAssetsBlockNonAlloc_Injected_mA924FF04A2AE7A3AD7476DEB33A1A6D85BFC91F9(__this, (&___startPosition0), (&___endPosition1), L_0, NULL);
		return L_1;
	}
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetTilesBlockNonAlloc(UnityEngine.BoundsInt,UnityEngine.Tilemaps.TileBase[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTilesBlockNonAlloc_m07991C1F81371CA6D8451A26CC426316F37DB279 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___bounds0, TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* ___tiles1, const RuntimeMethod* method) 
{
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0;
		L_0 = BoundsInt_get_min_m68D854200F7ED4AED677ECC53F26AA0834A715AE((&___bounds0), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1;
		L_1 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C((&___bounds0), NULL);
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_2 = ___tiles1;
		V_0 = (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)L_2;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_3 = V_0;
		int32_t L_4;
		L_4 = Tilemap_GetTileAssetsBlockNonAlloc_m2BAA311398DE9C0B1590D662482FF292931B575F(__this, L_0, L_1, L_3, NULL);
		V_1 = L_4;
		goto IL_001b;
	}

IL_001b:
	{
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetTilesRangeCount(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTilesRangeCount_m6FE6DDC849E6040A3F2FF6A8361440071C1432DF (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___startPosition0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___endPosition1, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Tilemap_GetTilesRangeCount_Injected_m72E6122991422754F201528F8CD46273FD42FA11(__this, (&___startPosition0), (&___endPosition1), NULL);
		return L_0;
	}
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetTileAssetsRangeNonAlloc(UnityEngine.Vector3Int,UnityEngine.Vector3Int,UnityEngine.Vector3Int[],UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAssetsRangeNonAlloc_mA42F628851793097696368EEA780D0240112D3DE (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___startPosition0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___endPosition1, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___positions2, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___tiles3, const RuntimeMethod* method) 
{
	{
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_0 = ___positions2;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_1 = ___tiles3;
		int32_t L_2;
		L_2 = Tilemap_GetTileAssetsRangeNonAlloc_Injected_mA7E8C7D274060ECB4FB03EF48E4E550FD71E2CD3(__this, (&___startPosition0), (&___endPosition1), L_0, L_1, NULL);
		return L_2;
	}
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetTilesRangeNonAlloc(UnityEngine.Vector3Int,UnityEngine.Vector3Int,UnityEngine.Vector3Int[],UnityEngine.Tilemaps.TileBase[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTilesRangeNonAlloc_mB8576F4124BA4C95D37A1670F70DAD3ED344F52F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___startPosition0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___endPosition1, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___positions2, TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* ___tiles3, const RuntimeMethod* method) 
{
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___startPosition0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___endPosition1;
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_2 = ___positions2;
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_3 = ___tiles3;
		V_0 = (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)L_3;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_4 = V_0;
		int32_t L_5;
		L_5 = Tilemap_GetTileAssetsRangeNonAlloc_mA42F628851793097696368EEA780D0240112D3DE(__this, L_0, L_1, L_2, L_4, NULL);
		V_1 = L_5;
		goto IL_0011;
	}

IL_0011:
	{
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetTileAsset(UnityEngine.Vector3Int,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileAsset_m88D70B08B3D291F99EB34F01136C2D4EEBE45D4B (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___tile1, const RuntimeMethod* method) 
{
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___tile1;
		Tilemap_SetTileAsset_Injected_m45031F05D325CDEA542B7B64AAD9893B2FFDA3CA(__this, (&___position0), L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.TileBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTile_m880BD0CC6B69A4B15495C4FBD2CBEA50D1BE23BA (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___tile1, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___position0;
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_1 = ___tile1;
		Tilemap_SetTileAsset_m88D70B08B3D291F99EB34F01136C2D4EEBE45D4B(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetTileAssets(UnityEngine.Vector3Int[],UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileAssets_m80E6341D44AE4E50942B6A4A8E66CC45F8BEDAD5 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___positionArray0, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___tileArray1, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetTileAssets_m80E6341D44AE4E50942B6A4A8E66CC45F8BEDAD5_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E*, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*);
	static Tilemap_SetTileAssets_m80E6341D44AE4E50942B6A4A8E66CC45F8BEDAD5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetTileAssets_m80E6341D44AE4E50942B6A4A8E66CC45F8BEDAD5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetTileAssets(UnityEngine.Vector3Int[],UnityEngine.Object[])");
	_il2cpp_icall_func(__this, ___positionArray0, ___tileArray1);
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetTiles(UnityEngine.Vector3Int[],UnityEngine.Tilemaps.TileBase[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTiles_m640756E2253F1E6B5351B686862F6867D351C714 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___positionArray0, TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* ___tileArray1, const RuntimeMethod* method) 
{
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_0 = NULL;
	{
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_0 = ___positionArray0;
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_1 = ___tileArray1;
		V_0 = (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)L_1;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2 = V_0;
		Tilemap_SetTileAssets_m80E6341D44AE4E50942B6A4A8E66CC45F8BEDAD5(__this, L_0, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::INTERNAL_CALL_SetTileAssetsBlock(UnityEngine.Vector3Int,UnityEngine.Vector3Int,UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_INTERNAL_CALL_SetTileAssetsBlock_mD20C1320B3C36E2A5F79BFF9A6B9EAABF3AF5437 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___blockDimensions1, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___tileArray2, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_0 = ___tileArray2;
		Tilemap_INTERNAL_CALL_SetTileAssetsBlock_Injected_mEE997E9C8EE9C12354F05C969389E956638AC091(__this, (&___position0), (&___blockDimensions1), L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetTilesBlock(UnityEngine.BoundsInt,UnityEngine.Tilemaps.TileBase[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTilesBlock_m5BCE73C279E736DC854CB5D5240933605F5C7FE0 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___position0, TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* ___tileArray1, const RuntimeMethod* method) 
{
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_0 = NULL;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0;
		L_0 = BoundsInt_get_min_m68D854200F7ED4AED677ECC53F26AA0834A715AE((&___position0), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1;
		L_1 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C((&___position0), NULL);
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_2 = ___tileArray1;
		V_0 = (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)L_2;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_3 = V_0;
		Tilemap_INTERNAL_CALL_SetTileAssetsBlock_mD20C1320B3C36E2A5F79BFF9A6B9EAABF3AF5437(__this, L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetTile(UnityEngine.Tilemaps.TileChangeData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTile_mE616C36D859B495BED0154C448FFAE16E5D2BE5D (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E ___tileChangeData0, bool ___ignoreLockFlags1, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___ignoreLockFlags1;
		Tilemap_SetTile_Injected_m898AA464C83D0CFDC77523C98C265F34D728DD19(__this, (&___tileChangeData0), L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetTiles(UnityEngine.Tilemaps.TileChangeData[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTiles_m4924C2A405E6EE00FA5D57E4EFDBA6DA0E291C80 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, TileChangeDataU5BU5D_t5DE74D19BDE89021FB95C861E05CBDE852AED8BD* ___tileChangeDataArray0, bool ___ignoreLockFlags1, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetTiles_m4924C2A405E6EE00FA5D57E4EFDBA6DA0E291C80_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, TileChangeDataU5BU5D_t5DE74D19BDE89021FB95C861E05CBDE852AED8BD*, bool);
	static Tilemap_SetTiles_m4924C2A405E6EE00FA5D57E4EFDBA6DA0E291C80_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetTiles_m4924C2A405E6EE00FA5D57E4EFDBA6DA0E291C80_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetTiles(UnityEngine.Tilemaps.TileChangeData[],System.Boolean)");
	_il2cpp_icall_func(__this, ___tileChangeDataArray0, ___ignoreLockFlags1);
}
// System.Boolean UnityEngine.Tilemaps.Tilemap::HasTile(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_HasTile_mC868AB1BEA16A2C686BF5CC3C3267780791804F6 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___position0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1;
		L_1 = Tilemap_GetTileAsset_m3B9C96C2E2488141C4F6EBD52C6D807C801C6922(__this, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_2;
		goto IL_0011;
	}

IL_0011:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTile_mEF4F94212FD9B311431DFFAFE092A4A6EBA580DF (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	{
		Tilemap_RefreshTile_Injected_m99F1EC3F340590E282B01EC7C96F1F8D1BA03A69(__this, (&___position0), NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::RefreshTilesNative(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTilesNative_mD73E77DFD7C808A3665CA8389F728CBC08A52232 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, void* ___positions0, int32_t ___count1, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_RefreshTilesNative_mD73E77DFD7C808A3665CA8389F728CBC08A52232_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, void*, int32_t);
	static Tilemap_RefreshTilesNative_mD73E77DFD7C808A3665CA8389F728CBC08A52232_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_RefreshTilesNative_mD73E77DFD7C808A3665CA8389F728CBC08A52232_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::RefreshTilesNative(System.Void*,System.Int32)");
	_il2cpp_icall_func(__this, ___positions0, ___count1);
}
// System.Void UnityEngine.Tilemaps.Tilemap::RefreshAllTiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshAllTiles_mA64BB2AFE77727C6358ACDA467A7B082A0034A9E (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_RefreshAllTiles_mA64BB2AFE77727C6358ACDA467A7B082A0034A9E_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*);
	static Tilemap_RefreshAllTiles_mA64BB2AFE77727C6358ACDA467A7B082A0034A9E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_RefreshAllTiles_mA64BB2AFE77727C6358ACDA467A7B082A0034A9E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::RefreshAllTiles()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Tilemaps.Tilemap::SwapTileAsset(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SwapTileAsset_m8185544F41428C07809B2F7DCFC4DD808083C287 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___changeTile0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___newTile1, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SwapTileAsset_m8185544F41428C07809B2F7DCFC4DD808083C287_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*);
	static Tilemap_SwapTileAsset_m8185544F41428C07809B2F7DCFC4DD808083C287_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SwapTileAsset_m8185544F41428C07809B2F7DCFC4DD808083C287_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SwapTileAsset(UnityEngine.Object,UnityEngine.Object)");
	_il2cpp_icall_func(__this, ___changeTile0, ___newTile1);
}
// System.Void UnityEngine.Tilemaps.Tilemap::SwapTile(UnityEngine.Tilemaps.TileBase,UnityEngine.Tilemaps.TileBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SwapTile_mF22407A415D515F4FF044D6562C56F76EC14A1F2 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___changeTile0, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___newTile1, const RuntimeMethod* method) 
{
	{
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_0 = ___changeTile0;
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_1 = ___newTile1;
		Tilemap_SwapTileAsset_m8185544F41428C07809B2F7DCFC4DD808083C287(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Tilemaps.Tilemap::ContainsTileAsset(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_ContainsTileAsset_m14064994385EE754CE7CCF34CE8FB8E5AB299282 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___tileAsset0, const RuntimeMethod* method) 
{
	typedef bool (*Tilemap_ContainsTileAsset_m14064994385EE754CE7CCF34CE8FB8E5AB299282_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*);
	static Tilemap_ContainsTileAsset_m14064994385EE754CE7CCF34CE8FB8E5AB299282_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_ContainsTileAsset_m14064994385EE754CE7CCF34CE8FB8E5AB299282_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::ContainsTileAsset(UnityEngine.Object)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___tileAsset0);
	return icallRetVal;
}
// System.Boolean UnityEngine.Tilemaps.Tilemap::ContainsTile(UnityEngine.Tilemaps.TileBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Tilemap_ContainsTile_mF736DC44D65279BFF1A13A1B3D0860E0FF27B65D (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___tileAsset0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_0 = ___tileAsset0;
		bool L_1;
		L_1 = Tilemap_ContainsTileAsset_m14064994385EE754CE7CCF34CE8FB8E5AB299282(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetUsedTilesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetUsedTilesCount_mF75EB807D49AEF1AA1748984D238B55946A4DD4A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetUsedTilesCount_mF75EB807D49AEF1AA1748984D238B55946A4DD4A_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*);
	static Tilemap_GetUsedTilesCount_mF75EB807D49AEF1AA1748984D238B55946A4DD4A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetUsedTilesCount_mF75EB807D49AEF1AA1748984D238B55946A4DD4A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetUsedTilesCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetUsedSpritesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetUsedSpritesCount_m387E8F4A641C83F8E9B5692FD5425CAB654DCC45 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetUsedSpritesCount_m387E8F4A641C83F8E9B5692FD5425CAB654DCC45_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*);
	static Tilemap_GetUsedSpritesCount_m387E8F4A641C83F8E9B5692FD5425CAB654DCC45_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetUsedSpritesCount_m387E8F4A641C83F8E9B5692FD5425CAB654DCC45_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetUsedSpritesCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetUsedTilesNonAlloc(UnityEngine.Tilemaps.TileBase[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetUsedTilesNonAlloc_m4FEDE5F12A7A1333A4A2082637CFEC76B7903E14 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* ___usedTiles0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		TileBaseU5BU5D_t4BA5139AFA510FA0FDD6B5F2954ABB77EBA12FB7* L_0 = ___usedTiles0;
		V_0 = (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)L_0;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_1 = V_0;
		int32_t L_2;
		L_2 = Tilemap_Internal_GetUsedTilesNonAlloc_m79F745C755C26362833B0F0CC8C5846547EF5C4F(__this, L_1, NULL);
		V_1 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetUsedSpritesNonAlloc(UnityEngine.Sprite[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetUsedSpritesNonAlloc_m1E4C3E0C152EFA240A79EC1DCD1CF62502951582 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___usedSprites0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_0 = ___usedSprites0;
		V_0 = (ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*)L_0;
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_1 = V_0;
		int32_t L_2;
		L_2 = Tilemap_Internal_GetUsedSpritesNonAlloc_mCDD01ECE51A344C6224D34F199A9F553AF086784(__this, L_1, NULL);
		V_1 = L_2;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::Internal_GetUsedTilesNonAlloc(UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_Internal_GetUsedTilesNonAlloc_m79F745C755C26362833B0F0CC8C5846547EF5C4F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___usedTiles0, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_Internal_GetUsedTilesNonAlloc_m79F745C755C26362833B0F0CC8C5846547EF5C4F_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*);
	static Tilemap_Internal_GetUsedTilesNonAlloc_m79F745C755C26362833B0F0CC8C5846547EF5C4F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_Internal_GetUsedTilesNonAlloc_m79F745C755C26362833B0F0CC8C5846547EF5C4F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::Internal_GetUsedTilesNonAlloc(UnityEngine.Object[])");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___usedTiles0);
	return icallRetVal;
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::Internal_GetUsedSpritesNonAlloc(UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_Internal_GetUsedSpritesNonAlloc_mCDD01ECE51A344C6224D34F199A9F553AF086784 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___usedSprites0, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_Internal_GetUsedSpritesNonAlloc_mCDD01ECE51A344C6224D34F199A9F553AF086784_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*);
	static Tilemap_Internal_GetUsedSpritesNonAlloc_mCDD01ECE51A344C6224D34F199A9F553AF086784_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_Internal_GetUsedSpritesNonAlloc_mCDD01ECE51A344C6224D34F199A9F553AF086784_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::Internal_GetUsedSpritesNonAlloc(UnityEngine.Object[])");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___usedSprites0);
	return icallRetVal;
}
// UnityEngine.Sprite UnityEngine.Tilemaps.Tilemap::GetSprite(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Tilemap_GetSprite_mF670E851C6BF5A3173758A2723D10F7E01000AD4 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0;
		L_0 = Tilemap_GetSprite_Injected_m1AC87EB502B50969FD98369D52D86AD559CA979D(__this, (&___position0), NULL);
		return L_0;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tilemap::GetTransformMatrix(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Tilemap_GetTransformMatrix_mD2D0E0922FF1AB8478FB8ECEE0CD219FB4801D45 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Tilemap_GetTransformMatrix_Injected_mC76882554060CD7648515C690BEFA2E9940B460B(__this, (&___position0), (&V_0), NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetTransformMatrix(UnityEngine.Vector3Int,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTransformMatrix_mDE5369FA4AE0968EE5911677081D57F253890780 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___transform1, const RuntimeMethod* method) 
{
	{
		Tilemap_SetTransformMatrix_Injected_m88340E47F9B135ECFBEB7975CCEDD80CC1633E10(__this, (&___position0), (&___transform1), NULL);
		return;
	}
}
// UnityEngine.Color UnityEngine.Tilemaps.Tilemap::GetColor(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Tilemap_GetColor_m988A369F124E34CB104F51F4F505C989097FFB22 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Tilemap_GetColor_Injected_m5FD5600D223DFA45F0CEE26E610D4B67E7DCB208(__this, (&___position0), (&V_0), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetColor(UnityEngine.Vector3Int,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetColor_mAD8F9AF56705F031E26DA66C337DBA265C3F664C (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color1, const RuntimeMethod* method) 
{
	{
		Tilemap_SetColor_Injected_m450C967EEEFE1174056E7EC2A15516F8E27A69AD(__this, (&___position0), (&___color1), NULL);
		return;
	}
}
// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tilemap::GetTileFlags(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileFlags_mE872A14709B173A779297DBD8BA9CA090C8B6670 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Tilemap_GetTileFlags_Injected_mA2A6713301B3AB8CD4764CCFC81BAAC0AB466B0F(__this, (&___position0), NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetTileFlags(UnityEngine.Vector3Int,UnityEngine.Tilemaps.TileFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileFlags_m7BD0C9773D97AE412E082DE2B1E1254A5C760CCD (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, int32_t ___flags1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___flags1;
		Tilemap_SetTileFlags_Injected_m83119EED93BC5F0D99DC4CD9C55D8229C5666C0F(__this, (&___position0), L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::AddTileFlags(UnityEngine.Vector3Int,UnityEngine.Tilemaps.TileFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_AddTileFlags_m5E441CD29076AE8DFD96124C163304B13B186F6D (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, int32_t ___flags1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___flags1;
		Tilemap_AddTileFlags_Injected_m64CCA40E2B0F79874B51530604054B79BDAB1B00(__this, (&___position0), L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::RemoveTileFlags(UnityEngine.Vector3Int,UnityEngine.Tilemaps.TileFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RemoveTileFlags_m26D2614D61FC658D32B482BD9434CC3A3400AA1A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, int32_t ___flags1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___flags1;
		Tilemap_RemoveTileFlags_Injected_m8D6A05B5BC88CE2C5201C6EDF7500B3515E52412(__this, (&___position0), L_0, NULL);
		return;
	}
}
// UnityEngine.GameObject UnityEngine.Tilemaps.Tilemap::GetInstantiatedObject(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Tilemap_GetInstantiatedObject_m2B87C2D1D2C2A34B5A9199FFA9D8B551B2F481BE (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Tilemap_GetInstantiatedObject_Injected_m6C5E99B111B446D484D0C218655B7A73997F6B14(__this, (&___position0), NULL);
		return L_0;
	}
}
// UnityEngine.GameObject UnityEngine.Tilemaps.Tilemap::GetObjectToInstantiate(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Tilemap_GetObjectToInstantiate_mFC2C5CEADF9702FA5859F85BD7CB897A538BCAA7 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Tilemap_GetObjectToInstantiate_Injected_m36912C90869C9A9DF7054EC0E8FCC6987E49E0B9(__this, (&___position0), NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetColliderType(UnityEngine.Vector3Int,UnityEngine.Tilemaps.Tile/ColliderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetColliderType_m7E4FAC8E760652936672988F7296033F7EE99175 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, int32_t ___colliderType1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___colliderType1;
		Tilemap_SetColliderType_Injected_m566B4B3BCF44CB5A30E2798BB5761DFA71548838(__this, (&___position0), L_0, NULL);
		return;
	}
}
// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tilemap::GetColliderType(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetColliderType_mFA84D9B33D481FBDFB0FEED69E75A059CF253360 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Tilemap_GetColliderType_Injected_mC20B1CB561B1230391EE779C1B772DE672D0112B(__this, (&___position0), NULL);
		return L_0;
	}
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetAnimationFrameCount(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetAnimationFrameCount_m44F67E33E32B280FCC06D4A60956019D08AC999E (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Tilemap_GetAnimationFrameCount_Injected_m35D7E7AA8610A049D4CC20C5B0DD4FEE296A591A(__this, (&___position0), NULL);
		return L_0;
	}
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetAnimationFrame(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetAnimationFrame_m5673F18913E65476A5A5649C3F87D4A7E99D86E8 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Tilemap_GetAnimationFrame_Injected_m7ED5754B942DBB734C8A29E7FD2DFAD611333A8F(__this, (&___position0), NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetAnimationFrame(UnityEngine.Vector3Int,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetAnimationFrame_mB2FE463E151972FB400B38E13115E70D356C13F9 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, int32_t ___frame1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___frame1;
		Tilemap_SetAnimationFrame_Injected_mDB66AD750CA91C833AA9BC4B6AF8C007D9406862(__this, (&___position0), L_0, NULL);
		return;
	}
}
// System.Single UnityEngine.Tilemaps.Tilemap::GetAnimationTime(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tilemap_GetAnimationTime_mB1BDC7AB2397D90B03D323C3569D400F894CE4DB (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Tilemap_GetAnimationTime_Injected_m99ED64409B69D42969B5B2A425F8DCD4C85DA25A(__this, (&___position0), NULL);
		return L_0;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetAnimationTime(UnityEngine.Vector3Int,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetAnimationTime_m184310DDFC5FEB60D42C4D3CEA786A406CD60D4A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, float ___time1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___time1;
		Tilemap_SetAnimationTime_Injected_mB9A56E73F9820BBFB220E6B896DBC3FBD897EF77(__this, (&___position0), L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::FloodFill(UnityEngine.Vector3Int,UnityEngine.Tilemaps.TileBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_FloodFill_m946D30945658B425C405D8A84DB275B96249FF6B (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___tile1, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___position0;
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_1 = ___tile1;
		Tilemap_FloodFillTileAsset_mE662F8026F3FA9E054D58640727D57417CD33A9F(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::FloodFillTileAsset(UnityEngine.Vector3Int,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_FloodFillTileAsset_mE662F8026F3FA9E054D58640727D57417CD33A9F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___tile1, const RuntimeMethod* method) 
{
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___tile1;
		Tilemap_FloodFillTileAsset_Injected_mE576684EA3396DA63CDD2A9046FECA35631F12B2(__this, (&___position0), L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::BoxFill(UnityEngine.Vector3Int,UnityEngine.Tilemaps.TileBase,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_BoxFill_mBBCC977A18778B3A8C670FABDB81E488D07D829C (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* ___tile1, int32_t ___startX2, int32_t ___startY3, int32_t ___endX4, int32_t ___endY5, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___position0;
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_1 = ___tile1;
		int32_t L_2 = ___startX2;
		int32_t L_3 = ___startY3;
		int32_t L_4 = ___endX4;
		int32_t L_5 = ___endY5;
		Tilemap_BoxFillTileAsset_mE880ED900FEA8679D2FAB08810A660402EF5A640(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::BoxFillTileAsset(UnityEngine.Vector3Int,UnityEngine.Object,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_BoxFillTileAsset_mE880ED900FEA8679D2FAB08810A660402EF5A640 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___tile1, int32_t ___startX2, int32_t ___startY3, int32_t ___endX4, int32_t ___endY5, const RuntimeMethod* method) 
{
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___tile1;
		int32_t L_1 = ___startX2;
		int32_t L_2 = ___startY3;
		int32_t L_3 = ___endX4;
		int32_t L_4 = ___endY5;
		Tilemap_BoxFillTileAsset_Injected_mAC37DD9FAF6B478739B95A55B82D601B29188965(__this, (&___position0), L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::InsertCells(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_InsertCells_mC8B2BEA451DF07D3C024AA9E6E524A4707F6A2C8 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___insertCells1, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___position0;
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___insertCells1), NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___insertCells1), NULL);
		int32_t L_3;
		L_3 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___insertCells1), NULL);
		Tilemap_InsertCells_mD674C03ECC2F720959DD5140FA70D610355274F3(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::InsertCells(UnityEngine.Vector3Int,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_InsertCells_mD674C03ECC2F720959DD5140FA70D610355274F3 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, int32_t ___numColumns1, int32_t ___numRows2, int32_t ___numLayers3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___numColumns1;
		int32_t L_1 = ___numRows2;
		int32_t L_2 = ___numLayers3;
		Tilemap_InsertCells_Injected_m3C52681434780B1E732451BD8DC0CB313E8B4144(__this, (&___position0), L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::DeleteCells(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_DeleteCells_m59A5953C64C3870D3829152BD1B7A4F03FDC73F0 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___deleteCells1, const RuntimeMethod* method) 
{
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___position0;
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___deleteCells1), NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___deleteCells1), NULL);
		int32_t L_3;
		L_3 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___deleteCells1), NULL);
		Tilemap_DeleteCells_mF179BB21D0E8F5977ABF28FA370FB219CF2EAD6F(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::DeleteCells(UnityEngine.Vector3Int,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_DeleteCells_mF179BB21D0E8F5977ABF28FA370FB219CF2EAD6F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, int32_t ___numColumns1, int32_t ___numRows2, int32_t ___numLayers3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___numColumns1;
		int32_t L_1 = ___numRows2;
		int32_t L_2 = ___numLayers3;
		Tilemap_DeleteCells_Injected_m2AFB877EBE83B5C62B71D6615D12DE9E7AA0A19E(__this, (&___position0), L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::ClearAllTiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_ClearAllTiles_m440B00506358103B65F7A2FE3B3AC44F621FE5B6 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_ClearAllTiles_m440B00506358103B65F7A2FE3B3AC44F621FE5B6_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*);
	static Tilemap_ClearAllTiles_m440B00506358103B65F7A2FE3B3AC44F621FE5B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_ClearAllTiles_m440B00506358103B65F7A2FE3B3AC44F621FE5B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::ClearAllTiles()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Tilemaps.Tilemap::ResizeBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_ResizeBounds_m1D31DCE27D7A86B496D4025323210BDC90058C48 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_ResizeBounds_m1D31DCE27D7A86B496D4025323210BDC90058C48_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*);
	static Tilemap_ResizeBounds_m1D31DCE27D7A86B496D4025323210BDC90058C48_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_ResizeBounds_m1D31DCE27D7A86B496D4025323210BDC90058C48_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::ResizeBounds()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Tilemaps.Tilemap::CompressBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_CompressBounds_m18C02BCE7B7EFF644D5B7B7EC8E6E0CC7B46E531 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_CompressBounds_m18C02BCE7B7EFF644D5B7B7EC8E6E0CC7B46E531_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*);
	static Tilemap_CompressBounds_m18C02BCE7B7EFF644D5B7B7EC8E6E0CC7B46E531_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_CompressBounds_m18C02BCE7B7EFF644D5B7B7EC8E6E0CC7B46E531_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::CompressBounds()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Tilemaps.Tilemap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap__ctor_m1D0F3884F418FC0D39DE07F85E356B9A733F138C (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, const RuntimeMethod* method) 
{
	{
		GridLayout__ctor_m9266D2F9A58091E4214E9E5B69C0E5350F344828(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tilemap::get_localBounds_Injected(UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_localBounds_Injected_m4CAD2C2B9B4B9AEE6229C25DDFA54425B4AFEA9A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_get_localBounds_Injected_m4CAD2C2B9B4B9AEE6229C25DDFA54425B4AFEA9A_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*);
	static Tilemap_get_localBounds_Injected_m4CAD2C2B9B4B9AEE6229C25DDFA54425B4AFEA9A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_localBounds_Injected_m4CAD2C2B9B4B9AEE6229C25DDFA54425B4AFEA9A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_localBounds_Injected(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Tilemaps.Tilemap::get_localFrameBounds_Injected(UnityEngine.Bounds&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_localFrameBounds_Injected_m5F4E34165C0EA88A26796EE6242729969D5DBB5C (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_get_localFrameBounds_Injected_m5F4E34165C0EA88A26796EE6242729969D5DBB5C_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*);
	static Tilemap_get_localFrameBounds_Injected_m5F4E34165C0EA88A26796EE6242729969D5DBB5C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_localFrameBounds_Injected_m5F4E34165C0EA88A26796EE6242729969D5DBB5C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_localFrameBounds_Injected(UnityEngine.Bounds&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Tilemaps.Tilemap::get_color_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_color_Injected_m289F63DA71B34AAE6826E4D35A2164097C4813E6 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_get_color_Injected_m289F63DA71B34AAE6826E4D35A2164097C4813E6_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static Tilemap_get_color_Injected_m289F63DA71B34AAE6826E4D35A2164097C4813E6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_color_Injected_m289F63DA71B34AAE6826E4D35A2164097C4813E6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_color_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Tilemaps.Tilemap::set_color_Injected(UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_color_Injected_m3301BC28A921760D04B61597AFF6E6022591F74F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___value0, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_set_color_Injected_m3301BC28A921760D04B61597AFF6E6022591F74F_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static Tilemap_set_color_Injected_m3301BC28A921760D04B61597AFF6E6022591F74F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_set_color_Injected_m3301BC28A921760D04B61597AFF6E6022591F74F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::set_color_Injected(UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Tilemaps.Tilemap::get_origin_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_origin_Injected_m151021A1FFF979A4AC9CC2C33CC34AB60CA11ADB (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_get_origin_Injected_m151021A1FFF979A4AC9CC2C33CC34AB60CA11ADB_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_get_origin_Injected_m151021A1FFF979A4AC9CC2C33CC34AB60CA11ADB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_origin_Injected_m151021A1FFF979A4AC9CC2C33CC34AB60CA11ADB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_origin_Injected(UnityEngine.Vector3Int&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Tilemaps.Tilemap::set_origin_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_origin_Injected_m719AD06C0133BEFC33997AC1D1524A57B1BFFBFC (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___value0, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_set_origin_Injected_m719AD06C0133BEFC33997AC1D1524A57B1BFFBFC_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_set_origin_Injected_m719AD06C0133BEFC33997AC1D1524A57B1BFFBFC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_set_origin_Injected_m719AD06C0133BEFC33997AC1D1524A57B1BFFBFC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::set_origin_Injected(UnityEngine.Vector3Int&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Tilemaps.Tilemap::get_size_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_size_Injected_m493367797FDFDAA59CC626261CE2F3D310BD3B17 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_get_size_Injected_m493367797FDFDAA59CC626261CE2F3D310BD3B17_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_get_size_Injected_m493367797FDFDAA59CC626261CE2F3D310BD3B17_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_size_Injected_m493367797FDFDAA59CC626261CE2F3D310BD3B17_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_size_Injected(UnityEngine.Vector3Int&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Tilemaps.Tilemap::set_size_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_size_Injected_mB517504AC10D24A29A73E001C6845078D537AB84 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___value0, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_set_size_Injected_mB517504AC10D24A29A73E001C6845078D537AB84_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_set_size_Injected_mB517504AC10D24A29A73E001C6845078D537AB84_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_set_size_Injected_mB517504AC10D24A29A73E001C6845078D537AB84_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::set_size_Injected(UnityEngine.Vector3Int&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Tilemaps.Tilemap::get_tileAnchor_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_tileAnchor_Injected_mDE5386464C63ACB22779CD1C0B6D78EF00D19ADE (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_get_tileAnchor_Injected_mDE5386464C63ACB22779CD1C0B6D78EF00D19ADE_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Tilemap_get_tileAnchor_Injected_mDE5386464C63ACB22779CD1C0B6D78EF00D19ADE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_tileAnchor_Injected_mDE5386464C63ACB22779CD1C0B6D78EF00D19ADE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_tileAnchor_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Tilemaps.Tilemap::set_tileAnchor_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_tileAnchor_Injected_m964D77CC892A3EAEBA530B9E478B8347056A2239 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_set_tileAnchor_Injected_m964D77CC892A3EAEBA530B9E478B8347056A2239_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Tilemap_set_tileAnchor_Injected_m964D77CC892A3EAEBA530B9E478B8347056A2239_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_set_tileAnchor_Injected_m964D77CC892A3EAEBA530B9E478B8347056A2239_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::set_tileAnchor_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Tilemaps.Tilemap::get_orientationMatrix_Injected(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_get_orientationMatrix_Injected_mBF67A03412A164065694FCE3B0A7A53627191128 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_get_orientationMatrix_Injected_mBF67A03412A164065694FCE3B0A7A53627191128_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*);
	static Tilemap_get_orientationMatrix_Injected_mBF67A03412A164065694FCE3B0A7A53627191128_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_get_orientationMatrix_Injected_mBF67A03412A164065694FCE3B0A7A53627191128_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::get_orientationMatrix_Injected(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Tilemaps.Tilemap::set_orientationMatrix_Injected(UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_set_orientationMatrix_Injected_mDBB95DE3F3D36296AC7985C5C8131A71E08A1A32 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___value0, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_set_orientationMatrix_Injected_mDBB95DE3F3D36296AC7985C5C8131A71E08A1A32_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*);
	static Tilemap_set_orientationMatrix_Injected_mDBB95DE3F3D36296AC7985C5C8131A71E08A1A32_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_set_orientationMatrix_Injected_mDBB95DE3F3D36296AC7985C5C8131A71E08A1A32_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::set_orientationMatrix_Injected(UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Object UnityEngine.Tilemaps.Tilemap::GetTileAsset_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Tilemap_GetTileAsset_Injected_m541A1F618DB6621D2ADCD4247D5127DEDDFA3B30 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) 
{
	typedef Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* (*Tilemap_GetTileAsset_Injected_m541A1F618DB6621D2ADCD4247D5127DEDDFA3B30_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetTileAsset_Injected_m541A1F618DB6621D2ADCD4247D5127DEDDFA3B30_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetTileAsset_Injected_m541A1F618DB6621D2ADCD4247D5127DEDDFA3B30_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetTileAsset_Injected(UnityEngine.Vector3Int&)");
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* icallRetVal = _il2cpp_icall_func(__this, ___position0);
	return icallRetVal;
}
// UnityEngine.Object[] UnityEngine.Tilemaps.Tilemap::GetTileAssetsBlock_Injected(UnityEngine.Vector3Int&,UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Tilemap_GetTileAssetsBlock_Injected_m2CBEC1BB224C47AEB888F4C9FA39E64C73430BEE (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___blockDimensions1, const RuntimeMethod* method) 
{
	typedef ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* (*Tilemap_GetTileAssetsBlock_Injected_m2CBEC1BB224C47AEB888F4C9FA39E64C73430BEE_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetTileAssetsBlock_Injected_m2CBEC1BB224C47AEB888F4C9FA39E64C73430BEE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetTileAssetsBlock_Injected_m2CBEC1BB224C47AEB888F4C9FA39E64C73430BEE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetTileAssetsBlock_Injected(UnityEngine.Vector3Int&,UnityEngine.Vector3Int&)");
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* icallRetVal = _il2cpp_icall_func(__this, ___position0, ___blockDimensions1);
	return icallRetVal;
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetTileAssetsBlockNonAlloc_Injected(UnityEngine.Vector3Int&,UnityEngine.Vector3Int&,UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAssetsBlockNonAlloc_Injected_mA924FF04A2AE7A3AD7476DEB33A1A6D85BFC91F9 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___startPosition0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___endPosition1, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___tiles2, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetTileAssetsBlockNonAlloc_Injected_mA924FF04A2AE7A3AD7476DEB33A1A6D85BFC91F9_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*);
	static Tilemap_GetTileAssetsBlockNonAlloc_Injected_mA924FF04A2AE7A3AD7476DEB33A1A6D85BFC91F9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetTileAssetsBlockNonAlloc_Injected_mA924FF04A2AE7A3AD7476DEB33A1A6D85BFC91F9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetTileAssetsBlockNonAlloc_Injected(UnityEngine.Vector3Int&,UnityEngine.Vector3Int&,UnityEngine.Object[])");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___startPosition0, ___endPosition1, ___tiles2);
	return icallRetVal;
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetTilesRangeCount_Injected(UnityEngine.Vector3Int&,UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTilesRangeCount_Injected_m72E6122991422754F201528F8CD46273FD42FA11 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___startPosition0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___endPosition1, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetTilesRangeCount_Injected_m72E6122991422754F201528F8CD46273FD42FA11_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetTilesRangeCount_Injected_m72E6122991422754F201528F8CD46273FD42FA11_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetTilesRangeCount_Injected_m72E6122991422754F201528F8CD46273FD42FA11_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetTilesRangeCount_Injected(UnityEngine.Vector3Int&,UnityEngine.Vector3Int&)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___startPosition0, ___endPosition1);
	return icallRetVal;
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetTileAssetsRangeNonAlloc_Injected(UnityEngine.Vector3Int&,UnityEngine.Vector3Int&,UnityEngine.Vector3Int[],UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileAssetsRangeNonAlloc_Injected_mA7E8C7D274060ECB4FB03EF48E4E550FD71E2CD3 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___startPosition0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___endPosition1, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___positions2, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___tiles3, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetTileAssetsRangeNonAlloc_Injected_mA7E8C7D274060ECB4FB03EF48E4E550FD71E2CD3_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E*, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*);
	static Tilemap_GetTileAssetsRangeNonAlloc_Injected_mA7E8C7D274060ECB4FB03EF48E4E550FD71E2CD3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetTileAssetsRangeNonAlloc_Injected_mA7E8C7D274060ECB4FB03EF48E4E550FD71E2CD3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetTileAssetsRangeNonAlloc_Injected(UnityEngine.Vector3Int&,UnityEngine.Vector3Int&,UnityEngine.Vector3Int[],UnityEngine.Object[])");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___startPosition0, ___endPosition1, ___positions2, ___tiles3);
	return icallRetVal;
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetTileAsset_Injected(UnityEngine.Vector3Int&,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileAsset_Injected_m45031F05D325CDEA542B7B64AAD9893B2FFDA3CA (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___tile1, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetTileAsset_Injected_m45031F05D325CDEA542B7B64AAD9893B2FFDA3CA_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*);
	static Tilemap_SetTileAsset_Injected_m45031F05D325CDEA542B7B64AAD9893B2FFDA3CA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetTileAsset_Injected_m45031F05D325CDEA542B7B64AAD9893B2FFDA3CA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetTileAsset_Injected(UnityEngine.Vector3Int&,UnityEngine.Object)");
	_il2cpp_icall_func(__this, ___position0, ___tile1);
}
// System.Void UnityEngine.Tilemaps.Tilemap::INTERNAL_CALL_SetTileAssetsBlock_Injected(UnityEngine.Vector3Int&,UnityEngine.Vector3Int&,UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_INTERNAL_CALL_SetTileAssetsBlock_Injected_mEE997E9C8EE9C12354F05C969389E956638AC091 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___blockDimensions1, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___tileArray2, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_INTERNAL_CALL_SetTileAssetsBlock_Injected_mEE997E9C8EE9C12354F05C969389E956638AC091_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A*);
	static Tilemap_INTERNAL_CALL_SetTileAssetsBlock_Injected_mEE997E9C8EE9C12354F05C969389E956638AC091_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_INTERNAL_CALL_SetTileAssetsBlock_Injected_mEE997E9C8EE9C12354F05C969389E956638AC091_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::INTERNAL_CALL_SetTileAssetsBlock_Injected(UnityEngine.Vector3Int&,UnityEngine.Vector3Int&,UnityEngine.Object[])");
	_il2cpp_icall_func(__this, ___position0, ___blockDimensions1, ___tileArray2);
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetTile_Injected(UnityEngine.Tilemaps.TileChangeData&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTile_Injected_m898AA464C83D0CFDC77523C98C265F34D728DD19 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E* ___tileChangeData0, bool ___ignoreLockFlags1, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetTile_Injected_m898AA464C83D0CFDC77523C98C265F34D728DD19_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, TileChangeData_t6035410A63723928DB7B86A0880351354ADB635E*, bool);
	static Tilemap_SetTile_Injected_m898AA464C83D0CFDC77523C98C265F34D728DD19_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetTile_Injected_m898AA464C83D0CFDC77523C98C265F34D728DD19_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetTile_Injected(UnityEngine.Tilemaps.TileChangeData&,System.Boolean)");
	_il2cpp_icall_func(__this, ___tileChangeData0, ___ignoreLockFlags1);
}
// System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RefreshTile_Injected_m99F1EC3F340590E282B01EC7C96F1F8D1BA03A69 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_RefreshTile_Injected_m99F1EC3F340590E282B01EC7C96F1F8D1BA03A69_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_RefreshTile_Injected_m99F1EC3F340590E282B01EC7C96F1F8D1BA03A69_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_RefreshTile_Injected_m99F1EC3F340590E282B01EC7C96F1F8D1BA03A69_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&)");
	_il2cpp_icall_func(__this, ___position0);
}
// UnityEngine.Sprite UnityEngine.Tilemaps.Tilemap::GetSprite_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Tilemap_GetSprite_Injected_m1AC87EB502B50969FD98369D52D86AD559CA979D (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) 
{
	typedef Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*Tilemap_GetSprite_Injected_m1AC87EB502B50969FD98369D52D86AD559CA979D_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetSprite_Injected_m1AC87EB502B50969FD98369D52D86AD559CA979D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetSprite_Injected_m1AC87EB502B50969FD98369D52D86AD559CA979D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetSprite_Injected(UnityEngine.Vector3Int&)");
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* icallRetVal = _il2cpp_icall_func(__this, ___position0);
	return icallRetVal;
}
// System.Void UnityEngine.Tilemaps.Tilemap::GetTransformMatrix_Injected(UnityEngine.Vector3Int&,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_GetTransformMatrix_Injected_mC76882554060CD7648515C690BEFA2E9940B460B (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_GetTransformMatrix_Injected_mC76882554060CD7648515C690BEFA2E9940B460B_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*);
	static Tilemap_GetTransformMatrix_Injected_mC76882554060CD7648515C690BEFA2E9940B460B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetTransformMatrix_Injected_mC76882554060CD7648515C690BEFA2E9940B460B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetTransformMatrix_Injected(UnityEngine.Vector3Int&,UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___position0, ___ret1);
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetTransformMatrix_Injected(UnityEngine.Vector3Int&,UnityEngine.Matrix4x4&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTransformMatrix_Injected_m88340E47F9B135ECFBEB7975CCEDD80CC1633E10 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___transform1, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetTransformMatrix_Injected_m88340E47F9B135ECFBEB7975CCEDD80CC1633E10_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*);
	static Tilemap_SetTransformMatrix_Injected_m88340E47F9B135ECFBEB7975CCEDD80CC1633E10_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetTransformMatrix_Injected_m88340E47F9B135ECFBEB7975CCEDD80CC1633E10_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetTransformMatrix_Injected(UnityEngine.Vector3Int&,UnityEngine.Matrix4x4&)");
	_il2cpp_icall_func(__this, ___position0, ___transform1);
}
// System.Void UnityEngine.Tilemaps.Tilemap::GetColor_Injected(UnityEngine.Vector3Int&,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_GetColor_Injected_m5FD5600D223DFA45F0CEE26E610D4B67E7DCB208 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___ret1, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_GetColor_Injected_m5FD5600D223DFA45F0CEE26E610D4B67E7DCB208_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static Tilemap_GetColor_Injected_m5FD5600D223DFA45F0CEE26E610D4B67E7DCB208_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetColor_Injected_m5FD5600D223DFA45F0CEE26E610D4B67E7DCB208_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetColor_Injected(UnityEngine.Vector3Int&,UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___position0, ___ret1);
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetColor_Injected(UnityEngine.Vector3Int&,UnityEngine.Color&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetColor_Injected_m450C967EEEFE1174056E7EC2A15516F8E27A69AD (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___color1, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetColor_Injected_m450C967EEEFE1174056E7EC2A15516F8E27A69AD_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*);
	static Tilemap_SetColor_Injected_m450C967EEEFE1174056E7EC2A15516F8E27A69AD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetColor_Injected_m450C967EEEFE1174056E7EC2A15516F8E27A69AD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetColor_Injected(UnityEngine.Vector3Int&,UnityEngine.Color&)");
	_il2cpp_icall_func(__this, ___position0, ___color1);
}
// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tilemap::GetTileFlags_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetTileFlags_Injected_mA2A6713301B3AB8CD4764CCFC81BAAC0AB466B0F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetTileFlags_Injected_mA2A6713301B3AB8CD4764CCFC81BAAC0AB466B0F_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetTileFlags_Injected_mA2A6713301B3AB8CD4764CCFC81BAAC0AB466B0F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetTileFlags_Injected_mA2A6713301B3AB8CD4764CCFC81BAAC0AB466B0F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetTileFlags_Injected(UnityEngine.Vector3Int&)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___position0);
	return icallRetVal;
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetTileFlags_Injected(UnityEngine.Vector3Int&,UnityEngine.Tilemaps.TileFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetTileFlags_Injected_m83119EED93BC5F0D99DC4CD9C55D8229C5666C0F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, int32_t ___flags1, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetTileFlags_Injected_m83119EED93BC5F0D99DC4CD9C55D8229C5666C0F_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t);
	static Tilemap_SetTileFlags_Injected_m83119EED93BC5F0D99DC4CD9C55D8229C5666C0F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetTileFlags_Injected_m83119EED93BC5F0D99DC4CD9C55D8229C5666C0F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetTileFlags_Injected(UnityEngine.Vector3Int&,UnityEngine.Tilemaps.TileFlags)");
	_il2cpp_icall_func(__this, ___position0, ___flags1);
}
// System.Void UnityEngine.Tilemaps.Tilemap::AddTileFlags_Injected(UnityEngine.Vector3Int&,UnityEngine.Tilemaps.TileFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_AddTileFlags_Injected_m64CCA40E2B0F79874B51530604054B79BDAB1B00 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, int32_t ___flags1, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_AddTileFlags_Injected_m64CCA40E2B0F79874B51530604054B79BDAB1B00_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t);
	static Tilemap_AddTileFlags_Injected_m64CCA40E2B0F79874B51530604054B79BDAB1B00_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_AddTileFlags_Injected_m64CCA40E2B0F79874B51530604054B79BDAB1B00_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::AddTileFlags_Injected(UnityEngine.Vector3Int&,UnityEngine.Tilemaps.TileFlags)");
	_il2cpp_icall_func(__this, ___position0, ___flags1);
}
// System.Void UnityEngine.Tilemaps.Tilemap::RemoveTileFlags_Injected(UnityEngine.Vector3Int&,UnityEngine.Tilemaps.TileFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_RemoveTileFlags_Injected_m8D6A05B5BC88CE2C5201C6EDF7500B3515E52412 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, int32_t ___flags1, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_RemoveTileFlags_Injected_m8D6A05B5BC88CE2C5201C6EDF7500B3515E52412_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t);
	static Tilemap_RemoveTileFlags_Injected_m8D6A05B5BC88CE2C5201C6EDF7500B3515E52412_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_RemoveTileFlags_Injected_m8D6A05B5BC88CE2C5201C6EDF7500B3515E52412_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::RemoveTileFlags_Injected(UnityEngine.Vector3Int&,UnityEngine.Tilemaps.TileFlags)");
	_il2cpp_icall_func(__this, ___position0, ___flags1);
}
// UnityEngine.GameObject UnityEngine.Tilemaps.Tilemap::GetInstantiatedObject_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Tilemap_GetInstantiatedObject_Injected_m6C5E99B111B446D484D0C218655B7A73997F6B14 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) 
{
	typedef GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*Tilemap_GetInstantiatedObject_Injected_m6C5E99B111B446D484D0C218655B7A73997F6B14_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetInstantiatedObject_Injected_m6C5E99B111B446D484D0C218655B7A73997F6B14_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetInstantiatedObject_Injected_m6C5E99B111B446D484D0C218655B7A73997F6B14_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetInstantiatedObject_Injected(UnityEngine.Vector3Int&)");
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* icallRetVal = _il2cpp_icall_func(__this, ___position0);
	return icallRetVal;
}
// UnityEngine.GameObject UnityEngine.Tilemaps.Tilemap::GetObjectToInstantiate_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Tilemap_GetObjectToInstantiate_Injected_m36912C90869C9A9DF7054EC0E8FCC6987E49E0B9 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) 
{
	typedef GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*Tilemap_GetObjectToInstantiate_Injected_m36912C90869C9A9DF7054EC0E8FCC6987E49E0B9_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetObjectToInstantiate_Injected_m36912C90869C9A9DF7054EC0E8FCC6987E49E0B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetObjectToInstantiate_Injected_m36912C90869C9A9DF7054EC0E8FCC6987E49E0B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetObjectToInstantiate_Injected(UnityEngine.Vector3Int&)");
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* icallRetVal = _il2cpp_icall_func(__this, ___position0);
	return icallRetVal;
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetColliderType_Injected(UnityEngine.Vector3Int&,UnityEngine.Tilemaps.Tile/ColliderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetColliderType_Injected_m566B4B3BCF44CB5A30E2798BB5761DFA71548838 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, int32_t ___colliderType1, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetColliderType_Injected_m566B4B3BCF44CB5A30E2798BB5761DFA71548838_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t);
	static Tilemap_SetColliderType_Injected_m566B4B3BCF44CB5A30E2798BB5761DFA71548838_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetColliderType_Injected_m566B4B3BCF44CB5A30E2798BB5761DFA71548838_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetColliderType_Injected(UnityEngine.Vector3Int&,UnityEngine.Tilemaps.Tile/ColliderType)");
	_il2cpp_icall_func(__this, ___position0, ___colliderType1);
}
// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tilemap::GetColliderType_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetColliderType_Injected_mC20B1CB561B1230391EE779C1B772DE672D0112B (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetColliderType_Injected_mC20B1CB561B1230391EE779C1B772DE672D0112B_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetColliderType_Injected_mC20B1CB561B1230391EE779C1B772DE672D0112B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetColliderType_Injected_mC20B1CB561B1230391EE779C1B772DE672D0112B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetColliderType_Injected(UnityEngine.Vector3Int&)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___position0);
	return icallRetVal;
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetAnimationFrameCount_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetAnimationFrameCount_Injected_m35D7E7AA8610A049D4CC20C5B0DD4FEE296A591A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetAnimationFrameCount_Injected_m35D7E7AA8610A049D4CC20C5B0DD4FEE296A591A_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetAnimationFrameCount_Injected_m35D7E7AA8610A049D4CC20C5B0DD4FEE296A591A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetAnimationFrameCount_Injected_m35D7E7AA8610A049D4CC20C5B0DD4FEE296A591A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetAnimationFrameCount_Injected(UnityEngine.Vector3Int&)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___position0);
	return icallRetVal;
}
// System.Int32 UnityEngine.Tilemaps.Tilemap::GetAnimationFrame_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tilemap_GetAnimationFrame_Injected_m7ED5754B942DBB734C8A29E7FD2DFAD611333A8F (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) 
{
	typedef int32_t (*Tilemap_GetAnimationFrame_Injected_m7ED5754B942DBB734C8A29E7FD2DFAD611333A8F_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetAnimationFrame_Injected_m7ED5754B942DBB734C8A29E7FD2DFAD611333A8F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetAnimationFrame_Injected_m7ED5754B942DBB734C8A29E7FD2DFAD611333A8F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetAnimationFrame_Injected(UnityEngine.Vector3Int&)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___position0);
	return icallRetVal;
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetAnimationFrame_Injected(UnityEngine.Vector3Int&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetAnimationFrame_Injected_mDB66AD750CA91C833AA9BC4B6AF8C007D9406862 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, int32_t ___frame1, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetAnimationFrame_Injected_mDB66AD750CA91C833AA9BC4B6AF8C007D9406862_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t);
	static Tilemap_SetAnimationFrame_Injected_mDB66AD750CA91C833AA9BC4B6AF8C007D9406862_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetAnimationFrame_Injected_mDB66AD750CA91C833AA9BC4B6AF8C007D9406862_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetAnimationFrame_Injected(UnityEngine.Vector3Int&,System.Int32)");
	_il2cpp_icall_func(__this, ___position0, ___frame1);
}
// System.Single UnityEngine.Tilemaps.Tilemap::GetAnimationTime_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Tilemap_GetAnimationTime_Injected_m99ED64409B69D42969B5B2A425F8DCD4C85DA25A (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, const RuntimeMethod* method) 
{
	typedef float (*Tilemap_GetAnimationTime_Injected_m99ED64409B69D42969B5B2A425F8DCD4C85DA25A_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static Tilemap_GetAnimationTime_Injected_m99ED64409B69D42969B5B2A425F8DCD4C85DA25A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_GetAnimationTime_Injected_m99ED64409B69D42969B5B2A425F8DCD4C85DA25A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::GetAnimationTime_Injected(UnityEngine.Vector3Int&)");
	float icallRetVal = _il2cpp_icall_func(__this, ___position0);
	return icallRetVal;
}
// System.Void UnityEngine.Tilemaps.Tilemap::SetAnimationTime_Injected(UnityEngine.Vector3Int&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_SetAnimationTime_Injected_mB9A56E73F9820BBFB220E6B896DBC3FBD897EF77 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, float ___time1, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_SetAnimationTime_Injected_mB9A56E73F9820BBFB220E6B896DBC3FBD897EF77_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, float);
	static Tilemap_SetAnimationTime_Injected_mB9A56E73F9820BBFB220E6B896DBC3FBD897EF77_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_SetAnimationTime_Injected_mB9A56E73F9820BBFB220E6B896DBC3FBD897EF77_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::SetAnimationTime_Injected(UnityEngine.Vector3Int&,System.Single)");
	_il2cpp_icall_func(__this, ___position0, ___time1);
}
// System.Void UnityEngine.Tilemaps.Tilemap::FloodFillTileAsset_Injected(UnityEngine.Vector3Int&,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_FloodFillTileAsset_Injected_mE576684EA3396DA63CDD2A9046FECA35631F12B2 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___tile1, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_FloodFillTileAsset_Injected_mE576684EA3396DA63CDD2A9046FECA35631F12B2_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*);
	static Tilemap_FloodFillTileAsset_Injected_mE576684EA3396DA63CDD2A9046FECA35631F12B2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_FloodFillTileAsset_Injected_mE576684EA3396DA63CDD2A9046FECA35631F12B2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::FloodFillTileAsset_Injected(UnityEngine.Vector3Int&,UnityEngine.Object)");
	_il2cpp_icall_func(__this, ___position0, ___tile1);
}
// System.Void UnityEngine.Tilemaps.Tilemap::BoxFillTileAsset_Injected(UnityEngine.Vector3Int&,UnityEngine.Object,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_BoxFillTileAsset_Injected_mAC37DD9FAF6B478739B95A55B82D601B29188965 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___tile1, int32_t ___startX2, int32_t ___startY3, int32_t ___endX4, int32_t ___endY5, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_BoxFillTileAsset_Injected_mAC37DD9FAF6B478739B95A55B82D601B29188965_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, int32_t, int32_t, int32_t, int32_t);
	static Tilemap_BoxFillTileAsset_Injected_mAC37DD9FAF6B478739B95A55B82D601B29188965_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_BoxFillTileAsset_Injected_mAC37DD9FAF6B478739B95A55B82D601B29188965_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::BoxFillTileAsset_Injected(UnityEngine.Vector3Int&,UnityEngine.Object,System.Int32,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___position0, ___tile1, ___startX2, ___startY3, ___endX4, ___endY5);
}
// System.Void UnityEngine.Tilemaps.Tilemap::InsertCells_Injected(UnityEngine.Vector3Int&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_InsertCells_Injected_m3C52681434780B1E732451BD8DC0CB313E8B4144 (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, int32_t ___numColumns1, int32_t ___numRows2, int32_t ___numLayers3, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_InsertCells_Injected_m3C52681434780B1E732451BD8DC0CB313E8B4144_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, int32_t, int32_t);
	static Tilemap_InsertCells_Injected_m3C52681434780B1E732451BD8DC0CB313E8B4144_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_InsertCells_Injected_m3C52681434780B1E732451BD8DC0CB313E8B4144_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::InsertCells_Injected(UnityEngine.Vector3Int&,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___position0, ___numColumns1, ___numRows2, ___numLayers3);
}
// System.Void UnityEngine.Tilemaps.Tilemap::DeleteCells_Injected(UnityEngine.Vector3Int&,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tilemap_DeleteCells_Injected_m2AFB877EBE83B5C62B71D6615D12DE9E7AA0A19E (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___position0, int32_t ___numColumns1, int32_t ___numRows2, int32_t ___numLayers3, const RuntimeMethod* method) 
{
	typedef void (*Tilemap_DeleteCells_Injected_m2AFB877EBE83B5C62B71D6615D12DE9E7AA0A19E_ftn) (Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, int32_t, int32_t);
	static Tilemap_DeleteCells_Injected_m2AFB877EBE83B5C62B71D6615D12DE9E7AA0A19E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Tilemap_DeleteCells_Injected_m2AFB877EBE83B5C62B71D6615D12DE9E7AA0A19E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.Tilemap::DeleteCells_Injected(UnityEngine.Vector3Int&,System.Int32,System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___position0, ___numColumns1, ___numRows2, ___numLayers3);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3Int UnityEngine.Tilemaps.TilemapRenderer::get_chunkSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 TilemapRenderer_get_chunkSize_m7D19867A855856955A7C6F1C8BF0875BC3427AC3 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, const RuntimeMethod* method) 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TilemapRenderer_get_chunkSize_Injected_m390939496D3FD6B77C79D106A081C53FBEB13AA1(__this, (&V_0), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::set_chunkSize(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_set_chunkSize_m5CFDCDE54FF72415499F620C4D79EDEE402C4402 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___value0, const RuntimeMethod* method) 
{
	{
		TilemapRenderer_set_chunkSize_Injected_mD9643F92E6B02C090F8D8E3540153ABBD8101E1B(__this, (&___value0), NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Tilemaps.TilemapRenderer::get_chunkCullingBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TilemapRenderer_get_chunkCullingBounds_m49A6D8F15810FB1536DE9374E57A40A205B09B3A (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		TilemapRenderer_get_chunkCullingBounds_Injected_m1B7F28F5B82681B2344D855F3B4E52428DA693DC(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::set_chunkCullingBounds(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_set_chunkCullingBounds_m5E6C496342BD14FE8C594A555C366722C123061D (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	{
		TilemapRenderer_set_chunkCullingBounds_Injected_m61415554CF936B37FF57D6448A7F2A68496DE622(__this, (&___value0), NULL);
		return;
	}
}
// System.Int32 UnityEngine.Tilemaps.TilemapRenderer::get_maxChunkCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TilemapRenderer_get_maxChunkCount_mF58222A7DFF1332D102F6A625C2DE787C5F8E8F0 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*TilemapRenderer_get_maxChunkCount_mF58222A7DFF1332D102F6A625C2DE787C5F8E8F0_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*);
	static TilemapRenderer_get_maxChunkCount_mF58222A7DFF1332D102F6A625C2DE787C5F8E8F0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_get_maxChunkCount_mF58222A7DFF1332D102F6A625C2DE787C5F8E8F0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::get_maxChunkCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::set_maxChunkCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_set_maxChunkCount_mD91628AE8E564F807410DDEB9EE67F13359A31A6 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*TilemapRenderer_set_maxChunkCount_mD91628AE8E564F807410DDEB9EE67F13359A31A6_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*, int32_t);
	static TilemapRenderer_set_maxChunkCount_mD91628AE8E564F807410DDEB9EE67F13359A31A6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_set_maxChunkCount_mD91628AE8E564F807410DDEB9EE67F13359A31A6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::set_maxChunkCount(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Int32 UnityEngine.Tilemaps.TilemapRenderer::get_maxFrameAge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TilemapRenderer_get_maxFrameAge_m98F7BEA0C7D0147AABC53E3882986735B063550C (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*TilemapRenderer_get_maxFrameAge_m98F7BEA0C7D0147AABC53E3882986735B063550C_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*);
	static TilemapRenderer_get_maxFrameAge_m98F7BEA0C7D0147AABC53E3882986735B063550C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_get_maxFrameAge_m98F7BEA0C7D0147AABC53E3882986735B063550C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::get_maxFrameAge()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::set_maxFrameAge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_set_maxFrameAge_mB347526302FF8254C4E1755C4F61870BEE2E846C (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*TilemapRenderer_set_maxFrameAge_mB347526302FF8254C4E1755C4F61870BEE2E846C_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*, int32_t);
	static TilemapRenderer_set_maxFrameAge_mB347526302FF8254C4E1755C4F61870BEE2E846C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_set_maxFrameAge_mB347526302FF8254C4E1755C4F61870BEE2E846C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::set_maxFrameAge(System.Int32)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Tilemaps.TilemapRenderer/SortOrder UnityEngine.Tilemaps.TilemapRenderer::get_sortOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TilemapRenderer_get_sortOrder_m6D4688F40BAAC4697EACDC53C392248CD6C536AA (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*TilemapRenderer_get_sortOrder_m6D4688F40BAAC4697EACDC53C392248CD6C536AA_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*);
	static TilemapRenderer_get_sortOrder_m6D4688F40BAAC4697EACDC53C392248CD6C536AA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_get_sortOrder_m6D4688F40BAAC4697EACDC53C392248CD6C536AA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::get_sortOrder()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::set_sortOrder(UnityEngine.Tilemaps.TilemapRenderer/SortOrder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_set_sortOrder_m43C942832581D0E2D5DC8553D5DE89713094676E (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*TilemapRenderer_set_sortOrder_m43C942832581D0E2D5DC8553D5DE89713094676E_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*, int32_t);
	static TilemapRenderer_set_sortOrder_m43C942832581D0E2D5DC8553D5DE89713094676E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_set_sortOrder_m43C942832581D0E2D5DC8553D5DE89713094676E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::set_sortOrder(UnityEngine.Tilemaps.TilemapRenderer/SortOrder)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Tilemaps.TilemapRenderer/Mode UnityEngine.Tilemaps.TilemapRenderer::get_mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TilemapRenderer_get_mode_m030D6FE35D238E85CC6E42E6B5E873E8EE9702B9 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*TilemapRenderer_get_mode_m030D6FE35D238E85CC6E42E6B5E873E8EE9702B9_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*);
	static TilemapRenderer_get_mode_m030D6FE35D238E85CC6E42E6B5E873E8EE9702B9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_get_mode_m030D6FE35D238E85CC6E42E6B5E873E8EE9702B9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::get_mode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::set_mode(UnityEngine.Tilemaps.TilemapRenderer/Mode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_set_mode_m57492E00C75930E9CA2D518F71B1F7A32DD16AC3 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*TilemapRenderer_set_mode_m57492E00C75930E9CA2D518F71B1F7A32DD16AC3_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*, int32_t);
	static TilemapRenderer_set_mode_m57492E00C75930E9CA2D518F71B1F7A32DD16AC3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_set_mode_m57492E00C75930E9CA2D518F71B1F7A32DD16AC3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::set_mode(UnityEngine.Tilemaps.TilemapRenderer/Mode)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.Tilemaps.TilemapRenderer/DetectChunkCullingBounds UnityEngine.Tilemaps.TilemapRenderer::get_detectChunkCullingBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TilemapRenderer_get_detectChunkCullingBounds_m3A8383E994AF302B3E2EC3AFACEDC0B11E8954E9 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*TilemapRenderer_get_detectChunkCullingBounds_m3A8383E994AF302B3E2EC3AFACEDC0B11E8954E9_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*);
	static TilemapRenderer_get_detectChunkCullingBounds_m3A8383E994AF302B3E2EC3AFACEDC0B11E8954E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_get_detectChunkCullingBounds_m3A8383E994AF302B3E2EC3AFACEDC0B11E8954E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::get_detectChunkCullingBounds()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::set_detectChunkCullingBounds(UnityEngine.Tilemaps.TilemapRenderer/DetectChunkCullingBounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_set_detectChunkCullingBounds_m7EECA4EC0AE104C34E7B8BC240E6CBA6B8234153 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*TilemapRenderer_set_detectChunkCullingBounds_m7EECA4EC0AE104C34E7B8BC240E6CBA6B8234153_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*, int32_t);
	static TilemapRenderer_set_detectChunkCullingBounds_m7EECA4EC0AE104C34E7B8BC240E6CBA6B8234153_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_set_detectChunkCullingBounds_m7EECA4EC0AE104C34E7B8BC240E6CBA6B8234153_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::set_detectChunkCullingBounds(UnityEngine.Tilemaps.TilemapRenderer/DetectChunkCullingBounds)");
	_il2cpp_icall_func(__this, ___value0);
}
// UnityEngine.SpriteMaskInteraction UnityEngine.Tilemaps.TilemapRenderer::get_maskInteraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TilemapRenderer_get_maskInteraction_m8C65636D0663C6CE1B04A70D5627427847716CE3 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*TilemapRenderer_get_maskInteraction_m8C65636D0663C6CE1B04A70D5627427847716CE3_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*);
	static TilemapRenderer_get_maskInteraction_m8C65636D0663C6CE1B04A70D5627427847716CE3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_get_maskInteraction_m8C65636D0663C6CE1B04A70D5627427847716CE3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::get_maskInteraction()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::set_maskInteraction(UnityEngine.SpriteMaskInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_set_maskInteraction_mBB928D483066888AFDC966B152E445C48A234234 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	typedef void (*TilemapRenderer_set_maskInteraction_mBB928D483066888AFDC966B152E445C48A234234_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*, int32_t);
	static TilemapRenderer_set_maskInteraction_mBB928D483066888AFDC966B152E445C48A234234_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_set_maskInteraction_mBB928D483066888AFDC966B152E445C48A234234_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::set_maskInteraction(UnityEngine.SpriteMaskInteraction)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::RegisterSpriteAtlasRegistered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_RegisterSpriteAtlasRegistered_m5D7676A05B0B16ABCCF4CEE57BA9E28FA4D171BC (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_0 = (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*)il2cpp_codegen_object_new(Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_mDAEB7161DF624FDF6A3DA3C6BE40319FFC05A2E3(L_0, __this, (intptr_t)((void*)TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_RuntimeMethod_var), NULL);
		SpriteAtlasManager_add_atlasRegistered_mA46A6A347F25B2E03DB4FD8044B93B4FD8ED50A5(L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::UnregisterSpriteAtlasRegistered()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_UnregisterSpriteAtlasRegistered_mFE33C972CF738A50A631203D0DD7E325AADFCB08 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D* L_0 = (Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D*)il2cpp_codegen_object_new(Action_1_tE96F2DDA71AE56E61CEEC5974B6503D38835E57D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_mDAEB7161DF624FDF6A3DA3C6BE40319FFC05A2E3(L_0, __this, (intptr_t)((void*)TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_RuntimeMethod_var), NULL);
		SpriteAtlasManager_remove_atlasRegistered_m67E745D3503463E3DB9CC12C157ABB4F469ABE79(L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::OnSpriteAtlasRegistered(UnityEngine.U2D.SpriteAtlas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8* ___atlas0, const RuntimeMethod* method) 
{
	typedef void (*TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*, SpriteAtlas_t7B9620FBFBE1CCB781F2ED24A3B2DD37734F66A8*);
	static TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_OnSpriteAtlasRegistered_m4348D78754045C8B10CEA76195A313790F412ED1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::OnSpriteAtlasRegistered(UnityEngine.U2D.SpriteAtlas)");
	_il2cpp_icall_func(__this, ___atlas0);
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer__ctor_m0BF73FD7D70A7F8B74288CCB2DF52E9525DF9682 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, const RuntimeMethod* method) 
{
	{
		Renderer__ctor_m8B4EE9696B155A1B0A2CF13EBFC363CE175B9271(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::get_chunkSize_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_get_chunkSize_Injected_m390939496D3FD6B77C79D106A081C53FBEB13AA1 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*TilemapRenderer_get_chunkSize_Injected_m390939496D3FD6B77C79D106A081C53FBEB13AA1_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static TilemapRenderer_get_chunkSize_Injected_m390939496D3FD6B77C79D106A081C53FBEB13AA1_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_get_chunkSize_Injected_m390939496D3FD6B77C79D106A081C53FBEB13AA1_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::get_chunkSize_Injected(UnityEngine.Vector3Int&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::set_chunkSize_Injected(UnityEngine.Vector3Int&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_set_chunkSize_Injected_mD9643F92E6B02C090F8D8E3540153ABBD8101E1B (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___value0, const RuntimeMethod* method) 
{
	typedef void (*TilemapRenderer_set_chunkSize_Injected_mD9643F92E6B02C090F8D8E3540153ABBD8101E1B_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*);
	static TilemapRenderer_set_chunkSize_Injected_mD9643F92E6B02C090F8D8E3540153ABBD8101E1B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_set_chunkSize_Injected_mD9643F92E6B02C090F8D8E3540153ABBD8101E1B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::set_chunkSize_Injected(UnityEngine.Vector3Int&)");
	_il2cpp_icall_func(__this, ___value0);
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::get_chunkCullingBounds_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_get_chunkCullingBounds_Injected_m1B7F28F5B82681B2344D855F3B4E52428DA693DC (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___ret0, const RuntimeMethod* method) 
{
	typedef void (*TilemapRenderer_get_chunkCullingBounds_Injected_m1B7F28F5B82681B2344D855F3B4E52428DA693DC_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TilemapRenderer_get_chunkCullingBounds_Injected_m1B7F28F5B82681B2344D855F3B4E52428DA693DC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_get_chunkCullingBounds_Injected_m1B7F28F5B82681B2344D855F3B4E52428DA693DC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::get_chunkCullingBounds_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
// System.Void UnityEngine.Tilemaps.TilemapRenderer::set_chunkCullingBounds_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TilemapRenderer_set_chunkCullingBounds_Injected_m61415554CF936B37FF57D6448A7F2A68496DE622 (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___value0, const RuntimeMethod* method) 
{
	typedef void (*TilemapRenderer_set_chunkCullingBounds_Injected_m61415554CF936B37FF57D6448A7F2A68496DE622_ftn) (TilemapRenderer_t1A45FD335E86172CFBB77D657E1D6705A477A6CB*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static TilemapRenderer_set_chunkCullingBounds_Injected_m61415554CF936B37FF57D6448A7F2A68496DE622_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TilemapRenderer_set_chunkCullingBounds_Injected_m61415554CF936B37FF57D6448A7F2A68496DE622_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Tilemaps.TilemapRenderer::set_chunkCullingBounds_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Tilemaps.TileData::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B2_0 = NULL;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B3_1 = NULL;
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000e:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		G_B3_1->___m_Sprite_0 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94_AdjustorThunk (RuntimeObject* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Tilemaps.TileData::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_Color_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A_AdjustorThunk (RuntimeObject* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Tilemaps.TileData::set_transform(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___value0;
		__this->___m_Transform_2 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F_AdjustorThunk (RuntimeObject* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Tilemaps.TileData::set_gameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_gameObject_m1CE5B2AAAB5BF5AEF36EBAF2BCE23E4D2E5A9E09 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B2_0 = NULL;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* G_B3_1 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0014;
	}

IL_000e:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___value0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(L_2, NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0014:
	{
		G_B3_1->___m_GameObject_3 = G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_gameObject_m1CE5B2AAAB5BF5AEF36EBAF2BCE23E4D2E5A9E09_AdjustorThunk (RuntimeObject* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_gameObject_m1CE5B2AAAB5BF5AEF36EBAF2BCE23E4D2E5A9E09(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Tilemaps.TileData::set_flags(UnityEngine.Tilemaps.TileFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Flags_4 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.Tilemaps.TileData::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96 (TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_ColliderType_5 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96_AdjustorThunk (RuntimeObject* __this, int32_t ___value0, const RuntimeMethod* method)
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F*>(__this + _offset);
	TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96(_thisAdjusted, ___value0, method);
}
// UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileData::CreateDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F TileData_CreateDefault_m13A39001A47B60635B10FFD06AD65082CBB7D12D (const RuntimeMethod* method) 
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_0;
	memset((&V_0), 0, sizeof(V_0));
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A((&V_0), L_0, NULL);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F((&V_0), L_1, NULL);
		TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30((&V_0), 0, NULL);
		TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96((&V_0), 0, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_2 = V_0;
		V_1 = L_2;
		goto IL_0039;
	}

IL_0039:
	{
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.Tilemaps.TileData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileData__cctor_mE2F5A802075C68DE978E46092DC8BF465182934A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_0;
		L_0 = TileData_CreateDefault_m13A39001A47B60635B10FFD06AD65082CBB7D12D(NULL);
		((TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_StaticFields*)il2cpp_codegen_static_fields_for(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var))->___Default_6 = L_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Tilemaps.TileAnimationData
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke(const TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149& unmarshaled, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_AnimatedSprites_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_AnimatedSprites' of type 'TileAnimationData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AnimatedSprites_0Exception, NULL);
}
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke_back(const TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_pinvoke& marshaled, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149& unmarshaled)
{
	Exception_t* ___m_AnimatedSprites_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_AnimatedSprites' of type 'TileAnimationData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AnimatedSprites_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Tilemaps.TileAnimationData
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_pinvoke_cleanup(TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Tilemaps.TileAnimationData
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_com(const TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149& unmarshaled, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_com& marshaled)
{
	Exception_t* ___m_AnimatedSprites_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_AnimatedSprites' of type 'TileAnimationData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AnimatedSprites_0Exception, NULL);
}
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_com_back(const TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_com& marshaled, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149& unmarshaled)
{
	Exception_t* ___m_AnimatedSprites_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_AnimatedSprites' of type 'TileAnimationData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_AnimatedSprites_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Tilemaps.TileAnimationData
IL2CPP_EXTERN_C void TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshal_com_cleanup(TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Sprite UnityEngine.Tilemaps.Tile::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Tile_get_sprite_m3324CBA00505C3C95DA57FC3A6F8B0D5FA2EF553 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* V_0 = NULL;
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_Sprite_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Tilemaps.Tile::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_sprite_mD9F351775FDFDFFA0FCC40121B4C54D566052D18 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) 
{
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___value0;
		__this->___m_Sprite_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Sprite_4), (void*)L_0);
		return;
	}
}
// UnityEngine.Color UnityEngine.Tilemaps.Tile::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Tile_get_color_mD50E790F486A1E64757E9471D48BA42FC9ECCE4C (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___m_Color_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Tilemaps.Tile::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_color_m9D76C21865CA89F39FF56C112CB13AFD45CD8B69 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___m_Color_5 = L_0;
		return;
	}
}
// UnityEngine.Matrix4x4 UnityEngine.Tilemaps.Tile::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Tile_get_transform_mFA119A0C353E4E75C92C8BE829C6BDFA40F17643 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = __this->___m_Transform_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Tilemaps.Tile::set_transform(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_transform_m2E46927D29823DBDC3B7B36E013845006075EB02 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___value0, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___value0;
		__this->___m_Transform_6 = L_0;
		return;
	}
}
// UnityEngine.GameObject UnityEngine.Tilemaps.Tile::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Tile_get_gameObject_m8B1B09FD1B6B5A0402D63D3AFF139C6078754077 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___m_InstancedGameObject_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Tilemaps.Tile::set_gameObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_gameObject_mD4C82AFCA4B96D44BE5549CFF9E0F36218A4ECE9 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value0, const RuntimeMethod* method) 
{
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___value0;
		__this->___m_InstancedGameObject_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_InstancedGameObject_7), (void*)L_0);
		return;
	}
}
// UnityEngine.Tilemaps.TileFlags UnityEngine.Tilemaps.Tile::get_flags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tile_get_flags_m4AC2E9F8CF43DB83E9F8389EFDF7E6111E5A9806 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Flags_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Tilemaps.Tile::set_flags(UnityEngine.Tilemaps.TileFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_flags_mE221D85F2B767EC5C3D473266CB7AABD66674DEA (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_Flags_8 = L_0;
		return;
	}
}
// UnityEngine.Tilemaps.Tile/ColliderType UnityEngine.Tilemaps.Tile::get_colliderType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Tile_get_colliderType_mDB7A2E3BEF055617F6AC198841938B79C289E967 (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_ColliderType_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Tilemaps.Tile::set_colliderType(UnityEngine.Tilemaps.Tile/ColliderType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_set_colliderType_m21E434F55E4CC8AEB867E7FCF88821EFFC9CEB3F (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___m_ColliderType_9 = L_0;
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tile::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile_GetTileData_m187B4A0A655AAB70CC8EC203F78E4777ABB96D4E (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap1, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* ___tileData2, const RuntimeMethod* method) 
{
	{
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_0 = ___tileData2;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = __this->___m_Sprite_4;
		TileData_set_sprite_m3566544847F9C9C27EDB154324B6FBDB446EFE94(L_0, L_1, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_2 = ___tileData2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___m_Color_5;
		TileData_set_color_m5E759823878243A226EF46419FAD7C0CC3D5F40A(L_2, L_3, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_4 = ___tileData2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_5 = __this->___m_Transform_6;
		TileData_set_transform_m71074A780C066292F940002A7165658E9CC01F9F(L_4, L_5, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_6 = ___tileData2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___m_InstancedGameObject_7;
		TileData_set_gameObject_m1CE5B2AAAB5BF5AEF36EBAF2BCE23E4D2E5A9E09(L_6, L_7, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_8 = ___tileData2;
		int32_t L_9 = __this->___m_Flags_8;
		TileData_set_flags_mEB46B1364D6DB7F77C2E1E43AFD31381B291BD30(L_8, L_9, NULL);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* L_10 = ___tileData2;
		int32_t L_11 = __this->___m_ColliderType_9;
		TileData_set_colliderType_mE12359ADEF5F42CC0B635DCBAEC3035F0526FA96(L_10, L_11, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.Tile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tile__ctor_m1680C25E80E5ACCB156133C14199BD5BFE00EA5E (Tile_t33119F106CFC3DC767E7D9306A958AAE12133490* __this, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___m_Color_5 = L_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->___m_Transform_6 = L_1;
		__this->___m_Flags_8 = 1;
		__this->___m_ColliderType_9 = 1;
		TileBase__ctor_mBFD0A0ACF9DB1F08783B9F3F35D4E61C9205D4A2(__this, NULL);
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
// System.Void UnityEngine.Tilemaps.TileBase::RefreshTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase_RefreshTile_m7302220B588658247D635871B92DBFF7708E2224 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap1, const RuntimeMethod* method) 
{
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_0 = ___tilemap1;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___position0;
		NullCheck(L_0);
		ITilemap_RefreshTile_m4C4B0A062A13E986BD20AA87F056982D67FAF69D(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase_GetTileData_m04B3B474F4DBF88997FF29ABA115A2FFB91BAF81 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap1, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* ___tileData2, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// UnityEngine.Tilemaps.TileData UnityEngine.Tilemaps.TileBase::GetTileDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F TileBase_GetTileDataNoRef_m657510B6853906E397D8FC7E6F1A8B2DC4B34397 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap1, const RuntimeMethod* method) 
{
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_0;
	memset((&V_0), 0, sizeof(V_0));
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___position0;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_1 = ___tilemap1;
		VirtualActionInvoker3< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* >::Invoke(5 /* System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */, __this, L_0, L_1, (&V_0));
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_2 = V_0;
		V_1 = L_2;
		goto IL_0018;
	}

IL_0018:
	{
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_3 = V_1;
		return L_3;
	}
}
// System.Boolean UnityEngine.Tilemaps.TileBase::GetTileAnimationData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TileBase_GetTileAnimationData_m8E1C84B8BC0B38E978ECEE6C7AD50D7D8BF810FE (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap1, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* ___tileAnimationData2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Tilemaps.TileAnimationData UnityEngine.Tilemaps.TileBase::GetTileAnimationDataNoRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 TileBase_GetTileAnimationDataNoRef_m061D2FB92E28E5C2379385827F78C22719287D97 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap1, const RuntimeMethod* method) 
{
	TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 V_0;
	memset((&V_0), 0, sizeof(V_0));
	TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149));
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = ___position0;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_1 = ___tilemap1;
		bool L_2;
		L_2 = VirtualFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* >::Invoke(6 /* System.Boolean UnityEngine.Tilemaps.TileBase::GetTileAnimationData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&) */, __this, L_0, L_1, (&V_0));
		TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149 L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.Tilemaps.TileBase::GetTileAnimationDataRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase_GetTileAnimationDataRef_m10D856F55369986224F166E8EEF5633EB8EBA5C3 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap1, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* ___tileAnimationData2, bool* ___hasAnimation3, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___hasAnimation3;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___position0;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_2 = ___tilemap1;
		TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* L_3 = ___tileAnimationData2;
		bool L_4;
		L_4 = VirtualFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileAnimationData_tB7419BC111545576349DD19CAB0DEFD240CAF149* >::Invoke(6 /* System.Boolean UnityEngine.Tilemaps.TileBase::GetTileAnimationData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileAnimationData&) */, __this, L_1, L_2, L_3);
		*((int8_t*)L_0) = (int8_t)L_4;
		return;
	}
}
// System.Boolean UnityEngine.Tilemaps.TileBase::StartUp(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TileBase_StartUp_mBAF37DBB4DCC7BDB384352D93AB609CEB0E2E78B (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0005;
	}

IL_0005:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Tilemaps.TileBase::StartUpRef(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.GameObject,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase_StartUpRef_mB00DB38868F87645811DE4784F57278388FAEEF9 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap1, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go2, bool* ___startUpInvokedByUser3, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___startUpInvokedByUser3;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___position0;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_2 = ___tilemap1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___go2;
		bool L_4;
		L_4 = VirtualFuncInvoker3< bool, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(7 /* System.Boolean UnityEngine.Tilemaps.TileBase::StartUp(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.GameObject) */, __this, L_1, L_2, L_3);
		*((int8_t*)L_0) = (int8_t)L_4;
		return;
	}
}
// System.Void UnityEngine.Tilemaps.TileBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TileBase__ctor_mBFD0A0ACF9DB1F08783B9F3F35D4E61C9205D4A2 (TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UnityEngine.Tilemaps.ITilemap::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap__ctor_m3281F6903F18F9B867E6B81E18BCCD0828084258 (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.Tilemaps.ITilemap::RefreshTile(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap_RefreshTile_m4C4B0A062A13E986BD20AA87F056982D67FAF69D (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		bool L_0 = __this->___m_AddToList_2;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_2 = __this->___m_RefreshCount_3;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_3 = (&__this->___m_RefreshPos_4);
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_6 = __this->___m_RefreshCount_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(1, ((int32_t)il2cpp_codegen_multiply(L_6, 2)), NULL);
		NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2((&V_2), L_7, 2, 1, NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_RuntimeMethod_var);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_8 = __this->___m_RefreshPos_4;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_9 = V_2;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_10 = (&__this->___m_RefreshPos_4);
		int32_t L_11;
		L_11 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_10)->___m_Length_1);
		NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24(L_8, L_9, L_11, NativeArray_1_Copy_m4515C6A6B64476716833B9C22AAE07185976AF24_RuntimeMethod_var);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_12 = (&__this->___m_RefreshPos_4);
		NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055(L_12, NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_RuntimeMethod_var);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_13 = V_2;
		__this->___m_RefreshPos_4 = L_13;
	}

IL_006d:
	{
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_14 = (&__this->___m_RefreshPos_4);
		int32_t L_15 = __this->___m_RefreshCount_3;
		V_3 = L_15;
		int32_t L_16 = V_3;
		__this->___m_RefreshCount_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = V_3;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_18 = ___position0;
		IL2CPP_NATIVEARRAY_SET_ITEM(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, (L_14)->___m_Buffer_0, L_17, (L_18));
		goto IL_009b;
	}

IL_008e:
	{
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_19 = __this->___m_Tilemap_1;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_20 = ___position0;
		NullCheck(L_19);
		Tilemap_RefreshTile_mEF4F94212FD9B311431DFFAFE092A4A6EBA580DF(L_19, L_20, NULL);
	}

IL_009b:
	{
		return;
	}
}
// UnityEngine.Tilemaps.ITilemap UnityEngine.Tilemaps.ITilemap::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ITilemap_CreateInstance_m63D3D1EDDCA86A1F1A116A2205D798AD2BAF3E96 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* V_0 = NULL;
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_0 = (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*)il2cpp_codegen_object_new(ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ITilemap__ctor_m3281F6903F18F9B867E6B81E18BCCD0828084258(L_0, NULL);
		((ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_StaticFields*)il2cpp_codegen_static_fields_for(ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var))->___s_Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_StaticFields*)il2cpp_codegen_static_fields_for(ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var))->___s_Instance_0), (void*)L_0);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_1 = ((ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_StaticFields*)il2cpp_codegen_static_fields_for(ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164_il2cpp_TypeInfo_var))->___s_Instance_0;
		V_0 = L_1;
		goto IL_0013;
	}

IL_0013:
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Tilemaps.ITilemap::FindAllRefreshPositions(UnityEngine.Tilemaps.ITilemap,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap_FindAllRefreshPositions_m681FAC77C526640B18549097C961C85EA5846CCC (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap0, int32_t ___count1, intptr_t ___oldTilesIntPtr2, intptr_t ___newTilesIntPtr3, intptr_t ___positionsIntPtr4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	void* V_1 = NULL;
	void* V_2 = NULL;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_12 = NULL;
	bool V_13 = false;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_14 = NULL;
	bool V_15 = false;
	int32_t G_B3_0 = 0;
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_0 = ___tilemap0;
		NullCheck(L_0);
		L_0->___m_AddToList_2 = (bool)1;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_1 = ___tilemap0;
		NullCheck(L_1);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_2 = L_1->___m_RefreshPos_4;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_3 = ___tilemap0;
		NullCheck(L_3);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_4 = (&L_3->___m_RefreshPos_4);
		bool L_5;
		L_5 = NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30(L_4, NativeArray_1_get_IsCreated_mE992FB4B97CD24CAF70D23773821AE2687DC4A30_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_002c;
		}
	}
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_6 = ___tilemap0;
		NullCheck(L_6);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_7 = (&L_6->___m_RefreshPos_4);
		int32_t L_8;
		L_8 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_7)->___m_Length_1);
		int32_t L_9 = ___count1;
		G_B3_0 = ((((int32_t)L_8) < ((int32_t)L_9))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 1;
	}

IL_002d:
	{
		V_6 = (bool)G_B3_0;
		bool L_10 = V_6;
		if (!L_10)
		{
			goto IL_0048;
		}
	}
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_11 = ___tilemap0;
		int32_t L_12 = ___count1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_13;
		L_13 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)16), L_12, NULL);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2((&L_14), L_13, 2, 1, /*hidden argument*/NativeArray_1__ctor_m29DAD3F6139353D219E363E2C63BC183CBC778E2_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->___m_RefreshPos_4 = L_14;
	}

IL_0048:
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_15 = ___tilemap0;
		NullCheck(L_15);
		L_15->___m_RefreshCount_3 = 0;
		void* L_16;
		L_16 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___oldTilesIntPtr2), NULL);
		V_0 = L_16;
		void* L_17;
		L_17 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___newTilesIntPtr3), NULL);
		V_1 = L_17;
		void* L_18;
		L_18 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___positionsIntPtr4), NULL);
		V_2 = L_18;
		void* L_19 = V_0;
		int32_t L_20 = ___count1;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_21;
		L_21 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550(L_19, L_20, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_3 = L_21;
		void* L_22 = V_1;
		int32_t L_23 = ___count1;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_24;
		L_24 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550(L_22, L_23, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_4 = L_24;
		void* L_25 = V_2;
		int32_t L_26 = ___count1;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_27;
		L_27 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF(L_25, L_26, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var);
		V_5 = L_27;
		V_7 = 0;
		goto IL_00fe;
	}

IL_0089:
	{
		int32_t L_28 = V_7;
		int32_t L_29;
		L_29 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_3))->___m_Buffer_0, L_28);
		V_8 = L_29;
		int32_t L_30 = V_7;
		int32_t L_31;
		L_31 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_4))->___m_Buffer_0, L_30);
		V_9 = L_31;
		int32_t L_32 = V_7;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_33;
		L_33 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ((&V_5))->___m_Buffer_0, L_32);
		V_10 = L_33;
		int32_t L_34 = V_8;
		V_11 = (bool)((!(((uint32_t)L_34) <= ((uint32_t)0)))? 1 : 0);
		bool L_35 = V_11;
		if (!L_35)
		{
			goto IL_00d1;
		}
	}
	{
		int32_t L_36 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_37;
		L_37 = Object_ForceLoadFromInstanceID_mDC03EC6F7745D8194DF5A7A0C50188228F3E95B6(L_36, NULL);
		V_12 = ((TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*)CastclassClass((RuntimeObject*)L_37, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var));
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_38 = V_12;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_39 = V_10;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_40 = ___tilemap0;
		NullCheck(L_38);
		VirtualActionInvoker2< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* >::Invoke(4 /* System.Void UnityEngine.Tilemaps.TileBase::RefreshTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */, L_38, L_39, L_40);
	}

IL_00d1:
	{
		int32_t L_41 = V_9;
		V_13 = (bool)((!(((uint32_t)L_41) <= ((uint32_t)0)))? 1 : 0);
		bool L_42 = V_13;
		if (!L_42)
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_43 = V_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_44;
		L_44 = Object_ForceLoadFromInstanceID_mDC03EC6F7745D8194DF5A7A0C50188228F3E95B6(L_43, NULL);
		V_14 = ((TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*)CastclassClass((RuntimeObject*)L_44, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var));
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_45 = V_14;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_46 = V_10;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_47 = ___tilemap0;
		NullCheck(L_45);
		VirtualActionInvoker2< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* >::Invoke(4 /* System.Void UnityEngine.Tilemaps.TileBase::RefreshTile(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap) */, L_45, L_46, L_47);
	}

IL_00f7:
	{
		int32_t L_48 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_00fe:
	{
		int32_t L_49 = V_7;
		int32_t L_50 = ___count1;
		V_15 = (bool)((((int32_t)L_49) < ((int32_t)L_50))? 1 : 0);
		bool L_51 = V_15;
		if (L_51)
		{
			goto IL_0089;
		}
	}
	{
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_52 = ___tilemap0;
		NullCheck(L_52);
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_53 = L_52->___m_Tilemap_1;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_54 = ___tilemap0;
		NullCheck(L_54);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_55 = (&L_54->___m_RefreshPos_4);
		void* L_56 = L_55->___m_Buffer_0;
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_57 = ___tilemap0;
		NullCheck(L_57);
		int32_t L_58 = L_57->___m_RefreshCount_3;
		NullCheck(L_53);
		Tilemap_RefreshTilesNative_mD73E77DFD7C808A3665CA8389F728CBC08A52232(L_53, L_56, L_58, NULL);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_59 = ___tilemap0;
		NullCheck(L_59);
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF* L_60 = (&L_59->___m_RefreshPos_4);
		NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055(L_60, NativeArray_1_Dispose_mAB8B3AE6332BF29F21711643D4FFE57E30E1E055_RuntimeMethod_var);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_61 = ___tilemap0;
		NullCheck(L_61);
		L_61->___m_AddToList_2 = (bool)0;
		return;
	}
}
// System.Void UnityEngine.Tilemaps.ITilemap::GetAllTileData(UnityEngine.Tilemaps.ITilemap,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ITilemap_GetAllTileData_m3B6CF200F925322F951314FE8336C581A782F804 (ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* ___tilemap0, int32_t ___count1, intptr_t ___tilesIntPtr2, intptr_t ___positionsIntPtr3, intptr_t ___outTileDataIntPtr4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	void* V_1 = NULL;
	void* V_2 = NULL;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	bool V_9 = false;
	TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* V_10 = NULL;
	bool V_11 = false;
	{
		void* L_0;
		L_0 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___tilesIntPtr2), NULL);
		V_0 = L_0;
		void* L_1;
		L_1 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___positionsIntPtr3), NULL);
		V_1 = L_1;
		void* L_2;
		L_2 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&___outTileDataIntPtr4), NULL);
		V_2 = L_2;
		void* L_3 = V_0;
		int32_t L_4 = ___count1;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_5;
		L_5 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550(L_3, L_4, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m5C4C6FA53CA05FE88CA7926E8B1C0DF717B63550_RuntimeMethod_var);
		V_3 = L_5;
		void* L_6 = V_1;
		int32_t L_7 = ___count1;
		NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF L_8;
		L_8 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF(L_6, L_7, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m68CCE7D85BD452D727A41279CA4D553EE8B627FF_RuntimeMethod_var);
		V_4 = L_8;
		void* L_9 = V_2;
		int32_t L_10 = ___count1;
		NativeArray_1_t1520D9CD4959D9455C36ED19E490DBDC32B6EF5C L_11;
		L_11 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C(L_9, L_10, 0, NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisTileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_mD61DE9D9D0F7E928CED8EA63A59BD8BE1276D07C_RuntimeMethod_var);
		V_5 = L_11;
		V_6 = 0;
		goto IL_0090;
	}

IL_003b:
	{
		il2cpp_codegen_runtime_class_init_inline(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var);
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_12 = ((TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_StaticFields*)il2cpp_codegen_static_fields_for(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F_il2cpp_TypeInfo_var))->___Default_6;
		V_7 = L_12;
		int32_t L_13 = V_6;
		int32_t L_14;
		L_14 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, ((&V_3))->___m_Buffer_0, L_13);
		V_8 = L_14;
		int32_t L_15 = V_8;
		V_9 = (bool)((!(((uint32_t)L_15) <= ((uint32_t)0)))? 1 : 0);
		bool L_16 = V_9;
		if (!L_16)
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_17 = V_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_18;
		L_18 = Object_ForceLoadFromInstanceID_mDC03EC6F7745D8194DF5A7A0C50188228F3E95B6(L_17, NULL);
		V_10 = ((TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9*)CastclassClass((RuntimeObject*)L_18, TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9_il2cpp_TypeInfo_var));
		TileBase_t07019BD771D35E8EA68118157D6EEE4C770CF0F9* L_19 = V_10;
		int32_t L_20 = V_6;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_21;
		L_21 = IL2CPP_NATIVEARRAY_GET_ITEM(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ((&V_4))->___m_Buffer_0, L_20);
		ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164* L_22 = ___tilemap0;
		NullCheck(L_19);
		VirtualActionInvoker3< Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376, ITilemap_tCD8B9C2D6A80DB1DFE9C934D91EACE6B8A018164*, TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F* >::Invoke(5 /* System.Void UnityEngine.Tilemaps.TileBase::GetTileData(UnityEngine.Vector3Int,UnityEngine.Tilemaps.ITilemap,UnityEngine.Tilemaps.TileData&) */, L_19, L_21, L_22, (&V_7));
	}

IL_007d:
	{
		int32_t L_23 = V_6;
		TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F L_24 = V_7;
		IL2CPP_NATIVEARRAY_SET_ITEM(TileData_tFB814629D010ABD175127C0BE96FD96EA606E00F, ((&V_5))->___m_Buffer_0, L_23, (L_24));
		int32_t L_25 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0090:
	{
		int32_t L_26 = V_6;
		int32_t L_27 = ___count1;
		V_11 = (bool)((((int32_t)L_26) < ((int32_t)L_27))? 1 : 0);
		bool L_28 = V_11;
		if (L_28)
		{
			goto IL_003b;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3Int_op_Implicit_m13297B1F6D07F1E46C0627EAAB8413E637FCA442_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___v0), NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___v0), NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___v0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), ((float)L_0), ((float)L_1), ((float)L_2), /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
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
