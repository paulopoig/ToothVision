#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
		method->invoker_method(methodPtr, method, obj, params, NULL);
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
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4 p4)
	{
		void* params[4] = { p1, p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.IEnumerable`1<InfoBehavior>
struct IEnumerable_1_tCD190B7F3B07AB1578D27D64B913CA71521F0370;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<InfoBehavior>
struct List_1_tE2964C13CC7537E3E92E990FA4337841881C802D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// InfoBehavior[]
struct InfoBehaviorU5BU5D_t272717D5E40EA80D95C94E4F00AFB0F8D021894C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Facecam
struct Facecam_tB58D01EEA64BD3EF444A767312368238D986E832;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Gaze
struct Gaze_tB0DFC265CE9B10885308656CD1E5B3C00CD5A018;
// TS.GazeInteraction.GazeInteractable
struct GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1;
// TS.GazeInteraction.GazeInteractor
struct GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5;
// TS.GazeInteraction.GazeReticle
struct GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// ImageAssignment
struct ImageAssignment_tE08F1489CBD3B51DBADDF30A0A49B6C52BD287AF;
// InfoBehavior
struct InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ModelInteraction
struct ModelInteraction_t698F23C44140C5E17CED497C4CA92A23ED78E0AA;
// ModelMovement
struct ModelMovement_t56CC2334D04B814A00651E203A75E05D8819621A;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NewBehaviourScript
struct NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectInteraction
struct ObjectInteraction_t812F1E5C05C446B26F40C75C48CD91B80A1A13F8;
// ObjectRotator
struct ObjectRotator_t01C1E6B39EFE87B7EC66C546EF87AFFD968D4BA8;
// ObjectTapController
struct ObjectTapController_tA3F354BE481EA7985D70920F9674029607E95FF6;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Quit
struct Quit_tD52791116DF223EC8394DC3E473F3E4788F9F2F2;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// ResolutionManger
struct ResolutionManger_t08B1EBBECCCF6B29652FCA10A19CE781040979BD;
// TS.GazeInteraction.ResourcesManager
struct ResourcesManager_t66E50EDCE76784B2D12111BBD924E54373CE7CF9;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScaleObject
struct ScaleObject_tFEC639C7199E065811A50D7A499D1B0E26040BA9;
// ScaleWithCameraDistance
struct ScaleWithCameraDistance_t9FAB35B1541D09F3568ABF6F674718B5716E3821;
// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VuforiaLicense
struct VuforiaLicense_t558A3A93186A45EF8A9401D2262B52B5593182BC;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41
struct U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D;
// TS.GazeInteraction.GazeInteractable/OnActivated
struct OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0;
// TS.GazeInteraction.GazeInteractable/OnEnter
struct OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD;
// TS.GazeInteraction.GazeInteractable/OnExit
struct OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE;
// TS.GazeInteraction.GazeInteractable/OnStay
struct OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE2964C13CC7537E3E92E990FA4337841881C802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral156E0AF81F8E8561B36759338BAEE264FD07A676;
IL2CPP_EXTERN_C String_t* _stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4;
IL2CPP_EXTERN_C String_t* _stringLiteral3748EB91B2BDF019241C0FC4D8C75AD02258A8FA;
IL2CPP_EXTERN_C String_t* _stringLiteral5DF1036FC00AD70364E6D248EB7C3A32FC46769C;
IL2CPP_EXTERN_C String_t* _stringLiteralC1EBBA863C4CF7E0932C8325E2A21E01AD33310F;
IL2CPP_EXTERN_C String_t* _stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4;
IL2CPP_EXTERN_C String_t* _stringLiteralF015DB17E8176FD189CF6FCFCD07A505E680D380;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1_mA06A7082D6B71337A6408668B71D4E91151B1B87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770_mBEED201FAC9EFAC5425AE2CDCE23C5A3A793B52B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1803B345998D262986D0535DF0AFA5E91FD09467_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB56504D6D63A79E020E8E80D415F66BFF897AFA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1BA4FE82A67593EABBA4EB5A74534C37F4C92A11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_mE360BA236620C175DE113B3B83EA56DC4BE70D69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770_m1A46BE2BF879F3AD1E12BECB80A4EB62901F7DD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mB6AF1EF99C7CB2ED9897F7D31B2440F2B4270950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC16DF721A950A10D3918B30BCFC79B508F736DEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisInfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770_m51C62637B4B3A9734DD4D780864E64B05DEC7936_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_m494BDE2B52CA4ADFF325B4087CF8634EF2E60E3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitToExit_CoroutineU3Ed__41_System_Collections_IEnumerator_Reset_m1AAA3753E6B7334B3F3FA01CE74EAAF67D5F040E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct InfoBehaviorU5BU5D_t272717D5E40EA80D95C94E4F00AFB0F8D021894C;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<InfoBehavior>
struct List_1_tE2964C13CC7537E3E92E990FA4337841881C802D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InfoBehaviorU5BU5D_t272717D5E40EA80D95C94E4F00AFB0F8D021894C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// VuforiaLicense
struct VuforiaLicense_t558A3A93186A45EF8A9401D2262B52B5593182BC  : public RuntimeObject
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41
struct U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D  : public RuntimeObject
{
	// System.Int32 TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// TS.GazeInteraction.GazeInteractable TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::<>4__this
	GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___U3CU3E4__this_2;
	// TS.GazeInteraction.GazeInteractor TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::interactor
	GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___interactor_3;
};

// System.Collections.Generic.List`1/Enumerator<InfoBehavior>
struct Enumerator_t4742F3885684B24988224F331742387375ECCB0B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tE2964C13CC7537E3E92E990FA4337841881C802D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.Shader
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TS.GazeInteraction.GazeInteractable/OnActivated
struct OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0  : public MulticastDelegate_t
{
};

// TS.GazeInteraction.GazeInteractable/OnEnter
struct OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD  : public MulticastDelegate_t
{
};

// TS.GazeInteraction.GazeInteractable/OnExit
struct OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE  : public MulticastDelegate_t
{
};

// TS.GazeInteraction.GazeInteractable/OnStay
struct OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Facecam
struct Facecam_tB58D01EEA64BD3EF444A767312368238D986E832  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Facecam::cam
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cam_4;
	// UnityEngine.Vector3 Facecam::targetAngle
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetAngle_5;
};

// Gaze
struct Gaze_tB0DFC265CE9B10885308656CD1E5B3C00CD5A018  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<InfoBehavior> Gaze::infos
	List_1_tE2964C13CC7537E3E92E990FA4337841881C802D* ___infos_4;
};

// TS.GazeInteraction.GazeInteractable
struct GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TS.GazeInteraction.GazeInteractable/OnEnter TS.GazeInteraction.GazeInteractable::Enter
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* ___Enter_5;
	// TS.GazeInteraction.GazeInteractable/OnStay TS.GazeInteraction.GazeInteractable::Stay
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* ___Stay_6;
	// TS.GazeInteraction.GazeInteractable/OnExit TS.GazeInteraction.GazeInteractable::Exit
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* ___Exit_7;
	// TS.GazeInteraction.GazeInteractable/OnActivated TS.GazeInteraction.GazeInteractable::Activated
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* ___Activated_8;
	// System.Boolean TS.GazeInteraction.GazeInteractable::_isActivable
	bool ____isActivable_9;
	// System.Single TS.GazeInteraction.GazeInteractable::_exitDelay
	float ____exitDelay_10;
	// UnityEngine.Events.UnityEvent TS.GazeInteraction.GazeInteractable::OnGazeEnter
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnGazeEnter_11;
	// UnityEngine.Events.UnityEvent TS.GazeInteraction.GazeInteractable::OnGazeStay
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnGazeStay_12;
	// UnityEngine.Events.UnityEvent TS.GazeInteraction.GazeInteractable::OnGazeExit
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnGazeExit_13;
	// UnityEngine.Events.UnityEvent TS.GazeInteraction.GazeInteractable::OnGazeActivated
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnGazeActivated_14;
	// UnityEngine.Events.UnityEvent`1<System.Boolean> TS.GazeInteraction.GazeInteractable::OnGazeToggle
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* ___OnGazeToggle_15;
	// System.Boolean TS.GazeInteraction.GazeInteractable::<IsActivated>k__BackingField
	bool ___U3CIsActivatedU3Ek__BackingField_16;
	// UnityEngine.Collider TS.GazeInteraction.GazeInteractable::_collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ____collider_17;
};

// TS.GazeInteraction.GazeInteractor
struct GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TS.GazeInteraction.GazeInteractor::_maxDetectionDistance
	float ____maxDetectionDistance_4;
	// System.Single TS.GazeInteraction.GazeInteractor::_minDetectionDistance
	float ____minDetectionDistance_5;
	// System.Single TS.GazeInteraction.GazeInteractor::_timeToActivate
	float ____timeToActivate_6;
	// UnityEngine.LayerMask TS.GazeInteraction.GazeInteractor::_layerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ____layerMask_7;
	// UnityEngine.Ray TS.GazeInteraction.GazeInteractor::_ray
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ____ray_8;
	// UnityEngine.RaycastHit TS.GazeInteraction.GazeInteractor::_hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ____hit_9;
	// TS.GazeInteraction.GazeReticle TS.GazeInteraction.GazeInteractor::_reticle
	GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* ____reticle_10;
	// TS.GazeInteraction.GazeInteractable TS.GazeInteraction.GazeInteractor::_interactable
	GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ____interactable_11;
	// System.Single TS.GazeInteraction.GazeInteractor::_enterStartTime
	float ____enterStartTime_12;
};

// TS.GazeInteraction.GazeReticle
struct GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas TS.GazeInteraction.GazeReticle::_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ____canvas_4;
	// UnityEngine.UI.Image TS.GazeInteraction.GazeReticle::_imageProgress
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ____imageProgress_5;
	// System.Single TS.GazeInteraction.GazeReticle::_scale
	float ____scale_6;
	// System.Single TS.GazeInteraction.GazeReticle::_offsetFromHit
	float ____offsetFromHit_7;
	// TS.GazeInteraction.GazeInteractor TS.GazeInteraction.GazeReticle::_interactor
	GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ____interactor_8;
};

// ImageAssignment
struct ImageAssignment_tE08F1489CBD3B51DBADDF30A0A49B6C52BD287AF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Texture2D ImageAssignment::image
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___image_4;
};

// InfoBehavior
struct InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform InfoBehavior::SectionInfo
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___SectionInfo_5;
	// UnityEngine.Vector3 InfoBehavior::desiredScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___desiredScale_6;
};

// ModelInteraction
struct ModelInteraction_t698F23C44140C5E17CED497C4CA92A23ED78E0AA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ModelInteraction::moveSpeed
	float ___moveSpeed_4;
	// System.Single ModelInteraction::scaleSpeed
	float ___scaleSpeed_5;
	// UnityEngine.Vector2 ModelInteraction::initialTouchPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialTouchPosition_6;
	// UnityEngine.Vector3 ModelInteraction::initialModelPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialModelPosition_7;
	// System.Single ModelInteraction::initialScale
	float ___initialScale_8;
};

// ModelMovement
struct ModelMovement_t56CC2334D04B814A00651E203A75E05D8819621A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ModelMovement::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Vector2 ModelMovement::initialTouchPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___initialTouchPosition_5;
	// UnityEngine.Vector3 ModelMovement::initialModelPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialModelPosition_6;
};

// NewBehaviourScript
struct NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ObjectInteraction
struct ObjectInteraction_t812F1E5C05C446B26F40C75C48CD91B80A1A13F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ObjectInteraction::isDragging
	bool ___isDragging_4;
	// UnityEngine.Vector2 ObjectInteraction::dragStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___dragStartPosition_5;
	// UnityEngine.Rigidbody ObjectInteraction::objectRigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___objectRigidbody_6;
};

// ObjectRotator
struct ObjectRotator_t01C1E6B39EFE87B7EC66C546EF87AFFD968D4BA8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ObjectRotator::rotationSpeed
	float ___rotationSpeed_4;
};

// ObjectTapController
struct ObjectTapController_tA3F354BE481EA7985D70920F9674029607E95FF6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] ObjectTapController::objectsToTap
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___objectsToTap_4;
	// UnityEngine.GameObject[] ObjectTapController::objectsToEnableDisable
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___objectsToEnableDisable_5;
	// System.Boolean[] ObjectTapController::areObjectsEnabled
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___areObjectsEnabled_6;
};

// Quit
struct Quit_tD52791116DF223EC8394DC3E473F3E4788F9F2F2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ResolutionManger
struct ResolutionManger_t08B1EBBECCCF6B29652FCA10A19CE781040979BD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ResolutionManger::width
	int32_t ___width_4;
	// System.Int32 ResolutionManger::height
	int32_t ___height_5;
};

// TS.GazeInteraction.ResourcesManager
struct ResourcesManager_t66E50EDCE76784B2D12111BBD924E54373CE7CF9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ScaleObject
struct ScaleObject_tFEC639C7199E065811A50D7A499D1B0E26040BA9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera ScaleObject::mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainCamera_4;
	// UnityEngine.GameObject ScaleObject::objectToScale
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectToScale_5;
	// System.Single ScaleObject::scaleAmount
	float ___scaleAmount_6;
	// System.Boolean ScaleObject::isScaled
	bool ___isScaled_7;
	// UnityEngine.Vector3 ScaleObject::initialScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___initialScale_8;
};

// ScaleWithCameraDistance
struct ScaleWithCameraDistance_t9FAB35B1541D09F3568ABF6F674718B5716E3821  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform[] ScaleWithCameraDistance::objectsToScale
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___objectsToScale_4;
	// System.Single ScaleWithCameraDistance::maxScale
	float ___maxScale_5;
	// System.Single ScaleWithCameraDistance::minScale
	float ___minScale_6;
	// System.Single ScaleWithCameraDistance::maxDistance
	float ___maxDistance_7;
	// System.Single ScaleWithCameraDistance::minDistance
	float ___minDistance_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<InfoBehavior>
struct List_1_tE2964C13CC7537E3E92E990FA4337841881C802D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InfoBehaviorU5BU5D_t272717D5E40EA80D95C94E4F00AFB0F8D021894C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<InfoBehavior>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// VuforiaLicense

// VuforiaLicense

// TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41

// TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41

// System.Collections.Generic.List`1/Enumerator<InfoBehavior>

// System.Collections.Generic.List`1/Enumerator<InfoBehavior>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// UnityEngine.Events.UnityEvent`1<System.Boolean>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Events.UnityEvent

// UnityEngine.Events.UnityEvent

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// UnityEngine.Touch

// UnityEngine.Touch

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Shader

// UnityEngine.Shader

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Transform

// UnityEngine.Transform

// TS.GazeInteraction.GazeInteractable/OnActivated

// TS.GazeInteraction.GazeInteractable/OnActivated

// TS.GazeInteraction.GazeInteractable/OnEnter

// TS.GazeInteraction.GazeInteractable/OnEnter

// TS.GazeInteraction.GazeInteractable/OnExit

// TS.GazeInteraction.GazeInteractable/OnExit

// TS.GazeInteraction.GazeInteractable/OnStay

// TS.GazeInteraction.GazeInteractable/OnStay

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.MeshRenderer

// UnityEngine.MeshRenderer

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Facecam

// Facecam

// Gaze

// Gaze

// TS.GazeInteraction.GazeInteractable

// TS.GazeInteraction.GazeInteractable

// TS.GazeInteraction.GazeInteractor

// TS.GazeInteraction.GazeInteractor

// TS.GazeInteraction.GazeReticle

// TS.GazeInteraction.GazeReticle

// ImageAssignment

// ImageAssignment

// InfoBehavior

// InfoBehavior

// ModelInteraction

// ModelInteraction

// ModelMovement

// ModelMovement

// NewBehaviourScript

// NewBehaviourScript

// ObjectInteraction

// ObjectInteraction

// ObjectRotator

// ObjectRotator

// ObjectTapController

// ObjectTapController

// Quit

// Quit

// ResolutionManger

// ResolutionManger

// TS.GazeInteraction.ResourcesManager

// TS.GazeInteraction.ResourcesManager

// ScaleObject

// ScaleObject

// ScaleWithCameraDistance

// ScaleWithCameraDistance

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// InfoBehavior[]
struct InfoBehaviorU5BU5D_t272717D5E40EA80D95C94E4F00AFB0F8D021894C  : public RuntimeArray
{
	ALIGN_FIELD (8) InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* m_Items[1];

	inline InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
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
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
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


// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<System.Object>(T[],T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m69589B2C5A44BA495E1A2B1170931D92F9BB6BF1_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___0_arg0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_target, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<InfoBehavior>()
inline InfoBehaviorU5BU5D_t272717D5E40EA80D95C94E4F00AFB0F8D021894C* Object_FindObjectsOfType_TisInfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770_m51C62637B4B3A9734DD4D780864E64B05DEC7936 (const RuntimeMethod* method)
{
	return ((  InfoBehaviorU5BU5D_t272717D5E40EA80D95C94E4F00AFB0F8D021894C* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<InfoBehavior>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tE2964C13CC7537E3E92E990FA4337841881C802D* Enumerable_ToList_TisInfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770_mBEED201FAC9EFAC5425AE2CDCE23C5A3A793B52B (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  List_1_tE2964C13CC7537E3E92E990FA4337841881C802D* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___0_source, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m1B27F500505FFB57D78548B9F5A540A2AD092903 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<InfoBehavior>()
inline InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* GameObject_GetComponent_TisInfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770_m1A46BE2BF879F3AD1E12BECB80A4EB62901F7DD5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Gaze::OpenInfo(InfoBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gaze_OpenInfo_m0CC9E28CDD343AA3BA72824B566DAF63EF73513D (Gaze_tB0DFC265CE9B10885308656CD1E5B3C00CD5A018* __this, InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* ___0_desiredInfo, const RuntimeMethod* method) ;
// System.Void Gaze::CloseAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gaze_CloseAll_m8DB552E55C6C4759D829BC932C4806E6E0900AB9 (Gaze_tB0DFC265CE9B10885308656CD1E5B3C00CD5A018* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<InfoBehavior>::GetEnumerator()
inline Enumerator_t4742F3885684B24988224F331742387375ECCB0B List_1_GetEnumerator_mB6AF1EF99C7CB2ED9897F7D31B2440F2B4270950 (List_1_tE2964C13CC7537E3E92E990FA4337841881C802D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4742F3885684B24988224F331742387375ECCB0B (*) (List_1_tE2964C13CC7537E3E92E990FA4337841881C802D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<InfoBehavior>::Dispose()
inline void Enumerator_Dispose_m1803B345998D262986D0535DF0AFA5E91FD09467 (Enumerator_t4742F3885684B24988224F331742387375ECCB0B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4742F3885684B24988224F331742387375ECCB0B*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<InfoBehavior>::get_Current()
inline InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* Enumerator_get_Current_m1BA4FE82A67593EABBA4EB5A74534C37F4C92A11_inline (Enumerator_t4742F3885684B24988224F331742387375ECCB0B* __this, const RuntimeMethod* method)
{
	return ((  InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* (*) (Enumerator_t4742F3885684B24988224F331742387375ECCB0B*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void InfoBehavior::OpenInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfoBehavior_OpenInfo_m86F790FE228BB2D7B7AA1CD2C0F4F2D0B7D01DB1 (InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* __this, const RuntimeMethod* method) ;
// System.Void InfoBehavior::CloseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfoBehavior_CloseInfo_m4DC682316F503585DC86686D8E131E0C11DF4945 (InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<InfoBehavior>::MoveNext()
inline bool Enumerator_MoveNext_mB56504D6D63A79E020E8E80D415F66BFF897AFA6 (Enumerator_t4742F3885684B24988224F331742387375ECCB0B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4742F3885684B24988224F331742387375ECCB0B*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<InfoBehavior>::.ctor()
inline void List_1__ctor_mC16DF721A950A10D3918B30BCFC79B508F736DEC (List_1_tE2964C13CC7537E3E92E990FA4337841881C802D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE2964C13CC7537E3E92E990FA4337841881C802D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_shader, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void ObjectTapController::DisableAllObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTapController_DisableAllObjects_m404D06B680476AFA2C02E2D7C428483763A5BF91 (ObjectTapController_tA3F354BE481EA7985D70920F9674029607E95FF6* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Array::IndexOf<UnityEngine.GameObject>(T[],T)
inline int32_t Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___0_array, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m69589B2C5A44BA495E1A2B1170931D92F9BB6BF1_gshared)(___0_array, ___1_value, method);
}
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void ObjectTapController::DisableObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTapController_DisableObject_m923A93872F1B6924E32A290C0581401A8C1F86E2 (ObjectTapController_tA3F354BE481EA7985D70920F9674029607E95FF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_objectToDisable, const RuntimeMethod* method) ;
// System.Void ObjectTapController::EnableObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTapController_EnableObject_m4A0BEC239DED7B1B4288AFE3C60E176F0CF3C0AC (ObjectTapController_tA3F354BE481EA7985D70920F9674029607E95FF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_objectToEnable, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::SetResolution(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_SetResolution_m8EDEB77BD1220D9836020BA4FA26D77A10771100 (int32_t ___0_width, int32_t ___1_height, bool ___2_fullscreen, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void ScaleObject::ToggleScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleObject_ToggleScale_m6A884F752EACC9102E18929EEF084B799B1B9C7D (ScaleObject_tFEC639C7199E065811A50D7A499D1B0E26040BA9* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::InverseLerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___0_a, float ___1_b, float ___2_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Collider::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable::set_IsActivated(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeInteractable_set_IsActivated_mA1EAF7098117352BFE0EDF4CBC67650C59777D9A_inline (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable/OnActivated::Invoke(TS.GazeInteraction.GazeInteractable)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_inline (OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable/OnEnter::Invoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_inline (OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
inline void UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, bool ___0_arg0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_gshared)(__this, ___0_arg0, method);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnStay::Invoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_inline (OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_mD754B72714F15210DDA429A096D853852FF437AB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable::InvokeExit(TS.GazeInteraction.GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_InvokeExit_m8BC5D779C8F0F530BC606CD21821574A6F3E760E (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToExit_CoroutineU3Ed__41__ctor_mFE5105AACC120AF952CE22A725FC85EBA486FB75 (U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable/OnExit::Invoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_inline (OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject TS.GazeInteraction.ResourcesManager::GetPrefab(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ResourcesManager_GetPrefab_m2F4AEB9796080F97AA31F851B2762958AA0EC25B (String_t* ___0_file, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TS.GazeInteraction.GazeReticle>()
inline GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* GameObject_GetComponent_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_mE360BA236620C175DE113B3B83EA56DC4BE70D69 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Object::Instantiate<TS.GazeInteraction.GazeReticle>(T)
inline GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* Object_Instantiate_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_m494BDE2B52CA4ADFF325B4087CF8634EF2E60E3C (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* ___0_original, const RuntimeMethod* method)
{
	return ((  GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* (*) (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Void TS.GazeInteraction.GazeReticle::SetInteractor(TS.GazeInteraction.GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_SetInteractor_mF2DCD925F1F9E4B9A6DC4238387168ECEFFDD82E (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, const RuntimeMethod* method) ;
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, float ___2_maxDistance, int32_t ___3_layerMask, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeReticle::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_Enable_mCCCDBC5776CCE29CC7ADF3A8A3209ADE570046EF (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, bool ___0_enable, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractor_Reset_m8300513E17E232E10C9080A9501FE89BA17309D7 (GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* __this, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeReticle::SetTarget(UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_SetTarget_m8EC62A7D1E4174C5737B1C7AA83DF8FBE9661C38 (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_hit, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TS.GazeInteraction.GazeInteractable>()
inline GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* Component_GetComponent_TisGazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1_mA06A7082D6B71337A6408668B71D4E91151B1B87 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable::GazeEnter(TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_GazeEnter_mE8E8AA2F8ACA4F84641D830529C2D8141A6948AF (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable::GazeStay(TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_GazeStay_mA37D7E56B454B93ADD03AB8FC22253D200894B94 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Boolean TS.GazeInteraction.GazeInteractable::get_IsActivable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeInteractable_get_IsActivable_mA496B0244E2D125983932C92265ECF4178E64435_inline (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) ;
// System.Boolean TS.GazeInteraction.GazeInteractable::get_IsActivated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeInteractable_get_IsActivated_mAA24799C2F0ADD578D73AE3062AA13E2F5880632_inline (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeReticle::SetProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_SetProgress_m30FE62EB08375FCDAC365E8B464250DF594B2634 (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, float ___0_progress, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_Activate_mD2439F7B8FB4F5D769BA8ECEE8CBFB0A00E11FCA (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) ;
// System.Void TS.GazeInteraction.GazeInteractable::GazeExit(TS.GazeInteraction.GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_GazeExit_mBD5BAD2578FD581D4680993E4DD76BC759C54939 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_fromDirection, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_toDirection, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_MakePositive(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
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
// System.Void NewBehaviourScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Start_mDEAA416D3A6676A79851DDF6B62D676E53372A87 (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Update_m68CAC9D7524B9FA1DFCA3F99BA694CD73147209B (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript__ctor_mD2E080DE77BCDB61B6D2EC8AD996FAE611B97F3C (NewBehaviourScript_t89363A736D121ACCCE70DC36A66775D2F1D42CF7* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Facecam::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facecam_Start_mA0916B6CB4627B06429C9D0C833B0C12E1826425 (Facecam_tB58D01EEA64BD3EF444A767312368238D986E832* __this, const RuntimeMethod* method) 
{
	{
		// cam = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		__this->___cam_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void Facecam::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facecam_Update_mC0648AF80C15C74F98D38951F308B5C3DEBE6EE2 (Facecam_tB58D01EEA64BD3EF444A767312368238D986E832* __this, const RuntimeMethod* method) 
{
	{
		// transform.LookAt(cam);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___cam_4;
		NullCheck(L_0);
		Transform_LookAt_mA8567593181FD78BBDC2AF29AD99F93BDB2976B2(L_0, L_1, NULL);
		// targetAngle = transform.localEulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localEulerAngles_m358AA9AE8FA24FD1BB7842D231C8644D1C2910C6(L_2, NULL);
		__this->___targetAngle_5 = L_3;
		// targetAngle.x = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___targetAngle_5);
		L_4->___x_2 = (0.0f);
		// targetAngle.z = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___targetAngle_5);
		L_5->___z_4 = (0.0f);
		// transform.localEulerAngles = targetAngle;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___targetAngle_5;
		NullCheck(L_6);
		Transform_set_localEulerAngles_m0458551662A1A51FDCA4C0417282B25D391661DF(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Facecam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Facecam__ctor_m70D0204FC65E65147F00D1A1040CEFB97FD7BA6B (Facecam_tB58D01EEA64BD3EF444A767312368238D986E832* __this, const RuntimeMethod* method) 
{
	{
		// Vector3 targetAngle = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___targetAngle_5 = L_0;
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
// System.Void Gaze::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gaze_Start_mF33ADF10E4D90944D87587DC2D433D0A4BC8D90B (Gaze_tB0DFC265CE9B10885308656CD1E5B3C00CD5A018* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770_mBEED201FAC9EFAC5425AE2CDCE23C5A3A793B52B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisInfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770_m51C62637B4B3A9734DD4D780864E64B05DEC7936_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// infos = FindObjectsOfType<InfoBehavior>().ToList();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		InfoBehaviorU5BU5D_t272717D5E40EA80D95C94E4F00AFB0F8D021894C* L_0;
		L_0 = Object_FindObjectsOfType_TisInfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770_m51C62637B4B3A9734DD4D780864E64B05DEC7936(Object_FindObjectsOfType_TisInfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770_m51C62637B4B3A9734DD4D780864E64B05DEC7936_RuntimeMethod_var);
		List_1_tE2964C13CC7537E3E92E990FA4337841881C802D* L_1;
		L_1 = Enumerable_ToList_TisInfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770_mBEED201FAC9EFAC5425AE2CDCE23C5A3A793B52B((RuntimeObject*)L_0, Enumerable_ToList_TisInfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770_mBEED201FAC9EFAC5425AE2CDCE23C5A3A793B52B_RuntimeMethod_var);
		__this->___infos_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___infos_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void Gaze::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gaze_Update_mDC2445EFF9E3F6E92B7E4A6F01CEBEF5283A24A3 (Gaze_tB0DFC265CE9B10885308656CD1E5B3C00CD5A018* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisInfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770_m1A46BE2BF879F3AD1E12BECB80A4EB62901F7DD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DF1036FC00AD70364E6D248EB7C3A32FC46769C);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// if(Physics.Raycast(transform.position, transform.forward, out RaycastHit hit)){
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		bool L_4;
		L_4 = Physics_Raycast_m1B27F500505FFB57D78548B9F5A540A2AD092903(L_1, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0046;
		}
	}
	{
		// GameObject go = hit.collider.gameObject;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_5;
		L_5 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_0), NULL);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		V_1 = L_6;
		// if(go.CompareTag("hasInfo")){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = GameObject_CompareTag_m6378BE50D009A93D46036F74CC3F7E2ECB0636E5(L_7, _stringLiteral5DF1036FC00AD70364E6D248EB7C3A32FC46769C, NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		// OpenInfo(go.GetComponent<InfoBehavior>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_1;
		NullCheck(L_9);
		InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* L_10;
		L_10 = GameObject_GetComponent_TisInfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770_m1A46BE2BF879F3AD1E12BECB80A4EB62901F7DD5(L_9, GameObject_GetComponent_TisInfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770_m1A46BE2BF879F3AD1E12BECB80A4EB62901F7DD5_RuntimeMethod_var);
		Gaze_OpenInfo_m0CC9E28CDD343AA3BA72824B566DAF63EF73513D(__this, L_10, NULL);
		return;
	}

IL_0046:
	{
		// CloseAll();
		Gaze_CloseAll_m8DB552E55C6C4759D829BC932C4806E6E0900AB9(__this, NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Gaze::OpenInfo(InfoBehavior)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gaze_OpenInfo_m0CC9E28CDD343AA3BA72824B566DAF63EF73513D (Gaze_tB0DFC265CE9B10885308656CD1E5B3C00CD5A018* __this, InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* ___0_desiredInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1803B345998D262986D0535DF0AFA5E91FD09467_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB56504D6D63A79E020E8E80D415F66BFF897AFA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1BA4FE82A67593EABBA4EB5A74534C37F4C92A11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB6AF1EF99C7CB2ED9897F7D31B2440F2B4270950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t4742F3885684B24988224F331742387375ECCB0B V_0;
	memset((&V_0), 0, sizeof(V_0));
	InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* V_1 = NULL;
	{
		// foreach(InfoBehavior info in infos){
		List_1_tE2964C13CC7537E3E92E990FA4337841881C802D* L_0 = __this->___infos_4;
		NullCheck(L_0);
		Enumerator_t4742F3885684B24988224F331742387375ECCB0B L_1;
		L_1 = List_1_GetEnumerator_mB6AF1EF99C7CB2ED9897F7D31B2440F2B4270950(L_0, List_1_GetEnumerator_mB6AF1EF99C7CB2ED9897F7D31B2440F2B4270950_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1803B345998D262986D0535DF0AFA5E91FD09467((&V_0), Enumerator_Dispose_m1803B345998D262986D0535DF0AFA5E91FD09467_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_000e_1:
			{
				// foreach(InfoBehavior info in infos){
				InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* L_2;
				L_2 = Enumerator_get_Current_m1BA4FE82A67593EABBA4EB5A74534C37F4C92A11_inline((&V_0), Enumerator_get_Current_m1BA4FE82A67593EABBA4EB5A74534C37F4C92A11_RuntimeMethod_var);
				V_1 = L_2;
				// if(info == desiredInfo){
				InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* L_3 = V_1;
				InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* L_4 = ___0_desiredInfo;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, L_4, NULL);
				if (!L_5)
				{
					goto IL_0027_1;
				}
			}
			{
				// info.OpenInfo();
				InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* L_6 = V_1;
				NullCheck(L_6);
				InfoBehavior_OpenInfo_m86F790FE228BB2D7B7AA1CD2C0F4F2D0B7D01DB1(L_6, NULL);
				goto IL_002d_1;
			}

IL_0027_1:
			{
				// info.CloseInfo();
				InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* L_7 = V_1;
				NullCheck(L_7);
				InfoBehavior_CloseInfo_m4DC682316F503585DC86686D8E131E0C11DF4945(L_7, NULL);
			}

IL_002d_1:
			{
				// foreach(InfoBehavior info in infos){
				bool L_8;
				L_8 = Enumerator_MoveNext_mB56504D6D63A79E020E8E80D415F66BFF897AFA6((&V_0), Enumerator_MoveNext_mB56504D6D63A79E020E8E80D415F66BFF897AFA6_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Gaze::CloseAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gaze_CloseAll_m8DB552E55C6C4759D829BC932C4806E6E0900AB9 (Gaze_tB0DFC265CE9B10885308656CD1E5B3C00CD5A018* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1803B345998D262986D0535DF0AFA5E91FD09467_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB56504D6D63A79E020E8E80D415F66BFF897AFA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1BA4FE82A67593EABBA4EB5A74534C37F4C92A11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mB6AF1EF99C7CB2ED9897F7D31B2440F2B4270950_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t4742F3885684B24988224F331742387375ECCB0B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach(InfoBehavior info in infos){
		List_1_tE2964C13CC7537E3E92E990FA4337841881C802D* L_0 = __this->___infos_4;
		NullCheck(L_0);
		Enumerator_t4742F3885684B24988224F331742387375ECCB0B L_1;
		L_1 = List_1_GetEnumerator_mB6AF1EF99C7CB2ED9897F7D31B2440F2B4270950(L_0, List_1_GetEnumerator_mB6AF1EF99C7CB2ED9897F7D31B2440F2B4270950_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1803B345998D262986D0535DF0AFA5E91FD09467((&V_0), Enumerator_Dispose_m1803B345998D262986D0535DF0AFA5E91FD09467_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach(InfoBehavior info in infos){
				InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* L_2;
				L_2 = Enumerator_get_Current_m1BA4FE82A67593EABBA4EB5A74534C37F4C92A11_inline((&V_0), Enumerator_get_Current_m1BA4FE82A67593EABBA4EB5A74534C37F4C92A11_RuntimeMethod_var);
				// info.CloseInfo();
				NullCheck(L_2);
				InfoBehavior_CloseInfo_m4DC682316F503585DC86686D8E131E0C11DF4945(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach(InfoBehavior info in infos){
				bool L_3;
				L_3 = Enumerator_MoveNext_mB56504D6D63A79E020E8E80D415F66BFF897AFA6((&V_0), Enumerator_MoveNext_mB56504D6D63A79E020E8E80D415F66BFF897AFA6_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void Gaze::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gaze__ctor_m9BEEE158C8674DDB485F38066923028E57D5D15F (Gaze_tB0DFC265CE9B10885308656CD1E5B3C00CD5A018* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC16DF721A950A10D3918B30BCFC79B508F736DEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE2964C13CC7537E3E92E990FA4337841881C802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<InfoBehavior> infos = new List<InfoBehavior>();
		List_1_tE2964C13CC7537E3E92E990FA4337841881C802D* L_0 = (List_1_tE2964C13CC7537E3E92E990FA4337841881C802D*)il2cpp_codegen_object_new(List_1_tE2964C13CC7537E3E92E990FA4337841881C802D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC16DF721A950A10D3918B30BCFC79B508F736DEC(L_0, List_1__ctor_mC16DF721A950A10D3918B30BCFC79B508F736DEC_RuntimeMethod_var);
		__this->___infos_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___infos_4), (void*)L_0);
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
// System.Void ImageAssignment::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageAssignment_Start_m0391DE77BC0325BBBC8966DE1B0E18D4F6CC03CF (ImageAssignment_tE08F1489CBD3B51DBADDF30A0A49B6C52BD287AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	{
		// MeshRenderer meshRenderer = GetComponent<MeshRenderer>();
		MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* L_0;
		L_0 = Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB(__this, Component_GetComponent_TisMeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE_m0EDA0079FA3617687C4A28623B79A37D618D9CFB_RuntimeMethod_var);
		// Material material = new Material(Shader.Find("Standard"));
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1;
		L_1 = Shader_Find_m183AA54F78320212DDEC811592F98456898A41C5(_stringLiteral2620038B8A71EF21A205CC921576171A3CA9B0F4, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Material__ctor_m7FDF47105D66D19591BE505A0C42B0F90D88C9BF(L_2, L_1, NULL);
		V_0 = L_2;
		// material.mainTexture = image;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = V_0;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = __this->___image_4;
		NullCheck(L_3);
		Material_set_mainTexture_m389E048BA9C81B603EBF36BD792212B296317AC0(L_3, L_4, NULL);
		// meshRenderer.material = material;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5 = V_0;
		NullCheck(L_0);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void ImageAssignment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageAssignment__ctor_m65CF824ACAAE284D5A0FF733B58AA228E8B7DA23 (ImageAssignment_tE08F1489CBD3B51DBADDF30A0A49B6C52BD287AF* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void InfoBehavior::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfoBehavior_Update_mF66C2313A8E25A452E934F7714EA617DECF3D626 (InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* __this, const RuntimeMethod* method) 
{
	{
		// SectionInfo.localScale = Vector3.Lerp(SectionInfo.localScale, desiredScale, Time.deltaTime * SPEED);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___SectionInfo_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___SectionInfo_5;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___desiredScale_6;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_2, L_3, ((float)il2cpp_codegen_multiply(L_4, (6.0f))), NULL);
		NullCheck(L_0);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void InfoBehavior::OpenInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfoBehavior_OpenInfo_m86F790FE228BB2D7B7AA1CD2C0F4F2D0B7D01DB1 (InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* __this, const RuntimeMethod* method) 
{
	{
		// desiredScale = Vector3.one;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		__this->___desiredScale_6 = L_0;
		// }
		return;
	}
}
// System.Void InfoBehavior::CloseInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfoBehavior_CloseInfo_m4DC682316F503585DC86686D8E131E0C11DF4945 (InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* __this, const RuntimeMethod* method) 
{
	{
		// desiredScale = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___desiredScale_6 = L_0;
		// }
		return;
	}
}
// System.Void InfoBehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfoBehavior__ctor_m844E84B5334A0CE7E54C863C6622E55E5EE0D57C (InfoBehavior_t2400FA6257695CF7C73AFBA710D6460FCD2A1770* __this, const RuntimeMethod* method) 
{
	{
		// Vector3 desiredScale = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___desiredScale_6 = L_0;
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
// System.Void ModelInteraction::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelInteraction_Update_mD0DC120F0D81F3241E334A895CDD913AF7E07E45 (ModelInteraction_t698F23C44140C5E17CED497C4CA92A23ED78E0AA* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_10;
	memset((&V_10), 0, sizeof(V_10));
	{
		// if (Input.touchCount == 1)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0152;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_0050;
		}
	}
	{
		// initialTouchPosition = touch.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		__this->___initialTouchPosition_6 = L_3;
		// initialModelPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___initialModelPosition_7 = L_5;
		// initialScale = transform.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_6, NULL);
		float L_8 = L_7.___x_2;
		__this->___initialScale_8 = L_8;
		return;
	}

IL_0050:
	{
		// else if (touch.phase == TouchPhase.Moved)
		int32_t L_9;
		L_9 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_0220;
		}
	}
	{
		// Vector2 touchDeltaPosition = touch.position - initialTouchPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = __this->___initialTouchPosition_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_10, L_11, NULL);
		V_1 = L_12;
		// Vector3 movement = new Vector3(touchDeltaPosition.x, touchDeltaPosition.y, 0) * moveSpeed * Time.deltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		float L_14 = L_13.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		float L_16 = L_15.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_17), L_14, L_16, (0.0f), /*hidden argument*/NULL);
		float L_18 = __this->___moveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, L_18, NULL);
		float L_20;
		L_20 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		V_2 = L_21;
		// Vector3 newPosition = initialModelPosition + movement;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___initialModelPosition_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_22, L_23, NULL);
		V_3 = L_24;
		// newPosition.x = Mathf.Clamp(newPosition.x, initialModelPosition.x - 1f, initialModelPosition.x + 1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_3;
		float L_26 = L_25.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_27 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___initialModelPosition_7);
		float L_28 = L_27->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___initialModelPosition_7);
		float L_30 = L_29->___x_2;
		float L_31;
		L_31 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_26, ((float)il2cpp_codegen_subtract(L_28, (1.0f))), ((float)il2cpp_codegen_add(L_30, (1.0f))), NULL);
		(&V_3)->___x_2 = L_31;
		// newPosition.y = Mathf.Clamp(newPosition.y, initialModelPosition.y - 1f, initialModelPosition.y + 1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_3;
		float L_33 = L_32.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_34 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___initialModelPosition_7);
		float L_35 = L_34->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_36 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___initialModelPosition_7);
		float L_37 = L_36->___y_3;
		float L_38;
		L_38 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_33, ((float)il2cpp_codegen_subtract(L_35, (1.0f))), ((float)il2cpp_codegen_add(L_37, (1.0f))), NULL);
		(&V_3)->___y_3 = L_38;
		// newPosition.z = Mathf.Clamp(newPosition.z, initialModelPosition.z - 1f, initialModelPosition.z + 1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_3;
		float L_40 = L_39.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_41 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___initialModelPosition_7);
		float L_42 = L_41->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_43 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___initialModelPosition_7);
		float L_44 = L_43->___z_4;
		float L_45;
		L_45 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_40, ((float)il2cpp_codegen_subtract(L_42, (1.0f))), ((float)il2cpp_codegen_add(L_44, (1.0f))), NULL);
		(&V_3)->___z_4 = L_45;
		// transform.position = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_3;
		NullCheck(L_46);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_46, L_47, NULL);
		return;
	}

IL_0152:
	{
		// else if (Input.touchCount == 2)
		int32_t L_48;
		L_48 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((!(((uint32_t)L_48) == ((uint32_t)2))))
		{
			goto IL_0220;
		}
	}
	{
		// Touch touch1 = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_49;
		L_49 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_4 = L_49;
		// Touch touch2 = Input.GetTouch(1);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_50;
		L_50 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(1, NULL);
		V_5 = L_50;
		// if (touch1.phase == TouchPhase.Moved || touch2.phase == TouchPhase.Moved)
		int32_t L_51;
		L_51 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_4), NULL);
		if ((((int32_t)L_51) == ((int32_t)1)))
		{
			goto IL_0184;
		}
	}
	{
		int32_t L_52;
		L_52 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_5), NULL);
		if ((!(((uint32_t)L_52) == ((uint32_t)1))))
		{
			goto IL_0220;
		}
	}

IL_0184:
	{
		// Vector2 touch1PrevPos = touch1.position - touch1.deltaPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		L_53 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_54;
		L_54 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55;
		L_55 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_53, L_54, NULL);
		// Vector2 touch2PrevPos = touch2.position - touch2.deltaPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_56;
		L_56 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_5), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		L_57 = Touch_get_deltaPosition_m2D51F960B74C94821ED0F6A09E44C80FD796D299((&V_5), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58;
		L_58 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_56, L_57, NULL);
		V_6 = L_58;
		// float prevTouchDeltaMag = (touch1PrevPos - touch2PrevPos).magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60;
		L_60 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_55, L_59, NULL);
		V_10 = L_60;
		float L_61;
		L_61 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_10), NULL);
		// float touchDeltaMag = (touch1.position - touch2.position).magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62;
		L_62 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_4), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63;
		L_63 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_5), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64;
		L_64 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_62, L_63, NULL);
		V_10 = L_64;
		float L_65;
		L_65 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline((&V_10), NULL);
		V_7 = L_65;
		// float deltaMagnitudeDiff = prevTouchDeltaMag - touchDeltaMag;
		float L_66 = V_7;
		V_8 = ((float)il2cpp_codegen_subtract(L_61, L_66));
		// float newScale = initialScale + deltaMagnitudeDiff * scaleSpeed * Time.deltaTime;
		float L_67 = __this->___initialScale_8;
		float L_68 = V_8;
		float L_69 = __this->___scaleSpeed_5;
		float L_70;
		L_70 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_9 = ((float)il2cpp_codegen_add(L_67, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_68, L_69)), L_70))));
		// newScale = Mathf.Clamp(newScale, 0.05f, 0.1f);
		float L_71 = V_9;
		float L_72;
		L_72 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_71, (0.0500000007f), (0.100000001f), NULL);
		V_9 = L_72;
		// transform.localScale = new Vector3(newScale, newScale, newScale);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_74 = V_9;
		float L_75 = V_9;
		float L_76 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		memset((&L_77), 0, sizeof(L_77));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_77), L_74, L_75, L_76, /*hidden argument*/NULL);
		NullCheck(L_73);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_73, L_77, NULL);
	}

IL_0220:
	{
		// }
		return;
	}
}
// System.Void ModelInteraction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelInteraction__ctor_mDBC1B0FD0949D40FC9910B1B1428C0DFBAEED50E (ModelInteraction_t698F23C44140C5E17CED497C4CA92A23ED78E0AA* __this, const RuntimeMethod* method) 
{
	{
		// private float moveSpeed = 0.01f; // Speed at which the model moves
		__this->___moveSpeed_4 = (0.00999999978f);
		// private float scaleSpeed = 0.01f; // Speed at which the model scales
		__this->___scaleSpeed_5 = (0.00999999978f);
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
// System.Void ModelMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelMovement_Update_mB5B2A879A8833F2F10CC8CD9AFE0487C7703CB1F (ModelMovement_t56CC2334D04B814A00651E203A75E05D8819621A* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (Input.touchCount == 1)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_013b;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_003a;
		}
	}
	{
		// initialTouchPosition = touch.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		__this->___initialTouchPosition_5 = L_3;
		// initialModelPosition = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		__this->___initialModelPosition_6 = L_5;
		return;
	}

IL_003a:
	{
		// else if (touch.phase == TouchPhase.Moved)
		int32_t L_6;
		L_6 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_013b;
		}
	}
	{
		// Vector2 touchDeltaPosition = touch.position - initialTouchPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = __this->___initialTouchPosition_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_7, L_8, NULL);
		V_1 = L_9;
		// Vector3 movement = new Vector3(touchDeltaPosition.x, touchDeltaPosition.y, 0) * moveSpeed * Time.deltaTime;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_1;
		float L_11 = L_10.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		float L_13 = L_12.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_11, L_13, (0.0f), /*hidden argument*/NULL);
		float L_15 = __this->___moveSpeed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		float L_17;
		L_17 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_16, L_17, NULL);
		V_2 = L_18;
		// Vector3 newPosition = initialModelPosition + movement;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = __this->___initialModelPosition_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_19, L_20, NULL);
		V_3 = L_21;
		// newPosition.x = Mathf.Clamp(newPosition.x, initialModelPosition.x - 1f, initialModelPosition.x + 1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_3;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___initialModelPosition_6);
		float L_25 = L_24->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_26 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___initialModelPosition_6);
		float L_27 = L_26->___x_2;
		float L_28;
		L_28 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_23, ((float)il2cpp_codegen_subtract(L_25, (1.0f))), ((float)il2cpp_codegen_add(L_27, (1.0f))), NULL);
		(&V_3)->___x_2 = L_28;
		// newPosition.y = Mathf.Clamp(newPosition.y, initialModelPosition.y - 1f, initialModelPosition.y + 1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_3;
		float L_30 = L_29.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___initialModelPosition_6);
		float L_32 = L_31->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___initialModelPosition_6);
		float L_34 = L_33->___y_3;
		float L_35;
		L_35 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_30, ((float)il2cpp_codegen_subtract(L_32, (1.0f))), ((float)il2cpp_codegen_add(L_34, (1.0f))), NULL);
		(&V_3)->___y_3 = L_35;
		// newPosition.z = Mathf.Clamp(newPosition.z, initialModelPosition.z - 1f, initialModelPosition.z + 1f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_3;
		float L_37 = L_36.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___initialModelPosition_6);
		float L_39 = L_38->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_40 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___initialModelPosition_6);
		float L_41 = L_40->___z_4;
		float L_42;
		L_42 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_37, ((float)il2cpp_codegen_subtract(L_39, (1.0f))), ((float)il2cpp_codegen_add(L_41, (1.0f))), NULL);
		(&V_3)->___z_4 = L_42;
		// transform.position = newPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_3;
		NullCheck(L_43);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_43, L_44, NULL);
	}

IL_013b:
	{
		// }
		return;
	}
}
// System.Void ModelMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModelMovement__ctor_m6FFB133F86719AB7653F891ABE507443FAF98440 (ModelMovement_t56CC2334D04B814A00651E203A75E05D8819621A* __this, const RuntimeMethod* method) 
{
	{
		// private float moveSpeed = 0.05f; // Speed at which the model moves
		__this->___moveSpeed_4 = (0.0500000007f);
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
// System.Void ObjectInteraction::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInteraction_Start_m5A7F661C5C278DB61F090E0B16C8A3AD2E326249 (ObjectInteraction_t812F1E5C05C446B26F40C75C48CD91B80A1A13F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// objectRigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___objectRigidbody_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectRigidbody_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void ObjectInteraction::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInteraction_Update_mCDFF609A31F42C87F98B44F5DBFEC693517DD206 (ObjectInteraction_t812F1E5C05C446B26F40C75C48CD91B80A1A13F8* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00be;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// if (touch.phase == TouchPhase.Began)
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_0047;
		}
	}
	{
		// if (!isDragging)
		bool L_3 = __this->___isDragging_4;
		if (L_3)
		{
			goto IL_00be;
		}
	}
	{
		// isDragging = true;
		__this->___isDragging_4 = (bool)1;
		// dragStartPosition = touch.position;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		__this->___dragStartPosition_5 = L_4;
		// objectRigidbody.isKinematic = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_5 = __this->___objectRigidbody_6;
		NullCheck(L_5);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_5, (bool)1, NULL);
		return;
	}

IL_0047:
	{
		// else if (touch.phase == TouchPhase.Moved)
		int32_t L_6;
		L_6 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0099;
		}
	}
	{
		// if (isDragging)
		bool L_7 = __this->___isDragging_4;
		if (!L_7)
		{
			goto IL_00be;
		}
	}
	{
		// Vector2 delta = touch.position - dragStartPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = __this->___dragStartPosition_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_8, L_9, NULL);
		// float deltaX = delta.x / Screen.width;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = L_10;
		float L_12 = L_11.___x_0;
		int32_t L_13;
		L_13 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		V_1 = ((float)(L_12/((float)L_13)));
		// float deltaY = delta.y / Screen.height;
		float L_14 = L_11.___y_1;
		int32_t L_15;
		L_15 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		V_2 = ((float)(L_14/((float)L_15)));
		// transform.Translate(deltaX, 0, deltaY);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_17 = V_1;
		float L_18 = V_2;
		NullCheck(L_16);
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_16, L_17, (0.0f), L_18, NULL);
		return;
	}

IL_0099:
	{
		// else if (touch.phase == TouchPhase.Ended)
		int32_t L_19;
		L_19 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if ((!(((uint32_t)L_19) == ((uint32_t)3))))
		{
			goto IL_00be;
		}
	}
	{
		// if (isDragging)
		bool L_20 = __this->___isDragging_4;
		if (!L_20)
		{
			goto IL_00be;
		}
	}
	{
		// isDragging = false;
		__this->___isDragging_4 = (bool)0;
		// objectRigidbody.isKinematic = false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_21 = __this->___objectRigidbody_6;
		NullCheck(L_21);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_21, (bool)0, NULL);
	}

IL_00be:
	{
		// }
		return;
	}
}
// System.Void ObjectInteraction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectInteraction__ctor_mB03DA3636B9E0300F92F9BAB74DBA779ADC0D1A5 (ObjectInteraction_t812F1E5C05C446B26F40C75C48CD91B80A1A13F8* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void ObjectRotator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRotator_Update_m75ACC59FC603D29495E61A05F845B7F709E6D4AC (ObjectRotator_t01C1E6B39EFE87B7EC66C546EF87AFFD968D4BA8* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Quaternion currentRotation = transform.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_0, NULL);
		V_0 = L_1;
		// Quaternion desiredRotation = Quaternion.Euler(currentRotation.eulerAngles + new Vector3(0f, rotationSpeed * Time.deltaTime, 0f));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline((&V_0), NULL);
		float L_3 = __this->___rotationSpeed_4;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), (0.0f), ((float)il2cpp_codegen_multiply(L_3, L_4)), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_6, NULL);
		V_1 = L_7;
		// transform.rotation = desiredRotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = V_1;
		NullCheck(L_8);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void ObjectRotator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectRotator__ctor_m33F1D1662A9EB685182D96E4A8FB0876075EC29B (ObjectRotator_t01C1E6B39EFE87B7EC66C546EF87AFFD968D4BA8* __this, const RuntimeMethod* method) 
{
	{
		// public float rotationSpeed = 1f; // Speed of rotation in degrees per second
		__this->___rotationSpeed_4 = (1.0f);
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
// System.Void ObjectTapController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTapController_Start_m15C951B9879CCF47E04097C81315D3EA11024AAD (ObjectTapController_tA3F354BE481EA7985D70920F9674029607E95FF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DisableAllObjects();
		ObjectTapController_DisableAllObjects_m404D06B680476AFA2C02E2D7C428483763A5BF91(__this, NULL);
		// areObjectsEnabled = new bool[objectsToTap.Length];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___objectsToTap_4;
		NullCheck(L_0);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		__this->___areObjectsEnabled_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___areObjectsEnabled_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void ObjectTapController::DisableAllObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTapController_DisableAllObjects_m404D06B680476AFA2C02E2D7C428483763A5BF91 (ObjectTapController_tA3F354BE481EA7985D70920F9674029607E95FF6* __this, const RuntimeMethod* method) 
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (GameObject obj in objectsToEnableDisable)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___objectsToEnableDisable_5;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach (GameObject obj in objectsToEnableDisable)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// obj.SetActive(false);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0018:
	{
		// foreach (GameObject obj in objectsToEnableDisable)
		int32_t L_6 = V_1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ObjectTapController::EnableObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTapController_EnableObject_m4A0BEC239DED7B1B4288AFE3C60E176F0CF3C0AC (ObjectTapController_tA3F354BE481EA7985D70920F9674029607E95FF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_objectToEnable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// DisableAllObjects();
		ObjectTapController_DisableAllObjects_m404D06B680476AFA2C02E2D7C428483763A5BF91(__this, NULL);
		// int index = System.Array.IndexOf(objectsToEnableDisable, objectToEnable);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___objectsToEnableDisable_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_objectToEnable;
		int32_t L_2;
		L_2 = Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB(L_0, L_1, Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB_RuntimeMethod_var);
		V_0 = L_2;
		// objectToEnable.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_objectToEnable;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// areObjectsEnabled[index] = true;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = __this->___areObjectsEnabled_6;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (bool)1);
		// }
		return;
	}
}
// System.Void ObjectTapController::DisableObject(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTapController_DisableObject_m923A93872F1B6924E32A290C0581401A8C1F86E2 (ObjectTapController_tA3F354BE481EA7985D70920F9674029607E95FF6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_objectToDisable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = System.Array.IndexOf(objectsToEnableDisable, objectToDisable);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___objectsToEnableDisable_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_objectToDisable;
		int32_t L_2;
		L_2 = Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB(L_0, L_1, Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB_RuntimeMethod_var);
		V_0 = L_2;
		// objectToDisable.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_objectToDisable;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// areObjectsEnabled[index] = false;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = __this->___areObjectsEnabled_6;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (bool)0);
		// }
		return;
	}
}
// System.Void ObjectTapController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTapController_Update_mF110873B5C5BD45963E68607AAB6ED92AC906309 (ObjectTapController_tA3F354BE481EA7985D70920F9674029607E95FF6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00ac;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_00ac;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_4;
		L_4 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_5, NULL);
		NullCheck(L_3);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7;
		L_7 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_3, L_6, NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_8;
		L_8 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_7, (&V_1), NULL);
		if (!L_8)
		{
			goto IL_00ac;
		}
	}
	{
		// if (System.Array.IndexOf(objectsToTap, hit.transform.gameObject) >= 0)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_9 = __this->___objectsToTap_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		int32_t L_12;
		L_12 = Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB(L_9, L_11, Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_00ac;
		}
	}
	{
		// GameObject tappedObject = objectsToEnableDisable[System.Array.IndexOf(objectsToTap, hit.transform.gameObject)];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = __this->___objectsToEnableDisable_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___objectsToTap_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		int32_t L_17;
		L_17 = Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB(L_14, L_16, Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB_RuntimeMethod_var);
		NullCheck(L_13);
		int32_t L_18 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_2 = L_19;
		// bool isTappedObjectEnabled = areObjectsEnabled[System.Array.IndexOf(objectsToTap, hit.transform.gameObject)];
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_20 = __this->___areObjectsEnabled_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = __this->___objectsToTap_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		int32_t L_24;
		L_24 = Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB(L_21, L_23, Array_IndexOf_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mE36E8B09136A1DC8C80C01AE3469E82F2B6F87CB_RuntimeMethod_var);
		NullCheck(L_20);
		int32_t L_25 = L_24;
		uint8_t L_26 = (uint8_t)(L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		// if (isTappedObjectEnabled)
		if (!L_26)
		{
			goto IL_00a5;
		}
	}
	{
		// DisableObject(tappedObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_2;
		ObjectTapController_DisableObject_m923A93872F1B6924E32A290C0581401A8C1F86E2(__this, L_27, NULL);
		return;
	}

IL_00a5:
	{
		// EnableObject(tappedObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_2;
		ObjectTapController_EnableObject_m4A0BEC239DED7B1B4288AFE3C60E176F0CF3C0AC(__this, L_28, NULL);
	}

IL_00ac:
	{
		// }
		return;
	}
}
// System.Void ObjectTapController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectTapController__ctor_mA5F9A8CD231B979F72F7897E6A0A14DB2B6A5D62 (ObjectTapController_tA3F354BE481EA7985D70920F9674029607E95FF6* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Quit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quit_Start_m033A99F763D22B87236EB23E02243834B9CCF280 (Quit_tD52791116DF223EC8394DC3E473F3E4788F9F2F2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Quit::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quit_Update_m0ACBFC7352DC28E4E3F0FD0CB563C8E717681F9B (Quit_tD52791116DF223EC8394DC3E473F3E4788F9F2F2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Quit::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quit_QuitGame_m576E696007EEE01FF50CCBF02F57BDB275102FF5 (Quit_tD52791116DF223EC8394DC3E473F3E4788F9F2F2* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void Quit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quit__ctor_m3F91DC1CD69CEDC58473E2984694380137C228C0 (Quit_tD52791116DF223EC8394DC3E473F3E4788F9F2F2* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void ResolutionManger::SetWidth(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResolutionManger_SetWidth_m9BD0CB489F0AB157C2BFB15FB01FAB53174C6DAE (ResolutionManger_t08B1EBBECCCF6B29652FCA10A19CE781040979BD* __this, int32_t ___0_newWidth, const RuntimeMethod* method) 
{
	{
		// width =newWidth;
		int32_t L_0 = ___0_newWidth;
		__this->___width_4 = L_0;
		// }
		return;
	}
}
// System.Void ResolutionManger::SetHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResolutionManger_SetHeight_m7933859933D1BE25D3F0E25B561D4B4100CFE5D6 (ResolutionManger_t08B1EBBECCCF6B29652FCA10A19CE781040979BD* __this, int32_t ___0_newHeight, const RuntimeMethod* method) 
{
	{
		// height = newHeight;
		int32_t L_0 = ___0_newHeight;
		__this->___height_5 = L_0;
		// }
		return;
	}
}
// System.Void ResolutionManger::SetRes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResolutionManger_SetRes_m3C01480FC55719A0CB89F78BB73062594A372AEA (ResolutionManger_t08B1EBBECCCF6B29652FCA10A19CE781040979BD* __this, const RuntimeMethod* method) 
{
	{
		// Screen.SetResolution(width, height, false);
		int32_t L_0 = __this->___width_4;
		int32_t L_1 = __this->___height_5;
		Screen_SetResolution_m8EDEB77BD1220D9836020BA4FA26D77A10771100(L_0, L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ResolutionManger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResolutionManger__ctor_mEBAA88034890BE5B2C19D13ED328CD8F2D833697 (ResolutionManger_t08B1EBBECCCF6B29652FCA10A19CE781040979BD* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void ScaleObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleObject_Start_mB732049DA1ECBE1B3B938B16A5EAE111204741F7 (ScaleObject_tFEC639C7199E065811A50D7A499D1B0E26040BA9* __this, const RuntimeMethod* method) 
{
	{
		// initialScale = objectToScale.transform.localScale;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___objectToScale_5;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_1, NULL);
		__this->___initialScale_8 = L_2;
		// }
		return;
	}
}
// System.Void ScaleObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleObject_Update_m1072CD81BE21D55B0E1DA9C3D76548CB9724EC57 (ScaleObject_tFEC639C7199E065811A50D7A499D1B0E26040BA9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1EBBA863C4CF7E0932C8325E2A21E01AD33310F);
		s_Il2CppMethodInitialized = true;
	}
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Input.touchCount > 0)
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		// Touch touch = Input.GetTouch(0);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		// print("clicked");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteralC1EBBA863C4CF7E0932C8325E2A21E01AD33310F, NULL);
		// if (touch.phase == TouchPhase.Began)
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		if (L_2)
		{
			goto IL_0061;
		}
	}
	{
		// Ray ray = mainCamera.ScreenPointToRay(touch.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___mainCamera_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		NullCheck(L_3);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_6;
		L_6 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_3, L_5, NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_7;
		L_7 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_6, (&V_1), NULL);
		if (!L_7)
		{
			goto IL_0061;
		}
	}
	{
		// if (hit.collider.gameObject == gameObject)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_8;
		L_8 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&V_1), NULL);
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		// ToggleScale();
		ScaleObject_ToggleScale_m6A884F752EACC9102E18929EEF084B799B1B9C7D(__this, NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void ScaleObject::ToggleScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleObject_ToggleScale_m6A884F752EACC9102E18929EEF084B799B1B9C7D (ScaleObject_tFEC639C7199E065811A50D7A499D1B0E26040BA9* __this, const RuntimeMethod* method) 
{
	{
		// if (isScaled)
		bool L_0 = __this->___isScaled_7;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		// objectToScale.transform.localScale = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___objectToScale_5;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		NullCheck(L_2);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_2, L_3, NULL);
		goto IL_0040;
	}

IL_001f:
	{
		// objectToScale.transform.localScale = initialScale * scaleAmount;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___objectToScale_5;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___initialScale_8;
		float L_7 = __this->___scaleAmount_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		NullCheck(L_5);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_5, L_8, NULL);
	}

IL_0040:
	{
		// isScaled = !isScaled;
		bool L_9 = __this->___isScaled_7;
		__this->___isScaled_7 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void ScaleObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleObject__ctor_m3EC259093FDA3FE7380BB21FFD6F49ED1517ED08 (ScaleObject_tFEC639C7199E065811A50D7A499D1B0E26040BA9* __this, const RuntimeMethod* method) 
{
	{
		// public float scaleAmount = 1.2f;
		__this->___scaleAmount_6 = (1.20000005f);
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
// System.Void ScaleWithCameraDistance::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleWithCameraDistance_Update_m5AE7784F928EF479E187EF8C6DF8CC588A1FF79D (ScaleWithCameraDistance_t9FAB35B1541D09F3568ABF6F674718B5716E3821* __this, const RuntimeMethod* method) 
{
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* V_0 = NULL;
	int32_t V_1 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	{
		// foreach (Transform objectToScale in objectsToScale)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___objectsToScale_4;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0064;
	}

IL_000b:
	{
		// foreach (Transform objectToScale in objectsToScale)
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// float distance = Vector3.Distance(Camera.main.transform.position, objectToScale.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5;
		L_5 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_2;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10;
		L_10 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_7, L_9, NULL);
		V_3 = L_10;
		// float newScale = Mathf.Lerp(maxScale, minScale, Mathf.InverseLerp(minDistance, maxDistance, distance));
		float L_11 = __this->___maxScale_5;
		float L_12 = __this->___minScale_6;
		float L_13 = __this->___minDistance_8;
		float L_14 = __this->___maxDistance_7;
		float L_15 = V_3;
		float L_16;
		L_16 = Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline(L_13, L_14, L_15, NULL);
		float L_17;
		L_17 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_11, L_12, L_16, NULL);
		V_4 = L_17;
		// objectToScale.localScale = new Vector3(newScale, newScale, newScale);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_2;
		float L_19 = V_4;
		float L_20 = V_4;
		float L_21 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), L_19, L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_18, L_22, NULL);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0064:
	{
		// foreach (Transform objectToScale in objectsToScale)
		int32_t L_24 = V_1;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_25 = V_0;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ScaleWithCameraDistance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleWithCameraDistance__ctor_m0E9B89DC1C7565A476E7115C2A857F41FAC50098 (ScaleWithCameraDistance_t9FAB35B1541D09F3568ABF6F674718B5716E3821* __this, const RuntimeMethod* method) 
{
	{
		// public float maxScale = 2f;
		__this->___maxScale_5 = (2.0f);
		// public float minScale = 0.5f;
		__this->___minScale_6 = (0.5f);
		// public float maxDistance = 10f;
		__this->___maxDistance_7 = (10.0f);
		// public float minDistance = 2f;
		__this->___minDistance_8 = (2.0f);
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
// System.String VuforiaLicense::GetLicenseKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* VuforiaLicense_GetLicenseKey_m796D51E5EF1C53F3D62BA4EA8806AC1FB1A5E3C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF015DB17E8176FD189CF6FCFCD07A505E680D380);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return license;
		return _stringLiteralF015DB17E8176FD189CF6FCFCD07A505E680D380;
	}
}
// System.Void VuforiaLicense::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaLicense__ctor_m094B92B3323DFFD79ADB696474D5D158C95E291B (VuforiaLicense_t558A3A93186A45EF8A9401D2262B52B5593182BC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void TS.GazeInteraction.GazeInteractable::add_Enter(TS.GazeInteraction.GazeInteractable/OnEnter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_add_Enter_mB3370B15241518A0C24A472D6242AC4700734AF7 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* V_0 = NULL;
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* V_1 = NULL;
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* V_2 = NULL;
	{
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_0 = __this->___Enter_5;
		V_0 = L_0;
	}

IL_0007:
	{
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_1 = V_0;
		V_1 = L_1;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_2 = V_1;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*)CastclassSealed((RuntimeObject*)L_4, OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD_il2cpp_TypeInfo_var));
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD** L_5 = (OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD**)(&__this->___Enter_5);
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_6 = V_2;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_7 = V_1;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_9 = V_0;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*)L_9) == ((RuntimeObject*)(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::remove_Enter(TS.GazeInteraction.GazeInteractable/OnEnter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_remove_Enter_mF0D8AD70866AC7C4AA2F01A2C2C98B8A166FC209 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* V_0 = NULL;
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* V_1 = NULL;
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* V_2 = NULL;
	{
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_0 = __this->___Enter_5;
		V_0 = L_0;
	}

IL_0007:
	{
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_1 = V_0;
		V_1 = L_1;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_2 = V_1;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*)CastclassSealed((RuntimeObject*)L_4, OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD_il2cpp_TypeInfo_var));
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD** L_5 = (OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD**)(&__this->___Enter_5);
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_6 = V_2;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_7 = V_1;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_9 = V_0;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*)L_9) == ((RuntimeObject*)(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::add_Stay(TS.GazeInteraction.GazeInteractable/OnStay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_add_Stay_m27062BD82655D41E48962A59C622FC4E1858A001 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* V_0 = NULL;
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* V_1 = NULL;
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* V_2 = NULL;
	{
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_0 = __this->___Stay_6;
		V_0 = L_0;
	}

IL_0007:
	{
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_1 = V_0;
		V_1 = L_1;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_2 = V_1;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*)CastclassSealed((RuntimeObject*)L_4, OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF_il2cpp_TypeInfo_var));
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF** L_5 = (OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF**)(&__this->___Stay_6);
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_6 = V_2;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_7 = V_1;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_9 = V_0;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*)L_9) == ((RuntimeObject*)(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::remove_Stay(TS.GazeInteraction.GazeInteractable/OnStay)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_remove_Stay_m18BE19D5B85D648439B3747F6561B5CEB733EB68 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* V_0 = NULL;
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* V_1 = NULL;
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* V_2 = NULL;
	{
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_0 = __this->___Stay_6;
		V_0 = L_0;
	}

IL_0007:
	{
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_1 = V_0;
		V_1 = L_1;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_2 = V_1;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*)CastclassSealed((RuntimeObject*)L_4, OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF_il2cpp_TypeInfo_var));
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF** L_5 = (OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF**)(&__this->___Stay_6);
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_6 = V_2;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_7 = V_1;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_9 = V_0;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*)L_9) == ((RuntimeObject*)(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::add_Exit(TS.GazeInteraction.GazeInteractable/OnExit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_add_Exit_m685F118DE9CD35EE826F0C1C29DA7219C802CC06 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* V_0 = NULL;
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* V_1 = NULL;
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* V_2 = NULL;
	{
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_0 = __this->___Exit_7;
		V_0 = L_0;
	}

IL_0007:
	{
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_1 = V_0;
		V_1 = L_1;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_2 = V_1;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*)CastclassSealed((RuntimeObject*)L_4, OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE_il2cpp_TypeInfo_var));
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE** L_5 = (OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE**)(&__this->___Exit_7);
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_6 = V_2;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_7 = V_1;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_9 = V_0;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*)L_9) == ((RuntimeObject*)(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::remove_Exit(TS.GazeInteraction.GazeInteractable/OnExit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_remove_Exit_m65984778C59A59BDEA70C3F934A974456B26ED49 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* V_0 = NULL;
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* V_1 = NULL;
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* V_2 = NULL;
	{
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_0 = __this->___Exit_7;
		V_0 = L_0;
	}

IL_0007:
	{
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_1 = V_0;
		V_1 = L_1;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_2 = V_1;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*)CastclassSealed((RuntimeObject*)L_4, OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE_il2cpp_TypeInfo_var));
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE** L_5 = (OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE**)(&__this->___Exit_7);
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_6 = V_2;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_7 = V_1;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_9 = V_0;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*)L_9) == ((RuntimeObject*)(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::add_Activated(TS.GazeInteraction.GazeInteractable/OnActivated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_add_Activated_m8EB47ECDAA56F7DB146C58479F1553E521F712F3 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* V_0 = NULL;
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* V_1 = NULL;
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* V_2 = NULL;
	{
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_0 = __this->___Activated_8;
		V_0 = L_0;
	}

IL_0007:
	{
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_1 = V_0;
		V_1 = L_1;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_2 = V_1;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*)CastclassSealed((RuntimeObject*)L_4, OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0_il2cpp_TypeInfo_var));
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0** L_5 = (OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0**)(&__this->___Activated_8);
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_6 = V_2;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_7 = V_1;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_9 = V_0;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*)L_9) == ((RuntimeObject*)(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::remove_Activated(TS.GazeInteraction.GazeInteractable/OnActivated)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_remove_Activated_m7AEA8A4152F9D8E0AA50A7E9D353FF48F4B48C05 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* V_0 = NULL;
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* V_1 = NULL;
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* V_2 = NULL;
	{
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_0 = __this->___Activated_8;
		V_0 = L_0;
	}

IL_0007:
	{
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_1 = V_0;
		V_1 = L_1;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_2 = V_1;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*)CastclassSealed((RuntimeObject*)L_4, OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0_il2cpp_TypeInfo_var));
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0** L_5 = (OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0**)(&__this->___Activated_8);
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_6 = V_2;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_7 = V_1;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_8;
		L_8 = InterlockedCompareExchangeImpl<OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*>(L_5, L_6, L_7);
		V_0 = L_8;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_9 = V_0;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_10 = V_1;
		if ((!(((RuntimeObject*)(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*)L_9) == ((RuntimeObject*)(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean TS.GazeInteraction.GazeInteractable::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInteractable_get_IsEnabled_m0C9466B10C867D3BEADA929CD39FD770C5F3C236 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return _collider.enabled; }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->____collider_17;
		NullCheck(L_0);
		bool L_1;
		L_1 = Collider_get_enabled_mDBFB488088ADB14C8016A83EF445653AC5A4A12B(L_0, NULL);
		return L_1;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::set_IsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_set_IsEnabled_mC465D574393EC44400B31318D0C764BE13BAEE1B (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// set { _collider.enabled = value; }
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = __this->____collider_17;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_0, L_1, NULL);
		// set { _collider.enabled = value; }
		return;
	}
}
// System.Boolean TS.GazeInteraction.GazeInteractable::get_IsActivable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInteractable_get_IsActivable_mA496B0244E2D125983932C92265ECF4178E64435 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return _isActivable; }
		bool L_0 = __this->____isActivable_9;
		return L_0;
	}
}
// System.Boolean TS.GazeInteraction.GazeInteractable::get_IsActivated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GazeInteractable_get_IsActivated_mAA24799C2F0ADD578D73AE3062AA13E2F5880632 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsActivated { get; private set; }
		bool L_0 = __this->___U3CIsActivatedU3Ek__BackingField_16;
		return L_0;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::set_IsActivated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_set_IsActivated_mA1EAF7098117352BFE0EDF4CBC67650C59777D9A (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsActivated { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsActivatedU3Ek__BackingField_16 = L_0;
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_Awake_mFA3FEC12AE6FC6123B515ED2E6AFC68F717CDED6 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _collider = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		__this->____collider_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____collider_17), (void*)L_0);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_Start_mED72FB00D11BF406171D6CA2D58D3C79A3B06BFB (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
{
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_Enable_m903532D16706811089FADE2F9A41F504CC002652 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, bool ___0_enable, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(enable);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_enable;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_Activate_mD2439F7B8FB4F5D769BA8ECEE8CBFB0A00E11FCA (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
{
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* G_B2_0 = NULL;
	OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* G_B1_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	{
		// IsActivated = true;
		GazeInteractable_set_IsActivated_mA1EAF7098117352BFE0EDF4CBC67650C59777D9A_inline(__this, (bool)1, NULL);
		// Activated?.Invoke(this);
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_0 = __this->___Activated_8;
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0013;
		}
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		NullCheck(G_B2_0);
		OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_inline(G_B2_0, __this, NULL);
	}

IL_0019:
	{
		// OnGazeActivated?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_2 = __this->___OnGazeActivated_14;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		NullCheck(G_B5_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B5_0, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::GazeEnter(TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_GazeEnter_mE8E8AA2F8ACA4F84641D830529C2D8141A6948AF (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4);
		s_Il2CppMethodInitialized = true;
	}
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* G_B2_0 = NULL;
	OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* G_B1_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* G_B8_0 = NULL;
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* G_B7_0 = NULL;
	{
		// StopCoroutine(WAIT_TO_EXIT_COROUTINE);
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4, NULL);
		// Enter?.Invoke(this, interactor, point);
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_0 = __this->___Enter_5;
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0017;
		}
	}
	{
		goto IL_001f;
	}

IL_0017:
	{
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_2 = ___0_interactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_point;
		NullCheck(G_B2_0);
		OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_inline(G_B2_0, __this, L_2, L_3, NULL);
	}

IL_001f:
	{
		// OnGazeEnter?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = __this->___OnGazeEnter_11;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_002b;
		}
	}
	{
		goto IL_0030;
	}

IL_002b:
	{
		NullCheck(G_B5_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B5_0, NULL);
	}

IL_0030:
	{
		// OnGazeToggle?.Invoke(true);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_6 = __this->___OnGazeToggle_15;
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_7 = L_6;
		G_B7_0 = L_7;
		if (L_7)
		{
			G_B8_0 = L_7;
			goto IL_003b;
		}
	}
	{
		return;
	}

IL_003b:
	{
		NullCheck(G_B8_0);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(G_B8_0, (bool)1, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::GazeStay(TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_GazeStay_mA37D7E56B454B93ADD03AB8FC22253D200894B94 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) 
{
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* G_B2_0 = NULL;
	OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* G_B1_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	{
		// Stay?.Invoke(this, interactor, point);
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_0 = __this->___Stay_6;
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0014;
	}

IL_000c:
	{
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_2 = ___0_interactor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_point;
		NullCheck(G_B2_0);
		OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_inline(G_B2_0, __this, L_2, L_3, NULL);
	}

IL_0014:
	{
		// OnGazeStay?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = __this->___OnGazeStay_12;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_5 = L_4;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_001f;
		}
	}
	{
		return;
	}

IL_001f:
	{
		NullCheck(G_B5_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B5_0, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::GazeExit(TS.GazeInteraction.GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_GazeExit_mBD5BAD2578FD581D4680993E4DD76BC759C54939 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gameObject.activeInHierarchy)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// StartCoroutine(WAIT_TO_EXIT_COROUTINE, interactor);
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_2 = ___0_interactor;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_mD754B72714F15210DDA429A096D853852FF437AB(__this, _stringLiteralD2B8455076CC0C4C19622AD4DCFB50D0393921A4, L_2, NULL);
		return;
	}

IL_001b:
	{
		// InvokeExit(interactor);
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_4 = ___0_interactor;
		GazeInteractable_InvokeExit_m8BC5D779C8F0F530BC606CD21821574A6F3E760E(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TS.GazeInteraction.GazeInteractable::WaitToExit_Coroutine(TS.GazeInteraction.GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GazeInteractable_WaitToExit_Coroutine_mFCF4FB565D72314858DC8A129D6A965E6244D9A0 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* L_0 = (U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D*)il2cpp_codegen_object_new(U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CWaitToExit_CoroutineU3Ed__41__ctor_mFE5105AACC120AF952CE22A725FC85EBA486FB75(L_0, 0, NULL);
		U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* L_2 = L_1;
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_3 = ___0_interactor;
		NullCheck(L_2);
		L_2->___interactor_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___interactor_3), (void*)L_3);
		return L_2;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::InvokeExit(TS.GazeInteraction.GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable_InvokeExit_m8BC5D779C8F0F530BC606CD21821574A6F3E760E (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* G_B2_0 = NULL;
	OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* G_B1_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B5_0 = NULL;
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* G_B4_0 = NULL;
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* G_B8_0 = NULL;
	UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* G_B7_0 = NULL;
	{
		// Exit?.Invoke(this, interactor);
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_0 = __this->___Exit_7;
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0013;
	}

IL_000c:
	{
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_2 = ___0_interactor;
		NullCheck(G_B2_0);
		OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_inline(G_B2_0, __this, L_2, NULL);
	}

IL_0013:
	{
		// OnGazeExit?.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_3 = __this->___OnGazeExit_13;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4 = L_3;
		G_B4_0 = L_4;
		if (L_4)
		{
			G_B5_0 = L_4;
			goto IL_001f;
		}
	}
	{
		goto IL_0024;
	}

IL_001f:
	{
		NullCheck(G_B5_0);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(G_B5_0, NULL);
	}

IL_0024:
	{
		// OnGazeToggle?.Invoke(false);
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_5 = __this->___OnGazeToggle_15;
		UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* L_6 = L_5;
		G_B7_0 = L_6;
		if (L_6)
		{
			G_B8_0 = L_6;
			goto IL_0030;
		}
	}
	{
		goto IL_0036;
	}

IL_0030:
	{
		NullCheck(G_B8_0);
		UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653(G_B8_0, (bool)0, UnityEvent_1_Invoke_m4810FCA7EC353CAA7770E91777A04496C5663653_RuntimeMethod_var);
	}

IL_0036:
	{
		// IsActivated = false;
		GazeInteractable_set_IsActivated_mA1EAF7098117352BFE0EDF4CBC67650C59777D9A_inline(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractable__ctor_m7342050DC4F23D802E3530F656346F822189ADD4 (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
{
	{
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
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_Multicast(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* currentDelegate = reinterpret_cast<OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_interactable, ___1_interactor, ___2_point, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenInst(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	typedef void (*FunctionPointerType) (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_interactable, ___1_interactor, ___2_point, method);
}
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenStatic(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_interactable, ___1_interactor, ___2_point, method);
}
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenStaticInvoker(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	InvokerActionInvoker3< GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_interactable, ___1_interactor, ___2_point);
}
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_ClosedStaticInvoker(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_interactable, ___1_interactor, ___2_point);
}
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenVirtual(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	VirtualActionInvoker2< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_interactable, ___1_interactor, ___2_point);
}
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenInterface(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	InterfaceActionInvoker2< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_interactable, ___1_interactor, ___2_point);
}
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenGenericVirtual(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	GenericVirtualActionInvoker2< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(method, ___0_interactable, ___1_interactor, ___2_point);
}
void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenGenericInterface(OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	GenericInterfaceActionInvoker2< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(method, ___0_interactable, ___1_interactor, ___2_point);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnEnter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEnter__ctor_mB95013F6D3403917ED3049EB1C34E81C2B837105 (OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_Multicast;
}
// System.Void TS.GazeInteraction.GazeInteractable/OnEnter::Invoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3 (OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_interactable, ___1_interactor, ___2_point, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TS.GazeInteraction.GazeInteractable/OnEnter::BeginInvoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnEnter_BeginInvoke_m6C748443CF45C3959C42018E0A36BA748BEBB3C7 (OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_interactable;
	__d_args[1] = ___1_interactor;
	__d_args[2] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___2_point);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnEnter::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnEnter_EndInvoke_m37301AA93FFEAB7515071E5F77020A7355D25F20 (OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_Multicast(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* currentDelegate = reinterpret_cast<OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_interactable, ___1_interactor, ___2_point, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenInst(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	typedef void (*FunctionPointerType) (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_interactable, ___1_interactor, ___2_point, method);
}
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenStatic(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_interactable, ___1_interactor, ___2_point, method);
}
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenStaticInvoker(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	InvokerActionInvoker3< GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_interactable, ___1_interactor, ___2_point);
}
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_ClosedStaticInvoker(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_interactable, ___1_interactor, ___2_point);
}
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenVirtual(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	VirtualActionInvoker2< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_interactable, ___1_interactor, ___2_point);
}
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenInterface(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	InterfaceActionInvoker2< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_interactable, ___1_interactor, ___2_point);
}
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenGenericVirtual(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	GenericVirtualActionInvoker2< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(method, ___0_interactable, ___1_interactor, ___2_point);
}
void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenGenericInterface(OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	GenericInterfaceActionInvoker2< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(method, ___0_interactable, ___1_interactor, ___2_point);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnStay::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStay__ctor_mEB2494CF53465635484D6E3394237F06D33D75D8 (OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_Multicast;
}
// System.Void TS.GazeInteraction.GazeInteractable/OnStay::Invoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D (OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_interactable, ___1_interactor, ___2_point, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TS.GazeInteraction.GazeInteractable/OnStay::BeginInvoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor,UnityEngine.Vector3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnStay_BeginInvoke_mEF955DA4518B24B99766A4F2D20353FE75F0DB9E (OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___0_interactable;
	__d_args[1] = ___1_interactor;
	__d_args[2] = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &___2_point);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnStay::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnStay_EndInvoke_mC1CFDD87D67C287B301B753E81D48A87636FFEC3 (OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_Multicast(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* currentDelegate = reinterpret_cast<OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_interactable, ___1_interactor, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenInst(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	typedef void (*FunctionPointerType) (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_interactable, ___1_interactor, method);
}
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenStatic(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_interactable, ___1_interactor, method);
}
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenStaticInvoker(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	InvokerActionInvoker2< GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_interactable, ___1_interactor);
}
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_ClosedStaticInvoker(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_interactable, ___1_interactor);
}
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenVirtual(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	VirtualActionInvoker1< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* >::Invoke(il2cpp_codegen_method_get_slot(method), ___0_interactable, ___1_interactor);
}
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenInterface(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	InterfaceActionInvoker1< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_interactable, ___1_interactor);
}
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenGenericVirtual(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	GenericVirtualActionInvoker1< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* >::Invoke(method, ___0_interactable, ___1_interactor);
}
void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenGenericInterface(OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	GenericInterfaceActionInvoker1< GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* >::Invoke(method, ___0_interactable, ___1_interactor);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnExit::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnExit__ctor_mF3647D7CC6ECBB6FA7C2F1EEBE4B0B72368550F9 (OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_Multicast;
}
// System.Void TS.GazeInteraction.GazeInteractable/OnExit::Invoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369 (OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_interactable, ___1_interactor, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TS.GazeInteraction.GazeInteractable/OnExit::BeginInvoke(TS.GazeInteraction.GazeInteractable,TS.GazeInteraction.GazeInteractor,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnExit_BeginInvoke_m4AD2ABFB62430A40262B6BA360EB44605144250F (OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___0_interactable;
	__d_args[1] = ___1_interactor;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnExit::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnExit_EndInvoke_m75A32B86E891DD5A595C015EA989323A7FA123C8 (OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_Multicast(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* currentDelegate = reinterpret_cast<OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_interactable, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenInst(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	typedef void (*FunctionPointerType) (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_interactable, method);
}
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenStatic(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_interactable, method);
}
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenStaticInvoker(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	InvokerActionInvoker1< GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_interactable);
}
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_ClosedStaticInvoker(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_interactable);
}
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenVirtual(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_interactable);
}
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenInterface(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_interactable);
}
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenGenericVirtual(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	GenericVirtualActionInvoker0::Invoke(method, ___0_interactable);
}
void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenGenericInterface(OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method)
{
	NullCheck(___0_interactable);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_interactable);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnActivated::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnActivated__ctor_m8E5BC52038E30A07F8D5402E41BE9DDB04B33AB9 (OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_Multicast;
}
// System.Void TS.GazeInteraction.GazeInteractable/OnActivated::Invoke(TS.GazeInteraction.GazeInteractable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0 (OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_interactable, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult TS.GazeInteraction.GazeInteractable/OnActivated::BeginInvoke(TS.GazeInteraction.GazeInteractable,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnActivated_BeginInvoke_m0E97B47537CEF2DB370E7E643D079F8E9371B091 (OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_interactable;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void TS.GazeInteraction.GazeInteractable/OnActivated::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnActivated_EndInvoke_mFE48433AABD7A80F0958B9B617487D242FE50C2A (OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToExit_CoroutineU3Ed__41__ctor_mFE5105AACC120AF952CE22A725FC85EBA486FB75 (U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToExit_CoroutineU3Ed__41_System_IDisposable_Dispose_mBF95145EE8D4C052EAFD641F82C821A8FDEE816A (U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitToExit_CoroutineU3Ed__41_MoveNext_m8F265D02FC9341B07890EE7BEE935D0A9769B14B (U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(_exitDelay);
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->____exitDelay_10;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// InvokeExit(interactor);
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_7 = V_1;
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_8 = __this->___interactor_3;
		NullCheck(L_7);
		GazeInteractable_InvokeExit_m8BC5D779C8F0F530BC606CD21821574A6F3E760E(L_7, L_8, NULL);
		// }
		return (bool)0;
	}
}
// System.Object TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitToExit_CoroutineU3Ed__41_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m57B7EA448E52907D59711CEE2DD81BA11699908F (U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitToExit_CoroutineU3Ed__41_System_Collections_IEnumerator_Reset_m1AAA3753E6B7334B3F3FA01CE74EAAF67D5F040E (U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitToExit_CoroutineU3Ed__41_System_Collections_IEnumerator_Reset_m1AAA3753E6B7334B3F3FA01CE74EAAF67D5F040E_RuntimeMethod_var)));
	}
}
// System.Object TS.GazeInteraction.GazeInteractable/<WaitToExit_Coroutine>d__41::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaitToExit_CoroutineU3Ed__41_System_Collections_IEnumerator_get_Current_m5E67FFFEC50FF52164CEC01835908EEB9418489B (U3CWaitToExit_CoroutineU3Ed__41_tA6EF70D36D8D069415766383809B6998340C335D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void TS.GazeInteraction.GazeInteractor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractor_Start_m9E4B01B3509FFD72A31013105BA553EA42D25BD9 (GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_mE360BA236620C175DE113B3B83EA56DC4BE70D69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_m494BDE2B52CA4ADFF325B4087CF8634EF2E60E3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral156E0AF81F8E8561B36759338BAEE264FD07A676);
		s_Il2CppMethodInitialized = true;
	}
	GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* V_0 = NULL;
	{
		// var instance = ResourcesManager.GetPrefab(ResourcesManager.FILE_PREFAB_RETICLE);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = ResourcesManager_GetPrefab_m2F4AEB9796080F97AA31F851B2762958AA0EC25B(_stringLiteral156E0AF81F8E8561B36759338BAEE264FD07A676, NULL);
		// var reticle = instance.GetComponent<GazeReticle>();
		NullCheck(L_0);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_1;
		L_1 = GameObject_GetComponent_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_mE360BA236620C175DE113B3B83EA56DC4BE70D69(L_0, GameObject_GetComponent_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_mE360BA236620C175DE113B3B83EA56DC4BE70D69_RuntimeMethod_var);
		V_0 = L_1;
		// _reticle = Instantiate(reticle);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_3;
		L_3 = Object_Instantiate_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_m494BDE2B52CA4ADFF325B4087CF8634EF2E60E3C(L_2, Object_Instantiate_TisGazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0_m494BDE2B52CA4ADFF325B4087CF8634EF2E60E3C_RuntimeMethod_var);
		__this->____reticle_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____reticle_10), (void*)L_3);
		// _reticle.SetInteractor(this);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_4 = __this->____reticle_10;
		NullCheck(L_4);
		GazeReticle_SetInteractor_mF2DCD925F1F9E4B9A6DC4238387168ECEFFDD82E(L_4, __this, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractor::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractor_Update_mDAA001E0A0CEDF3B68056F346DD6D0A76BDD8043 (GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1_mA06A7082D6B71337A6408668B71D4E91151B1B87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// _ray = new Ray(transform.position, transform.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_2, NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Ray__ctor_mE298992FD10A3894C38373198385F345C58BD64C((&L_4), L_1, L_3, /*hidden argument*/NULL);
		__this->____ray_8 = L_4;
		// if (Physics.Raycast(_ray, out _hit, _maxDetectionDistance, _layerMask))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5 = __this->____ray_8;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6 = (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)(&__this->____hit_9);
		float L_7 = __this->____maxDetectionDistance_4;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_8 = __this->____layerMask_7;
		int32_t L_9;
		L_9 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_8, NULL);
		bool L_10;
		L_10 = Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025(L_5, L_6, L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_0194;
		}
	}
	{
		// var distance = Vector3.Distance(transform.position, _hit.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_13 = (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)(&__this->____hit_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16;
		L_16 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_12, L_15, NULL);
		// if (distance < _minDetectionDistance)
		float L_17 = __this->____minDetectionDistance_5;
		if ((!(((float)L_16) < ((float)L_17))))
		{
			goto IL_0083;
		}
	}
	{
		// _reticle.Enable(false);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_18 = __this->____reticle_10;
		NullCheck(L_18);
		GazeReticle_Enable_mCCCDBC5776CCE29CC7ADF3A8A3209ADE570046EF(L_18, (bool)0, NULL);
		// Reset();
		GazeInteractor_Reset_m8300513E17E232E10C9080A9501FE89BA17309D7(__this, NULL);
		// return;
		return;
	}

IL_0083:
	{
		// _reticle.SetTarget(_hit);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_19 = __this->____reticle_10;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_20 = __this->____hit_9;
		NullCheck(L_19);
		GazeReticle_SetTarget_m8EC62A7D1E4174C5737B1C7AA83DF8FBE9661C38(L_19, L_20, NULL);
		// _reticle.Enable(true);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_21 = __this->____reticle_10;
		NullCheck(L_21);
		GazeReticle_Enable_mCCCDBC5776CCE29CC7ADF3A8A3209ADE570046EF(L_21, (bool)1, NULL);
		// var interactable = _hit.collider.transform.GetComponent<GazeInteractable>();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_22 = (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)(&__this->____hit_9);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_23;
		L_23 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D(L_22, NULL);
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_23, NULL);
		NullCheck(L_24);
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_25;
		L_25 = Component_GetComponent_TisGazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1_mA06A7082D6B71337A6408668B71D4E91151B1B87(L_24, Component_GetComponent_TisGazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1_mA06A7082D6B71337A6408668B71D4E91151B1B87_RuntimeMethod_var);
		V_0 = L_25;
		// if(interactable == null)
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_26 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_00c6;
		}
	}
	{
		// Reset();
		GazeInteractor_Reset_m8300513E17E232E10C9080A9501FE89BA17309D7(__this, NULL);
		// return;
		return;
	}

IL_00c6:
	{
		// if (interactable != _interactable)
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_28 = V_0;
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_29 = __this->____interactable_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_28, L_29, NULL);
		if (!L_30)
		{
			goto IL_0103;
		}
	}
	{
		// Reset();
		GazeInteractor_Reset_m8300513E17E232E10C9080A9501FE89BA17309D7(__this, NULL);
		// _enterStartTime = Time.time;
		float L_31;
		L_31 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->____enterStartTime_12 = L_31;
		// _interactable = interactable;
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_32 = V_0;
		__this->____interactable_11 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactable_11), (void*)L_32);
		// _interactable.GazeEnter(this, _hit.point);
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_33 = __this->____interactable_11;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_34 = (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)(&__this->____hit_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_34, NULL);
		NullCheck(L_33);
		GazeInteractable_GazeEnter_mE8E8AA2F8ACA4F84641D830529C2D8141A6948AF(L_33, __this, L_35, NULL);
	}

IL_0103:
	{
		// _interactable.GazeStay(this, _hit.point);
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_36 = __this->____interactable_11;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_37 = (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5*)(&__this->____hit_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_37, NULL);
		NullCheck(L_36);
		GazeInteractable_GazeStay_mA37D7E56B454B93ADD03AB8FC22253D200894B94(L_36, __this, L_38, NULL);
		// if (_interactable.IsActivable && !_interactable.IsActivated)
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_39 = __this->____interactable_11;
		NullCheck(L_39);
		bool L_40;
		L_40 = GazeInteractable_get_IsActivable_mA496B0244E2D125983932C92265ECF4178E64435_inline(L_39, NULL);
		if (!L_40)
		{
			goto IL_0193;
		}
	}
	{
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_41 = __this->____interactable_11;
		NullCheck(L_41);
		bool L_42;
		L_42 = GazeInteractable_get_IsActivated_mAA24799C2F0ADD578D73AE3062AA13E2F5880632_inline(L_41, NULL);
		if (L_42)
		{
			goto IL_0193;
		}
	}
	{
		// var timeToActivate = (_enterStartTime + _timeToActivate) - Time.time;
		float L_43 = __this->____enterStartTime_12;
		float L_44 = __this->____timeToActivate_6;
		float L_45;
		L_45 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		V_1 = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(L_43, L_44)), L_45));
		// var progress = 1 - (timeToActivate / _timeToActivate);
		float L_46 = V_1;
		float L_47 = __this->____timeToActivate_6;
		V_2 = ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_46/L_47))));
		// progress = Mathf.Clamp(progress, 0, 1);
		float L_48 = V_2;
		float L_49;
		L_49 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_48, (0.0f), (1.0f), NULL);
		V_2 = L_49;
		// _reticle.SetProgress(progress);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_50 = __this->____reticle_10;
		float L_51 = V_2;
		NullCheck(L_50);
		GazeReticle_SetProgress_m30FE62EB08375FCDAC365E8B464250DF594B2634(L_50, L_51, NULL);
		// if (progress == 1)
		float L_52 = V_2;
		if ((!(((float)L_52) == ((float)(1.0f)))))
		{
			goto IL_0193;
		}
	}
	{
		// _reticle.Enable(false);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_53 = __this->____reticle_10;
		NullCheck(L_53);
		GazeReticle_Enable_mCCCDBC5776CCE29CC7ADF3A8A3209ADE570046EF(L_53, (bool)0, NULL);
		// _interactable.Activate();
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_54 = __this->____interactable_11;
		NullCheck(L_54);
		GazeInteractable_Activate_mD2439F7B8FB4F5D769BA8ECEE8CBFB0A00E11FCA(L_54, NULL);
	}

IL_0193:
	{
		// return;
		return;
	}

IL_0194:
	{
		// _reticle.Enable(false);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_55 = __this->____reticle_10;
		NullCheck(L_55);
		GazeReticle_Enable_mCCCDBC5776CCE29CC7ADF3A8A3209ADE570046EF(L_55, (bool)0, NULL);
		// Reset();
		GazeInteractor_Reset_m8300513E17E232E10C9080A9501FE89BA17309D7(__this, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractor::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractor_Reset_m8300513E17E232E10C9080A9501FE89BA17309D7 (GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _reticle.SetProgress(0);
		GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* L_0 = __this->____reticle_10;
		NullCheck(L_0);
		GazeReticle_SetProgress_m30FE62EB08375FCDAC365E8B464250DF594B2634(L_0, (0.0f), NULL);
		// if(_interactable == null) { return; }
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_1 = __this->____interactable_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// if(_interactable == null) { return; }
		return;
	}

IL_001f:
	{
		// _interactable.GazeExit(this);
		GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* L_3 = __this->____interactable_11;
		NullCheck(L_3);
		GazeInteractable_GazeExit_mBD5BAD2578FD581D4680993E4DD76BC759C54939(L_3, __this, NULL);
		// _interactable = null;
		__this->____interactable_11 = (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactable_11), (void*)(GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*)NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeInteractor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeInteractor__ctor_m753237651AEEC9152DC625F3B54949333DC6D8C8 (GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float _timeToActivate = 1.0f;
		__this->____timeToActivate_6 = (1.0f);
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
// System.Void TS.GazeInteraction.GazeReticle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_Start_mEBC5FCEB1EA058D4E8507696E7329D3DF5DB8581 (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, const RuntimeMethod* method) 
{
	{
		// _canvas.transform.localScale = Vector3.one * _scale;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->____canvas_4;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_3 = __this->____scale_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		NullCheck(L_1);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_1, L_4, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeReticle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_Update_mF984C91FC922229A875B1393D67AB345B2A9AABE (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// if(_interactor == null) { return; }
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_0 = __this->____interactor_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if(_interactor == null) { return; }
		return;
	}

IL_000f:
	{
		// var distance = Vector3.Distance(_interactor.transform.position, transform.position);
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_2 = __this->____interactor_8;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7;
		L_7 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_4, L_6, NULL);
		// var scale = distance * _scale;
		float L_8 = __this->____scale_6;
		V_0 = ((float)il2cpp_codegen_multiply(L_7, L_8));
		// scale = Mathf.Clamp(scale, _scale, scale);
		float L_9 = V_0;
		float L_10 = __this->____scale_6;
		float L_11 = V_0;
		float L_12;
		L_12 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_9, L_10, L_11, NULL);
		V_0 = L_12;
		// _canvas.transform.localScale = Vector3.one * scale;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_13 = __this->____canvas_4;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		NullCheck(L_14);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_14, L_17, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeReticle::SetInteractor(TS.GazeInteraction.GazeInteractor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_SetInteractor_mF2DCD925F1F9E4B9A6DC4238387168ECEFFDD82E (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___0_interactor, const RuntimeMethod* method) 
{
	{
		// _interactor = interactor;
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_0 = ___0_interactor;
		__this->____interactor_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____interactor_8), (void*)L_0);
		// enabled = true;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeReticle::Enable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_Enable_mCCCDBC5776CCE29CC7ADF3A8A3209ADE570046EF (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, bool ___0_enable, const RuntimeMethod* method) 
{
	{
		// gameObject.SetActive(enable);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_enable;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeReticle::SetTarget(UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_SetTarget_m8EC62A7D1E4174C5737B1C7AA83DF8FBE9661C38 (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_hit, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var direction = _interactor.transform.position - hit.point;
		GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* L_0 = __this->____interactor_8;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&___0_hit), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_3, NULL);
		V_0 = L_4;
		// var rotation = Quaternion.FromToRotation(Vector3.forward, direction);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_5, L_6, NULL);
		V_1 = L_7;
		// var position = hit.point + transform.forward * _offsetFromHit;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&___0_hit), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_9, NULL);
		float L_11 = __this->____offsetFromHit_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_12, NULL);
		V_2 = L_13;
		// transform.SetPositionAndRotation(position, rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = V_1;
		NullCheck(L_14);
		Transform_SetPositionAndRotation_m418859BF59086EEAA084FFD6F258A43FAB408F5A(L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeReticle::SetProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle_SetProgress_m30FE62EB08375FCDAC365E8B464250DF594B2634 (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, float ___0_progress, const RuntimeMethod* method) 
{
	{
		// _imageProgress.fillAmount = progress;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->____imageProgress_5;
		float L_1 = ___0_progress;
		NullCheck(L_0);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TS.GazeInteraction.GazeReticle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GazeReticle__ctor_m6227CEEA57E856AEB0FDBF31DB353954D7E7940A (GazeReticle_tFCA8F4580EA3010F37940576EADFC958B577ABE0* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float _scale = 0.0015f;
		__this->____scale_6 = (0.00150000001f);
		// [SerializeField] private float _offsetFromHit = 0.1f;
		__this->____offsetFromHit_7 = (0.100000001f);
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
// UnityEngine.GameObject TS.GazeInteraction.ResourcesManager::GetPrefab(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ResourcesManager_GetPrefab_m2F4AEB9796080F97AA31F851B2762958AA0EC25B (String_t* ___0_file, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3748EB91B2BDF019241C0FC4D8C75AD02258A8FA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Resources.Load<GameObject>(string.Format(DIRECTORY_PREFABS_FORMAT, file));
		String_t* L_0 = ___0_file;
		String_t* L_1;
		L_1 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3748EB91B2BDF019241C0FC4D8C75AD02258A8FA, L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(L_1, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void TS.GazeInteraction.ResourcesManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResourcesManager__ctor_m66E26D5CF0A485CF8E8F531348A4CC22337F4B72 (ResourcesManager_t66E50EDCE76784B2D12111BBD924E54373CE7CF9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_get_eulerAngles_m2DB5158B5C3A71FD60FC8A6EE43D3AAA1CFED122_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Quaternion_Internal_ToEulerRad_m5BD0EEC543120C320DC77FCCDFD2CE2E6BD3F1A8(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (57.2957802f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Quaternion_Internal_MakePositive_m73E2D01920CB0DFE661A55022C129E8617F0C9A8(L_2, NULL);
		V_0 = L_3;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
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
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_InverseLerp_mBD7EC6A7173CE082226077E1557D5BC2D2AE0D9D_inline (float ___0_a, float ___1_b, float ___2_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		float L_3 = ___2_value;
		float L_4 = ___0_a;
		float L_5 = ___1_b;
		float L_6 = ___0_a;
		float L_7;
		L_7 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(((float)(((float)il2cpp_codegen_subtract(L_3, L_4))/((float)il2cpp_codegen_subtract(L_5, L_6)))), NULL);
		V_1 = L_7;
		goto IL_0023;
	}

IL_001b:
	{
		V_1 = (0.0f);
		goto IL_0023;
	}

IL_0023:
	{
		float L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GazeInteractable_set_IsActivated_mA1EAF7098117352BFE0EDF4CBC67650C59777D9A_inline (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsActivated { get; private set; }
		bool L_0 = ___0_value;
		__this->___U3CIsActivatedU3Ek__BackingField_16 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnActivated_Invoke_m9B2B246FBEE92EAE1EBBE39BFF954AC42B0F1CA0_inline (OnActivated_tBB231B217CAD86D6803F5435C49F0201249C9CE0* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_interactable, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnEnter_Invoke_mE7C9E831688D104768397A175E0DA4D072C93CA3_inline (OnEnter_t9BD740C336F72669E770EDA6014D66ECBD4680BD* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_interactable, ___1_interactor, ___2_point, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnStay_Invoke_m8E7D8A89441B7F60BC69227C6B40EDA8D9A7B44D_inline (OnStay_t136F2F19FDB4B141C5E11E4C300EA9E8A83C1ACF* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_point, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_interactable, ___1_interactor, ___2_point, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnExit_Invoke_m7F7470601F38522385604DE0E8E94FC1C246C369_inline (OnExit_tD236372E49EA27013D2AD37498AD805DDBA4F8FE* __this, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* ___0_interactable, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5* ___1_interactor, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1*, GazeInteractor_tAF4C3AA08D502CF687BA1F6E577A934A786CABE5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_interactable, ___1_interactor, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeInteractable_get_IsActivable_mA496B0244E2D125983932C92265ECF4178E64435_inline (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
{
	{
		// get { return _isActivable; }
		bool L_0 = __this->____isActivable_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GazeInteractable_get_IsActivated_mAA24799C2F0ADD578D73AE3062AA13E2F5880632_inline (GazeInteractable_tBEE197A2E94CEE3D0B743694DB257F9147B436A1* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsActivated { get; private set; }
		bool L_0 = __this->___U3CIsActivatedU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
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
		float L_2 = ___0_value;
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
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
