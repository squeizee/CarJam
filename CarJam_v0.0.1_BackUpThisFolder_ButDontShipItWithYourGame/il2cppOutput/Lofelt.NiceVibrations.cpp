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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Timers.ElapsedEventArgs
struct ElapsedEventArgs_t74C1E2D692A82825805E5EC84EE73F5B053027C1;
// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
// System.Exception
struct Exception_t;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// Lofelt.NiceVibrations.HapticClip
struct HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98;
// Lofelt.NiceVibrations.HapticReceiver
struct HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B;
// Lofelt.NiceVibrations.HapticSource
struct HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.ComponentModel.ISite
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t94542FC52B3B1FCA7BC4D8CC518FC2EF9870861F;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// System.Threading.Timer
struct Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00;
// System.Timers.Timer
struct Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B;
// System.Threading.TimerCallback
struct TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Lofelt.NiceVibrations.HapticController/<>c
struct U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4;
// Lofelt.NiceVibrations.HapticController/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA;
// Lofelt.NiceVibrations.HapticSource/<>c
struct U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____291429BD4426C606843ABEB925268AD87767305C4AC8069D1191FFDE90A3499F_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____34A0AC4C4C065F0140B16ECC7E9690749B60C5C0EB2D6021CC75FEEBDCDCA61F_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____DF8E296768F9446BD84A1631B3922DAA86C5CC0EFB71B660BF0B6DF542707096_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_3_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral00DCAF10AB031EC7D7077B627288147A71E45F07;
IL2CPP_EXTERN_C String_t* _stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B;
IL2CPP_EXTERN_C String_t* _stringLiteral0A446C6F48B1189B2EBA5A31AA341FDB440088E9;
IL2CPP_EXTERN_C String_t* _stringLiteral11A4FE01BF2A9FE8159B9EA16D64D70159683C53;
IL2CPP_EXTERN_C String_t* _stringLiteral155B036AB9502432CB2CCD80790FF33D3227823D;
IL2CPP_EXTERN_C String_t* _stringLiteral1590B1DD196F96A11A36B50B360EB57178EEF954;
IL2CPP_EXTERN_C String_t* _stringLiteral1A5A4A501BAA6FD3ED4EBE9BFC926066FCBD5ABE;
IL2CPP_EXTERN_C String_t* _stringLiteral1C46D0AA262A0625365CD273F8B2BF1234988C04;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral41122A25B762B3B469C8461B4F6196CC75D3EF6A;
IL2CPP_EXTERN_C String_t* _stringLiteral4163EC7E399C450E8F73BD99DA4C4E81184962CB;
IL2CPP_EXTERN_C String_t* _stringLiteral48247C19229E69D84C5E6BDDE317DBE03A31CDD3;
IL2CPP_EXTERN_C String_t* _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A;
IL2CPP_EXTERN_C String_t* _stringLiteral4B481BD414EE082CA5F33A7513CDB2D68ADAF594;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8;
IL2CPP_EXTERN_C String_t* _stringLiteral61DD0B794D236B1414F02F76E8AF03EDCDC5FD17;
IL2CPP_EXTERN_C String_t* _stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7;
IL2CPP_EXTERN_C String_t* _stringLiteral8B63886015A4191332EA3F977B1146A0B78A6E82;
IL2CPP_EXTERN_C String_t* _stringLiteralA1CA335EF287DF9364E8A16BB365BDAEB23ED4A3;
IL2CPP_EXTERN_C String_t* _stringLiteralA2135703B40B414C092DF068E8FAA55E46FFB30B;
IL2CPP_EXTERN_C String_t* _stringLiteralB390D5019ED8691FF161C85B9EC17FE9D19763EF;
IL2CPP_EXTERN_C String_t* _stringLiteralBFBE2EF02B478337E3E96E4014859EBED0CCE65C;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC444FDC3B86DC5349F7224E5C2605245C0859BA1;
IL2CPP_EXTERN_C String_t* _stringLiteralC5CF167CD5E0AB4195BC6B1A4DEDCCEEA1E9E954;
IL2CPP_EXTERN_C String_t* _stringLiteralC5E079158CE53A6B1B96591E1222924C388B17C2;
IL2CPP_EXTERN_C String_t* _stringLiteralC7E3AEAEF7966AC50BEA811A1C12092709305E19;
IL2CPP_EXTERN_C String_t* _stringLiteralCA44DFF94D6AA7697C8ADB77FB3A367BA465B869;
IL2CPP_EXTERN_C String_t* _stringLiteralD3CF9BBC2C80F53F057554706A4681C9C5301858;
IL2CPP_EXTERN_C String_t* _stringLiteralD8F8B953FE2D84FB48669F1FF532EB963C0006E0;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125;
IL2CPP_EXTERN_C String_t* _stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFDD3352BD99189DE5E9D144947AC562A510FA72E;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JNIHelpers_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m96D187D8E7B92D10C0CBA2E20B9B6D41B8992DF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JNIHelpers_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m55C33AAF27F7978DFED30C5DF13AE618944F920F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitU3Eb__29_1_m1BCEBEB3A93822C03F9BFD601A7EBC1FB8CA6755_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__22_0_mD1B7C55840B8789E575D17F2E28BE41222F05C1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_cctorU3Eb__22_1_m839E6085723C13399E8AAFD10EFE88461E10F11D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass29_0_U3CInitU3Eb__0_m22F895CE0EE10591001E1596E6BFAC84B4668465_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tDCDD06645718B06856BC7DD0DCF0BC9A71625236 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};
struct Il2CppArrayBounds;

// Lofelt.NiceVibrations.DeviceCapabilities
struct DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE  : public RuntimeObject
{
};

struct DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields
{
	// UnityEngine.RuntimePlatform Lofelt.NiceVibrations.DeviceCapabilities::<platform>k__BackingField
	int32_t ___U3CplatformU3Ek__BackingField_0;
	// System.Int32 Lofelt.NiceVibrations.DeviceCapabilities::<platformVersion>k__BackingField
	int32_t ___U3CplatformVersionU3Ek__BackingField_1;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_meetsAdvancedRequirements
	bool ____meetsAdvancedRequirements_2;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::<isVersionSupported>k__BackingField
	bool ___U3CisVersionSupportedU3Ek__BackingField_3;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_hasAmplitudeControl
	bool ____hasAmplitudeControl_4;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_hasFrequencyControl
	bool ____hasFrequencyControl_5;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_hasAmplitudeModulation
	bool ____hasAmplitudeModulation_6;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_hasFrequencyModulation
	bool ____hasFrequencyModulation_7;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_hasEmphasis
	bool ____hasEmphasis_8;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_canEmulateEmphasis
	bool ____canEmulateEmphasis_9;
	// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::_canLoop
	bool ____canLoop_10;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Lofelt.NiceVibrations.GamepadRumbler
struct GamepadRumbler_tCC2DEC7A0D857E5D8C9ED0EDFB779CA674DB3C9F  : public RuntimeObject
{
};

// Lofelt.NiceVibrations.HapticController
struct HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA  : public RuntimeObject
{
};

struct HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields
{
	// System.Boolean Lofelt.NiceVibrations.HapticController::lofeltHapticsInitalized
	bool ___lofeltHapticsInitalized_0;
	// System.Timers.Timer Lofelt.NiceVibrations.HapticController::playbackFinishedTimer
	Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* ___playbackFinishedTimer_1;
	// System.Single Lofelt.NiceVibrations.HapticController::clipLoadedDurationSecs
	float ___clipLoadedDurationSecs_2;
	// System.Boolean Lofelt.NiceVibrations.HapticController::clipLoaded
	bool ___clipLoaded_3;
	// System.Single Lofelt.NiceVibrations.HapticController::lastSeekTime
	float ___lastSeekTime_4;
	// System.Boolean Lofelt.NiceVibrations.HapticController::deviceMeetsAdvancedRequirements
	bool ___deviceMeetsAdvancedRequirements_5;
	// System.Boolean Lofelt.NiceVibrations.HapticController::isLoopingEnabledByUser
	bool ___isLoopingEnabledByUser_6;
	// System.Boolean Lofelt.NiceVibrations.HapticController::isPlaybackLooping
	bool ___isPlaybackLooping_7;
	// Lofelt.NiceVibrations.HapticPatterns/PresetType Lofelt.NiceVibrations.HapticController::_fallbackPreset
	int32_t ____fallbackPreset_8;
	// System.Boolean Lofelt.NiceVibrations.HapticController::_hapticsEnabled
	bool ____hapticsEnabled_9;
	// System.Single Lofelt.NiceVibrations.HapticController::_outputLevel
	float ____outputLevel_10;
	// System.Single Lofelt.NiceVibrations.HapticController::_clipLevel
	float ____clipLevel_11;
	// System.Action Lofelt.NiceVibrations.HapticController::LoadedClipChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___LoadedClipChanged_12;
	// System.Action Lofelt.NiceVibrations.HapticController::PlaybackStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___PlaybackStarted_13;
	// System.Action Lofelt.NiceVibrations.HapticController::PlaybackStopped
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___PlaybackStopped_14;
};

// Lofelt.NiceVibrations.JNIHelpers
struct JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA  : public RuntimeObject
{
};

struct JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields
{
	// UnityEngine.jvalue[] Lofelt.NiceVibrations.JNIHelpers::jniArgs
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___jniArgs_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
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

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_StaticFields
{
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t* ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t* ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t* ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t* ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t* ___s_cachedPreparedType5_5;
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

// Lofelt.NiceVibrations.HapticController/<>c
struct U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4  : public RuntimeObject
{
};

struct U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields
{
	// Lofelt.NiceVibrations.HapticController/<>c Lofelt.NiceVibrations.HapticController/<>c::<>9
	U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* ___U3CU3E9_0;
	// System.Threading.SendOrPostCallback Lofelt.NiceVibrations.HapticController/<>c::<>9__29_1
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___U3CU3E9__29_1_1;
};

// Lofelt.NiceVibrations.HapticController/<>c__DisplayClass29_0
struct U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA  : public RuntimeObject
{
	// System.Threading.SynchronizationContext Lofelt.NiceVibrations.HapticController/<>c__DisplayClass29_0::syncContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___syncContext_0;
};

// Lofelt.NiceVibrations.HapticSource/<>c
struct U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE  : public RuntimeObject
{
};

struct U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_StaticFields
{
	// Lofelt.NiceVibrations.HapticSource/<>c Lofelt.NiceVibrations.HapticSource/<>c::<>9
	U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* ___U3CU3E9_0;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
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

// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ___events_3;
};

struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields
{
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject* ___EventDisposed_1;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Lofelt.NiceVibrations.GamepadRumble
struct GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 
{
	// System.Int32[] Lofelt.NiceVibrations.GamepadRumble::durationsMs
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___durationsMs_0;
	// System.Int32 Lofelt.NiceVibrations.GamepadRumble::totalDurationMs
	int32_t ___totalDurationMs_1;
	// System.Single[] Lofelt.NiceVibrations.GamepadRumble::lowFrequencyMotorSpeeds
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___lowFrequencyMotorSpeeds_2;
	// System.Single[] Lofelt.NiceVibrations.GamepadRumble::highFrequencyMotorSpeeds
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___highFrequencyMotorSpeeds_3;
};
// Native definition for P/Invoke marshalling of Lofelt.NiceVibrations.GamepadRumble
struct GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___durationsMs_0;
	int32_t ___totalDurationMs_1;
	Il2CppSafeArray/*NONE*/* ___lowFrequencyMotorSpeeds_2;
	Il2CppSafeArray/*NONE*/* ___highFrequencyMotorSpeeds_3;
};
// Native definition for COM marshalling of Lofelt.NiceVibrations.GamepadRumble
struct GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___durationsMs_0;
	int32_t ___totalDurationMs_1;
	Il2CppSafeArray/*NONE*/* ___lowFrequencyMotorSpeeds_2;
	Il2CppSafeArray/*NONE*/* ___highFrequencyMotorSpeeds_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tA621D05C74A39B7C924F15177987D9C57DBCAC79 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tA621D05C74A39B7C924F15177987D9C57DBCAC79__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tD7D0F6EA57693B94EB4C3FF244A3B9D3BBF692B3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tD7D0F6EA57693B94EB4C3FF244A3B9D3BBF692B3__padding[32];
	};
};

// Lofelt.NiceVibrations.HapticPatterns/Pattern
struct Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72 
{
	// System.Single[] Lofelt.NiceVibrations.HapticPatterns/Pattern::time
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___time_0;
	// System.Single[] Lofelt.NiceVibrations.HapticPatterns/Pattern::amplitude
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___amplitude_1;
};

struct Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_StaticFields
{
	// System.String Lofelt.NiceVibrations.HapticPatterns/Pattern::clipJsonTemplate
	String_t* ___clipJsonTemplate_2;
};
// Native definition for P/Invoke marshalling of Lofelt.NiceVibrations.HapticPatterns/Pattern
struct Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___time_0;
	Il2CppSafeArray/*NONE*/* ___amplitude_1;
};
// Native definition for COM marshalling of Lofelt.NiceVibrations.HapticPatterns/Pattern
struct Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___time_0;
	Il2CppSafeArray/*NONE*/* ___amplitude_1;
};

// Lofelt.NiceVibrations.HapticPatterns/Preset
struct Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 
{
	// Lofelt.NiceVibrations.HapticPatterns/PresetType Lofelt.NiceVibrations.HapticPatterns/Preset::type
	int32_t ___type_0;
	// System.Single[] Lofelt.NiceVibrations.HapticPatterns/Preset::maximumAmplitudePattern
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___maximumAmplitudePattern_1;
	// System.Byte[] Lofelt.NiceVibrations.HapticPatterns/Preset::jsonClip
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___jsonClip_2;
};
// Native definition for P/Invoke marshalling of Lofelt.NiceVibrations.HapticPatterns/Preset
struct Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshaled_pinvoke
{
	int32_t ___type_0;
	Il2CppSafeArray/*NONE*/* ___maximumAmplitudePattern_1;
	Il2CppSafeArray/*NONE*/* ___jsonClip_2;
};
// Native definition for COM marshalling of Lofelt.NiceVibrations.HapticPatterns/Preset
struct Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshaled_com
{
	int32_t ___type_0;
	Il2CppSafeArray/*NONE*/* ___maximumAmplitudePattern_1;
	Il2CppSafeArray/*NONE*/* ___jsonClip_2;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::291429BD4426C606843ABEB925268AD87767305C4AC8069D1191FFDE90A3499F
	__StaticArrayInitTypeSizeU3D32_tD7D0F6EA57693B94EB4C3FF244A3B9D3BBF692B3 ___291429BD4426C606843ABEB925268AD87767305C4AC8069D1191FFDE90A3499F_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::34A0AC4C4C065F0140B16ECC7E9690749B60C5C0EB2D6021CC75FEEBDCDCA61F
	__StaticArrayInitTypeSizeU3D16_tA621D05C74A39B7C924F15177987D9C57DBCAC79 ___34A0AC4C4C065F0140B16ECC7E9690749B60C5C0EB2D6021CC75FEEBDCDCA61F_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::DF8E296768F9446BD84A1631B3922DAA86C5CC0EFB71B660BF0B6DF542707096
	__StaticArrayInitTypeSizeU3D16_tA621D05C74A39B7C924F15177987D9C57DBCAC79 ___DF8E296768F9446BD84A1631B3922DAA86C5CC0EFB71B660BF0B6DF542707096_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2
	__StaticArrayInitTypeSizeU3D32_tD7D0F6EA57693B94EB4C3FF244A3B9D3BBF692B3 ___EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_3;
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

// System.Timers.ElapsedEventArgs
struct ElapsedEventArgs_t74C1E2D692A82825805E5EC84EE73F5B053027C1  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.DateTime System.Timers.ElapsedEventArgs::time
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___time_1;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Lofelt.NiceVibrations.HapticPatterns
struct HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56  : public RuntimeObject
{
};

struct HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields
{
	// System.String Lofelt.NiceVibrations.HapticPatterns::emphasisTemplate
	String_t* ___emphasisTemplate_0;
	// System.String Lofelt.NiceVibrations.HapticPatterns::constantTemplate
	String_t* ___constantTemplate_1;
	// System.Globalization.NumberFormatInfo Lofelt.NiceVibrations.HapticPatterns::numberFormat
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numberFormat_2;
	// System.Single[] Lofelt.NiceVibrations.HapticPatterns::constantPatternTime
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___constantPatternTime_3;
	// Lofelt.NiceVibrations.HapticPatterns/Preset Lofelt.NiceVibrations.HapticPatterns::Selection
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Selection_4;
	// Lofelt.NiceVibrations.HapticPatterns/Preset Lofelt.NiceVibrations.HapticPatterns::Light
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Light_5;
	// Lofelt.NiceVibrations.HapticPatterns/Preset Lofelt.NiceVibrations.HapticPatterns::Medium
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Medium_6;
	// Lofelt.NiceVibrations.HapticPatterns/Preset Lofelt.NiceVibrations.HapticPatterns::Heavy
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Heavy_7;
	// Lofelt.NiceVibrations.HapticPatterns/Preset Lofelt.NiceVibrations.HapticPatterns::Rigid
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Rigid_8;
	// Lofelt.NiceVibrations.HapticPatterns/Preset Lofelt.NiceVibrations.HapticPatterns::Soft
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Soft_9;
	// Lofelt.NiceVibrations.HapticPatterns/Preset Lofelt.NiceVibrations.HapticPatterns::Success
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Success_10;
	// Lofelt.NiceVibrations.HapticPatterns/Preset Lofelt.NiceVibrations.HapticPatterns::Failure
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Failure_11;
	// Lofelt.NiceVibrations.HapticPatterns/Preset Lofelt.NiceVibrations.HapticPatterns::Warning
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 ___Warning_12;
};

// Lofelt.NiceVibrations.LofeltHaptics
struct LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A  : public RuntimeObject
{
};

struct LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields
{
	// UnityEngine.AndroidJavaObject Lofelt.NiceVibrations.LofeltHaptics::lofeltHaptics
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___lofeltHaptics_0;
	// UnityEngine.AndroidJavaObject Lofelt.NiceVibrations.LofeltHaptics::hapticPatterns
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___hapticPatterns_1;
	// System.Int64 Lofelt.NiceVibrations.LofeltHaptics::nativeController
	int64_t ___nativeController_2;
	// System.IntPtr Lofelt.NiceVibrations.LofeltHaptics::playMethodId
	intptr_t ___playMethodId_3;
	// System.IntPtr Lofelt.NiceVibrations.LofeltHaptics::stopMethodId
	intptr_t ___stopMethodId_4;
	// System.IntPtr Lofelt.NiceVibrations.LofeltHaptics::seekMethodId
	intptr_t ___seekMethodId_5;
	// System.IntPtr Lofelt.NiceVibrations.LofeltHaptics::loopMethodId
	intptr_t ___loopMethodId_6;
	// System.IntPtr Lofelt.NiceVibrations.LofeltHaptics::setAmplitudeMultiplicationMethodId
	intptr_t ___setAmplitudeMultiplicationMethodId_7;
	// System.IntPtr Lofelt.NiceVibrations.LofeltHaptics::playMaximumAmplitudePattern
	intptr_t ___playMaximumAmplitudePattern_8;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.Timers.Timer
struct Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
	// System.Double System.Timers.Timer::interval
	double ___interval_4;
	// System.Boolean System.Timers.Timer::enabled
	bool ___enabled_5;
	// System.Boolean System.Timers.Timer::initializing
	bool ___initializing_6;
	// System.Boolean System.Timers.Timer::delayedEnable
	bool ___delayedEnable_7;
	// System.Timers.ElapsedEventHandler System.Timers.Timer::onIntervalElapsed
	ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51* ___onIntervalElapsed_8;
	// System.Boolean System.Timers.Timer::autoReset
	bool ___autoReset_9;
	// System.ComponentModel.ISynchronizeInvoke System.Timers.Timer::synchronizingObject
	RuntimeObject* ___synchronizingObject_10;
	// System.Boolean System.Timers.Timer::disposed
	bool ___disposed_11;
	// System.Threading.Timer System.Timers.Timer::timer
	Timer_t763C1D5F5A36087DC92C7DA4D1F8AB578F83AB00* ___timer_12;
	// System.Threading.TimerCallback System.Timers.Timer::callback
	TimerCallback_t7455CAFACC7054E62879920AFC84C5DA98B8C7CD* ___callback_13;
	// System.Object System.Timers.Timer::cookie
	RuntimeObject* ___cookie_14;
};

// UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Boolean UnityEngine.jvalue::z
			bool ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			bool ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte UnityEngine.jvalue::b
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Char UnityEngine.jvalue::c
			Il2CppChar ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Il2CppChar ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 UnityEngine.jvalue::s
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.jvalue::i
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 UnityEngine.jvalue::j
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single UnityEngine.jvalue::f
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double UnityEngine.jvalue::d
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.IntPtr UnityEngine.jvalue::l
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.jvalue
struct jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___z_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___z_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___b_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___b_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___c_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___c_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___i_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___i_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___j_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___j_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___f_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___f_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___d_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___d_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			intptr_t ___l_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			intptr_t ___l_8_forAlignmentOnly;
		};
	};
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Timers.ElapsedEventHandler
struct ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51  : public MulticastDelegate_t
{
};

// Lofelt.NiceVibrations.HapticClip
struct HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Byte[] Lofelt.NiceVibrations.HapticClip::json
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___json_4;
	// Lofelt.NiceVibrations.GamepadRumble Lofelt.NiceVibrations.HapticClip::gamepadRumble
	GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 ___gamepadRumble_5;
};

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Lofelt.NiceVibrations.HapticReceiver
struct HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Lofelt.NiceVibrations.HapticReceiver::_outputLevel
	float ____outputLevel_4;
	// System.Boolean Lofelt.NiceVibrations.HapticReceiver::_hapticsEnabled
	bool ____hapticsEnabled_5;
};

// Lofelt.NiceVibrations.HapticSource
struct HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Lofelt.NiceVibrations.HapticClip Lofelt.NiceVibrations.HapticSource::clip
	HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* ___clip_5;
	// System.Int32 Lofelt.NiceVibrations.HapticSource::priority
	int32_t ___priority_6;
	// System.Single Lofelt.NiceVibrations.HapticSource::seekTime
	float ___seekTime_7;
	// Lofelt.NiceVibrations.HapticPatterns/PresetType Lofelt.NiceVibrations.HapticSource::_fallbackPreset
	int32_t ____fallbackPreset_8;
	// System.Boolean Lofelt.NiceVibrations.HapticSource::_loop
	bool ____loop_9;
	// System.Single Lofelt.NiceVibrations.HapticSource::_level
	float ____level_10;
	// System.Single Lofelt.NiceVibrations.HapticSource::_frequencyShift
	float ____frequencyShift_11;
};

struct HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields
{
	// Lofelt.NiceVibrations.HapticSource Lofelt.NiceVibrations.HapticSource::loadedHapticSource
	HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* ___loadedHapticSource_12;
	// Lofelt.NiceVibrations.HapticSource Lofelt.NiceVibrations.HapticSource::lastPlayedHapticSource
	HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* ___lastPlayedHapticSource_13;
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.jvalue[]
struct jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F  : public RuntimeArray
{
	ALIGN_FIELD (8) jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 m_Items[1];

	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, jvalue_t1756CE401EE222450C9AD0B98CB30E213D4A3225 value)
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


// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// ReturnType Lofelt.NiceVibrations.JNIHelpers::Call<System.Boolean>(UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JNIHelpers_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m96D187D8E7B92D10C0CBA2E20B9B6D41B8992DF5_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, String_t* ___methodName1, const RuntimeMethod* method) ;
// ReturnType Lofelt.NiceVibrations.JNIHelpers::Call<System.Single>(UnityEngine.AndroidJavaObject,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JNIHelpers_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m55C33AAF27F7978DFED30C5DF13AE618944F920F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, String_t* ___methodName1, const RuntimeMethod* method) ;

// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.String UnityEngine.SystemInfo::get_operatingSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SystemInfo_get_operatingSystem_m47B20646C221517ACA8F99DE8576BF794AEB6F8D (const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Int32 Lofelt.NiceVibrations.DeviceCapabilities::get_platformVersion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DeviceCapabilities_get_platformVersion_m0A60F6AEB62C7F305D64E89587392EFDCE4E4186_inline (const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.LofeltHaptics::DeviceMeetsMinimumPlatformRequirements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_m34615585FBE08942831610AC262ACDEE23BDD1B3 (const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.GamepadRumble::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumble_IsValid_m77AAB239FF848FBF602F878764E3FA50B6A4BFB2 (GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5 (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::ApplyLevelsToLofeltHaptics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_ApplyLevelsToLofeltHaptics_m5ACDECB79785ED4783E5F97AF6DBD854F33A0726 (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::ApplyLevelsToGamepadRumbler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_ApplyLevelsToGamepadRumbler_m9D1B96D0E2AE8863A88A3262E165398AB2FD9948 (const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.HapticController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73 (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::SetAmplitudeMultiplication(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_SetAmplitudeMultiplication_m21AF8A0DBE888DF4354815DC65FD3C5635AA6684 (float ___factor0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_mD835FCF0A9C4B2768A4B61013CBBD419DB8BD684 (U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA* __this, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82 (const RuntimeMethod* method) ;
// System.Void System.Timers.ElapsedEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ElapsedEventHandler__ctor_mAB5D9F11BB0B719A17105C636543958CC6F78CBD (ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Timers.Timer::add_Elapsed(System.Timers.ElapsedEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_add_Elapsed_mA30E2E614E703D6FD8260EB10575C0FB719C0B5D (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51* ___value0, const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_isVersionSupported()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_isVersionSupported_m2349570E6B8BAABBAD18ECF19D758436A1282496_inline (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Initialize_m5A160C65E0C3709121B048C91AED126CE2C642E8 (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.DeviceCapabilities::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCapabilities_Init_m7AC099423DD92EFAC32183C356021EBC63C89C47 (const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_meetsAdvancedRequirements()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_meetsAdvancedRequirements_m2501828C362AB5507BF4EE8BF1E9FCEE92CDDA46_inline (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Init_m6C2B658F77FFBA6ABB7461D141E3E6A8463CF197 (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Unload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Unload_mEC8030BBE6C2FD9FDB87B20469FEB4E70AB26564 (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Load_mEDE5AABA9357F121B6B13D5EFABAD832DE2D9FDC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::set_clipLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_clipLevel_m80B5B8741E37779079AFD64191F140D73AC5E2EF (float ___value0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::Load(System.Byte[],Lofelt.NiceVibrations.GamepadRumble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_mB19C1D42F42F987DAF09066928F5FF3CE97440FA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___json0, GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 ___rumble1, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_mE6AA251161ED4A27476BC30C51AD716D49B15573 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Load(Lofelt.NiceVibrations.GamepadRumble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Load_m98F6602C87AD124ECDD629CD00D5EBEF8563345A (GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 ___rumble0, const RuntimeMethod* method) ;
// System.Void System.Timers.Timer::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_set_Enabled_m96249C4F2CB558B6B65BBA006B55B4423830F38D (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.GamepadRumbler::CanPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumbler_CanPlay_mFFF359E6E875933036961CAFC069B32989DA533F (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Play_m43B8664528C63A77B17FF1027F72B5CF421AE3D2 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_canLoop()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_canLoop_m69DF52370C735DBBD712DB92B96F8961B5A469CD_inline (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Play_mD458011A67C0A99B637B629B2B805E1D919814C7 (const RuntimeMethod* method) ;
// Lofelt.NiceVibrations.HapticPatterns/PresetType Lofelt.NiceVibrations.HapticController::get_fallbackPreset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HapticController_get_fallbackPreset_mFB148A0F3EAABF5B2B9B2EE591D70616B8E00548_inline (const RuntimeMethod* method) ;
// System.Single Lofelt.NiceVibrations.HapticPatterns::GetPresetDuration(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticPatterns_GetPresetDuration_m1BC31066EDB5BF1475BB55ABC4CADC5FD7CAE692 (int32_t ___presetType0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticPatterns::PlayPreset(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayPreset_m4BBC460337643C4051BA3AC077AAD1E2BB4B9B90 (int32_t ___presetType0, const RuntimeMethod* method) ;
// System.Void System.Timers.Timer::set_Interval(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_set_Interval_m85B315A45E5CC4B9E5BA84891636B7F368A05536 (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void System.Timers.Timer::set_AutoReset(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_set_AutoReset_mCDD4362A339ADAA69BAB7FE596BE400C161C328D (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::HandleFinishedPlayback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_HandleFinishedPlayback_m65689D7AA8872B72B81066A819E5C84B0EC1454E (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::Load(Lofelt.NiceVibrations.HapticClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_mE91A8FCA5AD81A52B0960D91A9A57E644B3A6D83 (HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* ___clip0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4 (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Stop_m1AC86C07B8885A42AB5D5988F5C6C3BC55FA642B (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::StopPattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_StopPattern_mDA2719D6A8F90D32D956ED4E01401774F9B80AC5 (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Stop_m5CDA6A7D1F191046DEDF2AA37EFDD030A63920F9 (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Seek(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Seek_m6F57DA36A2D3780A7CCDF9F2E3E0A14C1ED66D4E (float ___time0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::SetFrequencyShift(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_SetFrequencyShift_m58733F5BB1A11401DE5E843F34ADB79C318AD318 (float ___shift0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Loop_m37A6519C484CE0B973B41C0A4C2244A85D5D314B (bool ___enabled0, const RuntimeMethod* method) ;
// System.Boolean System.Timers.Timer::get_Enabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Timer_get_Enabled_m082C8CCFB9C6936523EDE3E8C8DD010C22EDA032_inline (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::Seek(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Seek_mF49BDF3CE3FE84E2412324A917067F7D37919D64 (float ___time0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::set_clipFrequencyShift(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_clipFrequencyShift_m46D7B83FD3D5FEFF6B9E039DA1685C58ECFE6612 (float ___value0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::Loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA (bool ___enabled0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::set_fallbackPreset(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HapticController_set_fallbackPreset_m59C957576E33F13392F08310B4E5F8D610CA2EA1_inline (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Timers.Timer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer__ctor_mB9CD175ABB2BB47E091B70C9E6A5CEB00D48A2B0 (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4BE54460DE9013F0322B55C7F93B41BB7F1B9479 (U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* __this, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA (String_t* ___path0, const RuntimeMethod* method) ;
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// System.Void System.Globalization.NumberFormatInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatInfo__ctor_m94502038B1DB45D50D1331C312DDAD0D80CD608C (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Void System.Globalization.NumberFormatInfo::set_NumberDecimalSeparator(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatInfo_set_NumberDecimalSeparator_mEC8D7493863AD768CF6107DE7617811E1105DF10 (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticPatterns/Preset::.ctor(Lofelt.NiceVibrations.HapticPatterns/PresetType,System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572 (Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828* __this, int32_t ___type0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___time1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___amplitude2, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.HapticController::get_hapticsEnabled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887_inline (const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.GamepadRumbler::IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumbler_IsConnected_mD3EA909001C5BB4BACA421C42FC7244BEC11CD15 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A (float* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.LofeltHaptics::PlayMaximumAmplitudePattern(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_PlayMaximumAmplitudePattern_m9750CD1982EA6A6D924C464F135250FB6569C1F7 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___timings0, const RuntimeMethod* method) ;
// Lofelt.NiceVibrations.HapticPatterns/Preset Lofelt.NiceVibrations.HapticPatterns::GetPresetForType(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 HapticPatterns_GetPresetForType_m9FC81F286C1CCB677B62EBE48CB2E930102AEB37 (int32_t ___type0, const RuntimeMethod* method) ;
// System.Single Lofelt.NiceVibrations.HapticPatterns/Preset::GetDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Preset_GetDuration_mB77C3715AAA5BA8308AE5F760CDC922CFE2218A2 (Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828* __this, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticPatterns/Pattern::.ctor(System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pattern__ctor_m0381400DEF8AC63215B136B318282B8B39D7CE22 (Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___time0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___amplitude1, const RuntimeMethod* method) ;
// Lofelt.NiceVibrations.GamepadRumble Lofelt.NiceVibrations.HapticPatterns/Pattern::ToRumble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 Pattern_ToRumble_mFB8A74A47B54296D38A3F46A9DBD900C308EB006 (Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String Lofelt.NiceVibrations.HapticPatterns/Pattern::ToClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Pattern_ToClip_mFD7C70C9687B1FAD4AB50B7D082C0C07F5754FBD (Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72* __this, const RuntimeMethod* method) ;
// System.Single Lofelt.NiceVibrations.HapticController::get_outputLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticController_get_outputLevel_mB9E570F29478F1DD5DCAF278000A0243D2884953_inline (const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::set_outputLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_outputLevel_m259DA805820909202D9A3919CEDFFB7256B4BBCC (float ___value0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::set_hapticsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_hapticsEnabled_m9A2E6CA744C9D85358114BEFE898155E0C958C2B (bool ___value0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticController::ProcessApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_ProcessApplicationFocus_m161EAF2B8408B1AC9C74C9D2D41F637071C93C07 (bool ___hasFocus0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.HapticSource::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.HapticSource::CanPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_CanPlay_m6573EFA48B841878DF318B0D14F0C1B0CC67C9CE (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.HapticSource::get_loop()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HapticSource_get_loop_mE7DBF84772815100A8282D36A303AD8B780F7937_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
// System.Single Lofelt.NiceVibrations.HapticSource::get_level()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticSource_get_level_m7C663BF92A50D6DB6E85BCE06F43DB56819B3F10_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
// System.Single Lofelt.NiceVibrations.HapticSource::get_frequencyShift()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticSource_get_frequencyShift_m52C31EFE74C8C6A3200D8B762933216EA74EF7E4_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
// Lofelt.NiceVibrations.HapticPatterns/PresetType Lofelt.NiceVibrations.HapticSource::get_fallbackPreset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HapticSource_get_fallbackPreset_mEECE617416CB3FF45437D70015336FE602735397_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.HapticController::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_IsPlaying_m2184DE06BA77A234A514D91B286CE8BF2FA27482 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_Stop_m565E771BCE6FE1F62EE12F0267211C9CCAE3EC00 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.HapticSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5D6483E39A7DF2468D6200E50958D5AE115FF193 (U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::FindClass(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9 (String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB (intptr_t ___obj0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetStaticMethodID(System.IntPtr,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3 (intptr_t ___clazz0, String_t* ___name1, String_t* ___sig2, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNI::CallStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStringMethod_m52FAF2826B75AF2AEA8F848AEC973A682216EC4C (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNI::CallStaticStringMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNI_CallStaticStringMethod_m7E8E3AFF8296764C324060E65B052B23500C18AB (intptr_t ___clazz0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::CallVoidMethod(System.IntPtr,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_CallVoidMethod_mFCFF6A5FF4A51305C3D2DBFB3A0699617EF40D48 (intptr_t ___obj0, intptr_t ___methodID1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___args2, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::ExceptionOccurred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNI::ExceptionClear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8 (const RuntimeMethod* method) ;
// System.String Lofelt.NiceVibrations.JNIHelpers::javaThrowableToString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JNIHelpers_javaThrowableToString_m161BACA2F355C3D73F8AACD8C58C0DA6EC1E3117 (intptr_t ___throwable0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0 (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.JNIHelpers::Call(UnityEngine.AndroidJavaObject,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_m9EB5BCDAE56AE45AE865173DAB134FB35C011C75 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, intptr_t ___methodId1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___jniArgs2, const RuntimeMethod* method) ;
// UnityEngine.jvalue[] UnityEngine.AndroidJNIHelper::CreateJNIArgArray(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNIHelper::DeleteJNIArgArray(System.Object[],UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___jniArgs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___fieldName0, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___fieldName0, method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___className0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int64>(System.String,System.Object[])
inline int64_t AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method)
{
	return ((  int64_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_gshared)(__this, ___methodName0, ___args1, method);
}
// System.IntPtr UnityEngine.AndroidJavaObject::GetRawClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8 (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// ReturnType Lofelt.NiceVibrations.JNIHelpers::Call<System.Boolean>(UnityEngine.AndroidJavaObject,System.String)
inline bool JNIHelpers_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m96D187D8E7B92D10C0CBA2E20B9B6D41B8992DF5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, String_t* ___methodName1, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))JNIHelpers_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m96D187D8E7B92D10C0CBA2E20B9B6D41B8992DF5_gshared)(___obj0, ___methodName1, method);
}
// System.IntPtr System.IntPtr::op_Explicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0 (int64_t ___value0, const RuntimeMethod* method) ;
// System.Boolean Lofelt.NiceVibrations.LofeltHaptics::lofeltHapticsLoadDirect(System.IntPtr,System.Byte[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LofeltHaptics_lofeltHapticsLoadDirect_m212DB3189B44BE54F822058250FAE6FFBB72500B (intptr_t ___controller0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int64_t ___size2, const RuntimeMethod* method) ;
// ReturnType Lofelt.NiceVibrations.JNIHelpers::Call<System.Single>(UnityEngine.AndroidJavaObject,System.String)
inline float JNIHelpers_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m55C33AAF27F7978DFED30C5DF13AE618944F920F (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, String_t* ___methodName1, const RuntimeMethod* method)
{
	return ((  float (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))JNIHelpers_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m55C33AAF27F7978DFED30C5DF13AE618944F920F_gshared)(___obj0, ___methodName1, method);
}
// System.Void Lofelt.NiceVibrations.JNIHelpers::Call(UnityEngine.AndroidJavaObject,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_m4C7983BAB087B9A0C617F22D80760AC83698D7F5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, intptr_t ___methodId1, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.JNIHelpers::Call(UnityEngine.AndroidJavaObject,System.IntPtr,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_mFEB7DB3EDB24CC2CB122A7F496F76E2A81DE6660 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, intptr_t ___methodId1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___arg2, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.JNIHelpers::Call(UnityEngine.AndroidJavaObject,System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_mE02DC3C0B0732DF8C4144494DA6AAC36509D53AD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, intptr_t ___methodId1, float ___arg2, const RuntimeMethod* method) ;
// System.Void Lofelt.NiceVibrations.JNIHelpers::Call(UnityEngine.AndroidJavaObject,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_mF7C012A9DDF145A65C9FCFCD82B612E6FBB4B9A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, intptr_t ___methodId1, bool ___arg2, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lofelt_sdk_INTERNAL
IL2CPP_EXTERN_C int32_t DEFAULT_CALL lofeltHapticsLoadDirect(intptr_t, uint8_t*, int64_t);
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
// UnityEngine.RuntimePlatform Lofelt.NiceVibrations.DeviceCapabilities::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeviceCapabilities_get_platform_m4E401F483788E655EB8264E8D032B1725E6ACED9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static RuntimePlatform platform { get; }
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		int32_t L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CplatformU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Int32 Lofelt.NiceVibrations.DeviceCapabilities::get_platformVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DeviceCapabilities_get_platformVersion_m0A60F6AEB62C7F305D64E89587392EFDCE4E4186 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int platformVersion { get; }
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		int32_t L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CplatformVersionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_meetsAdvancedRequirements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_meetsAdvancedRequirements_m2501828C362AB5507BF4EE8BF1E9FCEE92CDDA46 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _meetsAdvancedRequirements;
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____meetsAdvancedRequirements_2;
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_isVersionSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_isVersionSupported_m2349570E6B8BAABBAD18ECF19D758436A1282496 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isVersionSupported { get; }
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CisVersionSupportedU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_hasAmplitudeControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_hasAmplitudeControl_mD3385B8AD2B572E63CE8DEA5E53162747E808B2C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _hasAmplitudeControl;
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____hasAmplitudeControl_4;
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_hasFrequencyControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_hasFrequencyControl_m7487FFFE57D7805F867756DF9B55B9035D7D43FF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _hasFrequencyControl;
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____hasFrequencyControl_5;
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_hasAmplitudeModulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_hasAmplitudeModulation_mD3C8FD6CBAFB4A61328AB07465DD9067A8D3E0FB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _hasAmplitudeModulation;
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____hasAmplitudeModulation_6;
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_hasFrequencyModulation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_hasFrequencyModulation_m813D6D6F555A3FA62A94B55A937D654066B08237 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _hasFrequencyModulation;
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____hasFrequencyModulation_7;
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_hasEmphasis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_hasEmphasis_mEB0934F078C0FF7C7ACC3032017377220117DBD1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _hasEmphasis;
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____hasEmphasis_8;
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_canEmulateEmphasis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_canEmulateEmphasis_mEF714028AD5826BC9AEC5FF84C653826363B9C07 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _canEmulateEmphasis;
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____canEmulateEmphasis_9;
		return L_0;
	}
}
// System.Boolean Lofelt.NiceVibrations.DeviceCapabilities::get_canLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_canLoop_m69DF52370C735DBBD712DB92B96F8961B5A469CD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _canLoop;
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____canLoop_10;
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.DeviceCapabilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCapabilities__cctor_mF71D011FD1233CAE59C93387DB7F4064B51DAA42 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// platform = Application.platform;
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CplatformU3Ek__BackingField_0 = L_0;
		// platformVersion = 0;
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CplatformVersionU3Ek__BackingField_1 = 0;
		// isVersionSupported = false;
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CisVersionSupportedU3Ek__BackingField_3 = (bool)0;
		// platformVersion = int.Parse(SystemInfo.operatingSystem.Substring(SystemInfo.operatingSystem.IndexOf("-") + 1, 3));
		String_t* L_1;
		L_1 = SystemInfo_get_operatingSystem_m47B20646C221517ACA8F99DE8576BF794AEB6F8D(NULL);
		String_t* L_2;
		L_2 = SystemInfo_get_operatingSystem_m47B20646C221517ACA8F99DE8576BF794AEB6F8D(NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_2, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		NullCheck(L_1);
		String_t* L_4;
		L_4 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_1, ((int32_t)il2cpp_codegen_add(L_3, 1)), 3, NULL);
		int32_t L_5;
		L_5 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_4, NULL);
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CplatformVersionU3Ek__BackingField_1 = L_5;
		// isVersionSupported = platformVersion >= minimumSupportedAndroidSDKVersion;
		int32_t L_6;
		L_6 = DeviceCapabilities_get_platformVersion_m0A60F6AEB62C7F305D64E89587392EFDCE4E4186_inline(NULL);
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CisVersionSupportedU3Ek__BackingField_3 = (bool)((((int32_t)((((int32_t)L_6) < ((int32_t)((int32_t)17)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.DeviceCapabilities::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeviceCapabilities_Init_m7AC099423DD92EFAC32183C356021EBC63C89C47 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _hasAmplitudeControl = LofeltHaptics.DeviceMeetsMinimumPlatformRequirements();
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_m34615585FBE08942831610AC262ACDEE23BDD1B3(NULL);
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____hasAmplitudeControl_4 = L_0;
		// _canEmulateEmphasis = LofeltHaptics.DeviceMeetsMinimumPlatformRequirements();
		bool L_1;
		L_1 = LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_m34615585FBE08942831610AC262ACDEE23BDD1B3(NULL);
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____canEmulateEmphasis_9 = L_1;
		// _canLoop = LofeltHaptics.DeviceMeetsMinimumPlatformRequirements();
		bool L_2;
		L_2 = LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_m34615585FBE08942831610AC262ACDEE23BDD1B3(NULL);
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____canLoop_10 = L_2;
		// _meetsAdvancedRequirements = LofeltHaptics.DeviceMeetsMinimumPlatformRequirements();
		bool L_3;
		L_3 = LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_m34615585FBE08942831610AC262ACDEE23BDD1B3(NULL);
		((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____meetsAdvancedRequirements_2 = L_3;
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
// Conversion methods for marshalling of: Lofelt.NiceVibrations.GamepadRumble
IL2CPP_EXTERN_C void GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshal_pinvoke(const GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240& unmarshaled, GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshaled_pinvoke& marshaled)
{
	marshaled.___durationsMs_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.___durationsMs_0);
	marshaled.___totalDurationMs_1 = unmarshaled.___totalDurationMs_1;
	marshaled.___lowFrequencyMotorSpeeds_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___lowFrequencyMotorSpeeds_2);
	marshaled.___highFrequencyMotorSpeeds_3 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___highFrequencyMotorSpeeds_3);
}
IL2CPP_EXTERN_C void GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshal_pinvoke_back(const GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshaled_pinvoke& marshaled, GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___durationsMs_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___durationsMs_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___durationsMs_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___durationsMs_0));
	int32_t unmarshaledtotalDurationMs_temp_1 = 0;
	unmarshaledtotalDurationMs_temp_1 = marshaled.___totalDurationMs_1;
	unmarshaled.___totalDurationMs_1 = unmarshaledtotalDurationMs_temp_1;
	unmarshaled.___lowFrequencyMotorSpeeds_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___lowFrequencyMotorSpeeds_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___lowFrequencyMotorSpeeds_2), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___lowFrequencyMotorSpeeds_2));
	unmarshaled.___highFrequencyMotorSpeeds_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___highFrequencyMotorSpeeds_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___highFrequencyMotorSpeeds_3), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___highFrequencyMotorSpeeds_3));
}
// Conversion method for clean up from marshalling of: Lofelt.NiceVibrations.GamepadRumble
IL2CPP_EXTERN_C void GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshal_pinvoke_cleanup(GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___durationsMs_0);
	marshaled.___durationsMs_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___lowFrequencyMotorSpeeds_2);
	marshaled.___lowFrequencyMotorSpeeds_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___highFrequencyMotorSpeeds_3);
	marshaled.___highFrequencyMotorSpeeds_3 = NULL;
}
// Conversion methods for marshalling of: Lofelt.NiceVibrations.GamepadRumble
IL2CPP_EXTERN_C void GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshal_com(const GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240& unmarshaled, GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshaled_com& marshaled)
{
	marshaled.___durationsMs_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.___durationsMs_0);
	marshaled.___totalDurationMs_1 = unmarshaled.___totalDurationMs_1;
	marshaled.___lowFrequencyMotorSpeeds_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___lowFrequencyMotorSpeeds_2);
	marshaled.___highFrequencyMotorSpeeds_3 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___highFrequencyMotorSpeeds_3);
}
IL2CPP_EXTERN_C void GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshal_com_back(const GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshaled_com& marshaled, GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___durationsMs_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___durationsMs_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___durationsMs_0), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, marshaled.___durationsMs_0));
	int32_t unmarshaledtotalDurationMs_temp_1 = 0;
	unmarshaledtotalDurationMs_temp_1 = marshaled.___totalDurationMs_1;
	unmarshaled.___totalDurationMs_1 = unmarshaledtotalDurationMs_temp_1;
	unmarshaled.___lowFrequencyMotorSpeeds_2 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___lowFrequencyMotorSpeeds_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___lowFrequencyMotorSpeeds_2), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___lowFrequencyMotorSpeeds_2));
	unmarshaled.___highFrequencyMotorSpeeds_3 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___highFrequencyMotorSpeeds_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___highFrequencyMotorSpeeds_3), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___highFrequencyMotorSpeeds_3));
}
// Conversion method for clean up from marshalling of: Lofelt.NiceVibrations.GamepadRumble
IL2CPP_EXTERN_C void GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshal_com_cleanup(GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___durationsMs_0);
	marshaled.___durationsMs_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___lowFrequencyMotorSpeeds_2);
	marshaled.___lowFrequencyMotorSpeeds_2 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___highFrequencyMotorSpeeds_3);
	marshaled.___highFrequencyMotorSpeeds_3 = NULL;
}
// System.Boolean Lofelt.NiceVibrations.GamepadRumble::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumble_IsValid_m77AAB239FF848FBF602F878764E3FA50B6A4BFB2 (GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240* __this, const RuntimeMethod* method) 
{
	{
		// return durationsMs != null &&
		//        lowFrequencyMotorSpeeds != null &&
		//        highFrequencyMotorSpeeds != null &&
		//        durationsMs.Length == lowFrequencyMotorSpeeds.Length &&
		//        durationsMs.Length == highFrequencyMotorSpeeds.Length &&
		//        durationsMs.Length > 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___durationsMs_0;
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___lowFrequencyMotorSpeeds_2;
		if (!L_1)
		{
			goto IL_0047;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___highFrequencyMotorSpeeds_3;
		if (!L_2)
		{
			goto IL_0047;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___durationsMs_0;
		NullCheck(L_3);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___lowFrequencyMotorSpeeds_2;
		NullCheck(L_4);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) == ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0047;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___durationsMs_0;
		NullCheck(L_5);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___highFrequencyMotorSpeeds_3;
		NullCheck(L_6);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) == ((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))))
		{
			goto IL_0047;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->___durationsMs_0;
		NullCheck(L_7);
		return (bool)((!(((uint32_t)(((RuntimeArray*)L_7)->max_length)) <= ((uint32_t)0)))? 1 : 0);
	}

IL_0047:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool GamepadRumble_IsValid_m77AAB239FF848FBF602F878764E3FA50B6A4BFB2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240*>(__this + _offset);
	bool _returnValue;
	_returnValue = GamepadRumble_IsValid_m77AAB239FF848FBF602F878764E3FA50B6A4BFB2(_thisAdjusted, method);
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
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Init_m6C2B658F77FFBA6ABB7461D141E3E6A8463CF197 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.GamepadRumbler::CanPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumbler_CanPlay_mFFF359E6E875933036961CAFC069B32989DA533F (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Lofelt.NiceVibrations.GamepadRumbler::SetCurrentGamepad(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_SetCurrentGamepad_m575002631169740B5FE069AABB0B027049205B3D (int32_t ___gamepadID0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.GamepadRumbler::IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumbler_IsConnected_mD3EA909001C5BB4BACA421C42FC7244BEC11CD15 (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Load(Lofelt.NiceVibrations.GamepadRumble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Load_m98F6602C87AD124ECDD629CD00D5EBEF8563345A (GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 ___rumble0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Play_m43B8664528C63A77B17FF1027F72B5CF421AE3D2 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Stop_m5CDA6A7D1F191046DEDF2AA37EFDD030A63920F9 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.GamepadRumbler::Unload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_Unload_mEC8030BBE6C2FD9FDB87B20469FEB4E70AB26564 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.GamepadRumbler::IncreaseRumbleIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GamepadRumbler_IncreaseRumbleIndex_mB4EDC628131D713E3912C578C3AF4E3E2003CBEC (const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Lofelt.NiceVibrations.GamepadRumbler::ProcessNextRumble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GamepadRumbler_ProcessNextRumble_m6EF0DE443300BFA23D373F82DBD9C1D84B883CEE (const RuntimeMethod* method) 
{
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
// System.Void Lofelt.NiceVibrations.HapticClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticClip__ctor_mDB818615E9073D26B347B1E56B1F03731EEE47B6 (HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* __this, const RuntimeMethod* method) 
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
// Lofelt.NiceVibrations.HapticPatterns/PresetType Lofelt.NiceVibrations.HapticController::get_fallbackPreset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HapticController_get_fallbackPreset_mFB148A0F3EAABF5B2B9B2EE591D70616B8E00548 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _fallbackPreset; }
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		int32_t L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____fallbackPreset_8;
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::set_fallbackPreset(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_fallbackPreset_m59C957576E33F13392F08310B4E5F8D610CA2EA1 (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { _fallbackPreset = value; }
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____fallbackPreset_8 = L_0;
		// set { _fallbackPreset = value; }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticController::get_hapticsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _hapticsEnabled; }
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled_9;
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::set_hapticsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_hapticsEnabled_m9A2E6CA744C9D85358114BEFE898155E0C958C2B (bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_hapticsEnabled)
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled_9;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// Stop();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5(NULL);
	}

IL_000c:
	{
		// _hapticsEnabled = value;
		bool L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled_9 = L_1;
		// }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.HapticController::get_outputLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticController_get_outputLevel_mB9E570F29478F1DD5DCAF278000A0243D2884953 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _outputLevel; }
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____outputLevel_10;
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::set_outputLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_outputLevel_m259DA805820909202D9A3919CEDFFB7256B4BBCC (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _outputLevel = value;
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____outputLevel_10 = L_0;
		// ApplyLevelsToLofeltHaptics();
		HapticController_ApplyLevelsToLofeltHaptics_m5ACDECB79785ED4783E5F97AF6DBD854F33A0726(NULL);
		// ApplyLevelsToGamepadRumbler();
		HapticController_ApplyLevelsToGamepadRumbler_m9D1B96D0E2AE8863A88A3262E165398AB2FD9948(NULL);
		// }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.HapticController::get_clipLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticController_get_clipLevel_mF40C343D43F5CBD59E8C94803E9ACC827EDA2C33 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _clipLevel; }
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____clipLevel_11;
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::set_clipLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_clipLevel_m80B5B8741E37779079AFD64191F140D73AC5E2EF (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _clipLevel = value;
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____clipLevel_11 = L_0;
		// ApplyLevelsToLofeltHaptics();
		HapticController_ApplyLevelsToLofeltHaptics_m5ACDECB79785ED4783E5F97AF6DBD854F33A0726(NULL);
		// ApplyLevelsToGamepadRumbler();
		HapticController_ApplyLevelsToGamepadRumbler_m9D1B96D0E2AE8863A88A3262E165398AB2FD9948(NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::ApplyLevelsToLofeltHaptics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_ApplyLevelsToLofeltHaptics_m5ACDECB79785ED4783E5F97AF6DBD854F33A0726 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Init())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		// LofeltHaptics.SetAmplitudeMultiplication(_outputLevel * _clipLevel);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_1 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____outputLevel_10;
		float L_2 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____clipLevel_11;
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_SetAmplitudeMultiplication_m21AF8A0DBE888DF4354815DC65FD3C5635AA6684(((float)il2cpp_codegen_multiply(L_1, L_2)), NULL);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::ApplyLevelsToGamepadRumbler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_ApplyLevelsToGamepadRumbler_m9D1B96D0E2AE8863A88A3262E165398AB2FD9948 (const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_U3CInitU3Eb__0_m22F895CE0EE10591001E1596E6BFAC84B4668465_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA* V_0 = NULL;
	{
		// if (!lofeltHapticsInitalized)
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lofeltHapticsInitalized_0;
		if (L_0)
		{
			goto IL_0054;
		}
	}
	{
		U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA* L_1 = (U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		U3CU3Ec__DisplayClass29_0__ctor_mD835FCF0A9C4B2768A4B61013CBBD419DB8BD684(L_1, NULL);
		V_0 = L_1;
		// lofeltHapticsInitalized = true;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lofeltHapticsInitalized_0 = (bool)1;
		// var syncContext = System.Threading.SynchronizationContext.Current;
		U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA* L_2 = V_0;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3;
		L_3 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		NullCheck(L_2);
		L_2->___syncContext_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___syncContext_0), (void*)L_3);
		// playbackFinishedTimer.Elapsed += (object obj, System.Timers.ElapsedEventArgs args) =>
		// {
		//     // Timer elapsed events are called from a separate thread, so use
		//     // SynchronizationContext to handle it in the main thread.
		//     syncContext.Post(_ =>
		//     {
		//         HandleFinishedPlayback();
		//     }, null);
		// };
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_4 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer_1;
		U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA* L_5 = V_0;
		ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51* L_6 = (ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51*)il2cpp_codegen_object_new(ElapsedEventHandler_tCA26B9E70A5EDB91678F46BCD15547D752D2BA51_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ElapsedEventHandler__ctor_mAB5D9F11BB0B719A17105C636543958CC6F78CBD(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass29_0_U3CInitU3Eb__0_m22F895CE0EE10591001E1596E6BFAC84B4668465_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Timer_add_Elapsed_mA30E2E614E703D6FD8260EB10575C0FB719C0B5D(L_4, L_6, NULL);
		// if (DeviceCapabilities.isVersionSupported)
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = DeviceCapabilities_get_isVersionSupported_m2349570E6B8BAABBAD18ECF19D758436A1282496_inline(NULL);
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		// LofeltHaptics.Initialize();
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_Initialize_m5A160C65E0C3709121B048C91AED126CE2C642E8(NULL);
		// DeviceCapabilities.Init();
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		DeviceCapabilities_Init_m7AC099423DD92EFAC32183C356021EBC63C89C47(NULL);
		// deviceMeetsAdvancedRequirements = DeviceCapabilities.meetsAdvancedRequirements;
		bool L_8;
		L_8 = DeviceCapabilities_get_meetsAdvancedRequirements_m2501828C362AB5507BF4EE8BF1E9FCEE92CDDA46_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___deviceMeetsAdvancedRequirements_5 = L_8;
	}

IL_004f:
	{
		// GamepadRumbler.Init();
		GamepadRumbler_Init_m6C2B658F77FFBA6ABB7461D141E3E6A8463CF197(NULL);
	}

IL_0054:
	{
		// return deviceMeetsAdvancedRequirements;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_9 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___deviceMeetsAdvancedRequirements_5;
		return L_9;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_mE6AA251161ED4A27476BC30C51AD716D49B15573 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// GamepadRumbler.Unload();
		GamepadRumbler_Unload_mEC8030BBE6C2FD9FDB87B20469FEB4E70AB26564(NULL);
		// lastSeekTime = 0.0f;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lastSeekTime_4 = (0.0f);
		// clipLoaded = true;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoaded_3 = (bool)1;
		// clipLoadedDurationSecs = 0.0f;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoadedDurationSecs_2 = (0.0f);
		// if (Init())
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		// LofeltHaptics.Load(data);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_Load_mEDE5AABA9357F121B6B13D5EFABAD832DE2D9FDC(L_1, NULL);
	}

IL_002c:
	{
		// clipLevel = 1.0f;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_set_clipLevel_m80B5B8741E37779079AFD64191F140D73AC5E2EF((1.0f), NULL);
		// LoadedClipChanged?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___LoadedClipChanged_12;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0040;
		}
	}
	{
		return;
	}

IL_0040:
	{
		NullCheck(G_B4_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Load(Lofelt.NiceVibrations.HapticClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_mE91A8FCA5AD81A52B0960D91A9A57E644B3A6D83 (HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* ___clip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Load(clip.json, clip.gamepadRumble);
		HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* L_0 = ___clip0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0->___json_4;
		HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* L_2 = ___clip0;
		NullCheck(L_2);
		GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 L_3 = L_2->___gamepadRumble_5;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_mB19C1D42F42F987DAF09066928F5FF3CE97440FA(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Load(System.Byte[],Lofelt.NiceVibrations.GamepadRumble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Load_mB19C1D42F42F987DAF09066928F5FF3CE97440FA (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___json0, GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 ___rumble1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Load(json);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___json0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_mE6AA251161ED4A27476BC30C51AD716D49B15573(L_0, NULL);
		// GamepadRumbler.Load(rumble);
		GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 L_1 = ___rumble1;
		GamepadRumbler_Load_m98F6602C87AD124ECDD629CD00D5EBEF8563345A(L_1, NULL);
		// ApplyLevelsToGamepadRumbler();
		HapticController_ApplyLevelsToGamepadRumbler_m9D1B96D0E2AE8863A88A3262E165398AB2FD9948(NULL);
		// if (clipLoadedDurationSecs == 0.0f && rumble.IsValid())
		float L_2 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoadedDurationSecs_2;
		if ((!(((float)L_2) == ((float)(0.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		bool L_3;
		L_3 = GamepadRumble_IsValid_m77AAB239FF848FBF602F878764E3FA50B6A4BFB2((&___rumble1), NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// clipLoadedDurationSecs = rumble.totalDurationMs / 1000.0f;
		GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 L_4 = ___rumble1;
		int32_t L_5 = L_4.___totalDurationMs_1;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoadedDurationSecs_2 = ((float)(((float)L_5)/(1000.0f)));
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::HandleFinishedPlayback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_HandleFinishedPlayback_m65689D7AA8872B72B81066A819E5C84B0EC1454E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// lastSeekTime = 0.0f;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lastSeekTime_4 = (0.0f);
		// isPlaybackLooping = false;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isPlaybackLooping_7 = (bool)0;
		// playbackFinishedTimer.Enabled = false;
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer_1;
		NullCheck(L_0);
		Timer_set_Enabled_m96249C4F2CB558B6B65BBA006B55B4423830F38D(L_0, (bool)0, NULL);
		// PlaybackStopped?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___PlaybackStopped_14;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0025;
		}
	}
	{
		return;
	}

IL_0025:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B10_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B9_0 = NULL;
	{
		// if (!_hapticsEnabled)
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled_9;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// return;
		return;
	}

IL_0008:
	{
		// float remainingPlayDuration = 0.0f;
		V_0 = (0.0f);
		// bool canLoop = false;
		V_1 = (bool)0;
		// if (GamepadRumbler.CanPlay())
		bool L_1;
		L_1 = GamepadRumbler_CanPlay_mFFF359E6E875933036961CAFC069B32989DA533F(NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// remainingPlayDuration = clipLoadedDurationSecs;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_2 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoadedDurationSecs_2;
		V_0 = L_2;
		// GamepadRumbler.Play();
		GamepadRumbler_Play_m43B8664528C63A77B17FF1027F72B5CF421AE3D2(NULL);
		goto IL_006a;
	}

IL_0024:
	{
		// else if (Init())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		// remainingPlayDuration = Mathf.Max(clipLoadedDurationSecs - lastSeekTime, 0.0f);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_4 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoadedDurationSecs_2;
		float L_5 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lastSeekTime_4;
		float L_6;
		L_6 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_4, L_5)), (0.0f), NULL);
		V_0 = L_6;
		// canLoop = DeviceCapabilities.canLoop;
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = DeviceCapabilities_get_canLoop_m69DF52370C735DBBD712DB92B96F8961B5A469CD_inline(NULL);
		V_1 = L_7;
		// LofeltHaptics.Play();
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_Play_mD458011A67C0A99B637B629B2B805E1D919814C7(NULL);
		goto IL_006a;
	}

IL_004e:
	{
		// else if (DeviceCapabilities.isVersionSupported)
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = DeviceCapabilities_get_isVersionSupported_m2349570E6B8BAABBAD18ECF19D758436A1282496_inline(NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		// remainingPlayDuration = HapticPatterns.GetPresetDuration(fallbackPreset);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		int32_t L_9;
		L_9 = HapticController_get_fallbackPreset_mFB148A0F3EAABF5B2B9B2EE591D70616B8E00548_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		float L_10;
		L_10 = HapticPatterns_GetPresetDuration_m1BC31066EDB5BF1475BB55ABC4CADC5FD7CAE692(L_9, NULL);
		V_0 = L_10;
		// HapticPatterns.PlayPreset(fallbackPreset);
		int32_t L_11;
		L_11 = HapticController_get_fallbackPreset_mFB148A0F3EAABF5B2B9B2EE591D70616B8E00548_inline(NULL);
		HapticPatterns_PlayPreset_m4BBC460337643C4051BA3AC077AAD1E2BB4B9B90(L_11, NULL);
	}

IL_006a:
	{
		// isPlaybackLooping = isLoopingEnabledByUser && canLoop;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_12 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isLoopingEnabledByUser_6;
		bool L_13 = V_1;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isPlaybackLooping_7 = (bool)((int32_t)((int32_t)L_12&(int32_t)L_13));
		// PlaybackStarted?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___PlaybackStarted_13;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_15 = L_14;
		G_B9_0 = L_15;
		if (L_15)
		{
			G_B10_0 = L_15;
			goto IL_0081;
		}
	}
	{
		goto IL_0086;
	}

IL_0081:
	{
		NullCheck(G_B10_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B10_0, NULL);
	}

IL_0086:
	{
		// if (remainingPlayDuration > 0.0f)
		float L_16 = V_0;
		if ((!(((float)L_16) > ((float)(0.0f)))))
		{
			goto IL_00be;
		}
	}
	{
		// playbackFinishedTimer.Interval = remainingPlayDuration * 1000;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_17 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer_1;
		float L_18 = V_0;
		NullCheck(L_17);
		Timer_set_Interval_m85B315A45E5CC4B9E5BA84891636B7F368A05536(L_17, ((double)((float)il2cpp_codegen_multiply(L_18, (1000.0f)))), NULL);
		// playbackFinishedTimer.AutoReset = false;
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_19 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer_1;
		NullCheck(L_19);
		Timer_set_AutoReset_mCDD4362A339ADAA69BAB7FE596BE400C161C328D(L_19, (bool)0, NULL);
		// playbackFinishedTimer.Enabled = !isPlaybackLooping;
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_20 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer_1;
		bool L_21 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isPlaybackLooping_7;
		NullCheck(L_20);
		Timer_set_Enabled_m96249C4F2CB558B6B65BBA006B55B4423830F38D(L_20, (bool)((((int32_t)L_21) == ((int32_t)0))? 1 : 0), NULL);
		return;
	}

IL_00be:
	{
		// HandleFinishedPlayback();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_HandleFinishedPlayback_m65689D7AA8872B72B81066A819E5C84B0EC1454E(NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Play(Lofelt.NiceVibrations.HapticClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Play_m94EADABB22195E52670B54015B577DB2F7071196 (HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* ___clip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Load(clip);
		HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* L_0 = ___clip0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_mE91A8FCA5AD81A52B0960D91A9A57E644B3A6D83(L_0, NULL);
		// Play();
		HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4(NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Init())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// LofeltHaptics.Stop();
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_Stop_m1AC86C07B8885A42AB5D5988F5C6C3BC55FA642B(NULL);
		goto IL_0013;
	}

IL_000e:
	{
		// LofeltHaptics.StopPattern();
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_StopPattern_mDA2719D6A8F90D32D956ED4E01401774F9B80AC5(NULL);
	}

IL_0013:
	{
		// GamepadRumbler.Stop();
		GamepadRumbler_Stop_m5CDA6A7D1F191046DEDF2AA37EFDD030A63920F9(NULL);
		// HandleFinishedPlayback();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_HandleFinishedPlayback_m65689D7AA8872B72B81066A819E5C84B0EC1454E(NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Seek(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Seek_mF49BDF3CE3FE84E2412324A917067F7D37919D64 (float ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Init())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// LofeltHaptics.Stop();
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_Stop_m1AC86C07B8885A42AB5D5988F5C6C3BC55FA642B(NULL);
		// LofeltHaptics.Seek(time);
		float L_1 = ___time0;
		LofeltHaptics_Seek_m6F57DA36A2D3780A7CCDF9F2E3E0A14C1ED66D4E(L_1, NULL);
	}

IL_0012:
	{
		// GamepadRumbler.Stop();
		GamepadRumbler_Stop_m5CDA6A7D1F191046DEDF2AA37EFDD030A63920F9(NULL);
		// lastSeekTime = time;
		float L_2 = ___time0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lastSeekTime_4 = L_2;
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::set_clipFrequencyShift(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_set_clipFrequencyShift_m46D7B83FD3D5FEFF6B9E039DA1685C58ECFE6612 (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Init())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// LofeltHaptics.SetFrequencyShift(value);
		float L_1 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_SetFrequencyShift_m58733F5BB1A11401DE5E843F34ADB79C318AD318(L_1, NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA (bool ___enabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Init())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// LofeltHaptics.Loop(enabled);
		bool L_1 = ___enabled0;
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_Loop_m37A6519C484CE0B973B41C0A4C2244A85D5D314B(L_1, NULL);
	}

IL_000d:
	{
		// isLoopingEnabledByUser = enabled;
		bool L_2 = ___enabled0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isLoopingEnabledByUser_6 = L_2;
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticController::IsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticController_IsPlaying_m2184DE06BA77A234A514D91B286CE8BF2FA27482 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playbackFinishedTimer.Enabled)
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = Timer_get_Enabled_m082C8CCFB9C6936523EDE3E8C8DD010C22EDA032_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000e:
	{
		// return isPlaybackLooping;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_2 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isPlaybackLooping_7;
		return L_2;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_Reset_m56A1A297436721691F696EFD3DB7D0B13FB41EF6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (clipLoaded)
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoaded_3;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// Seek(0.0f);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Seek_mF49BDF3CE3FE84E2412324A917067F7D37919D64((0.0f), NULL);
		// Stop();
		HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5(NULL);
		// clipLevel = 1.0f;
		HapticController_set_clipLevel_m80B5B8741E37779079AFD64191F140D73AC5E2EF((1.0f), NULL);
		// clipFrequencyShift = 0.0f;
		HapticController_set_clipFrequencyShift_m46D7B83FD3D5FEFF6B9E039DA1685C58ECFE6612((0.0f), NULL);
		// Loop(false);
		HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA((bool)0, NULL);
	}

IL_0030:
	{
		// fallbackPreset = HapticPatterns.PresetType.None;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_set_fallbackPreset_m59C957576E33F13392F08310B4E5F8D610CA2EA1_inline((-1), NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::ProcessApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController_ProcessApplicationFocus_m161EAF2B8408B1AC9C74C9D2D41F637071C93C07 (bool ___hasFocus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!hasFocus)
		bool L_0 = ___hasFocus0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// Stop();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5(NULL);
	}

IL_0008:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticController__cctor_m40C60252FDF3595FE36B626765CC6535F8DE012B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static bool lofeltHapticsInitalized = false;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lofeltHapticsInitalized_0 = (bool)0;
		// static Timer playbackFinishedTimer = new Timer();
		Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* L_0 = (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B*)il2cpp_codegen_object_new(Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Timer__ctor_mB9CD175ABB2BB47E091B70C9E6A5CEB00D48A2B0(L_0, NULL);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___playbackFinishedTimer_1), (void*)L_0);
		// static float clipLoadedDurationSecs = 0.0f;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoadedDurationSecs_2 = (0.0f);
		// static bool clipLoaded = false;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___clipLoaded_3 = (bool)0;
		// static float lastSeekTime = 0.0f;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___lastSeekTime_4 = (0.0f);
		// static bool deviceMeetsAdvancedRequirements = false;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___deviceMeetsAdvancedRequirements_5 = (bool)0;
		// static bool isLoopingEnabledByUser = false;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isLoopingEnabledByUser_6 = (bool)0;
		// static bool isPlaybackLooping = false;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___isPlaybackLooping_7 = (bool)0;
		// static HapticPatterns.PresetType _fallbackPreset = HapticPatterns.PresetType.None;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____fallbackPreset_8 = (-1);
		// internal static bool _hapticsEnabled = true;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled_9 = (bool)1;
		// internal static float _outputLevel = 1.0f;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____outputLevel_10 = (1.0f);
		// internal static float _clipLevel = 1.0f;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____clipLevel_11 = (1.0f);
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
// System.Void Lofelt.NiceVibrations.HapticController/<>c__DisplayClass29_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0__ctor_mD835FCF0A9C4B2768A4B61013CBBD419DB8BD684 (U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController/<>c__DisplayClass29_0::<Init>b__0(System.Object,System.Timers.ElapsedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass29_0_U3CInitU3Eb__0_m22F895CE0EE10591001E1596E6BFAC84B4668465 (U3CU3Ec__DisplayClass29_0_t5E1FE2A5E876C852D11A6BE5B7CFB5C12058DDBA* __this, RuntimeObject* ___obj0, ElapsedEventArgs_t74C1E2D692A82825805E5EC84EE73F5B053027C1* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitU3Eb__29_1_m1BCEBEB3A93822C03F9BFD601A7EBC1FB8CA6755_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B2_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B2_1 = NULL;
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* G_B1_0 = NULL;
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* G_B1_1 = NULL;
	{
		// syncContext.Post(_ =>
		// {
		//     HandleFinishedPlayback();
		// }, null);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = __this->___syncContext_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_1 = ((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9__29_1_1;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var);
		U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* L_3 = ((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_4 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CInitU3Eb__29_1_m1BCEBEB3A93822C03F9BFD601A7EBC1FB8CA6755_RuntimeMethod_var), NULL);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_5 = L_4;
		((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9__29_1_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9__29_1_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		NullCheck(G_B2_1);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, G_B2_1, G_B2_0, NULL);
		// };
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
// System.Void Lofelt.NiceVibrations.HapticController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m58DA66EECA7FC11F5017378F195B53629FC6498E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* L_0 = (U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4*)il2cpp_codegen_object_new(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m4BE54460DE9013F0322B55C7F93B41BB7F1B9479(L_0, NULL);
		((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4BE54460DE9013F0322B55C7F93B41BB7F1B9479 (U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticController/<>c::<Init>b__29_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CInitU3Eb__29_1_m1BCEBEB3A93822C03F9BFD601A7EBC1FB8CA6755 (U3CU3Ec_tA30B1F22495BBA0DB04789A5A10851AB7F023AF4* __this, RuntimeObject* ____0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandleFinishedPlayback();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_HandleFinishedPlayback_m65689D7AA8872B72B81066A819E5C84B0EC1454E(NULL);
		// }, null);
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
// System.Void Lofelt.NiceVibrations.HapticPatterns::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns__cctor_m5BBA1A97FFA4808B41A0ABBBE04029209BDC8C46 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____291429BD4426C606843ABEB925268AD87767305C4AC8069D1191FFDE90A3499F_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____34A0AC4C4C065F0140B16ECC7E9690749B60C5C0EB2D6021CC75FEEBDCDCA61F_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____DF8E296768F9446BD84A1631B3922DAA86C5CC0EFB71B660BF0B6DF542707096_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B63886015A4191332EA3F977B1146A0B78A6E82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC444FDC3B86DC5349F7224E5C2605245C0859BA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static private float[] constantPatternTime = new float[] { 0.0f, 0.0f };
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantPatternTime_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantPatternTime_3), (void*)L_0);
		// emphasisTemplate = (Resources.Load("nv-emphasis-template") as TextAsset).text;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_1;
		L_1 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(_stringLiteralC444FDC3B86DC5349F7224E5C2605245C0859BA1, NULL);
		NullCheck(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_1, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)));
		String_t* L_2;
		L_2 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_1, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)), NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___emphasisTemplate_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___emphasisTemplate_0), (void*)L_2);
		// constantTemplate = (Resources.Load("nv-constant-template") as TextAsset).text;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_3;
		L_3 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(_stringLiteral8B63886015A4191332EA3F977B1146A0B78A6E82, NULL);
		NullCheck(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_3, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)));
		String_t* L_4;
		L_4 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_3, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)), NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantTemplate_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantTemplate_1), (void*)L_4);
		// numberFormat = new NumberFormatInfo();
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_5 = (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472*)il2cpp_codegen_object_new(NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		NumberFormatInfo__ctor_m94502038B1DB45D50D1331C312DDAD0D80CD608C(L_5, NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat_2), (void*)L_5);
		// numberFormat.NumberDecimalSeparator = ".";
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_6 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat_2;
		NullCheck(L_6);
		NumberFormatInfo_set_NumberDecimalSeparator_mEC8D7493863AD768CF6107DE7617811E1105DF10(L_6, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		// Selection = new Preset(PresetType.Selection, new float[] { 0.0f, 0.04f },
		//                                              new float[] { 0.471f, 0.471f });
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0399999991f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = L_9;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.470999986f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.470999986f));
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_12), 0, L_8, L_11, /*hidden argument*/NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Selection_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Selection_4))->___maximumAmplitudePattern_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Selection_4))->___jsonClip_2), (void*)NULL);
		#endif
		// Light = new Preset(PresetType.LightImpact, new float[] { 0.000f, 0.040f },
		//                                            new float[] { 0.156f, 0.156f });
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_14 = L_13;
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0399999991f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_15 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_16 = L_15;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.156000003f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_17 = L_16;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.156000003f));
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_18), 4, L_14, L_17, /*hidden argument*/NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Light_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Light_5))->___maximumAmplitudePattern_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Light_5))->___jsonClip_2), (void*)NULL);
		#endif
		// Medium = new Preset(PresetType.MediumImpact, new float[] { 0.000f, 0.080f },
		//                                              new float[] { 0.471f, 0.471f });
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_20 = L_19;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0799999982f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = L_21;
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.470999986f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = L_22;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.470999986f));
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_24), 5, L_20, L_23, /*hidden argument*/NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Medium_6 = L_24;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Medium_6))->___maximumAmplitudePattern_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Medium_6))->___jsonClip_2), (void*)NULL);
		#endif
		// Heavy = new Preset(PresetType.HeavyImpact, new float[] { 0.0f, 0.16f },
		//                                            new float[] { 1.0f, 1.00f });
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_25 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = L_25;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.159999996f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_28 = L_27;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.0f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = L_28;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(1.0f));
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_30;
		memset((&L_30), 0, sizeof(L_30));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_30), 6, L_26, L_29, /*hidden argument*/NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Heavy_7 = L_30;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Heavy_7))->___maximumAmplitudePattern_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Heavy_7))->___jsonClip_2), (void*)NULL);
		#endif
		// Rigid = new Preset(PresetType.RigidImpact, new float[] { 0.0f, 0.04f },
		//                                            new float[] { 1.0f, 1.00f });
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_32 = L_31;
		NullCheck(L_32);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0399999991f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_33 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_34 = L_33;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(1.0f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_35 = L_34;
		NullCheck(L_35);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(1.0f));
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_36), 7, L_32, L_35, /*hidden argument*/NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Rigid_8 = L_36;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Rigid_8))->___maximumAmplitudePattern_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Rigid_8))->___jsonClip_2), (void*)NULL);
		#endif
		// Soft = new Preset(PresetType.SoftImpact, new float[] { 0.000f, 0.160f },
		//                                          new float[] { 0.156f, 0.156f });
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_37 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38 = L_37;
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.159999996f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_39 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_40 = L_39;
		NullCheck(L_40);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)(0.156000003f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = L_40;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.156000003f));
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_42), 8, L_38, L_41, /*hidden argument*/NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Soft_9 = L_42;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Soft_9))->___maximumAmplitudePattern_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Soft_9))->___jsonClip_2), (void*)NULL);
		#endif
		// Success = new Preset(PresetType.Success, new float[] { 0.0f, 0.040f, 0.080f, 0.240f },
		//                                          new float[] { 0.0f, 0.157f, 0.000f, 1.000f });
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_43 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_44 = L_43;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_45 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____34A0AC4C4C065F0140B16ECC7E9690749B60C5C0EB2D6021CC75FEEBDCDCA61F_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_44, L_45, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_46 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47 = L_46;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.157000005f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_48 = L_47;
		NullCheck(L_48);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)(1.0f));
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_49), 1, L_44, L_48, /*hidden argument*/NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Success_10 = L_49;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Success_10))->___maximumAmplitudePattern_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Success_10))->___jsonClip_2), (void*)NULL);
		#endif
		// Failure = new Preset(PresetType.Failure,
		//                      new float[] { 0.0f, 0.080f, 0.120f, 0.200f, 0.240f, 0.400f, 0.440f, 0.480f },
		//                      new float[] { 0.0f, 0.470f, 0.000f, 0.470f, 0.000f, 1.000f, 0.000f, 0.157f });
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_50 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)8);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_51 = L_50;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_52 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____291429BD4426C606843ABEB925268AD87767305C4AC8069D1191FFDE90A3499F_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_51, L_52, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_53 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)8);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_54 = L_53;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_55 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____EFCF4C0489C2080408FC8F1E523E5FA7B26EF5CF302EE22938F0B46B303DCFF2_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_54, L_55, NULL);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_56;
		memset((&L_56), 0, sizeof(L_56));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_56), 3, L_51, L_54, /*hidden argument*/NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Failure_11 = L_56;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Failure_11))->___maximumAmplitudePattern_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Failure_11))->___jsonClip_2), (void*)NULL);
		#endif
		// Warning = new Preset(PresetType.Warning, new float[] { 0.0f, 0.120f, 0.240f, 0.280f },
		//                                          new float[] { 0.0f, 1.000f, 0.000f, 0.470f });
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_57 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_58 = L_57;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_59 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t8AB4AE8DC2B756283C44699753C7DDAA34AC0AEF____DF8E296768F9446BD84A1631B3922DAA86C5CC0EFB71B660BF0B6DF542707096_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_58, L_59, NULL);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_60 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_61 = L_60;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(1.0f));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_62 = L_61;
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)(0.469999999f));
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572((&L_63), 2, L_58, L_62, /*hidden argument*/NULL);
		((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Warning_12 = L_63;
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Warning_12))->___maximumAmplitudePattern_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Warning_12))->___jsonClip_2), (void*)NULL);
		#endif
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticPatterns::PlayEmphasis(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayEmphasis_mADB063BD86C4E57BDABA6E4CBAD7490BF18C58D8 (float ___amplitude0, float ___frequency1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A5A4A501BAA6FD3ED4EBE9BFC926066FCBD5ABE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61DD0B794D236B1414F02F76E8AF03EDCDC5FD17);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	String_t* V_2 = NULL;
	GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	{
		// if (emphasisTemplate == null || !HapticController.hapticsEnabled)
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		String_t* L_0 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___emphasisTemplate_0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887_inline(NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}

IL_000e:
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (HapticController.Init() || GamepadRumbler.IsConnected())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		bool L_3;
		L_3 = GamepadRumbler_IsConnected_mD3EA909001C5BB4BACA421C42FC7244BEC11CD15(NULL);
		if (!L_3)
		{
			goto IL_00b6;
		}
	}

IL_0020:
	{
		// float clampedAmplitude = Mathf.Clamp(amplitude, 0.0f, 1.0f);
		float L_4 = ___amplitude0;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, (0.0f), (1.0f), NULL);
		V_0 = L_5;
		// float clampedFrequency = Mathf.Clamp(frequency, 0.0f, 1.0f);
		float L_6 = ___frequency1;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_6, (0.0f), (1.0f), NULL);
		V_1 = L_7;
		// String json = emphasisTemplate
		//     .Replace("{amplitude}", clampedAmplitude.ToString(numberFormat))
		//     .Replace("{frequency}", clampedFrequency.ToString(numberFormat))
		//     .Replace("{duration}", duration.ToString(numberFormat));
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		String_t* L_8 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___emphasisTemplate_0;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_9 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat_2;
		String_t* L_10;
		L_10 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_0), L_9, NULL);
		NullCheck(L_8);
		String_t* L_11;
		L_11 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_8, _stringLiteral61DD0B794D236B1414F02F76E8AF03EDCDC5FD17, L_10, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_12 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat_2;
		String_t* L_13;
		L_13 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_1), L_12, NULL);
		NullCheck(L_11);
		String_t* L_14;
		L_14 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_11, _stringLiteral1A5A4A501BAA6FD3ED4EBE9BFC926066FCBD5ABE, L_13, NULL);
		V_4 = (0.100000001f);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_15 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat_2;
		String_t* L_16;
		L_16 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_4), L_15, NULL);
		NullCheck(L_14);
		String_t* L_17;
		L_17 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_14, _stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B, L_16, NULL);
		V_2 = L_17;
		// GamepadRumble rumble = new GamepadRumble();
		il2cpp_codegen_initobj((&V_3), sizeof(GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240));
		// HapticController.Load(System.Text.Encoding.UTF8.GetBytes(json), rumble);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_18;
		L_18 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_19 = V_2;
		NullCheck(L_18);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_18, L_19);
		GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 L_21 = V_3;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_mB19C1D42F42F987DAF09066928F5FF3CE97440FA(L_20, L_21, NULL);
		// HapticController.Loop(false);
		HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA((bool)0, NULL);
		// HapticController.Play();
		HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4(NULL);
		return;
	}

IL_00b6:
	{
		// else if (DeviceCapabilities.isVersionSupported)
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = DeviceCapabilities_get_isVersionSupported_m2349570E6B8BAABBAD18ECF19D758436A1282496_inline(NULL);
		if (!L_22)
		{
			goto IL_00d0;
		}
	}
	{
		// LofeltHaptics.PlayMaximumAmplitudePattern(new float[]{ 0.0f, 0.05f });
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = L_23;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)(0.0500000007f));
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_PlayMaximumAmplitudePattern_m9750CD1982EA6A6D924C464F135250FB6569C1F7(L_24, NULL);
	}

IL_00d0:
	{
		// }
		return;
	}
}
// Lofelt.NiceVibrations.HapticPatterns/PresetType Lofelt.NiceVibrations.HapticPatterns::presetTypeForEmphasis(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HapticPatterns_presetTypeForEmphasis_mD554FAF5E44C00B20177ABA76644E76FB98EC380 (float ___amplitude0, const RuntimeMethod* method) 
{
	{
		// if (amplitude > 0.5f)
		float L_0 = ___amplitude0;
		if ((!(((float)L_0) > ((float)(0.5f)))))
		{
			goto IL_000a;
		}
	}
	{
		// return HapticPatterns.PresetType.HeavyImpact;
		return (int32_t)(6);
	}

IL_000a:
	{
		// else if (amplitude <= 0.5f && amplitude > 0.3)
		float L_1 = ___amplitude0;
		if ((!(((float)L_1) <= ((float)(0.5f)))))
		{
			goto IL_0021;
		}
	}
	{
		float L_2 = ___amplitude0;
		if ((!(((double)((double)L_2)) > ((double)(0.29999999999999999)))))
		{
			goto IL_0021;
		}
	}
	{
		// return HapticPatterns.PresetType.MediumImpact;
		return (int32_t)(5);
	}

IL_0021:
	{
		// return HapticPatterns.PresetType.LightImpact;
		return (int32_t)(4);
	}
}
// System.Void Lofelt.NiceVibrations.HapticPatterns::PlayConstant(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayConstant_m3BA7755FE8E837E0B45A29FAD5D5784D0CC2E4BF (float ___amplitude0, float ___frequency1, float ___duration2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	String_t* V_3 = NULL;
	GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (constantTemplate == null || !HapticController.hapticsEnabled)
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		String_t* L_0 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantTemplate_1;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887_inline(NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}

IL_000e:
	{
		// return;
		return;
	}

IL_000f:
	{
		// float clampedAmplitude = Mathf.Clamp(amplitude, 0.0f, 1.0f);
		float L_2 = ___amplitude0;
		float L_3;
		L_3 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_2, (0.0f), (1.0f), NULL);
		V_0 = L_3;
		// float clampedFrequency = Mathf.Clamp(frequency, 0.0f, 1.0f);
		float L_4 = ___frequency1;
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, (0.0f), (1.0f), NULL);
		V_1 = L_5;
		// float clampedDurationSecs = Mathf.Max(duration, 0.0f);
		float L_6 = ___duration2;
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_6, (0.0f), NULL);
		V_2 = L_7;
		// String json = constantTemplate
		//     .Replace("{duration}", clampedDurationSecs.ToString(numberFormat));
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		String_t* L_8 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantTemplate_1;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_9 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat_2;
		String_t* L_10;
		L_10 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_2), L_9, NULL);
		NullCheck(L_8);
		String_t* L_11;
		L_11 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_8, _stringLiteral07EC97A8DE7F6E360356FA8A75366F445AF82B7B, L_10, NULL);
		V_3 = L_11;
		// GamepadRumble rumble = new GamepadRumble();
		il2cpp_codegen_initobj((&V_4), sizeof(GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240));
		// if (HapticController.Init() || GamepadRumbler.IsConnected())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (L_12)
		{
			goto IL_006f;
		}
	}
	{
		bool L_13;
		L_13 = GamepadRumbler_IsConnected_mD3EA909001C5BB4BACA421C42FC7244BEC11CD15(NULL);
		if (!L_13)
		{
			goto IL_0099;
		}
	}

IL_006f:
	{
		// HapticController.Load(System.Text.Encoding.UTF8.GetBytes(json), rumble);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_14;
		L_14 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_15 = V_3;
		NullCheck(L_14);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_14, L_15);
		GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 L_17 = V_4;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_mB19C1D42F42F987DAF09066928F5FF3CE97440FA(L_16, L_17, NULL);
		// HapticController.Loop(false);
		HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA((bool)0, NULL);
		// HapticController.clipLevel = clampedAmplitude;
		float L_18 = V_0;
		HapticController_set_clipLevel_m80B5B8741E37779079AFD64191F140D73AC5E2EF(L_18, NULL);
		// HapticController.clipFrequencyShift = clampedFrequency;
		float L_19 = V_1;
		HapticController_set_clipFrequencyShift_m46D7B83FD3D5FEFF6B9E039DA1685C58ECFE6612(L_19, NULL);
		// HapticController.Play();
		HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4(NULL);
		return;
	}

IL_0099:
	{
		// else if (DeviceCapabilities.isVersionSupported)
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = DeviceCapabilities_get_isVersionSupported_m2349570E6B8BAABBAD18ECF19D758436A1282496_inline(NULL);
		if (!L_20)
		{
			goto IL_00b2;
		}
	}
	{
		// constantPatternTime[1] = duration;
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantPatternTime_3;
		float L_22 = ___duration2;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_22);
		// LofeltHaptics.PlayMaximumAmplitudePattern(constantPatternTime);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_23 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___constantPatternTime_3;
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_PlayMaximumAmplitudePattern_m9750CD1982EA6A6D924C464F135250FB6569C1F7(L_23, NULL);
	}

IL_00b2:
	{
		// }
		return;
	}
}
// Lofelt.NiceVibrations.HapticPatterns/Preset Lofelt.NiceVibrations.HapticPatterns::GetPresetForType(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 HapticPatterns_GetPresetForType_m9FC81F286C1CCB677B62EBE48CB2E930102AEB37 (int32_t ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___type0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_005c;
			}
			case 3:
			{
				goto IL_0056;
			}
			case 4:
			{
				goto IL_0032;
			}
			case 5:
			{
				goto IL_0038;
			}
			case 6:
			{
				goto IL_003e;
			}
			case 7:
			{
				goto IL_0044;
			}
			case 8:
			{
				goto IL_004a;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_002c:
	{
		// return Selection;
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_1 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Selection_4;
		return L_1;
	}

IL_0032:
	{
		// return Light;
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_2 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Light_5;
		return L_2;
	}

IL_0038:
	{
		// return Medium;
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_3 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Medium_6;
		return L_3;
	}

IL_003e:
	{
		// return Heavy;
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_4 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Heavy_7;
		return L_4;
	}

IL_0044:
	{
		// return Rigid;
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_5 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Rigid_8;
		return L_5;
	}

IL_004a:
	{
		// return Soft;
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_6 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Soft_9;
		return L_6;
	}

IL_0050:
	{
		// return Success;
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_7 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Success_10;
		return L_7;
	}

IL_0056:
	{
		// return Failure;
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_8 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Failure_11;
		return L_8;
	}

IL_005c:
	{
		// return Warning;
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_9 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Warning_12;
		return L_9;
	}

IL_0062:
	{
		// return Medium;
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_10 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___Medium_6;
		return L_10;
	}
}
// System.Void Lofelt.NiceVibrations.HapticPatterns::PlayPreset(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticPatterns_PlayPreset_m4BBC460337643C4051BA3AC077AAD1E2BB4B9B90 (int32_t ___presetType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!HapticController.hapticsEnabled || presetType == PresetType.None)
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887_inline(NULL);
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_1 = ___presetType0;
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_000c;
		}
	}

IL_000b:
	{
		// return;
		return;
	}

IL_000c:
	{
		// Preset preset = GetPresetForType(presetType);
		int32_t L_2 = ___presetType0;
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_3;
		L_3 = HapticPatterns_GetPresetForType_m9FC81F286C1CCB677B62EBE48CB2E930102AEB37(L_2, NULL);
		V_0 = L_3;
		// if (HapticController.Init() || GamepadRumbler.IsConnected())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		bool L_5;
		L_5 = GamepadRumbler_IsConnected_mD3EA909001C5BB4BACA421C42FC7244BEC11CD15(NULL);
		if (!L_5)
		{
			goto IL_0038;
		}
	}

IL_0021:
	{
		// HapticController.Load(preset.jsonClip);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_6 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6.___jsonClip_2;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_mE6AA251161ED4A27476BC30C51AD716D49B15573(L_7, NULL);
		// HapticController.Loop(false);
		HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA((bool)0, NULL);
		// HapticController.Play();
		HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4(NULL);
		// return;
		return;
	}

IL_0038:
	{
		// if (DeviceCapabilities.isVersionSupported)
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = DeviceCapabilities_get_isVersionSupported_m2349570E6B8BAABBAD18ECF19D758436A1282496_inline(NULL);
		if (!L_8)
		{
			goto IL_004b;
		}
	}
	{
		// LofeltHaptics.PlayMaximumAmplitudePattern(preset.maximumAmplitudePattern);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_9 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_10 = L_9.___maximumAmplitudePattern_1;
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		LofeltHaptics_PlayMaximumAmplitudePattern_m9750CD1982EA6A6D924C464F135250FB6569C1F7(L_10, NULL);
		// return;
		return;
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.HapticPatterns::GetPresetDuration(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticPatterns_GetPresetDuration_m1BC31066EDB5BF1475BB55ABC4CADC5FD7CAE692 (int32_t ___presetType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (presetType == PresetType.None)
		int32_t L_0 = ___presetType0;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000a;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_000a:
	{
		// return GetPresetForType(presetType).GetDuration();
		int32_t L_1 = ___presetType0;
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828 L_2;
		L_2 = HapticPatterns_GetPresetForType_m9FC81F286C1CCB677B62EBE48CB2E930102AEB37(L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Preset_GetDuration_mB77C3715AAA5BA8308AE5F760CDC922CFE2218A2((&V_0), NULL);
		return L_3;
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
// Conversion methods for marshalling of: Lofelt.NiceVibrations.HapticPatterns/Pattern
IL2CPP_EXTERN_C void Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshal_pinvoke(const Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72& unmarshaled, Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshaled_pinvoke& marshaled)
{
	marshaled.___time_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___time_0);
	marshaled.___amplitude_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___amplitude_1);
}
IL2CPP_EXTERN_C void Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshal_pinvoke_back(const Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshaled_pinvoke& marshaled, Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___time_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___time_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___time_0), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___time_0));
	unmarshaled.___amplitude_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___amplitude_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___amplitude_1), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___amplitude_1));
}
// Conversion method for clean up from marshalling of: Lofelt.NiceVibrations.HapticPatterns/Pattern
IL2CPP_EXTERN_C void Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshal_pinvoke_cleanup(Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___time_0);
	marshaled.___time_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___amplitude_1);
	marshaled.___amplitude_1 = NULL;
}
// Conversion methods for marshalling of: Lofelt.NiceVibrations.HapticPatterns/Pattern
IL2CPP_EXTERN_C void Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshal_com(const Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72& unmarshaled, Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshaled_com& marshaled)
{
	marshaled.___time_0 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___time_0);
	marshaled.___amplitude_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___amplitude_1);
}
IL2CPP_EXTERN_C void Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshal_com_back(const Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshaled_com& marshaled, Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.___time_0 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___time_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___time_0), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___time_0));
	unmarshaled.___amplitude_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___amplitude_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___amplitude_1), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___amplitude_1));
}
// Conversion method for clean up from marshalling of: Lofelt.NiceVibrations.HapticPatterns/Pattern
IL2CPP_EXTERN_C void Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshal_com_cleanup(Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___time_0);
	marshaled.___time_0 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___amplitude_1);
	marshaled.___amplitude_1 = NULL;
}
// System.Void Lofelt.NiceVibrations.HapticPatterns/Pattern::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pattern__cctor_mBAA5690044E47856D7F8A0B6748D07DC3B0A6B4D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2135703B40B414C092DF068E8FAA55E46FFB30B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// clipJsonTemplate = (Resources.Load("nv-pattern-template") as TextAsset).text;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0;
		L_0 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(_stringLiteralA2135703B40B414C092DF068E8FAA55E46FFB30B, NULL);
		NullCheck(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_0, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)));
		String_t* L_1;
		L_1 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_0, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var)), NULL);
		((Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_StaticFields*)il2cpp_codegen_static_fields_for(Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var))->___clipJsonTemplate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_StaticFields*)il2cpp_codegen_static_fields_for(Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var))->___clipJsonTemplate_2), (void*)L_1);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticPatterns/Pattern::.ctor(System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pattern__ctor_m0381400DEF8AC63215B136B318282B8B39D7CE22 (Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___time0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___amplitude1, const RuntimeMethod* method) 
{
	{
		// this.time = time;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___time0;
		__this->___time_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___time_0), (void*)L_0);
		// this.amplitude = amplitude;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___amplitude1;
		__this->___amplitude_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___amplitude_1), (void*)L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Pattern__ctor_m0381400DEF8AC63215B136B318282B8B39D7CE22_AdjustorThunk (RuntimeObject* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___time0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___amplitude1, const RuntimeMethod* method)
{
	Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72*>(__this + _offset);
	Pattern__ctor_m0381400DEF8AC63215B136B318282B8B39D7CE22(_thisAdjusted, ___time0, ___amplitude1, method);
}
// Lofelt.NiceVibrations.GamepadRumble Lofelt.NiceVibrations.HapticPatterns/Pattern::ToRumble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 Pattern_ToRumble_mFB8A74A47B54296D38A3F46A9DBD900C308EB006 (Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// GamepadRumble result = new GamepadRumble();
		il2cpp_codegen_initobj((&V_0), sizeof(GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240));
		// if (time.Length <= 1)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___time_0;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) > ((int32_t)1)))
		{
			goto IL_0015;
		}
	}
	{
		// return result;
		GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 L_1 = V_0;
		return L_1;
	}

IL_0015:
	{
		// int rumbleCount = time.Length - 1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___time_0;
		NullCheck(L_2);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
		// result.durationsMs = new int[rumbleCount];
		int32_t L_3 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_3);
		(&V_0)->___durationsMs_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___durationsMs_0), (void*)L_4);
		// result.lowFrequencyMotorSpeeds = new float[rumbleCount];
		int32_t L_5 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_5);
		(&V_0)->___lowFrequencyMotorSpeeds_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___lowFrequencyMotorSpeeds_2), (void*)L_6);
		// result.highFrequencyMotorSpeeds = new float[rumbleCount];
		int32_t L_7 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)L_7);
		(&V_0)->___highFrequencyMotorSpeeds_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___highFrequencyMotorSpeeds_3), (void*)L_8);
		// result.totalDurationMs = 0;
		(&V_0)->___totalDurationMs_1 = 0;
		// for (int rumbleIndex = 0; rumbleIndex < rumbleCount; rumbleIndex++)
		V_2 = 0;
		goto IL_00ae;
	}

IL_0053:
	{
		// int patternDurationMs = (int)((time[rumbleIndex + 1] - time[rumbleIndex]) * 1000.0f);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->___time_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_13 = __this->___time_0;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		float L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_3 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_16)), (1000.0f))));
		// result.durationsMs[rumbleIndex] = patternDurationMs;
		GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 L_17 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = L_17.___durationsMs_0;
		int32_t L_19 = V_2;
		int32_t L_20 = V_3;
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (int32_t)L_20);
		// result.lowFrequencyMotorSpeeds[rumbleIndex] = amplitude[rumbleIndex];
		GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 L_21 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = L_21.___lowFrequencyMotorSpeeds_2;
		int32_t L_23 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_24 = __this->___amplitude_1;
		int32_t L_25 = V_2;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		float L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(L_23), (float)L_27);
		// result.highFrequencyMotorSpeeds[rumbleIndex] = amplitude[rumbleIndex];
		GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 L_28 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_29 = L_28.___highFrequencyMotorSpeeds_3;
		int32_t L_30 = V_2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = __this->___amplitude_1;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		float L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (float)L_34);
		// result.totalDurationMs += result.durationsMs[rumbleIndex];
		int32_t* L_35 = (&(&V_0)->___totalDurationMs_1);
		int32_t* L_36 = L_35;
		int32_t L_37 = *((int32_t*)L_36);
		GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 L_38 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = L_38.___durationsMs_0;
		int32_t L_40 = V_2;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		*((int32_t*)L_36) = (int32_t)((int32_t)il2cpp_codegen_add(L_37, L_42));
		// for (int rumbleIndex = 0; rumbleIndex < rumbleCount; rumbleIndex++)
		int32_t L_43 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00ae:
	{
		// for (int rumbleIndex = 0; rumbleIndex < rumbleCount; rumbleIndex++)
		int32_t L_44 = V_2;
		int32_t L_45 = V_1;
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0053;
		}
	}
	{
		// return result;
		GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 L_46 = V_0;
		return L_46;
	}
}
IL2CPP_EXTERN_C  GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 Pattern_ToRumble_mFB8A74A47B54296D38A3F46A9DBD900C308EB006_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72*>(__this + _offset);
	GamepadRumble_t7DE7D16E45630C3E68812B85E00E60F32D0E3240 _returnValue;
	_returnValue = Pattern_ToRumble_mFB8A74A47B54296D38A3F46A9DBD900C308EB006(_thisAdjusted, method);
	return _returnValue;
}
// System.String Lofelt.NiceVibrations.HapticPatterns/Pattern::ToClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Pattern_ToClip_mFD7C70C9687B1FAD4AB50B7D082C0C07F5754FBD (Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B481BD414EE082CA5F33A7513CDB2D68ADAF594);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CF167CD5E0AB4195BC6B1A4DEDCCEEA1E9E954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8F8B953FE2D84FB48669F1FF532EB963C0006E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		// if (clipJsonTemplate == null)
		il2cpp_codegen_runtime_class_init_inline(Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var);
		String_t* L_0 = ((Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_StaticFields*)il2cpp_codegen_static_fields_for(Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var))->___clipJsonTemplate_2;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}

IL_000d:
	{
		// String amplitudeEnvelope = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for (int i = 0; i < time.Length; i++)
		V_1 = 0;
		goto IL_009f;
	}

IL_001a:
	{
		// float clampedAmplitude = Mathf.Clamp(amplitude[i], 0.0f, 1.0f);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___amplitude_1;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		float L_5;
		L_5 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, (0.0f), (1.0f), NULL);
		V_2 = L_5;
		// amplitudeEnvelope += "{ \"time\":" + time[i].ToString(numberFormat) + "," +
		//                        "\"amplitude\":" + clampedAmplitude.ToString(numberFormat) + "}";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral4B481BD414EE082CA5F33A7513CDB2D68ADAF594);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral4B481BD414EE082CA5F33A7513CDB2D68ADAF594);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_11 = __this->___time_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		il2cpp_codegen_runtime_class_init_inline(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_13 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat_2;
		String_t* L_14;
		L_14 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), L_13, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_14);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_10;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralD8F8B953FE2D84FB48669F1FF532EB963C0006E0);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralD8F8B953FE2D84FB48669F1FF532EB963C0006E0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_17 = ((HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_StaticFields*)il2cpp_codegen_static_fields_for(HapticPatterns_t27221E43F3EB529E1AFD45C1D3D01EE9E8834C56_il2cpp_TypeInfo_var))->___numberFormat_2;
		String_t* L_18;
		L_18 = Single_ToString_m534852BD7949AA972435783D7B96D0FFB09F6D6A((&V_2), L_17, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_16;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		String_t* L_20;
		L_20 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_19, NULL);
		V_0 = L_20;
		// if (i + 1 < time.Length)
		int32_t L_21 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_22 = __this->___time_0;
		NullCheck(L_22);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_21, 1))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_009b;
		}
	}
	{
		// amplitudeEnvelope += ",";
		String_t* L_23 = V_0;
		String_t* L_24;
		L_24 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_23, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
		V_0 = L_24;
	}

IL_009b:
	{
		// for (int i = 0; i < time.Length; i++)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_009f:
	{
		// for (int i = 0; i < time.Length; i++)
		int32_t L_26 = V_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_27 = __this->___time_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// return clipJsonTemplate.Replace("{amplitude-envelope}", amplitudeEnvelope);
		il2cpp_codegen_runtime_class_init_inline(Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var);
		String_t* L_28 = ((Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_StaticFields*)il2cpp_codegen_static_fields_for(Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72_il2cpp_TypeInfo_var))->___clipJsonTemplate_2;
		String_t* L_29 = V_0;
		NullCheck(L_28);
		String_t* L_30;
		L_30 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_28, _stringLiteralC5CF167CD5E0AB4195BC6B1A4DEDCCEEA1E9E954, L_29, NULL);
		return L_30;
	}
}
IL2CPP_EXTERN_C  String_t* Pattern_ToClip_mFD7C70C9687B1FAD4AB50B7D082C0C07F5754FBD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Pattern_ToClip_mFD7C70C9687B1FAD4AB50B7D082C0C07F5754FBD(_thisAdjusted, method);
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
// Conversion methods for marshalling of: Lofelt.NiceVibrations.HapticPatterns/Preset
IL2CPP_EXTERN_C void Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshal_pinvoke(const Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828& unmarshaled, Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshaled_pinvoke& marshaled)
{
	marshaled.___type_0 = unmarshaled.___type_0;
	marshaled.___maximumAmplitudePattern_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___maximumAmplitudePattern_1);
	marshaled.___jsonClip_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___jsonClip_2);
}
IL2CPP_EXTERN_C void Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshal_pinvoke_back(const Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshaled_pinvoke& marshaled, Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledtype_temp_0 = 0;
	unmarshaledtype_temp_0 = marshaled.___type_0;
	unmarshaled.___type_0 = unmarshaledtype_temp_0;
	unmarshaled.___maximumAmplitudePattern_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___maximumAmplitudePattern_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___maximumAmplitudePattern_1), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___maximumAmplitudePattern_1));
	unmarshaled.___jsonClip_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___jsonClip_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___jsonClip_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___jsonClip_2));
}
// Conversion method for clean up from marshalling of: Lofelt.NiceVibrations.HapticPatterns/Preset
IL2CPP_EXTERN_C void Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshal_pinvoke_cleanup(Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___maximumAmplitudePattern_1);
	marshaled.___maximumAmplitudePattern_1 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___jsonClip_2);
	marshaled.___jsonClip_2 = NULL;
}
// Conversion methods for marshalling of: Lofelt.NiceVibrations.HapticPatterns/Preset
IL2CPP_EXTERN_C void Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshal_com(const Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828& unmarshaled, Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshaled_com& marshaled)
{
	marshaled.___type_0 = unmarshaled.___type_0;
	marshaled.___maximumAmplitudePattern_1 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_R4, unmarshaled.___maximumAmplitudePattern_1);
	marshaled.___jsonClip_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___jsonClip_2);
}
IL2CPP_EXTERN_C void Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshal_com_back(const Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshaled_com& marshaled, Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t unmarshaledtype_temp_0 = 0;
	unmarshaledtype_temp_0 = marshaled.___type_0;
	unmarshaled.___type_0 = unmarshaledtype_temp_0;
	unmarshaled.___maximumAmplitudePattern_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___maximumAmplitudePattern_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___maximumAmplitudePattern_1), (void*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_R4, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, marshaled.___maximumAmplitudePattern_1));
	unmarshaled.___jsonClip_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___jsonClip_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___jsonClip_2), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, marshaled.___jsonClip_2));
}
// Conversion method for clean up from marshalling of: Lofelt.NiceVibrations.HapticPatterns/Preset
IL2CPP_EXTERN_C void Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshal_com_cleanup(Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___maximumAmplitudePattern_1);
	marshaled.___maximumAmplitudePattern_1 = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___jsonClip_2);
	marshaled.___jsonClip_2 = NULL;
}
// System.Void Lofelt.NiceVibrations.HapticPatterns/Preset::.ctor(Lofelt.NiceVibrations.HapticPatterns/PresetType,System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572 (Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828* __this, int32_t ___type0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___time1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___amplitude2, const RuntimeMethod* method) 
{
	Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Pattern pattern = new Pattern(time, amplitude);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = ___time1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = ___amplitude2;
		Pattern__ctor_m0381400DEF8AC63215B136B318282B8B39D7CE22((&V_0), L_0, L_1, NULL);
		// this.type = type;
		int32_t L_2 = ___type0;
		__this->___type_0 = L_2;
		// this.maximumAmplitudePattern = pattern.time;
		Pattern_tBBEAABB6B358583273BDD6C60EA74FA1ABF11E72 L_3 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = L_3.___time_0;
		__this->___maximumAmplitudePattern_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___maximumAmplitudePattern_1), (void*)L_4);
		// this.jsonClip = System.Text.Encoding.UTF8.GetBytes(pattern.ToClip());
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
		L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_6;
		L_6 = Pattern_ToClip_mFD7C70C9687B1FAD4AB50B7D082C0C07F5754FBD((&V_0), NULL);
		NullCheck(L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
		__this->___jsonClip_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jsonClip_2), (void*)L_7);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572_AdjustorThunk (RuntimeObject* __this, int32_t ___type0, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___time1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___amplitude2, const RuntimeMethod* method)
{
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828*>(__this + _offset);
	Preset__ctor_m6EBDC43D2BD021F13D530424BC65616ACE199572(_thisAdjusted, ___type0, ___time1, ___amplitude2, method);
}
// System.Single Lofelt.NiceVibrations.HapticPatterns/Preset::GetDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Preset_GetDuration_mB77C3715AAA5BA8308AE5F760CDC922CFE2218A2 (Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828* __this, const RuntimeMethod* method) 
{
	{
		// if (maximumAmplitudePattern.Length > 0)
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___maximumAmplitudePattern_1;
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_001b;
		}
	}
	{
		// return maximumAmplitudePattern[maximumAmplitudePattern.Length - 1];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = __this->___maximumAmplitudePattern_1;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = __this->___maximumAmplitudePattern_1;
		NullCheck(L_2);
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}

IL_001b:
	{
		// return 0f;
		return (0.0f);
	}
}
IL2CPP_EXTERN_C  float Preset_GetDuration_mB77C3715AAA5BA8308AE5F760CDC922CFE2218A2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Preset_tE9AB3861F05D2F7838C2971B98BEAC8E7D774828*>(__this + _offset);
	float _returnValue;
	_returnValue = Preset_GetDuration_mB77C3715AAA5BA8308AE5F760CDC922CFE2218A2(_thisAdjusted, method);
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
// System.Void Lofelt.NiceVibrations.HapticReceiver::OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_OnBeforeSerialize_mAC3F0A794D3B3BB97A17630C16DE51AD67DA2320 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _outputLevel = HapticController._outputLevel;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____outputLevel_10;
		__this->____outputLevel_4 = L_0;
		// _hapticsEnabled = HapticController._hapticsEnabled;
		bool L_1 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled_9;
		__this->____hapticsEnabled_5 = L_1;
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_OnAfterDeserialize_m10FDB611EB984973EB6A0358D5292351CE06CC62 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HapticController._outputLevel = _outputLevel;
		float L_0 = __this->____outputLevel_4;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____outputLevel_10 = L_0;
		// HapticController._hapticsEnabled = _hapticsEnabled;
		bool L_1 = __this->____hapticsEnabled_5;
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled_9 = L_1;
		// }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.HapticReceiver::get_outputLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticReceiver_get_outputLevel_mC029EBAB921E8C7D447DCCC9FC3C45E2734F4150 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return HapticController.outputLevel; }
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = HapticController_get_outputLevel_mB9E570F29478F1DD5DCAF278000A0243D2884953_inline(NULL);
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::set_outputLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_set_outputLevel_m22FCEED4A4B265D2ACCFA3816EF859FB775F5EB6 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { HapticController.outputLevel = value; }
		float L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_set_outputLevel_m259DA805820909202D9A3919CEDFFB7256B4BBCC(L_0, NULL);
		// set { HapticController.outputLevel = value; }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticReceiver::get_hapticsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticReceiver_get_hapticsEnabled_m5B81D63CED671A10B43781F8785B8F32CD635786 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return HapticController.hapticsEnabled; }
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887_inline(NULL);
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::set_hapticsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_set_hapticsEnabled_m7C35DD37097709CA60A8A6260173C712EC65F295 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { HapticController.hapticsEnabled = value; }
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_set_hapticsEnabled_m9A2E6CA744C9D85358114BEFE898155E0C958C2B(L_0, NULL);
		// set { HapticController.hapticsEnabled = value; }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_Start_mC7A9F46B022D38A6256754E433666E4BA59DA06A (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HapticController.Init();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_Init_m22E37359750A428A75C583385A5D813B2D959F73(NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_OnApplicationFocus_m7D6CBD7E855F2DBB1AF9994DF36A16CD46BB9D22 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, bool ___hasFocus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HapticController.ProcessApplicationFocus(hasFocus);
		bool L_0 = ___hasFocus0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_ProcessApplicationFocus_m161EAF2B8408B1AC9C74C9D2D41F637071C93C07(L_0, NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver_OnDestroy_mA8F67FBFECC00C0DED192B6090AB23069AE532C0 (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	{
		// GamepadRumbler.Stop();
		GamepadRumbler_Stop_m5CDA6A7D1F191046DEDF2AA37EFDD030A63920F9(NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticReceiver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticReceiver__ctor_m44CDE6A5C3CEF92FF8F24700252218F271B3AB9D (HapticReceiver_t848B8AF4F0AD939006FA086EA2E2D0A202776A1B* __this, const RuntimeMethod* method) 
{
	{
		// private float _outputLevel = 1.0f;
		__this->____outputLevel_4 = (1.0f);
		// private bool _hapticsEnabled = true;
		__this->____hapticsEnabled_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Lofelt.NiceVibrations.HapticPatterns/PresetType Lofelt.NiceVibrations.HapticSource::get_fallbackPreset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HapticSource_get_fallbackPreset_mEECE617416CB3FF45437D70015336FE602735397 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		// get { return _fallbackPreset; }
		int32_t L_0 = __this->____fallbackPreset_8;
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::set_fallbackPreset(Lofelt.NiceVibrations.HapticPatterns/PresetType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_set_fallbackPreset_m6D5470B79AFFE3806503BE1C2860A90EDF58F05A (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// set { _fallbackPreset = value; }
		int32_t L_0 = ___value0;
		__this->____fallbackPreset_8 = L_0;
		// set { _fallbackPreset = value; }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticSource::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_get_loop_mE7DBF84772815100A8282D36A303AD8B780F7937 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		// get { return _loop; }
		bool L_0 = __this->____loop_9;
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_set_loop_m5A9856EDEDE05D7E78C6B6C17FE98EDBEC8E0D3E (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { _loop = value; }
		bool L_0 = ___value0;
		__this->____loop_9 = L_0;
		// set { _loop = value; }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.HapticSource::get_level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticSource_get_level_m7C663BF92A50D6DB6E85BCE06F43DB56819B3F10 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		// get { return _level; }
		float L_0 = __this->____level_10;
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::set_level(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_set_level_m1878F51C56E15FB35DE1F104AA07AC922EF97133 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _level = value;
		float L_0 = ___value0;
		__this->____level_10 = L_0;
		// if (IsLoaded())
		bool L_1;
		L_1 = HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9(__this, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// HapticController.clipLevel = _level;
		float L_2 = __this->____level_10;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_set_clipLevel_m80B5B8741E37779079AFD64191F140D73AC5E2EF(L_2, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.HapticSource::get_frequencyShift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HapticSource_get_frequencyShift_m52C31EFE74C8C6A3200D8B762933216EA74EF7E4 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		// get { return _frequencyShift; }
		float L_0 = __this->____frequencyShift_11;
		return L_0;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::set_frequencyShift(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_set_frequencyShift_m0D869341950D6085920988E55EA2FAB5BA70B619 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _frequencyShift = value;
		float L_0 = ___value0;
		__this->____frequencyShift_11 = L_0;
		// if (IsLoaded())
		bool L_1;
		L_1 = HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9(__this, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// HapticController.clipFrequencyShift = _frequencyShift;
		float L_2 = __this->____frequencyShift_11;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_set_clipFrequencyShift_m46D7B83FD3D5FEFF6B9E039DA1685C58ECFE6612(L_2, NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource__cctor_m64699115A21D5F953360E19A122FC9D79A7805DB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__22_0_mD1B7C55840B8789E575D17F2E28BE41222F05C1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_cctorU3Eb__22_1_m839E6085723C13399E8AAFD10EFE88461E10F11D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HapticController.LoadedClipChanged += () =>
		// {
		//     loadedHapticSource = null;
		// };
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___LoadedClipChanged_12;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var);
		U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* L_1 = ((U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, L_1, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__22_0_mD1B7C55840B8789E575D17F2E28BE41222F05C1A_RuntimeMethod_var), NULL);
		Delegate_t* L_3;
		L_3 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_0, L_2, NULL);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___LoadedClipChanged_12 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_3, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___LoadedClipChanged_12), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_3, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// HapticController.PlaybackStarted += () =>
		// {
		//     lastPlayedHapticSource = null;
		// };
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___PlaybackStarted_13;
		U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* L_5 = ((U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3C_cctorU3Eb__22_1_m839E6085723C13399E8AAFD10EFE88461E10F11D_RuntimeMethod_var), NULL);
		Delegate_t* L_7;
		L_7 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_6, NULL);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___PlaybackStarted_13 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->___PlaybackStarted_13), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_7, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_Play_mBE8536FBE9D12DBE92814A33C1930C5F9306D2A4 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (CanPlay())
		bool L_0;
		L_0 = HapticSource_CanPlay_m6573EFA48B841878DF318B0D14F0C1B0CC67C9CE(__this, NULL);
		if (!L_0)
		{
			goto IL_0070;
		}
	}
	{
		// HapticController.Load(clip);
		HapticClip_tEE25B78FB55CF38704D366A9BEEC4687B51B1D98* L_1 = __this->___clip_5;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Load_mE91A8FCA5AD81A52B0960D91A9A57E644B3A6D83(L_1, NULL);
		// loadedHapticSource = this;
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___loadedHapticSource_12 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___loadedHapticSource_12), (void*)__this);
		// HapticController.Loop(loop);
		bool L_2;
		L_2 = HapticSource_get_loop_mE7DBF84772815100A8282D36A303AD8B780F7937_inline(__this, NULL);
		HapticController_Loop_m45FB287179B3DAC3AD7A816AF85FBE61F73C30CA(L_2, NULL);
		// HapticController.clipLevel = level;
		float L_3;
		L_3 = HapticSource_get_level_m7C663BF92A50D6DB6E85BCE06F43DB56819B3F10_inline(__this, NULL);
		HapticController_set_clipLevel_m80B5B8741E37779079AFD64191F140D73AC5E2EF(L_3, NULL);
		// HapticController.clipFrequencyShift = frequencyShift;
		float L_4;
		L_4 = HapticSource_get_frequencyShift_m52C31EFE74C8C6A3200D8B762933216EA74EF7E4_inline(__this, NULL);
		HapticController_set_clipFrequencyShift_m46D7B83FD3D5FEFF6B9E039DA1685C58ECFE6612(L_4, NULL);
		// if (seekTime != 0.0f && !loop)
		float L_5 = __this->___seekTime_7;
		if ((((float)L_5) == ((float)(0.0f))))
		{
			goto IL_005a;
		}
	}
	{
		bool L_6;
		L_6 = HapticSource_get_loop_mE7DBF84772815100A8282D36A303AD8B780F7937_inline(__this, NULL);
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		// HapticController.Seek(seekTime);
		float L_7 = __this->___seekTime_7;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Seek_mF49BDF3CE3FE84E2412324A917067F7D37919D64(L_7, NULL);
	}

IL_005a:
	{
		// HapticController.fallbackPreset = fallbackPreset;
		int32_t L_8;
		L_8 = HapticSource_get_fallbackPreset_mEECE617416CB3FF45437D70015336FE602735397_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_set_fallbackPreset_m59C957576E33F13392F08310B4E5F8D610CA2EA1_inline(L_8, NULL);
		// HapticController.Play();
		HapticController_Play_mDB776487954DC2A0EC99BC87C67505CD810938C4(NULL);
		// lastPlayedHapticSource = this;
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource_13 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource_13), (void*)__this);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticSource::CanPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_CanPlay_m6573EFA48B841878DF318B0D14F0C1B0CC67C9CE (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (!HapticController.IsPlaying() ||
		//        (lastPlayedHapticSource != null && priority <= lastPlayedHapticSource.priority));
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_IsPlaying_m2184DE06BA77A234A514D91B286CE8BF2FA27482(NULL);
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* L_1 = ((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_3 = __this->___priority_6;
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* L_4 = ((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource_13;
		NullCheck(L_4);
		int32_t L_5 = L_4->___priority_6;
		return (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002a:
	{
		return (bool)0;
	}

IL_002c:
	{
		return (bool)1;
	}
}
// System.Boolean Lofelt.NiceVibrations.HapticSource::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Object.ReferenceEquals(this, loadedHapticSource);
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* L_0 = ((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___loadedHapticSource_12;
		return (bool)((((RuntimeObject*)(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)__this) == ((RuntimeObject*)(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)L_0))? 1 : 0);
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_Stop_m565E771BCE6FE1F62EE12F0267211C9CCAE3EC00 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsLoaded())
		bool L_0;
		L_0 = HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9(__this, NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// HapticController.Stop();
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		HapticController_Stop_m5B7223E597494DC4AFC4BC87FB149EA9DB0867B5(NULL);
	}

IL_000d:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::Seek(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_Seek_m112488608ADFCCD47EF2DBE4E4EB28D43E01587E (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, float ___time0, const RuntimeMethod* method) 
{
	{
		// this.seekTime = time;
		float L_0 = ___time0;
		__this->___seekTime_7 = L_0;
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource_OnDisable_m8A98EDED152930790E5B539AD788E5B5381226E7 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (HapticController.IsPlaying() && IsLoaded())
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = HapticController_IsPlaying_m2184DE06BA77A234A514D91B286CE8BF2FA27482(NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = HapticSource_IsLoaded_m095363985BA4A90E499EF53D5406EB36B1E3E8F9(__this, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// this.Stop();
		HapticSource_Stop_m565E771BCE6FE1F62EE12F0267211C9CCAE3EC00(__this, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HapticSource__ctor_m5F9E6ECB9B30C268948DCE62F8A8CA604C9A6267 (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		// public int priority = DEFAULT_PRIORITY;
		__this->___priority_6 = ((int32_t)128);
		// HapticPatterns.PresetType _fallbackPreset = HapticPatterns.PresetType.None;
		__this->____fallbackPreset_8 = (-1);
		// float _level = 1.0f;
		__this->____level_10 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Lofelt.NiceVibrations.HapticSource/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6088842D3BFC9959BCAA1DE2CD8CFC0B4983F111 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* L_0 = (U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE*)il2cpp_codegen_object_new(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5D6483E39A7DF2468D6200E50958D5AE115FF193(L_0, NULL);
		((U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5D6483E39A7DF2468D6200E50958D5AE115FF193 (U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource/<>c::<.cctor>b__22_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__22_0_mD1B7C55840B8789E575D17F2E28BE41222F05C1A (U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// loadedHapticSource = null;
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___loadedHapticSource_12 = (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___loadedHapticSource_12), (void*)(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)NULL);
		// };
		return;
	}
}
// System.Void Lofelt.NiceVibrations.HapticSource/<>c::<.cctor>b__22_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_cctorU3Eb__22_1_m839E6085723C13399E8AAFD10EFE88461E10F11D (U3CU3Ec_t84E00799D1D4EBE51571F107728C375B85F5C3EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lastPlayedHapticSource = null;
		il2cpp_codegen_runtime_class_init_inline(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var);
		((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource_13 = (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_StaticFields*)il2cpp_codegen_static_fields_for(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3_il2cpp_TypeInfo_var))->___lastPlayedHapticSource_13), (void*)(HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3*)NULL);
		// };
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
// System.String Lofelt.NiceVibrations.JNIHelpers::javaThrowableToString(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JNIHelpers_javaThrowableToString_m161BACA2F355C3D73F8AACD8C58C0DA6EC1E3117 (intptr_t ___throwable0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4163EC7E399C450E8F73BD99DA4C4E81184962CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1CA335EF287DF9364E8A16BB365BDAEB23ED4A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFBE2EF02B478337E3E96E4014859EBED0CCE65C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDD3352BD99189DE5E9D144947AC562A510FA72E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	intptr_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	intptr_t V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		// IntPtr throwableClass = AndroidJNI.FindClass("java/lang/Throwable");
		intptr_t L_0;
		L_0 = AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9(_stringLiteralBFBE2EF02B478337E3E96E4014859EBED0CCE65C, NULL);
		V_0 = L_0;
		// IntPtr androidUtilLogClass = AndroidJNI.FindClass("android/util/Log");
		intptr_t L_1;
		L_1 = AndroidJNI_FindClass_m6E9908108F8D828563AD510C5A355E71A9A493E9(_stringLiteralFDD3352BD99189DE5E9D144947AC562A510FA72E, NULL);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0074:
			{// begin finally (depth: 1)
				{
					// if (throwable != IntPtr.Zero)
					intptr_t L_2 = ___throwable0;
					intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
					bool L_4;
					L_4 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_2, L_3, NULL);
					if (!L_4)
					{
						goto IL_0087;
					}
				}
				{
					// AndroidJNI.DeleteLocalRef(throwable);
					intptr_t L_5 = ___throwable0;
					AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB(L_5, NULL);
				}

IL_0087:
				{
					// if (throwableClass != IntPtr.Zero)
					intptr_t L_6 = V_0;
					intptr_t L_7 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
					bool L_8;
					L_8 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_6, L_7, NULL);
					if (!L_8)
					{
						goto IL_009a;
					}
				}
				{
					// AndroidJNI.DeleteLocalRef(throwableClass);
					intptr_t L_9 = V_0;
					AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB(L_9, NULL);
				}

IL_009a:
				{
					// if (androidUtilLogClass != IntPtr.Zero)
					intptr_t L_10 = V_1;
					intptr_t L_11 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
					bool L_12;
					L_12 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_10, L_11, NULL);
					if (!L_12)
					{
						goto IL_00ad;
					}
				}
				{
					// AndroidJNI.DeleteLocalRef(androidUtilLogClass);
					intptr_t L_13 = V_1;
					AndroidJNI_DeleteLocalRef_mD2A2B4F1C17A4F5863BB94F88F268E72FD120DBB(L_13, NULL);
				}

IL_00ad:
				{
					// }
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// IntPtr toStringMethodId = AndroidJNI.GetMethodID(throwableClass, "toString", "()Ljava/lang/String;");
			intptr_t L_14 = V_0;
			intptr_t L_15;
			L_15 = AndroidJNI_GetMethodID_mA7FF961764CA4D68C4789E5A17926CE5FF9B3549(L_14, _stringLiteral495DD512A2F1C21C6107D1EA689AF431C75A1C5A, _stringLiteralE4EE767F8D4A5FC13E8CF3DB41F06A5631E37D56, NULL);
			V_2 = L_15;
			// IntPtr getStackTraceStringMethodId = AndroidJNI.GetStaticMethodID(androidUtilLogClass, "getStackTraceString", "(Ljava/lang/Throwable;)Ljava/lang/String;");
			intptr_t L_16 = V_1;
			intptr_t L_17;
			L_17 = AndroidJNI_GetStaticMethodID_mA13B58796C4E210B46956723FE664B6D0130C5A3(L_16, _stringLiteralA1CA335EF287DF9364E8A16BB365BDAEB23ED4A3, _stringLiteral4163EC7E399C450E8F73BD99DA4C4E81184962CB, NULL);
			V_3 = L_17;
			// string exceptionMessage = AndroidJNI.CallStringMethod(throwable, toStringMethodId, new jvalue[] { });
			intptr_t L_18 = ___throwable0;
			intptr_t L_19 = V_2;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_20 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)0);
			String_t* L_21;
			L_21 = AndroidJNI_CallStringMethod_m52FAF2826B75AF2AEA8F848AEC973A682216EC4C(L_18, L_19, L_20, NULL);
			// jniArgs[0].l = throwable;
			il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_22 = ((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs_0;
			NullCheck(L_22);
			intptr_t L_23 = ___throwable0;
			((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_23;
			// string exceptionCallStack = AndroidJNI.CallStaticStringMethod(androidUtilLogClass, getStackTraceStringMethodId, jniArgs);
			intptr_t L_24 = V_1;
			intptr_t L_25 = V_3;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_26 = ((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs_0;
			String_t* L_27;
			L_27 = AndroidJNI_CallStaticStringMethod_m7E8E3AFF8296764C324060E65B052B23500C18AB(L_24, L_25, L_26, NULL);
			V_4 = L_27;
			// return exceptionMessage + "\n" + exceptionCallStack;
			String_t* L_28 = V_4;
			String_t* L_29;
			L_29 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_21, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_28, NULL);
			V_5 = L_29;
			goto IL_00ae;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ae:
	{
		// }
		String_t* L_30 = V_5;
		return L_30;
	}
}
// System.Void Lofelt.NiceVibrations.JNIHelpers::Call(UnityEngine.AndroidJavaObject,System.IntPtr,UnityEngine.jvalue[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_m9EB5BCDAE56AE45AE865173DAB134FB35C011C75 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, intptr_t ___methodId1, jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* ___jniArgs2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (methodId == IntPtr.Zero)
		intptr_t L_0 = ___methodId1;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_2;
		L_2 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// AndroidJNI.CallVoidMethod(obj.GetRawObject(), methodId, jniArgs);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = ___obj0;
			NullCheck(L_3);
			intptr_t L_4;
			L_4 = AndroidJavaObject_GetRawObject_m536F043B5CE2C21369FF6173C9D2A9A62136BC48(L_3, NULL);
			intptr_t L_5 = ___methodId1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = ___jniArgs2;
			AndroidJNI_CallVoidMethod_mFCFF6A5FF4A51305C3D2DBFB3A0699617EF40D48(L_4, L_5, L_6, NULL);
			// IntPtr throwable = AndroidJNI.ExceptionOccurred();
			intptr_t L_7;
			L_7 = AndroidJNI_ExceptionOccurred_mAE2AE7C57E06059383EDCAB956A01BDF7D03F54C(NULL);
			V_0 = L_7;
			// if (throwable != IntPtr.Zero)
			intptr_t L_8 = V_0;
			intptr_t L_9 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
			bool L_10;
			L_10 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_8, L_9, NULL);
			if (!L_10)
			{
				goto IL_003f_1;
			}
		}
		{
			// AndroidJNI.ExceptionClear();
			AndroidJNI_ExceptionClear_m1205CD178ADB8E0E7EBDBE349AFA767D5D7758B8(NULL);
			// String exception = javaThrowableToString(throwable);
			intptr_t L_11 = V_0;
			il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
			String_t* L_12;
			L_12 = JNIHelpers_javaThrowableToString_m161BACA2F355C3D73F8AACD8C58C0DA6EC1E3117(L_11, NULL);
			// Debug.LogError(exception);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_12, NULL);
		}

IL_003f_1:
		{
			// }
			goto IL_0048;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{// begin catch(System.Exception)
		// Debug.LogException(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0048;
	}// end catch (depth: 1)

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.JNIHelpers::Call(UnityEngine.AndroidJavaObject,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_m4C7983BAB087B9A0C617F22D80760AC83698D7F5 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, intptr_t ___methodId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jniArgs[0].l = System.IntPtr.Zero;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs_0;
		NullCheck(L_0);
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___l_8 = L_1;
		// Call(obj, methodId, jniArgs);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___obj0;
		intptr_t L_3 = ___methodId1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_4 = ((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs_0;
		JNIHelpers_Call_m9EB5BCDAE56AE45AE865173DAB134FB35C011C75(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.JNIHelpers::Call(UnityEngine.AndroidJavaObject,System.IntPtr,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_mE02DC3C0B0732DF8C4144494DA6AAC36509D53AD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, intptr_t ___methodId1, float ___arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jniArgs[0].f = arg;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs_0;
		NullCheck(L_0);
		float L_1 = ___arg2;
		((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___f_6 = L_1;
		// Call(obj, methodId, jniArgs);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___obj0;
		intptr_t L_3 = ___methodId1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_4 = ((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs_0;
		JNIHelpers_Call_m9EB5BCDAE56AE45AE865173DAB134FB35C011C75(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.JNIHelpers::Call(UnityEngine.AndroidJavaObject,System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_mF7C012A9DDF145A65C9FCFCD82B612E6FBB4B9A6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, intptr_t ___methodId1, bool ___arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jniArgs[0].z = arg;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = ((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs_0;
		NullCheck(L_0);
		bool L_1 = ___arg2;
		((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___z_0 = L_1;
		// Call(obj, methodId, jniArgs);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___obj0;
		intptr_t L_3 = ___methodId1;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_4 = ((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs_0;
		JNIHelpers_Call_m9EB5BCDAE56AE45AE865173DAB134FB35C011C75(L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.JNIHelpers::Call(UnityEngine.AndroidJavaObject,System.IntPtr,System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers_Call_mFEB7DB3EDB24CC2CB122A7F496F76E2A81DE6660 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj0, intptr_t ___methodId1, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___arg2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* V_1 = NULL;
	{
		// object[] args = new object[] { arg };
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___arg2;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		V_0 = L_1;
		// jvalue[] jniArgs = AndroidJNIHelper.CreateJNIArgArray(args);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_4;
		L_4 = AndroidJNIHelper_CreateJNIArgArray_mC12C279EEB43D740F42C5E90301DC54F6E04B876(L_3, NULL);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001c:
			{// begin finally (depth: 1)
				// AndroidJNIHelper.DeleteJNIArgArray(args, jniArgs);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_0;
				jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_6 = V_1;
				AndroidJNIHelper_DeleteJNIArgArray_mBDC874B32FF09E6B48E18B2A58794C0A4DE2FA23(L_5, L_6, NULL);
				// }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// JNIHelpers.Call(obj, methodId, jniArgs);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = ___obj0;
			intptr_t L_8 = ___methodId1;
			jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_9 = V_1;
			il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
			JNIHelpers_Call_m9EB5BCDAE56AE45AE865173DAB134FB35C011C75(L_7, L_8, L_9, NULL);
			// }
			goto IL_0024;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.JNIHelpers::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JNIHelpers__cctor_m0788E9C1F14716808C7F7719AAD8CE4BB9207FC1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static jvalue[] jniArgs = new jvalue[1];
		jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F* L_0 = (jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F*)SZArrayNew(jvalueU5BU5D_t2232DC04C2D2643358141038962889D92D3B5E6F_il2cpp_TypeInfo_var, (uint32_t)1);
		((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_StaticFields*)il2cpp_codegen_static_fields_for(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var))->___jniArgs_0), (void*)L_0);
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
// System.Boolean Lofelt.NiceVibrations.LofeltHaptics::lofeltHapticsLoadDirect(System.IntPtr,System.Byte[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LofeltHaptics_lofeltHapticsLoadDirect_m212DB3189B44BE54F822058250FAE6FFBB72500B (intptr_t ___controller0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes1, int64_t ___size2, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, uint8_t*, int64_t);
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_lofelt_sdk_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(void*) + sizeof(int64_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("lofelt_sdk"), "lofeltHapticsLoadDirect", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___bytes1' to native representation
	uint8_t* ____bytes1_marshaled = NULL;
	if (___bytes1 != NULL)
	{
		____bytes1_marshaled = reinterpret_cast<uint8_t*>((___bytes1)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_lofelt_sdk_INTERNAL
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(lofeltHapticsLoadDirect)(___controller0, ____bytes1_marshaled, ___size2);
	#else
	int32_t returnValue = il2cppPInvokeFunc(___controller0, ____bytes1_marshaled, ___size2);
	#endif

	return static_cast<bool>(returnValue);
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Initialize_m5A160C65E0C3709121B048C91AED126CE2C642E8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00DCAF10AB031EC7D7077B627288147A71E45F07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A446C6F48B1189B2EBA5A31AA341FDB440088E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11A4FE01BF2A9FE8159B9EA16D64D70159683C53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral155B036AB9502432CB2CCD80790FF33D3227823D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1590B1DD196F96A11A36B50B360EB57178EEF954);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41122A25B762B3B469C8461B4F6196CC75D3EF6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48247C19229E69D84C5E6BDDE317DBE03A31CDD3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5E079158CE53A6B1B96591E1222924C388B17C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7E3AEAEF7966AC50BEA811A1C12092709305E19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3CF9BBC2C80F53F057554706A4681C9C5301858);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// using (var unityPlayerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
			AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
			NullCheck(L_0);
			AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
			V_0 = L_0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_012a_1:
				{// begin finally (depth: 2)
					{
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
						if (!L_1)
						{
							goto IL_0133_1;
						}
					}
					{
						AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
						NullCheck(L_2);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
					}

IL_0133_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					// using (var context = unityPlayerClass.GetStatic<AndroidJavaObject>("currentActivity"))
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
					NullCheck(L_3);
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
					L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
					V_1 = L_4;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_011e_2:
						{// begin finally (depth: 3)
							{
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
								if (!L_5)
								{
									goto IL_0127_2;
								}
							}
							{
								AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
								NullCheck(L_6);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
							}

IL_0127_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						// lofeltHaptics = new AndroidJavaObject("com.lofelt.haptics.LofeltHaptics", context);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_1;
						NullCheck(L_8);
						ArrayElementTypeCheck (L_8, L_9);
						(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
						NullCheck(L_10);
						AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_10, _stringLiteralC7E3AEAEF7966AC50BEA811A1C12092709305E19, L_8, NULL);
						il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0 = L_10;
						Il2CppCodeGenWriteBarrier((void**)(&((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0), (void*)L_10);
						// nativeController = lofeltHaptics.Call<long>("getControllerHandle");
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12;
						L_12 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
						NullCheck(L_11);
						int64_t L_13;
						L_13 = AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9(L_11, _stringLiteral41122A25B762B3B469C8461B4F6196CC75D3EF6A, L_12, AndroidJavaObject_Call_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m63E24F733CDC205FED0CF4659E49DB4AE06ADBB9_RuntimeMethod_var);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___nativeController_2 = L_13;
						// hapticPatterns = new AndroidJavaObject("com.lofelt.haptics.HapticPatterns", context);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
						ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = V_1;
						NullCheck(L_15);
						ArrayElementTypeCheck (L_15, L_16);
						(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
						NullCheck(L_17);
						AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_17, _stringLiteralD3CF9BBC2C80F53F057554706A4681C9C5301858, L_15, NULL);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___hapticPatterns_1 = L_17;
						Il2CppCodeGenWriteBarrier((void**)(&((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___hapticPatterns_1), (void*)L_17);
						// playMethodId = AndroidJNIHelper.GetMethodID(lofeltHaptics.GetRawClass(), "play", "()V", false);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
						NullCheck(L_18);
						intptr_t L_19;
						L_19 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_18, NULL);
						intptr_t L_20;
						L_20 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_19, _stringLiteral5343212E1DB387569BE2CA441C963D49AA3949A8, _stringLiteral00DCAF10AB031EC7D7077B627288147A71E45F07, (bool)0, NULL);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___playMethodId_3 = L_20;
						// stopMethodId = AndroidJNIHelper.GetMethodID(lofeltHaptics.GetRawClass(), "stop", "()V", false);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
						NullCheck(L_21);
						intptr_t L_22;
						L_22 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_21, NULL);
						intptr_t L_23;
						L_23 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_22, _stringLiteral7FB065FC47DDCF8134948800A310281E12F058C7, _stringLiteral00DCAF10AB031EC7D7077B627288147A71E45F07, (bool)0, NULL);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___stopMethodId_4 = L_23;
						// seekMethodId = AndroidJNIHelper.GetMethodID(lofeltHaptics.GetRawClass(), "seek", "(F)V", false);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_24 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
						NullCheck(L_24);
						intptr_t L_25;
						L_25 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_24, NULL);
						intptr_t L_26;
						L_26 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_25, _stringLiteral11A4FE01BF2A9FE8159B9EA16D64D70159683C53, _stringLiteral48247C19229E69D84C5E6BDDE317DBE03A31CDD3, (bool)0, NULL);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___seekMethodId_5 = L_26;
						// loopMethodId = AndroidJNIHelper.GetMethodID(lofeltHaptics.GetRawClass(), "loop", "(Z)V", false);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_27 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
						NullCheck(L_27);
						intptr_t L_28;
						L_28 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_27, NULL);
						intptr_t L_29;
						L_29 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_28, _stringLiteralE02BC3B5D408D1BC5E365A7F3C21C2F13AA96125, _stringLiteral155B036AB9502432CB2CCD80790FF33D3227823D, (bool)0, NULL);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___loopMethodId_6 = L_29;
						// setAmplitudeMultiplicationMethodId = AndroidJNIHelper.GetMethodID(lofeltHaptics.GetRawClass(), "setAmplitudeMultiplication", "(F)V", false);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_30 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
						NullCheck(L_30);
						intptr_t L_31;
						L_31 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_30, NULL);
						intptr_t L_32;
						L_32 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_31, _stringLiteral1590B1DD196F96A11A36B50B360EB57178EEF954, _stringLiteral48247C19229E69D84C5E6BDDE317DBE03A31CDD3, (bool)0, NULL);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___setAmplitudeMultiplicationMethodId_7 = L_32;
						// playMaximumAmplitudePattern = AndroidJNIHelper.GetMethodID(hapticPatterns.GetRawClass(), "playMaximumAmplitudePattern", "([F)V", false);
						AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_33 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___hapticPatterns_1;
						NullCheck(L_33);
						intptr_t L_34;
						L_34 = AndroidJavaObject_GetRawClass_mE4FB4DC4F856A52E10C6AAD0B65BEBF47B5071F5(L_33, NULL);
						intptr_t L_35;
						L_35 = AndroidJNIHelper_GetMethodID_mDB705DC228B1BB30E6595068797FB3F2A1817BB8(L_34, _stringLiteralC5E079158CE53A6B1B96591E1222924C388B17C2, _stringLiteral0A446C6F48B1189B2EBA5A31AA341FDB440088E9, (bool)0, NULL);
						((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___playMaximumAmplitudePattern_8 = L_35;
						// }
						goto IL_0128_2;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_0128_2:
				{
					goto IL_0134_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0134_1:
		{
			// }
			goto IL_013d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0136;
		}
		throw e;
	}

CATCH_0136:
	{// begin catch(System.Exception)
		// Debug.LogException(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogException_mAB3F4DC7297ED8FBB49DAA718B70E59A6B0171B0(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_013d;
	}// end catch (depth: 1)

IL_013d:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Release()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Release_m2BC88E4D61DCF47A38B87D8C2D8921846B08BA21 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// lofeltHaptics.Dispose();
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
		NullCheck(L_0);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_0, NULL);
		// lofeltHaptics = null;
		((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0), (void*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL);
		// hapticPatterns.Dispose();
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___hapticPatterns_1;
		NullCheck(L_1);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_1, NULL);
		// hapticPatterns = null;
		((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___hapticPatterns_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___hapticPatterns_1), (void*)(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)NULL);
		// }
		goto IL_0029;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0022;
		}
		throw e;
	}

CATCH_0022:
	{// begin catch(System.Exception)
		// Debug.LogWarning(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0029;
	}// end catch (depth: 1)

IL_0029:
	{
		// }
		return;
	}
}
// System.Boolean Lofelt.NiceVibrations.LofeltHaptics::DeviceMeetsMinimumPlatformRequirements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LofeltHaptics_DeviceMeetsMinimumPlatformRequirements_m34615585FBE08942831610AC262ACDEE23BDD1B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m96D187D8E7B92D10C0CBA2E20B9B6D41B8992DF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA44DFF94D6AA7697C8ADB77FB3A367BA465B869);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JNIHelpers.Call<bool>(lofeltHaptics, "deviceMeetsMinimumRequirements");
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = JNIHelpers_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m96D187D8E7B92D10C0CBA2E20B9B6D41B8992DF5(L_0, _stringLiteralCA44DFF94D6AA7697C8ADB77FB3A367BA465B869, JNIHelpers_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m96D187D8E7B92D10C0CBA2E20B9B6D41B8992DF5_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Load_mEDE5AABA9357F121B6B13D5EFABAD832DE2D9FDC (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// lofeltHapticsLoadDirect((IntPtr)nativeController, data, data.Length);
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		int64_t L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___nativeController_2;
		intptr_t L_1;
		L_1 = IntPtr_op_Explicit_mDDF1A91C58AC17347D735651A0D830CA1E86D4B0(L_0, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___data0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___data0;
		NullCheck(L_3);
		bool L_4;
		L_4 = LofeltHaptics_lofeltHapticsLoadDirect_m212DB3189B44BE54F822058250FAE6FFBB72500B(L_1, L_2, ((int64_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), NULL);
		// }
		return;
	}
}
// System.Single Lofelt.NiceVibrations.LofeltHaptics::GetClipDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LofeltHaptics_GetClipDuration_mB8FDE5E1C096414648093E33A2AE2DF9A4031DDC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m55C33AAF27F7978DFED30C5DF13AE618944F920F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB390D5019ED8691FF161C85B9EC17FE9D19763EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JNIHelpers.Call<float>(lofeltHaptics, "getClipDuration");
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = JNIHelpers_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m55C33AAF27F7978DFED30C5DF13AE618944F920F(L_0, _stringLiteralB390D5019ED8691FF161C85B9EC17FE9D19763EF, JNIHelpers_Call_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m55C33AAF27F7978DFED30C5DF13AE618944F920F_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Play_mD458011A67C0A99B637B629B2B805E1D919814C7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JNIHelpers.Call(lofeltHaptics, playMethodId);
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
		intptr_t L_1 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___playMethodId_3;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		JNIHelpers_Call_m4C7983BAB087B9A0C617F22D80760AC83698D7F5(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::PlayMaximumAmplitudePattern(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_PlayMaximumAmplitudePattern_m9750CD1982EA6A6D924C464F135250FB6569C1F7 (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___timings0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JNIHelpers.Call(hapticPatterns, playMaximumAmplitudePattern, timings);
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___hapticPatterns_1;
		intptr_t L_1 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___playMaximumAmplitudePattern_8;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_2 = ___timings0;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		JNIHelpers_Call_mFEB7DB3EDB24CC2CB122A7F496F76E2A81DE6660(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Stop_m1AC86C07B8885A42AB5D5988F5C6C3BC55FA642B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JNIHelpers.Call(lofeltHaptics, stopMethodId);
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
		intptr_t L_1 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___stopMethodId_4;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		JNIHelpers_Call_m4C7983BAB087B9A0C617F22D80760AC83698D7F5(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::StopPattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_StopPattern_mDA2719D6A8F90D32D956ED4E01401774F9B80AC5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C46D0AA262A0625365CD273F8B2BF1234988C04);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// hapticPatterns.Call("stopPattern");
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___hapticPatterns_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral1C46D0AA262A0625365CD273F8B2BF1234988C04, L_1, NULL);
		// }
		goto IL_001d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.Exception)
		// Debug.LogWarning(ex);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001d;
	}// end catch (depth: 1)

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Seek(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Seek_m6F57DA36A2D3780A7CCDF9F2E3E0A14C1ED66D4E (float ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JNIHelpers.Call(lofeltHaptics, seekMethodId, time);
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
		intptr_t L_1 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___seekMethodId_5;
		float L_2 = ___time0;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		JNIHelpers_Call_mE02DC3C0B0732DF8C4144494DA6AAC36509D53AD(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::SetAmplitudeMultiplication(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_SetAmplitudeMultiplication_m21AF8A0DBE888DF4354815DC65FD3C5635AA6684 (float ___factor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JNIHelpers.Call(lofeltHaptics, setAmplitudeMultiplicationMethodId, factor);
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
		intptr_t L_1 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___setAmplitudeMultiplicationMethodId_7;
		float L_2 = ___factor0;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		JNIHelpers_Call_mE02DC3C0B0732DF8C4144494DA6AAC36509D53AD(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::SetFrequencyShift(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_SetFrequencyShift_m58733F5BB1A11401DE5E843F34ADB79C318AD318 (float ___shift0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::Loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_Loop_m37A6519C484CE0B973B41C0A4C2244A85D5D314B (bool ___enabled0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// JNIHelpers.Call(lofeltHaptics, loopMethodId, enabled);
		il2cpp_codegen_runtime_class_init_inline(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___lofeltHaptics_0;
		intptr_t L_1 = ((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___loopMethodId_6;
		bool L_2 = ___enabled0;
		il2cpp_codegen_runtime_class_init_inline(JNIHelpers_tEEF87B7EA31372961CD68CE5669A44FAACA9E5AA_il2cpp_TypeInfo_var);
		JNIHelpers_Call_mF7C012A9DDF145A65C9FCFCD82B612E6FBB4B9A6(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::TriggerPresetHaptics(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics_TriggerPresetHaptics_mE9ABF939278490958FD0EEF239E3A434B0C13A64 (int32_t ___type0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Lofelt.NiceVibrations.LofeltHaptics::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LofeltHaptics__cctor_m54B75BFF5FC94404F3D625D8B3A2E510DF415481 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static IntPtr playMethodId = IntPtr.Zero;
		intptr_t L_0 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___playMethodId_3 = L_0;
		// static IntPtr stopMethodId = IntPtr.Zero;
		intptr_t L_1 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___stopMethodId_4 = L_1;
		// static IntPtr seekMethodId = IntPtr.Zero;
		intptr_t L_2 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___seekMethodId_5 = L_2;
		// static IntPtr loopMethodId = IntPtr.Zero;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___loopMethodId_6 = L_3;
		// static IntPtr setAmplitudeMultiplicationMethodId = IntPtr.Zero;
		intptr_t L_4 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___setAmplitudeMultiplicationMethodId_7 = L_4;
		// static IntPtr playMaximumAmplitudePattern = IntPtr.Zero;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		((LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_StaticFields*)il2cpp_codegen_static_fields_for(LofeltHaptics_tB987A3728BC87B762AD8A9604B16AFE575B91B4A_il2cpp_TypeInfo_var))->___playMaximumAmplitudePattern_8 = L_5;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DeviceCapabilities_get_platformVersion_m0A60F6AEB62C7F305D64E89587392EFDCE4E4186_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int platformVersion { get; }
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		int32_t L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CplatformVersionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_isVersionSupported_m2349570E6B8BAABBAD18ECF19D758436A1282496_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool isVersionSupported { get; }
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->___U3CisVersionSupportedU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_meetsAdvancedRequirements_m2501828C362AB5507BF4EE8BF1E9FCEE92CDDA46_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _meetsAdvancedRequirements;
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____meetsAdvancedRequirements_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool DeviceCapabilities_get_canLoop_m69DF52370C735DBBD712DB92B96F8961B5A469CD_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _canLoop;
		il2cpp_codegen_runtime_class_init_inline(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var);
		bool L_0 = ((DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_StaticFields*)il2cpp_codegen_static_fields_for(DeviceCapabilities_tC82CE743F80F0A374320E39DD1CD0532C3E72DFE_il2cpp_TypeInfo_var))->____canLoop_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HapticController_get_fallbackPreset_mFB148A0F3EAABF5B2B9B2EE591D70616B8E00548_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _fallbackPreset; }
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		int32_t L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____fallbackPreset_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Timer_get_Enabled_m082C8CCFB9C6936523EDE3E8C8DD010C22EDA032_inline (Timer_t10D85D58F4AC0CF80C625D0124B12098CE540A8B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___enabled_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void HapticController_set_fallbackPreset_m59C957576E33F13392F08310B4E5F8D610CA2EA1_inline (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { _fallbackPreset = value; }
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____fallbackPreset_8 = L_0;
		// set { _fallbackPreset = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HapticController_get_hapticsEnabled_mBA9A8296F49D4445C034A94E25D55446B7760887_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _hapticsEnabled; }
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		bool L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____hapticsEnabled_9;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticController_get_outputLevel_mB9E570F29478F1DD5DCAF278000A0243D2884953_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _outputLevel; }
		il2cpp_codegen_runtime_class_init_inline(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var);
		float L_0 = ((HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_StaticFields*)il2cpp_codegen_static_fields_for(HapticController_t79C84438558C558AA45E1D2CF93B5C0253131CBA_il2cpp_TypeInfo_var))->____outputLevel_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HapticSource_get_loop_mE7DBF84772815100A8282D36A303AD8B780F7937_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		// get { return _loop; }
		bool L_0 = __this->____loop_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticSource_get_level_m7C663BF92A50D6DB6E85BCE06F43DB56819B3F10_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		// get { return _level; }
		float L_0 = __this->____level_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float HapticSource_get_frequencyShift_m52C31EFE74C8C6A3200D8B762933216EA74EF7E4_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		// get { return _frequencyShift; }
		float L_0 = __this->____frequencyShift_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HapticSource_get_fallbackPreset_mEECE617416CB3FF45437D70015336FE602735397_inline (HapticSource_tAE4E897548DB0D956C018CE6521DC901D06502E3* __this, const RuntimeMethod* method) 
{
	{
		// get { return _fallbackPreset; }
		int32_t L_0 = __this->____fallbackPreset_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
