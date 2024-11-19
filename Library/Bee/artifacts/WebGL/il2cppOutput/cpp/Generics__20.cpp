﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename T1>
struct GenericVirtualActionInvoker1Invoker;
template <typename T1>
struct GenericVirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1Invoker;
template <typename T1>
struct GenericInterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3)
	{
		void* params[3] = { &p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct EqualityComparer_1_t01F8CF2CF777F0896EA3EAA7877D78F1307DD1E1;
struct EqualityComparer_1_tF3CCB69D5AB8C3CE9F417F5984908B3B13441607;
struct EqualityComparer_1_tAA2794BBC10EE66A403F408762CF2B100245FD88;
struct EqualityComparer_1_tAA11E11782CC156B732B4C3DBBB3FBC4B0930668;
struct EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51;
struct EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3;
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE;
struct EqualityComparer_1_t0180B7B2FAD2462489F5F7770DBFB010661FA29F;
struct EqualityComparer_1_t91A3BE456B2FE215EA82B38DFD08F04AD27E1FB6;
struct EqualityComparer_1_t3F2F95FBB654B2DA47BF557FD72A35DFEBC22AFB;
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4;
struct EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4;
struct EqualityComparer_1_t678ED0F0E8B023739EF5D6018ABD61BBE060424A;
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8;
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B;
struct EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F;
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB;
struct EqualityComparer_1_tE7CE9ECEA1E1C9468240F1E6198B5851D7C42041;
struct EqualityComparer_1_t2B9B08D0DC828BC7CB837C0507B1D1EF73DD7BF8;
struct EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846;
struct EqualityComparer_1_tE7CEE6714F7CC48529517E0559D972979E9CA0B7;
struct EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839;
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC;
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF;
struct EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504;
struct EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21;
struct EqualityComparer_1_tA3150AA88F929C2D35BB399F701A0B0A643089CB;
struct EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5;
struct EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2;
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2;
struct EqualityComparer_1_t9072871D75372840EEF20C93E4B8909E005D3EF1;
struct EqualityComparer_1_tD05D0CB5F6F4A3900C88F5AFFCCB051B9A889F76;
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499;
struct EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24;
struct EqualityComparer_1_tCB3E520353C0C084FFBFF3D631E929CE2B6A70C6;
struct EqualityComparer_1_t1E747CFBD596204547D9B6B98B222ECC51154FE9;
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862;
struct EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17;
struct EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E;
struct EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED;
struct EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6;
struct EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09;
struct EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1;
struct GenericEqualityComparer_1_t8A7003F05BF4D92E454EEE1D8BE16D53BF74DD12;
struct GenericEqualityComparer_1_t114338E01D17957CBD55B19B31D9AA3A31396E62;
struct GenericEqualityComparer_1_t5E2A59887FAFDB8A70B4FA717767C7CAA3EF3A5E;
struct GenericEqualityComparer_1_tFE7C8B583AA8308523884F13DBFD774923C0101B;
struct GenericEqualityComparer_1_tC861CCE5440E9689C1A12A5232CCC1CD302F0AED;
struct GenericEqualityComparer_1_t6CA5D1B55524AA743693EE7FBBD33D28FE1D135A;
struct GenericEqualityComparer_1_t808C2FB882C6487A61D92FF1EF86AAD011303F04;
struct GenericEqualityComparer_1_t69DC72AD6B13B527C372FD3EACE961412AE5A877;
struct GenericEqualityComparer_1_t22A29539EC552C16D727C52735DF989EBDA3FD1C;
struct GenericEqualityComparer_1_t7E74CDF4F5686370C85528D54991AB58D20D89C8;
struct GenericEqualityComparer_1_t1CA70F45D72BBBE51E0C4B1AFD0DE8F215432E1E;
struct GenericEqualityComparer_1_t842FB7D9FA14D9B8467071A38A62C2449B6DBCF7;
struct GenericEqualityComparer_1_t6F4BD8454312D41F64A3D1CD4F7555E32867FB10;
struct GenericEqualityComparer_1_t8D3B31AA6BBF17C8252624EC6D784347C2728BB0;
struct GenericEqualityComparer_1_t165923AC516FD1DF289A3156DDFD8D07B4AAF8A7;
struct GenericEqualityComparer_1_tAFE3875F1E1680726E49BA059DFFF37933404BF6;
struct GenericEqualityComparer_1_tDC003F39F36335CB504394BE5BBBE96F3B5EC8A4;
struct GenericEqualityComparer_1_t1C286BFC66983E43B67215DD56E32778D4EB95A4;
struct GenericEqualityComparer_1_tF61F9EE945470A0D60FFF0DBEBBB391E639B7C34;
struct GenericEqualityComparer_1_tDDC2841259CCAAFD92EC5D4A06372A87FDB72063;
struct GenericEqualityComparer_1_tFACF95059B022EA5E2F7ABD176121175414B1550;
struct GenericEqualityComparer_1_t58DA97F5D0824C19081EC168FABB0C8181E4AD6F;
struct GenericEqualityComparer_1_tBFD7D21B4B84A04B2284593E8823D43FA81DE4E5;
struct GenericEqualityComparer_1_tB6C7A8D2E046C0DD37C358453A0645FAA00699A9;
struct GenericEqualityComparer_1_t4DE8123E44344FED3BE9169A403FA726F18DFD7E;
struct GenericEqualityComparer_1_tA1C5948DE484DBC212B41660B994501AF1F14A20;
struct GenericEqualityComparer_1_t79B097860FDFBE4223B7E97462B56E8CF28D81B8;
struct GenericEqualityComparer_1_t8D060AACD4225FF7A60A90EE53B8DA9C733F8299;
struct GenericEqualityComparer_1_tDA4FA7351B7B6406528B930FC2CCBD8B9221B9F4;
struct GenericEqualityComparer_1_t405E9AAF3D41BB58C4F761A19AE123EC2FA2C775;
struct GenericEqualityComparer_1_tBBB7204908C5DA4D45C9ED28DE8B6E0C80049F87;
struct GenericEqualityComparer_1_tCE0EE64D4DAC58B97236C18987DF779E890CA34A;
struct GenericEqualityComparer_1_t3A6EE9923FB4DFD5C178BA82A91198E478D7B519;
struct GenericEqualityComparer_1_t2E9F86F90EECF3D97BD11A98AC93AF8126F64A69;
struct GenericEqualityComparer_1_t91B5CB54EC3D5B7BA345148E5BD1130F505790F2;
struct GenericEqualityComparer_1_t14CC3602E3DED49FFEDEE013FAA1000FF152906F;
struct GenericEqualityComparer_1_t51198A345C2BFD664A445D9D2F6E7D26C977E960;
struct GenericEqualityComparer_1_tFBDB6DF019AA6E3955BBB95B90B45DCADB0EBC9F;
struct GenericEqualityComparer_1_t274846047EBEE29EFC30CB76E6BFB35CE5BD255A;
struct GenericEqualityComparer_1_t2F92BDECDF9B3169B85ACF988F28437C9D2DFEDE;
struct GenericEqualityComparer_1_tFF25D57B3C68FAF91CA76B5859014919EAA4F468;
struct GenericEqualityComparer_1_t4D917B455876275A430295BFEA9141506F7F6C5E;
struct GenericEqualityComparer_1_t08617A8C8CA8853BD5FAD9F4143C20773FF5E14D;
struct GenericEqualityComparer_1_tC800D8708E9571E11FF639BC805D64B6AA6F9988;
struct GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56;
struct GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39;
struct Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8;
struct HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED;
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
struct HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4;
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
struct HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A;
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
struct ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0;
struct ICollection_1_tD56FFE4395E7AAA9BC6513B7180B31801ABF0135;
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
struct ICollection_1_t03EA087489342703ED691AFD807C50289BADA136;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_t71A46277DBD73BD4009B2B20885D2B7057593A1A;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_tF78C5A55C1D093F0B8CD95E0247BA2EE703D9D55;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t239F6ACD0FC026E7FA70965FDE161517CD367AED;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t737E5D96E5E3657734509E507812DBA5E7EDD547;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t4537FF5E9634FC142F7BF26B48CA727CCA436047;
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
struct IEqualityComparer_1_t0BB8211419723EB61BF19007AC9D62365E50500E;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3;
struct Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct SetElementProperty_t289C8D92DD4214A46FC3E74E8FE7C6EDE8B1C0C9;
struct NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4;
struct NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD;
struct NativeSlice_1U5BU5D_tFD4B8F2EABBFD0ADDDEFEDBE708F15693DFBFD23;
struct NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990;
struct SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7;
struct SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD;
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
struct SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6;
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D;
struct ValueTuple_2U5BU5D_t421388B3AA488C3C898278B339E982A32C074263;
struct ValueTuple_2U5BU5D_t08F87240E4D056F50F8CE13935C5D5DF5B8BD025;
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962;
struct BackgroundU5BU5D_t29762095DD694E79A85A59135735FF02E54C4B46;
struct BackgroundPositionU5BU5D_t3A9A1E8B7AC3D805C5B076C9A84B5156D7201E9C;
struct BackgroundRepeatU5BU5D_t6B8E9E75430914546B34BCF9BA2980B9856C0E8A;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5;
struct BoundsIntU5BU5D_tCF4BFFCF7975BE9754B8932F19F3A0D0F752F2BD;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorBlockU5BU5D_t15403DAEAB234FE5927F08FC9968B78E2B1D14B6;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49;
struct FontDefinitionU5BU5D_t31BDC3E2D72918B36F815F95F7CBA1F057E3DA39;
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
struct GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70;
struct Hash128U5BU5D_tB104E7247B842648E447B7FCF4748077DC1F8C98;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ManipulatorActivationFilterU5BU5D_tE2A0BDE194B3B4600164AE8238C8CE2B20DBD4D7;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct NavigationU5BU5D_t483F9B11FAE385AD99CDEB565C84D993648C5670;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993;
struct RectIntU5BU5D_t0497041D1621D80C656705FB9F0AB63AD4D8698F;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SpriteStateU5BU5D_tA29A384A9388A48E02C8A6CC1EADBB8B75BFCAC3;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StylePropertyNameU5BU5D_t531626CF806E3F3D348D1F38A9109767014C35F8;
struct TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct CachedCodeEntryKeyU5BU5D_tC40BCA06B0B1553C015B809472A7A59A50E6C7E9;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Type_t;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0;
IL2CPP_EXTERN_C String_t* _stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E;
IL2CPP_EXTERN_C String_t* _stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922;
IL2CPP_EXTERN_C String_t* _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9;
IL2CPP_EXTERN_C String_t* _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4;
struct NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD;
struct NativeSlice_1U5BU5D_tFD4B8F2EABBFD0ADDDEFEDBE708F15693DFBFD23;
struct NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990;
struct SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7;
struct SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD;
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343;
struct SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6;
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D;
struct ValueTuple_2U5BU5D_t421388B3AA488C3C898278B339E982A32C074263;
struct ValueTuple_2U5BU5D_t08F87240E4D056F50F8CE13935C5D5DF5B8BD025;
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962;
struct BackgroundU5BU5D_t29762095DD694E79A85A59135735FF02E54C4B46;
struct BackgroundPositionU5BU5D_t3A9A1E8B7AC3D805C5B076C9A84B5156D7201E9C;
struct BackgroundRepeatU5BU5D_t6B8E9E75430914546B34BCF9BA2980B9856C0E8A;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5;
struct BoundsIntU5BU5D_tCF4BFFCF7975BE9754B8932F19F3A0D0F752F2BD;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ColorBlockU5BU5D_t15403DAEAB234FE5927F08FC9968B78E2B1D14B6;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49;
struct FontDefinitionU5BU5D_t31BDC3E2D72918B36F815F95F7CBA1F057E3DA39;
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7;
struct GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70;
struct Hash128U5BU5D_tB104E7247B842648E447B7FCF4748077DC1F8C98;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ManipulatorActivationFilterU5BU5D_tE2A0BDE194B3B4600164AE8238C8CE2B20DBD4D7;
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D;
struct NavigationU5BU5D_t483F9B11FAE385AD99CDEB565C84D993648C5670;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993;
struct RectIntU5BU5D_t0497041D1621D80C656705FB9F0AB63AD4D8698F;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SpriteStateU5BU5D_tA29A384A9388A48E02C8A6CC1EADBB8B75BFCAC3;
struct StylePropertyNameU5BU5D_t531626CF806E3F3D348D1F38A9109767014C35F8;
struct TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct CachedCodeEntryKeyU5BU5D_tC40BCA06B0B1553C015B809472A7A59A50E6C7E9;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EqualityComparer_1_t01F8CF2CF777F0896EA3EAA7877D78F1307DD1E1  : public RuntimeObject
{
};
struct EqualityComparer_1_tF3CCB69D5AB8C3CE9F417F5984908B3B13441607  : public RuntimeObject
{
};
struct EqualityComparer_1_tAA2794BBC10EE66A403F408762CF2B100245FD88  : public RuntimeObject
{
};
struct EqualityComparer_1_tAA11E11782CC156B732B4C3DBBB3FBC4B0930668  : public RuntimeObject
{
};
struct EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51  : public RuntimeObject
{
};
struct EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3  : public RuntimeObject
{
};
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE  : public RuntimeObject
{
};
struct EqualityComparer_1_t0180B7B2FAD2462489F5F7770DBFB010661FA29F  : public RuntimeObject
{
};
struct EqualityComparer_1_t91A3BE456B2FE215EA82B38DFD08F04AD27E1FB6  : public RuntimeObject
{
};
struct EqualityComparer_1_t3F2F95FBB654B2DA47BF557FD72A35DFEBC22AFB  : public RuntimeObject
{
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4  : public RuntimeObject
{
};
struct EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4  : public RuntimeObject
{
};
struct EqualityComparer_1_t678ED0F0E8B023739EF5D6018ABD61BBE060424A  : public RuntimeObject
{
};
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8  : public RuntimeObject
{
};
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B  : public RuntimeObject
{
};
struct EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F  : public RuntimeObject
{
};
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB  : public RuntimeObject
{
};
struct EqualityComparer_1_tE7CE9ECEA1E1C9468240F1E6198B5851D7C42041  : public RuntimeObject
{
};
struct EqualityComparer_1_t2B9B08D0DC828BC7CB837C0507B1D1EF73DD7BF8  : public RuntimeObject
{
};
struct EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846  : public RuntimeObject
{
};
struct EqualityComparer_1_tE7CEE6714F7CC48529517E0559D972979E9CA0B7  : public RuntimeObject
{
};
struct EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839  : public RuntimeObject
{
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC  : public RuntimeObject
{
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF  : public RuntimeObject
{
};
struct EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504  : public RuntimeObject
{
};
struct EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21  : public RuntimeObject
{
};
struct EqualityComparer_1_tA3150AA88F929C2D35BB399F701A0B0A643089CB  : public RuntimeObject
{
};
struct EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5  : public RuntimeObject
{
};
struct EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2  : public RuntimeObject
{
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2  : public RuntimeObject
{
};
struct EqualityComparer_1_t9072871D75372840EEF20C93E4B8909E005D3EF1  : public RuntimeObject
{
};
struct EqualityComparer_1_tD05D0CB5F6F4A3900C88F5AFFCCB051B9A889F76  : public RuntimeObject
{
};
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499  : public RuntimeObject
{
};
struct EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24  : public RuntimeObject
{
};
struct EqualityComparer_1_tCB3E520353C0C084FFBFF3D631E929CE2B6A70C6  : public RuntimeObject
{
};
struct EqualityComparer_1_t1E747CFBD596204547D9B6B98B222ECC51154FE9  : public RuntimeObject
{
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862  : public RuntimeObject
{
};
struct EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17  : public RuntimeObject
{
};
struct EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E  : public RuntimeObject
{
};
struct EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED  : public RuntimeObject
{
};
struct EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6  : public RuntimeObject
{
};
struct EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09  : public RuntimeObject
{
};
struct EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1  : public RuntimeObject
{
};
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 
{
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ____set;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 
{
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ____set;
	int32_t ____index;
	int32_t ____version;
	uint32_t ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB;
struct GenericEqualityComparer_1_t8A7003F05BF4D92E454EEE1D8BE16D53BF74DD12  : public EqualityComparer_1_t01F8CF2CF777F0896EA3EAA7877D78F1307DD1E1
{
};
struct GenericEqualityComparer_1_t114338E01D17957CBD55B19B31D9AA3A31396E62  : public EqualityComparer_1_tF3CCB69D5AB8C3CE9F417F5984908B3B13441607
{
};
struct GenericEqualityComparer_1_t5E2A59887FAFDB8A70B4FA717767C7CAA3EF3A5E  : public EqualityComparer_1_tAA2794BBC10EE66A403F408762CF2B100245FD88
{
};
struct GenericEqualityComparer_1_tFE7C8B583AA8308523884F13DBFD774923C0101B  : public EqualityComparer_1_tAA11E11782CC156B732B4C3DBBB3FBC4B0930668
{
};
struct GenericEqualityComparer_1_tC861CCE5440E9689C1A12A5232CCC1CD302F0AED  : public EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51
{
};
struct GenericEqualityComparer_1_t6CA5D1B55524AA743693EE7FBBD33D28FE1D135A  : public EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3
{
};
struct GenericEqualityComparer_1_t808C2FB882C6487A61D92FF1EF86AAD011303F04  : public EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE
{
};
struct GenericEqualityComparer_1_t69DC72AD6B13B527C372FD3EACE961412AE5A877  : public EqualityComparer_1_t0180B7B2FAD2462489F5F7770DBFB010661FA29F
{
};
struct GenericEqualityComparer_1_t22A29539EC552C16D727C52735DF989EBDA3FD1C  : public EqualityComparer_1_t91A3BE456B2FE215EA82B38DFD08F04AD27E1FB6
{
};
struct GenericEqualityComparer_1_t7E74CDF4F5686370C85528D54991AB58D20D89C8  : public EqualityComparer_1_t3F2F95FBB654B2DA47BF557FD72A35DFEBC22AFB
{
};
struct GenericEqualityComparer_1_t1CA70F45D72BBBE51E0C4B1AFD0DE8F215432E1E  : public EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4
{
};
struct GenericEqualityComparer_1_t842FB7D9FA14D9B8467071A38A62C2449B6DBCF7  : public EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4
{
};
struct GenericEqualityComparer_1_t6F4BD8454312D41F64A3D1CD4F7555E32867FB10  : public EqualityComparer_1_t678ED0F0E8B023739EF5D6018ABD61BBE060424A
{
};
struct GenericEqualityComparer_1_t8D3B31AA6BBF17C8252624EC6D784347C2728BB0  : public EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8
{
};
struct GenericEqualityComparer_1_t165923AC516FD1DF289A3156DDFD8D07B4AAF8A7  : public EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B
{
};
struct GenericEqualityComparer_1_tAFE3875F1E1680726E49BA059DFFF37933404BF6  : public EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F
{
};
struct GenericEqualityComparer_1_tDC003F39F36335CB504394BE5BBBE96F3B5EC8A4  : public EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB
{
};
struct GenericEqualityComparer_1_t1C286BFC66983E43B67215DD56E32778D4EB95A4  : public EqualityComparer_1_tE7CE9ECEA1E1C9468240F1E6198B5851D7C42041
{
};
struct GenericEqualityComparer_1_tF61F9EE945470A0D60FFF0DBEBBB391E639B7C34  : public EqualityComparer_1_t2B9B08D0DC828BC7CB837C0507B1D1EF73DD7BF8
{
};
struct GenericEqualityComparer_1_tDDC2841259CCAAFD92EC5D4A06372A87FDB72063  : public EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846
{
};
struct GenericEqualityComparer_1_tFACF95059B022EA5E2F7ABD176121175414B1550  : public EqualityComparer_1_tE7CEE6714F7CC48529517E0559D972979E9CA0B7
{
};
struct GenericEqualityComparer_1_t58DA97F5D0824C19081EC168FABB0C8181E4AD6F  : public EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839
{
};
struct GenericEqualityComparer_1_tBFD7D21B4B84A04B2284593E8823D43FA81DE4E5  : public EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC
{
};
struct GenericEqualityComparer_1_tB6C7A8D2E046C0DD37C358453A0645FAA00699A9  : public EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504
{
};
struct GenericEqualityComparer_1_t4DE8123E44344FED3BE9169A403FA726F18DFD7E  : public EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21
{
};
struct GenericEqualityComparer_1_tA1C5948DE484DBC212B41660B994501AF1F14A20  : public EqualityComparer_1_tA3150AA88F929C2D35BB399F701A0B0A643089CB
{
};
struct GenericEqualityComparer_1_t79B097860FDFBE4223B7E97462B56E8CF28D81B8  : public EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5
{
};
struct GenericEqualityComparer_1_t8D060AACD4225FF7A60A90EE53B8DA9C733F8299  : public EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2
{
};
struct GenericEqualityComparer_1_tDA4FA7351B7B6406528B930FC2CCBD8B9221B9F4  : public EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2
{
};
struct GenericEqualityComparer_1_t405E9AAF3D41BB58C4F761A19AE123EC2FA2C775  : public EqualityComparer_1_t9072871D75372840EEF20C93E4B8909E005D3EF1
{
};
struct GenericEqualityComparer_1_tBBB7204908C5DA4D45C9ED28DE8B6E0C80049F87  : public EqualityComparer_1_tD05D0CB5F6F4A3900C88F5AFFCCB051B9A889F76
{
};
struct GenericEqualityComparer_1_tCE0EE64D4DAC58B97236C18987DF779E890CA34A  : public EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499
{
};
struct GenericEqualityComparer_1_t3A6EE9923FB4DFD5C178BA82A91198E478D7B519  : public EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24
{
};
struct GenericEqualityComparer_1_t2E9F86F90EECF3D97BD11A98AC93AF8126F64A69  : public EqualityComparer_1_tCB3E520353C0C084FFBFF3D631E929CE2B6A70C6
{
};
struct GenericEqualityComparer_1_t91B5CB54EC3D5B7BA345148E5BD1130F505790F2  : public EqualityComparer_1_t1E747CFBD596204547D9B6B98B222ECC51154FE9
{
};
struct GenericEqualityComparer_1_t14CC3602E3DED49FFEDEE013FAA1000FF152906F  : public EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862
{
};
struct GenericEqualityComparer_1_t51198A345C2BFD664A445D9D2F6E7D26C977E960  : public EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17
{
};
struct GenericEqualityComparer_1_tFBDB6DF019AA6E3955BBB95B90B45DCADB0EBC9F  : public EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E
{
};
struct GenericEqualityComparer_1_t274846047EBEE29EFC30CB76E6BFB35CE5BD255A  : public EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED
{
};
struct GenericEqualityComparer_1_t2F92BDECDF9B3169B85ACF988F28437C9D2DFEDE  : public EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6
{
};
struct GenericEqualityComparer_1_tFF25D57B3C68FAF91CA76B5859014919EAA4F468  : public EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09
{
};
struct GenericEqualityComparer_1_t4D917B455876275A430295BFEA9141506F7F6C5E  : public EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49
{
};
struct GenericEqualityComparer_1_t08617A8C8CA8853BD5FAD9F4143C20773FF5E14D  : public EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC
{
};
struct GenericEqualityComparer_1_tC800D8708E9571E11FF639BC805D64B6AA6F9988  : public EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1
{
};
struct HashCode64_1_tAACED5C219BCE704BB23DEE5411688A66F4FA312 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t258221577FA59C0B1D9B188C325409BB62050DAB 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct HashCode64_1_t25B99E9F7F998CC07CCA13124E03920779BFF803 
{
	union
	{
		struct
		{
		};
		uint8_t HashCode64_1_t9A0E69580DAA2D2CCB4BA575308077FCCE5F2E6E__padding[1];
	};
};
struct NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___value;
};
struct Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 
{
	int32_t ___hashCode;
	int32_t ___next;
	RuntimeObject* ___value;
};
struct Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 
{
	int32_t ___hashCode;
	int32_t ___next;
	uint32_t ___value;
};
typedef Il2CppFullySharedGenericStruct Slot_tEC146EEEF7022C6542EBF082D658446682962BFD;
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	RuntimeObject* ___Item1;
	RuntimeObject* ___Item2;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_pinvoke
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8_marshaled_com
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_Texture;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___m_RenderTexture;
	VectorImage_t7BD8CE948377FFE95FCA0C48014ACDFC13B8F8FC* ___m_VectorImage;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C 
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_Font;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___m_FontAsset;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E 
{
	float ___m_XPlacement;
	float ___m_YPlacement;
	float ___m_XAdvance;
	float ___m_YAdvance;
};
struct Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 
{
	uint64_t ___u64_0;
	uint64_t ___u64_1;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct BackgroundPositionKeyword_tE680A05B983D256AADC8E2CF1CA169D004B8641B 
{
	int32_t ___value__;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Size;
};
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor;
	float ___m_ColorMultiplier;
	float ___m_FadeDuration;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct EasingMode_tEF87477B9B9EB2524525550AE5ABEBC00FC7B0DF 
{
	int32_t ___value__;
};
struct EventModifiers_t48244B043FBB42CDD555C6AC43279EC7158777AC 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct FontFeatureLookupFlags_t2000121BA341A3CAE5E0D4FAC6AA4378FE14AE1B 
{
	int32_t ___value__;
};
struct GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 
{
	uint32_t ___m_GlyphIndex;
	GlyphValueRecord_t780927A39D46924E0D546A2AE5DDF1BB2B5A9C8E ___m_GlyphValueRecord;
};
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct MouseButton_tEF578B8F208D798E053BC320C29FCBB655E24454 
{
	int32_t ___value__;
};
struct RegexOptions_tE9DA9C4DF8FB26DD1C7E0F8AA022C1164A423F6B 
{
	int32_t ___value__;
};
struct Repeat_tC0330B75B12D24B063BA5151AF3BB73B85D8B840 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct TimeUnit_t56A79CDB672E98A4EE28002BD23B6D5E0BAA2649 
{
	int32_t ___value__;
};
struct Unit_t7A9C3ABB0618BEBFDC1813D07080CE0C145448ED 
{
	int32_t ___value__;
};
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	int32_t ___value__;
};
struct Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD 
{
	HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* ____set;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct PropertyBag_1_t474B4314A78E9CC97DD8CF6E3ADACCDDAFB0841A  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct Slot_t0A95045068CA69D35855DB49026245B2D7F2E059 
{
	int32_t ___hashCode;
	int32_t ___next;
	int32_t ___value;
};
struct ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 
{
	int32_t ___Item1;
	RuntimeObject* ___Item2;
};
struct BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F 
{
	int32_t ___x;
	int32_t ___y;
};
struct EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 
{
	int32_t ___m_Mode;
};
struct GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E 
{
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_FirstAdjustmentRecord;
	GlyphAdjustmentRecord_tC7A1B2E0AC7C4ED9CDB8E95E48790A46B6F315F7 ___m_SecondAdjustmentRecord;
	int32_t ___m_FeatureLookupFlags;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 
{
	int32_t ___U3CbuttonU3Ek__BackingField;
	int32_t ___U3CmodifiersU3Ek__BackingField;
	int32_t ___U3CclickCountU3Ek__BackingField;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	int32_t ___m_Mode;
	bool ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode;
	int32_t ___m_WrapAround;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF 
{
	int32_t ___U3CidU3Ek__BackingField;
	String_t* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_pinvoke
{
	int32_t ___U3CidU3Ek__BackingField;
	char* ___U3CnameU3Ek__BackingField;
};
struct StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF_marshaled_com
{
	int32_t ___U3CidU3Ek__BackingField;
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 
{
	int32_t ____options;
	String_t* ____cultureKey;
	String_t* ____pattern;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_pinvoke
{
	int32_t ____options;
	char* ____cultureKey;
	char* ____pattern;
};
struct CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31_marshaled_com
{
	int32_t ____options;
	Il2CppChar* ____cultureKey;
	Il2CppChar* ____pattern;
};
struct GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56  : public MulticastDelegate_t
{
};
struct GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39  : public MulticastDelegate_t
{
};
struct Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8  : public MulticastDelegate_t
{
};
struct Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3  : public MulticastDelegate_t
{
};
struct Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A  : public MulticastDelegate_t
{
};
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12  : public MulticastDelegate_t
{
};
struct Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78  : public PropertyBag_1_t474B4314A78E9CC97DD8CF6E3ADACCDDAFB0841A
{
	SetElementProperty_t289C8D92DD4214A46FC3E74E8FE7C6EDE8B1C0C9* ___m_Property;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 
{
	int32_t ___keyword;
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___offset;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED  : public SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EqualityComparer_1_t01F8CF2CF777F0896EA3EAA7877D78F1307DD1E1_StaticFields
{
	EqualityComparer_1_t01F8CF2CF777F0896EA3EAA7877D78F1307DD1E1* ___defaultComparer;
};
struct EqualityComparer_1_tF3CCB69D5AB8C3CE9F417F5984908B3B13441607_StaticFields
{
	EqualityComparer_1_tF3CCB69D5AB8C3CE9F417F5984908B3B13441607* ___defaultComparer;
};
struct EqualityComparer_1_tAA2794BBC10EE66A403F408762CF2B100245FD88_StaticFields
{
	EqualityComparer_1_tAA2794BBC10EE66A403F408762CF2B100245FD88* ___defaultComparer;
};
struct EqualityComparer_1_tAA11E11782CC156B732B4C3DBBB3FBC4B0930668_StaticFields
{
	EqualityComparer_1_tAA11E11782CC156B732B4C3DBBB3FBC4B0930668* ___defaultComparer;
};
struct EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51_StaticFields
{
	EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* ___defaultComparer;
};
struct EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3_StaticFields
{
	EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* ___defaultComparer;
};
struct EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE_StaticFields
{
	EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* ___defaultComparer;
};
struct EqualityComparer_1_t0180B7B2FAD2462489F5F7770DBFB010661FA29F_StaticFields
{
	EqualityComparer_1_t0180B7B2FAD2462489F5F7770DBFB010661FA29F* ___defaultComparer;
};
struct EqualityComparer_1_t91A3BE456B2FE215EA82B38DFD08F04AD27E1FB6_StaticFields
{
	EqualityComparer_1_t91A3BE456B2FE215EA82B38DFD08F04AD27E1FB6* ___defaultComparer;
};
struct EqualityComparer_1_t3F2F95FBB654B2DA47BF557FD72A35DFEBC22AFB_StaticFields
{
	EqualityComparer_1_t3F2F95FBB654B2DA47BF557FD72A35DFEBC22AFB* ___defaultComparer;
};
struct EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4_StaticFields
{
	EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* ___defaultComparer;
};
struct EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4_StaticFields
{
	EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* ___defaultComparer;
};
struct EqualityComparer_1_t678ED0F0E8B023739EF5D6018ABD61BBE060424A_StaticFields
{
	EqualityComparer_1_t678ED0F0E8B023739EF5D6018ABD61BBE060424A* ___defaultComparer;
};
struct EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8_StaticFields
{
	EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* ___defaultComparer;
};
struct EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B_StaticFields
{
	EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* ___defaultComparer;
};
struct EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F_StaticFields
{
	EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* ___defaultComparer;
};
struct EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB_StaticFields
{
	EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* ___defaultComparer;
};
struct EqualityComparer_1_tE7CE9ECEA1E1C9468240F1E6198B5851D7C42041_StaticFields
{
	EqualityComparer_1_tE7CE9ECEA1E1C9468240F1E6198B5851D7C42041* ___defaultComparer;
};
struct EqualityComparer_1_t2B9B08D0DC828BC7CB837C0507B1D1EF73DD7BF8_StaticFields
{
	EqualityComparer_1_t2B9B08D0DC828BC7CB837C0507B1D1EF73DD7BF8* ___defaultComparer;
};
struct EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846_StaticFields
{
	EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* ___defaultComparer;
};
struct EqualityComparer_1_tE7CEE6714F7CC48529517E0559D972979E9CA0B7_StaticFields
{
	EqualityComparer_1_tE7CEE6714F7CC48529517E0559D972979E9CA0B7* ___defaultComparer;
};
struct EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839_StaticFields
{
	EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* ___defaultComparer;
};
struct EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* ___defaultComparer;
};
struct EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* ___defaultComparer;
};
struct EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504_StaticFields
{
	EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* ___defaultComparer;
};
struct EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21_StaticFields
{
	EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* ___defaultComparer;
};
struct EqualityComparer_1_tA3150AA88F929C2D35BB399F701A0B0A643089CB_StaticFields
{
	EqualityComparer_1_tA3150AA88F929C2D35BB399F701A0B0A643089CB* ___defaultComparer;
};
struct EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5_StaticFields
{
	EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* ___defaultComparer;
};
struct EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2_StaticFields
{
	EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* ___defaultComparer;
};
struct EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* ___defaultComparer;
};
struct EqualityComparer_1_t9072871D75372840EEF20C93E4B8909E005D3EF1_StaticFields
{
	EqualityComparer_1_t9072871D75372840EEF20C93E4B8909E005D3EF1* ___defaultComparer;
};
struct EqualityComparer_1_tD05D0CB5F6F4A3900C88F5AFFCCB051B9A889F76_StaticFields
{
	EqualityComparer_1_tD05D0CB5F6F4A3900C88F5AFFCCB051B9A889F76* ___defaultComparer;
};
struct EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499_StaticFields
{
	EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* ___defaultComparer;
};
struct EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24_StaticFields
{
	EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* ___defaultComparer;
};
struct EqualityComparer_1_tCB3E520353C0C084FFBFF3D631E929CE2B6A70C6_StaticFields
{
	EqualityComparer_1_tCB3E520353C0C084FFBFF3D631E929CE2B6A70C6* ___defaultComparer;
};
struct EqualityComparer_1_t1E747CFBD596204547D9B6B98B222ECC51154FE9_StaticFields
{
	EqualityComparer_1_t1E747CFBD596204547D9B6B98B222ECC51154FE9* ___defaultComparer;
};
struct EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields
{
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* ___defaultComparer;
};
struct EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17_StaticFields
{
	EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* ___defaultComparer;
};
struct EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E_StaticFields
{
	EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* ___defaultComparer;
};
struct EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED_StaticFields
{
	EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* ___defaultComparer;
};
struct EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6_StaticFields
{
	EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* ___defaultComparer;
};
struct EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09_StaticFields
{
	EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* ___defaultComparer;
};
struct EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49_StaticFields
{
	EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1_StaticFields
{
	EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* ___defaultComparer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct HashCode64_1_tAACED5C219BCE704BB23DEE5411688A66F4FA312_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t258221577FA59C0B1D9B188C325409BB62050DAB_StaticFields
{
	int64_t ___Value;
};
struct HashCode64_1_t25B99E9F7F998CC07CCA13124E03920779BFF803_StaticFields
{
	int64_t ___Value;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_StaticFields
{
	GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___s_ZeroGlyphRect;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	String_t* ___s_nullMessage;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 m_Items[1];

	inline NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B m_Items[1];

	inline NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_tFD4B8F2EABBFD0ADDDEFEDBE708F15693DFBFD23  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 m_Items[1];

	inline NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 m_Items[1];

	inline NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 value)
	{
		m_Items[index] = value;
	}
};
struct ValueTuple_2U5BU5D_t421388B3AA488C3C898278B339E982A32C074263  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D m_Items[1];

	inline ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D value)
	{
		m_Items[index] = value;
	}
};
struct ValueTuple_2U5BU5D_t08F87240E4D056F50F8CE13935C5D5DF5B8BD025  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 m_Items[1];

	inline ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2), (void*)NULL);
	}
	inline ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2), (void*)NULL);
	}
};
struct ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962  : public RuntimeArray
{
	ALIGN_FIELD (8) ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A m_Items[1];

	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2), (void*)NULL);
		#endif
	}
	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2), (void*)NULL);
		#endif
	}
};
struct BackgroundU5BU5D_t29762095DD694E79A85A59135735FF02E54C4B46  : public RuntimeArray
{
	ALIGN_FIELD (8) Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 m_Items[1];

	inline Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_VectorImage), (void*)NULL);
		#endif
	}
	inline Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Texture), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Sprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_RenderTexture), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_VectorImage), (void*)NULL);
		#endif
	}
};
struct BackgroundPositionU5BU5D_t3A9A1E8B7AC3D805C5B076C9A84B5156D7201E9C  : public RuntimeArray
{
	ALIGN_FIELD (8) BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 m_Items[1];

	inline BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 value)
	{
		m_Items[index] = value;
	}
};
struct BackgroundRepeatU5BU5D_t6B8E9E75430914546B34BCF9BA2980B9856C0E8A  : public RuntimeArray
{
	ALIGN_FIELD (8) BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F m_Items[1];

	inline BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F value)
	{
		m_Items[index] = value;
	}
};
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5  : public RuntimeArray
{
	ALIGN_FIELD (8) Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 m_Items[1];

	inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 value)
	{
		m_Items[index] = value;
	}
};
struct BoundsIntU5BU5D_tCF4BFFCF7975BE9754B8932F19F3A0D0F752F2BD  : public RuntimeArray
{
	ALIGN_FIELD (8) BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 m_Items[1];

	inline BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 value)
	{
		m_Items[index] = value;
	}
};
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
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
struct ColorBlockU5BU5D_t15403DAEAB234FE5927F08FC9968B78E2B1D14B6  : public RuntimeArray
{
	ALIGN_FIELD (8) ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 m_Items[1];

	inline ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 value)
	{
		m_Items[index] = value;
	}
};
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
struct EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49  : public RuntimeArray
{
	ALIGN_FIELD (8) EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 m_Items[1];

	inline EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 value)
	{
		m_Items[index] = value;
	}
};
struct FontDefinitionU5BU5D_t31BDC3E2D72918B36F815F95F7CBA1F057E3DA39  : public RuntimeArray
{
	ALIGN_FIELD (8) FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C m_Items[1];

	inline FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_FontAsset), (void*)NULL);
		#endif
	}
	inline FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Font), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_FontAsset), (void*)NULL);
		#endif
	}
};
struct GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7  : public RuntimeArray
{
	ALIGN_FIELD (8) GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E m_Items[1];

	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E value)
	{
		m_Items[index] = value;
	}
};
struct GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70  : public RuntimeArray
{
	ALIGN_FIELD (8) GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D m_Items[1];

	inline GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D value)
	{
		m_Items[index] = value;
	}
};
struct Hash128U5BU5D_tB104E7247B842648E447B7FCF4748077DC1F8C98  : public RuntimeArray
{
	ALIGN_FIELD (8) Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 m_Items[1];

	inline Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 value)
	{
		m_Items[index] = value;
	}
};
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
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832  : public RuntimeArray
{
	ALIGN_FIELD (8) intptr_t m_Items[1];

	inline intptr_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline intptr_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, intptr_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline intptr_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline intptr_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, intptr_t value)
	{
		m_Items[index] = value;
	}
};
struct ManipulatorActivationFilterU5BU5D_tE2A0BDE194B3B4600164AE8238C8CE2B20DBD4D7  : public RuntimeArray
{
	ALIGN_FIELD (8) ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 m_Items[1];

	inline ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 value)
	{
		m_Items[index] = value;
	}
};
struct Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D  : public RuntimeArray
{
	ALIGN_FIELD (8) Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 m_Items[1];

	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 value)
	{
		m_Items[index] = value;
	}
};
struct NavigationU5BU5D_t483F9B11FAE385AD99CDEB565C84D993648C5670  : public RuntimeArray
{
	ALIGN_FIELD (8) Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C m_Items[1];

	inline Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SelectOnUp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SelectOnDown), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SelectOnLeft), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SelectOnRight), (void*)NULL);
		#endif
	}
	inline Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SelectOnUp), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SelectOnDown), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SelectOnLeft), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SelectOnRight), (void*)NULL);
		#endif
	}
};
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
struct RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993  : public RuntimeArray
{
	ALIGN_FIELD (8) Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D m_Items[1];

	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D value)
	{
		m_Items[index] = value;
	}
};
struct RectIntU5BU5D_t0497041D1621D80C656705FB9F0AB63AD4D8698F  : public RuntimeArray
{
	ALIGN_FIELD (8) RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 m_Items[1];

	inline RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 value)
	{
		m_Items[index] = value;
	}
};
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
struct SpriteStateU5BU5D_tA29A384A9388A48E02C8A6CC1EADBB8B75BFCAC3  : public RuntimeArray
{
	ALIGN_FIELD (8) SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD m_Items[1];

	inline SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_HighlightedSprite), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_PressedSprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SelectedSprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DisabledSprite), (void*)NULL);
		#endif
	}
	inline SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_HighlightedSprite), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_PressedSprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_SelectedSprite), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DisabledSprite), (void*)NULL);
		#endif
	}
};
struct StylePropertyNameU5BU5D_t531626CF806E3F3D348D1F38A9109767014C35F8  : public RuntimeArray
{
	ALIGN_FIELD (8) StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF m_Items[1];

	inline StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnameU3Ek__BackingField), (void*)NULL);
	}
	inline StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnameU3Ek__BackingField), (void*)NULL);
	}
};
struct TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE  : public RuntimeArray
{
	ALIGN_FIELD (8) TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E m_Items[1];

	inline TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E value)
	{
		m_Items[index] = value;
	}
};
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
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
struct Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A m_Items[1];

	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A value)
	{
		m_Items[index] = value;
	}
};
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
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct CachedCodeEntryKeyU5BU5D_tC40BCA06B0B1553C015B809472A7A59A50E6C7E9  : public RuntimeArray
{
	ALIGN_FIELD (8) CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 m_Items[1];

	inline CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____cultureKey), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____pattern), (void*)NULL);
		#endif
	}
	inline CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____cultureKey), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____pattern), (void*)NULL);
		#endif
	}
};
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 m_Items[1];

	inline Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 value)
	{
		m_Items[index] = value;
	}
};
struct SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t0A95045068CA69D35855DB49026245B2D7F2E059 m_Items[1];

	inline Slot_t0A95045068CA69D35855DB49026245B2D7F2E059 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t0A95045068CA69D35855DB49026245B2D7F2E059* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t0A95045068CA69D35855DB49026245B2D7F2E059 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_t0A95045068CA69D35855DB49026245B2D7F2E059 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t0A95045068CA69D35855DB49026245B2D7F2E059* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t0A95045068CA69D35855DB49026245B2D7F2E059 value)
	{
		m_Items[index] = value;
	}
};
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F  : public RuntimeArray
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
struct SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 m_Items[1];

	inline Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6  : public RuntimeArray
{
	ALIGN_FIELD (8) Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 m_Items[1];

	inline Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 value)
	{
		m_Items[index] = value;
	}
};
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_Equals_m5396AEFA0FE3DAB5DC00439FA2530B1343937295_gshared (NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149* __this, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArray_1_GetHashCode_m66B94FA89E280074FAFEAF66314F77C83FCEE48A_gshared (NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m9912CC523B5CFDC67FB2A9A1AC3AF43A9E9F2803_gshared (EqualityComparer_1_t01F8CF2CF777F0896EA3EAA7877D78F1307DD1E1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeSlice_1_Equals_m5932E1D028FD20FDFDAB5073EEDA743DDF929660_gshared (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* __this, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSlice_1_GetHashCode_m17AA31E90564027DB6A606F8D9883AC52823E216_gshared (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m49B0A5AB4AD927F663F6C95358E269F34A30809B_gshared (EqualityComparer_1_tF3CCB69D5AB8C3CE9F417F5984908B3B13441607* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeSlice_1_Equals_m540407E942C74C9BDC7BF2513F9CCD0A4BF84EB9_gshared (NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041* __this, NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSlice_1_GetHashCode_mC0EE5A29EDBC0FD732C99B30BD5938785661FD1C_gshared (NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m4D54E40824478E01026065CAA271A71CA2F9A2D9_gshared (EqualityComparer_1_tAA2794BBC10EE66A403F408762CF2B100245FD88* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeSlice_1_Equals_mE54EE5073C38A869606B9711FBAA8E0C2E459E1C_gshared (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882* __this, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSlice_1_GetHashCode_mA406683D634974CA4AA8DA9952B32CD0EFE8E334_gshared (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mC824C4880ECD9D0EDE30042CFB4C7BD41E55D5A2_gshared (EqualityComparer_1_tAA11E11782CC156B732B4C3DBBB3FBC4B0930668* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mEAB75D7A1B4280805E1966B1997CF0916FA2DCBF_gshared (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361_gshared (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m378CC088B6E18F5957F608D39DC58C796BE5197E_gshared (EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mE5BAD0849ACA1C0DDED78077C56A9C9F4BBEEC42_gshared (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238_gshared (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m2EC2F05A3DBC774429AFBECFB327F8133207A7AD_gshared (EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m79297B38DDF8E231ED580F41EB03456BF55379A8_gshared (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m2CF60594910A162D1151924B21BA9FEA07507207_gshared (EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m9A9F56AEE99484DC6C1B70D94BA66C8D3FFE10A8_gshared (EqualityComparer_1_t0180B7B2FAD2462489F5F7770DBFB010661FA29F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mB0114B275A1CF74ADC8D3C8E1D51594896FF88F6_gshared (EqualityComparer_1_t91A3BE456B2FE215EA82B38DFD08F04AD27E1FB6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m0363C54EBA926A2B3008D56572784DDD8E64FE66_gshared (EqualityComparer_1_t3F2F95FBB654B2DA47BF557FD72A35DFEBC22AFB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mA509C516CCA203AC94ADDEFDBFE1A1AFC12056D0_gshared (EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mC9E77E8DC33F857EF3454359C837DA31AB091EC6_gshared (EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m76E9FA9ED2AD2CF2CA82FE8F66D429C1E963BE88_gshared (EqualityComparer_1_t678ED0F0E8B023739EF5D6018ABD61BBE060424A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_gshared (EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mFFA83824FACD56202544750D1E8A5DA9C319DD34_gshared (EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m972E58F7BB90FC9BAE4A381236365A83C62D19F7_gshared (EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_gshared (EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m610A5452BFD9A41DF68DC26131C15F4112885692_gshared (EqualityComparer_1_tE7CE9ECEA1E1C9468240F1E6198B5851D7C42041* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m66239D8F3BE887E3BB54DB3B3F3E0CF280B5A76D_gshared (EqualityComparer_1_t2B9B08D0DC828BC7CB837C0507B1D1EF73DD7BF8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mF033C53EF0A4B688055266B4EB9E02162C7731EF_gshared (EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m35C801B2BA1E4382533FFD789EB43058E30F6A9C_gshared (EqualityComparer_1_tE7CEE6714F7CC48529517E0559D972979E9CA0B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m24DCE9C2D74587DB1B7D8428318EAC7F4ACBD7C0_gshared (EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mD15C6A8CEF2B696097F3EBEC1956D327C7AD48D1_gshared (EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mE9869CA21825F6C802DB0FC812915C52AF5EA207_gshared (EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mB5A439B916F5965AE1F560CD4C41D600D93B6FC8_gshared (EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m65B0B6F78B5BB7DEB386B8CD9328588709172AA2_gshared (EqualityComparer_1_tA3150AA88F929C2D35BB399F701A0B0A643089CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mE2BAE9BE13DB6F13E336FA85FAA2D3E51E4EF1A4_gshared (EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m25537F3E5B46A0620AC2993989A6DE521E75DF1E_gshared (EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mA0D5DF71A4976E2FD4C77C93A93720BEBCBE0DCE_gshared (EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m7EF6764E5B37E67B2AAEBEC312135D71F1979CA6_gshared (EqualityComparer_1_t9072871D75372840EEF20C93E4B8909E005D3EF1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m36E822B77731189EE2149599AC309A6E03281D9E_gshared (EqualityComparer_1_tD05D0CB5F6F4A3900C88F5AFFCCB051B9A889F76* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_gshared (EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m1FAED7BC7B1BE9452F417C1B2750BCE0AA737454_gshared (EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mABAAA02EF7FDF48091E920AA3ACBC79DDA408A30_gshared (EqualityComparer_1_tCB3E520353C0C084FFBFF3D631E929CE2B6A70C6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m96D551C7BEB663EF14ADE1DCA930DD58A8A10D87_gshared (EqualityComparer_1_t1E747CFBD596204547D9B6B98B222ECC51154FE9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m1AFD91EC93C4FC81A1AEDACB58E1BBB972C49997_gshared (EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mCC37F86E0AA6DCD3C845D4FF3B90AB94E2DD71B8_gshared (EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m24B2FBB121C71610428ECF48C223AC632699DFD3_gshared (EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m3BA5AD03F5C7ADB03D2A079658A7BE37A71B971A_gshared (EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m437FE206AB9739DFD095918C886C07A01E5AE624_gshared (EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mA8BD8C91036404C77FB26DBD5CF8D9158BEA27F7_gshared (EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_m672764616716C926350B9E69C41621978F32E496_gshared (EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mCB1456765E196FA81FA3BFC84A2909A462230CA4_gshared (EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD01A3150BFA527119EBAB7922A64F4BB94CC293D_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mC8EB7E5E12FA6F38890EB2435FF06B81B3BBBB0A_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA74E823F988E9515688F756D0DD9223AE0248596_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m2D30A02470631B29664BF3981E958399DCD05E59_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___0_set1, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m76A9036184E9E454D1A7553EF88A707525F27A8A_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m8DCCD8BD41DA4D933EB974678D99E0FFEAC5A21C_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m324C75B2D781E7BF38384F10C30AEC7668EB7CDA_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mFDA37D3F003EF52B5E93673AE3ED38E04D5DB500_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m6D3D24A6F1E5CB0ABD85841349382CE64EF2F690_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_index, int32_t ___1_hashCode, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m43D6B3CAAED91ED49E0194803AC6BA67ADF6439B_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m8C50FFBACD63C1AA40F63C5C9CAA1811F5988F97_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m3C27BBD4EFB01EA7A8B2DE3F0E12CD9E449950DF_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mFE3FD5858B2622B0DB3A98E965A87270E087E292_gshared (Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376* __this, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mAFBFB4E9CC9508A1AE5E2FD2A63AEE373D77C409_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_gshared_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF4C8539185EBCAAE0803DF227E006B701007DD65_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m6B2495F23F97908BC4EE3B987C1F16093E922C62_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m7EE99125BBB78B18669A0B9760A5F6E4A01454FF_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m2DD3885BF267920FC8AD5DCD6EA6A6250ABFE3AD_gshared_inline (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mC1D71B789CC8CAEFE43A9271E144E1108BCCF6C3_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3EF0F0574098F7E0EE9B64C5D8A397BBCDF7E542_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m493828D9E92664CB7484FD941FB0CA3713C0D04A_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m193FBE20CD13A08869C7A8081B81E6BE86550935_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* ___0_set1, HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mA5B09DE5581655D8D3A00EA36B780B3C27D2CD8A_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m31F84C6044D9CCD8FD7242686910F5D078494B3E_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m0E9BB6D536A0AF0F32F2ADDAC67F738FC13C1ABE_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mE7FC0AB29C9B9433BDFE905769ECBBB4DF9D8A13_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m8762D603210DF3B5F4BEE5F8318D0AA90B123255_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_index, int32_t ___1_hashCode, int32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mB6B9DAADF761C41B93B287BF0080CEF148C71CE9_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m548D80B81ADCBF294D226593B44DA54BED6A59E0_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mEF3741D18A511024F43C94CA8801FF8B817564A1_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2DD667605D1D62A7C346404BBDDD45C06317D415_gshared (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m5E9C3E42BDE27183590F0B9240E7217263C768F5_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_gshared_inline (Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mDFCEB14892F55A02364004175560540A1AE648FE_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m20B7BE46BF50D1068919AD2B1447B5C189A5D30A_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mD309C97A8D409A74963F5260149DBD92E73C0EBD_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mB96B4907FFD0439B94352B52CFF0D360A73D40EB_gshared_inline (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m30E9F91069377DDEFABD6C81559E24AD320D3A84_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD320BA1FC2F52FBBD8EFB2C97BAC4E70B56DDAFD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m7F948A6D7605FADC9C80513D3CB1F21627E974E1_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_set1, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m13E227A3D0F6C66092069932EBFFD303B7A2B5F7_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m5340441ADFFCE4FC7BEA14DD637B35C25CC47EBF_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mCE1D0DC2EACB98D74562CA79EB0DB6B6A806510C_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mA48EDAF136B0C1BFBC90E61A5A5F8771F2F60806_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m20C9F0D67E5BFE2515651D37D880697363F6562F_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_index, int32_t ___1_hashCode, RuntimeObject* ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mC04293BBDC3046C251D90104C942B4576676EF79_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m194DF48C3A8D04814AEF65F316DF262AA89DB68F_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m2C3002B96C50658CE5522C74A6B1F5599D922D61_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mC9D698BB17611B2B5A3A805337647838FCAA26DE_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m5102D82155B190BF666DD92500756CC1CCBA2172_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m38D352E6EBE6E50B1D407129115FC9DE6721C55C_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mC01C0797260CF7FEBBC99C8245B0A31B1C2E5E56_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mD54AFBFBD525862DC2F8F47071DA5B37CFDEA948_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m84F19ECFD45EC3F29B8ED82184E4892EFC93A50C_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m06A7ECC1351897A5086F1261E9DF0EE1FF0A757D_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_mA6D6AFBE54A3A5C041B6D016B614A506C2C0CCE6_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_set1, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___1_set2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m757886C93AFA00039C804FBA0DC24407EE787C5F_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mCC6A0E6F531708E02411F3A62A0EE263B3155CD2_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m60E387432DD7DB110EBA0525FFA77E9B6DC7AFF4_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mD5191D2B847EF17B4112378DE8CD72D1BF3AA7DC_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_index, int32_t ___1_hashCode, uint32_t ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m421003E7CDC7B4B86D94CBB25C57DC78D4A42B3B_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9F89B5A77506688ABC2B08774AB13ADDF965703C_gshared (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m0A1E30AFCFECF4120A2582BCEF92DB3898C02BF0_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_gshared_inline (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* __this, uint32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m387D02609162D1AA4998698546E668AF4A960F67_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m3F7FB3120006196BDCDF9B70A78B647AF318EC85_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m9DBE122D41CA3941B3FE97DB9935895B99A84124_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mC799EE656F81D83581F8A413304661B6F103BC6E_gshared_inline (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5_gshared (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B_gshared (const RuntimeMethod* method) ;

inline bool NativeArray_1_Equals_m5396AEFA0FE3DAB5DC00439FA2530B1343937295 (NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149* __this, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149*, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149, const RuntimeMethod*))NativeArray_1_Equals_m5396AEFA0FE3DAB5DC00439FA2530B1343937295_gshared)(__this, ___0_other, method);
}
inline int32_t NativeArray_1_GetHashCode_m66B94FA89E280074FAFEAF66314F77C83FCEE48A (NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149*, const RuntimeMethod*))NativeArray_1_GetHashCode_m66B94FA89E280074FAFEAF66314F77C83FCEE48A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m9912CC523B5CFDC67FB2A9A1AC3AF43A9E9F2803 (EqualityComparer_1_t01F8CF2CF777F0896EA3EAA7877D78F1307DD1E1* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t01F8CF2CF777F0896EA3EAA7877D78F1307DD1E1*, const RuntimeMethod*))EqualityComparer_1__ctor_m9912CC523B5CFDC67FB2A9A1AC3AF43A9E9F2803_gshared)(__this, method);
}
inline bool NativeSlice_1_Equals_m5932E1D028FD20FDFDAB5073EEDA743DDF929660 (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* __this, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B*, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B, const RuntimeMethod*))NativeSlice_1_Equals_m5932E1D028FD20FDFDAB5073EEDA743DDF929660_gshared)(__this, ___0_other, method);
}
inline int32_t NativeSlice_1_GetHashCode_m17AA31E90564027DB6A606F8D9883AC52823E216 (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B*, const RuntimeMethod*))NativeSlice_1_GetHashCode_m17AA31E90564027DB6A606F8D9883AC52823E216_gshared)(__this, method);
}
inline void EqualityComparer_1__ctor_m49B0A5AB4AD927F663F6C95358E269F34A30809B (EqualityComparer_1_tF3CCB69D5AB8C3CE9F417F5984908B3B13441607* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tF3CCB69D5AB8C3CE9F417F5984908B3B13441607*, const RuntimeMethod*))EqualityComparer_1__ctor_m49B0A5AB4AD927F663F6C95358E269F34A30809B_gshared)(__this, method);
}
inline bool NativeSlice_1_Equals_m540407E942C74C9BDC7BF2513F9CCD0A4BF84EB9 (NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041* __this, NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041*, NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041, const RuntimeMethod*))NativeSlice_1_Equals_m540407E942C74C9BDC7BF2513F9CCD0A4BF84EB9_gshared)(__this, ___0_other, method);
}
inline int32_t NativeSlice_1_GetHashCode_mC0EE5A29EDBC0FD732C99B30BD5938785661FD1C (NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041*, const RuntimeMethod*))NativeSlice_1_GetHashCode_mC0EE5A29EDBC0FD732C99B30BD5938785661FD1C_gshared)(__this, method);
}
inline void EqualityComparer_1__ctor_m4D54E40824478E01026065CAA271A71CA2F9A2D9 (EqualityComparer_1_tAA2794BBC10EE66A403F408762CF2B100245FD88* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tAA2794BBC10EE66A403F408762CF2B100245FD88*, const RuntimeMethod*))EqualityComparer_1__ctor_m4D54E40824478E01026065CAA271A71CA2F9A2D9_gshared)(__this, method);
}
inline bool NativeSlice_1_Equals_mE54EE5073C38A869606B9711FBAA8E0C2E459E1C (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882* __this, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882*, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882, const RuntimeMethod*))NativeSlice_1_Equals_mE54EE5073C38A869606B9711FBAA8E0C2E459E1C_gshared)(__this, ___0_other, method);
}
inline int32_t NativeSlice_1_GetHashCode_mA406683D634974CA4AA8DA9952B32CD0EFE8E334 (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882*, const RuntimeMethod*))NativeSlice_1_GetHashCode_mA406683D634974CA4AA8DA9952B32CD0EFE8E334_gshared)(__this, method);
}
inline void EqualityComparer_1__ctor_mC824C4880ECD9D0EDE30042CFB4C7BD41E55D5A2 (EqualityComparer_1_tAA11E11782CC156B732B4C3DBBB3FBC4B0930668* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tAA11E11782CC156B732B4C3DBBB3FBC4B0930668*, const RuntimeMethod*))EqualityComparer_1__ctor_mC824C4880ECD9D0EDE30042CFB4C7BD41E55D5A2_gshared)(__this, method);
}
inline bool ValueTuple_2_Equals_mEAB75D7A1B4280805E1966B1997CF0916FA2DCBF (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D, const RuntimeMethod*))ValueTuple_2_Equals_mEAB75D7A1B4280805E1966B1997CF0916FA2DCBF_gshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361 (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361_gshared)(__this, method);
}
inline void EqualityComparer_1__ctor_m378CC088B6E18F5957F608D39DC58C796BE5197E (EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51*, const RuntimeMethod*))EqualityComparer_1__ctor_m378CC088B6E18F5957F608D39DC58C796BE5197E_gshared)(__this, method);
}
inline bool ValueTuple_2_Equals_mE5BAD0849ACA1C0DDED78077C56A9C9F4BBEEC42 (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9, const RuntimeMethod*))ValueTuple_2_Equals_mE5BAD0849ACA1C0DDED78077C56A9C9F4BBEEC42_gshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238 (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238_gshared)(__this, method);
}
inline void EqualityComparer_1__ctor_m2EC2F05A3DBC774429AFBECFB327F8133207A7AD (EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3*, const RuntimeMethod*))EqualityComparer_1__ctor_m2EC2F05A3DBC774429AFBECFB327F8133207A7AD_gshared)(__this, method);
}
inline bool ValueTuple_2_Equals_m79297B38DDF8E231ED580F41EB03456BF55379A8 (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))ValueTuple_2_Equals_m79297B38DDF8E231ED580F41EB03456BF55379A8_gshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7 (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7_gshared)(__this, method);
}
inline void EqualityComparer_1__ctor_m2CF60594910A162D1151924B21BA9FEA07507207 (EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE*, const RuntimeMethod*))EqualityComparer_1__ctor_m2CF60594910A162D1151924B21BA9FEA07507207_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Background_Equals_mB3B88EEE208ECDBC33607FD83D76572800464D79 (Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* __this, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Background_GetHashCode_m04082ADB61D83A618047D6DB649B3C34F18C47B1 (Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m9A9F56AEE99484DC6C1B70D94BA66C8D3FFE10A8 (EqualityComparer_1_t0180B7B2FAD2462489F5F7770DBFB010661FA29F* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t0180B7B2FAD2462489F5F7770DBFB010661FA29F*, const RuntimeMethod*))EqualityComparer_1__ctor_m9A9F56AEE99484DC6C1B70D94BA66C8D3FFE10A8_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BackgroundPosition_Equals_m64183D5FA4271EF7A45C3CA77B6876D854EDE759 (BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* __this, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BackgroundPosition_GetHashCode_m70CB607FAF2C174B6583EDA883B347398A660E32 (BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_mB0114B275A1CF74ADC8D3C8E1D51594896FF88F6 (EqualityComparer_1_t91A3BE456B2FE215EA82B38DFD08F04AD27E1FB6* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t91A3BE456B2FE215EA82B38DFD08F04AD27E1FB6*, const RuntimeMethod*))EqualityComparer_1__ctor_mB0114B275A1CF74ADC8D3C8E1D51594896FF88F6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BackgroundRepeat_Equals_m1D533A1C4E03887BF51B4A9AAD74E74C7EA4909F (BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* __this, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BackgroundRepeat_GetHashCode_mA50AE9C1F470680415C565D45C9DAF08B64D8A4C (BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m0363C54EBA926A2B3008D56572784DDD8E64FE66 (EqualityComparer_1_t3F2F95FBB654B2DA47BF557FD72A35DFEBC22AFB* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t3F2F95FBB654B2DA47BF557FD72A35DFEBC22AFB*, const RuntimeMethod*))EqualityComparer_1__ctor_m0363C54EBA926A2B3008D56572784DDD8E64FE66_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9 (bool* __this, bool ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_mA509C516CCA203AC94ADDEFDBFE1A1AFC12056D0 (EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4*, const RuntimeMethod*))EqualityComparer_1__ctor_mA509C516CCA203AC94ADDEFDBFE1A1AFC12056D0_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Bounds_Equals_m615135524315743D29633C33B6C8B16B754266DB_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Bounds_GetHashCode_m59C79B529D33866FE45FEFC0C69FBD3B4AC7E172_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_mC9E77E8DC33F857EF3454359C837DA31AB091EC6 (EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4*, const RuntimeMethod*))EqualityComparer_1__ctor_mC9E77E8DC33F857EF3454359C837DA31AB091EC6_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BoundsInt_Equals_m143E0673DA604FDEBBF40115D50BE078E343F1E6_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundsInt_GetHashCode_m9740EA5B8C8E9B4DD47D9D6E619D61F5B99115CC (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m76E9FA9ED2AD2CF2CA82FE8F66D429C1E963BE88 (EqualityComparer_1_t678ED0F0E8B023739EF5D6018ABD61BBE060424A* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t678ED0F0E8B023739EF5D6018ABD61BBE060424A*, const RuntimeMethod*))EqualityComparer_1__ctor_m76E9FA9ED2AD2CF2CA82FE8F66D429C1E963BE88_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85 (uint8_t* __this, uint8_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD (EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8*, const RuntimeMethod*))EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B (Il2CppChar* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Char_GetHashCode_mB5406F7D8B6D7545CD1CE6FCA0567BD7217E6B93 (Il2CppChar* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_mFFA83824FACD56202544750D1E8A5DA9C319DD34 (EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B*, const RuntimeMethod*))EqualityComparer_1__ctor_mFFA83824FACD56202544750D1E8A5DA9C319DD34_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorBlock_Equals_m52DCE246EA23904A3EF0FCD3ADAB81BC20DC1BE5 (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ColorBlock_GetHashCode_m3CCB4E1E5EE93B905650E24BD4753096082270D7 (ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m972E58F7BB90FC9BAE4A381236365A83C62D19F7 (EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F*, const RuntimeMethod*))EqualityComparer_1__ctor_m972E58F7BB90FC9BAE4A381236365A83C62D19F7_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138 (double* __this, double ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6 (EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB*, const RuntimeMethod*))EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EasingFunction_Equals_mDFC6754EBC9E3305C8F1BDC9082740D2F2AA382D (EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* __this, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EasingFunction_GetHashCode_mCB49C4CDB304927EC093227444991688630A1622 (EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m610A5452BFD9A41DF68DC26131C15F4112885692 (EqualityComparer_1_tE7CE9ECEA1E1C9468240F1E6198B5851D7C42041* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tE7CE9ECEA1E1C9468240F1E6198B5851D7C42041*, const RuntimeMethod*))EqualityComparer_1__ctor_m610A5452BFD9A41DF68DC26131C15F4112885692_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FontDefinition_Equals_m1425312D070F3FF049917D5FE1744BF65EEC1A05 (FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* __this, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FontDefinition_GetHashCode_mAE455799B250E80471E797D4497B1DB9B715D8F6 (FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m66239D8F3BE887E3BB54DB3B3F3E0CF280B5A76D (EqualityComparer_1_t2B9B08D0DC828BC7CB837C0507B1D1EF73DD7BF8* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t2B9B08D0DC828BC7CB837C0507B1D1EF73DD7BF8*, const RuntimeMethod*))EqualityComparer_1__ctor_m66239D8F3BE887E3BB54DB3B3F3E0CF280B5A76D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphPairAdjustmentRecord_Equals_m2DADFD15A4DFF37570EA51D9EAEBA30DF0007689 (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphPairAdjustmentRecord_GetHashCode_mC253F24FFD3BCE5EEB44CA6CDE1BE19336E0A5F5 (GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_mF033C53EF0A4B688055266B4EB9E02162C7731EF (EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846*, const RuntimeMethod*))EqualityComparer_1__ctor_mF033C53EF0A4B688055266B4EB9E02162C7731EF_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GlyphRect_Equals_m29BCDCCDB99C88355A61EDDA65F6A51762BF9C87 (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GlyphRect_GetHashCode_mC012C2627F2A0C7EB7B47522085764441D47014F (GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m35C801B2BA1E4382533FFD789EB43058E30F6A9C (EqualityComparer_1_tE7CEE6714F7CC48529517E0559D972979E9CA0B7* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tE7CEE6714F7CC48529517E0559D972979E9CA0B7*, const RuntimeMethod*))EqualityComparer_1__ctor_m35C801B2BA1E4382533FFD789EB43058E30F6A9C_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hash128_Equals_mF6BED87E0744D6DFFF8026614BDA8F4E6712063D (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hash128_GetHashCode_m22816EE33CD973D11CD1917DEF7A0E0EC229E1D8 (Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m24DCE9C2D74587DB1B7D8428318EAC7F4ACBD7C0 (EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839*, const RuntimeMethod*))EqualityComparer_1__ctor_m24DCE9C2D74587DB1B7D8428318EAC7F4ACBD7C0_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722 (int32_t* __this, int32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_mD15C6A8CEF2B696097F3EBEC1956D327C7AD48D1 (EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*, const RuntimeMethod*))EqualityComparer_1__ctor_mD15C6A8CEF2B696097F3EBEC1956D327C7AD48D1_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_Equals_mBAEB8FFBE12F6A5876473B4B40E1BD316658873E (int64_t* __this, int64_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_mE9869CA21825F6C802DB0FC812915C52AF5EA207 (EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504*, const RuntimeMethod*))EqualityComparer_1__ctor_mE9869CA21825F6C802DB0FC812915C52AF5EA207_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_System_IEquatableU3CSystem_IntPtrU3E_Equals_m64E94B3EFD22DCF51639896412A4872940166F0C (intptr_t* __this, intptr_t ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D (intptr_t* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_mB5A439B916F5965AE1F560CD4C41D600D93B6FC8 (EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21*, const RuntimeMethod*))EqualityComparer_1__ctor_mB5A439B916F5965AE1F560CD4C41D600D93B6FC8_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ManipulatorActivationFilter_Equals_m6D9CDF042CE2808C90A212A43262ADD9BB9CAC41 (ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81* __this, ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ManipulatorActivationFilter_GetHashCode_m46BCD43274FC9C9FB2515965F159FFEC3B7D2D57 (ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m65B0B6F78B5BB7DEB386B8CD9328588709172AA2 (EqualityComparer_1_tA3150AA88F929C2D35BB399F701A0B0A643089CB* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tA3150AA88F929C2D35BB399F701A0B0A643089CB*, const RuntimeMethod*))EqualityComparer_1__ctor_m65B0B6F78B5BB7DEB386B8CD9328588709172AA2_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Matrix4x4_GetHashCode_m313B1AF4FEA792BB7E4D1D239EBE3257F825914D_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_mE2BAE9BE13DB6F13E336FA85FAA2D3E51E4EF1A4 (EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5*, const RuntimeMethod*))EqualityComparer_1__ctor_mE2BAE9BE13DB6F13E336FA85FAA2D3E51E4EF1A4_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Navigation_Equals_mE25B4E3D0AB85C1469B99971E6AB16E2039E6B4D (Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C* __this, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m25537F3E5B46A0620AC2993989A6DE521E75DF1E (EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2*, const RuntimeMethod*))EqualityComparer_1__ctor_m25537F3E5B46A0620AC2993989A6DE521E75DF1E_gshared)(__this, method);
}
inline void EqualityComparer_1__ctor_mA0D5DF71A4976E2FD4C77C93A93720BEBCBE0DCE (EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*, const RuntimeMethod*))EqualityComparer_1__ctor_mA0D5DF71A4976E2FD4C77C93A93720BEBCBE0DCE_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Rect_GetHashCode_m8E55539476EA6B7A6E0CEC5F980227CD15B778F1 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m7EF6764E5B37E67B2AAEBEC312135D71F1979CA6 (EqualityComparer_1_t9072871D75372840EEF20C93E4B8909E005D3EF1* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t9072871D75372840EEF20C93E4B8909E005D3EF1*, const RuntimeMethod*))EqualityComparer_1__ctor_m7EF6764E5B37E67B2AAEBEC312135D71F1979CA6_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RectInt_Equals_mE9EA164664CA30C1C099EFB658D691F55A793B96_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___0_other, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m36E822B77731189EE2149599AC309A6E03281D9E (EqualityComparer_1_tD05D0CB5F6F4A3900C88F5AFFCCB051B9A889F76* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tD05D0CB5F6F4A3900C88F5AFFCCB051B9A889F76*, const RuntimeMethod*))EqualityComparer_1__ctor_m36E822B77731189EE2149599AC309A6E03281D9E_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3 (EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499*, const RuntimeMethod*))EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteState_Equals_mAF58D9F36662F5A8196071690175AAFCC4506653 (SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD* __this, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___0_other, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m1FAED7BC7B1BE9452F417C1B2750BCE0AA737454 (EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24*, const RuntimeMethod*))EqualityComparer_1__ctor_m1FAED7BC7B1BE9452F417C1B2750BCE0AA737454_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StylePropertyName_Equals_m653E5597E354595FC53CE1413231F49B51C25B60 (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StylePropertyName_GetHashCode_mC15FB76DFFBE6E2F4C248DE53B4C8BCEE1ECE754 (StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_mABAAA02EF7FDF48091E920AA3ACBC79DDA408A30 (EqualityComparer_1_tCB3E520353C0C084FFBFF3D631E929CE2B6A70C6* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tCB3E520353C0C084FFBFF3D631E929CE2B6A70C6*, const RuntimeMethod*))EqualityComparer_1__ctor_mABAAA02EF7FDF48091E920AA3ACBC79DDA408A30_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TimeValue_Equals_m877001BAB4403C8BA20CDF4EABDB7702303B2E0A (TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeValue_GetHashCode_m112ADB5ED018B9DE35EF34CA6610DB4F20AAEAD9 (TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m96D551C7BEB663EF14ADE1DCA930DD58A8A10D87 (EqualityComparer_1_t1E747CFBD596204547D9B6B98B222ECC51154FE9* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t1E747CFBD596204547D9B6B98B222ECC51154FE9*, const RuntimeMethod*))EqualityComparer_1__ctor_m96D551C7BEB663EF14ADE1DCA930DD58A8A10D87_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt32_Equals_m6BE590F34B71E27978E9146437F73A6448BA01A3 (uint32_t* __this, uint32_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m1AFD91EC93C4FC81A1AEDACB58E1BBB972C49997 (EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862*, const RuntimeMethod*))EqualityComparer_1__ctor_m1AFD91EC93C4FC81A1AEDACB58E1BBB972C49997_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81 (uint64_t* __this, uint64_t ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_mCC37F86E0AA6DCD3C845D4FF3B90AB94E2DD71B8 (EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17*, const RuntimeMethod*))EqualityComparer_1__ctor_mCC37F86E0AA6DCD3C845D4FF3B90AB94E2DD71B8_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_mED8670C0E122B7ED0DAB4C3381ADFF04B75E0B03_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m24B2FBB121C71610428ECF48C223AC632699DFD3 (EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E*, const RuntimeMethod*))EqualityComparer_1__ctor_m24B2FBB121C71610428ECF48C223AC632699DFD3_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_mA3B6135FA770AF0C171319B50D9B913657230EB7_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m3BA5AD03F5C7ADB03D2A079658A7BE37A71B971A (EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED*, const RuntimeMethod*))EqualityComparer_1__ctor_m3BA5AD03F5C7ADB03D2A079658A7BE37A71B971A_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m437FE206AB9739DFD095918C886C07A01E5AE624 (EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6*, const RuntimeMethod*))EqualityComparer_1__ctor_m437FE206AB9739DFD095918C886C07A01E5AE624_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_GetHashCode_mFAA200CFE26F006BEE6F9A65AFD0AC8C49D730EA_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_mA8BD8C91036404C77FB26DBD5CF8D9158BEA27F7 (EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09*, const RuntimeMethod*))EqualityComparer_1__ctor_mA8BD8C91036404C77FB26DBD5CF8D9158BEA27F7_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m672764616716C926350B9E69C41621978F32E496 (EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49*, const RuntimeMethod*))EqualityComparer_1__ctor_m672764616716C926350B9E69C41621978F32E496_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CachedCodeEntryKey_Equals_m55F9ED97CB9AF357034A75C2FDB8498FC55D3AF0 (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE (CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_mCB1456765E196FA81FA3BFC84A2909A462230CA4 (EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1*, const RuntimeMethod*))EqualityComparer_1__ctor_mCB1456765E196FA81FA3BFC84A2909A462230CA4_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_HashStringWithFNV1A64_m3E38919BF51D34D084240B8B6EFB6A753411A335 (String_t* ___0_text, const RuntimeMethod* method) ;
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline)(method);
}
inline void HashSet_1__ctor_mD01A3150BFA527119EBAB7922A64F4BB94CC293D (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mD01A3150BFA527119EBAB7922A64F4BB94CC293D_gshared)(__this, ___0_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void HashSet_1__ctor_mC8EB7E5E12FA6F38890EB2435FF06B81B3BBBB0A (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mC8EB7E5E12FA6F38890EB2435FF06B81B3BBBB0A_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_mA74E823F988E9515688F756D0DD9223AE0248596 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mA74E823F988E9515688F756D0DD9223AE0248596_gshared)(__this, ___0_collection, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline bool HashSet_1_AreEqualityComparersEqual_m2D30A02470631B29664BF3981E958399DCD05E59 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___0_set1, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m2D30A02470631B29664BF3981E958399DCD05E59_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_m76A9036184E9E454D1A7553EF88A707525F27A8A (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1_CopyFrom_m76A9036184E9E454D1A7553EF88A707525F27A8A_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_m8DCCD8BD41DA4D933EB974678D99E0FFEAC5A21C (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_m8DCCD8BD41DA4D933EB974678D99E0FFEAC5A21C_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_m324C75B2D781E7BF38384F10C30AEC7668EB7CDA (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_m324C75B2D781E7BF38384F10C30AEC7668EB7CDA_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_mFDA37D3F003EF52B5E93673AE3ED38E04D5DB500 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1_TrimExcess_mFDA37D3F003EF52B5E93673AE3ED38E04D5DB500_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9 (int32_t ___0_oldSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
inline void HashSet_1_AddValue_m6D3D24A6F1E5CB0ABD85841349382CE64EF2F690 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_index, int32_t ___1_hashCode, int32_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, int32_t, int32_t, const RuntimeMethod*))HashSet_1_AddValue_m6D3D24A6F1E5CB0ABD85841349382CE64EF2F690_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline bool HashSet_1_AddIfNotPresent_m43D6B3CAAED91ED49E0194803AC6BA67ADF6439B (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_AddIfNotPresent_m43D6B3CAAED91ED49E0194803AC6BA67ADF6439B_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t HashSet_1_InternalGetHashCode_m8C50FFBACD63C1AA40F63C5C9CAA1811F5988F97 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m8C50FFBACD63C1AA40F63C5C9CAA1811F5988F97_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void HashSet_1_CopyTo_m3C27BBD4EFB01EA7A8B2DE3F0E12CD9E449950DF (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_m3C27BBD4EFB01EA7A8B2DE3F0E12CD9E449950DF_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_mFE3FD5858B2622B0DB3A98E965A87270E087E292 (Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376* __this, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376*, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))Enumerator__ctor_mFE3FD5858B2622B0DB3A98E965A87270E087E292_gshared)(__this, ___0_set, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, Type_t* ___2_type, const RuntimeMethod* method) ;
inline void HashSet_1_CopyTo_mAFBFB4E9CC9508A1AE5E2FD2A63AEE373D77C409 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, const RuntimeMethod*))HashSet_1_CopyTo_mAFBFB4E9CC9508A1AE5E2FD2A63AEE373D77C409_gshared)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3*, int32_t, const RuntimeMethod*))Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_gshared_inline)(__this, ___0_obj, method);
}
inline bool HashSet_1_Remove_mF4C8539185EBCAAE0803DF227E006B701007DD65 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_Remove_mF4C8539185EBCAAE0803DF227E006B701007DD65_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472 (int32_t ___0_min, const RuntimeMethod* method) ;
inline void HashSet_1_SetCapacity_m6B2495F23F97908BC4EE3B987C1F16093E922C62 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_m6B2495F23F97908BC4EE3B987C1F16093E922C62_gshared)(__this, ___0_newSize, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline void HashSet_1_IncreaseCapacity_m7EE99125BBB78B18669A0B9760A5F6E4A01454FF (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_m7EE99125BBB78B18669A0B9760A5F6E4A01454FF_gshared)(__this, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_m2DD3885BF267920FC8AD5DCD6EA6A6250ABFE3AD_inline (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1_get_Comparer_m2DD3885BF267920FC8AD5DCD6EA6A6250ABFE3AD_gshared_inline)(__this, method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline)(method);
}
inline void HashSet_1__ctor_mC1D71B789CC8CAEFE43A9271E144E1108BCCF6C3 (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mC1D71B789CC8CAEFE43A9271E144E1108BCCF6C3_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_m3EF0F0574098F7E0EE9B64C5D8A397BBCDF7E542 (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m3EF0F0574098F7E0EE9B64C5D8A397BBCDF7E542_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_m493828D9E92664CB7484FD941FB0CA3713C0D04A (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m493828D9E92664CB7484FD941FB0CA3713C0D04A_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool HashSet_1_AreEqualityComparersEqual_m193FBE20CD13A08869C7A8081B81E6BE86550935 (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* ___0_set1, HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m193FBE20CD13A08869C7A8081B81E6BE86550935_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_mA5B09DE5581655D8D3A00EA36B780B3C27D2CD8A (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, const RuntimeMethod*))HashSet_1_CopyFrom_mA5B09DE5581655D8D3A00EA36B780B3C27D2CD8A_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_m31F84C6044D9CCD8FD7242686910F5D078494B3E (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_m31F84C6044D9CCD8FD7242686910F5D078494B3E_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_m0E9BB6D536A0AF0F32F2ADDAC67F738FC13C1ABE (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_m0E9BB6D536A0AF0F32F2ADDAC67F738FC13C1ABE_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_mE7FC0AB29C9B9433BDFE905769ECBBB4DF9D8A13 (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, const RuntimeMethod*))HashSet_1_TrimExcess_mE7FC0AB29C9B9433BDFE905769ECBBB4DF9D8A13_gshared)(__this, method);
}
inline void HashSet_1_AddValue_m8762D603210DF3B5F4BEE5F8318D0AA90B123255 (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_index, int32_t ___1_hashCode, int32_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, int32_t, int32_t, int32_t, const RuntimeMethod*))HashSet_1_AddValue_m8762D603210DF3B5F4BEE5F8318D0AA90B123255_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
inline bool HashSet_1_AddIfNotPresent_mB6B9DAADF761C41B93B287BF0080CEF148C71CE9 (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, int32_t, const RuntimeMethod*))HashSet_1_AddIfNotPresent_mB6B9DAADF761C41B93B287BF0080CEF148C71CE9_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_m548D80B81ADCBF294D226593B44DA54BED6A59E0 (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, int32_t, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m548D80B81ADCBF294D226593B44DA54BED6A59E0_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_mEF3741D18A511024F43C94CA8801FF8B817564A1 (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_mEF3741D18A511024F43C94CA8801FF8B817564A1_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_m2DD667605D1D62A7C346404BBDDD45C06317D415 (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD* __this, HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD*, HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, const RuntimeMethod*))Enumerator__ctor_m2DD667605D1D62A7C346404BBDDD45C06317D415_gshared)(__this, ___0_set, method);
}
inline void HashSet_1_CopyTo_m5E9C3E42BDE27183590F0B9240E7217263C768F5 (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, const RuntimeMethod*))HashSet_1_CopyTo_m5E9C3E42BDE27183590F0B9240E7217263C768F5_gshared)(__this, ___0_array, method);
}
inline bool Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_inline (Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A*, int32_t, const RuntimeMethod*))Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_gshared_inline)(__this, ___0_obj, method);
}
inline bool HashSet_1_Remove_mDFCEB14892F55A02364004175560540A1AE648FE (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, int32_t, const RuntimeMethod*))HashSet_1_Remove_mDFCEB14892F55A02364004175560540A1AE648FE_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SetCapacity_m20B7BE46BF50D1068919AD2B1447B5C189A5D30A (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_m20B7BE46BF50D1068919AD2B1447B5C189A5D30A_gshared)(__this, ___0_newSize, method);
}
inline void HashSet_1_IncreaseCapacity_mD309C97A8D409A74963F5260149DBD92E73C0EBD (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_mD309C97A8D409A74963F5260149DBD92E73C0EBD_gshared)(__this, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_mB96B4907FFD0439B94352B52CFF0D360A73D40EB_inline (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*, const RuntimeMethod*))HashSet_1_get_Comparer_mB96B4907FFD0439B94352B52CFF0D360A73D40EB_gshared_inline)(__this, method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline)(method);
}
inline void HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_m30E9F91069377DDEFABD6C81559E24AD320D3A84 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m30E9F91069377DDEFABD6C81559E24AD320D3A84_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_mD320BA1FC2F52FBBD8EFB2C97BAC4E70B56DDAFD (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_mD320BA1FC2F52FBBD8EFB2C97BAC4E70B56DDAFD_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool HashSet_1_AreEqualityComparersEqual_m7F948A6D7605FADC9C80513D3CB1F21627E974E1 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_set1, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_m7F948A6D7605FADC9C80513D3CB1F21627E974E1_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_m13E227A3D0F6C66092069932EBFFD303B7A2B5F7 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))HashSet_1_CopyFrom_m13E227A3D0F6C66092069932EBFFD303B7A2B5F7_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_m5340441ADFFCE4FC7BEA14DD637B35C25CC47EBF (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_m5340441ADFFCE4FC7BEA14DD637B35C25CC47EBF_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_mCE1D0DC2EACB98D74562CA79EB0DB6B6A806510C (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_mCE1D0DC2EACB98D74562CA79EB0DB6B6A806510C_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_mA48EDAF136B0C1BFBC90E61A5A5F8771F2F60806 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))HashSet_1_TrimExcess_mA48EDAF136B0C1BFBC90E61A5A5F8771F2F60806_gshared)(__this, method);
}
inline void HashSet_1_AddValue_m20C9F0D67E5BFE2515651D37D880697363F6562F (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_index, int32_t ___1_hashCode, RuntimeObject* ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1_AddValue_m20C9F0D67E5BFE2515651D37D880697363F6562F_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
inline bool HashSet_1_AddIfNotPresent_mC04293BBDC3046C251D90104C942B4576676EF79 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1_AddIfNotPresent_mC04293BBDC3046C251D90104C942B4576676EF79_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_m194DF48C3A8D04814AEF65F316DF262AA89DB68F (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1_InternalGetHashCode_m194DF48C3A8D04814AEF65F316DF262AA89DB68F_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_m2C3002B96C50658CE5522C74A6B1F5599D922D61 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_m2C3002B96C50658CE5522C74A6B1F5599D922D61_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_mC9D698BB17611B2B5A3A805337647838FCAA26DE (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8*, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))Enumerator__ctor_mC9D698BB17611B2B5A3A805337647838FCAA26DE_gshared)(__this, ___0_set, method);
}
inline void HashSet_1_CopyTo_m5102D82155B190BF666DD92500756CC1CCBA2172 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))HashSet_1_CopyTo_m5102D82155B190BF666DD92500756CC1CCBA2172_gshared)(__this, ___0_array, method);
}
inline bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12*, RuntimeObject*, const RuntimeMethod*))Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline)(__this, ___0_obj, method);
}
inline bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, RuntimeObject*, const RuntimeMethod*))HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SetCapacity_m38D352E6EBE6E50B1D407129115FC9DE6721C55C (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_m38D352E6EBE6E50B1D407129115FC9DE6721C55C_gshared)(__this, ___0_newSize, method);
}
inline void HashSet_1_IncreaseCapacity_mC01C0797260CF7FEBBC99C8245B0A31B1C2E5E56 (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_mC01C0797260CF7FEBBC99C8245B0A31B1C2E5E56_gshared)(__this, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_mD54AFBFBD525862DC2F8F47071DA5B37CFDEA948_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*, const RuntimeMethod*))HashSet_1_get_Comparer_mD54AFBFBD525862DC2F8F47071DA5B37CFDEA948_gshared_inline)(__this, method);
}
inline EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline)(method);
}
inline void HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE_gshared)(__this, ___0_comparer, method);
}
inline void HashSet_1__ctor_m84F19ECFD45EC3F29B8ED82184E4892EFC93A50C (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, int32_t, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m84F19ECFD45EC3F29B8ED82184E4892EFC93A50C_gshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void HashSet_1__ctor_m06A7ECC1351897A5086F1261E9DF0EE1FF0A757D (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))HashSet_1__ctor_m06A7ECC1351897A5086F1261E9DF0EE1FF0A757D_gshared)(__this, ___0_collection, ___1_comparer, method);
}
inline bool HashSet_1_AreEqualityComparersEqual_mA6D6AFBE54A3A5C041B6D016B614A506C2C0CCE6 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_set1, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___1_set2, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))HashSet_1_AreEqualityComparersEqual_mA6D6AFBE54A3A5C041B6D016B614A506C2C0CCE6_gshared)(___0_set1, ___1_set2, method);
}
inline void HashSet_1_CopyFrom_m757886C93AFA00039C804FBA0DC24407EE787C5F (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_source, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))HashSet_1_CopyFrom_m757886C93AFA00039C804FBA0DC24407EE787C5F_gshared)(__this, ___0_source, method);
}
inline int32_t HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, int32_t, const RuntimeMethod*))HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC_gshared)(__this, ___0_capacity, method);
}
inline void HashSet_1_UnionWith_mCC6A0E6F531708E02411F3A62A0EE263B3155CD2 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, RuntimeObject*, const RuntimeMethod*))HashSet_1_UnionWith_mCC6A0E6F531708E02411F3A62A0EE263B3155CD2_gshared)(__this, ___0_other, method);
}
inline void HashSet_1_TrimExcess_m60E387432DD7DB110EBA0525FFA77E9B6DC7AFF4 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))HashSet_1_TrimExcess_m60E387432DD7DB110EBA0525FFA77E9B6DC7AFF4_gshared)(__this, method);
}
inline void HashSet_1_AddValue_mD5191D2B847EF17B4112378DE8CD72D1BF3AA7DC (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_index, int32_t ___1_hashCode, uint32_t ___2_value, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, int32_t, int32_t, uint32_t, const RuntimeMethod*))HashSet_1_AddValue_mD5191D2B847EF17B4112378DE8CD72D1BF3AA7DC_gshared)(__this, ___0_index, ___1_hashCode, ___2_value, method);
}
inline bool HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, uint32_t, const RuntimeMethod*))HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C_gshared)(__this, ___0_value, method);
}
inline int32_t HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, uint32_t, const RuntimeMethod*))HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_CopyTo_m421003E7CDC7B4B86D94CBB25C57DC78D4A42B3B (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, int32_t, int32_t, const RuntimeMethod*))HashSet_1_CopyTo_m421003E7CDC7B4B86D94CBB25C57DC78D4A42B3B_gshared)(__this, ___0_array, ___1_arrayIndex, ___2_count, method);
}
inline void Enumerator__ctor_m9F89B5A77506688ABC2B08774AB13ADDF965703C (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1*, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))Enumerator__ctor_m9F89B5A77506688ABC2B08774AB13ADDF965703C_gshared)(__this, ___0_set, method);
}
inline void HashSet_1_CopyTo_m0A1E30AFCFECF4120A2582BCEF92DB3898C02BF0 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*, const RuntimeMethod*))HashSet_1_CopyTo_m0A1E30AFCFECF4120A2582BCEF92DB3898C02BF0_gshared)(__this, ___0_array, method);
}
inline bool Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_inline (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* __this, uint32_t ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF*, uint32_t, const RuntimeMethod*))Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_gshared_inline)(__this, ___0_obj, method);
}
inline bool HashSet_1_Remove_m387D02609162D1AA4998698546E668AF4A960F67 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, uint32_t, const RuntimeMethod*))HashSet_1_Remove_m387D02609162D1AA4998698546E668AF4A960F67_gshared)(__this, ___0_item, method);
}
inline void HashSet_1_SetCapacity_m3F7FB3120006196BDCDF9B70A78B647AF318EC85 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_newSize, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, int32_t, const RuntimeMethod*))HashSet_1_SetCapacity_m3F7FB3120006196BDCDF9B70A78B647AF318EC85_gshared)(__this, ___0_newSize, method);
}
inline void HashSet_1_IncreaseCapacity_m9DBE122D41CA3941B3FE97DB9935895B99A84124 (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))HashSet_1_IncreaseCapacity_m9DBE122D41CA3941B3FE97DB9935895B99A84124_gshared)(__this, method);
}
inline RuntimeObject* HashSet_1_get_Comparer_mC799EE656F81D83581F8A413304661B6F103BC6E_inline (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*, const RuntimeMethod*))HashSet_1_get_Comparer_mC799EE656F81D83581F8A413304661B6F103BC6E_gshared_inline)(__this, method);
}
inline void Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5 (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5_gshared)(__this, ___0_set, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_lhs, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
inline EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E_gshared)(method);
}
inline EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73_gshared)(method);
}
inline EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634_gshared)(method);
}
inline EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m69D1F4DA16180C66709DD32C4943E20579DA4CDD_gshared (GenericEqualityComparer_1_t8A7003F05BF4D92E454EEE1D8BE16D53BF74DD12* __this, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___0_x, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 L_2 = ___1_y;
		bool L_3;
		L_3 = NativeArray_1_Equals_m5396AEFA0FE3DAB5DC00439FA2530B1343937295((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m58D1DA1E54E06F6958540CAB9A49986B133EB966_gshared (GenericEqualityComparer_1_t8A7003F05BF4D92E454EEE1D8BE16D53BF74DD12* __this, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = NativeArray_1_GetHashCode_m66B94FA89E280074FAFEAF66314F77C83FCEE48A((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_mE86EB2B3F5BA64EC576C1CCD226E2B1F8BD01ECA_gshared (GenericEqualityComparer_1_t8A7003F05BF4D92E454EEE1D8BE16D53BF74DD12* __this, NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* ___0_array, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* L_8 = ___0_array;
		int32_t L_9 = V_2;
		NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 L_10 = ___1_value;
		bool L_11;
		L_11 = NativeArray_1_Equals_m5396AEFA0FE3DAB5DC00439FA2530B1343937295(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_mC5727A18F0DB62578F5714B2303E3C62C1B6C0B8_gshared (GenericEqualityComparer_1_t8A7003F05BF4D92E454EEE1D8BE16D53BF74DD12* __this, NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* ___0_array, NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		NativeArray_1U5BU5D_t07FE0FFB798A14A16B56C709EBB100AA9D986CA4* L_8 = ___0_array;
		int32_t L_9 = V_2;
		NativeArray_1_t61CE5FDEC6BB75218352153E78207800402C1149 L_10 = ___1_value;
		bool L_11;
		L_11 = NativeArray_1_Equals_m5396AEFA0FE3DAB5DC00439FA2530B1343937295(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m6F8D60627D55550B5F9CE4E1B67FA47EA675C921_gshared (GenericEqualityComparer_1_t8A7003F05BF4D92E454EEE1D8BE16D53BF74DD12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t8A7003F05BF4D92E454EEE1D8BE16D53BF74DD12*)((GenericEqualityComparer_1_t8A7003F05BF4D92E454EEE1D8BE16D53BF74DD12*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mBC7EFF39FB43D322ECA4FE704916B36AB8B0C562_gshared (GenericEqualityComparer_1_t8A7003F05BF4D92E454EEE1D8BE16D53BF74DD12* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m933B563AB99246FCA10614D58A1D1B3507007C2C_gshared (GenericEqualityComparer_1_t8A7003F05BF4D92E454EEE1D8BE16D53BF74DD12* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m9912CC523B5CFDC67FB2A9A1AC3AF43A9E9F2803((EqualityComparer_1_t01F8CF2CF777F0896EA3EAA7877D78F1307DD1E1*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m1CBF1F600A25FE5FE2FB93E39B9E18332628B1F4_gshared (GenericEqualityComparer_1_t114338E01D17957CBD55B19B31D9AA3A31396E62* __this, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___0_x, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_2 = ___1_y;
		bool L_3;
		L_3 = NativeSlice_1_Equals_m5932E1D028FD20FDFDAB5073EEDA743DDF929660((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mA7C018D6A82794930AF96B38E903AADA493B7233_gshared (GenericEqualityComparer_1_t114338E01D17957CBD55B19B31D9AA3A31396E62* __this, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = NativeSlice_1_GetHashCode_m17AA31E90564027DB6A606F8D9883AC52823E216((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m6B504EC460153B362CA6531574CF610687970116_gshared (GenericEqualityComparer_1_t114338E01D17957CBD55B19B31D9AA3A31396E62* __this, NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* ___0_array, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* L_8 = ___0_array;
		int32_t L_9 = V_2;
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_10 = ___1_value;
		bool L_11;
		L_11 = NativeSlice_1_Equals_m5932E1D028FD20FDFDAB5073EEDA743DDF929660(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m7DA5B90D2D9EB5322CF782FFE730EA8B8B7579A7_gshared (GenericEqualityComparer_1_t114338E01D17957CBD55B19B31D9AA3A31396E62* __this, NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* ___0_array, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* L_8 = ___0_array;
		int32_t L_9 = V_2;
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_10 = ___1_value;
		bool L_11;
		L_11 = NativeSlice_1_Equals_m5932E1D028FD20FDFDAB5073EEDA743DDF929660(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m2D0D0D2BA1D77E9C0D8DA1BA93D0F418F0FFCA0C_gshared (GenericEqualityComparer_1_t114338E01D17957CBD55B19B31D9AA3A31396E62* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t114338E01D17957CBD55B19B31D9AA3A31396E62*)((GenericEqualityComparer_1_t114338E01D17957CBD55B19B31D9AA3A31396E62*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m8339645A3F0615E0A5400ABC56C739EBFC13F0F7_gshared (GenericEqualityComparer_1_t114338E01D17957CBD55B19B31D9AA3A31396E62* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m4633BCEE5B3A3C2B3C661127111B7316497023A4_gshared (GenericEqualityComparer_1_t114338E01D17957CBD55B19B31D9AA3A31396E62* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m49B0A5AB4AD927F663F6C95358E269F34A30809B((EqualityComparer_1_tF3CCB69D5AB8C3CE9F417F5984908B3B13441607*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m6097DFC93F1C9563EF45674036E9F2E5C92B4B4A_gshared (GenericEqualityComparer_1_t5E2A59887FAFDB8A70B4FA717767C7CAA3EF3A5E* __this, NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 ___0_x, NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 L_2 = ___1_y;
		bool L_3;
		L_3 = NativeSlice_1_Equals_m540407E942C74C9BDC7BF2513F9CCD0A4BF84EB9((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mDA89C0DCB625B7BFBD56A725C7E91626BEF84DA0_gshared (GenericEqualityComparer_1_t5E2A59887FAFDB8A70B4FA717767C7CAA3EF3A5E* __this, NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = NativeSlice_1_GetHashCode_mC0EE5A29EDBC0FD732C99B30BD5938785661FD1C((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_mD83EA893BEACC6F9AB4387588BDCE33F42670DEF_gshared (GenericEqualityComparer_1_t5E2A59887FAFDB8A70B4FA717767C7CAA3EF3A5E* __this, NativeSlice_1U5BU5D_tFD4B8F2EABBFD0ADDDEFEDBE708F15693DFBFD23* ___0_array, NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		NativeSlice_1U5BU5D_tFD4B8F2EABBFD0ADDDEFEDBE708F15693DFBFD23* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		NativeSlice_1U5BU5D_tFD4B8F2EABBFD0ADDDEFEDBE708F15693DFBFD23* L_8 = ___0_array;
		int32_t L_9 = V_2;
		NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 L_10 = ___1_value;
		bool L_11;
		L_11 = NativeSlice_1_Equals_m540407E942C74C9BDC7BF2513F9CCD0A4BF84EB9(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_mA81104C01BC70DFB46B8E073A51F22CBCE917097_gshared (GenericEqualityComparer_1_t5E2A59887FAFDB8A70B4FA717767C7CAA3EF3A5E* __this, NativeSlice_1U5BU5D_tFD4B8F2EABBFD0ADDDEFEDBE708F15693DFBFD23* ___0_array, NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		NativeSlice_1U5BU5D_tFD4B8F2EABBFD0ADDDEFEDBE708F15693DFBFD23* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		NativeSlice_1U5BU5D_tFD4B8F2EABBFD0ADDDEFEDBE708F15693DFBFD23* L_8 = ___0_array;
		int32_t L_9 = V_2;
		NativeSlice_1_tB2E3D620D7D74D9E80A85A577CF2C417F8A1E041 L_10 = ___1_value;
		bool L_11;
		L_11 = NativeSlice_1_Equals_m540407E942C74C9BDC7BF2513F9CCD0A4BF84EB9(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m65DE67763CAD3DBE8D94DFE928B3695BF206ABEC_gshared (GenericEqualityComparer_1_t5E2A59887FAFDB8A70B4FA717767C7CAA3EF3A5E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t5E2A59887FAFDB8A70B4FA717767C7CAA3EF3A5E*)((GenericEqualityComparer_1_t5E2A59887FAFDB8A70B4FA717767C7CAA3EF3A5E*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m69342E64695D8D0F1779E07B532EAB1FF2B2CCC9_gshared (GenericEqualityComparer_1_t5E2A59887FAFDB8A70B4FA717767C7CAA3EF3A5E* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mF8754F9A856652583FC237D32A26D074AD75F9A3_gshared (GenericEqualityComparer_1_t5E2A59887FAFDB8A70B4FA717767C7CAA3EF3A5E* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m4D54E40824478E01026065CAA271A71CA2F9A2D9((EqualityComparer_1_tAA2794BBC10EE66A403F408762CF2B100245FD88*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mEF17CD9DC3A709A7E0CE5E0A9A5C521A61C19B50_gshared (GenericEqualityComparer_1_tFE7C8B583AA8308523884F13DBFD774923C0101B* __this, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___0_x, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 L_2 = ___1_y;
		bool L_3;
		L_3 = NativeSlice_1_Equals_mE54EE5073C38A869606B9711FBAA8E0C2E459E1C((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mAC5501334C9092E6E036EAED900FEC19D149111F_gshared (GenericEqualityComparer_1_tFE7C8B583AA8308523884F13DBFD774923C0101B* __this, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = NativeSlice_1_GetHashCode_mA406683D634974CA4AA8DA9952B32CD0EFE8E334((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_mC4A8F2C2B46DD1E69BA7E8595429B218B872657B_gshared (GenericEqualityComparer_1_tFE7C8B583AA8308523884F13DBFD774923C0101B* __this, NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* ___0_array, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* L_8 = ___0_array;
		int32_t L_9 = V_2;
		NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 L_10 = ___1_value;
		bool L_11;
		L_11 = NativeSlice_1_Equals_mE54EE5073C38A869606B9711FBAA8E0C2E459E1C(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m0B993D23D1F4593C132684225AEA15A24B9D84E7_gshared (GenericEqualityComparer_1_tFE7C8B583AA8308523884F13DBFD774923C0101B* __this, NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* ___0_array, NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		NativeSlice_1U5BU5D_tA62C4A6F288135B6706B31C147D9F8A7B589A990* L_8 = ___0_array;
		int32_t L_9 = V_2;
		NativeSlice_1_t1B1546AEB20D09E65A620651F8A4C68DD5998882 L_10 = ___1_value;
		bool L_11;
		L_11 = NativeSlice_1_Equals_mE54EE5073C38A869606B9711FBAA8E0C2E459E1C(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m01014CC80221BBCF4055F888B5F118E0EFAE020F_gshared (GenericEqualityComparer_1_tFE7C8B583AA8308523884F13DBFD774923C0101B* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_tFE7C8B583AA8308523884F13DBFD774923C0101B*)((GenericEqualityComparer_1_tFE7C8B583AA8308523884F13DBFD774923C0101B*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mAB151E3B22B52E64B22A6E92274B258A9EE77C14_gshared (GenericEqualityComparer_1_tFE7C8B583AA8308523884F13DBFD774923C0101B* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mB475EAAA94AB0959BF38B9793D86F355099A2853_gshared (GenericEqualityComparer_1_tFE7C8B583AA8308523884F13DBFD774923C0101B* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_mC824C4880ECD9D0EDE30042CFB4C7BD41E55D5A2((EqualityComparer_1_tAA11E11782CC156B732B4C3DBBB3FBC4B0930668*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m1FDB6F6EFD3B5D7E877E9FE811CBD8590E533E54_gshared (GenericEqualityComparer_1_tC861CCE5440E9689C1A12A5232CCC1CD302F0AED* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_x, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_2 = ___1_y;
		bool L_3;
		L_3 = ValueTuple_2_Equals_mEAB75D7A1B4280805E1966B1997CF0916FA2DCBF((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m88298891C26DB8E0A55E869B3179CC514C8E7FDE_gshared (GenericEqualityComparer_1_tC861CCE5440E9689C1A12A5232CCC1CD302F0AED* __this, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = ValueTuple_2_GetHashCode_m9D4E10761077AC6288F37B5F730ED598FF1A4361((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m95316E22E9B74F4E24A0C7F764AA8D2589780C00_gshared (GenericEqualityComparer_1_tC861CCE5440E9689C1A12A5232CCC1CD302F0AED* __this, ValueTuple_2U5BU5D_t421388B3AA488C3C898278B339E982A32C074263* ___0_array, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		ValueTuple_2U5BU5D_t421388B3AA488C3C898278B339E982A32C074263* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		ValueTuple_2U5BU5D_t421388B3AA488C3C898278B339E982A32C074263* L_8 = ___0_array;
		int32_t L_9 = V_2;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_10 = ___1_value;
		bool L_11;
		L_11 = ValueTuple_2_Equals_mEAB75D7A1B4280805E1966B1997CF0916FA2DCBF(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_mBFC4BA0B7C8D245D2DE0B235410FCF1BF15BE441_gshared (GenericEqualityComparer_1_tC861CCE5440E9689C1A12A5232CCC1CD302F0AED* __this, ValueTuple_2U5BU5D_t421388B3AA488C3C898278B339E982A32C074263* ___0_array, ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		ValueTuple_2U5BU5D_t421388B3AA488C3C898278B339E982A32C074263* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		ValueTuple_2U5BU5D_t421388B3AA488C3C898278B339E982A32C074263* L_8 = ___0_array;
		int32_t L_9 = V_2;
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_10 = ___1_value;
		bool L_11;
		L_11 = ValueTuple_2_Equals_mEAB75D7A1B4280805E1966B1997CF0916FA2DCBF(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m8F0DE97443F37643B9D7083BD780B1A19F5DFEF2_gshared (GenericEqualityComparer_1_tC861CCE5440E9689C1A12A5232CCC1CD302F0AED* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_tC861CCE5440E9689C1A12A5232CCC1CD302F0AED*)((GenericEqualityComparer_1_tC861CCE5440E9689C1A12A5232CCC1CD302F0AED*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mFEA6F970A7E23BA747F0BA87BF4C2E935D7D8277_gshared (GenericEqualityComparer_1_tC861CCE5440E9689C1A12A5232CCC1CD302F0AED* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mCD9FE8812E0A04BC103BF955F03E7A063B73B3E3_gshared (GenericEqualityComparer_1_tC861CCE5440E9689C1A12A5232CCC1CD302F0AED* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m378CC088B6E18F5957F608D39DC58C796BE5197E((EqualityComparer_1_tF60D3424A85A7B1DACA02F0A6BBDDDAEDBA71A51*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mA0BA061F64A02F83809F5BE69F6FB95B25CD2CB3_gshared (GenericEqualityComparer_1_t6CA5D1B55524AA743693EE7FBBD33D28FE1D135A* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_x, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_2 = ___1_y;
		bool L_3;
		L_3 = ValueTuple_2_Equals_mE5BAD0849ACA1C0DDED78077C56A9C9F4BBEEC42((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m0BD453EC476FDFCD00DE0C03C27EC5388CEF0AF3_gshared (GenericEqualityComparer_1_t6CA5D1B55524AA743693EE7FBBD33D28FE1D135A* __this, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = ValueTuple_2_GetHashCode_m460EFE4CF658838C31DB4D6985FE82C682503238((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_mF20ED7C098D2299D6CFA82AC2837C383DFFE3399_gshared (GenericEqualityComparer_1_t6CA5D1B55524AA743693EE7FBBD33D28FE1D135A* __this, ValueTuple_2U5BU5D_t08F87240E4D056F50F8CE13935C5D5DF5B8BD025* ___0_array, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		ValueTuple_2U5BU5D_t08F87240E4D056F50F8CE13935C5D5DF5B8BD025* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		ValueTuple_2U5BU5D_t08F87240E4D056F50F8CE13935C5D5DF5B8BD025* L_8 = ___0_array;
		int32_t L_9 = V_2;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_10 = ___1_value;
		bool L_11;
		L_11 = ValueTuple_2_Equals_mE5BAD0849ACA1C0DDED78077C56A9C9F4BBEEC42(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m1D1460EABDADC6D769723F822FEC6A08D7B5FD7A_gshared (GenericEqualityComparer_1_t6CA5D1B55524AA743693EE7FBBD33D28FE1D135A* __this, ValueTuple_2U5BU5D_t08F87240E4D056F50F8CE13935C5D5DF5B8BD025* ___0_array, ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		ValueTuple_2U5BU5D_t08F87240E4D056F50F8CE13935C5D5DF5B8BD025* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		ValueTuple_2U5BU5D_t08F87240E4D056F50F8CE13935C5D5DF5B8BD025* L_8 = ___0_array;
		int32_t L_9 = V_2;
		ValueTuple_2_tBC19AE73793D615D180F320AB46A541EF61AFBF9 L_10 = ___1_value;
		bool L_11;
		L_11 = ValueTuple_2_Equals_mE5BAD0849ACA1C0DDED78077C56A9C9F4BBEEC42(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m9B5C608BC3CF5C14C8D0ECF327B71ED97473BEFA_gshared (GenericEqualityComparer_1_t6CA5D1B55524AA743693EE7FBBD33D28FE1D135A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t6CA5D1B55524AA743693EE7FBBD33D28FE1D135A*)((GenericEqualityComparer_1_t6CA5D1B55524AA743693EE7FBBD33D28FE1D135A*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m0874C77CE3A2F28B53572A7E8314F7F996C13C9E_gshared (GenericEqualityComparer_1_t6CA5D1B55524AA743693EE7FBBD33D28FE1D135A* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m1D0C8B78F5544594E7F1989EF16C2AC3CD035FB9_gshared (GenericEqualityComparer_1_t6CA5D1B55524AA743693EE7FBBD33D28FE1D135A* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m2EC2F05A3DBC774429AFBECFB327F8133207A7AD((EqualityComparer_1_t564D7233BF474859A24D7C6F3246D172028D77F3*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mDBC537531921495E142A6608D60068DB1FB8703E_gshared (GenericEqualityComparer_1_t808C2FB882C6487A61D92FF1EF86AAD011303F04* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_x, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_2 = ___1_y;
		bool L_3;
		L_3 = ValueTuple_2_Equals_m79297B38DDF8E231ED580F41EB03456BF55379A8((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m11B975A3D8CECD2E330A2B9BE7BC30994E5F9E70_gshared (GenericEqualityComparer_1_t808C2FB882C6487A61D92FF1EF86AAD011303F04* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = ValueTuple_2_GetHashCode_m02C84696292D14B993EDCDED373702CF8E5DB5F7((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m3D2E61A6751086CD5A99138C0692F7F078E15312_gshared (GenericEqualityComparer_1_t808C2FB882C6487A61D92FF1EF86AAD011303F04* __this, ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___0_array, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_8 = ___0_array;
		int32_t L_9 = V_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_10 = ___1_value;
		bool L_11;
		L_11 = ValueTuple_2_Equals_m79297B38DDF8E231ED580F41EB03456BF55379A8(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_mA79F5F4C59C1EF6654C44390413380FFDE4AD243_gshared (GenericEqualityComparer_1_t808C2FB882C6487A61D92FF1EF86AAD011303F04* __this, ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* ___0_array, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		ValueTuple_2U5BU5D_tDEEAFCC1B39456246D3A0D4D92FF7592CA9EC962* L_8 = ___0_array;
		int32_t L_9 = V_2;
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_10 = ___1_value;
		bool L_11;
		L_11 = ValueTuple_2_Equals_m79297B38DDF8E231ED580F41EB03456BF55379A8(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m0EC1B2821107D2F73BB8613A1E3FFD8F1A521FCC_gshared (GenericEqualityComparer_1_t808C2FB882C6487A61D92FF1EF86AAD011303F04* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t808C2FB882C6487A61D92FF1EF86AAD011303F04*)((GenericEqualityComparer_1_t808C2FB882C6487A61D92FF1EF86AAD011303F04*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m06B8B448E528CFE3F0CE01C06DE3791B4634802D_gshared (GenericEqualityComparer_1_t808C2FB882C6487A61D92FF1EF86AAD011303F04* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m80C28F2EC78FC8740074F5BE3DC9A18467660232_gshared (GenericEqualityComparer_1_t808C2FB882C6487A61D92FF1EF86AAD011303F04* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m2CF60594910A162D1151924B21BA9FEA07507207((EqualityComparer_1_t39F37BD252745ACD048E411385EBDFBABD5BBFAE*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m67A97DD3E4D029593342B8AC036A3431CCBBD14D_gshared (GenericEqualityComparer_1_t69DC72AD6B13B527C372FD3EACE961412AE5A877* __this, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___0_x, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_2 = ___1_y;
		bool L_3;
		L_3 = Background_Equals_mB3B88EEE208ECDBC33607FD83D76572800464D79((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m8211397163330C567B4E05DD4D5348E881A93336_gshared (GenericEqualityComparer_1_t69DC72AD6B13B527C372FD3EACE961412AE5A877* __this, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = Background_GetHashCode_m04082ADB61D83A618047D6DB649B3C34F18C47B1((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m5DB458F262BDD576A185D4F1607E2778DB7FE9DA_gshared (GenericEqualityComparer_1_t69DC72AD6B13B527C372FD3EACE961412AE5A877* __this, BackgroundU5BU5D_t29762095DD694E79A85A59135735FF02E54C4B46* ___0_array, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		BackgroundU5BU5D_t29762095DD694E79A85A59135735FF02E54C4B46* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		BackgroundU5BU5D_t29762095DD694E79A85A59135735FF02E54C4B46* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_10 = ___1_value;
		bool L_11;
		L_11 = Background_Equals_mB3B88EEE208ECDBC33607FD83D76572800464D79(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m95A73A2C0805707DED878D87A1F962BE8BB0DD17_gshared (GenericEqualityComparer_1_t69DC72AD6B13B527C372FD3EACE961412AE5A877* __this, BackgroundU5BU5D_t29762095DD694E79A85A59135735FF02E54C4B46* ___0_array, Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		BackgroundU5BU5D_t29762095DD694E79A85A59135735FF02E54C4B46* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		BackgroundU5BU5D_t29762095DD694E79A85A59135735FF02E54C4B46* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Background_t3C720DED4FAF016332D29FB86C9BE8D5D0D8F0C8 L_10 = ___1_value;
		bool L_11;
		L_11 = Background_Equals_mB3B88EEE208ECDBC33607FD83D76572800464D79(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mDF3BDD88EF460133CA7DB6AAD1A8DE9FEF14662D_gshared (GenericEqualityComparer_1_t69DC72AD6B13B527C372FD3EACE961412AE5A877* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t69DC72AD6B13B527C372FD3EACE961412AE5A877*)((GenericEqualityComparer_1_t69DC72AD6B13B527C372FD3EACE961412AE5A877*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m96F13D875772FBCAE09ABD3419EBB71611D32095_gshared (GenericEqualityComparer_1_t69DC72AD6B13B527C372FD3EACE961412AE5A877* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mF09ED4305DFB861A05AC6960F40F59969B0EAACB_gshared (GenericEqualityComparer_1_t69DC72AD6B13B527C372FD3EACE961412AE5A877* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m9A9F56AEE99484DC6C1B70D94BA66C8D3FFE10A8((EqualityComparer_1_t0180B7B2FAD2462489F5F7770DBFB010661FA29F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m7E5F4B171D0EBC2C2263A4114D74F4AB8ED05931_gshared (GenericEqualityComparer_1_t22A29539EC552C16D727C52735DF989EBDA3FD1C* __this, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___0_x, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_2 = ___1_y;
		bool L_3;
		L_3 = BackgroundPosition_Equals_m64183D5FA4271EF7A45C3CA77B6876D854EDE759((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mFCF476E8DBDEF672C1D6766EC6FF63A513196A98_gshared (GenericEqualityComparer_1_t22A29539EC552C16D727C52735DF989EBDA3FD1C* __this, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = BackgroundPosition_GetHashCode_m70CB607FAF2C174B6583EDA883B347398A660E32((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m2E50BB95B320A80165FE7DA724FFDBDFE84AD996_gshared (GenericEqualityComparer_1_t22A29539EC552C16D727C52735DF989EBDA3FD1C* __this, BackgroundPositionU5BU5D_t3A9A1E8B7AC3D805C5B076C9A84B5156D7201E9C* ___0_array, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		BackgroundPositionU5BU5D_t3A9A1E8B7AC3D805C5B076C9A84B5156D7201E9C* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		BackgroundPositionU5BU5D_t3A9A1E8B7AC3D805C5B076C9A84B5156D7201E9C* L_8 = ___0_array;
		int32_t L_9 = V_2;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_10 = ___1_value;
		bool L_11;
		L_11 = BackgroundPosition_Equals_m64183D5FA4271EF7A45C3CA77B6876D854EDE759(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m3E249AC3ABECB87E7AFD55CEA2D7A0D6605A2756_gshared (GenericEqualityComparer_1_t22A29539EC552C16D727C52735DF989EBDA3FD1C* __this, BackgroundPositionU5BU5D_t3A9A1E8B7AC3D805C5B076C9A84B5156D7201E9C* ___0_array, BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		BackgroundPositionU5BU5D_t3A9A1E8B7AC3D805C5B076C9A84B5156D7201E9C* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		BackgroundPositionU5BU5D_t3A9A1E8B7AC3D805C5B076C9A84B5156D7201E9C* L_8 = ___0_array;
		int32_t L_9 = V_2;
		BackgroundPosition_tF0822B29FC27A67205A9893EBE03D03B799B8B56 L_10 = ___1_value;
		bool L_11;
		L_11 = BackgroundPosition_Equals_m64183D5FA4271EF7A45C3CA77B6876D854EDE759(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m7ECE5EDACA6A43178BA31E8F1A837D6E87790648_gshared (GenericEqualityComparer_1_t22A29539EC552C16D727C52735DF989EBDA3FD1C* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t22A29539EC552C16D727C52735DF989EBDA3FD1C*)((GenericEqualityComparer_1_t22A29539EC552C16D727C52735DF989EBDA3FD1C*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m7B4315EE93ED77A93CDDF6B286BB23DDC578544C_gshared (GenericEqualityComparer_1_t22A29539EC552C16D727C52735DF989EBDA3FD1C* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m03F6915A5572931782AC638237EC2E89285F90DE_gshared (GenericEqualityComparer_1_t22A29539EC552C16D727C52735DF989EBDA3FD1C* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_mB0114B275A1CF74ADC8D3C8E1D51594896FF88F6((EqualityComparer_1_t91A3BE456B2FE215EA82B38DFD08F04AD27E1FB6*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m85D3F3FB988D5FA6EBFED41AA4767A85D32E31F7_gshared (GenericEqualityComparer_1_t7E74CDF4F5686370C85528D54991AB58D20D89C8* __this, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___0_x, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_2 = ___1_y;
		bool L_3;
		L_3 = BackgroundRepeat_Equals_m1D533A1C4E03887BF51B4A9AAD74E74C7EA4909F((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m2752E085C1DF7E656F1FF7F2081D01E53C65EE71_gshared (GenericEqualityComparer_1_t7E74CDF4F5686370C85528D54991AB58D20D89C8* __this, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = BackgroundRepeat_GetHashCode_mA50AE9C1F470680415C565D45C9DAF08B64D8A4C((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m5FCE7D5971A126E806C20520826998BE7DF02A6A_gshared (GenericEqualityComparer_1_t7E74CDF4F5686370C85528D54991AB58D20D89C8* __this, BackgroundRepeatU5BU5D_t6B8E9E75430914546B34BCF9BA2980B9856C0E8A* ___0_array, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		BackgroundRepeatU5BU5D_t6B8E9E75430914546B34BCF9BA2980B9856C0E8A* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		BackgroundRepeatU5BU5D_t6B8E9E75430914546B34BCF9BA2980B9856C0E8A* L_8 = ___0_array;
		int32_t L_9 = V_2;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_10 = ___1_value;
		bool L_11;
		L_11 = BackgroundRepeat_Equals_m1D533A1C4E03887BF51B4A9AAD74E74C7EA4909F(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m14A268F774A2BAEABAF77C3544B5021BA98CCA66_gshared (GenericEqualityComparer_1_t7E74CDF4F5686370C85528D54991AB58D20D89C8* __this, BackgroundRepeatU5BU5D_t6B8E9E75430914546B34BCF9BA2980B9856C0E8A* ___0_array, BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		BackgroundRepeatU5BU5D_t6B8E9E75430914546B34BCF9BA2980B9856C0E8A* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		BackgroundRepeatU5BU5D_t6B8E9E75430914546B34BCF9BA2980B9856C0E8A* L_8 = ___0_array;
		int32_t L_9 = V_2;
		BackgroundRepeat_t446EC7315DED2C6822F1047B7587C3018BFB277F L_10 = ___1_value;
		bool L_11;
		L_11 = BackgroundRepeat_Equals_m1D533A1C4E03887BF51B4A9AAD74E74C7EA4909F(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m987DA0F84D19DDB6A130E07B9C073347C305B730_gshared (GenericEqualityComparer_1_t7E74CDF4F5686370C85528D54991AB58D20D89C8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t7E74CDF4F5686370C85528D54991AB58D20D89C8*)((GenericEqualityComparer_1_t7E74CDF4F5686370C85528D54991AB58D20D89C8*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m863AC3EBCB571B1B5DAB9C91261EF03434C76BC6_gshared (GenericEqualityComparer_1_t7E74CDF4F5686370C85528D54991AB58D20D89C8* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mE6FC942F68179DFA81CB819CEB159D6905F5D01D_gshared (GenericEqualityComparer_1_t7E74CDF4F5686370C85528D54991AB58D20D89C8* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m0363C54EBA926A2B3008D56572784DDD8E64FE66((EqualityComparer_1_t3F2F95FBB654B2DA47BF557FD72A35DFEBC22AFB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m5C9A67035DBCE9AFD368F0C1EBF16D091153C491_gshared (GenericEqualityComparer_1_t1CA70F45D72BBBE51E0C4B1AFD0DE8F215432E1E* __this, bool ___0_x, bool ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
	}
	{
	}
	{
		bool L_2 = ___1_y;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m4ACF745D56DB46B3C1BB4BAC0C372211FF17987F_gshared (GenericEqualityComparer_1_t1CA70F45D72BBBE51E0C4B1AFD0DE8F215432E1E* __this, bool ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m83A82294A93B30837E9D310E40D1C433BBFA2815_gshared (GenericEqualityComparer_1_t1CA70F45D72BBBE51E0C4B1AFD0DE8F215432E1E* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, bool ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		bool L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = ___0_array;
		int32_t L_9 = V_2;
		bool L_10 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m7A0D029A38CA74F1B34DB0F8822DF7B4562ACE7E_gshared (GenericEqualityComparer_1_t1CA70F45D72BBBE51E0C4B1AFD0DE8F215432E1E* __this, BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, bool ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		bool L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = ___0_array;
		int32_t L_9 = V_2;
		bool L_10 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Boolean_Equals_mC020D5EB2F64274CD623E8449E8777A70BEC6CC9(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m107DB752509E4CDC18DC59FE96D739FDBB55055E_gshared (GenericEqualityComparer_1_t1CA70F45D72BBBE51E0C4B1AFD0DE8F215432E1E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t1CA70F45D72BBBE51E0C4B1AFD0DE8F215432E1E*)((GenericEqualityComparer_1_t1CA70F45D72BBBE51E0C4B1AFD0DE8F215432E1E*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mB0160A0E28E5A13D69AFC7E413315B6EC3396C2B_gshared (GenericEqualityComparer_1_t1CA70F45D72BBBE51E0C4B1AFD0DE8F215432E1E* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m72A101C6836BAB9C8F40597C7629BB5A9E806492_gshared (GenericEqualityComparer_1_t1CA70F45D72BBBE51E0C4B1AFD0DE8F215432E1E* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_mA509C516CCA203AC94ADDEFDBFE1A1AFC12056D0((EqualityComparer_1_t97160852989689D9543E2E1EA7D7196DBEA5AEE4*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m21B58E92BB6AEE00ED9D891ADC1B153FF7F1CB88_gshared (GenericEqualityComparer_1_t842FB7D9FA14D9B8467071A38A62C2449B6DBCF7* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_x, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_2 = ___1_y;
		bool L_3;
		L_3 = Bounds_Equals_m615135524315743D29633C33B6C8B16B754266DB_inline((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m2F29AB570CE2B6DB1BE155C26C5C6EF42461BE20_gshared (GenericEqualityComparer_1_t842FB7D9FA14D9B8467071A38A62C2449B6DBCF7* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = Bounds_GetHashCode_m59C79B529D33866FE45FEFC0C69FBD3B4AC7E172_inline((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m488DC847E8ECFC1B14BC19D5F67EA8527998D21B_gshared (GenericEqualityComparer_1_t842FB7D9FA14D9B8467071A38A62C2449B6DBCF7* __this, BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ___0_array, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_10 = ___1_value;
		bool L_11;
		L_11 = Bounds_Equals_m615135524315743D29633C33B6C8B16B754266DB_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m3ECF47D557B473162F4A3FD127F08C40B626E6EC_gshared (GenericEqualityComparer_1_t842FB7D9FA14D9B8467071A38A62C2449B6DBCF7* __this, BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* ___0_array, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		BoundsU5BU5D_t45563ED55B62FA0536E8117454C56C0CFA5B25F5* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_10 = ___1_value;
		bool L_11;
		L_11 = Bounds_Equals_m615135524315743D29633C33B6C8B16B754266DB_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m07F64C3BA2924982B29C1F099716094D63BC3C22_gshared (GenericEqualityComparer_1_t842FB7D9FA14D9B8467071A38A62C2449B6DBCF7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t842FB7D9FA14D9B8467071A38A62C2449B6DBCF7*)((GenericEqualityComparer_1_t842FB7D9FA14D9B8467071A38A62C2449B6DBCF7*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m8353D5F2D117246F3C406093937A72979F3C641E_gshared (GenericEqualityComparer_1_t842FB7D9FA14D9B8467071A38A62C2449B6DBCF7* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m338B89AA5B2C2FA008C16F4037675BA8E2ECF680_gshared (GenericEqualityComparer_1_t842FB7D9FA14D9B8467071A38A62C2449B6DBCF7* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_mC9E77E8DC33F857EF3454359C837DA31AB091EC6((EqualityComparer_1_tCF43443A371EFD813BA0F1853A2F502EAA2C1FD4*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mA5D2973171E41174932CE9D0BF5CC4AE453CA564_gshared (GenericEqualityComparer_1_t6F4BD8454312D41F64A3D1CD4F7555E32867FB10* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___0_x, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_2 = ___1_y;
		bool L_3;
		L_3 = BoundsInt_Equals_m143E0673DA604FDEBBF40115D50BE078E343F1E6_inline((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mD8124AEEB648CEAF769306B321AE5A325A0A878D_gshared (GenericEqualityComparer_1_t6F4BD8454312D41F64A3D1CD4F7555E32867FB10* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = BoundsInt_GetHashCode_m9740EA5B8C8E9B4DD47D9D6E619D61F5B99115CC((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m5FC8941D9C777BC06ECD6BF9F75ABD5913B8EF31_gshared (GenericEqualityComparer_1_t6F4BD8454312D41F64A3D1CD4F7555E32867FB10* __this, BoundsIntU5BU5D_tCF4BFFCF7975BE9754B8932F19F3A0D0F752F2BD* ___0_array, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		BoundsIntU5BU5D_tCF4BFFCF7975BE9754B8932F19F3A0D0F752F2BD* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		BoundsIntU5BU5D_tCF4BFFCF7975BE9754B8932F19F3A0D0F752F2BD* L_8 = ___0_array;
		int32_t L_9 = V_2;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_10 = ___1_value;
		bool L_11;
		L_11 = BoundsInt_Equals_m143E0673DA604FDEBBF40115D50BE078E343F1E6_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_mD84D47FCA6A97D95DDF188DAD58120C1B3E4F51B_gshared (GenericEqualityComparer_1_t6F4BD8454312D41F64A3D1CD4F7555E32867FB10* __this, BoundsIntU5BU5D_tCF4BFFCF7975BE9754B8932F19F3A0D0F752F2BD* ___0_array, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		BoundsIntU5BU5D_tCF4BFFCF7975BE9754B8932F19F3A0D0F752F2BD* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		BoundsIntU5BU5D_tCF4BFFCF7975BE9754B8932F19F3A0D0F752F2BD* L_8 = ___0_array;
		int32_t L_9 = V_2;
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_10 = ___1_value;
		bool L_11;
		L_11 = BoundsInt_Equals_m143E0673DA604FDEBBF40115D50BE078E343F1E6_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mC7DBE9C25CB2405BCEB940E481F31408CE1E0A71_gshared (GenericEqualityComparer_1_t6F4BD8454312D41F64A3D1CD4F7555E32867FB10* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t6F4BD8454312D41F64A3D1CD4F7555E32867FB10*)((GenericEqualityComparer_1_t6F4BD8454312D41F64A3D1CD4F7555E32867FB10*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m6A18E70FBA3F48F1BA9D45A5AF9EDA454E5D3576_gshared (GenericEqualityComparer_1_t6F4BD8454312D41F64A3D1CD4F7555E32867FB10* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m61FCDFCACFD701910F23FDD2DC1A39385521B0CB_gshared (GenericEqualityComparer_1_t6F4BD8454312D41F64A3D1CD4F7555E32867FB10* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m76E9FA9ED2AD2CF2CA82FE8F66D429C1E963BE88((EqualityComparer_1_t678ED0F0E8B023739EF5D6018ABD61BBE060424A*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mD4EB51848F73224CF36D50840B1E71BE3BFC7EF8_gshared (GenericEqualityComparer_1_t8D3B31AA6BBF17C8252624EC6D784347C2728BB0* __this, uint8_t ___0_x, uint8_t ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		uint8_t L_2 = ___1_y;
		bool L_3;
		L_3 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m49803EE6A7DCA52A9F536A3C64C88867C4A749CF_gshared (GenericEqualityComparer_1_t8D3B31AA6BBF17C8252624EC6D784347C2728BB0* __this, uint8_t ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m2BEF176363A45FFCC1A3956049AB3B141CCD0B46_gshared (GenericEqualityComparer_1_t8D3B31AA6BBF17C8252624EC6D784347C2728BB0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, uint8_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_array;
		int32_t L_9 = V_2;
		uint8_t L_10 = ___1_value;
		bool L_11;
		L_11 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_mFFEE4AED50CE7DAD0C3C02451673BB64C0CB5A79_gshared (GenericEqualityComparer_1_t8D3B31AA6BBF17C8252624EC6D784347C2728BB0* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, uint8_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		uint8_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_array;
		int32_t L_9 = V_2;
		uint8_t L_10 = ___1_value;
		bool L_11;
		L_11 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mBF0464F96F6B5D57A20D85E332B57BAA648A696C_gshared (GenericEqualityComparer_1_t8D3B31AA6BBF17C8252624EC6D784347C2728BB0* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t8D3B31AA6BBF17C8252624EC6D784347C2728BB0*)((GenericEqualityComparer_1_t8D3B31AA6BBF17C8252624EC6D784347C2728BB0*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mA3FE2B1B22B46BEC9E08634A85F1D46F785008DA_gshared (GenericEqualityComparer_1_t8D3B31AA6BBF17C8252624EC6D784347C2728BB0* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m19A96EBE07EEDD817FCD62FF70BD436E7AF1CEC6_gshared (GenericEqualityComparer_1_t8D3B31AA6BBF17C8252624EC6D784347C2728BB0* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m837428D8789D08F38784925EE679EBC5FF7808FD((EqualityComparer_1_t209913D8BB9C5DF2E3F26BA94AD53F39604FBFB8*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mB1909E3FA03CEF33DA465238FED0F87E65385E12_gshared (GenericEqualityComparer_1_t165923AC516FD1DF289A3156DDFD8D07B4AAF8A7* __this, Il2CppChar ___0_x, Il2CppChar ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
	}
	{
	}
	{
		Il2CppChar L_2 = ___1_y;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m34689D686D0A15FFA9D945D867D3C815A3DAE5ED_gshared (GenericEqualityComparer_1_t165923AC516FD1DF289A3156DDFD8D07B4AAF8A7* __this, Il2CppChar ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Char_GetHashCode_mB5406F7D8B6D7545CD1CE6FCA0567BD7217E6B93((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m40FD5191ABC3C56246681AC7DAF6ABA36C7B0FFD_gshared (GenericEqualityComparer_1_t165923AC516FD1DF289A3156DDFD8D07B4AAF8A7* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, Il2CppChar ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Il2CppChar L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Il2CppChar L_10 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m02FC1E56FFDF2E519B3A230A64A002F283DD9524_gshared (GenericEqualityComparer_1_t165923AC516FD1DF289A3156DDFD8D07B4AAF8A7* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_array, Il2CppChar ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Il2CppChar L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Il2CppChar L_10 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Char_Equals_mEA7BFB45790C973DF6352091FA924B3FB2EFCE4B(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mFFB7909C8EC85A2101F6DE9690DF002D718D20AE_gshared (GenericEqualityComparer_1_t165923AC516FD1DF289A3156DDFD8D07B4AAF8A7* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t165923AC516FD1DF289A3156DDFD8D07B4AAF8A7*)((GenericEqualityComparer_1_t165923AC516FD1DF289A3156DDFD8D07B4AAF8A7*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mE6978E894E7AB3B2894CF761BD4580F4604A7EF1_gshared (GenericEqualityComparer_1_t165923AC516FD1DF289A3156DDFD8D07B4AAF8A7* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m4867C2B8108A3B6A73A288A0F7B59E4B24819E38_gshared (GenericEqualityComparer_1_t165923AC516FD1DF289A3156DDFD8D07B4AAF8A7* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_mFFA83824FACD56202544750D1E8A5DA9C319DD34((EqualityComparer_1_tCAA8B21BC7E1029BB1288DEAE6D8ACB730BC5D4B*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mD71121DF76EB7CC0287A3738998C62A84851196A_gshared (GenericEqualityComparer_1_tAFE3875F1E1680726E49BA059DFFF37933404BF6* __this, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___0_x, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
	}
	{
	}
	{
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_2 = ___1_y;
		il2cpp_codegen_runtime_class_init_inline(ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = ColorBlock_Equals_m52DCE246EA23904A3EF0FCD3ADAB81BC20DC1BE5((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m71B0F450453E79FBAAD1E871DAC0EE34C6FC4E9B_gshared (GenericEqualityComparer_1_tAFE3875F1E1680726E49BA059DFFF37933404BF6* __this, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		il2cpp_codegen_runtime_class_init_inline(ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = ColorBlock_GetHashCode_m3CCB4E1E5EE93B905650E24BD4753096082270D7((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m62F7E48DDFE765C80E66C8DBE57DB7BBB92364AC_gshared (GenericEqualityComparer_1_tAFE3875F1E1680726E49BA059DFFF37933404BF6* __this, ColorBlockU5BU5D_t15403DAEAB234FE5927F08FC9968B78E2B1D14B6* ___0_array, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		ColorBlockU5BU5D_t15403DAEAB234FE5927F08FC9968B78E2B1D14B6* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		ColorBlockU5BU5D_t15403DAEAB234FE5927F08FC9968B78E2B1D14B6* L_8 = ___0_array;
		int32_t L_9 = V_2;
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_10 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = ColorBlock_Equals_m52DCE246EA23904A3EF0FCD3ADAB81BC20DC1BE5(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m030B11739980D5A2D839464C10F7C1C81D3E188E_gshared (GenericEqualityComparer_1_tAFE3875F1E1680726E49BA059DFFF37933404BF6* __this, ColorBlockU5BU5D_t15403DAEAB234FE5927F08FC9968B78E2B1D14B6* ___0_array, ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		ColorBlockU5BU5D_t15403DAEAB234FE5927F08FC9968B78E2B1D14B6* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		ColorBlockU5BU5D_t15403DAEAB234FE5927F08FC9968B78E2B1D14B6* L_8 = ___0_array;
		int32_t L_9 = V_2;
		ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 L_10 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = ColorBlock_Equals_m52DCE246EA23904A3EF0FCD3ADAB81BC20DC1BE5(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mEED6322E3097DB8BE5534FDCF091E7075ECAC56A_gshared (GenericEqualityComparer_1_tAFE3875F1E1680726E49BA059DFFF37933404BF6* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_tAFE3875F1E1680726E49BA059DFFF37933404BF6*)((GenericEqualityComparer_1_tAFE3875F1E1680726E49BA059DFFF37933404BF6*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m2F91D698894139BF61010416DA95187D1AC20F71_gshared (GenericEqualityComparer_1_tAFE3875F1E1680726E49BA059DFFF37933404BF6* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mBCFABC262641C3A02A731EC7873C0BDC5510974D_gshared (GenericEqualityComparer_1_tAFE3875F1E1680726E49BA059DFFF37933404BF6* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m972E58F7BB90FC9BAE4A381236365A83C62D19F7((EqualityComparer_1_tCE8310CD3375BA173DFEDBBDFF5C9E3ECFA5472F*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m7849EDE4559582BD682CB6D617B7A6D4E7F9E178_gshared (GenericEqualityComparer_1_tDC003F39F36335CB504394BE5BBBE96F3B5EC8A4* __this, double ___0_x, double ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		double L_2 = ___1_y;
		bool L_3;
		L_3 = Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m84815D6CAE3372841B387103991663D46DAB377B_gshared (GenericEqualityComparer_1_tDC003F39F36335CB504394BE5BBBE96F3B5EC8A4* __this, double ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m19A20E85791993AD6C075621246C340956B3FFBD_gshared (GenericEqualityComparer_1_tDC003F39F36335CB504394BE5BBBE96F3B5EC8A4* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_array, double ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		double L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_8 = ___0_array;
		int32_t L_9 = V_2;
		double L_10 = ___1_value;
		bool L_11;
		L_11 = Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m623E3D39003B98EFAC3F9A5B8FF8A55BC740D6C2_gshared (GenericEqualityComparer_1_tDC003F39F36335CB504394BE5BBBE96F3B5EC8A4* __this, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___0_array, double ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		double L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_8 = ___0_array;
		int32_t L_9 = V_2;
		double L_10 = ___1_value;
		bool L_11;
		L_11 = Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m402A55CD43FE99D580F7048175956E900361E614_gshared (GenericEqualityComparer_1_tDC003F39F36335CB504394BE5BBBE96F3B5EC8A4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_tDC003F39F36335CB504394BE5BBBE96F3B5EC8A4*)((GenericEqualityComparer_1_tDC003F39F36335CB504394BE5BBBE96F3B5EC8A4*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m9046E01CE37710E2447B801BCC96E1EF2689AAD4_gshared (GenericEqualityComparer_1_tDC003F39F36335CB504394BE5BBBE96F3B5EC8A4* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m48667464E793AA39833A2549DA4BD4BDB3B27B33_gshared (GenericEqualityComparer_1_tDC003F39F36335CB504394BE5BBBE96F3B5EC8A4* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m58F9725A39988634937D9D8E456BFBC9C8816DB6((EqualityComparer_1_t5574F94668D24600F369D7DCE0505C0AEC9244EB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mAEBEB25FBD9D3B9C787D496A952E6F55AC15FC60_gshared (GenericEqualityComparer_1_t1C286BFC66983E43B67215DD56E32778D4EB95A4* __this, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 ___0_x, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_2 = ___1_y;
		bool L_3;
		L_3 = EasingFunction_Equals_mDFC6754EBC9E3305C8F1BDC9082740D2F2AA382D((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mF50C4EE54F25292AFD39FCC88E960C9D9040D807_gshared (GenericEqualityComparer_1_t1C286BFC66983E43B67215DD56E32778D4EB95A4* __this, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = EasingFunction_GetHashCode_mCB49C4CDB304927EC093227444991688630A1622((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m7E175EC0799EB96A56BCC5B22E330941C876765C_gshared (GenericEqualityComparer_1_t1C286BFC66983E43B67215DD56E32778D4EB95A4* __this, EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* ___0_array, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* L_8 = ___0_array;
		int32_t L_9 = V_2;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_10 = ___1_value;
		bool L_11;
		L_11 = EasingFunction_Equals_mDFC6754EBC9E3305C8F1BDC9082740D2F2AA382D(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_mF2E24D07BC4628D5863AA784E6007C5D097A67FC_gshared (GenericEqualityComparer_1_t1C286BFC66983E43B67215DD56E32778D4EB95A4* __this, EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* ___0_array, EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		EasingFunctionU5BU5D_t3EEBBFFAD92EA74C3960D5F78D2A98BCEEA62E49* L_8 = ___0_array;
		int32_t L_9 = V_2;
		EasingFunction_t5197D3B06056326A8B5C96032CDEBD5D3BDCA7A4 L_10 = ___1_value;
		bool L_11;
		L_11 = EasingFunction_Equals_mDFC6754EBC9E3305C8F1BDC9082740D2F2AA382D(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m13A27F5D266FE9DA3CD10F6E119001F6CE9F9895_gshared (GenericEqualityComparer_1_t1C286BFC66983E43B67215DD56E32778D4EB95A4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t1C286BFC66983E43B67215DD56E32778D4EB95A4*)((GenericEqualityComparer_1_t1C286BFC66983E43B67215DD56E32778D4EB95A4*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m07938C046E046CDCEA37429751F308F2EF403584_gshared (GenericEqualityComparer_1_t1C286BFC66983E43B67215DD56E32778D4EB95A4* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mD78B777697E81E799ABDA7D07C5E90CEE36E5DCB_gshared (GenericEqualityComparer_1_t1C286BFC66983E43B67215DD56E32778D4EB95A4* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m610A5452BFD9A41DF68DC26131C15F4112885692((EqualityComparer_1_tE7CE9ECEA1E1C9468240F1E6198B5851D7C42041*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mDBE05BCD95368A8663F79217A80FDC1BB69B3A9E_gshared (GenericEqualityComparer_1_tF61F9EE945470A0D60FFF0DBEBBB391E639B7C34* __this, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___0_x, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_2 = ___1_y;
		bool L_3;
		L_3 = FontDefinition_Equals_m1425312D070F3FF049917D5FE1744BF65EEC1A05((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m834C2035D726F01B5BF5140113C5312B57D44883_gshared (GenericEqualityComparer_1_tF61F9EE945470A0D60FFF0DBEBBB391E639B7C34* __this, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = FontDefinition_GetHashCode_mAE455799B250E80471E797D4497B1DB9B715D8F6((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m15718BE1632AE607049ADB783775294254390DBC_gshared (GenericEqualityComparer_1_tF61F9EE945470A0D60FFF0DBEBBB391E639B7C34* __this, FontDefinitionU5BU5D_t31BDC3E2D72918B36F815F95F7CBA1F057E3DA39* ___0_array, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		FontDefinitionU5BU5D_t31BDC3E2D72918B36F815F95F7CBA1F057E3DA39* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		FontDefinitionU5BU5D_t31BDC3E2D72918B36F815F95F7CBA1F057E3DA39* L_8 = ___0_array;
		int32_t L_9 = V_2;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_10 = ___1_value;
		bool L_11;
		L_11 = FontDefinition_Equals_m1425312D070F3FF049917D5FE1744BF65EEC1A05(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m25F8521C4097277B6FA4635D5C94127CB5F5DE81_gshared (GenericEqualityComparer_1_tF61F9EE945470A0D60FFF0DBEBBB391E639B7C34* __this, FontDefinitionU5BU5D_t31BDC3E2D72918B36F815F95F7CBA1F057E3DA39* ___0_array, FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		FontDefinitionU5BU5D_t31BDC3E2D72918B36F815F95F7CBA1F057E3DA39* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		FontDefinitionU5BU5D_t31BDC3E2D72918B36F815F95F7CBA1F057E3DA39* L_8 = ___0_array;
		int32_t L_9 = V_2;
		FontDefinition_t65281B0E106365C28AD3F2525DE148719AEEA30C L_10 = ___1_value;
		bool L_11;
		L_11 = FontDefinition_Equals_m1425312D070F3FF049917D5FE1744BF65EEC1A05(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m70D453AA3148B8FE305A3363B3CAD26F22E259D3_gshared (GenericEqualityComparer_1_tF61F9EE945470A0D60FFF0DBEBBB391E639B7C34* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_tF61F9EE945470A0D60FFF0DBEBBB391E639B7C34*)((GenericEqualityComparer_1_tF61F9EE945470A0D60FFF0DBEBBB391E639B7C34*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m6089179CB9CBA767CED3A4EB28DE9FBBB250834F_gshared (GenericEqualityComparer_1_tF61F9EE945470A0D60FFF0DBEBBB391E639B7C34* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m978473F2A26AA857FDB8DCADF63D08FC04B85017_gshared (GenericEqualityComparer_1_tF61F9EE945470A0D60FFF0DBEBBB391E639B7C34* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m66239D8F3BE887E3BB54DB3B3F3E0CF280B5A76D((EqualityComparer_1_t2B9B08D0DC828BC7CB837C0507B1D1EF73DD7BF8*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m0604A31E84B7F676AA138D5F0AACE67BCE568CE2_gshared (GenericEqualityComparer_1_tDDC2841259CCAAFD92EC5D4A06372A87FDB72063* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_x, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_2 = ___1_y;
		bool L_3;
		L_3 = GlyphPairAdjustmentRecord_Equals_m2DADFD15A4DFF37570EA51D9EAEBA30DF0007689((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m6E8F854DEA8F76886DBFD22A7FD441B79F452938_gshared (GenericEqualityComparer_1_tDDC2841259CCAAFD92EC5D4A06372A87FDB72063* __this, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = GlyphPairAdjustmentRecord_GetHashCode_mC253F24FFD3BCE5EEB44CA6CDE1BE19336E0A5F5((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m1C65C32E7FD66F36B8AF5AEFD8ED07F72506D401_gshared (GenericEqualityComparer_1_tDDC2841259CCAAFD92EC5D4A06372A87FDB72063* __this, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_array, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_8 = ___0_array;
		int32_t L_9 = V_2;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_10 = ___1_value;
		bool L_11;
		L_11 = GlyphPairAdjustmentRecord_Equals_m2DADFD15A4DFF37570EA51D9EAEBA30DF0007689(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_mF4208E442F21E8F6913C9F8E9AAC8BA7C82727EF_gshared (GenericEqualityComparer_1_tDDC2841259CCAAFD92EC5D4A06372A87FDB72063* __this, GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* ___0_array, GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		GlyphPairAdjustmentRecordU5BU5D_tD5DD2A739A4CA745E7F28ECCB2CD0BD0A65A38F7* L_8 = ___0_array;
		int32_t L_9 = V_2;
		GlyphPairAdjustmentRecord_t6E4295094D349DBF22BC59116FBC8F22EA55420E L_10 = ___1_value;
		bool L_11;
		L_11 = GlyphPairAdjustmentRecord_Equals_m2DADFD15A4DFF37570EA51D9EAEBA30DF0007689(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mFBDD68EC2C60E2E9175FFDD08DD179C44BA186B0_gshared (GenericEqualityComparer_1_tDDC2841259CCAAFD92EC5D4A06372A87FDB72063* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_tDDC2841259CCAAFD92EC5D4A06372A87FDB72063*)((GenericEqualityComparer_1_tDDC2841259CCAAFD92EC5D4A06372A87FDB72063*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m6E9E8102666530E8F7B1B343702803715A13F05D_gshared (GenericEqualityComparer_1_tDDC2841259CCAAFD92EC5D4A06372A87FDB72063* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mF49EF911C404E19F577ABF4A05512758CD51DB24_gshared (GenericEqualityComparer_1_tDDC2841259CCAAFD92EC5D4A06372A87FDB72063* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_mF033C53EF0A4B688055266B4EB9E02162C7731EF((EqualityComparer_1_tB3AD263B0DEE15D208D9689E248377392042B846*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mD04029FC245C060D83C45F4D84972412DC15B059_gshared (GenericEqualityComparer_1_tFACF95059B022EA5E2F7ABD176121175414B1550* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_x, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
	}
	{
	}
	{
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_2 = ___1_y;
		il2cpp_codegen_runtime_class_init_inline(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = GlyphRect_Equals_m29BCDCCDB99C88355A61EDDA65F6A51762BF9C87((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mCF658EAE4622234F22641E0102798AF38A0C8F28_gshared (GenericEqualityComparer_1_tFACF95059B022EA5E2F7ABD176121175414B1550* __this, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		il2cpp_codegen_runtime_class_init_inline(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = GlyphRect_GetHashCode_mC012C2627F2A0C7EB7B47522085764441D47014F((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m9923C5139405DAEFA3097314DA32BB4B7054D231_gshared (GenericEqualityComparer_1_tFACF95059B022EA5E2F7ABD176121175414B1550* __this, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_array, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_8 = ___0_array;
		int32_t L_9 = V_2;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_10 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = GlyphRect_Equals_m29BCDCCDB99C88355A61EDDA65F6A51762BF9C87(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_mDA1B1C21031EA6706F32D9BA07A9E2603A677B9C_gshared (GenericEqualityComparer_1_tFACF95059B022EA5E2F7ABD176121175414B1550* __this, GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* ___0_array, GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		GlyphRectU5BU5D_t494B690215E3F3F42B6F216930A461256CE2CC70* L_8 = ___0_array;
		int32_t L_9 = V_2;
		GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D L_10 = ___1_value;
		il2cpp_codegen_runtime_class_init_inline(GlyphRect_tB6D225B9318A527A1CBC1B4078EB923398EB808D_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = GlyphRect_Equals_m29BCDCCDB99C88355A61EDDA65F6A51762BF9C87(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m75156E4AD16C56C69A30671A8B3933A3E03D6379_gshared (GenericEqualityComparer_1_tFACF95059B022EA5E2F7ABD176121175414B1550* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_tFACF95059B022EA5E2F7ABD176121175414B1550*)((GenericEqualityComparer_1_tFACF95059B022EA5E2F7ABD176121175414B1550*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mE5C54DEAC4CC267D51C9DAAF85BD9033DC5D891C_gshared (GenericEqualityComparer_1_tFACF95059B022EA5E2F7ABD176121175414B1550* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m360A8D89DFA4518660BD3F34447EF579175DEDA2_gshared (GenericEqualityComparer_1_tFACF95059B022EA5E2F7ABD176121175414B1550* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m35C801B2BA1E4382533FFD789EB43058E30F6A9C((EqualityComparer_1_tE7CEE6714F7CC48529517E0559D972979E9CA0B7*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mCB189F03CCC8C4EE144FA12CEE068227131FD659_gshared (GenericEqualityComparer_1_t58DA97F5D0824C19081EC168FABB0C8181E4AD6F* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_x, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_2 = ___1_y;
		bool L_3;
		L_3 = Hash128_Equals_mF6BED87E0744D6DFFF8026614BDA8F4E6712063D((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m48ADE27B1D7B9109A688BE38DB28205A4B68F383_gshared (GenericEqualityComparer_1_t58DA97F5D0824C19081EC168FABB0C8181E4AD6F* __this, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = Hash128_GetHashCode_m22816EE33CD973D11CD1917DEF7A0E0EC229E1D8((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_mAA4951EB84BECA4F57A0E46ABD71633A2AF5C85D_gshared (GenericEqualityComparer_1_t58DA97F5D0824C19081EC168FABB0C8181E4AD6F* __this, Hash128U5BU5D_tB104E7247B842648E447B7FCF4748077DC1F8C98* ___0_array, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		Hash128U5BU5D_tB104E7247B842648E447B7FCF4748077DC1F8C98* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Hash128U5BU5D_tB104E7247B842648E447B7FCF4748077DC1F8C98* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_10 = ___1_value;
		bool L_11;
		L_11 = Hash128_Equals_mF6BED87E0744D6DFFF8026614BDA8F4E6712063D(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_mD1E9CBB448EDBBAEE616038CC18768DD33ADBF7D_gshared (GenericEqualityComparer_1_t58DA97F5D0824C19081EC168FABB0C8181E4AD6F* __this, Hash128U5BU5D_tB104E7247B842648E447B7FCF4748077DC1F8C98* ___0_array, Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		Hash128U5BU5D_tB104E7247B842648E447B7FCF4748077DC1F8C98* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Hash128U5BU5D_tB104E7247B842648E447B7FCF4748077DC1F8C98* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Hash128_t93367F504B687578F893CDBCD13FB95AC8A87A40 L_10 = ___1_value;
		bool L_11;
		L_11 = Hash128_Equals_mF6BED87E0744D6DFFF8026614BDA8F4E6712063D(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m9F47F69EEE2B999803E4160BF2719626EC6DDB31_gshared (GenericEqualityComparer_1_t58DA97F5D0824C19081EC168FABB0C8181E4AD6F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t58DA97F5D0824C19081EC168FABB0C8181E4AD6F*)((GenericEqualityComparer_1_t58DA97F5D0824C19081EC168FABB0C8181E4AD6F*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mE08EDF0F5A611DE13C409CBF9A3FA9EC1A5D8F63_gshared (GenericEqualityComparer_1_t58DA97F5D0824C19081EC168FABB0C8181E4AD6F* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mDBDB0DEB8E96DBF6E5CC521383DEF736AD91E907_gshared (GenericEqualityComparer_1_t58DA97F5D0824C19081EC168FABB0C8181E4AD6F* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m24DCE9C2D74587DB1B7D8428318EAC7F4ACBD7C0((EqualityComparer_1_tCB03DC8C1BB93EAB2482241B58B079A44036C839*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m17B3B7C7B3E1D3AB711236C101D7CD06FF162B89_gshared (GenericEqualityComparer_1_tBFD7D21B4B84A04B2284593E8823D43FA81DE4E5* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		int32_t L_2 = ___1_y;
		bool L_3;
		L_3 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m2EDEA323E86634D29864121393224DD99C14054A_gshared (GenericEqualityComparer_1_tBFD7D21B4B84A04B2284593E8823D43FA81DE4E5* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m013FB2FA945E64DB8DD11244CC7FDB08A806EE32_gshared (GenericEqualityComparer_1_tBFD7D21B4B84A04B2284593E8823D43FA81DE4E5* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_array;
		int32_t L_9 = V_2;
		int32_t L_10 = ___1_value;
		bool L_11;
		L_11 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m9C5A119373D4CA95C471AE64FB5E41221B27B9F9_gshared (GenericEqualityComparer_1_tBFD7D21B4B84A04B2284593E8823D43FA81DE4E5* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = ___0_array;
		int32_t L_9 = V_2;
		int32_t L_10 = ___1_value;
		bool L_11;
		L_11 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mD20D73B0802852238B7676E9B067E29A01943FE3_gshared (GenericEqualityComparer_1_tBFD7D21B4B84A04B2284593E8823D43FA81DE4E5* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_tBFD7D21B4B84A04B2284593E8823D43FA81DE4E5*)((GenericEqualityComparer_1_tBFD7D21B4B84A04B2284593E8823D43FA81DE4E5*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mC1C95BC25059853F78779ED326E56C85857DC280_gshared (GenericEqualityComparer_1_tBFD7D21B4B84A04B2284593E8823D43FA81DE4E5* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mF2781338FBDF28F10FC0A6049CC52E58D9351110_gshared (GenericEqualityComparer_1_tBFD7D21B4B84A04B2284593E8823D43FA81DE4E5* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_mD15C6A8CEF2B696097F3EBEC1956D327C7AD48D1((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m5D0FB23B05117EC7BB0542914E294336E6A055CD_gshared (GenericEqualityComparer_1_tB6C7A8D2E046C0DD37C358453A0645FAA00699A9* __this, int64_t ___0_x, int64_t ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		int64_t L_2 = ___1_y;
		bool L_3;
		L_3 = Int64_Equals_mBAEB8FFBE12F6A5876473B4B40E1BD316658873E((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m6B4EE53C5A06EF2B2471852B6241C46C278F994A_gshared (GenericEqualityComparer_1_tB6C7A8D2E046C0DD37C358453A0645FAA00699A9* __this, int64_t ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m5C4108C5CE53273BF10493DD8D6D109EDC46E4A7_gshared (GenericEqualityComparer_1_tB6C7A8D2E046C0DD37C358453A0645FAA00699A9* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, int64_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		int64_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = ___0_array;
		int32_t L_9 = V_2;
		int64_t L_10 = ___1_value;
		bool L_11;
		L_11 = Int64_Equals_mBAEB8FFBE12F6A5876473B4B40E1BD316658873E(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_mB52B250028B587B89490AC115ED967BBC134231A_gshared (GenericEqualityComparer_1_tB6C7A8D2E046C0DD37C358453A0645FAA00699A9* __this, Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___0_array, int64_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		int64_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_8 = ___0_array;
		int32_t L_9 = V_2;
		int64_t L_10 = ___1_value;
		bool L_11;
		L_11 = Int64_Equals_mBAEB8FFBE12F6A5876473B4B40E1BD316658873E(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mB3D66A628553E607B4C6CA58D56D48D3867EA92C_gshared (GenericEqualityComparer_1_tB6C7A8D2E046C0DD37C358453A0645FAA00699A9* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_tB6C7A8D2E046C0DD37C358453A0645FAA00699A9*)((GenericEqualityComparer_1_tB6C7A8D2E046C0DD37C358453A0645FAA00699A9*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mD41BB26891702156309D1ABEB50EA674F40B2F0F_gshared (GenericEqualityComparer_1_tB6C7A8D2E046C0DD37C358453A0645FAA00699A9* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m173030C615D4687DFAF5690FDACAE644A73CA399_gshared (GenericEqualityComparer_1_tB6C7A8D2E046C0DD37C358453A0645FAA00699A9* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_mE9869CA21825F6C802DB0FC812915C52AF5EA207((EqualityComparer_1_tE05A9BF0932DEB0653A3BD392318FAA5123C3504*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mBAFF9EEE6563B84FF4208FDE9E95CD386CB84CC2_gshared (GenericEqualityComparer_1_t4DE8123E44344FED3BE9169A403FA726F18DFD7E* __this, intptr_t ___0_x, intptr_t ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		intptr_t L_2 = ___1_y;
		bool L_3;
		L_3 = IntPtr_System_IEquatableU3CSystem_IntPtrU3E_Equals_m64E94B3EFD22DCF51639896412A4872940166F0C((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mEDB171D2AB7001CAB41C549346A092006B4A94F6_gshared (GenericEqualityComparer_1_t4DE8123E44344FED3BE9169A403FA726F18DFD7E* __this, intptr_t ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = IntPtr_GetHashCode_m669B16AD7483C1C396E48F41D9CAC4B719E38F3D((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m7817E9443BD1B49B617E00ED906D668CDA19FDC6_gshared (GenericEqualityComparer_1_t4DE8123E44344FED3BE9169A403FA726F18DFD7E* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, intptr_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		intptr_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_8 = ___0_array;
		int32_t L_9 = V_2;
		intptr_t L_10 = ___1_value;
		bool L_11;
		L_11 = IntPtr_System_IEquatableU3CSystem_IntPtrU3E_Equals_m64E94B3EFD22DCF51639896412A4872940166F0C(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_mEF507EDD0451F1C9B1DE70CAA41A813A9EA1CF39_gshared (GenericEqualityComparer_1_t4DE8123E44344FED3BE9169A403FA726F18DFD7E* __this, IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___0_array, intptr_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		intptr_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* L_8 = ___0_array;
		int32_t L_9 = V_2;
		intptr_t L_10 = ___1_value;
		bool L_11;
		L_11 = IntPtr_System_IEquatableU3CSystem_IntPtrU3E_Equals_m64E94B3EFD22DCF51639896412A4872940166F0C(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mA1DBBB748F95F8E618C53240D5EEBFC2E5429E42_gshared (GenericEqualityComparer_1_t4DE8123E44344FED3BE9169A403FA726F18DFD7E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t4DE8123E44344FED3BE9169A403FA726F18DFD7E*)((GenericEqualityComparer_1_t4DE8123E44344FED3BE9169A403FA726F18DFD7E*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m403CE7C2C2812A77DF9441524FB5B1C4A99970D0_gshared (GenericEqualityComparer_1_t4DE8123E44344FED3BE9169A403FA726F18DFD7E* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mD592C48403C51B0F913EA4103ACCA0B0D5C3C8BD_gshared (GenericEqualityComparer_1_t4DE8123E44344FED3BE9169A403FA726F18DFD7E* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_mB5A439B916F5965AE1F560CD4C41D600D93B6FC8((EqualityComparer_1_t13ACD867E946362B862A2AA1D58B7265A48EDC21*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mFE86853DC84067135750478C6DCF74FC34C47E7B_gshared (GenericEqualityComparer_1_tA1C5948DE484DBC212B41660B994501AF1F14A20* __this, ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 ___0_x, ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 L_2 = ___1_y;
		bool L_3;
		L_3 = ManipulatorActivationFilter_Equals_m6D9CDF042CE2808C90A212A43262ADD9BB9CAC41((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mF1054D1E2B3D50AE958C0CEBEE29919D68A7363C_gshared (GenericEqualityComparer_1_tA1C5948DE484DBC212B41660B994501AF1F14A20* __this, ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = ManipulatorActivationFilter_GetHashCode_m46BCD43274FC9C9FB2515965F159FFEC3B7D2D57((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_mDEF141B5A245A16AB9CC1B958E1B4FA3B6BABC7F_gshared (GenericEqualityComparer_1_tA1C5948DE484DBC212B41660B994501AF1F14A20* __this, ManipulatorActivationFilterU5BU5D_tE2A0BDE194B3B4600164AE8238C8CE2B20DBD4D7* ___0_array, ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		ManipulatorActivationFilterU5BU5D_tE2A0BDE194B3B4600164AE8238C8CE2B20DBD4D7* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		ManipulatorActivationFilterU5BU5D_tE2A0BDE194B3B4600164AE8238C8CE2B20DBD4D7* L_8 = ___0_array;
		int32_t L_9 = V_2;
		ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 L_10 = ___1_value;
		bool L_11;
		L_11 = ManipulatorActivationFilter_Equals_m6D9CDF042CE2808C90A212A43262ADD9BB9CAC41(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m29DBA5EFD919960E67433D77CCB80A4C4117071E_gshared (GenericEqualityComparer_1_tA1C5948DE484DBC212B41660B994501AF1F14A20* __this, ManipulatorActivationFilterU5BU5D_tE2A0BDE194B3B4600164AE8238C8CE2B20DBD4D7* ___0_array, ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		ManipulatorActivationFilterU5BU5D_tE2A0BDE194B3B4600164AE8238C8CE2B20DBD4D7* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		ManipulatorActivationFilterU5BU5D_tE2A0BDE194B3B4600164AE8238C8CE2B20DBD4D7* L_8 = ___0_array;
		int32_t L_9 = V_2;
		ManipulatorActivationFilter_t866A0295DA75EA271B30BDC1F9EEA2C4FDEB1A81 L_10 = ___1_value;
		bool L_11;
		L_11 = ManipulatorActivationFilter_Equals_m6D9CDF042CE2808C90A212A43262ADD9BB9CAC41(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mEC180C16B7E8347B526A65CF0A9E95C5D61E8726_gshared (GenericEqualityComparer_1_tA1C5948DE484DBC212B41660B994501AF1F14A20* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_tA1C5948DE484DBC212B41660B994501AF1F14A20*)((GenericEqualityComparer_1_tA1C5948DE484DBC212B41660B994501AF1F14A20*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m34D1D315A0CD85D8CC4F8DE3C86D75B3AD27CF86_gshared (GenericEqualityComparer_1_tA1C5948DE484DBC212B41660B994501AF1F14A20* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m978ADCC2B336D115CFF07A46F6E0D2CD718C25FC_gshared (GenericEqualityComparer_1_tA1C5948DE484DBC212B41660B994501AF1F14A20* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m65B0B6F78B5BB7DEB386B8CD9328588709172AA2((EqualityComparer_1_tA3150AA88F929C2D35BB399F701A0B0A643089CB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m4667924CD78983C0C624A27448A8CE5E934F0A1B_gshared (GenericEqualityComparer_1_t79B097860FDFBE4223B7E97462B56E8CF28D81B8* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_x, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2 = ___1_y;
		bool L_3;
		L_3 = Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mA086BDC135B029D91AC67A19BD629792CF83D3FA_gshared (GenericEqualityComparer_1_t79B097860FDFBE4223B7E97462B56E8CF28D81B8* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = Matrix4x4_GetHashCode_m313B1AF4FEA792BB7E4D1D239EBE3257F825914D_inline((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m63C97381B14FA5617520FF94DEEF1A840C7C28FD_gshared (GenericEqualityComparer_1_t79B097860FDFBE4223B7E97462B56E8CF28D81B8* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = ___1_value;
		bool L_11;
		L_11 = Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m3C0E9D2CFA41AF6FCF0C3457423BB4CC771F78E1_gshared (GenericEqualityComparer_1_t79B097860FDFBE4223B7E97462B56E8CF28D81B8* __this, Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* ___0_array, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Matrix4x4U5BU5D_t9C51C93425FABC022B506D2DB3A5FA70F9752C4D* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_10 = ___1_value;
		bool L_11;
		L_11 = Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m137E98729EB1BDAF7EDB125397741845FF7E2826_gshared (GenericEqualityComparer_1_t79B097860FDFBE4223B7E97462B56E8CF28D81B8* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t79B097860FDFBE4223B7E97462B56E8CF28D81B8*)((GenericEqualityComparer_1_t79B097860FDFBE4223B7E97462B56E8CF28D81B8*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mAD4335D7EB785C9A6A01F8B20F0AA147A1833670_gshared (GenericEqualityComparer_1_t79B097860FDFBE4223B7E97462B56E8CF28D81B8* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mCE4B94370C4D2AAD281F7B8F5E3691EE3140CF40_gshared (GenericEqualityComparer_1_t79B097860FDFBE4223B7E97462B56E8CF28D81B8* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_mE2BAE9BE13DB6F13E336FA85FAA2D3E51E4EF1A4((EqualityComparer_1_tAF026F8ED983153AA5769E5B9667B9CAAC28F0B5*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m0F4C8920B536788B34ACED806B28BE6C227058FE_gshared (GenericEqualityComparer_1_t8D060AACD4225FF7A60A90EE53B8DA9C733F8299* __this, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___0_x, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C L_2 = ___1_y;
		bool L_3;
		L_3 = Navigation_Equals_mE25B4E3D0AB85C1469B99971E6AB16E2039E6B4D((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m03C5D64C6B91D84CC5002C832201C5A81A00EC37_gshared (GenericEqualityComparer_1_t8D060AACD4225FF7A60A90EE53B8DA9C733F8299* __this, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		Il2CppFakeBox<Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C> L_1(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (&___0_obj));
		int32_t L_2;
		L_2 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_1), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m0BA90C118FEB5EEC76FA940156B282FC7438EB1C_gshared (GenericEqualityComparer_1_t8D060AACD4225FF7A60A90EE53B8DA9C733F8299* __this, NavigationU5BU5D_t483F9B11FAE385AD99CDEB565C84D993648C5670* ___0_array, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		NavigationU5BU5D_t483F9B11FAE385AD99CDEB565C84D993648C5670* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		NavigationU5BU5D_t483F9B11FAE385AD99CDEB565C84D993648C5670* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C L_10 = ___1_value;
		bool L_11;
		L_11 = Navigation_Equals_mE25B4E3D0AB85C1469B99971E6AB16E2039E6B4D(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m4010B2095B6023A88A9D06B78255FD5BB1089B53_gshared (GenericEqualityComparer_1_t8D060AACD4225FF7A60A90EE53B8DA9C733F8299* __this, NavigationU5BU5D_t483F9B11FAE385AD99CDEB565C84D993648C5670* ___0_array, Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		NavigationU5BU5D_t483F9B11FAE385AD99CDEB565C84D993648C5670* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		NavigationU5BU5D_t483F9B11FAE385AD99CDEB565C84D993648C5670* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C L_10 = ___1_value;
		bool L_11;
		L_11 = Navigation_Equals_mE25B4E3D0AB85C1469B99971E6AB16E2039E6B4D(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m8AD7ED4E6801859AE3BBB1D8226629DC6848AEB1_gshared (GenericEqualityComparer_1_t8D060AACD4225FF7A60A90EE53B8DA9C733F8299* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t8D060AACD4225FF7A60A90EE53B8DA9C733F8299*)((GenericEqualityComparer_1_t8D060AACD4225FF7A60A90EE53B8DA9C733F8299*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m5B7140B2EBB26022986906D16250791577C2370D_gshared (GenericEqualityComparer_1_t8D060AACD4225FF7A60A90EE53B8DA9C733F8299* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m940985436546720A29AA8FA64163886B2EB2645D_gshared (GenericEqualityComparer_1_t8D060AACD4225FF7A60A90EE53B8DA9C733F8299* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m25537F3E5B46A0620AC2993989A6DE521E75DF1E((EqualityComparer_1_tEA33EB74546F679A978D87A75A355AA70D84E6B2*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m2AD65917064A1765674D41D4E617024B4ACDAE3F_gshared (GenericEqualityComparer_1_tDA4FA7351B7B6406528B930FC2CCBD8B9221B9F4* __this, RuntimeObject* ___0_x, RuntimeObject* ___1_y, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_x;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		RuntimeObject* L_1 = ___1_y;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_2 = ___1_y;
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), (RuntimeObject*)(___0_x), L_2);
		return L_3;
	}

IL_001f:
	{
		return (bool)0;
	}

IL_0021:
	{
		RuntimeObject* L_4 = ___1_y;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_002b:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mCA8B42E0260301FE16CB9C7719E5B119F2138025_gshared (GenericEqualityComparer_1_tDA4FA7351B7B6406528B930FC2CCBD8B9221B9F4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2, (___0_obj));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m75AFC82509ABE6535ADAAB0217E200F9BCED25C2_gshared (GenericEqualityComparer_1_tDA4FA7351B7B6406528B930FC2CCBD8B9221B9F4* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		RuntimeObject* L_2 = ___1_value;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = ___2_startIndex;
		V_1 = L_3;
		goto IL_0025;
	}

IL_0011:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___0_array;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		if (L_7)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0021:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0025:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_005e;
	}

IL_002b:
	{
		int32_t L_12 = ___2_startIndex;
		V_2 = L_12;
		goto IL_005a;
	}

IL_002f:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___0_array;
		int32_t L_14 = V_2;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		if (!L_16)
		{
			goto IL_0056;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = ___0_array;
		int32_t L_18 = V_2;
		RuntimeObject* L_19 = ___1_value;
		bool L_20;
		L_20 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), (RuntimeObject*)(*((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))), L_19);
		if (!L_20)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_21 = V_2;
		return L_21;
	}

IL_0056:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_005a:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) < ((int32_t)L_24)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_mFAAE43F761F501AC9F49EE9310F67B19E19CF1B5_gshared (GenericEqualityComparer_1_tDA4FA7351B7B6406528B930FC2CCBD8B9221B9F4* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		RuntimeObject* L_2 = ___1_value;
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = ___2_startIndex;
		V_1 = L_3;
		goto IL_0027;
	}

IL_0013:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___0_array;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		if (L_7)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_8 = V_1;
		return L_8;
	}

IL_0023:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_0027:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)L_11)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0060;
	}

IL_002d:
	{
		int32_t L_12 = ___2_startIndex;
		V_2 = L_12;
		goto IL_005c;
	}

IL_0031:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___0_array;
		int32_t L_14 = V_2;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		if (!L_16)
		{
			goto IL_0058;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = ___0_array;
		int32_t L_18 = V_2;
		RuntimeObject* L_19 = ___1_value;
		bool L_20;
		L_20 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 1), (RuntimeObject*)(*((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))), L_19);
		if (!L_20)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_21 = V_2;
		return L_21;
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
	}

IL_005c:
	{
		int32_t L_23 = V_2;
		int32_t L_24 = V_0;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mCDCBB561D02CA5EECADFB214C7C46ED8D5893385_gshared (GenericEqualityComparer_1_tDA4FA7351B7B6406528B930FC2CCBD8B9221B9F4* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_tDA4FA7351B7B6406528B930FC2CCBD8B9221B9F4*)((GenericEqualityComparer_1_tDA4FA7351B7B6406528B930FC2CCBD8B9221B9F4*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m33FF05CC2699A7E0C24C623BA9867B467E03A9B3_gshared (GenericEqualityComparer_1_tDA4FA7351B7B6406528B930FC2CCBD8B9221B9F4* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m4342739D10507325E95417DF12F8304C9BBA1E5C_gshared (GenericEqualityComparer_1_tDA4FA7351B7B6406528B930FC2CCBD8B9221B9F4* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_mA0D5DF71A4976E2FD4C77C93A93720BEBCBE0DCE((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m23D9B4F47BF107DC0736FF3EFD5374FBAEC94792_gshared (GenericEqualityComparer_1_t405E9AAF3D41BB58C4F761A19AE123EC2FA2C775* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_x, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = ___1_y;
		bool L_3;
		L_3 = Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5_inline((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mAE9114E5FFC893B1F0B7BF8E523E85996C1609C3_gshared (GenericEqualityComparer_1_t405E9AAF3D41BB58C4F761A19AE123EC2FA2C775* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = Rect_GetHashCode_m8E55539476EA6B7A6E0CEC5F980227CD15B778F1((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_mDFB2E735122D1A777AB04F65A9A3CF23F6E1876F_gshared (GenericEqualityComparer_1_t405E9AAF3D41BB58C4F761A19AE123EC2FA2C775* __this, RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* ___0_array, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10 = ___1_value;
		bool L_11;
		L_11 = Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m4F5C9977487BC920C41D871709EDC17EFEA1C57B_gshared (GenericEqualityComparer_1_t405E9AAF3D41BB58C4F761A19AE123EC2FA2C775* __this, RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* ___0_array, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		RectU5BU5D_t83297CB2E61BDF9D27DCB1A3E5C78EBCE9F7C993* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10 = ___1_value;
		bool L_11;
		L_11 = Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m8E6A5FDDD5F6EF72C9C18E8D9E3EB1E1002E95E6_gshared (GenericEqualityComparer_1_t405E9AAF3D41BB58C4F761A19AE123EC2FA2C775* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t405E9AAF3D41BB58C4F761A19AE123EC2FA2C775*)((GenericEqualityComparer_1_t405E9AAF3D41BB58C4F761A19AE123EC2FA2C775*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m79020E35C47E7F7E9DE0A894E4B2E2168652BD3B_gshared (GenericEqualityComparer_1_t405E9AAF3D41BB58C4F761A19AE123EC2FA2C775* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m5D5484CE716A810849BA837B79342342CAF07B2E_gshared (GenericEqualityComparer_1_t405E9AAF3D41BB58C4F761A19AE123EC2FA2C775* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m7EF6764E5B37E67B2AAEBEC312135D71F1979CA6((EqualityComparer_1_t9072871D75372840EEF20C93E4B8909E005D3EF1*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m51366A15A7423BF4684E1C1887961D0B397CD5C0_gshared (GenericEqualityComparer_1_tBBB7204908C5DA4D45C9ED28DE8B6E0C80049F87* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___0_x, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_2 = ___1_y;
		bool L_3;
		L_3 = RectInt_Equals_mE9EA164664CA30C1C099EFB658D691F55A793B96_inline((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mFE6C83794084621F500946C6BAB550AAF5736754_gshared (GenericEqualityComparer_1_tBBB7204908C5DA4D45C9ED28DE8B6E0C80049F87* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		Il2CppFakeBox<RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8> L_1(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (&___0_obj));
		int32_t L_2;
		L_2 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_1), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_mCFC56601D15D34B8312AFB72B3A61E4A349D5D95_gshared (GenericEqualityComparer_1_tBBB7204908C5DA4D45C9ED28DE8B6E0C80049F87* __this, RectIntU5BU5D_t0497041D1621D80C656705FB9F0AB63AD4D8698F* ___0_array, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		RectIntU5BU5D_t0497041D1621D80C656705FB9F0AB63AD4D8698F* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		RectIntU5BU5D_t0497041D1621D80C656705FB9F0AB63AD4D8698F* L_8 = ___0_array;
		int32_t L_9 = V_2;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_10 = ___1_value;
		bool L_11;
		L_11 = RectInt_Equals_mE9EA164664CA30C1C099EFB658D691F55A793B96_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_mF6D9D8531705F14328A20C1586BC7BC69F4EE465_gshared (GenericEqualityComparer_1_tBBB7204908C5DA4D45C9ED28DE8B6E0C80049F87* __this, RectIntU5BU5D_t0497041D1621D80C656705FB9F0AB63AD4D8698F* ___0_array, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		RectIntU5BU5D_t0497041D1621D80C656705FB9F0AB63AD4D8698F* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		RectIntU5BU5D_t0497041D1621D80C656705FB9F0AB63AD4D8698F* L_8 = ___0_array;
		int32_t L_9 = V_2;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_10 = ___1_value;
		bool L_11;
		L_11 = RectInt_Equals_mE9EA164664CA30C1C099EFB658D691F55A793B96_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mCB0BA96D08526AA195E887DA2116E368C15B14C7_gshared (GenericEqualityComparer_1_tBBB7204908C5DA4D45C9ED28DE8B6E0C80049F87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_tBBB7204908C5DA4D45C9ED28DE8B6E0C80049F87*)((GenericEqualityComparer_1_tBBB7204908C5DA4D45C9ED28DE8B6E0C80049F87*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m7882994D5DD6E982F06452424BA70DDD4F2C8668_gshared (GenericEqualityComparer_1_tBBB7204908C5DA4D45C9ED28DE8B6E0C80049F87* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m97F5C06D3A20A5EC443F4F7FCE1A96696A955AD6_gshared (GenericEqualityComparer_1_tBBB7204908C5DA4D45C9ED28DE8B6E0C80049F87* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m36E822B77731189EE2149599AC309A6E03281D9E((EqualityComparer_1_tD05D0CB5F6F4A3900C88F5AFFCCB051B9A889F76*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m9B0D55A13C6842C11892A40AAC9FF558EC3F5131_gshared (GenericEqualityComparer_1_tCE0EE64D4DAC58B97236C18987DF779E890CA34A* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		float L_2 = ___1_y;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mE25DDFE72720758CC1CA642F062C8393000D8DA5_gshared (GenericEqualityComparer_1_tCE0EE64D4DAC58B97236C18987DF779E890CA34A* __this, float ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m2082BA2E5A282D83AF8BB268F7DD6ACF7818A70E_gshared (GenericEqualityComparer_1_tCE0EE64D4DAC58B97236C18987DF779E890CA34A* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, float ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		float L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = ___0_array;
		int32_t L_9 = V_2;
		float L_10 = ___1_value;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_mC113AE31D0FB049413C7F85C670C77DF7EDDC741_gshared (GenericEqualityComparer_1_tCE0EE64D4DAC58B97236C18987DF779E890CA34A* __this, SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___0_array, float ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		float L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_8 = ___0_array;
		int32_t L_9 = V_2;
		float L_10 = ___1_value;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m5AC07B062DC4C8F6503F8490384C22B549BAC892_gshared (GenericEqualityComparer_1_tCE0EE64D4DAC58B97236C18987DF779E890CA34A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_tCE0EE64D4DAC58B97236C18987DF779E890CA34A*)((GenericEqualityComparer_1_tCE0EE64D4DAC58B97236C18987DF779E890CA34A*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m0910D36ECD749928928EF300685519D1EB2E4943_gshared (GenericEqualityComparer_1_tCE0EE64D4DAC58B97236C18987DF779E890CA34A* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mE469029A1EB9FD472A5C37FB902D61F1006CF4C7_gshared (GenericEqualityComparer_1_tCE0EE64D4DAC58B97236C18987DF779E890CA34A* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_mABD86A3C9CCEC7A2EEBFCD0D468A96CC3D0E12E3((EqualityComparer_1_t346CEF653847623862FC6F88D66F7933B0039499*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mA8D880073241388A6080B677F72BF15DC2F878BB_gshared (GenericEqualityComparer_1_t3A6EE9923FB4DFD5C178BA82A91198E478D7B519* __this, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___0_x, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_2 = ___1_y;
		bool L_3;
		L_3 = SpriteState_Equals_mAF58D9F36662F5A8196071690175AAFCC4506653((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mFB0E3F0A5D84F7092336A6663A4579BA9A4CFE9F_gshared (GenericEqualityComparer_1_t3A6EE9923FB4DFD5C178BA82A91198E478D7B519* __this, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		Il2CppFakeBox<SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD> L_1(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (&___0_obj));
		int32_t L_2;
		L_2 = ValueType_GetHashCode_m3B47C72EA1FA846D9B0DFF3C444AB2BFA22CF3CE((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_1), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m91EDA8AA89C0FFE285C8F255C5DA70F36D24CEA9_gshared (GenericEqualityComparer_1_t3A6EE9923FB4DFD5C178BA82A91198E478D7B519* __this, SpriteStateU5BU5D_tA29A384A9388A48E02C8A6CC1EADBB8B75BFCAC3* ___0_array, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		SpriteStateU5BU5D_tA29A384A9388A48E02C8A6CC1EADBB8B75BFCAC3* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		SpriteStateU5BU5D_tA29A384A9388A48E02C8A6CC1EADBB8B75BFCAC3* L_8 = ___0_array;
		int32_t L_9 = V_2;
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_10 = ___1_value;
		bool L_11;
		L_11 = SpriteState_Equals_mAF58D9F36662F5A8196071690175AAFCC4506653(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m91E9DF3DEB8DE44E1551EEEB29F2BD729B60F33E_gshared (GenericEqualityComparer_1_t3A6EE9923FB4DFD5C178BA82A91198E478D7B519* __this, SpriteStateU5BU5D_tA29A384A9388A48E02C8A6CC1EADBB8B75BFCAC3* ___0_array, SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		SpriteStateU5BU5D_tA29A384A9388A48E02C8A6CC1EADBB8B75BFCAC3* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		SpriteStateU5BU5D_tA29A384A9388A48E02C8A6CC1EADBB8B75BFCAC3* L_8 = ___0_array;
		int32_t L_9 = V_2;
		SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD L_10 = ___1_value;
		bool L_11;
		L_11 = SpriteState_Equals_mAF58D9F36662F5A8196071690175AAFCC4506653(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m37A1ECD51D13D11F7203B0BEC6642BE853DA4400_gshared (GenericEqualityComparer_1_t3A6EE9923FB4DFD5C178BA82A91198E478D7B519* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t3A6EE9923FB4DFD5C178BA82A91198E478D7B519*)((GenericEqualityComparer_1_t3A6EE9923FB4DFD5C178BA82A91198E478D7B519*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mA444C4D7684E416782E80D2A2DEAA725C0A20E8E_gshared (GenericEqualityComparer_1_t3A6EE9923FB4DFD5C178BA82A91198E478D7B519* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mCAAE524A6E5C16B570581BDB38CBEB75CB3F2B70_gshared (GenericEqualityComparer_1_t3A6EE9923FB4DFD5C178BA82A91198E478D7B519* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m1FAED7BC7B1BE9452F417C1B2750BCE0AA737454((EqualityComparer_1_tF74A06E4DA351FE016FE9BD76C2A66524D685C24*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mE5778EBA526F72CE92F6D51D188235D7413B5382_gshared (GenericEqualityComparer_1_t2E9F86F90EECF3D97BD11A98AC93AF8126F64A69* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___0_x, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_2 = ___1_y;
		bool L_3;
		L_3 = StylePropertyName_Equals_m653E5597E354595FC53CE1413231F49B51C25B60((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mD7C008B077CB252DAEAF5C5B8FE785547B97BD2C_gshared (GenericEqualityComparer_1_t2E9F86F90EECF3D97BD11A98AC93AF8126F64A69* __this, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = StylePropertyName_GetHashCode_mC15FB76DFFBE6E2F4C248DE53B4C8BCEE1ECE754((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m6D9E6C1D122E14651A4B79B559B2085D943D9FA9_gshared (GenericEqualityComparer_1_t2E9F86F90EECF3D97BD11A98AC93AF8126F64A69* __this, StylePropertyNameU5BU5D_t531626CF806E3F3D348D1F38A9109767014C35F8* ___0_array, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		StylePropertyNameU5BU5D_t531626CF806E3F3D348D1F38A9109767014C35F8* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		StylePropertyNameU5BU5D_t531626CF806E3F3D348D1F38A9109767014C35F8* L_8 = ___0_array;
		int32_t L_9 = V_2;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_10 = ___1_value;
		bool L_11;
		L_11 = StylePropertyName_Equals_m653E5597E354595FC53CE1413231F49B51C25B60(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m7668AC1F520F03C7A5BED2645DEC64702FC265B2_gshared (GenericEqualityComparer_1_t2E9F86F90EECF3D97BD11A98AC93AF8126F64A69* __this, StylePropertyNameU5BU5D_t531626CF806E3F3D348D1F38A9109767014C35F8* ___0_array, StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		StylePropertyNameU5BU5D_t531626CF806E3F3D348D1F38A9109767014C35F8* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		StylePropertyNameU5BU5D_t531626CF806E3F3D348D1F38A9109767014C35F8* L_8 = ___0_array;
		int32_t L_9 = V_2;
		StylePropertyName_tCBE2B561C690538C8514BF56426AC486DC35B6FF L_10 = ___1_value;
		bool L_11;
		L_11 = StylePropertyName_Equals_m653E5597E354595FC53CE1413231F49B51C25B60(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m663137F7C89572B23C832C50B81E96E4DC763BCE_gshared (GenericEqualityComparer_1_t2E9F86F90EECF3D97BD11A98AC93AF8126F64A69* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t2E9F86F90EECF3D97BD11A98AC93AF8126F64A69*)((GenericEqualityComparer_1_t2E9F86F90EECF3D97BD11A98AC93AF8126F64A69*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mB13DD751CD710B82EAFB171723B427E1899EB6AB_gshared (GenericEqualityComparer_1_t2E9F86F90EECF3D97BD11A98AC93AF8126F64A69* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mB0FE0350F5723D738D5EDDB32FE5442B6E6C25E3_gshared (GenericEqualityComparer_1_t2E9F86F90EECF3D97BD11A98AC93AF8126F64A69* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_mABAAA02EF7FDF48091E920AA3ACBC79DDA408A30((EqualityComparer_1_tCB3E520353C0C084FFBFF3D631E929CE2B6A70C6*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mA7C7D83EC93023BB648E2B173F263916440DDB54_gshared (GenericEqualityComparer_1_t91B5CB54EC3D5B7BA345148E5BD1130F505790F2* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_x, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_2 = ___1_y;
		bool L_3;
		L_3 = TimeValue_Equals_m877001BAB4403C8BA20CDF4EABDB7702303B2E0A((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m760F7844FB595E9E5F33C156FBAECD82907C07C5_gshared (GenericEqualityComparer_1_t91B5CB54EC3D5B7BA345148E5BD1130F505790F2* __this, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = TimeValue_GetHashCode_m112ADB5ED018B9DE35EF34CA6610DB4F20AAEAD9((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_mDBF11C8A825974153C2B2371B8CB8DF90A5C0696_gshared (GenericEqualityComparer_1_t91B5CB54EC3D5B7BA345148E5BD1130F505790F2* __this, TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* ___0_array, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* L_8 = ___0_array;
		int32_t L_9 = V_2;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_10 = ___1_value;
		bool L_11;
		L_11 = TimeValue_Equals_m877001BAB4403C8BA20CDF4EABDB7702303B2E0A(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m1347BCDAA2BE0C3FB4F9AD6928CA8222BF128232_gshared (GenericEqualityComparer_1_t91B5CB54EC3D5B7BA345148E5BD1130F505790F2* __this, TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* ___0_array, TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		TimeValueU5BU5D_t3EB79C5975D39A0E711250FD8A9547F5312746DE* L_8 = ___0_array;
		int32_t L_9 = V_2;
		TimeValue_t45AE43B219493F9459363F32C79E8986B5F82E0E L_10 = ___1_value;
		bool L_11;
		L_11 = TimeValue_Equals_m877001BAB4403C8BA20CDF4EABDB7702303B2E0A(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mB1C07B5C44171391DC5387D477EED72CEBE10510_gshared (GenericEqualityComparer_1_t91B5CB54EC3D5B7BA345148E5BD1130F505790F2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t91B5CB54EC3D5B7BA345148E5BD1130F505790F2*)((GenericEqualityComparer_1_t91B5CB54EC3D5B7BA345148E5BD1130F505790F2*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m7E074E9D38C415D6253161F24D4E61F9A38A02CB_gshared (GenericEqualityComparer_1_t91B5CB54EC3D5B7BA345148E5BD1130F505790F2* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mAAC0A07B8C872965CFAB21B757FC594606A96C13_gshared (GenericEqualityComparer_1_t91B5CB54EC3D5B7BA345148E5BD1130F505790F2* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m96D551C7BEB663EF14ADE1DCA930DD58A8A10D87((EqualityComparer_1_t1E747CFBD596204547D9B6B98B222ECC51154FE9*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m7436DACC576AA259DAD1519CBC5B20EB99A6BE8C_gshared (GenericEqualityComparer_1_t14CC3602E3DED49FFEDEE013FAA1000FF152906F* __this, uint32_t ___0_x, uint32_t ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		uint32_t L_2 = ___1_y;
		bool L_3;
		L_3 = UInt32_Equals_m6BE590F34B71E27978E9146437F73A6448BA01A3((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m1AC4B34D8D544211E38C549DC92DB86BA893846A_gshared (GenericEqualityComparer_1_t14CC3602E3DED49FFEDEE013FAA1000FF152906F* __this, uint32_t ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_mFD9289C3C9775B5A494BECE71429FD7E8A74EFC9_gshared (GenericEqualityComparer_1_t14CC3602E3DED49FFEDEE013FAA1000FF152906F* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, uint32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_array;
		int32_t L_9 = V_2;
		uint32_t L_10 = ___1_value;
		bool L_11;
		L_11 = UInt32_Equals_m6BE590F34B71E27978E9146437F73A6448BA01A3(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m59F2FA77A8F49486839B5B7CEEDE8C08742DBDEA_gshared (GenericEqualityComparer_1_t14CC3602E3DED49FFEDEE013FAA1000FF152906F* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, uint32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		uint32_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_8 = ___0_array;
		int32_t L_9 = V_2;
		uint32_t L_10 = ___1_value;
		bool L_11;
		L_11 = UInt32_Equals_m6BE590F34B71E27978E9146437F73A6448BA01A3(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m1C6C0CB1A148B41EF141E1A0BE854C62D18B703A_gshared (GenericEqualityComparer_1_t14CC3602E3DED49FFEDEE013FAA1000FF152906F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t14CC3602E3DED49FFEDEE013FAA1000FF152906F*)((GenericEqualityComparer_1_t14CC3602E3DED49FFEDEE013FAA1000FF152906F*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mCDF419EF3DAF8E79751B5338F68F3195962DFC70_gshared (GenericEqualityComparer_1_t14CC3602E3DED49FFEDEE013FAA1000FF152906F* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m2238E7C84D77439F7AFCE1309050841DF8E82AF9_gshared (GenericEqualityComparer_1_t14CC3602E3DED49FFEDEE013FAA1000FF152906F* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m1AFD91EC93C4FC81A1AEDACB58E1BBB972C49997((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m1005E3AA827E7811BB1B56A30525D91E7AA2A36F_gshared (GenericEqualityComparer_1_t51198A345C2BFD664A445D9D2F6E7D26C977E960* __this, uint64_t ___0_x, uint64_t ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		uint64_t L_2 = ___1_y;
		bool L_3;
		L_3 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m9707F4CF74607D22C7C300D64BA5F200276A15BA_gshared (GenericEqualityComparer_1_t51198A345C2BFD664A445D9D2F6E7D26C977E960* __this, uint64_t ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m9514A67D8FC021AA4EAF248F1D9882FF23129414_gshared (GenericEqualityComparer_1_t51198A345C2BFD664A445D9D2F6E7D26C977E960* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, uint64_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		uint64_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_array;
		int32_t L_9 = V_2;
		uint64_t L_10 = ___1_value;
		bool L_11;
		L_11 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m61342F869C36522D397859D6AB3E42FE3F1F0BD5_gshared (GenericEqualityComparer_1_t51198A345C2BFD664A445D9D2F6E7D26C977E960* __this, UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___0_array, uint64_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		uint64_t L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = ___0_array;
		int32_t L_9 = V_2;
		uint64_t L_10 = ___1_value;
		bool L_11;
		L_11 = UInt64_Equals_mB642AC4A6A1261E0FB36D7F1F2D77940790FAA81(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mF99FA25C8234C8B47B40C00835142648E582017D_gshared (GenericEqualityComparer_1_t51198A345C2BFD664A445D9D2F6E7D26C977E960* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t51198A345C2BFD664A445D9D2F6E7D26C977E960*)((GenericEqualityComparer_1_t51198A345C2BFD664A445D9D2F6E7D26C977E960*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mDC8512C2E4AC3881DAAEC96F39FDA2F52F735D96_gshared (GenericEqualityComparer_1_t51198A345C2BFD664A445D9D2F6E7D26C977E960* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mA8ED9180EC0F43ECB83C3C448627F39DE35EE0F7_gshared (GenericEqualityComparer_1_t51198A345C2BFD664A445D9D2F6E7D26C977E960* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_mCC37F86E0AA6DCD3C845D4FF3B90AB94E2DD71B8((EqualityComparer_1_t7BD194EF0EF9D754203F4B95A88927DF3621DA17*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m4BDBB96F4C9E28EFC0CB89237FDFAF2FAA74FD5D_gshared (GenericEqualityComparer_1_tFBDB6DF019AA6E3955BBB95B90B45DCADB0EBC9F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_x, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_y;
		bool L_3;
		L_3 = Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mB4213BA460599729EA8EA4BD40985F5918F7E94D_gshared (GenericEqualityComparer_1_tFBDB6DF019AA6E3955BBB95B90B45DCADB0EBC9F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = Vector2_GetHashCode_mED8670C0E122B7ED0DAB4C3381ADFF04B75E0B03_inline((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m1281CCA914A6B9DF73406733C9A2723ABCF5F65F_gshared (GenericEqualityComparer_1_tFBDB6DF019AA6E3955BBB95B90B45DCADB0EBC9F* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___1_value;
		bool L_11;
		L_11 = Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m5F92ADB037F6662BC32FBBBBB4658F2D13BAADC2_gshared (GenericEqualityComparer_1_tFBDB6DF019AA6E3955BBB95B90B45DCADB0EBC9F* __this, Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___0_array, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = ___1_value;
		bool L_11;
		L_11 = Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mAD293C63EADCF7BF3AC47F92836856B2655CB697_gshared (GenericEqualityComparer_1_tFBDB6DF019AA6E3955BBB95B90B45DCADB0EBC9F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_tFBDB6DF019AA6E3955BBB95B90B45DCADB0EBC9F*)((GenericEqualityComparer_1_tFBDB6DF019AA6E3955BBB95B90B45DCADB0EBC9F*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m5A17C36397B3469D5CBA72CC85B6A1F94FAD17B7_gshared (GenericEqualityComparer_1_tFBDB6DF019AA6E3955BBB95B90B45DCADB0EBC9F* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m4BF784D58E9C330D0D1C06418AC2A75BB00BA039_gshared (GenericEqualityComparer_1_tFBDB6DF019AA6E3955BBB95B90B45DCADB0EBC9F* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m24B2FBB121C71610428ECF48C223AC632699DFD3((EqualityComparer_1_tF5B9124CEB160EFC53E943AA29271854DB5D5E8E*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m6380DC8C5B18B89537F03DA4F25EDE66106F5149_gshared (GenericEqualityComparer_1_t274846047EBEE29EFC30CB76E6BFB35CE5BD255A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_x, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2 = ___1_y;
		bool L_3;
		L_3 = Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mDFEF58C19BE5496C5789C9BD2745F5E1CA5D6D04_gshared (GenericEqualityComparer_1_t274846047EBEE29EFC30CB76E6BFB35CE5BD255A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = Vector2Int_GetHashCode_mA3B6135FA770AF0C171319B50D9B913657230EB7_inline((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m6BF4446AD28F115AB7FC5A19A9327D48BFAA4922_gshared (GenericEqualityComparer_1_t274846047EBEE29EFC30CB76E6BFB35CE5BD255A* __this, Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* ___0_array, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_10 = ___1_value;
		bool L_11;
		L_11 = Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m3C321BFCF12C05BCCC4707FD114D1874F0C0E331_gshared (GenericEqualityComparer_1_t274846047EBEE29EFC30CB76E6BFB35CE5BD255A* __this, Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* ___0_array, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Vector2IntU5BU5D_tF9E2BDAC11B246DF7EEB9137B826A0CBEBD59534* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_10 = ___1_value;
		bool L_11;
		L_11 = Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mDC020946A77BE4420C49CFCC5FE3E726A8C4D334_gshared (GenericEqualityComparer_1_t274846047EBEE29EFC30CB76E6BFB35CE5BD255A* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t274846047EBEE29EFC30CB76E6BFB35CE5BD255A*)((GenericEqualityComparer_1_t274846047EBEE29EFC30CB76E6BFB35CE5BD255A*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m6C6AD5452E13ED59267E969BA1F32E9837BA83F2_gshared (GenericEqualityComparer_1_t274846047EBEE29EFC30CB76E6BFB35CE5BD255A* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mAEB716330D8612A50D7E4A81885922513396192C_gshared (GenericEqualityComparer_1_t274846047EBEE29EFC30CB76E6BFB35CE5BD255A* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m3BA5AD03F5C7ADB03D2A079658A7BE37A71B971A((EqualityComparer_1_t3584A3B82B794F38A122BE591C2DA6F983EDA6ED*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m4019D405B404319D7D9C2C2EA4B502E230E19736_gshared (GenericEqualityComparer_1_t2F92BDECDF9B3169B85ACF988F28437C9D2DFEDE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_x, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_y;
		bool L_3;
		L_3 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mD8C183713ED8CD5E4469F6E9F082A211B16E7632_gshared (GenericEqualityComparer_1_t2F92BDECDF9B3169B85ACF988F28437C9D2DFEDE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m15D0D2F3EDE5478EC15CEC53368BCDA2DBCFE2FF_gshared (GenericEqualityComparer_1_t2F92BDECDF9B3169B85ACF988F28437C9D2DFEDE* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_value;
		bool L_11;
		L_11 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m118C95BC44CE355DFF2462DB76DA4663F24308C5_gshared (GenericEqualityComparer_1_t2F92BDECDF9B3169B85ACF988F28437C9D2DFEDE* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___0_array, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_value;
		bool L_11;
		L_11 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m67B084D2DE2C9635B8A7BA146EF0A0A57F73F115_gshared (GenericEqualityComparer_1_t2F92BDECDF9B3169B85ACF988F28437C9D2DFEDE* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t2F92BDECDF9B3169B85ACF988F28437C9D2DFEDE*)((GenericEqualityComparer_1_t2F92BDECDF9B3169B85ACF988F28437C9D2DFEDE*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mC3D1855D62D0C1C551E2384CB7564F6205863256_gshared (GenericEqualityComparer_1_t2F92BDECDF9B3169B85ACF988F28437C9D2DFEDE* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m5D4CD4C03630B05DB678F291FF5BAC57B4D917AA_gshared (GenericEqualityComparer_1_t2F92BDECDF9B3169B85ACF988F28437C9D2DFEDE* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m437FE206AB9739DFD095918C886C07A01E5AE624((EqualityComparer_1_t1F3F605A9175C681B32670E6F821ED336C3693F6*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m2E30830E84F1EEB9DF11253F511B14F9BCC01F85_gshared (GenericEqualityComparer_1_tFF25D57B3C68FAF91CA76B5859014919EAA4F468* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_x, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_2 = ___1_y;
		bool L_3;
		L_3 = Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m10069EFA2E646F52C937A9A6DAC135F5B3313CC6_gshared (GenericEqualityComparer_1_tFF25D57B3C68FAF91CA76B5859014919EAA4F468* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = Vector3Int_GetHashCode_mFAA200CFE26F006BEE6F9A65AFD0AC8C49D730EA_inline((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m71B7B6A0A6F2B34DD55B4DF78A8CDC31ADD94EAC_gshared (GenericEqualityComparer_1_tFF25D57B3C68FAF91CA76B5859014919EAA4F468* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___0_array, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_10 = ___1_value;
		bool L_11;
		L_11 = Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m0BB77388A3AA4F5B99CA2696B9481D79B2C5EC29_gshared (GenericEqualityComparer_1_tFF25D57B3C68FAF91CA76B5859014919EAA4F468* __this, Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* ___0_array, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Vector3IntU5BU5D_t7A7C64EB93B0E0C1989C82C3D0A003294FC6EC5E* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_10 = ___1_value;
		bool L_11;
		L_11 = Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m79B7E9B693D16B61ABD3927131BC113E70C10CFA_gshared (GenericEqualityComparer_1_tFF25D57B3C68FAF91CA76B5859014919EAA4F468* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_tFF25D57B3C68FAF91CA76B5859014919EAA4F468*)((GenericEqualityComparer_1_tFF25D57B3C68FAF91CA76B5859014919EAA4F468*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mBD950CD5D3B93D02FEB6300E176E6FCD43E394D8_gshared (GenericEqualityComparer_1_tFF25D57B3C68FAF91CA76B5859014919EAA4F468* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m98AF938CFFB1F2011CFEA65381985334CCFB6A4C_gshared (GenericEqualityComparer_1_tFF25D57B3C68FAF91CA76B5859014919EAA4F468* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_mA8BD8C91036404C77FB26DBD5CF8D9158BEA27F7((EqualityComparer_1_tE6E8D94B4D1DB3845EC548C4F693E989CCEBEE09*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mFE0FBC81BB68C70A07FFC893C7A873F301D2685F_gshared (GenericEqualityComparer_1_t4D917B455876275A430295BFEA9141506F7F6C5E* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_x, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_y;
		bool L_3;
		L_3 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m68BA0099ED9ABC8C51E9042EE0F643E38F1E4211_gshared (GenericEqualityComparer_1_t4D917B455876275A430295BFEA9141506F7F6C5E* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m2C79CE0153463808BE19051543A6C1C0348128B2_gshared (GenericEqualityComparer_1_t4D917B455876275A430295BFEA9141506F7F6C5E* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___1_value;
		bool L_11;
		L_11 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m3AF1A8F404337EDA66D712A763D65E30C8F33DB1_gshared (GenericEqualityComparer_1_t4D917B455876275A430295BFEA9141506F7F6C5E* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_array, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_8 = ___0_array;
		int32_t L_9 = V_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___1_value;
		bool L_11;
		L_11 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mEE8A94027B83BC0D523E7BFEE05B80C4F24BDDE4_gshared (GenericEqualityComparer_1_t4D917B455876275A430295BFEA9141506F7F6C5E* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t4D917B455876275A430295BFEA9141506F7F6C5E*)((GenericEqualityComparer_1_t4D917B455876275A430295BFEA9141506F7F6C5E*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m164CD355BF748F9B4F65BB3A2CFC95A948FBFBA5_gshared (GenericEqualityComparer_1_t4D917B455876275A430295BFEA9141506F7F6C5E* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m7BA3BF81448BB185F38857A88B1499C0F931999B_gshared (GenericEqualityComparer_1_t4D917B455876275A430295BFEA9141506F7F6C5E* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m672764616716C926350B9E69C41621978F32E496((EqualityComparer_1_tBD6B7C36607558DF82D5B7841A00BF6FE6954F49*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mD264466B1FE53CD82E2CA322F99A2E5A865A33DB_gshared (GenericEqualityComparer_1_t08617A8C8CA8853BD5FAD9F4143C20773FF5E14D* __this, Il2CppFullySharedGenericAny ___0_x, Il2CppFullySharedGenericAny ___1_y, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_7 = L_0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_x : &___0_x), SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_0);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_y : &___1_y), SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_2);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_y : &___1_y), SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE);
		bool L_6;
		L_6 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 0), il2cpp_rgctx_method(method->klass->rgctx_data, 2), L_5, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_x : &___0_x), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_4: *(void**)L_4));
		return L_6;
	}

IL_001f:
	{
		return (bool)0;
	}

IL_0021:
	{
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_y : &___1_y), SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE);
		bool L_8 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_7);
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		return (bool)0;
	}

IL_002b:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m7D577247CF2FC1300153659D0373351DBC19B499_gshared (GenericEqualityComparer_1_t08617A8C8CA8853BD5FAD9F4143C20773FF5E14D* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_obj : &___0_obj), SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		int32_t L_3;
		L_3 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 0), il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_2, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___0_obj : &___0_obj));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_m7BCD81D55AE0E06CC5A4AC0B168EE07F2EDE3F51_gshared (GenericEqualityComparer_1_t08617A8C8CA8853BD5FAD9F4143C20773FF5E14D* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	void* L_23 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE);
	const Il2CppFullySharedGenericAny L_8 = L_2;
	const Il2CppFullySharedGenericAny L_18 = L_2;
	const Il2CppFullySharedGenericAny L_22 = L_2;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_2);
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = ___2_startIndex;
		V_1 = L_4;
		goto IL_0025;
	}

IL_0011:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE);
		bool L_9 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_8);
		if (L_9)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_10 = V_1;
		return L_10;
	}

IL_0021:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0025:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_005e;
	}

IL_002b:
	{
		int32_t L_14 = ___2_startIndex;
		V_2 = L_14;
		goto IL_005a;
	}

IL_002f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = ___0_array;
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		il2cpp_codegen_memcpy(L_18, (L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)), SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_18);
		if (!L_19)
		{
			goto IL_0056;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = ___0_array;
		int32_t L_21 = V_2;
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE);
		bool L_24;
		L_24 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 0), il2cpp_rgctx_method(method->klass->rgctx_data, 2), L_23, (void*)((Il2CppFullySharedGenericAny*)(L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_22: *(void**)L_22));
		if (!L_24)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_25 = V_2;
		return L_25;
	}

IL_0056:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_005a:
	{
		int32_t L_27 = V_2;
		int32_t L_28 = V_0;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_mDF6FD89AA9AAF716182441BB9D95CA594679C05B_gshared (GenericEqualityComparer_1_t08617A8C8CA8853BD5FAD9F4143C20773FF5E14D* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	void* L_23 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE);
	const Il2CppFullySharedGenericAny L_8 = L_2;
	const Il2CppFullySharedGenericAny L_18 = L_2;
	const Il2CppFullySharedGenericAny L_22 = L_2;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_2);
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4 = ___2_startIndex;
		V_1 = L_4;
		goto IL_0027;
	}

IL_0013:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE);
		bool L_9 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_8);
		if (L_9)
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_10 = V_1;
		return L_10;
	}

IL_0023:
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0027:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0013;
		}
	}
	{
		goto IL_0060;
	}

IL_002d:
	{
		int32_t L_14 = ___2_startIndex;
		V_2 = L_14;
		goto IL_005c;
	}

IL_0031:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = ___0_array;
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		il2cpp_codegen_memcpy(L_18, (L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)), SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0), L_18);
		if (!L_19)
		{
			goto IL_0058;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = ___0_array;
		int32_t L_21 = V_2;
		il2cpp_codegen_memcpy(L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_t9F4D0926BFA5B7A66DD70C73E7ED7CF79FA81EBE);
		bool L_24;
		L_24 = ConstrainedFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 0), il2cpp_rgctx_method(method->klass->rgctx_data, 2), L_23, (void*)((Il2CppFullySharedGenericAny*)(L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? L_22: *(void**)L_22));
		if (!L_24)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_25 = V_2;
		return L_25;
	}

IL_0058:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
	}

IL_005c:
	{
		int32_t L_27 = V_2;
		int32_t L_28 = V_0;
		if ((((int32_t)L_27) >= ((int32_t)L_28)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m990BEDB8EDE7046FD1793E622217E34256C963E9_gshared (GenericEqualityComparer_1_t08617A8C8CA8853BD5FAD9F4143C20773FF5E14D* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_t08617A8C8CA8853BD5FAD9F4143C20773FF5E14D*)((GenericEqualityComparer_1_t08617A8C8CA8853BD5FAD9F4143C20773FF5E14D*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mE66ABF1DB1E7CEA7FC0A4C6D66EF9BC25D358C6C_gshared (GenericEqualityComparer_1_t08617A8C8CA8853BD5FAD9F4143C20773FF5E14D* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_m1E6EF9DC694F446196A5C8A35521AD833FE2BBFB_gshared (GenericEqualityComparer_1_t08617A8C8CA8853BD5FAD9F4143C20773FF5E14D* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_mA1ED0D0FEC4DD8AE6B9E688EE01DAB049612D1D4_gshared (GenericEqualityComparer_1_tC800D8708E9571E11FF639BC805D64B6AA6F9988* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_x, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___1_y, const RuntimeMethod* method) 
{
	{
	}
	{
	}
	{
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_2 = ___1_y;
		bool L_3;
		L_3 = CachedCodeEntryKey_Equals_m55F9ED97CB9AF357034A75C2FDB8498FC55D3AF0((&___0_x), L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_mC28EE3779A09D9760506DC0BC6033F4CA9B7708C_gshared (GenericEqualityComparer_1_tC800D8708E9571E11FF639BC805D64B6AA6F9988* __this, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___0_obj, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1;
		L_1 = CachedCodeEntryKey_GetHashCode_m253B53C100F840B987A487020F02184019D776DE((&___0_obj), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_IndexOf_mF666DA2418355540ED070064E875920A05686EEF_gshared (GenericEqualityComparer_1_tC800D8708E9571E11FF639BC805D64B6AA6F9988* __this, CachedCodeEntryKeyU5BU5D_tC40BCA06B0B1553C015B809472A7A59A50E6C7E9* ___0_array, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005a;
	}

IL_002f:
	{
		CachedCodeEntryKeyU5BU5D_tC40BCA06B0B1553C015B809472A7A59A50E6C7E9* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		CachedCodeEntryKeyU5BU5D_tC40BCA06B0B1553C015B809472A7A59A50E6C7E9* L_8 = ___0_array;
		int32_t L_9 = V_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_10 = ___1_value;
		bool L_11;
		L_11 = CachedCodeEntryKey_Equals_m55F9ED97CB9AF357034A75C2FDB8498FC55D3AF0(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0056:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005a:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002f;
		}
	}

IL_005e:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_LastIndexOf_m709A87E6F9E6B0E35A1B8E07D19700928C28B0F1_gshared (GenericEqualityComparer_1_tC800D8708E9571E11FF639BC805D64B6AA6F9988* __this, CachedCodeEntryKeyU5BU5D_tC40BCA06B0B1553C015B809472A7A59A50E6C7E9* ___0_array, CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_startIndex;
		int32_t L_1 = ___3_count;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		goto IL_002d;
	}

IL_002d:
	{
		int32_t L_3 = ___2_startIndex;
		V_2 = L_3;
		goto IL_005c;
	}

IL_0031:
	{
		CachedCodeEntryKeyU5BU5D_tC40BCA06B0B1553C015B809472A7A59A50E6C7E9* L_4 = ___0_array;
		int32_t L_5 = V_2;
		int32_t L_6 = L_5;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
	}
	{
		CachedCodeEntryKeyU5BU5D_tC40BCA06B0B1553C015B809472A7A59A50E6C7E9* L_8 = ___0_array;
		int32_t L_9 = V_2;
		CachedCodeEntryKey_t8A54BDD6E52145D17DB1A2EB0CE0B4D4CB112F31 L_10 = ___1_value;
		bool L_11;
		L_11 = CachedCodeEntryKey_Equals_m55F9ED97CB9AF357034A75C2FDB8498FC55D3AF0(((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_11)
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_12 = V_2;
		return L_12;
	}

IL_0058:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
	}

IL_005c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)L_15)))
		{
			goto IL_0031;
		}
	}

IL_0060:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GenericEqualityComparer_1_Equals_m0497B9D3FB82DB8590EB7B67CB8E3533B2FCB3A8_gshared (GenericEqualityComparer_1_tC800D8708E9571E11FF639BC805D64B6AA6F9988* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(GenericEqualityComparer_1_tC800D8708E9571E11FF639BC805D64B6AA6F9988*)((GenericEqualityComparer_1_tC800D8708E9571E11FF639BC805D64B6AA6F9988*)IsInstClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 5)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GenericEqualityComparer_1_GetHashCode_m97B648D48F3453BB4959FCA5B60D549684FB210F_gshared (GenericEqualityComparer_1_tC800D8708E9571E11FF639BC805D64B6AA6F9988* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3((RuntimeObject*)__this, NULL);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GenericEqualityComparer_1__ctor_mFBD41D5D9C43279234C6FDD37B180842E01B5D2A_gshared (GenericEqualityComparer_1_tC800D8708E9571E11FF639BC805D64B6AA6F9988* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_mCB1456765E196FA81FA3BFC84A2909A462230CA4((EqualityComparer_1_tC917CEC1FB17ACA5B9D31EB19EFCA85BA47F45F1*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
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
void GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_Multicast(GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* currentDelegate = reinterpret_cast<GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_container, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_OpenStaticInvoker(GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_container, il2cppRetVal);
}
void GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_ClosedStaticInvoker(GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_container, il2cppRetVal);
}
void GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_ClosedInstInvoker(GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_container, il2cppRetVal);
}
void GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_OpenInstInvoker(GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_container, il2cppRetVal);
}
void GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_OpenVirtualInvoker(GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0_container, il2cppRetVal);
}
void GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_OpenInterfaceInvoker(GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0_container, il2cppRetVal);
}
void GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_OpenGenericVirtualInvoker(GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_container, il2cppRetVal);
}
void GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_OpenGenericInterfaceInvoker(GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0_container, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetClassValueAction__ctor_m77857F27480265EC4F68B5964C56A0397951A9D0_gshared (GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetClassValueAction_Invoke_mC1959AA150BD93B52DF72F534318E19818911E90_gshared (GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* __this, Il2CppFullySharedGenericAny ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_container, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GetStructValueAction_Invoke_m6DFA81D13EC787F1ADE1F0915B144080044D8472_Multicast(GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39* currentDelegate = reinterpret_cast<GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_container, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void GetStructValueAction_Invoke_m6DFA81D13EC787F1ADE1F0915B144080044D8472_OpenStaticInvoker(GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_container, il2cppRetVal);
}
void GetStructValueAction_Invoke_m6DFA81D13EC787F1ADE1F0915B144080044D8472_ClosedStaticInvoker(GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_container, il2cppRetVal);
}
void GetStructValueAction_Invoke_m6DFA81D13EC787F1ADE1F0915B144080044D8472_ClosedInstInvoker(GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_container, il2cppRetVal);
}
void GetStructValueAction_Invoke_m6DFA81D13EC787F1ADE1F0915B144080044D8472_OpenInstInvoker(GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_container, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetStructValueAction__ctor_m8973674F88313BE08D424879CC8063F7E58573A1_gshared (GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&GetStructValueAction_Invoke_m6DFA81D13EC787F1ADE1F0915B144080044D8472_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&GetStructValueAction_Invoke_m6DFA81D13EC787F1ADE1F0915B144080044D8472_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&GetStructValueAction_Invoke_m6DFA81D13EC787F1ADE1F0915B144080044D8472_OpenInstInvoker;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&GetStructValueAction_Invoke_m6DFA81D13EC787F1ADE1F0915B144080044D8472_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&GetStructValueAction_Invoke_m6DFA81D13EC787F1ADE1F0915B144080044D8472_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetStructValueAction_Invoke_m6DFA81D13EC787F1ADE1F0915B144080044D8472_gshared (GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_container, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_Multicast(Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* __this, Il2CppFullySharedGenericAny ___0__this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* currentDelegate = reinterpret_cast<Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0__this, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_OpenStaticInvoker(Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* __this, Il2CppFullySharedGenericAny ___0__this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0__this, il2cppRetVal);
}
void Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_ClosedStaticInvoker(Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* __this, Il2CppFullySharedGenericAny ___0__this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0__this, il2cppRetVal);
}
void Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_ClosedInstInvoker(Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* __this, Il2CppFullySharedGenericAny ___0__this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0__this, il2cppRetVal);
}
void Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_OpenInstInvoker(Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* __this, Il2CppFullySharedGenericAny ___0__this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0__this, il2cppRetVal);
}
void Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_OpenVirtualInvoker(Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* __this, Il2CppFullySharedGenericAny ___0__this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___0__this, il2cppRetVal);
}
void Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_OpenInterfaceInvoker(Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* __this, Il2CppFullySharedGenericAny ___0__this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___0__this, il2cppRetVal);
}
void Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_OpenGenericVirtualInvoker(Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* __this, Il2CppFullySharedGenericAny ___0__this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0__this, il2cppRetVal);
}
void Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_OpenGenericInterfaceInvoker(Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* __this, Il2CppFullySharedGenericAny ___0__this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___0__this, il2cppRetVal);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Getter_2__ctor_m16D690745E6A210DEBDBAD68966522F012A07999_gshared (Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl = (intptr_t)&Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_OpenInterfaceInvoker;
					else
						__this->___invoke_impl = (intptr_t)&Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl = (intptr_t)&Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_OpenInstInvoker;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Getter_2_Invoke_m2B7803CA2CAB952135613AAE6ED45B9FB9778890_gshared (Getter_2_t1C9E25FA1D95753B6B5480577F043E5EF85CC0D8* __this, Il2CppFullySharedGenericAny ___0__this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0__this, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCode64_1__cctor_m0DA4D191673E23A67D0C10C2A799D882F0C4CD7F_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(24, L_1);
		int64_t L_3;
		L_3 = BurstRuntime_HashStringWithFNV1A64_m3E38919BF51D34D084240B8B6EFB6A753411A335(L_2, NULL);
		((HashCode64_1_tAACED5C219BCE704BB23DEE5411688A66F4FA312_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___Value = L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCode64_1__cctor_mBF8ECF9DBE2EDE7D126C320A8DEE93A2EAA9C7EC_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(24, L_1);
		int64_t L_3;
		L_3 = BurstRuntime_HashStringWithFNV1A64_m3E38919BF51D34D084240B8B6EFB6A753411A335(L_2, NULL);
		((HashCode64_1_t258221577FA59C0B1D9B188C325409BB62050DAB_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___Value = L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashCode64_1__cctor_m1A47E3C4E4C8DF53C16ACBAFD4858C8E736B2A49_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(24, L_1);
		int64_t L_3;
		L_3 = BurstRuntime_HashStringWithFNV1A64_m3E38919BF51D34D084240B8B6EFB6A753411A335(L_2, NULL);
		((HashCode64_1_t25B99E9F7F998CC07CCA13124E03920779BFF803_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___Value = L_3;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSetPropertyBag_1_get_InstantiationKind_m542C648FC9442316698457076FBC5B8C17656097_gshared (HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* HashSetPropertyBag_1_Instantiate_m40B346AADC5FFAA079D2DD84ED0FD4843585E19E_gshared (HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED* __this, const RuntimeMethod* method) 
{
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetPropertyBag_1__ctor_m97B9FF0A7C7B1247E10A3C8A5114080B3A6571D1_gshared (HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0;
		L_0 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mD01A3150BFA527119EBAB7922A64F4BB94CC293D(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD01A3150BFA527119EBAB7922A64F4BB94CC293D_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1;
		L_1 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB61A4173FD9D000867524949D5E105DE2C1B7D54_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1;
		L_1 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mC8EB7E5E12FA6F38890EB2435FF06B81B3BBBB0A(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3F29A5426149F521CEE6900B9A4097810124ED8E_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1;
		L_1 = EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mA74E823F988E9515688F756D0DD9223AE0248596(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA74E823F988E9515688F756D0DD9223AE0248596_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mD01A3150BFA527119EBAB7922A64F4BB94CC293D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m2D30A02470631B29664BF3981E958399DCD05E59(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_7 = V_0;
		HashSet_1_CopyFrom_m76A9036184E9E454D1A7553EF88A707525F27A8A(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m8DCCD8BD41DA4D933EB974678D99E0FFEAC5A21C(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_m324C75B2D781E7BF38384F10C30AEC7668EB7CDA(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_16 = __this->____slots;
		int32_t L_17 = __this->____count;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/L_17))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_mFDA37D3F003EF52B5E93673AE3ED38E04D5DB500(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m0D5F0A5862948121CF0A6F4D421BD98A3BE64DA3_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m76A9036184E9E454D1A7553EF88A707525F27A8A_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_0 = ___0_source;
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_3 = ___0_source;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		V_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_8 = ___0_source;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____buckets;
		RuntimeObject* L_10;
		L_10 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_9, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_11 = ___0_source;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_12 = L_11->____slots;
		RuntimeObject* L_13;
		L_13 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_12, NULL);
		__this->____slots = ((SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_14 = ___0_source;
		int32_t L_15 = L_14->____lastIndex;
		__this->____lastIndex = L_15;
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_16 = ___0_source;
		int32_t L_17 = L_16->____freeList;
		__this->____freeList = L_17;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_18 = ___0_source;
		int32_t L_19 = L_18->____lastIndex;
		V_2 = L_19;
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_20 = ___0_source;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_21 = L_20->____slots;
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = HashSet_1_Initialize_m8DCCD8BD41DA4D933EB974678D99E0FFEAC5A21C(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_24 = V_3;
		int32_t L_25 = V_5;
		int32_t L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode;
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_6;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_30 = V_3;
		int32_t L_31 = V_5;
		int32_t L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		HashSet_1_AddValue_m6D3D24A6F1E5CB0ABD85841349382CE64EF2F690(__this, L_28, L_29, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_37 = V_4;
		__this->____lastIndex = L_37;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		__this->____count = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mC8EB7E5E12FA6F38890EB2435FF06B81B3BBBB0A_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mD01A3150BFA527119EBAB7922A64F4BB94CC293D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m8DCCD8BD41DA4D933EB974678D99E0FFEAC5A21C(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m8DCCFBE982C11AAB3D29ED804447945A4FFC110B_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m43D6B3CAAED91ED49E0194803AC6BA67ADF6439B(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m8C50FFBACD63C1AA40F63C5C9CAA1811F5988F97(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		int32_t L_8 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_9 = V_2;
		int32_t L_10 = V_3;
		int32_t L_11 = ((L_9)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		int32_t L_17 = ___0_item;
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_20 = V_2;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_006b:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_23 = V_2;
		int32_t L_24 = V_3;
		int32_t L_25 = ((L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mD398237C598AECB4793962F1E4DBA8BBA5DBE38B_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m3C27BBD4EFB01EA7A8B2DE3F0E12CD9E449950DF(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF4C8539185EBCAAE0803DF227E006B701007DD65_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m8C50FFBACD63C1AA40F63C5C9CAA1811F5988F97(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		V_1 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_5 = __this->____slots;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_10 = V_4;
		int32_t L_11 = V_5;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		int32_t L_18 = ___0_item;
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____buckets;
		int32_t L_22 = V_1;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_23 = V_4;
		int32_t L_24 = V_5;
		int32_t L_25 = ((L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22), (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_26 = V_4;
		int32_t L_27 = V_2;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_28 = V_4;
		int32_t L_29 = V_5;
		int32_t L_30 = ((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29)))->___next;
		((L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_27)))->___next = L_30;
	}

IL_00a7:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_31 = V_4;
		int32_t L_32 = V_5;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_33 = V_4;
		int32_t L_34 = V_5;
		int32_t L_35 = __this->____freeList;
		((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___next = L_35;
		int32_t L_36 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = __this->____count;
		if (L_38)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_39 = V_5;
		__this->____freeList = L_39;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_40 = V_3;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_41 = V_4;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_0135:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_5;
		V_2 = L_44;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_45 = V_4;
		int32_t L_46 = V_5;
		int32_t L_47 = ((L_45)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_46)))->___next;
		V_5 = L_47;
	}

IL_014c:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mB717B519B4FBD92488427A6798B491B5FA5FB185_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mCF631038A37231EECB6D89FD9C92A6C2F1D8A3DF_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 HashSet_1_GetEnumerator_m55BD13C9FD783AFB7B5B8F018E3008E05137A360_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFE3FD5858B2622B0DB3A98E965A87270E087E292((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mFB5AA335BD4906485CB12ED2FBFFAF51FA3F1EBB_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFE3FD5858B2622B0DB3A98E965A87270E087E292((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_mE1616E3A1216DC33957C20680B934BC088CECEBA_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mFE3FD5858B2622B0DB3A98E965A87270E087E292((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t28FAA6D38864A25718956AF2B8AFCB3B8CCF4376 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m225089E5EADAC464572D74B63933A7D9ACD63349_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = __this->____count;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 31), (uint32_t)L_12);
		V_0 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_0;
		HashSet_1_CopyTo_mAFBFB4E9CC9508A1AE5E2FD2A63AEE373D77C409(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_16, L_18, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_mE05F83949ED3974F2CB3209AA5925C2E0B62BF4B_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_11 = (SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)(SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_m43D6B3CAAED91ED49E0194803AC6BA67ADF6439B(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->____siInfo;
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_27;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_m43D6B3CAAED91ED49E0194803AC6BA67ADF6439B(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m324C75B2D781E7BF38384F10C30AEC7668EB7CDA_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				int32_t L_7;
				L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				int32_t L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_m43D6B3CAAED91ED49E0194803AC6BA67ADF6439B(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mAFBFB4E9CC9508A1AE5E2FD2A63AEE373D77C409_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m3C27BBD4EFB01EA7A8B2DE3F0E12CD9E449950DF(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m3C27BBD4EFB01EA7A8B2DE3F0E12CD9E449950DF_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = ___0_array;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = ___2_count;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = ___0_array;
		int32_t L_16 = ___1_arrayIndex;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_18 = __this->____slots;
		int32_t L_19 = V_1;
		int32_t L_20 = ((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)))->___hashCode;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_24 = __this->____slots;
		int32_t L_25 = V_1;
		int32_t L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___value;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23))), (int32_t)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0093:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->____lastIndex;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m14A96615AA5F5F1497A6E01A5DF2BF13F022325E_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		int32_t L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* L_8 = ___0_match;
		int32_t L_9 = V_2;
		bool L_10;
		L_10 = Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_mF4C8539185EBCAAE0803DF227E006B701007DD65(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m2DD3885BF267920FC8AD5DCD6EA6A6250ABFE3AD_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mFDA37D3F003EF52B5E93673AE3ED38E04D5DB500_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_5 = (SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)(SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		int32_t L_15 = L_14;
		Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8 L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (Slot_t22B135B722F7D592A58FAEDAD31DDA9BB7CD2FC8)L_16);
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_17 = V_1;
		int32_t L_18 = V_3;
		int32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_21 = V_1;
		int32_t L_22 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m8DCCD8BD41DA4D933EB974678D99E0FFEAC5A21C_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_5 = (SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)(SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m7EE99125BBB78B18669A0B9760A5F6E4A01454FF_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m6B2495F23F97908BC4EE3B987C1F16093E922C62(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m6B2495F23F97908BC4EE3B987C1F16093E922C62_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_1 = (SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)(SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_3 = __this->____slots;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_12 = V_0;
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m43D6B3CAAED91ED49E0194803AC6BA67ADF6439B_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m8DCCD8BD41DA4D933EB974678D99E0FFEAC5A21C(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		int32_t L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m8C50FFBACD63C1AA40F63C5C9CAA1811F5988F97(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		V_1 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		V_2 = 0;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_6 = __this->____slots;
		V_3 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_11 = V_3;
		int32_t L_12 = V_5;
		int32_t L_13 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_16 = V_3;
		int32_t L_17 = V_5;
		int32_t L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		int32_t L_19 = ___0_value;
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_22 = V_3;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_25 = V_3;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_008b:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_31 = V_3;
		int32_t L_32 = V_4;
		int32_t L_33 = ((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_35 = V_3;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m7EE99125BBB78B18669A0B9760A5F6E4A01454FF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00d9:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_41 = V_3;
		int32_t L_42 = V_4;
		int32_t L_43 = V_0;
		((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_44 = V_3;
		int32_t L_45 = V_4;
		int32_t L_46 = ___0_value;
		((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_47 = V_3;
		int32_t L_48 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m6D3D24A6F1E5CB0ABD85841349382CE64EF2F690_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_index, int32_t ___1_hashCode, int32_t ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_0 = ((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_2 = __this->____slots;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_hashCode;
		((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode = L_4;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_5 = __this->____slots;
		int32_t L_6 = ___0_index;
		int32_t L_7 = ___2_value;
		((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value = L_7;
		SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* L_8 = __this->____slots;
		int32_t L_9 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___next = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		int32_t L_15 = V_0;
		int32_t L_16 = ___0_index;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m2D30A02470631B29664BF3981E958399DCD05E59_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___0_set1, HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_0 = ___0_set1;
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_m2DD3885BF267920FC8AD5DCD6EA6A6250ABFE3AD_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_2 = ___1_set2;
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_m2DD3885BF267920FC8AD5DCD6EA6A6250ABFE3AD_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m8C50FFBACD63C1AA40F63C5C9CAA1811F5988F97_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		int32_t L_2 = ___0_item;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD2BBE225041537B7240E453D3E14991EB2169E2C_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_0;
		L_0 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mC1D71B789CC8CAEFE43A9271E144E1108BCCF6C3(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mC1D71B789CC8CAEFE43A9271E144E1108BCCF6C3_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_1;
		L_1 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m17CFB4C99A4231D352F55EBDF5ECA73CF22761BC_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_1;
		L_1 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m3EF0F0574098F7E0EE9B64C5D8A397BBCDF7E542(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m67F18797ADF615671341068504396819F0378201_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_1;
		L_1 = EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m493828D9E92664CB7484FD941FB0CA3713C0D04A(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m493828D9E92664CB7484FD941FB0CA3713C0D04A_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mC1D71B789CC8CAEFE43A9271E144E1108BCCF6C3(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m193FBE20CD13A08869C7A8081B81E6BE86550935(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* L_7 = V_0;
		HashSet_1_CopyFrom_mA5B09DE5581655D8D3A00EA36B780B3C27D2CD8A(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m31F84C6044D9CCD8FD7242686910F5D078494B3E(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_m0E9BB6D536A0AF0F32F2ADDAC67F738FC13C1ABE(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_16 = __this->____slots;
		int32_t L_17 = __this->____count;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/L_17))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_mE7FC0AB29C9B9433BDFE905769ECBBB4DF9D8A13(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA1D6FAD5A19FF7BBCB18B026E5DCC8FBC56CF1EA_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mA5B09DE5581655D8D3A00EA36B780B3C27D2CD8A_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* L_0 = ___0_source;
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* L_3 = ___0_source;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		V_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* L_8 = ___0_source;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____buckets;
		RuntimeObject* L_10;
		L_10 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_9, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* L_11 = ___0_source;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_12 = L_11->____slots;
		RuntimeObject* L_13;
		L_13 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_12, NULL);
		__this->____slots = ((SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* L_14 = ___0_source;
		int32_t L_15 = L_14->____lastIndex;
		__this->____lastIndex = L_15;
		HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* L_16 = ___0_source;
		int32_t L_17 = L_16->____freeList;
		__this->____freeList = L_17;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* L_18 = ___0_source;
		int32_t L_19 = L_18->____lastIndex;
		V_2 = L_19;
		HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* L_20 = ___0_source;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_21 = L_20->____slots;
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = HashSet_1_Initialize_m31F84C6044D9CCD8FD7242686910F5D078494B3E(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_24 = V_3;
		int32_t L_25 = V_5;
		int32_t L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode;
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_6;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_30 = V_3;
		int32_t L_31 = V_5;
		int32_t L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		HashSet_1_AddValue_m8762D603210DF3B5F4BEE5F8318D0AA90B123255(__this, L_28, L_29, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_37 = V_4;
		__this->____lastIndex = L_37;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		__this->____count = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3EF0F0574098F7E0EE9B64C5D8A397BBCDF7E542_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mC1D71B789CC8CAEFE43A9271E144E1108BCCF6C3(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m31F84C6044D9CCD8FD7242686910F5D078494B3E(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m911005749040DBBBAEA48AB2544442477D60DA69_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mB6B9DAADF761C41B93B287BF0080CEF148C71CE9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m2F15233A7A19B52616B7E5602933D6D54804A8C8_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_mC7FB9D44EF9B75D89964DC508B4B08D8DA98339E_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m548D80B81ADCBF294D226593B44DA54BED6A59E0(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		int32_t L_8 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_9 = V_2;
		int32_t L_10 = V_3;
		int32_t L_11 = ((L_9)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		int32_t L_17 = ___0_item;
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_20 = V_2;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_006b:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_23 = V_2;
		int32_t L_24 = V_3;
		int32_t L_25 = ((L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mD9A719764C6AD05B45C46933DFCDB1633982F582_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_mEF3741D18A511024F43C94CA8801FF8B817564A1(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mDFCEB14892F55A02364004175560540A1AE648FE_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		int32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m548D80B81ADCBF294D226593B44DA54BED6A59E0(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		V_1 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_5 = __this->____slots;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_10 = V_4;
		int32_t L_11 = V_5;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_15 = V_4;
		int32_t L_16 = V_5;
		int32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		int32_t L_18 = ___0_item;
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____buckets;
		int32_t L_22 = V_1;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_23 = V_4;
		int32_t L_24 = V_5;
		int32_t L_25 = ((L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22), (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_26 = V_4;
		int32_t L_27 = V_2;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_28 = V_4;
		int32_t L_29 = V_5;
		int32_t L_30 = ((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29)))->___next;
		((L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_27)))->___next = L_30;
	}

IL_00a7:
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_31 = V_4;
		int32_t L_32 = V_5;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_33 = V_4;
		int32_t L_34 = V_5;
		int32_t L_35 = __this->____freeList;
		((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___next = L_35;
		int32_t L_36 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = __this->____count;
		if (L_38)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_39 = V_5;
		__this->____freeList = L_39;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_40 = V_3;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_41 = V_4;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_0135:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_5;
		V_2 = L_44;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_45 = V_4;
		int32_t L_46 = V_5;
		int32_t L_47 = ((L_45)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_46)))->___next;
		V_5 = L_47;
	}

IL_014c:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m6569C17BC1C7EE2A7D2AFF4110EE75938C4FB16A_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m112D61B883F1676BD89147017B0B92A3365E3476_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD HashSet_1_GetEnumerator_mD39261A9CC3EE28CF60F54E8040EEB40C1FFFBE4_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2DD667605D1D62A7C346404BBDDD45C06317D415((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mEF1AC63672C921288DE645B50C2F80DBAE4C7E3B_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2DD667605D1D62A7C346404BBDDD45C06317D415((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_mB88227896CE6CBB4D346FC82E65CE8057289864A_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2DD667605D1D62A7C346404BBDDD45C06317D415((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t5438B9989E702349A6790B901A8E6B408ED3B3CD L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m4C6DAB3CBA34555D9333B3E801CC8BAF8FDAC5C4_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = __this->____count;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_13 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 31), (uint32_t)L_12);
		V_0 = L_13;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_14 = V_0;
		HashSet_1_CopyTo_m5E9C3E42BDE27183590F0B9240E7217263C768F5(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___0_info;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_16, L_18, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_mE74055B9C53DDCE9F52C81E0B26B2A6888A0B83F_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_11 = (SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD*)(SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_18 = V_1;
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		int32_t L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_mB6B9DAADF761C41B93B287BF0080CEF148C71CE9(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_25 = V_1;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->____siInfo;
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_27;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m4F8BBB0C65C72E41F10A7F83E2963B71A631153C_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mB6B9DAADF761C41B93B287BF0080CEF148C71CE9(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m0E9BB6D536A0AF0F32F2ADDAC67F738FC13C1ABE_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				int32_t L_7;
				L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				int32_t L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_mB6B9DAADF761C41B93B287BF0080CEF148C71CE9(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m5E9C3E42BDE27183590F0B9240E7217263C768F5_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, const RuntimeMethod* method) 
{
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_mEF3741D18A511024F43C94CA8801FF8B817564A1(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mEF3741D18A511024F43C94CA8801FF8B817564A1_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_13 = ___0_array;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = ___2_count;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_15 = ___0_array;
		int32_t L_16 = ___1_arrayIndex;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_18 = __this->____slots;
		int32_t L_19 = V_1;
		int32_t L_20 = ((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)))->___hashCode;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_24 = __this->____slots;
		int32_t L_25 = V_1;
		int32_t L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___value;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23))), (int32_t)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0093:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->____lastIndex;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m89D4CFE131C72B4CFE03B8ADEC27B8328BE28290_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		int32_t L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* L_8 = ___0_match;
		int32_t L_9 = V_2;
		bool L_10;
		L_10 = Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_mDFCEB14892F55A02364004175560540A1AE648FE(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mB96B4907FFD0439B94352B52CFF0D360A73D40EB_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mE7FC0AB29C9B9433BDFE905769ECBBB4DF9D8A13_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_5 = (SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD*)(SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		int32_t L_15 = L_14;
		Slot_t0A95045068CA69D35855DB49026245B2D7F2E059 L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (Slot_t0A95045068CA69D35855DB49026245B2D7F2E059)L_16);
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_17 = V_1;
		int32_t L_18 = V_3;
		int32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_21 = V_1;
		int32_t L_22 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m31F84C6044D9CCD8FD7242686910F5D078494B3E_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_5 = (SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD*)(SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mD309C97A8D409A74963F5260149DBD92E73C0EBD_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m20B7BE46BF50D1068919AD2B1447B5C189A5D30A(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m20B7BE46BF50D1068919AD2B1447B5C189A5D30A_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_1 = (SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD*)(SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_3 = __this->____slots;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_12 = V_0;
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mB6B9DAADF761C41B93B287BF0080CEF148C71CE9_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m31F84C6044D9CCD8FD7242686910F5D078494B3E(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		int32_t L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m548D80B81ADCBF294D226593B44DA54BED6A59E0(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		V_1 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		V_2 = 0;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_6 = __this->____slots;
		V_3 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_11 = V_3;
		int32_t L_12 = V_5;
		int32_t L_13 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_16 = V_3;
		int32_t L_17 = V_5;
		int32_t L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		int32_t L_19 = ___0_value;
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, int32_t, int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_22 = V_3;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_25 = V_3;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_008b:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_31 = V_3;
		int32_t L_32 = V_4;
		int32_t L_33 = ((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_35 = V_3;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_mD309C97A8D409A74963F5260149DBD92E73C0EBD(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00d9:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_41 = V_3;
		int32_t L_42 = V_4;
		int32_t L_43 = V_0;
		((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_44 = V_3;
		int32_t L_45 = V_4;
		int32_t L_46 = ___0_value;
		((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_47 = V_3;
		int32_t L_48 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m8762D603210DF3B5F4BEE5F8318D0AA90B123255_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_index, int32_t ___1_hashCode, int32_t ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_0 = ((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_2 = __this->____slots;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_hashCode;
		((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode = L_4;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_5 = __this->____slots;
		int32_t L_6 = ___0_index;
		int32_t L_7 = ___2_value;
		((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value = L_7;
		SlotU5BU5D_tF983180619181B43E8A87C70A9FC0D8456A499FD* L_8 = __this->____slots;
		int32_t L_9 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___next = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		int32_t L_15 = V_0;
		int32_t L_16 = ___0_index;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m193FBE20CD13A08869C7A8081B81E6BE86550935_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* ___0_set1, HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* L_0 = ___0_set1;
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_mB96B4907FFD0439B94352B52CFF0D360A73D40EB_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* L_2 = ___1_set2;
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_mB96B4907FFD0439B94352B52CFF0D360A73D40EB_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m548D80B81ADCBF294D226593B44DA54BED6A59E0_gshared (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		int32_t L_2 = ___0_item;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0;
		L_0 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9B0F380B2B34D1F340F5B4FAB8070229BE067917_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m30E9F91069377DDEFABD6C81559E24AD320D3A84(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mC13D3ADFE27A073EC3C583E9C926C801A7EE1DDD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1;
		L_1 = EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_mD320BA1FC2F52FBBD8EFB2C97BAC4E70B56DDAFD(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mD320BA1FC2F52FBBD8EFB2C97BAC4E70B56DDAFD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_m7F948A6D7605FADC9C80513D3CB1F21627E974E1(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_7 = V_0;
		HashSet_1_CopyFrom_m13E227A3D0F6C66092069932EBFFD303B7A2B5F7(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m5340441ADFFCE4FC7BEA14DD637B35C25CC47EBF(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_mCE1D0DC2EACB98D74562CA79EB0DB6B6A806510C(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_16 = __this->____slots;
		int32_t L_17 = __this->____count;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/L_17))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_mA48EDAF136B0C1BFBC90E61A5A5F8771F2F60806(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB4BE9A1DEE4567D48CA23C9ED1A8242B0B71C4EC_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m13E227A3D0F6C66092069932EBFFD303B7A2B5F7_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_0 = ___0_source;
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_3 = ___0_source;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		V_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_8 = ___0_source;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____buckets;
		RuntimeObject* L_10;
		L_10 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_9, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_11 = ___0_source;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_12 = L_11->____slots;
		RuntimeObject* L_13;
		L_13 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_12, NULL);
		__this->____slots = ((SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_14 = ___0_source;
		int32_t L_15 = L_14->____lastIndex;
		__this->____lastIndex = L_15;
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_16 = ___0_source;
		int32_t L_17 = L_16->____freeList;
		__this->____freeList = L_17;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_18 = ___0_source;
		int32_t L_19 = L_18->____lastIndex;
		V_2 = L_19;
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_20 = ___0_source;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_21 = L_20->____slots;
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = HashSet_1_Initialize_m5340441ADFFCE4FC7BEA14DD637B35C25CC47EBF(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_24 = V_3;
		int32_t L_25 = V_5;
		int32_t L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode;
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_6;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_30 = V_3;
		int32_t L_31 = V_5;
		RuntimeObject* L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		HashSet_1_AddValue_m20C9F0D67E5BFE2515651D37D880697363F6562F(__this, L_28, L_29, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_37 = V_4;
		__this->____lastIndex = L_37;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		__this->____count = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m30E9F91069377DDEFABD6C81559E24AD320D3A84_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_mAB3B1F14E6741A640E2FA9AE77D62C363B6FBA10(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m5340441ADFFCE4FC7BEA14DD637B35C25CC47EBF(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m7258E146F589909562A953D54AD7345A616528DC_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mC04293BBDC3046C251D90104C942B4576676EF79(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m75A6528F0B47448EB3B3A05EC379260E9BDFC2DD_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m9BACE52BFA0BD83C601529D3629118453E459BBB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		RuntimeObject* L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m194DF48C3A8D04814AEF65F316DF262AA89DB68F(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		int32_t L_8 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_9 = V_2;
		int32_t L_10 = V_3;
		int32_t L_11 = ((L_9)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_14 = V_2;
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		RuntimeObject* L_17 = ___0_item;
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_20 = V_2;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_006b:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_23 = V_2;
		int32_t L_24 = V_3;
		int32_t L_25 = ((L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mF4B39069AEE1A4EEB15ED91559241D950F3EE9F8_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m2C3002B96C50658CE5522C74A6B1F5599D922D61(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		RuntimeObject* L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_m194DF48C3A8D04814AEF65F316DF262AA89DB68F(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		V_1 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_5 = __this->____slots;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_10 = V_4;
		int32_t L_11 = V_5;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_15 = V_4;
		int32_t L_16 = V_5;
		RuntimeObject* L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		RuntimeObject* L_18 = ___0_item;
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____buckets;
		int32_t L_22 = V_1;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_23 = V_4;
		int32_t L_24 = V_5;
		int32_t L_25 = ((L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22), (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_26 = V_4;
		int32_t L_27 = V_2;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_28 = V_4;
		int32_t L_29 = V_5;
		int32_t L_30 = ((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29)))->___next;
		((L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_27)))->___next = L_30;
	}

IL_00a7:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_31 = V_4;
		int32_t L_32 = V_5;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___hashCode = (-1);
	}
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_33 = V_4;
		int32_t L_34 = V_5;
		RuntimeObject** L_35 = (RuntimeObject**)(&((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___value);
		il2cpp_codegen_initobj(L_35, sizeof(RuntimeObject*));
	}

IL_00d1:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_36 = V_4;
		int32_t L_37 = V_5;
		int32_t L_38 = __this->____freeList;
		((L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_37)))->___next = L_38;
		int32_t L_39 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		int32_t L_40 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_40, 1));
		int32_t L_41 = __this->____count;
		if (L_41)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_42 = V_5;
		__this->____freeList = L_42;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_43 = V_3;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_44 = V_4;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_45 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_45, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, method);
	}

IL_0135:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_5;
		V_2 = L_47;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_48 = V_4;
		int32_t L_49 = V_5;
		int32_t L_50 = ((L_48)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_49)))->___next;
		V_5 = L_50;
	}

IL_014c:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41CC85EEB7855CEFA3BC7A32F115387939318ED3_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_mF0024D8CEAE9F50AD481308A80AC1A6320C3553E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC9D698BB17611B2B5A3A805337647838FCAA26DE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6B8EC9FC82E94AD16FF208FDDD9C73D7397170B0_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC9D698BB17611B2B5A3A805337647838FCAA26DE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_mE1B4F5BEC5FEAAEAEC77BE8ED6177327DA64060F_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mC9D698BB17611B2B5A3A805337647838FCAA26DE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m4825222EFCC17409B9FA6121D4857A0AD7281F2A_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = __this->____count;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 31), (uint32_t)L_12);
		V_0 = L_13;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		HashSet_1_CopyTo_m5102D82155B190BF666DD92500756CC1CCBA2172(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___0_info;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_16, L_18, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_mAF26E4A7ED72AA389C7EB0EAA7645752CCBEBB60_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_11 = (SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)(SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = V_1;
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_mC04293BBDC3046C251D90104C942B4576676EF79(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = V_1;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->____siInfo;
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_27;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mC04293BBDC3046C251D90104C942B4576676EF79(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mCE1D0DC2EACB98D74562CA79EB0DB6B6A806510C_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				RuntimeObject* L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_mC04293BBDC3046C251D90104C942B4576676EF79(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m5102D82155B190BF666DD92500756CC1CCBA2172_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m2C3002B96C50658CE5522C74A6B1F5599D922D61(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m2C3002B96C50658CE5522C74A6B1F5599D922D61_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = ___0_array;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = ___2_count;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = ___0_array;
		int32_t L_16 = ___1_arrayIndex;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_18 = __this->____slots;
		int32_t L_19 = V_1;
		int32_t L_20 = ((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)))->___hashCode;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_24 = __this->____slots;
		int32_t L_25 = V_1;
		RuntimeObject* L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___value;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23))), (RuntimeObject*)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0093:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->____lastIndex;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m8D29E1EEF73BF771A3EDC41907FCA953D66543C2_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		RuntimeObject* L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* L_8 = ___0_match;
		RuntimeObject* L_9 = V_2;
		bool L_10;
		L_10 = Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_mF1D84C0A2829DDA2A0CEE1D82A5B999B5F6627CB(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mD54AFBFBD525862DC2F8F47071DA5B37CFDEA948_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_mA48EDAF136B0C1BFBC90E61A5A5F8771F2F60806_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_5 = (SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)(SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		int32_t L_15 = L_14;
		Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744 L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (Slot_t4BB8CC974E5E3453C5B4BD5E6DC16498D0EF7744)L_16);
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_17 = V_1;
		int32_t L_18 = V_3;
		int32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_21 = V_1;
		int32_t L_22 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m5340441ADFFCE4FC7BEA14DD637B35C25CC47EBF_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_5 = (SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)(SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mC01C0797260CF7FEBBC99C8245B0A31B1C2E5E56_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m38D352E6EBE6E50B1D407129115FC9DE6721C55C(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m38D352E6EBE6E50B1D407129115FC9DE6721C55C_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_1 = (SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)(SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_3 = __this->____slots;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_12 = V_0;
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mC04293BBDC3046C251D90104C942B4576676EF79_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m5340441ADFFCE4FC7BEA14DD637B35C25CC47EBF(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_m194DF48C3A8D04814AEF65F316DF262AA89DB68F(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		V_1 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		V_2 = 0;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_6 = __this->____slots;
		V_3 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_11 = V_3;
		int32_t L_12 = V_5;
		int32_t L_13 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_16 = V_3;
		int32_t L_17 = V_5;
		RuntimeObject* L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		RuntimeObject* L_19 = ___0_value;
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_22 = V_3;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_25 = V_3;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_008b:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_31 = V_3;
		int32_t L_32 = V_4;
		int32_t L_33 = ((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_35 = V_3;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_mC01C0797260CF7FEBBC99C8245B0A31B1C2E5E56(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00d9:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_41 = V_3;
		int32_t L_42 = V_4;
		int32_t L_43 = V_0;
		((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_44 = V_3;
		int32_t L_45 = V_4;
		RuntimeObject* L_46 = ___0_value;
		((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___value), (void*)L_46);
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_47 = V_3;
		int32_t L_48 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m20C9F0D67E5BFE2515651D37D880697363F6562F_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, int32_t ___0_index, int32_t ___1_hashCode, RuntimeObject* ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_0 = ((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_2 = __this->____slots;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_hashCode;
		((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode = L_4;
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_5 = __this->____slots;
		int32_t L_6 = ___0_index;
		RuntimeObject* L_7 = ___2_value;
		((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value), (void*)L_7);
		SlotU5BU5D_tF596AD324082C553DB364C768406A40BB3C85343* L_8 = __this->____slots;
		int32_t L_9 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___next = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		int32_t L_15 = V_0;
		int32_t L_16 = ___0_index;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m7F948A6D7605FADC9C80513D3CB1F21627E974E1_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___0_set1, HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_0 = ___0_set1;
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_mD54AFBFBD525862DC2F8F47071DA5B37CFDEA948_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* L_2 = ___1_set2;
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_mD54AFBFBD525862DC2F8F47071DA5B37CFDEA948_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m194DF48C3A8D04814AEF65F316DF262AA89DB68F_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_item;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		RuntimeObject* L_2 = ___0_item;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4058973F19EEF9E5FCFF05F3779C7F219544C68A_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_0;
		L_0 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1;
		L_1 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA476795C67986109E5187494DEC5981D25457C86_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1;
		L_1 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m84F19ECFD45EC3F29B8ED82184E4892EFC93A50C(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB226FE67A69CD8BBFE3F07A9BAB84AB6853A10C6_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1;
		L_1 = EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		HashSet_1__ctor_m06A7ECC1351897A5086F1261E9DF0EE1FF0A757D(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m06A7ECC1351897A5086F1261E9DF0EE1FF0A757D_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_5 = V_0;
		bool L_6;
		L_6 = HashSet_1_AreEqualityComparersEqual_mA6D6AFBE54A3A5C041B6D016B614A506C2C0CCE6(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_7 = V_0;
		HashSet_1_CopyFrom_m757886C93AFA00039C804FBA0DC24407EE787C5F(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		HashSet_1_UnionWith_mCC6A0E6F531708E02411F3A62A0EE263B3155CD2(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_16 = __this->____slots;
		int32_t L_17 = __this->____count;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/L_17))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		HashSet_1_TrimExcess_m60E387432DD7DB110EBA0525FFA77E9B6DC7AFF4(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4DB4611435EBE8D5BF2E1FEC52400256F0245F76_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_m757886C93AFA00039C804FBA0DC24407EE787C5F_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_0 = ___0_source;
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_3 = ___0_source;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		V_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_8 = ___0_source;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____buckets;
		RuntimeObject* L_10;
		L_10 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_9, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_11 = ___0_source;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_12 = L_11->____slots;
		RuntimeObject* L_13;
		L_13 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_12, NULL);
		__this->____slots = ((SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_14 = ___0_source;
		int32_t L_15 = L_14->____lastIndex;
		__this->____lastIndex = L_15;
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_16 = ___0_source;
		int32_t L_17 = L_16->____freeList;
		__this->____freeList = L_17;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_18 = ___0_source;
		int32_t L_19 = L_18->____lastIndex;
		V_2 = L_19;
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_20 = ___0_source;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_21 = L_20->____slots;
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_24 = V_3;
		int32_t L_25 = V_5;
		int32_t L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___hashCode;
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_6;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_30 = V_3;
		int32_t L_31 = V_5;
		uint32_t L_32 = ((L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)))->___value;
		HashSet_1_AddValue_mD5191D2B847EF17B4112378DE8CD72D1BF3AA7DC(__this, L_28, L_29, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_37 = V_4;
		__this->____lastIndex = L_37;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		__this->____count = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m84F19ECFD45EC3F29B8ED82184E4892EFC93A50C_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		HashSet_1__ctor_m3B7B2891BFEF63A7A2071CEBC71CAC98E86706CE(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m348E36EA9F5CD3B346A1D013F3E4950DFF39426A_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m756D9726C9F4BFB2C3500A8A9F27FF47A550EC1D_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m02385B663B65E53485251FFFD116D0F26BA172B9_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		uint32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_2;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		int32_t L_8 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_9 = V_2;
		int32_t L_10 = V_3;
		int32_t L_11 = ((L_9)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10)))->___hashCode;
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_14 = V_2;
		int32_t L_15 = V_3;
		uint32_t L_16 = ((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)))->___value;
		uint32_t L_17 = ___0_item;
		bool L_18;
		L_18 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, L_16, L_17);
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_20 = V_2;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_006b:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_23 = V_2;
		int32_t L_24 = V_3;
		int32_t L_25 = ((L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		V_3 = L_25;
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m7A73EAC25610F587DD30114203F21E505AB6338C_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		HashSet_1_CopyTo_m421003E7CDC7B4B86D94CBB25C57DC78D4A42B3B(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m387D02609162D1AA4998698546E668AF4A960F67_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		uint32_t L_1 = ___0_item;
		int32_t L_2;
		L_2 = HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		V_1 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_5 = __this->____slots;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_10 = V_4;
		int32_t L_11 = V_5;
		int32_t L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___hashCode;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_15 = V_4;
		int32_t L_16 = V_5;
		uint32_t L_17 = ((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)))->___value;
		uint32_t L_18 = ___0_item;
		bool L_19;
		L_19 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, L_17, L_18);
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____buckets;
		int32_t L_22 = V_1;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_23 = V_4;
		int32_t L_24 = V_5;
		int32_t L_25 = ((L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24)))->___next;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22), (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_26 = V_4;
		int32_t L_27 = V_2;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_28 = V_4;
		int32_t L_29 = V_5;
		int32_t L_30 = ((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29)))->___next;
		((L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_27)))->___next = L_30;
	}

IL_00a7:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_31 = V_4;
		int32_t L_32 = V_5;
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___hashCode = (-1);
		goto IL_00d1;
	}

IL_00d1:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_33 = V_4;
		int32_t L_34 = V_5;
		int32_t L_35 = __this->____freeList;
		((L_33)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_34)))->___next = L_35;
		int32_t L_36 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		int32_t L_37 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_37, 1));
		int32_t L_38 = __this->____count;
		if (L_38)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_39 = V_5;
		__this->____freeList = L_39;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_40 = V_3;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_41 = V_4;
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_0135:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_5;
		V_2 = L_44;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_45 = V_4;
		int32_t L_46 = V_5;
		int32_t L_47 = ((L_45)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_46)))->___next;
		V_5 = L_47;
	}

IL_014c:
	{
		int32_t L_48 = V_5;
		if ((((int32_t)L_48) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m12BF15F6E4EEE48D66C845BC74A11EF6673C933B_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m68D44CA7137094B90C9E5C7DB2EDC5012528DADA_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 HashSet_1_GetEnumerator_m519EAE87AF990E90AF0AC67400E9F88D37675611_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9F89B5A77506688ABC2B08774AB13ADDF965703C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m6A9D59B9A319E9A8A0FE2F5738A41821BCD74D97_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9F89B5A77506688ABC2B08774AB13ADDF965703C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m3A48D76992C5D568FB0D0739748467B17D196FDC_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m9F89B5A77506688ABC2B08774AB13ADDF965703C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m062A764FA7943A6A3EFF468126A44868DD745178_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = __this->____count;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 31), (uint32_t)L_12);
		V_0 = L_13;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_14 = V_0;
		HashSet_1_CopyTo_m0A1E30AFCFECF4120A2582BCEF92DB3898C02BF0(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___0_info;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_16, L_18, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m502E844E033C614B7D9F80E372E5AA9C7C9B872E_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_11 = (SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)(SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_18 = V_1;
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		uint32_t L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		bool L_22;
		L_22 = HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_25 = V_1;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->____siInfo;
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_27;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mDA8E52933A6A885D9FCF549C99489EF5E095BE1E_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_item;
		bool L_1;
		L_1 = HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_mCC6A0E6F531708E02411F3A62A0EE263B3155CD2_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				uint32_t L_7;
				L_7 = InterfaceFuncInvoker0< uint32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6);
				V_1 = L_7;
				uint32_t L_8 = V_1;
				bool L_9;
				L_9 = HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m0A1E30AFCFECF4120A2582BCEF92DB3898C02BF0_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, const RuntimeMethod* method) 
{
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		HashSet_1_CopyTo_m421003E7CDC7B4B86D94CBB25C57DC78D4A42B3B(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m421003E7CDC7B4B86D94CBB25C57DC78D4A42B3B_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_13 = ___0_array;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = ___2_count;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_15 = ___0_array;
		int32_t L_16 = ___1_arrayIndex;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_18 = __this->____slots;
		int32_t L_19 = V_1;
		int32_t L_20 = ((L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)))->___hashCode;
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_24 = __this->____slots;
		int32_t L_25 = V_1;
		uint32_t L_26 = ((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)))->___value;
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23))), (uint32_t)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0093:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->____lastIndex;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m1D8E57063CD3288C9CACB27466A7002F984FD411_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* ___0_match, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		int32_t L_4 = ((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		uint32_t L_7 = ((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value;
		V_2 = L_7;
		Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* L_8 = ___0_match;
		uint32_t L_9 = V_2;
		bool L_10;
		L_10 = Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		uint32_t L_11 = V_2;
		bool L_12;
		L_12 = HashSet_1_Remove_m387D02609162D1AA4998698546E668AF4A960F67(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mC799EE656F81D83581F8A413304661B6F103BC6E_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m60E387432DD7DB110EBA0525FFA77E9B6DC7AFF4_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_5 = (SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)(SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		int32_t L_15 = L_14;
		Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382 L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12), (Slot_t0F2C4321FC082433EA1889FA7952BA1F9A0D2382)L_16);
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_17 = V_1;
		int32_t L_18 = V_3;
		int32_t L_19 = ((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)))->___hashCode;
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_21 = V_1;
		int32_t L_22 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		((L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_22)))->___next = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_5 = (SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)(SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_m9DBE122D41CA3941B3FE97DB9935895B99A84124_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		HashSet_1_SetCapacity_m3F7FB3120006196BDCDF9B70A78B647AF318EC85(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_m3F7FB3120006196BDCDF9B70A78B647AF318EC85_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_1 = (SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)(SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_3 = __this->____slots;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = ((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___hashCode;
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_12 = V_0;
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)))->___next = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_mC839AC5977B30ECC4FCABF7EA67B2A2A4E6E5F0C_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = HashSet_1_Initialize_m85E38E3E0475D0E8ACBC35AFB10D3E89BCF850AC(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		uint32_t L_2 = ___0_value;
		int32_t L_3;
		L_3 = HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		V_1 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		V_2 = 0;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_6 = __this->____slots;
		V_3 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_11 = V_3;
		int32_t L_12 = V_5;
		int32_t L_13 = ((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)))->___hashCode;
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_16 = V_3;
		int32_t L_17 = V_5;
		uint32_t L_18 = ((L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)))->___value;
		uint32_t L_19 = ___0_value;
		bool L_20;
		L_20 = InterfaceFuncInvoker2< bool, uint32_t, uint32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, L_18, L_19);
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_22 = V_3;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_25 = V_3;
		int32_t L_26 = V_5;
		int32_t L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___next;
		V_5 = L_27;
	}

IL_008b:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_31 = V_3;
		int32_t L_32 = V_4;
		int32_t L_33 = ((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32)))->___next;
		__this->____freeList = L_33;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_35 = V_3;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		HashSet_1_IncreaseCapacity_m9DBE122D41CA3941B3FE97DB9935895B99A84124(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00d9:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_41 = V_3;
		int32_t L_42 = V_4;
		int32_t L_43 = V_0;
		((L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42)))->___hashCode = L_43;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_44 = V_3;
		int32_t L_45 = V_4;
		uint32_t L_46 = ___0_value;
		((L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45)))->___value = L_46;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_47 = V_3;
		int32_t L_48 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		((L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48)))->___next = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_mD5191D2B847EF17B4112378DE8CD72D1BF3AA7DC_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, int32_t ___0_index, int32_t ___1_hashCode, uint32_t ___2_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_0 = ((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_2 = __this->____slots;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_hashCode;
		((L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)))->___hashCode = L_4;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_5 = __this->____slots;
		int32_t L_6 = ___0_index;
		uint32_t L_7 = ___2_value;
		((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)))->___value = L_7;
		SlotU5BU5D_tBF418274114DA8D3D070D784415BF0500C1960C6* L_8 = __this->____slots;
		int32_t L_9 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		((L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9)))->___next = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		int32_t L_15 = V_0;
		int32_t L_16 = ___0_index;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_mA6D6AFBE54A3A5C041B6D016B614A506C2C0CCE6_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___0_set1, HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_0 = ___0_set1;
		RuntimeObject* L_1;
		L_1 = HashSet_1_get_Comparer_mC799EE656F81D83581F8A413304661B6F103BC6E_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* L_2 = ___1_set2;
		RuntimeObject* L_3;
		L_3 = HashSet_1_get_Comparer_mC799EE656F81D83581F8A413304661B6F103BC6E_inline(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_mB12B697B82E7E87BF40223DEDD96F3F07FD3CA32_gshared (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, uint32_t ___0_item, const RuntimeMethod* method) 
{
	{
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->____comparer;
		uint32_t L_2 = ___0_item;
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, uint32_t >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_1, L_2);
		return ((int32_t)(L_3&((int32_t)2147483647LL)));
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m938F8F1E5CECD06A2575952EC6D253BF0053EC3D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___0_comparer;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		___0_comparer = (RuntimeObject*)L_1;
	}

IL_0010:
	{
		RuntimeObject* L_2 = ___0_comparer;
		__this->____comparer = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_2);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
		__this->____version = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mAFD9C455FC1D54D3BBD67275A15A02AD4193A4DE_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_capacity;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mDEE8470968EF687DF9B40AE07DE41E0B09652532_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_collection;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_0, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m4523730BBAA53ADE100ED764690FEC1639243C75_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_collection, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B8_0 = 0;
	{
		RuntimeObject* L_0 = ___1_comparer;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		RuntimeObject* L_1 = ___0_collection;
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		RuntimeObject* L_3 = ___0_collection;
		V_0 = ((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->klass->rgctx_data, 5)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_4 = V_0;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_5 = V_0;
		bool L_6;
		L_6 = ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_7 = V_0;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}

IL_0030:
	{
		RuntimeObject* L_8 = ___0_collection;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->klass->rgctx_data, 12)));
		RuntimeObject* L_9 = V_1;
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_10);
		G_B8_0 = L_11;
		goto IL_0043;
	}

IL_0042:
	{
		G_B8_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B8_0;
		int32_t L_12 = V_2;
		int32_t L_13;
		L_13 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		RuntimeObject* L_14 = ___0_collection;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		int32_t L_15 = __this->____count;
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_16 = __this->____slots;
		int32_t L_17 = __this->____count;
		if ((((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_16)->max_length))/L_17))) <= ((int32_t)3)))
		{
			goto IL_0074;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
	}

IL_0074:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mA1015BCA85A81FCEC34284D87AAE4E1AB7526FDD_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		__this->____siInfo = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyFrom_mFBAD19B5E7335AF392786729D62E2D9B04E0DDF4_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_32 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = ___0_source;
		int32_t L_1 = L_0->____count;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_3 = ___0_source;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = L_3->____buckets;
		V_1 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(((int32_t)il2cpp_codegen_add(L_5, 1)), NULL);
		int32_t L_7 = V_1;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0065;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_8 = ___0_source;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____buckets;
		RuntimeObject* L_10;
		L_10 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_9, NULL);
		__this->____buckets = ((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)((Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)Castclass((RuntimeObject*)L_10, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var)));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_11 = ___0_source;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_12 = L_11->____slots;
		RuntimeObject* L_13;
		L_13 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_12, NULL);
		__this->____slots = ((SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)((SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)Castclass((RuntimeObject*)L_13, il2cpp_rgctx_data(method->klass->rgctx_data, 16))));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_14 = ___0_source;
		int32_t L_15 = L_14->____lastIndex;
		__this->____lastIndex = L_15;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_16 = ___0_source;
		int32_t L_17 = L_16->____freeList;
		__this->____freeList = L_17;
		goto IL_00c7;
	}

IL_0065:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_18 = ___0_source;
		int32_t L_19 = L_18->____lastIndex;
		V_2 = L_19;
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_20 = ___0_source;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_21 = L_20->____slots;
		V_3 = L_21;
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		V_4 = 0;
		V_5 = 0;
		goto IL_00ba;
	}

IL_0083:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_24 = V_3;
		int32_t L_25 = V_5;
		int32_t L_26 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		V_6 = L_26;
		int32_t L_27 = V_6;
		if ((((int32_t)L_27) < ((int32_t)0)))
		{
			goto IL_00b4;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = V_6;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_30 = V_3;
		int32_t L_31 = V_5;
		il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_30)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		InvokerActionInvoker3< int32_t, int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), __this, L_28, L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_32: *(void**)L_32));
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		int32_t L_34 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00ba:
	{
		int32_t L_35 = V_5;
		int32_t L_36 = V_2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_37 = V_4;
		__this->____lastIndex = L_37;
	}

IL_00c7:
	{
		int32_t L_38 = V_0;
		__this->____count = L_38;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_mB3665C091D8A36D90CC380C1D4FA37220DC6C40D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___1_comparer;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_1 = ___0_capacity;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0016:
	{
		int32_t L_3 = ___0_capacity;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_4 = ___0_capacity;
		int32_t L_5;
		L_5 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0022:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_mF6F4FF6F131B5A5671352C1A2E44A08203658B06_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_0: *(void**)L_0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_mCD863950F0D273BF34801FDD92CBEC230ECD5A6D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lastIndex;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_1 = __this->____slots;
		int32_t L_2 = __this->____lastIndex;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		__this->____lastIndex = 0;
		__this->____count = 0;
		__this->____freeList = (-1);
	}

IL_0044:
	{
		int32_t L_5 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_5, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m6D40586EE21316C2647D81169AFFF9B4C7719F74_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_16 = L_1;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0080;
		}
	}
	{
		V_0 = 0;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_1: *(void**)L_1));
		V_1 = L_2;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_3 = __this->____slots;
		V_2 = L_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		int32_t L_5 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = ((int32_t)(L_5%((int32_t)(((RuntimeArray*)L_6)->max_length))));
		int32_t L_8 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		goto IL_007c;
	}

IL_002f:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_9 = V_2;
		int32_t L_10 = V_3;
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_9)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_12 = V_1;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_005a;
		}
	}
	{
		RuntimeObject* L_13 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_14 = V_2;
		int32_t L_15 = V_3;
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_18;
		L_18 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_16: *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_17: *(void**)L_17));
		if (!L_18)
		{
			goto IL_005a;
		}
	}
	{
		return (bool)1;
	}

IL_005a:
	{
		int32_t L_19 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_20 = V_2;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_006b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_006b:
	{
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_23 = V_2;
		int32_t L_24 = V_3;
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		V_3 = L_25;
	}

IL_007c:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)0)))
		{
			goto IL_002f;
		}
	}

IL_0080:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m88DE8E9D3C3D641EB7F4567A05CB23A65AAABB4A_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_arrayIndex;
		int32_t L_2 = __this->____count;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_mE12E434B402CFEB49197444DE1D52A3AE4C7F6EE_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_17 = L_1;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_4 = NULL;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (!L_0)
		{
			goto IL_0154;
		}
	}
	{
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_2;
		L_2 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_1: *(void**)L_1));
		V_0 = L_2;
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____buckets;
		V_1 = ((int32_t)(L_3%((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_2 = (-1);
		V_3 = 0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = __this->____slots;
		V_4 = L_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____buckets;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		goto IL_014c;
	}

IL_003b:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_10 = V_4;
		int32_t L_11 = V_5;
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_0123;
		}
	}
	{
		RuntimeObject* L_14 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_15 = V_4;
		int32_t L_16 = V_5;
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_19;
		L_19 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_17: *(void**)L_17), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_18: *(void**)L_18));
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		int32_t L_20 = V_2;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_008c;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_21 = __this->____buckets;
		int32_t L_22 = V_1;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_23 = V_4;
		int32_t L_24 = V_5;
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22), (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1)));
		goto IL_00a7;
	}

IL_008c:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_26 = V_4;
		int32_t L_27 = V_2;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_28 = V_4;
		int32_t L_29 = V_5;
		int32_t L_30 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_29))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_27))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), L_30);
	}

IL_00a7:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_31 = V_4;
		int32_t L_32 = V_5;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0), (-1));
		bool L_33;
		L_33 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_33)
		{
			goto IL_00d1;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_34 = V_4;
		int32_t L_35 = V_5;
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_34)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_35))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)))), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	}

IL_00d1:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_36 = V_4;
		int32_t L_37 = V_5;
		int32_t L_38 = __this->____freeList;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_36)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_37))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), L_38);
		int32_t L_39 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		int32_t L_40 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_40, 1));
		int32_t L_41 = __this->____count;
		if (L_41)
		{
			goto IL_0119;
		}
	}
	{
		__this->____lastIndex = 0;
		__this->____freeList = (-1);
		goto IL_0121;
	}

IL_0119:
	{
		int32_t L_42 = V_5;
		__this->____freeList = L_42;
	}

IL_0121:
	{
		return (bool)1;
	}

IL_0123:
	{
		int32_t L_43 = V_3;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_44 = V_4;
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_44)->max_length)))))
		{
			goto IL_0135;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_45 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_45, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, method);
	}

IL_0135:
	{
		int32_t L_46 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		int32_t L_47 = V_5;
		V_2 = L_47;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_48 = V_4;
		int32_t L_49 = V_5;
		int32_t L_50 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_48)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_49))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		V_5 = L_50;
	}

IL_014c:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) >= ((int32_t)0)))
		{
			goto IL_003b;
		}
	}

IL_0154:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_mA764DCA3CB14CB2CBDF742A163492FF4DA515B63_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m76BECFED2AFB768A9DE14C29899DD46F16044F4D_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetEnumerator_m75DD344FE9A073CA9564DC6A425EC36883FB32A7_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	{
		memset(L_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mB077531C4148EC6AF72C7EC429E44A8636D2A8AA_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	{
		memset(L_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_System_Collections_IEnumerable_GetEnumerator_m63E181A7F597D9BB07C674DA40F21F4A2B755FB3_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27));
	const Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB L_0 = alloca(SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
	{
		memset(L_0, 0, SizeOf_Enumerator_t45B9839DDB003D337DAD360EE2D7537B7E8F9F2D);
		Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 27), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_GetObjectData_m2D69A3859D85C85A103B08728E096D87DC9F5715_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	String_t* G_B4_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	String_t* G_B5_1 = NULL;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* G_B5_2 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		int32_t L_3 = __this->____version;
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeObject* L_5 = __this->____comparer;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 30)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_4, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, (RuntimeObject*)L_5, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___0_info;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____buckets;
		if (!L_9)
		{
			G_B4_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
			G_B4_1 = L_8;
			goto IL_0052;
		}
		G_B3_0 = _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865;
		G_B3_1 = L_8;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		G_B5_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0053;
	}

IL_0052:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0053:
	{
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(G_B5_2, G_B5_1, G_B5_0, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____buckets;
		if (!L_11)
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_12 = __this->____count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 31), (uint32_t)L_12);
		V_0 = L_13;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = V_0;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_15 = ___0_info;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_15, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, (RuntimeObject*)L_16, L_18, NULL);
	}

IL_0089:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_OnDeserialization_m05AAB1A1992F82537C1125645B4D0D82676561FA_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_1 = __this->____siInfo;
		int32_t L_2;
		L_2 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_1, _stringLiteralDD57D613EE89CAA812BA2441F086552F388D6865, NULL);
		V_0 = L_2;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_3 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 34)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		RuntimeObject* L_6;
		L_6 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_3, _stringLiteralC5F173ABE7214E8ED04EE91D0D5626EEDF0007E9, L_5, NULL);
		__this->____comparer = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->klass->rgctx_data, 4))));
		__this->____freeList = (-1);
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_8 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_8);
		__this->____buckets = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_9);
		int32_t L_10 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_11 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_10);
		__this->____slots = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_11);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_12 = __this->____siInfo;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 33)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeObject* L_15;
		L_15 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_12, _stringLiteral7FD8990CE322087D5497AFE06F8F53AC9EBE47B0, L_14, NULL);
		V_1 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)Castclass((RuntimeObject*)L_15, il2cpp_rgctx_data(method->klass->rgctx_data, 24)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_1;
		if (L_16)
		{
			goto IL_008f;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_17 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC5ABE84F2ABF009EBC68D2A32EF8C171B074F922)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_008f:
	{
		V_2 = 0;
		goto IL_00a5;
	}

IL_0093:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = V_1;
		int32_t L_19 = V_2;
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_22;
		L_22 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_21: *(void**)L_21));
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_00a5:
	{
		int32_t L_24 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = V_1;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0093;
		}
	}
	{
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
	}

IL_00b4:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_26 = __this->____siInfo;
		int32_t L_27;
		L_27 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_26, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->____version = L_27;
		__this->____siInfo = (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo), (void*)(SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_UnionWith_m1C3E9C4A4AE3555B04CD0140644DC4387D7592C6_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_1, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___0_other;
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_0039:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0026_1;
			}

IL_0017_1:
			{
				RuntimeObject* L_6 = V_0;
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_6, (Il2CppFullySharedGenericAny*)L_7);
				il2cpp_codegen_memcpy(V_1, L_7, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				il2cpp_codegen_memcpy(L_8, V_1, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
				bool L_9;
				L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_8: *(void**)L_8));
			}

IL_0026_1:
			{
				RuntimeObject* L_10 = V_0;
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
				if (L_11)
				{
					goto IL_0017_1;
				}
			}
			{
				goto IL_003a;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m3B04E1071B17DF96CD5B72299EE55F25E75EBD50_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = __this->____count;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, L_0, 0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_m3A8192100B5A0772B9962D3F1AA5CF3760ED113F_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, int32_t ___2_count, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_arrayIndex;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___1_arrayIndex;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC00660333703C551EA80371B54D0ADCEB74C33B4)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		int32_t L_7 = ___2_count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_8 = ___2_count;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_9);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral181DEF79B2243F7C4801BB3A41C7077D5A07F414)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0042:
	{
		int32_t L_12 = ___1_arrayIndex;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_array;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_14 = ___2_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = ___0_array;
		int32_t L_16 = ___1_arrayIndex;
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), L_16)))))
		{
			goto IL_005b;
		}
	}

IL_0050:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3ECE023333DCF45DE7B1FEAFFE30E295210DDD9B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_005b:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0097;
	}

IL_0061:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_18 = __this->____slots;
		int32_t L_19 = V_1;
		int32_t L_20 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		if ((((int32_t)L_20) < ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = ___0_array;
		int32_t L_22 = ___1_arrayIndex;
		int32_t L_23 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_24 = __this->____slots;
		int32_t L_25 = V_1;
		il2cpp_codegen_memcpy(L_26, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy((L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23)))), L_26, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 19), (void**)(L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_22, L_23)))), (void*)L_26);
		int32_t L_27 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0093:
	{
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		int32_t L_29 = V_1;
		int32_t L_30 = __this->____lastIndex;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_0;
		int32_t L_32 = ___2_count;
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0061;
		}
	}

IL_00a4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_RemoveWhere_m779C784616153E67C9EB38CEF6875A7DCC2492AA_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_11 = L_7;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	memset(V_2, 0, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0054;
	}

IL_0014:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		int32_t L_3 = V_1;
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = __this->____slots;
		int32_t L_6 = V_1;
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(V_2, L_7, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_8 = ___0_match;
		il2cpp_codegen_memcpy(L_9, V_2, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)), il2cpp_rgctx_method(method->klass->rgctx_data, 39), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0050;
		}
	}
	{
		il2cpp_codegen_memcpy(L_11, V_2, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_12;
		L_12 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)), il2cpp_rgctx_method(method->klass->rgctx_data, 40), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_11: *(void**)L_11));
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0050:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____lastIndex;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_17 = V_0;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m3025B6666A254AEDE933EDE04AD66D456C52AD00_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_TrimExcess_m61244B342437754775955075EDF4F12C60341CE0_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18));
	const Slot_tEC146EEEF7022C6542EBF082D658446682962BFD L_16 = alloca(SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5);
	int32_t V_0 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0025;
		}
	}
	{
		__this->____buckets = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)NULL);
		__this->____slots = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)NULL);
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}

IL_0025:
	{
		int32_t L_2 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		V_1 = L_5;
		int32_t L_6 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_2 = L_7;
		V_3 = 0;
		V_4 = 0;
		goto IL_00a2;
	}

IL_0046:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_8 = __this->____slots;
		int32_t L_9 = V_4;
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_009c;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_11 = V_1;
		int32_t L_12 = V_3;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_13 = __this->____slots;
		int32_t L_14 = V_4;
		int32_t L_15 = L_14;
		il2cpp_codegen_memcpy(L_16, (L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)), SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5);
		il2cpp_codegen_memcpy((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)), L_16, SizeOf_Slot_t997B45C664ACE85A6BC6136C9A4A25A71BA8FFD5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 18), (void**)(L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)), (void*)L_16);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_17 = V_1;
		int32_t L_18 = V_3;
		int32_t L_19 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_20 = V_0;
		V_5 = ((int32_t)(L_19%L_20));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_21 = V_1;
		int32_t L_22 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = V_2;
		int32_t L_24 = V_5;
		int32_t L_25 = L_24;
		int32_t L_26 = (L_23)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_22))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_26, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = V_2;
		int32_t L_28 = V_5;
		int32_t L_29 = V_3;
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28), (int32_t)((int32_t)il2cpp_codegen_add(L_29, 1)));
		int32_t L_30 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_009c:
	{
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00a2:
	{
		int32_t L_32 = V_4;
		int32_t L_33 = __this->____lastIndex;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_34 = V_3;
		__this->____lastIndex = L_34;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_35 = V_1;
		__this->____slots = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_35);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = V_2;
		__this->____buckets = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_36);
		__this->____freeList = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_Initialize_mB8584D1E01509492EE6C3DC75184140DBE2F053B_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_capacity;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_GetPrime_m5B7AE10D5E76267579296C8F2CB8464AC2DE8472(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->____buckets = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_3);
		int32_t L_4 = V_0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_4);
		__this->____slots = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_5);
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_IncreaseCapacity_mC3B321603207D03BD776F91FF7741EFF27621BD2_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____count;
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t75606750E152DB8C7289EB4163D3A728ED1A601A_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = HashHelpers_ExpandPrime_m9A35EC171AA0EA16F7C9F71EE6FAD5A82565ADB9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____count;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0020;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral91930CCAB5CB8F6F327407F9A14CF42F57A0F27B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = V_0;
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)))(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_SetCapacity_mA861522E8D0DB9628EEABF16F04BD49C6C0DC774_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_newSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_0 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___0_newSize;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_1 = (SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)(SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 35), (uint32_t)L_0);
		V_0 = L_1;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_3 = __this->____slots;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_4 = V_0;
		int32_t L_5 = __this->____lastIndex;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, 0, (RuntimeArray*)L_4, 0, L_5, NULL);
	}

IL_0023:
	{
		int32_t L_6 = ___0_newSize;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0058;
	}

IL_002e:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_8 = V_0;
		int32_t L_9 = V_2;
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_11 = ___0_newSize;
		V_3 = ((int32_t)(L_10%L_11));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_12 = V_0;
		int32_t L_13 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = V_1;
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_17, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = V_1;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19), (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0058:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = __this->____lastIndex;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_24 = V_0;
		__this->____slots = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____slots), (void*)L_24);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = V_1;
		__this->____buckets = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_25);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AddIfNotPresent_m58D69C8710CAB51D00282379158F183A79344DFB_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_18 = L_2;
	const Il2CppFullySharedGenericAny L_46 = L_2;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____buckets;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1;
		L_1 = ((  int32_t (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
	}

IL_0010:
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_3;
		L_3 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_2: *(void**)L_2));
		V_0 = L_3;
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		V_1 = ((int32_t)(L_4%((int32_t)(((RuntimeArray*)L_5)->max_length))));
		V_2 = 0;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_6 = __this->____slots;
		V_3 = L_6;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____buckets;
		int32_t L_8 = V_1;
		int32_t L_9 = L_8;
		int32_t L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_008b;
	}

IL_003a:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_11 = V_3;
		int32_t L_12 = V_5;
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0));
		int32_t L_14 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_0067;
		}
	}
	{
		RuntimeObject* L_15 = __this->____comparer;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_16 = V_3;
		int32_t L_17 = V_5;
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2)), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_20;
		L_20 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_18: *(void**)L_18), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_19: *(void**)L_19));
		if (!L_20)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_21 = V_2;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_22 = V_3;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_23 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC41E5684DECCF408AE6811BC4A564716D2F2AE9E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0078:
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_25 = V_3;
		int32_t L_26 = V_5;
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		V_5 = L_27;
	}

IL_008b:
	{
		int32_t L_28 = V_5;
		if ((((int32_t)L_28) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_29 = __this->____freeList;
		if ((((int32_t)L_29) < ((int32_t)0)))
		{
			goto IL_00b6;
		}
	}
	{
		int32_t L_30 = __this->____freeList;
		V_4 = L_30;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_31 = V_3;
		int32_t L_32 = V_4;
		int32_t L_33 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_32))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1));
		__this->____freeList = L_33;
		goto IL_00ef;
	}

IL_00b6:
	{
		int32_t L_34 = __this->____lastIndex;
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_35 = V_3;
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))))
		{
			goto IL_00d9;
		}
	}
	{
		((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_36 = __this->____slots;
		V_3 = L_36;
		int32_t L_37 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38 = __this->____buckets;
		V_1 = ((int32_t)(L_37%((int32_t)(((RuntimeArray*)L_38)->max_length))));
	}

IL_00d9:
	{
		int32_t L_39 = __this->____lastIndex;
		V_4 = L_39;
		int32_t L_40 = __this->____lastIndex;
		__this->____lastIndex = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ef:
	{
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_41 = V_3;
		int32_t L_42 = V_4;
		int32_t L_43 = V_0;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_41)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_42))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0), L_43);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_44 = V_3;
		int32_t L_45 = V_4;
		il2cpp_codegen_memcpy(L_46, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_value : &___0_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_write_instance_field_data(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_44)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_45))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2), L_46, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_47 = V_3;
		int32_t L_48 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_49 = __this->____buckets;
		int32_t L_50 = V_1;
		int32_t L_51 = L_50;
		int32_t L_52 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_47)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_48))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_52, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_53 = __this->____buckets;
		int32_t L_54 = V_1;
		int32_t L_55 = V_4;
		(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54), (int32_t)((int32_t)il2cpp_codegen_add(L_55, 1)));
		int32_t L_56 = __this->____count;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_56, 1));
		int32_t L_57 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_57, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_AddValue_m038B507326561F3D8BD44AD54E3FFAC497ED5C05_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, int32_t ___0_index, int32_t ___1_hashCode, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		V_0 = ((int32_t)(L_0%((int32_t)(((RuntimeArray*)L_1)->max_length))));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_2 = __this->____slots;
		int32_t L_3 = ___0_index;
		int32_t L_4 = ___1_hashCode;
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),0), L_4);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = __this->____slots;
		int32_t L_6 = ___0_index;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___2_value : &___2_value), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		il2cpp_codegen_write_instance_field_data(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),2), L_7, SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_8 = __this->____slots;
		int32_t L_9 = ___0_index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____buckets;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		int32_t L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		il2cpp_codegen_write_instance_field_data<int32_t>(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 18),1), ((int32_t)il2cpp_codegen_subtract(L_13, 1)));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		int32_t L_15 = V_0;
		int32_t L_16 = ___0_index;
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (int32_t)((int32_t)il2cpp_codegen_add(L_16, 1)));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_AreEqualityComparersEqual_m2BEC57F75CABAE588E047406FED797DC3F7B8B71_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set1, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___1_set2, const RuntimeMethod* method) 
{
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = ___0_set1;
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 43)))(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_2 = ___1_set2;
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 43)))(L_2, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 43));
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0, (RuntimeObject*)L_1, (RuntimeObject*)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashSet_1_InternalGetHashCode_m1A1758DA258D8DE5AA075333D2B6D4DF0B75A4D6_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19), L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_2 = __this->____comparer;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? ___0_item : &___0_item), SizeOf_T_t1A61667A2FF6D68BB3DAC186281F928B7ED2DB94);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 19)) ? L_3: *(void**)L_3));
		return ((int32_t)(L_4&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Bounds_Equals_m615135524315743D29633C33B6C8B16B754266DB_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___0_other, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline(__this, NULL);
		V_0 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline((&___0_other), NULL);
		bool L_2;
		L_2 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline(__this, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline((&___0_other), NULL);
		bool L_5;
		L_5 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_0), L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0030;
	}

IL_002f:
	{
		G_B3_0 = 0;
	}

IL_0030:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0033;
	}

IL_0033:
	{
		bool L_6 = V_1;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Bounds_GetHashCode_m59C79B529D33866FE45FEFC0C69FBD3B4AC7E172_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline((&V_0), NULL);
		V_1 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_002f;
	}

IL_002f:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BoundsInt_Equals_m143E0673DA604FDEBBF40115D50BE078E343F1E6_inline (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_0 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(&__this->___m_Position);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_1 = ___0_other;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_2 = L_1.___m_Position;
		bool L_3;
		L_3 = Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* L_4 = (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)(&__this->___m_Size);
		BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 L_5 = ___0_other;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6 = L_5.___m_Size;
		bool L_7;
		L_7 = Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline(L_4, L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
	}

IL_0028:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002b;
	}

IL_002b:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_Equals_mDB0C4CCC58BE3E108F1A40BE8DBDCD62E284CC51_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_other, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 0, NULL);
		V_0 = L_0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 0, NULL);
		bool L_2;
		L_2 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 1, NULL);
		V_0 = L_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 1, NULL);
		bool L_5;
		L_5 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 2, NULL);
		V_0 = L_6;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7;
		L_7 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 2, NULL);
		bool L_8;
		L_8 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_0065;
		}
	}
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9;
		L_9 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 3, NULL);
		V_0 = L_9;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10;
		L_10 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118((&___0_other), 3, NULL);
		bool L_11;
		L_11 = Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline((&V_0), L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0066;
	}

IL_0065:
	{
		G_B5_0 = 0;
	}

IL_0066:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0069;
	}

IL_0069:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Matrix4x4_GetHashCode_m313B1AF4FEA792BB7E4D1D239EBE3257F825914D_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0;
		L_0 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 0, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline((&V_0), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2;
		L_2 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 1, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline((&V_0), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		L_4 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 2, NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline((&V_0), NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		L_6 = Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(__this, 3, NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline((&V_0), NULL);
		V_1 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_0061;
	}

IL_0061:
	{
		int32_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Rect_Equals_mE725DE506D3F1DB92F58B876BDA42AACD4D991B5_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_other, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline(__this, NULL);
		V_0 = L_0;
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline((&___0_other), NULL);
		bool L_2;
		L_2 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_005d;
		}
	}
	{
		float L_3;
		L_3 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline(__this, NULL);
		V_0 = L_3;
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline((&___0_other), NULL);
		bool L_5;
		L_5 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_005d;
		}
	}
	{
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline(__this, NULL);
		V_0 = L_6;
		float L_7;
		L_7 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline((&___0_other), NULL);
		bool L_8;
		L_8 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline(__this, NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline((&___0_other), NULL);
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_005e;
	}

IL_005d:
	{
		G_B5_0 = 0;
	}

IL_005e:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0061;
	}

IL_0061:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RectInt_Equals_mE9EA164664CA30C1C099EFB658D691F55A793B96_inline (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->___m_XMin;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_1 = ___0_other;
		int32_t L_2 = L_1.___m_XMin;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_3 = __this->___m_YMin;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_4 = ___0_other;
		int32_t L_5 = L_4.___m_YMin;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_6 = __this->___m_Width;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_7 = ___0_other;
		int32_t L_8 = L_7.___m_Width;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_9 = __this->___m_Height;
		RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 L_10 = ___0_other;
		int32_t L_11 = L_10.___m_Height;
		G_B5_0 = ((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_0 = (bool)G_B5_0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_Equals_mDF84D5ED14E018609C6A9C9BAE016C1B33BCFF4C_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		float L_0 = __this->___x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___0_other;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_001f;
		}
	}
	{
		float L_3 = __this->___y;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_other;
		float L_5 = L_4.___y;
		G_B3_0 = ((((float)L_3) == ((float)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2_GetHashCode_mED8670C0E122B7ED0DAB4C3381ADFF04B75E0B03_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (float*)(&__this->___x);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (float*)(&__this->___y);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		V_0 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2Int_Equals_m32811BA0576C096D5EB5C0CFD8231478F17229A6_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(__this, NULL);
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___0_other), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(__this, NULL);
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___0_other), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0025;
	}

IL_0025:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_GetHashCode_mA3B6135FA770AF0C171319B50D9B913657230EB7_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline(__this, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		V_1 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_0023;
	}

IL_0023:
	{
		int32_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_other;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_other;
		float L_5 = L_4.___y;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_other;
		float L_8 = L_7.___z;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (float*)(&__this->___x);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (float*)(&__this->___y);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (float*)(&__this->___z);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		V_0 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_Equals_mE4D179C5001B77DE05E3E4BC39DC9F6AE441EBD8_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_0 = (*(Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*)__this);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1 = ___0_other;
		bool L_2;
		L_2 = Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_GetHashCode_mFAA200CFE26F006BEE6F9A65AFD0AC8C49D730EA_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline(__this, NULL);
		V_2 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_2), NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline(__this, NULL);
		V_2 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_2), NULL);
		V_1 = L_3;
		int32_t L_4;
		L_4 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline(__this, NULL);
		V_2 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_2), NULL);
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = V_1;
		V_3 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)(L_5^((int32_t)(L_6<<4))))^((int32_t)(L_7>>((int32_t)28)))))^((int32_t)(L_8>>4))))^((int32_t)(L_9<<((int32_t)28)))));
		goto IL_0042;
	}

IL_0042:
	{
		int32_t L_10 = V_3;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_Equals_m73FAA65A1A565EE28D6C9385603829894B7D4392_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_other, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		float L_0 = __this->___x;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___0_other;
		float L_2 = L_1.___x;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_003b;
		}
	}
	{
		float L_3 = __this->___y;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_other;
		float L_5 = L_4.___y;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_003b;
		}
	}
	{
		float L_6 = __this->___z;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = ___0_other;
		float L_8 = L_7.___z;
		if ((!(((float)L_6) == ((float)L_8))))
		{
			goto IL_003b;
		}
	}
	{
		float L_9 = __this->___w;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___0_other;
		float L_11 = L_10.___w;
		G_B5_0 = ((((float)L_9) == ((float)L_11))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B5_0 = 0;
	}

IL_003c:
	{
		V_0 = (bool)G_B5_0;
		goto IL_003f;
	}

IL_003f:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (float*)(&__this->___x);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (float*)(&__this->___y);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (float*)(&__this->___z);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (float*)(&__this->___w);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_0039;
	}

IL_0039:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* EqualityComparer_1_get_Default_mF70F6C11A35B420DFA4628EE316B087F2DCB280C_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* V_0 = NULL;
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_0 = ((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m432C82F7354C37E610794C1DA866DFA7DAC9C35E(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t8576A23859AAB111A218EAE239E10E5E9E2D66FC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mD16C664FFE93598D1C12AC86190D12B0F90B5419_gshared_inline (Predicate_1_t6CDE3111264F492F4F13277756366A07CA78A4C3* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_m2DD3885BF267920FC8AD5DCD6EA6A6250ABFE3AD_gshared_inline (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* EqualityComparer_1_get_Default_mC9B367997D70B8B5F9167227471B3D82603739F4_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* V_0 = NULL;
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_0 = ((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m90CFBBC1492097465600B56ECF620CA25F1C6A73(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tECD5E5244542BCEA9946E4E9E894173EFA97E8DF* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m561B5F43F62B494CB43593312075556BAA567E0B_gshared_inline (Predicate_1_t5C52E5DEC72D8848A1024CF1E1E512DB092F800A* __this, int32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mB96B4907FFD0439B94352B52CFF0D360A73D40EB_gshared_inline (HashSet_1_t2EC13BE6E93BB0C99D5CF97A25799B40FD6CBAF4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* EqualityComparer_1_get_Default_mA2AD755281D23F496A2579884B39E30C13C208B3_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* V_0 = NULL;
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_0 = ((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mD2FA619307513193746FBEB5AE522FB54E21B634(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t92563A67F1C1ECDC3FE387C46498E2E56B59F3C2* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6AC449189DCEE89A4FA2A2B724DE296A1DFB6A9B_gshared_inline (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mD54AFBFBD525862DC2F8F47071DA5B37CFDEA948_gshared_inline (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* EqualityComparer_1_get_Default_mF554877B669658FD6449F84AE369214855D0BC40_gshared_inline (const RuntimeMethod* method) 
{
	EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* V_0 = NULL;
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_0 = ((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m64D3D774E7DAF5FC0206DC26D9BA53BF70F1F93B(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		V_0 = L_2;
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_tBE7039362398A2C9BD71FAAAB935B7FF9F6EA862* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mCE33776BF08B37A05CCD7FBB46335E5FB6B215DC_gshared_inline (Predicate_1_t2F212B682F64543895DDB2A14A8816A433567EFF* __this, uint32_t ___0_obj, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, uint32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* HashSet_1_get_Comparer_mC799EE656F81D83581F8A413304661B6F103BC6E_gshared_inline (HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____comparer;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Center;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25_inline (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___m_Extents;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_XMin;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_YMin;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Width;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8_inline (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Height;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3Int_op_Equality_mB10073AF3B08421C46BF678C8FF64AAD62C83617_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___0_lhs, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___0_lhs), NULL);
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___1_rhs), NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___0_lhs), NULL);
		int32_t L_3;
		L_3 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___1_rhs), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4;
		L_4 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___0_lhs), NULL);
		int32_t L_5;
		L_5 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___1_rhs), NULL);
		G_B4_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0034;
	}

IL_0033:
	{
		G_B4_0 = 0;
	}

IL_0034:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0037;
	}

IL_0037:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y;
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
		int32_t L_0 = __this->___m_Z;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
