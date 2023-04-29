#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.EventHandler`1<ReadyPlayerMe.Core.IOperation`1<ReadyPlayerMe.AvatarLoader.AvatarContext>>
struct EventHandler_1_tACAC021C99C5B38A681F8E74EE936093E7276FF1;
// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.CompletionEventArgs>
struct EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9;
// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.FailureEventArgs>
struct EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.ProgressChangeEventArgs>
struct EventHandler_1_t492A962E32DC2E6002F7DCAC3B24A3E8EED39092;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>
struct List_1_tC738A5621689A7678648746667E7F66D96D6B8FD;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// ReadyPlayerMe.Core.OperationExecutor`1<ReadyPlayerMe.AvatarLoader.AvatarContext>
struct OperationExecutor_1_t06ACFD362E89FC0F84CAE68217EE64F4E6746033;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.ParticleCollisionEvent[]
struct ParticleCollisionEventU5BU5D_t38A3BDB80328B5E9131C909384B9942D5590DFF9;
// ParticleExamples[]
struct ParticleExamplesU5BU5D_tA528C4C0E13495472D7194B800EBAAD77E8094C0;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// ReadyPlayerMe.AvatarLoader.AvatarConfig
struct AvatarConfig_t3F2CFD701F17C758DF700AA438DE8476A8488FEB;
// ReadyPlayerMe.AvatarLoader.AvatarObjectLoader
struct AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// ReadyPlayerMe.QuickStart.CameraFollow
struct CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8;
// ReadyPlayerMe.QuickStart.CameraOrbit
struct CameraOrbit_t63BBBB457CA29B5630401021DB03DB1CCF2AC8B5;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CardboardStartup
struct CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41;
// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// ReadyPlayerMe.AvatarLoader.CompletionEventArgs
struct CompletionEventArgs_tBF4A5164C04020BEF9A73E33EA6A6EA73E9E297C;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DecalDestroyer
struct DecalDestroyer_tA811D6BFB8828E33AF2A21582C577A7F77C9D606;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ExtinguishableFire
struct ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508;
// ReadyPlayerMe.AvatarLoader.FailureEventArgs
struct FailureEventArgs_t2087FE370565AABC9CE48DD7810CF3E4757B571F;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GLTFDeferAgent
struct GLTFDeferAgent_t749A2C9D6DF77C4976728131C532C9E055DEB90E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GraphicsAPITextController
struct GraphicsAPITextController_tB19E46CC7B47712FCF2CA97FE4241DC6D347718E;
// GroundCheck
struct GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44;
// GunAim
struct GunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91;
// GunShoot
struct GunShoot_tD7737F223B9FDD1A961D805E1F50D425B7EEB952;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// ReadyPlayerMe.Loader.IImporter
struct IImporter_tC3D3E6F30D8180BC4C2BB4EDF64A6DF1326BD47F;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MouseCursorLock
struct MouseCursorLock_t292CEF568900532854722008B1471487CAF46558;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectController
struct ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC;
// ParticleCollision
struct ParticleCollision_tBABA847FAACFFAA8330E10F545457E623121298C;
// ParticleExamples
struct ParticleExamples_tD7815724B5248043652CFD842678BBAAD8AD1EB4;
// ParticleMenu
struct ParticleMenu_t55B30E5BB38276437817B0D0AD594DC5A8C4081E;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131;
// ReadyPlayerMe.QuickStart.PlayerInput
struct PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// ReadyPlayerMe.QuickStart.ThirdPersonController
struct ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3;
// ReadyPlayerMe.QuickStart.ThirdPersonLoader
struct ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4;
// ReadyPlayerMe.QuickStart.ThirdPersonMovement
struct ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// VrModeController
struct VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99;
// VrWalk
struct VrWalk_t8E5035BDCD1D4CF9BB31F1F8566C476662D3659B;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// DecalDestroyer/<Start>d__1
struct U3CStartU3Ed__1_tB2524FD4D0557BF5CC05183B1650FF248A3A03BD;
// ExtinguishableFire/<Extinguishing>d__6
struct U3CExtinguishingU3Ed__6_t6ABBF8FA232856A6C56FE105DD1310342F2A5D47;
// ExtinguishableFire/<StartingFire>d__7
struct U3CStartingFireU3Ed__7_tF6D45615B101931A10F0808CA80F47907EC900FB;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// VrModeController/<StartXR>d__10
struct U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExtinguishingU3Ed__6_t6ABBF8FA232856A6C56FE105DD1310342F2A5D47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__1_tB2524FD4D0557BF5CC05183B1650FF248A3A03BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartingFireU3Ed__7_tF6D45615B101931A10F0808CA80F47907EC900FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03195B08D8BBABDF0DCC6093942A15F7E8ABB3D0;
IL2CPP_EXTERN_C String_t* _stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3;
IL2CPP_EXTERN_C String_t* _stringLiteral1193EE22DE9836F74207B1C05271B1E3C2909AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1810837C21D5A51EB48C20CF75A7689DC9FB0E95;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173;
IL2CPP_EXTERN_C String_t* _stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA;
IL2CPP_EXTERN_C String_t* _stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8;
IL2CPP_EXTERN_C String_t* _stringLiteral4C48A78EC98C79B757DD1F93DECCC9BCD200C9C0;
IL2CPP_EXTERN_C String_t* _stringLiteral518BBC396C162E73FB3893CF18F79DBF36E165B7;
IL2CPP_EXTERN_C String_t* _stringLiteral586825A85BD3ABBC2F448E88E81F8DFBBE3A1EC4;
IL2CPP_EXTERN_C String_t* _stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8FC0169D2757CDFF78A24B91F1AE4951AC4C5E35;
IL2CPP_EXTERN_C String_t* _stringLiteral937CF4AA29E8BA035C35BA0901DC5699940902D9;
IL2CPP_EXTERN_C String_t* _stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF;
IL2CPP_EXTERN_C String_t* _stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4;
IL2CPP_EXTERN_C String_t* _stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42;
IL2CPP_EXTERN_C String_t* _stringLiteralA62DAE32537882C177728A8116A47B70B6AD18E7;
IL2CPP_EXTERN_C String_t* _stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449;
IL2CPP_EXTERN_C String_t* _stringLiteralC5A07FE10EB68540AEDE50779D90B2C5AD5FF607;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8;
IL2CPP_EXTERN_C String_t* _stringLiteralD84C3E7354CDA203313388822BE34A4033AED5FA;
IL2CPP_EXTERN_C String_t* _stringLiteralDB546722AF594A8BDD41950B5C210E49FB115982;
IL2CPP_EXTERN_C String_t* _stringLiteralEA96601D79B410E78ED885E29D7A25794A833FD2;
IL2CPP_EXTERN_C String_t* _stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5;
IL2CPP_EXTERN_C String_t* _stringLiteralF829A5FDC85023C6DD47F80EA1F9471474A74217;
IL2CPP_EXTERN_C String_t* _stringLiteralF969FF0CF043C78EC1ABB24B7FB4DC5B90B3DFB2;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mD2A1E502FEE7E5F38A8647CBDD1C7E5D38EF05DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisGunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91_m606A945142239493DE9418B395E34A6B86883BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508_mA99A973371668EA042C637224A9ECD66337FEBF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m2EF5C398F98450FF07BD95E49F2CCC48B5C6698B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C_m1A0CAB9BA6FD5D086A1908CC3ABB0151F01C805A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_mB4628DB9A699A47DAA8B46549B7E18E9855256A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28_m7AC9E938D2DE0CBDE4A45BD8BFD5FC99E97F2D1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThirdPersonController_OnJump_m3F89B0385F6CD86D90FEB4B0E9A5D95D4A4360BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThirdPersonLoader_OnLoadCompleted_m4714CFBA3EDFA59DA815C95220553EBB2DE89160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThirdPersonLoader_OnLoadFailed_m3D28BF90D7C6FE48C624683DF5DD68C7A795214B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExtinguishingU3Ed__6_System_Collections_IEnumerator_Reset_m43E2805A9D4795926B91B16BFD460783303C30B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__1_System_Collections_IEnumerator_Reset_m30F4CAC79B18143D68555C81236F8369FA147E19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartingFireU3Ed__7_System_Collections_IEnumerator_Reset_m9CA3702DCDF26353D1CE95A30AAAE9CE09743623_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ParticleExamplesU5BU5D_tA528C4C0E13495472D7194B800EBAAD77E8094C0;

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

// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>
struct List_1_tC738A5621689A7678648746667E7F66D96D6B8FD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParticleCollisionEventU5BU5D_t38A3BDB80328B5E9131C909384B9942D5590DFF9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// ReadyPlayerMe.AvatarLoader.AvatarObjectLoader
struct AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69  : public RuntimeObject
{
	// System.Boolean ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::avatarCachingEnabled
	bool ___avatarCachingEnabled_1;
	// ReadyPlayerMe.AvatarLoader.AvatarConfig ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::AvatarConfig
	AvatarConfig_t3F2CFD701F17C758DF700AA438DE8476A8488FEB* ___AvatarConfig_2;
	// ReadyPlayerMe.Loader.IImporter ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::Importer
	RuntimeObject* ___Importer_3;
	// GLTFDeferAgent ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::GLTFDeferAgent
	GLTFDeferAgent_t749A2C9D6DF77C4976728131C532C9E055DEB90E* ___GLTFDeferAgent_4;
	// System.String ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::avatarUrl
	String_t* ___avatarUrl_5;
	// ReadyPlayerMe.Core.OperationExecutor`1<ReadyPlayerMe.AvatarLoader.AvatarContext> ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::executor
	OperationExecutor_1_t06ACFD362E89FC0F84CAE68217EE64F4E6746033* ___executor_6;
	// System.Single ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::startTime
	float ___startTime_7;
	// System.Boolean ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::<SaveInProjectFolder>k__BackingField
	bool ___U3CSaveInProjectFolderU3Ek__BackingField_8;
	// System.Int32 ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::<Timeout>k__BackingField
	int32_t ___U3CTimeoutU3Ek__BackingField_9;
	// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.FailureEventArgs> ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::OnFailed
	EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A* ___OnFailed_10;
	// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.ProgressChangeEventArgs> ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::OnProgressChanged
	EventHandler_1_t492A962E32DC2E6002F7DCAC3B24A3E8EED39092* ___OnProgressChanged_11;
	// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.CompletionEventArgs> ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::OnCompleted
	EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9* ___OnCompleted_12;
	// System.EventHandler`1<ReadyPlayerMe.Core.IOperation`1<ReadyPlayerMe.AvatarLoader.AvatarContext>> ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::OperationCompleted
	EventHandler_1_tACAC021C99C5B38A681F8E74EE936093E7276FF1* ___OperationCompleted_13;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// DecalDestroyer/<Start>d__1
struct U3CStartU3Ed__1_tB2524FD4D0557BF5CC05183B1650FF248A3A03BD  : public RuntimeObject
{
	// System.Int32 DecalDestroyer/<Start>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DecalDestroyer/<Start>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DecalDestroyer DecalDestroyer/<Start>d__1::<>4__this
	DecalDestroyer_tA811D6BFB8828E33AF2A21582C577A7F77C9D606* ___U3CU3E4__this_2;
};

// ExtinguishableFire/<Extinguishing>d__6
struct U3CExtinguishingU3Ed__6_t6ABBF8FA232856A6C56FE105DD1310342F2A5D47  : public RuntimeObject
{
	// System.Int32 ExtinguishableFire/<Extinguishing>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ExtinguishableFire/<Extinguishing>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ExtinguishableFire ExtinguishableFire/<Extinguishing>d__6::<>4__this
	ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* ___U3CU3E4__this_2;
	// System.Single ExtinguishableFire/<Extinguishing>d__6::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;
};

// ExtinguishableFire/<StartingFire>d__7
struct U3CStartingFireU3Ed__7_tF6D45615B101931A10F0808CA80F47907EC900FB  : public RuntimeObject
{
	// System.Int32 ExtinguishableFire/<StartingFire>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ExtinguishableFire/<StartingFire>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ExtinguishableFire ExtinguishableFire/<StartingFire>d__7::<>4__this
	ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* ___U3CU3E4__this_2;
	// System.Single ExtinguishableFire/<StartingFire>d__7::<elapsedTime>5__2
	float ___U3CelapsedTimeU3E5__2_3;
};

// VrModeController/<StartXR>d__10
struct U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6  : public RuntimeObject
{
	// System.Int32 VrModeController/<StartXR>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VrModeController/<StartXR>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// ReadyPlayerMe.AvatarLoader.FailureEventArgs
struct FailureEventArgs_t2087FE370565AABC9CE48DD7810CF3E4757B571F  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String ReadyPlayerMe.AvatarLoader.FailureEventArgs::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_1;
	// System.String ReadyPlayerMe.AvatarLoader.FailureEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
	// ReadyPlayerMe.AvatarLoader.FailureType ReadyPlayerMe.AvatarLoader.FailureEventArgs::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_3;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// ReadyPlayerMe.AvatarLoader.AvatarMetadata
struct AvatarMetadata_t43E399B546AD0144D43B37F6839CE40848898436 
{
	// ReadyPlayerMe.AvatarLoader.BodyType ReadyPlayerMe.AvatarLoader.AvatarMetadata::BodyType
	int32_t ___BodyType_0;
	// ReadyPlayerMe.AvatarLoader.OutfitGender ReadyPlayerMe.AvatarLoader.AvatarMetadata::OutfitGender
	int32_t ___OutfitGender_1;
	// System.DateTime ReadyPlayerMe.AvatarLoader.AvatarMetadata::UpdatedAt
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UpdatedAt_2;
	// System.String ReadyPlayerMe.AvatarLoader.AvatarMetadata::SkinTone
	String_t* ___SkinTone_3;
};
// Native definition for P/Invoke marshalling of ReadyPlayerMe.AvatarLoader.AvatarMetadata
struct AvatarMetadata_t43E399B546AD0144D43B37F6839CE40848898436_marshaled_pinvoke
{
	int32_t ___BodyType_0;
	int32_t ___OutfitGender_1;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UpdatedAt_2;
	char* ___SkinTone_3;
};
// Native definition for COM marshalling of ReadyPlayerMe.AvatarLoader.AvatarMetadata
struct AvatarMetadata_t43E399B546AD0144D43B37F6839CE40848898436_marshaled_com
{
	int32_t ___BodyType_0;
	int32_t ___OutfitGender_1;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UpdatedAt_2;
	Il2CppChar* ___SkinTone_3;
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

// UnityEngine.ParticleCollisionEvent
struct ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 
{
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Intersection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Intersection_0;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// UnityEngine.Vector3 UnityEngine.ParticleCollisionEvent::m_Velocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Velocity_2;
	// System.Int32 UnityEngine.ParticleCollisionEvent::m_ColliderInstanceID
	int32_t ___m_ColliderInstanceID_3;
};

// ParticleExamples
struct ParticleExamples_tD7815724B5248043652CFD842678BBAAD8AD1EB4  : public RuntimeObject
{
	// System.String ParticleExamples::title
	String_t* ___title_0;
	// System.String ParticleExamples::description
	String_t* ___description_1;
	// System.Boolean ParticleExamples::isWeaponEffect
	bool ___isWeaponEffect_2;
	// UnityEngine.GameObject ParticleExamples::particleSystemGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___particleSystemGO_3;
	// UnityEngine.Vector3 ParticleExamples::particlePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___particlePosition_4;
	// UnityEngine.Vector3 ParticleExamples::particleRotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___particleRotation_5;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// ReadyPlayerMe.AvatarLoader.CompletionEventArgs
struct CompletionEventArgs_tBF4A5164C04020BEF9A73E33EA6A6EA73E9E297C  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String ReadyPlayerMe.AvatarLoader.CompletionEventArgs::<Url>k__BackingField
	String_t* ___U3CUrlU3Ek__BackingField_1;
	// UnityEngine.GameObject ReadyPlayerMe.AvatarLoader.CompletionEventArgs::<Avatar>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CAvatarU3Ek__BackingField_2;
	// ReadyPlayerMe.AvatarLoader.AvatarMetadata ReadyPlayerMe.AvatarLoader.CompletionEventArgs::<Metadata>k__BackingField
	AvatarMetadata_t43E399B546AD0144D43B37F6839CE40848898436 ___U3CMetadataU3Ek__BackingField_3;
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

// UnityEngine.PhysicMaterial
struct PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.CompletionEventArgs>
struct EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9  : public MulticastDelegate_t
{
};

// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.FailureEventArgs>
struct EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A  : public MulticastDelegate_t
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

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_LoaderManagerInstance
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_LoaderManagerInstance_6;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_InitManagerOnStart
	bool ___m_InitManagerOnStart_7;
	// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::m_XRManager
	XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* ___m_XRManager_8;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderIntialized
	bool ___m_ProviderIntialized_9;
	// System.Boolean UnityEngine.XR.Management.XRGeneralSettings::m_ProviderStarted
	bool ___m_ProviderStarted_10;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CharacterController
struct CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ReadyPlayerMe.QuickStart.CameraFollow
struct CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ReadyPlayerMe.QuickStart.CameraFollow::TAG
	String_t* ___TAG_5;
	// UnityEngine.Camera ReadyPlayerMe.QuickStart.CameraFollow::playerCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___playerCamera_6;
	// UnityEngine.Transform ReadyPlayerMe.QuickStart.CameraFollow::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_7;
	// System.Single ReadyPlayerMe.QuickStart.CameraFollow::cameraDistance
	float ___cameraDistance_8;
	// System.Boolean ReadyPlayerMe.QuickStart.CameraFollow::followOnStart
	bool ___followOnStart_9;
	// System.Boolean ReadyPlayerMe.QuickStart.CameraFollow::isFollowing
	bool ___isFollowing_10;
};

// ReadyPlayerMe.QuickStart.CameraOrbit
struct CameraOrbit_t63BBBB457CA29B5630401021DB03DB1CCF2AC8B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ReadyPlayerMe.QuickStart.PlayerInput ReadyPlayerMe.QuickStart.CameraOrbit::playerInput
	PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* ___playerInput_5;
	// System.Single ReadyPlayerMe.QuickStart.CameraOrbit::minRotationX
	float ___minRotationX_6;
	// System.Single ReadyPlayerMe.QuickStart.CameraOrbit::maxRotationX
	float ___maxRotationX_7;
	// System.Boolean ReadyPlayerMe.QuickStart.CameraOrbit::smoothDamp
	bool ___smoothDamp_8;
	// UnityEngine.Vector3 ReadyPlayerMe.QuickStart.CameraOrbit::rotation
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotation_9;
	// UnityEngine.Vector3 ReadyPlayerMe.QuickStart.CameraOrbit::currentVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___currentVelocity_10;
	// System.Single ReadyPlayerMe.QuickStart.CameraOrbit::pitch
	float ___pitch_11;
	// System.Single ReadyPlayerMe.QuickStart.CameraOrbit::yaw
	float ___yaw_12;
};

// CardboardStartup
struct CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DecalDestroyer
struct DecalDestroyer_tA811D6BFB8828E33AF2A21582C577A7F77C9D606  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DecalDestroyer::lifeTime
	float ___lifeTime_4;
};

// ExtinguishableFire
struct ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.ParticleSystem ExtinguishableFire::fireParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___fireParticleSystem_4;
	// UnityEngine.ParticleSystem ExtinguishableFire::smokeParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___smokeParticleSystem_5;
	// System.Boolean ExtinguishableFire::m_isExtinguished
	bool ___m_isExtinguished_6;
};

// GraphicsAPITextController
struct GraphicsAPITextController_tB19E46CC7B47712FCF2CA97FE4241DC6D347718E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// GroundCheck
struct GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GroundCheck::groundedOffset
	float ___groundedOffset_4;
	// System.Single GroundCheck::groundRadius
	float ___groundRadius_5;
	// UnityEngine.LayerMask GroundCheck::groundMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___groundMask_6;
};

// GunAim
struct GunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GunAim::borderLeft
	int32_t ___borderLeft_4;
	// System.Int32 GunAim::borderRight
	int32_t ___borderRight_5;
	// System.Int32 GunAim::borderTop
	int32_t ___borderTop_6;
	// System.Int32 GunAim::borderBottom
	int32_t ___borderBottom_7;
	// UnityEngine.Camera GunAim::parentCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___parentCamera_8;
	// System.Boolean GunAim::isOutOfBounds
	bool ___isOutOfBounds_9;
};

// GunShoot
struct GunShoot_tD7737F223B9FDD1A961D805E1F50D425B7EEB952  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GunShoot::fireRate
	float ___fireRate_4;
	// System.Single GunShoot::weaponRange
	float ___weaponRange_5;
	// UnityEngine.Transform GunShoot::gunEnd
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___gunEnd_6;
	// UnityEngine.ParticleSystem GunShoot::muzzleFlash
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___muzzleFlash_7;
	// UnityEngine.ParticleSystem GunShoot::cartridgeEjection
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___cartridgeEjection_8;
	// UnityEngine.GameObject GunShoot::metalHitEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___metalHitEffect_9;
	// UnityEngine.GameObject GunShoot::sandHitEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sandHitEffect_10;
	// UnityEngine.GameObject GunShoot::stoneHitEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___stoneHitEffect_11;
	// UnityEngine.GameObject GunShoot::waterLeakEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___waterLeakEffect_12;
	// UnityEngine.GameObject GunShoot::waterLeakExtinguishEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___waterLeakExtinguishEffect_13;
	// UnityEngine.GameObject[] GunShoot::fleshHitEffects
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___fleshHitEffects_14;
	// UnityEngine.GameObject GunShoot::woodHitEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___woodHitEffect_15;
	// System.Single GunShoot::nextFire
	float ___nextFire_16;
	// UnityEngine.Animator GunShoot::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_17;
	// GunAim GunShoot::gunAim
	GunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91* ___gunAim_18;
};

// MouseCursorLock
struct MouseCursorLock_t292CEF568900532854722008B1471487CAF46558  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.CursorLockMode MouseCursorLock::cursorLockMode
	int32_t ___cursorLockMode_4;
	// System.Boolean MouseCursorLock::hideCursor
	bool ___hideCursor_5;
	// System.Boolean MouseCursorLock::applyOnStart
	bool ___applyOnStart_6;
};

// ObjectController
struct ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Material ObjectController::InactiveMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___InactiveMaterial_4;
	// UnityEngine.Material ObjectController::GazedAtMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___GazedAtMaterial_5;
	// UnityEngine.Renderer ObjectController::_myRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ____myRenderer_10;
	// UnityEngine.Vector3 ObjectController::_startingPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____startingPosition_11;
};

// ParticleCollision
struct ParticleCollision_tBABA847FAACFFAA8330E10F545457E623121298C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent> ParticleCollision::m_CollisionEvents
	List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* ___m_CollisionEvents_4;
	// UnityEngine.ParticleSystem ParticleCollision::m_ParticleSystem
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___m_ParticleSystem_5;
};

// ParticleMenu
struct ParticleMenu_t55B30E5BB38276437817B0D0AD594DC5A8C4081E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ParticleExamples[] ParticleMenu::particleSystems
	ParticleExamplesU5BU5D_tA528C4C0E13495472D7194B800EBAAD77E8094C0* ___particleSystems_4;
	// UnityEngine.GameObject ParticleMenu::gunGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gunGameObject_5;
	// System.Int32 ParticleMenu::currentIndex
	int32_t ___currentIndex_6;
	// UnityEngine.GameObject ParticleMenu::currentGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentGO_7;
	// UnityEngine.Transform ParticleMenu::spawnLocation
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnLocation_8;
	// UnityEngine.UI.Text ParticleMenu::title
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___title_9;
	// UnityEngine.UI.Text ParticleMenu::description
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___description_10;
	// UnityEngine.UI.Text ParticleMenu::navigationDetails
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___navigationDetails_11;
};

// ReadyPlayerMe.QuickStart.PlayerInput
struct PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action ReadyPlayerMe.QuickStart.PlayerInput::OnJumpPress
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnJumpPress_9;
	// System.Single ReadyPlayerMe.QuickStart.PlayerInput::<AxisHorizontal>k__BackingField
	float ___U3CAxisHorizontalU3Ek__BackingField_10;
	// System.Single ReadyPlayerMe.QuickStart.PlayerInput::<AxisVertical>k__BackingField
	float ___U3CAxisVerticalU3Ek__BackingField_11;
	// System.Single ReadyPlayerMe.QuickStart.PlayerInput::<MouseAxisX>k__BackingField
	float ___U3CMouseAxisXU3Ek__BackingField_12;
	// System.Single ReadyPlayerMe.QuickStart.PlayerInput::<MouseAxisY>k__BackingField
	float ___U3CMouseAxisYU3Ek__BackingField_13;
	// System.Single ReadyPlayerMe.QuickStart.PlayerInput::mouseSensitivityX
	float ___mouseSensitivityX_14;
	// System.Single ReadyPlayerMe.QuickStart.PlayerInput::mouseSensitivityY
	float ___mouseSensitivityY_15;
};

// ReadyPlayerMe.QuickStart.ThirdPersonController
struct ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ReadyPlayerMe.QuickStart.ThirdPersonController::playerCamera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerCamera_9;
	// UnityEngine.Animator ReadyPlayerMe.QuickStart.ThirdPersonController::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_10;
	// UnityEngine.Vector2 ReadyPlayerMe.QuickStart.ThirdPersonController::inputVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___inputVector_11;
	// UnityEngine.Vector3 ReadyPlayerMe.QuickStart.ThirdPersonController::moveVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___moveVector_12;
	// UnityEngine.GameObject ReadyPlayerMe.QuickStart.ThirdPersonController::avatar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___avatar_13;
	// ReadyPlayerMe.QuickStart.ThirdPersonMovement ReadyPlayerMe.QuickStart.ThirdPersonController::thirdPersonMovement
	ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* ___thirdPersonMovement_14;
	// ReadyPlayerMe.QuickStart.PlayerInput ReadyPlayerMe.QuickStart.ThirdPersonController::playerInput
	PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* ___playerInput_15;
	// System.Single ReadyPlayerMe.QuickStart.ThirdPersonController::fallTimeoutDelta
	float ___fallTimeoutDelta_16;
	// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonController::inputEnabled
	bool ___inputEnabled_17;
	// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonController::isInitialized
	bool ___isInitialized_18;
};

// ReadyPlayerMe.QuickStart.ThirdPersonLoader
struct ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 ReadyPlayerMe.QuickStart.ThirdPersonLoader::avatarPositionOffset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___avatarPositionOffset_4;
	// System.String ReadyPlayerMe.QuickStart.ThirdPersonLoader::avatarUrl
	String_t* ___avatarUrl_5;
	// UnityEngine.GameObject ReadyPlayerMe.QuickStart.ThirdPersonLoader::avatar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___avatar_6;
	// ReadyPlayerMe.AvatarLoader.AvatarObjectLoader ReadyPlayerMe.QuickStart.ThirdPersonLoader::avatarObjectLoader
	AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* ___avatarObjectLoader_7;
	// UnityEngine.RuntimeAnimatorController ReadyPlayerMe.QuickStart.ThirdPersonLoader::animatorController
	RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___animatorController_8;
	// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonLoader::loadOnStart
	bool ___loadOnStart_9;
	// UnityEngine.GameObject ReadyPlayerMe.QuickStart.ThirdPersonLoader::previewAvatar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___previewAvatar_10;
};

// ReadyPlayerMe.QuickStart.ThirdPersonMovement
struct ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform ReadyPlayerMe.QuickStart.ThirdPersonMovement::playerCamera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerCamera_5;
	// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::walkSpeed
	float ___walkSpeed_6;
	// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::runSpeed
	float ___runSpeed_7;
	// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::gravity
	float ___gravity_8;
	// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::jumpHeight
	float ___jumpHeight_9;
	// UnityEngine.CharacterController ReadyPlayerMe.QuickStart.ThirdPersonMovement::controller
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___controller_10;
	// UnityEngine.GameObject ReadyPlayerMe.QuickStart.ThirdPersonMovement::avatar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___avatar_11;
	// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::verticalVelocity
	float ___verticalVelocity_12;
	// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::turnSmoothVelocity
	float ___turnSmoothVelocity_13;
	// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonMovement::jumpTrigger
	bool ___jumpTrigger_14;
	// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::<CurrentMoveSpeed>k__BackingField
	float ___U3CCurrentMoveSpeedU3Ek__BackingField_15;
	// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonMovement::isRunning
	bool ___isRunning_16;
	// GroundCheck ReadyPlayerMe.QuickStart.ThirdPersonMovement::groundCheck
	GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* ___groundCheck_17;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// VrModeController
struct VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera VrModeController::_mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____mainCamera_5;
};

// VrWalk
struct VrWalk_t8E5035BDCD1D4CF9BB31F1F8566C476662D3659B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform VrWalk::vrCamera
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___vrCamera_4;
	// System.Single VrWalk::toggleAngle
	float ___toggleAngle_5;
	// System.Single VrWalk::speed
	float ___speed_6;
	// System.Boolean VrWalk::moveForward
	bool ___moveForward_7;
	// UnityEngine.CharacterController VrWalk::cc
	CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* ___cc_8;
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

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>
struct List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParticleCollisionEventU5BU5D_t38A3BDB80328B5E9131C909384B9942D5590DFF9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>

// <PrivateImplementationDetails>

// <PrivateImplementationDetails>

// ReadyPlayerMe.AvatarLoader.AvatarObjectLoader

// ReadyPlayerMe.AvatarLoader.AvatarObjectLoader

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// DecalDestroyer/<Start>d__1

// DecalDestroyer/<Start>d__1

// ExtinguishableFire/<Extinguishing>d__6

// ExtinguishableFire/<Extinguishing>d__6

// ExtinguishableFire/<StartingFire>d__7

// ExtinguishableFire/<StartingFire>d__7

// VrModeController/<StartXR>d__10

// VrModeController/<StartXR>d__10

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Double

// System.Double

// ReadyPlayerMe.AvatarLoader.FailureEventArgs

// ReadyPlayerMe.AvatarLoader.FailureEventArgs

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

// System.UInt32

// System.UInt32

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

// UnityEngine.ParticleCollisionEvent

// UnityEngine.ParticleCollisionEvent

// ParticleExamples

// ParticleExamples

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.Touch

// UnityEngine.Touch

// ReadyPlayerMe.AvatarLoader.CompletionEventArgs

// ReadyPlayerMe.AvatarLoader.CompletionEventArgs

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.PhysicMaterial

// UnityEngine.PhysicMaterial

// UnityEngine.RuntimeAnimatorController

// UnityEngine.RuntimeAnimatorController

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.CompletionEventArgs>

// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.CompletionEventArgs>

// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.FailureEventArgs>

// System.EventHandler`1<ReadyPlayerMe.AvatarLoader.FailureEventArgs>

// System.Action

// System.Action

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.ParticleSystem

// UnityEngine.ParticleSystem

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.TextMesh

// UnityEngine.TextMesh

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.XR.Management.XRGeneralSettings
struct XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields
{
	// System.String UnityEngine.XR.Management.XRGeneralSettings::k_SettingsKey
	String_t* ___k_SettingsKey_4;
	// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::s_RuntimeSettingsInstance
	XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* ___s_RuntimeSettingsInstance_5;
};

// UnityEngine.XR.Management.XRGeneralSettings

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRLoader

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.XR.Management.XRManagerSettings

// UnityEngine.Animator

// UnityEngine.Animator

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

// UnityEngine.CharacterController

// UnityEngine.CharacterController

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// ReadyPlayerMe.QuickStart.CameraFollow

// ReadyPlayerMe.QuickStart.CameraFollow

// ReadyPlayerMe.QuickStart.CameraOrbit

// ReadyPlayerMe.QuickStart.CameraOrbit

// CardboardStartup

// CardboardStartup

// DecalDestroyer

// DecalDestroyer

// ExtinguishableFire

// ExtinguishableFire

// GraphicsAPITextController

// GraphicsAPITextController

// GroundCheck

// GroundCheck

// GunAim

// GunAim

// GunShoot

// GunShoot

// MouseCursorLock

// MouseCursorLock

// ObjectController

// ObjectController

// ParticleCollision

// ParticleCollision

// ParticleMenu

// ParticleMenu

// ReadyPlayerMe.QuickStart.PlayerInput

// ReadyPlayerMe.QuickStart.PlayerInput

// ReadyPlayerMe.QuickStart.ThirdPersonController
struct ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields
{
	// System.Int32 ReadyPlayerMe.QuickStart.ThirdPersonController::MoveSpeedHash
	int32_t ___MoveSpeedHash_5;
	// System.Int32 ReadyPlayerMe.QuickStart.ThirdPersonController::JumpHash
	int32_t ___JumpHash_6;
	// System.Int32 ReadyPlayerMe.QuickStart.ThirdPersonController::FreeFallHash
	int32_t ___FreeFallHash_7;
	// System.Int32 ReadyPlayerMe.QuickStart.ThirdPersonController::IsGroundedHash
	int32_t ___IsGroundedHash_8;
};

// ReadyPlayerMe.QuickStart.ThirdPersonController

// ReadyPlayerMe.QuickStart.ThirdPersonLoader

// ReadyPlayerMe.QuickStart.ThirdPersonLoader

// ReadyPlayerMe.QuickStart.ThirdPersonMovement

// ReadyPlayerMe.QuickStart.ThirdPersonMovement

// VrModeController

// VrModeController

// VrWalk

// VrWalk

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// ParticleExamples[]
struct ParticleExamplesU5BU5D_tA528C4C0E13495472D7194B800EBAAD77E8094C0  : public RuntimeArray
{
	ALIGN_FIELD (8) ParticleExamples_tD7815724B5248043652CFD842678BBAAD8AD1EB4* m_Items[1];

	inline ParticleExamples_tD7815724B5248043652CFD842678BBAAD8AD1EB4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleExamples_tD7815724B5248043652CFD842678BBAAD8AD1EB4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleExamples_tD7815724B5248043652CFD842678BBAAD8AD1EB4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleExamples_tD7815724B5248043652CFD842678BBAAD8AD1EB4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleExamples_tD7815724B5248043652CFD842678BBAAD8AD1EB4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleExamples_tD7815724B5248043652CFD842678BBAAD8AD1EB4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_gshared (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_gshared (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// System.Void DecalDestroyer/<Start>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1__ctor_m1E6042D6170DF53ED2FEF89D6EFF48E63C243D42 (U3CStartU3Ed__1_tB2524FD4D0557BF5CC05183B1650FF248A3A03BD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ExtinguishableFire::StartingFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExtinguishableFire_StartingFire_m1585288C555BAB617490C9A40137DFC60A36FAE1 (ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ExtinguishableFire::Extinguishing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExtinguishableFire_Extinguishing_m72E8E6AE8192556BAF0DEA4428D913FBCFC2C433 (ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* __this, const RuntimeMethod* method) ;
// System.Void ExtinguishableFire/<Extinguishing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExtinguishingU3Ed__6__ctor_m70748B8483E702B31C5254BF249AD948ABA0FA5E (U3CExtinguishingU3Ed__6_t6ABBF8FA232856A6C56FE105DD1310342F2A5D47* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void ExtinguishableFire/<StartingFire>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartingFireU3Ed__7__ctor_m4DEAFCE842353EDEA0C4F30701D92158823383E9 (U3CStartingFireU3Ed__7_tF6D45615B101931A10F0808CA80F47907EC900FB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_set_time_mD7AF2E34304DBF8ED9ECA84710C0871B184B73EC (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponentInParent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mD2A1E502FEE7E5F38A8647CBDD1C7E5D38EF05DE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_worldPosition, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<GunAim>()
inline GunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91* Component_GetComponentInParent_TisGunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91_m606A945142239493DE9418B395E34A6B86883BCB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Boolean GunAim::GetIsOutOfBounds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GunAim_GetIsOutOfBounds_mF8AAF5F04C61EDCE7250D5F0E0E5E9FF91024873_inline (GunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, float ___3_maxDistance, const RuntimeMethod* method) ;
// System.Void GunShoot::HandleHit(UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunShoot_HandleHit_m2DBD251CA917A7AD8626B707104C438AD4A83D3F (GunShoot_tD7737F223B9FDD1A961D805E1F50D425B7EEB952* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_hit, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.PhysicMaterial UnityEngine.Collider::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* Collider_get_sharedMaterial_m238C1D9D4B2B1F02876C610E049C7A5ECCDC07AC (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void GunShoot::SpawnDecal(UnityEngine.RaycastHit,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunShoot_SpawnDecal_m715D3F3F5BBA8881C02E967165B2FC53E6B7EB1E (GunShoot_tD7737F223B9FDD1A961D805E1F50D425B7EEB952* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_hit, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_prefab, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.ParticlePhysicsExtensions::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticlePhysicsExtensions_GetCollisionEvents_mD44421A4CC66ECB3D6FD5D9012FE6131D3DB74B7 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___0_ps, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_go, List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* ___2_collisionEvents, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::get_Item(System.Int32)
inline ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 (*) (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD*, int32_t, const RuntimeMethod*))List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_gshared)(__this, ___0_index, method);
}
// UnityEngine.Component UnityEngine.ParticleCollisionEvent::get_colliderComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ParticleCollisionEvent_get_colliderComponent_m42DDDB3E857EB4A449267ECE37B11A90EA71B37A (ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ExtinguishableFire>()
inline ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* Component_GetComponent_TisExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508_mA99A973371668EA042C637224A9ECD66337FEBF5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ExtinguishableFire::Extinguish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtinguishableFire_Extinguish_m73FE4B2C2A858FE487C970C766CF09F42E1D5C6A (ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>::.ctor()
inline void List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1 (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD*, const RuntimeMethod*))List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_gshared)(__this, method);
}
// System.Void ParticleMenu::Navigate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleMenu_Navigate_mE66891EF3FA1054A0554C99E9F0A2C9EF50D2675 (ParticleMenu_t55B30E5BB38276437817B0D0AD594DC5A8C4081E* __this, int32_t ___0_i, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_brightness(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_brightness_m0EE16AC1CB4F674B178C75F8180E6A675A3CD8F7 (float ___0_value, const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::HasDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_HasDeviceParams_m7158915814477F6D8C085ED748F12215F2F3F578 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::ScanDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsGearButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsGearButtonPressed_m922BF1A99A8B035D565441F96824AE9F0925156A (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsCloseButtonPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsCloseButtonPressed_m4B0EDA79280273FDD21B841B7E4765D90F978F43 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::get_IsTriggerHeldPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_get_IsTriggerHeldPressed_m24BDCFD056C57E371E827EB59F09C9DD7F42191F (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::Recenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_Recenter_m0668D49BC62C4DEDCE1A50C78F9E5016D01280C0 (const RuntimeMethod* method) ;
// System.Boolean Google.XR.Cardboard.Api::HasNewDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Api_HasNewDeviceParams_m8CF6742A64A20B00D8FFE2F229628D1DB54831C5 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::ReloadDeviceParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_ReloadDeviceParams_mBACF68BBC935329B23B19CB08A9CF0D5A6AB8F04 (const RuntimeMethod* method) ;
// System.Void Google.XR.Cardboard.Api::UpdateScreenParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Api_UpdateScreenParams_mC3CED586D588F397D1B53DAAEE0697DA5FDADB03 (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
// UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::get_graphicsDeviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545 (const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ObjectController::SetMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, bool ___0_gazedAt, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::GetSiblingIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void ObjectController::TeleportRandomly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_TeleportRandomly_m45F23374832369044CBD4F60F4F976D33C97C181 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___0_index, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRGeneralSettings UnityEngine.XR.Management.XRGeneralSettings::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRManagerSettings UnityEngine.XR.Management.XRGeneralSettings::get_Manager()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.XR.Management.XRManagerSettings::get_isInitializationComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Boolean VrModeController::get__isVrModeEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController::ExitVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Boolean VrModeController::get__isScreenTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController::EnterVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator VrModeController::StartXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController::StopXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) ;
// System.Void VrModeController/<StartXR>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StopSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4 (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::DeinitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::ResetAspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_ResetAspect_mAC248F92A2CAC44E2D33EFC3D08AACA9BC3DCEBB (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.Management.XRManagerSettings::InitializeLoader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.Management.XRManagerSettings::StartSubsystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_radius, int32_t ___2_layerMask, const RuntimeMethod* method) ;
// System.Void MouseCursorLock::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseCursorLock_Apply_m16AE091CB6D60704D32A1274EEFA87284732843A (MouseCursorLock_t292CEF568900532854722008B1471487CAF46558* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7 (bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9 (int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.CharacterController::SimpleMove(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterController_SimpleMove_mE32A48D439878B3241E8456F8EBFAAE264BD705C (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_speed, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.Core.SDKLogger::LogWarning(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKLogger_LogWarning_m296702240E8291BA9F9A9E2DB57D1CE8FCC79AC3 (String_t* ___0_tag, RuntimeObject* ___1_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.CameraFollow::StartFollow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_StartFollow_m9F4070CE451A6443D518BE748D181A441AFEED22 (CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single ReadyPlayerMe.QuickStart.PlayerInput::get_MouseAxisX()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerInput_get_MouseAxisX_m517553D7755EC539C395A87345206359C719C74D_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) ;
// System.Single ReadyPlayerMe.QuickStart.PlayerInput::get_MouseAxisY()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerInput_get_MouseAxisY_m32B6331B6392DED8AF93AC744FDF868448C9C4E4_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) ;
// System.Single ReadyPlayerMe.QuickStart.CameraOrbit::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraOrbit_ClampAngle_m573D0906C085F32B35D0BA9D21F39067D99F5DFF (CameraOrbit_t63BBBB457CA29B5630401021DB03DB1CCF2AC8B5* __this, float ___0_angle, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::set_AxisHorizontal(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerInput_set_AxisHorizontal_mA698E8B72185C79CA74B278BAB54FD01DD487689_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::set_AxisVertical(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerInput_set_AxisVertical_mDD8FF9AB5F1BFE53C69766EAB27C45F80CFEA553_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::set_MouseAxisX(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerInput_set_MouseAxisX_mFE9182A7A86366DD9BD4B83294FA2A0D12C7124C_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::set_MouseAxisY(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerInput_set_MouseAxisY_mB28D735655CB89CB9201A8F1283FF76DD54B2EBA_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ReadyPlayerMe.QuickStart.ThirdPersonMovement>()
inline ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* Component_GetComponent_TisThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28_m7AC9E938D2DE0CBDE4A45BD8BFD5FC99E97F2D1B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<ReadyPlayerMe.QuickStart.PlayerInput>()
inline PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* Component_GetComponent_TisPlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C_m1A0CAB9BA6FD5D086A1908CC3ABB0151F01C805A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Init_m6515F9CDF421D08BBBF185A67A9C2B08FA544B33 (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::Setup(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_Setup_m847528711F11312D8BDD37BFAC61C7456945033F (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::set_runtimeAnimatorController(UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::CheckInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_CheckInput_m3C9F5E10CD9F719436FC1ADE0A0AFE9A61ABB039 (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) ;
// System.Single ReadyPlayerMe.QuickStart.PlayerInput::get_AxisHorizontal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerInput_get_AxisHorizontal_m1D5B395A4B8E6B7859495693589F6951715DC2B4_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) ;
// System.Single ReadyPlayerMe.QuickStart.PlayerInput::get_AxisVertical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerInput_get_AxisVertical_mCAB43AC24F874CE7348C141767F355EE3CA2D420_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::Move(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_Move_mFF8325693B81201831555283D77AC080A2258144 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, float ___0_inputX, float ___1_inputY, const RuntimeMethod* method) ;
// System.Boolean ReadyPlayerMe.QuickStart.PlayerInput::get_IsHoldingLeftShift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerInput_get_IsHoldingLeftShift_mE14D9A584A88EDB50C5D93164B5272927F6BBF7D (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::SetIsRunning(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThirdPersonMovement_SetIsRunning_m5AD3B8466B6ECE622F8004C7DDD254A0FC3C023A_inline (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, bool ___0_running, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::UpdateAnimator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_UpdateAnimator_mB6E6A811F66C7622A5F742F0C1335C98FD95B94B (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, const RuntimeMethod* method) ;
// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonMovement::IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThirdPersonMovement_IsGrounded_m6AF64A40D8733B384C53DF27234B3774D4CB7469 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) ;
// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::get_CurrentMoveSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ThirdPersonMovement_get_CurrentMoveSpeed_m532FF9B2AE9D60DB17C48724C9FB9305F2A7E1D3_inline (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, bool ___1_value, const RuntimeMethod* method) ;
// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonMovement::TryJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThirdPersonMovement_TryJump_mD0CEA19B8ED7DCE616D3558BCBF3575CC3010270 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarObjectLoader__ctor_mAF29E478AD7B7A55BFFA4416F4F68F0AB2BA5B90 (AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* __this, bool ___0_useDefaultGLTFDeferAgent, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<ReadyPlayerMe.AvatarLoader.CompletionEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m434453DC77C1B72FE1935254DD7AB140A09BF956 (EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::add_OnCompleted(System.EventHandler`1<ReadyPlayerMe.AvatarLoader.CompletionEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarObjectLoader_add_OnCompleted_mBA7FF229BA3DFFFA8ACD8FAC07B9985D45BA3D8D (AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* __this, EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9* ___0_value, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<ReadyPlayerMe.AvatarLoader.FailureEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m6BBDD641747A4C4E893A3A3A856AA2983FB943A2 (EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::add_OnFailed(System.EventHandler`1<ReadyPlayerMe.AvatarLoader.FailureEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarObjectLoader_add_OnFailed_mBC2D17BC4C3D444D3A7515E08D15BFFA41734685 (AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* __this, EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A* ___0_value, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonLoader::SetupAvatar(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonLoader_SetupAvatar_m336406DB78CD318A8215BF2C9D6CD51445559AD1 (ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_targetAvatar, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonLoader::LoadAvatar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonLoader_LoadAvatar_mBC2C9AE956C0E428CD9F47349444D90C7BF10222 (ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4* __this, String_t* ___0_url, const RuntimeMethod* method) ;
// UnityEngine.GameObject ReadyPlayerMe.AvatarLoader.CompletionEventArgs::get_Avatar()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* CompletionEventArgs_get_Avatar_mD872C68004A3EE977C539011945268D61A9966EF_inline (CompletionEventArgs_tBF4A5164C04020BEF9A73E33EA6A6EA73E9E297C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ReadyPlayerMe.QuickStart.ThirdPersonController>()
inline ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* Component_GetComponent_TisThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_mB4628DB9A699A47DAA8B46549B7E18E9855256A6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::Setup(UnityEngine.GameObject,UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Setup_m436496E9BE83F1489C20A2336B763F9BDBB1F4F5 (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___1_runtimeAnimatorController, const RuntimeMethod* method) ;
// System.String System.String::Trim(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mF5081365E55C31B636F8145F42AEF61868175A5A (String_t* __this, Il2CppChar ___0_trimChar, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.AvatarLoader.AvatarObjectLoader::LoadAvatar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarObjectLoader_LoadAvatar_m5EE260D9A70E45BFACCD0E45CA3F3EBE2D77C9DE (AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* __this, String_t* ___0_url, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<GroundCheck>()
inline GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* Component_GetComponent_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m2EF5C398F98450FF07BD95E49F2CCC48B5C6698B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_JumpAndGravity_m623E845494E355A79958FFE6E818F12698072C0B (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_motion, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::set_CurrentMoveSpeed(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThirdPersonMovement_set_CurrentMoveSpeed_m13919F21BCB86E0864110BBDDC212DBAC3C2ADF4_inline (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::RotateAvatarTowardsMoveDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_RotateAvatarTowardsMoveDirection_m18D407BE1E9F95B2EC7B143DBEB70D961306AA5D (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_moveDirection, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.CharacterController::get_isGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67 (CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* __this, const RuntimeMethod* method) ;
// System.Boolean GroundCheck::IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GroundCheck_IsGrounded_m2E68C51BBE946384E20897489ABD77DBBED161C0 (GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDampAngle(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___0_current, float ___1_target, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::SmoothDamp(System.Single,System.Single,System.Single&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248 (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) ;
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
// System.Collections.IEnumerator DecalDestroyer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DecalDestroyer_Start_m49AED615B4F91B9310C5C8B0D6A922CCE41AD618 (DecalDestroyer_tA811D6BFB8828E33AF2A21582C577A7F77C9D606* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__1_tB2524FD4D0557BF5CC05183B1650FF248A3A03BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__1_tB2524FD4D0557BF5CC05183B1650FF248A3A03BD* L_0 = (U3CStartU3Ed__1_tB2524FD4D0557BF5CC05183B1650FF248A3A03BD*)il2cpp_codegen_object_new(U3CStartU3Ed__1_tB2524FD4D0557BF5CC05183B1650FF248A3A03BD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__1__ctor_m1E6042D6170DF53ED2FEF89D6EFF48E63C243D42(L_0, 0, NULL);
		U3CStartU3Ed__1_tB2524FD4D0557BF5CC05183B1650FF248A3A03BD* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void DecalDestroyer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecalDestroyer__ctor_m5312DE0DC15964556EA33A590B0CDD2CC97B67FF (DecalDestroyer_tA811D6BFB8828E33AF2A21582C577A7F77C9D606* __this, const RuntimeMethod* method) 
{
	{
		// public float lifeTime = 5.0f;
		__this->___lifeTime_4 = (5.0f);
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
// System.Void DecalDestroyer/<Start>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1__ctor_m1E6042D6170DF53ED2FEF89D6EFF48E63C243D42 (U3CStartU3Ed__1_tB2524FD4D0557BF5CC05183B1650FF248A3A03BD* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DecalDestroyer/<Start>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_System_IDisposable_Dispose_m7E4A23899541996A2972E694F8AA4E3AE4405E24 (U3CStartU3Ed__1_tB2524FD4D0557BF5CC05183B1650FF248A3A03BD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DecalDestroyer/<Start>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__1_MoveNext_m176F31283952FBBB50AA46211661B59AB4DFE2A5 (U3CStartU3Ed__1_tB2524FD4D0557BF5CC05183B1650FF248A3A03BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DecalDestroyer_tA811D6BFB8828E33AF2A21582C577A7F77C9D606* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DecalDestroyer_tA811D6BFB8828E33AF2A21582C577A7F77C9D606* L_1 = __this->___U3CU3E4__this_2;
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
		// yield return new WaitForSeconds(lifeTime);
		DecalDestroyer_tA811D6BFB8828E33AF2A21582C577A7F77C9D606* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___lifeTime_4;
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
		// Destroy(gameObject);
		DecalDestroyer_tA811D6BFB8828E33AF2A21582C577A7F77C9D606* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
		// }
		return (bool)0;
	}
}
// System.Object DecalDestroyer/<Start>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFD5CF240B98F934ECCEEACDF6C60373A197F7EF5 (U3CStartU3Ed__1_tB2524FD4D0557BF5CC05183B1650FF248A3A03BD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DecalDestroyer/<Start>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__1_System_Collections_IEnumerator_Reset_m30F4CAC79B18143D68555C81236F8369FA147E19 (U3CStartU3Ed__1_tB2524FD4D0557BF5CC05183B1650FF248A3A03BD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__1_System_Collections_IEnumerator_Reset_m30F4CAC79B18143D68555C81236F8369FA147E19_RuntimeMethod_var)));
	}
}
// System.Object DecalDestroyer/<Start>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__1_System_Collections_IEnumerator_get_Current_mC980E8751CA2F6664E312E635B7404D43F3C6AF8 (U3CStartU3Ed__1_tB2524FD4D0557BF5CC05183B1650FF248A3A03BD* __this, const RuntimeMethod* method) 
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
// System.Void ExtinguishableFire::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtinguishableFire_Start_m943AAED24B7B7925BEF8CF983656753E46B0A3B3 (ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* __this, const RuntimeMethod* method) 
{
	{
		// m_isExtinguished = true;
		__this->___m_isExtinguished_6 = (bool)1;
		// smokeParticleSystem.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___smokeParticleSystem_5;
		NullCheck(L_0);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_0, NULL);
		// fireParticleSystem.Stop();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_1 = __this->___fireParticleSystem_4;
		NullCheck(L_1);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_1, NULL);
		// StartCoroutine(StartingFire());
		RuntimeObject* L_2;
		L_2 = ExtinguishableFire_StartingFire_m1585288C555BAB617490C9A40137DFC60A36FAE1(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void ExtinguishableFire::Extinguish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtinguishableFire_Extinguish_m73FE4B2C2A858FE487C970C766CF09F42E1D5C6A (ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* __this, const RuntimeMethod* method) 
{
	{
		// if (m_isExtinguished)
		bool L_0 = __this->___m_isExtinguished_6;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_isExtinguished = true;
		__this->___m_isExtinguished_6 = (bool)1;
		// StartCoroutine(Extinguishing());
		RuntimeObject* L_1;
		L_1 = ExtinguishableFire_Extinguishing_m72E8E6AE8192556BAF0DEA4428D913FBCFC2C433(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ExtinguishableFire::Extinguishing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExtinguishableFire_Extinguishing_m72E8E6AE8192556BAF0DEA4428D913FBCFC2C433 (ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExtinguishingU3Ed__6_t6ABBF8FA232856A6C56FE105DD1310342F2A5D47_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CExtinguishingU3Ed__6_t6ABBF8FA232856A6C56FE105DD1310342F2A5D47* L_0 = (U3CExtinguishingU3Ed__6_t6ABBF8FA232856A6C56FE105DD1310342F2A5D47*)il2cpp_codegen_object_new(U3CExtinguishingU3Ed__6_t6ABBF8FA232856A6C56FE105DD1310342F2A5D47_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CExtinguishingU3Ed__6__ctor_m70748B8483E702B31C5254BF249AD948ABA0FA5E(L_0, 0, NULL);
		U3CExtinguishingU3Ed__6_t6ABBF8FA232856A6C56FE105DD1310342F2A5D47* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator ExtinguishableFire::StartingFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExtinguishableFire_StartingFire_m1585288C555BAB617490C9A40137DFC60A36FAE1 (ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartingFireU3Ed__7_tF6D45615B101931A10F0808CA80F47907EC900FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartingFireU3Ed__7_tF6D45615B101931A10F0808CA80F47907EC900FB* L_0 = (U3CStartingFireU3Ed__7_tF6D45615B101931A10F0808CA80F47907EC900FB*)il2cpp_codegen_object_new(U3CStartingFireU3Ed__7_tF6D45615B101931A10F0808CA80F47907EC900FB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartingFireU3Ed__7__ctor_m4DEAFCE842353EDEA0C4F30701D92158823383E9(L_0, 0, NULL);
		U3CStartingFireU3Ed__7_tF6D45615B101931A10F0808CA80F47907EC900FB* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ExtinguishableFire::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtinguishableFire__ctor_mF645714CB39746DECBBDC73AF05E9483956203CF (ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* __this, const RuntimeMethod* method) 
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
// System.Void ExtinguishableFire/<Extinguishing>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExtinguishingU3Ed__6__ctor_m70748B8483E702B31C5254BF249AD948ABA0FA5E (U3CExtinguishingU3Ed__6_t6ABBF8FA232856A6C56FE105DD1310342F2A5D47* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ExtinguishableFire/<Extinguishing>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExtinguishingU3Ed__6_System_IDisposable_Dispose_m508CF3A2391296B8FCFFB116792384F268AB0259 (U3CExtinguishingU3Ed__6_t6ABBF8FA232856A6C56FE105DD1310342F2A5D47* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ExtinguishableFire/<Extinguishing>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExtinguishingU3Ed__6_MoveNext_mE166193F945DA9E6102A03B4C39089B1E1A985CB (U3CExtinguishingU3Ed__6_t6ABBF8FA232856A6C56FE105DD1310342F2A5D47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_00a8;
			}
			case 2:
			{
				goto IL_00e7;
			}
			case 3:
			{
				goto IL_0127;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// fireParticleSystem.Stop();
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_3 = V_1;
		NullCheck(L_3);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_4 = L_3->___fireParticleSystem_4;
		NullCheck(L_4);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_4, NULL);
		// smokeParticleSystem.time = 0;
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_5 = V_1;
		NullCheck(L_5);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_6 = L_5->___smokeParticleSystem_5;
		NullCheck(L_6);
		ParticleSystem_set_time_mD7AF2E34304DBF8ED9ECA84710C0871B184B73EC(L_6, (0.0f), NULL);
		// smokeParticleSystem.Play();
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_7 = V_1;
		NullCheck(L_7);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = L_7->___smokeParticleSystem_5;
		NullCheck(L_8);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_8, NULL);
		// float elapsedTime = 0.0f;
		__this->___U3CelapsedTimeU3E5__2_3 = (0.0f);
		goto IL_00c1;
	}

IL_0060:
	{
		// float ratio = Mathf.Max(0.0f, 1.0f - (elapsedTime / m_FireStartingTime));
		float L_9 = __this->___U3CelapsedTimeU3E5__2_3;
		float L_10;
		L_10 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline((0.0f), ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_9/(2.0f))))), NULL);
		V_2 = L_10;
		// fireParticleSystem.transform.localScale = Vector3.one * ratio;
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_11 = V_1;
		NullCheck(L_11);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_12 = L_11->___fireParticleSystem_4;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_15 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, L_15, NULL);
		NullCheck(L_13);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_13, L_16, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00a8:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// elapsedTime += Time.deltaTime;
		float L_17 = __this->___U3CelapsedTimeU3E5__2_3;
		float L_18;
		L_18 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CelapsedTimeU3E5__2_3 = ((float)il2cpp_codegen_add(L_17, L_18));
	}

IL_00c1:
	{
		// while (elapsedTime < m_FireStartingTime)
		float L_19 = __this->___U3CelapsedTimeU3E5__2_3;
		if ((((float)L_19) < ((float)(2.0f))))
		{
			goto IL_0060;
		}
	}
	{
		// yield return new WaitForSeconds(2.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_20 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_20, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00e7:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// smokeParticleSystem.Stop();
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_21 = V_1;
		NullCheck(L_21);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_22 = L_21->___smokeParticleSystem_5;
		NullCheck(L_22);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_22, NULL);
		// fireParticleSystem.transform.localScale = Vector3.one;
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_23 = V_1;
		NullCheck(L_23);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_24 = L_23->___fireParticleSystem_4;
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_25);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_25, L_26, NULL);
		// yield return new WaitForSeconds(4.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_27 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_27, (4.0f), NULL);
		__this->___U3CU3E2__current_1 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_27);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0127:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StartCoroutine(StartingFire());
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_28 = V_1;
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_29 = V_1;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = ExtinguishableFire_StartingFire_m1585288C555BAB617490C9A40137DFC60A36FAE1(L_29, NULL);
		NullCheck(L_28);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_31;
		L_31 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_28, L_30, NULL);
		// }
		return (bool)0;
	}
}
// System.Object ExtinguishableFire/<Extinguishing>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExtinguishingU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC3A52FFC1ED559281B21EF8C3C24EF195CDC5F0A (U3CExtinguishingU3Ed__6_t6ABBF8FA232856A6C56FE105DD1310342F2A5D47* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ExtinguishableFire/<Extinguishing>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExtinguishingU3Ed__6_System_Collections_IEnumerator_Reset_m43E2805A9D4795926B91B16BFD460783303C30B2 (U3CExtinguishingU3Ed__6_t6ABBF8FA232856A6C56FE105DD1310342F2A5D47* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExtinguishingU3Ed__6_System_Collections_IEnumerator_Reset_m43E2805A9D4795926B91B16BFD460783303C30B2_RuntimeMethod_var)));
	}
}
// System.Object ExtinguishableFire/<Extinguishing>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExtinguishingU3Ed__6_System_Collections_IEnumerator_get_Current_m8F9A36057B87087928ED6D1D2D0919266FA7B4D4 (U3CExtinguishingU3Ed__6_t6ABBF8FA232856A6C56FE105DD1310342F2A5D47* __this, const RuntimeMethod* method) 
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
// System.Void ExtinguishableFire/<StartingFire>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartingFireU3Ed__7__ctor_m4DEAFCE842353EDEA0C4F30701D92158823383E9 (U3CStartingFireU3Ed__7_tF6D45615B101931A10F0808CA80F47907EC900FB* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ExtinguishableFire/<StartingFire>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartingFireU3Ed__7_System_IDisposable_Dispose_m5C0A7E027DC693BEA4350B2F02C48101B74747D5 (U3CStartingFireU3Ed__7_tF6D45615B101931A10F0808CA80F47907EC900FB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ExtinguishableFire/<StartingFire>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartingFireU3Ed__7_MoveNext_mF5CCF22EBCB4A5EA41783DE5B2FEA1A9BBCD9F87 (U3CStartingFireU3Ed__7_tF6D45615B101931A10F0808CA80F47907EC900FB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0093;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// smokeParticleSystem.Stop();
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_4 = V_1;
		NullCheck(L_4);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_5 = L_4->___smokeParticleSystem_5;
		NullCheck(L_5);
		ParticleSystem_Stop_m2D8D4967496EF0F5BFEF679C49A9E65A9646C423(L_5, NULL);
		// fireParticleSystem.time = 0;
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_6 = V_1;
		NullCheck(L_6);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_7 = L_6->___fireParticleSystem_4;
		NullCheck(L_7);
		ParticleSystem_set_time_mD7AF2E34304DBF8ED9ECA84710C0871B184B73EC(L_7, (0.0f), NULL);
		// fireParticleSystem.Play();
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_8 = V_1;
		NullCheck(L_8);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_9 = L_8->___fireParticleSystem_4;
		NullCheck(L_9);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_9, NULL);
		// float elapsedTime = 0.0f;
		__this->___U3CelapsedTimeU3E5__2_3 = (0.0f);
		goto IL_00ac;
	}

IL_0051:
	{
		// float ratio = Mathf.Min(1.0f, (elapsedTime / m_FireStartingTime));
		float L_10 = __this->___U3CelapsedTimeU3E5__2_3;
		float L_11;
		L_11 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline((1.0f), ((float)(L_10/(2.0f))), NULL);
		V_2 = L_11;
		// fireParticleSystem.transform.localScale = Vector3.one * ratio;
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_12 = V_1;
		NullCheck(L_12);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_13 = L_12->___fireParticleSystem_4;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, L_16, NULL);
		NullCheck(L_14);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_14, L_17, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0093:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// elapsedTime += Time.deltaTime;
		float L_18 = __this->___U3CelapsedTimeU3E5__2_3;
		float L_19;
		L_19 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___U3CelapsedTimeU3E5__2_3 = ((float)il2cpp_codegen_add(L_18, L_19));
	}

IL_00ac:
	{
		// while (elapsedTime < m_FireStartingTime)
		float L_20 = __this->___U3CelapsedTimeU3E5__2_3;
		if ((((float)L_20) < ((float)(2.0f))))
		{
			goto IL_0051;
		}
	}
	{
		// fireParticleSystem.transform.localScale = Vector3.one;
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_21 = V_1;
		NullCheck(L_21);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_22 = L_21->___fireParticleSystem_4;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_23);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_23, L_24, NULL);
		// m_isExtinguished = false;
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_25 = V_1;
		NullCheck(L_25);
		L_25->___m_isExtinguished_6 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object ExtinguishableFire/<StartingFire>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartingFireU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCD2E1EDEA02E272D8ACCFC71F6F38D02561D3935 (U3CStartingFireU3Ed__7_tF6D45615B101931A10F0808CA80F47907EC900FB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ExtinguishableFire/<StartingFire>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartingFireU3Ed__7_System_Collections_IEnumerator_Reset_m9CA3702DCDF26353D1CE95A30AAAE9CE09743623 (U3CStartingFireU3Ed__7_tF6D45615B101931A10F0808CA80F47907EC900FB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartingFireU3Ed__7_System_Collections_IEnumerator_Reset_m9CA3702DCDF26353D1CE95A30AAAE9CE09743623_RuntimeMethod_var)));
	}
}
// System.Object ExtinguishableFire/<StartingFire>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartingFireU3Ed__7_System_Collections_IEnumerator_get_Current_m6CAC707AFE59368A9050207C96CB0B78835D50F2 (U3CStartingFireU3Ed__7_tF6D45615B101931A10F0808CA80F47907EC900FB* __this, const RuntimeMethod* method) 
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
// System.Void GunAim::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunAim_Start_mF4848F3D98A0C959A016377E34EF6D1A9F34E79F (GunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mD2A1E502FEE7E5F38A8647CBDD1C7E5D38EF05DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parentCamera = GetComponentInParent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponentInParent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mD2A1E502FEE7E5F38A8647CBDD1C7E5D38EF05DE(__this, Component_GetComponentInParent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_mD2A1E502FEE7E5F38A8647CBDD1C7E5D38EF05DE_RuntimeMethod_var);
		__this->___parentCamera_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parentCamera_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void GunAim::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunAim_Update_mCE7D514BC9AF6E2183C31461103A0BCF83E1A4BA (GunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float mouseX = Input.mousePosition.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_1 = L_0.___x_2;
		V_0 = L_1;
		// float mouseY = Input.mousePosition.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		float L_3 = L_2.___y_3;
		V_1 = L_3;
		// if (mouseX <= borderLeft || mouseX >= Screen.width - borderRight || mouseY <= borderBottom || mouseY >= Screen.height - borderTop)
		float L_4 = V_0;
		int32_t L_5 = __this->___borderLeft_4;
		if ((((float)L_4) <= ((float)((float)L_5))))
		{
			goto IL_004a;
		}
	}
	{
		float L_6 = V_0;
		int32_t L_7;
		L_7 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		int32_t L_8 = __this->___borderRight_5;
		if ((((float)L_6) >= ((float)((float)((int32_t)il2cpp_codegen_subtract(L_7, L_8))))))
		{
			goto IL_004a;
		}
	}
	{
		float L_9 = V_1;
		int32_t L_10 = __this->___borderBottom_7;
		if ((((float)L_9) <= ((float)((float)L_10))))
		{
			goto IL_004a;
		}
	}
	{
		float L_11 = V_1;
		int32_t L_12;
		L_12 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		int32_t L_13 = __this->___borderTop_6;
		if ((!(((float)L_11) >= ((float)((float)((int32_t)il2cpp_codegen_subtract(L_12, L_13)))))))
		{
			goto IL_0053;
		}
	}

IL_004a:
	{
		// isOutOfBounds = true;
		__this->___isOutOfBounds_9 = (bool)1;
		goto IL_005a;
	}

IL_0053:
	{
		// isOutOfBounds = false;
		__this->___isOutOfBounds_9 = (bool)0;
	}

IL_005a:
	{
		// if (!isOutOfBounds)
		bool L_14 = __this->___isOutOfBounds_9;
		if (L_14)
		{
			goto IL_0084;
		}
	}
	{
		// transform.LookAt(parentCamera.ScreenToWorldPoint (new Vector3(mouseX, mouseY, 5.0f)));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = __this->___parentCamera_8;
		float L_17 = V_0;
		float L_18 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), L_17, L_18, (5.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_16, L_19, NULL);
		NullCheck(L_15);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_15, L_20, NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Boolean GunAim::GetIsOutOfBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GunAim_GetIsOutOfBounds_mF8AAF5F04C61EDCE7250D5F0E0E5E9FF91024873 (GunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91* __this, const RuntimeMethod* method) 
{
	{
		// return isOutOfBounds;
		bool L_0 = __this->___isOutOfBounds_9;
		return L_0;
	}
}
// System.Void GunAim::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunAim__ctor_m8F192D91D4C033D3D85205707522F6504F4833F6 (GunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91* __this, const RuntimeMethod* method) 
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
// System.Void GunShoot::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunShoot_Start_m2941F027CCF283A17394F1F851ADE6FE042EAB4D (GunShoot_tD7737F223B9FDD1A961D805E1F50D425B7EEB952* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisGunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91_m606A945142239493DE9418B395E34A6B86883BCB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator> ();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_17), (void*)L_0);
		// gunAim = GetComponentInParent<GunAim>();
		GunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91* L_1;
		L_1 = Component_GetComponentInParent_TisGunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91_m606A945142239493DE9418B395E34A6B86883BCB(__this, Component_GetComponentInParent_TisGunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91_m606A945142239493DE9418B395E34A6B86883BCB_RuntimeMethod_var);
		__this->___gunAim_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gunAim_18), (void*)L_1);
		// }
		return;
	}
}
// System.Void GunShoot::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunShoot_Update_m98D7DBB471726E5CD28A4578C1345BF09AA76CD3 (GunShoot_tD7737F223B9FDD1A961D805E1F50D425B7EEB952* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (Input.GetButtonDown("Fire1") && Time.time > nextFire && !gunAim.GetIsOutOfBounds())
		bool L_0;
		L_0 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, NULL);
		if (!L_0)
		{
			goto IL_008a;
		}
	}
	{
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_2 = __this->___nextFire_16;
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_008a;
		}
	}
	{
		GunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91* L_3 = __this->___gunAim_18;
		NullCheck(L_3);
		bool L_4;
		L_4 = GunAim_GetIsOutOfBounds_mF8AAF5F04C61EDCE7250D5F0E0E5E9FF91024873_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_008a;
		}
	}
	{
		// nextFire = Time.time + fireRate;
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_6 = __this->___fireRate_4;
		__this->___nextFire_16 = ((float)il2cpp_codegen_add(L_5, L_6));
		// muzzleFlash.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_7 = __this->___muzzleFlash_7;
		NullCheck(L_7);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_7, NULL);
		// cartridgeEjection.Play();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_8 = __this->___cartridgeEjection_8;
		NullCheck(L_8);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_8, NULL);
		// anim.SetTrigger ("Fire");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->___anim_17;
		NullCheck(L_9);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_9, _stringLiteralD5A6D1524A9CAA0C1FE48522BD4B250F6A827CC8, NULL);
		// Vector3 rayOrigin = gunEnd.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___gunEnd_6;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		// if (Physics.Raycast(rayOrigin, gunEnd.forward, out hit, weaponRange))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___gunEnd_6;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_12, NULL);
		float L_14 = __this->___weaponRange_5;
		bool L_15;
		L_15 = Physics_Raycast_m011EA7022C33B2C499EF744E5AF3E01EEB8FBD33(L_11, L_13, (&V_0), L_14, NULL);
		if (!L_15)
		{
			goto IL_008a;
		}
	}
	{
		// HandleHit(hit);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_16 = V_0;
		GunShoot_HandleHit_m2DBD251CA917A7AD8626B707104C438AD4A83D3F(__this, L_16, NULL);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void GunShoot::HandleHit(UnityEngine.RaycastHit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunShoot_HandleHit_m2DBD251CA917A7AD8626B707104C438AD4A83D3F (GunShoot_tD7737F223B9FDD1A961D805E1F50D425B7EEB952* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_hit, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03195B08D8BBABDF0DCC6093942A15F7E8ABB3D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1810837C21D5A51EB48C20CF75A7689DC9FB0E95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral586825A85BD3ABBC2F448E88E81F8DFBBE3A1EC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral937CF4AA29E8BA035C35BA0901DC5699940902D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA62DAE32537882C177728A8116A47B70B6AD18E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF829A5FDC85023C6DD47F80EA1F9471474A74217);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		// if(hit.collider.sharedMaterial != null)
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0;
		L_0 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&___0_hit), NULL);
		NullCheck(L_0);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_1;
		L_1 = Collider_get_sharedMaterial_m238C1D9D4B2B1F02876C610E049C7A5ECCDC07AC(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_01ac;
		}
	}
	{
		// string materialName = hit.collider.sharedMaterial.name;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3;
		L_3 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&___0_hit), NULL);
		NullCheck(L_3);
		PhysicMaterial_t4ECED34E04BB2148333467208361A5FBFDCD7131* L_4;
		L_4 = Collider_get_sharedMaterial_m238C1D9D4B2B1F02876C610E049C7A5ECCDC07AC(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		uint32_t L_7;
		L_7 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_6, NULL);
		V_1 = L_7;
		uint32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)1044434307)))))
		{
			goto IL_0065;
		}
	}
	{
		uint32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)329707512)))))
		{
			goto IL_0054;
		}
	}
	{
		uint32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)81868168))))
		{
			goto IL_00c7;
		}
	}
	{
		uint32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)329707512))))
		{
			goto IL_00f4;
		}
	}
	{
		return;
	}

IL_0054:
	{
		uint32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)970575400))))
		{
			goto IL_00b9;
		}
	}
	{
		uint32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)1044434307))))
		{
			goto IL_009d;
		}
	}
	{
		return;
	}

IL_0065:
	{
		uint32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-1454296708)))))
		{
			goto IL_007e;
		}
	}
	{
		uint32_t L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)1842662042))))
		{
			goto IL_00ab;
		}
	}
	{
		uint32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-1454296708))))
		{
			goto IL_008f;
		}
	}
	{
		return;
	}

IL_007e:
	{
		uint32_t L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-327991120))))
		{
			goto IL_00e3;
		}
	}
	{
		uint32_t L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-272785966))))
		{
			goto IL_00d5;
		}
	}
	{
		return;
	}

IL_008f:
	{
		String_t* L_19 = V_0;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteral9EF11A6AD8A17F2C54D4454AA5400A40DF8D9A42, NULL);
		if (L_20)
		{
			goto IL_0105;
		}
	}
	{
		return;
	}

IL_009d:
	{
		String_t* L_21 = V_0;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralA62DAE32537882C177728A8116A47B70B6AD18E7, NULL);
		if (L_22)
		{
			goto IL_0113;
		}
	}
	{
		return;
	}

IL_00ab:
	{
		String_t* L_23 = V_0;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral937CF4AA29E8BA035C35BA0901DC5699940902D9, NULL);
		if (L_24)
		{
			goto IL_0121;
		}
	}
	{
		return;
	}

IL_00b9:
	{
		String_t* L_25 = V_0;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteralF829A5FDC85023C6DD47F80EA1F9471474A74217, NULL);
		if (L_26)
		{
			goto IL_012f;
		}
	}
	{
		return;
	}

IL_00c7:
	{
		String_t* L_27 = V_0;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteralEB21F4926C9FE3AE15CCCDAB43A3B3B4EB5F3CF5, NULL);
		if (L_28)
		{
			goto IL_014a;
		}
	}
	{
		return;
	}

IL_00d5:
	{
		String_t* L_29 = V_0;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteral03195B08D8BBABDF0DCC6093942A15F7E8ABB3D0, NULL);
		if (L_30)
		{
			goto IL_0158;
		}
	}
	{
		return;
	}

IL_00e3:
	{
		String_t* L_31 = V_0;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral586825A85BD3ABBC2F448E88E81F8DFBBE3A1EC4, NULL);
		if (L_32)
		{
			goto IL_0175;
		}
	}
	{
		return;
	}

IL_00f4:
	{
		String_t* L_33 = V_0;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteral1810837C21D5A51EB48C20CF75A7689DC9FB0E95, NULL);
		if (L_34)
		{
			goto IL_0192;
		}
	}
	{
		return;
	}

IL_0105:
	{
		// SpawnDecal(hit, metalHitEffect);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_35 = ___0_hit;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___metalHitEffect_9;
		GunShoot_SpawnDecal_m715D3F3F5BBA8881C02E967165B2FC53E6B7EB1E(__this, L_35, L_36, NULL);
		// break;
		return;
	}

IL_0113:
	{
		// SpawnDecal(hit, sandHitEffect);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_37 = ___0_hit;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___sandHitEffect_10;
		GunShoot_SpawnDecal_m715D3F3F5BBA8881C02E967165B2FC53E6B7EB1E(__this, L_37, L_38, NULL);
		// break;
		return;
	}

IL_0121:
	{
		// SpawnDecal(hit, stoneHitEffect);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_39 = ___0_hit;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___stoneHitEffect_11;
		GunShoot_SpawnDecal_m715D3F3F5BBA8881C02E967165B2FC53E6B7EB1E(__this, L_39, L_40, NULL);
		// break;
		return;
	}

IL_012f:
	{
		// SpawnDecal(hit, waterLeakEffect);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_41 = ___0_hit;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___waterLeakEffect_12;
		GunShoot_SpawnDecal_m715D3F3F5BBA8881C02E967165B2FC53E6B7EB1E(__this, L_41, L_42, NULL);
		// SpawnDecal(hit, metalHitEffect);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_43 = ___0_hit;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___metalHitEffect_9;
		GunShoot_SpawnDecal_m715D3F3F5BBA8881C02E967165B2FC53E6B7EB1E(__this, L_43, L_44, NULL);
		// break;
		return;
	}

IL_014a:
	{
		// SpawnDecal(hit, woodHitEffect);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_45 = ___0_hit;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___woodHitEffect_15;
		GunShoot_SpawnDecal_m715D3F3F5BBA8881C02E967165B2FC53E6B7EB1E(__this, L_45, L_46, NULL);
		// break;
		return;
	}

IL_0158:
	{
		// SpawnDecal(hit, fleshHitEffects[Random.Range(0, fleshHitEffects.Length)]);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_47 = ___0_hit;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_48 = __this->___fleshHitEffects_14;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_49 = __this->___fleshHitEffects_14;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_49)->max_length)), NULL);
		NullCheck(L_48);
		int32_t L_51 = L_50;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		GunShoot_SpawnDecal_m715D3F3F5BBA8881C02E967165B2FC53E6B7EB1E(__this, L_47, L_52, NULL);
		// break;
		return;
	}

IL_0175:
	{
		// SpawnDecal(hit, fleshHitEffects[Random.Range(0, fleshHitEffects.Length)]);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_53 = ___0_hit;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_54 = __this->___fleshHitEffects_14;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_55 = __this->___fleshHitEffects_14;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_55)->max_length)), NULL);
		NullCheck(L_54);
		int32_t L_57 = L_56;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		GunShoot_SpawnDecal_m715D3F3F5BBA8881C02E967165B2FC53E6B7EB1E(__this, L_53, L_58, NULL);
		// break;
		return;
	}

IL_0192:
	{
		// SpawnDecal(hit, waterLeakExtinguishEffect);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_59 = ___0_hit;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = __this->___waterLeakExtinguishEffect_13;
		GunShoot_SpawnDecal_m715D3F3F5BBA8881C02E967165B2FC53E6B7EB1E(__this, L_59, L_60, NULL);
		// SpawnDecal(hit, metalHitEffect);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_61 = ___0_hit;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = __this->___metalHitEffect_9;
		GunShoot_SpawnDecal_m715D3F3F5BBA8881C02E967165B2FC53E6B7EB1E(__this, L_61, L_62, NULL);
	}

IL_01ac:
	{
		// }
		return;
	}
}
// System.Void GunShoot::SpawnDecal(UnityEngine.RaycastHit,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunShoot_SpawnDecal_m715D3F3F5BBA8881C02E967165B2FC53E6B7EB1E (GunShoot_tD7737F223B9FDD1A961D805E1F50D425B7EEB952* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_hit, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___1_prefab, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject spawnedDecal = GameObject.Instantiate(prefab, hit.point, Quaternion.LookRotation(hit.normal));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___1_prefab;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&___0_hit), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&___0_hit), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_0, L_1, L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// spawnedDecal.transform.SetParent(hit.collider.transform);
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_6;
		L_6 = RaycastHit_get_collider_m84B160439BBEAB6D9E94B799F720E25C9E2D444D((&___0_hit), NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_5);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_5, L_7, NULL);
		// }
		return;
	}
}
// System.Void GunShoot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunShoot__ctor_m62C0119F2214C57DC0072FB0127A1EDB98DCCE6B (GunShoot_tD7737F223B9FDD1A961D805E1F50D425B7EEB952* __this, const RuntimeMethod* method) 
{
	{
		// public float fireRate = 0.25f;                                        // Number in seconds which controls how often the player can fire
		__this->___fireRate_4 = (0.25f);
		// public float weaponRange = 20f;                                        // Distance in Unity units over which the player can fire
		__this->___weaponRange_5 = (20.0f);
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
// System.Void ParticleCollision::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleCollision_Start_m35464904537C48717E3A124E1D1305AC0E9E82C8 (ParticleCollision_tBABA847FAACFFAA8330E10F545457E623121298C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_ParticleSystem = GetComponent<ParticleSystem>();
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0;
		L_0 = Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9(__this, Component_GetComponent_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_mF2B700ECAEEEDBCC076CC66C9592C6DDFA0D36F9_RuntimeMethod_var);
		__this->___m_ParticleSystem_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ParticleSystem_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void ParticleCollision::OnParticleCollision(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleCollision_OnParticleCollision_m95A2A1A461CE3D43A106E72FD37E7D14D60F1A3D (ParticleCollision_tBABA847FAACFFAA8330E10F545457E623121298C* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508_mA99A973371668EA042C637224A9ECD66337FEBF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* V_2 = NULL;
	ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// int numCollisionEvents = m_ParticleSystem.GetCollisionEvents(other, m_CollisionEvents);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___m_ParticleSystem_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_other;
		List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_2 = __this->___m_CollisionEvents_4;
		int32_t L_3;
		L_3 = ParticlePhysicsExtensions_GetCollisionEvents_mD44421A4CC66ECB3D6FD5D9012FE6131D3DB74B7(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// for (int i = 0; i < numCollisionEvents; ++i)
		V_1 = 0;
		goto IL_0044;
	}

IL_0017:
	{
		// var col = m_CollisionEvents[i].colliderComponent;
		List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_4 = __this->___m_CollisionEvents_4;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		ParticleCollisionEvent_t9152F03D9336BAAFEAF1CCA498C0F156ABD19858 L_6;
		L_6 = List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D(L_4, L_5, List_1_get_Item_m57DD5E00D937D5B424DD10BAA4A33C38783CAA1D_RuntimeMethod_var);
		V_3 = L_6;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_7;
		L_7 = ParticleCollisionEvent_get_colliderComponent_m42DDDB3E857EB4A449267ECE37B11A90EA71B37A((&V_3), NULL);
		// var fire = col.GetComponent<ExtinguishableFire>();
		NullCheck(L_7);
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_8;
		L_8 = Component_GetComponent_TisExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508_mA99A973371668EA042C637224A9ECD66337FEBF5(L_7, Component_GetComponent_TisExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508_mA99A973371668EA042C637224A9ECD66337FEBF5_RuntimeMethod_var);
		V_2 = L_8;
		// if (fire != null)
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_9 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0040;
		}
	}
	{
		// fire.Extinguish();
		ExtinguishableFire_t5491561D3B913E794943751C3B315786CCEA4508* L_11 = V_2;
		NullCheck(L_11);
		ExtinguishableFire_Extinguish_m73FE4B2C2A858FE487C970C766CF09F42E1D5C6A(L_11, NULL);
	}

IL_0040:
	{
		// for (int i = 0; i < numCollisionEvents; ++i)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0044:
	{
		// for (int i = 0; i < numCollisionEvents; ++i)
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0017;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ParticleCollision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleCollision__ctor_m723E6AFB8244E3B9F072CAB9B39E56741CE0BCBA (ParticleCollision_tBABA847FAACFFAA8330E10F545457E623121298C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<ParticleCollisionEvent> m_CollisionEvents = new List<ParticleCollisionEvent>();
		List_1_tC738A5621689A7678648746667E7F66D96D6B8FD* L_0 = (List_1_tC738A5621689A7678648746667E7F66D96D6B8FD*)il2cpp_codegen_object_new(List_1_tC738A5621689A7678648746667E7F66D96D6B8FD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1(L_0, List_1__ctor_m34B08AC7950C8A949F18794F515EEADB355A79B1_RuntimeMethod_var);
		__this->___m_CollisionEvents_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CollisionEvents_4), (void*)L_0);
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
// System.Void ParticleExamples::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleExamples__ctor_m868B95D30FE6F6DFF0C3CBE03C1671F60454C43E (ParticleExamples_tD7815724B5248043652CFD842678BBAAD8AD1EB4* __this, const RuntimeMethod* method) 
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
// System.Void ParticleMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleMenu_Start_m297C053ED963E7F9CF6795C35C9FE6A2326B62AD (ParticleMenu_t55B30E5BB38276437817B0D0AD594DC5A8C4081E* __this, const RuntimeMethod* method) 
{
	{
		// Navigate (0);
		ParticleMenu_Navigate_mE66891EF3FA1054A0554C99E9F0A2C9EF50D2675(__this, 0, NULL);
		// currentIndex = 0;
		__this->___currentIndex_6 = 0;
		// }
		return;
	}
}
// System.Void ParticleMenu::Navigate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleMenu_Navigate_mE66891EF3FA1054A0554C99E9F0A2C9EF50D2675 (ParticleMenu_t55B30E5BB38276437817B0D0AD594DC5A8C4081E* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1193EE22DE9836F74207B1C05271B1E3C2909AC7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// currentIndex = (particleSystems.Length + currentIndex + i) % particleSystems.Length;
		ParticleExamplesU5BU5D_tA528C4C0E13495472D7194B800EBAAD77E8094C0* L_0 = __this->___particleSystems_4;
		NullCheck(L_0);
		int32_t L_1 = __this->___currentIndex_6;
		int32_t L_2 = ___0_i;
		ParticleExamplesU5BU5D_tA528C4C0E13495472D7194B800EBAAD77E8094C0* L_3 = __this->___particleSystems_4;
		NullCheck(L_3);
		__this->___currentIndex_6 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), L_1)), L_2))%((int32_t)(((RuntimeArray*)L_3)->max_length))));
		// if(currentGO != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___currentGO_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		// Destroy (currentGO);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___currentGO_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
	}

IL_0039:
	{
		// currentGO = Instantiate (particleSystems[currentIndex].particleSystemGO, spawnLocation.position + particleSystems[currentIndex].particlePosition, Quaternion.Euler(particleSystems[currentIndex].particleRotation)) as GameObject;
		ParticleExamplesU5BU5D_tA528C4C0E13495472D7194B800EBAAD77E8094C0* L_7 = __this->___particleSystems_4;
		int32_t L_8 = __this->___currentIndex_6;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ParticleExamples_tD7815724B5248043652CFD842678BBAAD8AD1EB4* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->___particleSystemGO_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___spawnLocation_8;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		ParticleExamplesU5BU5D_tA528C4C0E13495472D7194B800EBAAD77E8094C0* L_14 = __this->___particleSystems_4;
		int32_t L_15 = __this->___currentIndex_6;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		ParticleExamples_tD7815724B5248043652CFD842678BBAAD8AD1EB4* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17->___particlePosition_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_18, NULL);
		ParticleExamplesU5BU5D_tA528C4C0E13495472D7194B800EBAAD77E8094C0* L_20 = __this->___particleSystems_4;
		int32_t L_21 = __this->___currentIndex_6;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		ParticleExamples_tD7815724B5248043652CFD842678BBAAD8AD1EB4* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23->___particleRotation_5;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_25;
		L_25 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_11, L_19, L_25, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___currentGO_7 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentGO_7), (void*)L_26);
		// gunGameObject.SetActive (particleSystems[currentIndex].isWeaponEffect);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___gunGameObject_5;
		ParticleExamplesU5BU5D_tA528C4C0E13495472D7194B800EBAAD77E8094C0* L_28 = __this->___particleSystems_4;
		int32_t L_29 = __this->___currentIndex_6;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		ParticleExamples_tD7815724B5248043652CFD842678BBAAD8AD1EB4* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		bool L_32 = L_31->___isWeaponEffect_2;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, L_32, NULL);
		// title.text = particleSystems [currentIndex].title;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_33 = __this->___title_9;
		ParticleExamplesU5BU5D_tA528C4C0E13495472D7194B800EBAAD77E8094C0* L_34 = __this->___particleSystems_4;
		int32_t L_35 = __this->___currentIndex_6;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		ParticleExamples_tD7815724B5248043652CFD842678BBAAD8AD1EB4* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		String_t* L_38 = L_37->___title_0;
		NullCheck(L_33);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_33, L_38);
		// description.text = particleSystems [currentIndex].description;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_39 = __this->___description_10;
		ParticleExamplesU5BU5D_tA528C4C0E13495472D7194B800EBAAD77E8094C0* L_40 = __this->___particleSystems_4;
		int32_t L_41 = __this->___currentIndex_6;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		ParticleExamples_tD7815724B5248043652CFD842678BBAAD8AD1EB4* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		String_t* L_44 = L_43->___description_1;
		NullCheck(L_39);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, L_44);
		// navigationDetails.text = "" + (currentIndex+1) + " out of " + particleSystems.Length.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_45 = __this->___navigationDetails_11;
		int32_t L_46 = __this->___currentIndex_6;
		V_0 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		String_t* L_47;
		L_47 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		ParticleExamplesU5BU5D_tA528C4C0E13495472D7194B800EBAAD77E8094C0* L_48 = __this->___particleSystems_4;
		NullCheck(L_48);
		V_0 = ((int32_t)(((RuntimeArray*)L_48)->max_length));
		String_t* L_49;
		L_49 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_50;
		L_50 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_47, _stringLiteral1193EE22DE9836F74207B1C05271B1E3C2909AC7, L_49, NULL);
		NullCheck(L_45);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_45, L_50);
		// }
		return;
	}
}
// System.Void ParticleMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleMenu__ctor_m14E9EE0D52A7E460D1B5262ABF6498E486DC433B (ParticleMenu_t55B30E5BB38276437817B0D0AD594DC5A8C4081E* __this, const RuntimeMethod* method) 
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
// System.Void CardboardStartup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_Start_m35E3138C09D62411C4C8503DD4D47DA2AF9BF6E2 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A((-1), NULL);
		// Screen.brightness = 1.0f;
		Screen_set_brightness_m0EE16AC1CB4F674B178C75F8180E6A675A3CD8F7((1.0f), NULL);
		// if (!Api.HasDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Api_HasDeviceParams_m7158915814477F6D8C085ED748F12215F2F3F578(NULL);
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void CardboardStartup::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup_Update_m4D4D770B4F4BA807AB64DB40B6730226BB821883 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Api.IsGearButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Api_get_IsGearButtonPressed_m922BF1A99A8B035D565441F96824AE9F0925156A(NULL);
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_000c:
	{
		// if (Api.IsCloseButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_get_IsCloseButtonPressed_m4B0EDA79280273FDD21B841B7E4765D90F978F43(NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_0018:
	{
		// if (Api.IsTriggerHeldPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_get_IsTriggerHeldPressed_m24BDCFD056C57E371E827EB59F09C9DD7F42191F(NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// Api.Recenter();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_Recenter_m0668D49BC62C4DEDCE1A50C78F9E5016D01280C0(NULL);
	}

IL_0024:
	{
		// if (Api.HasNewDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Api_HasNewDeviceParams_m8CF6742A64A20B00D8FFE2F229628D1DB54831C5(NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Api.ReloadDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ReloadDeviceParams_mBACF68BBC935329B23B19CB08A9CF0D5A6AB8F04(NULL);
	}

IL_0030:
	{
		// Api.UpdateScreenParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_UpdateScreenParams_mC3CED586D588F397D1B53DAAEE0697DA5FDADB03(NULL);
		// }
		return;
	}
}
// System.Void CardboardStartup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardboardStartup__ctor_m4C459294D28BDCFC64FECC657FB860844F52D9F7 (CardboardStartup_t7D6D696AD513DC97C444D91AC5D0979A253FED41* __this, const RuntimeMethod* method) 
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
// System.Void GraphicsAPITextController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsAPITextController_Start_mCD9DF9F31DF9E93A29126C6CD0B979F7F01F72C4 (GraphicsAPITextController_tB19E46CC7B47712FCF2CA97FE4241DC6D347718E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C48A78EC98C79B757DD1F93DECCC9BCD200C9C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FC0169D2757CDFF78A24B91F1AE4951AC4C5E35);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD84C3E7354CDA203313388822BE34A4033AED5FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF969FF0CF043C78EC1ABB24B7FB4DC5B90B3DFB2);
		s_Il2CppMethodInitialized = true;
	}
	TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// TextMesh tm = gameObject.GetComponent(typeof(TextMesh)) as TextMesh;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		NullCheck(L_0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_3;
		L_3 = GameObject_GetComponent_m99E12753EA84947521DC711CA33F452B5E65B474(L_0, L_2, NULL);
		V_0 = ((TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8*)IsInstSealed((RuntimeObject*)L_3, TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_il2cpp_TypeInfo_var));
		// switch (SystemInfo.graphicsDeviceType)
		int32_t L_4;
		L_4 = SystemInfo_get_graphicsDeviceType_m2D54A0B94D138727041B29B127D8837165686545(NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)8)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)11))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)21))))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_0055;
	}

IL_0031:
	{
		// tm.text = "OpenGL ES 2";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_8 = V_0;
		NullCheck(L_8);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_8, _stringLiteralF969FF0CF043C78EC1ABB24B7FB4DC5B90B3DFB2, NULL);
		// break;
		return;
	}

IL_003d:
	{
		// tm.text = "OpenGL ES 3";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_9 = V_0;
		NullCheck(L_9);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_9, _stringLiteralD84C3E7354CDA203313388822BE34A4033AED5FA, NULL);
		// break;
		return;
	}

IL_0049:
	{
		// tm.text = "Vulkan";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_10 = V_0;
		NullCheck(L_10);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_10, _stringLiteral4C48A78EC98C79B757DD1F93DECCC9BCD200C9C0, NULL);
		// break;
		return;
	}

IL_0055:
	{
		// tm.text = "Unrecognized Graphics API";
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_11 = V_0;
		NullCheck(L_11);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_11, _stringLiteral8FC0169D2757CDFF78A24B91F1AE4951AC4C5E35, NULL);
		// }
		return;
	}
}
// System.Void GraphicsAPITextController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphicsAPITextController__ctor_m29A2AD5AE282F114E816F84A166F5BA39BEB1685 (GraphicsAPITextController_tB19E46CC7B47712FCF2CA97FE4241DC6D347718E* __this, const RuntimeMethod* method) 
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
// System.Void ObjectController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_Start_m50CBBCE72AB6C2A5C8BC1977D520CF3856A91E89 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _startingPosition = transform.parent.localPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		__this->____startingPosition_11 = L_2;
		// _myRenderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3;
		L_3 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->____myRenderer_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____myRenderer_10), (void*)L_3);
		// SetMaterial(false);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::TeleportRandomly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_TeleportRandomly_m45F23374832369044CBD4F60F4F976D33C97C181 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// int sibIdx = transform.GetSiblingIndex();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_GetSiblingIndex_m45EE497589C36D1FBED87FB802BD80A95CE68575(L_0, NULL);
		V_0 = L_1;
		// int numSibs = transform.parent.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_3, NULL);
		V_1 = L_4;
		// sibIdx = (sibIdx + Random.Range(1, numSibs)) % numSibs;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, L_6, NULL);
		int32_t L_8 = V_1;
		V_0 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_5, L_7))%L_8));
		// GameObject randomSib = transform.parent.GetChild(sibIdx).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_9, NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_10, L_11, NULL);
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		// float angle = Random.Range(-Mathf.PI, Mathf.PI);
		float L_14;
		L_14 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((-3.14159274f), (3.14159274f), NULL);
		V_2 = L_14;
		// float distance = Random.Range(_minObjectDistance, _maxObjectDistance);
		float L_15;
		L_15 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((2.5f), (3.5f), NULL);
		V_3 = L_15;
		// float height = Random.Range(_minObjectHeight, _maxObjectHeight);
		float L_16;
		L_16 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.5f), (3.5f), NULL);
		V_4 = L_16;
		// Vector3 newPos = new Vector3(Mathf.Cos(angle) * distance, height,
		//                              Mathf.Sin(angle) * distance);
		float L_17 = V_2;
		float L_18;
		L_18 = cosf(L_17);
		float L_19 = V_3;
		float L_20 = V_4;
		float L_21 = V_2;
		float L_22;
		L_22 = sinf(L_21);
		float L_23 = V_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_5), ((float)il2cpp_codegen_multiply(L_18, L_19)), L_20, ((float)il2cpp_codegen_multiply(L_22, L_23)), NULL);
		// transform.parent.localPosition = newPos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_5;
		NullCheck(L_25);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_25, L_26, NULL);
		// randomSib.SetActive(true);
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)1, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		// SetMaterial(false);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerEnter_m5D028066A6B28C2770924AE0C5A2A926E807FC42 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
		// SetMaterial(true);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerExit_mB2F968E3432A4B5E90ABFCE7E6B025A39041809F (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
		// SetMaterial(false);
		ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::OnPointerClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_OnPointerClick_m42836A892DD52FE0C121F5E37231BF198052017E (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
{
	{
		// TeleportRandomly();
		ObjectController_TeleportRandomly_m45F23374832369044CBD4F60F4F976D33C97C181(__this, NULL);
		// }
		return;
	}
}
// System.Void ObjectController::SetMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController_SetMaterial_mF8B3638C2382300F585FCFAE6EC5626AAE5EC772 (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, bool ___0_gazedAt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B4_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B3_0 = NULL;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* G_B5_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* G_B5_1 = NULL;
	{
		// if (InactiveMaterial != null && GazedAtMaterial != null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___InactiveMaterial_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___GazedAtMaterial_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0038;
		}
	}
	{
		// _myRenderer.material = gazedAt ? GazedAtMaterial : InactiveMaterial;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = __this->____myRenderer_10;
		bool L_5 = ___0_gazedAt;
		G_B3_0 = L_4;
		if (L_5)
		{
			G_B4_0 = L_4;
			goto IL_002d;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___InactiveMaterial_4;
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		goto IL_0033;
	}

IL_002d:
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7 = __this->___GazedAtMaterial_5;
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
	}

IL_0033:
	{
		NullCheck(G_B5_1);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(G_B5_1, G_B5_0, NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void ObjectController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectController__ctor_mA008C8DFDEF1B6A05926338921FE1FD30BCEA9BC (ObjectController_tC7C3CD5CDC9519FAA82AEE4489D5319439D254BC* __this, const RuntimeMethod* method) 
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
// System.Boolean VrModeController::get__isScreenTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began;
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_1;
		L_1 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_0), NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)0;
	}
}
// System.Boolean VrModeController::get__isVrModeEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return XRGeneralSettings.Instance.Manager.isInitializationComplete;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline(L_1, NULL);
		return L_2;
	}
}
// System.Void VrModeController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_Start_m10BF77FE8B825D9640800D5DF7EF791A391FA49B (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->____mainCamera_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____mainCamera_5), (void*)L_0);
		// Screen.sleepTimeout = SleepTimeout.NeverSleep;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A((-1), NULL);
		// Screen.brightness = 1.0f;
		Screen_set_brightness_m0EE16AC1CB4F674B178C75F8180E6A675A3CD8F7((1.0f), NULL);
		// if (!Api.HasDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_HasDeviceParams_m7158915814477F6D8C085ED748F12215F2F3F578(NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void VrModeController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_Update_m43F984D5BF13F2C545B508D93645C1C3AC9262D5 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_isVrModeEnabled)
		bool L_0;
		L_0 = VrModeController_get__isVrModeEnabled_m8D8D68536E09FF2DEAD3795AF30A57BA6DF7C95F(__this, NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// if (Api.IsCloseButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Api_get_IsCloseButtonPressed_m4B0EDA79280273FDD21B841B7E4765D90F978F43(NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// ExitVR();
		VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397(__this, NULL);
	}

IL_0015:
	{
		// if (Api.IsGearButtonPressed)
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_get_IsGearButtonPressed_m922BF1A99A8B035D565441F96824AE9F0925156A(NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// Api.ScanDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ScanDeviceParams_m99D8CA832AFDD2229F96F2819B7F18BCEA5E8A17(NULL);
	}

IL_0021:
	{
		// Api.UpdateScreenParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_UpdateScreenParams_mC3CED586D588F397D1B53DAAEE0697DA5FDADB03(NULL);
		return;
	}

IL_0027:
	{
		// if (_isScreenTouched)
		bool L_3;
		L_3 = VrModeController_get__isScreenTouched_mD72F14326F1D19F3AC970FD0ED9D0C5CD5C6CFB5(__this, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		// EnterVR();
		VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB(__this, NULL);
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void VrModeController::EnterVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_EnterVR_m5FD79BF38C6AF621AF9992378BC5C3618FDE5EFB (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(StartXR());
		RuntimeObject* L_0;
		L_0 = VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// if (Api.HasNewDeviceParams())
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Api_HasNewDeviceParams_m8CF6742A64A20B00D8FFE2F229628D1DB54831C5(NULL);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// Api.ReloadDeviceParams();
		il2cpp_codegen_runtime_class_init_inline(Api_t145FCB8AD359667011C398E3BE4F2962C25C363D_il2cpp_TypeInfo_var);
		Api_ReloadDeviceParams_mBACF68BBC935329B23B19CB08A9CF0D5A6AB8F04(NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void VrModeController::ExitVR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_ExitVR_m1FF25DFE5B3BC15CEDE5C42F56CC399693867397 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	{
		// StopXR();
		VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A(__this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator VrModeController::StartXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VrModeController_StartXR_m57D80B4AD6B28A7C4E36052563B6227E824CDDB4 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* L_0 = (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6*)il2cpp_codegen_object_new(U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void VrModeController::StopXR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController_StopXR_m0338E8D8035C06E1A46F17C16BBC7933EE9CAA3A (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Stopping XR...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9573E0F11BD7081DAAEACC92F301DBBC3F5D12BF, NULL);
		// XRGeneralSettings.Instance.Manager.StopSubsystems();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0;
		L_0 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_0);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_1;
		L_1 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_0, NULL);
		NullCheck(L_1);
		XRManagerSettings_StopSubsystems_mB59730C9283178A5E9E6D6E9127FE3DB25CC82D4(L_1, NULL);
		// Debug.Log("XR stopped.");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2A7B630B7137FE0D9A770BC44B619CE324CB5173, NULL);
		// Debug.Log("Deinitializing XR...");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9B1958E6AE4057A73CD052F6EFFCC70AD0F447B4, NULL);
		// XRGeneralSettings.Instance.Manager.DeinitializeLoader();
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_2;
		L_2 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_2);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_3;
		L_3 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_2, NULL);
		NullCheck(L_3);
		XRManagerSettings_DeinitializeLoader_m81038A43AD1AD84045B90396D1E2E4F2D8029BAB(L_3, NULL);
		// Debug.Log("XR deinitialized.");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2C94361C3CF0648D05679FC64B7AD666F8D704CA, NULL);
		// _mainCamera.ResetAspect();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->____mainCamera_5;
		NullCheck(L_4);
		Camera_ResetAspect_mAC248F92A2CAC44E2D33EFC3D08AACA9BC3DCEBB(L_4, NULL);
		// _mainCamera.fieldOfView = _defaultFieldOfView;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_5 = __this->____mainCamera_5;
		NullCheck(L_5);
		Camera_set_fieldOfView_m5AA9EED4D1603A1DEDBF883D9C42814B2BDEB777(L_5, (60.0f), NULL);
		// }
		return;
	}
}
// System.Void VrModeController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrModeController__ctor_m94505259847FB7C54346D7CF02AD85793393D141 (VrModeController_t16AB766455BA8AC167CD084A2D8B6279144A4B99* __this, const RuntimeMethod* method) 
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
// System.Void VrModeController/<StartXR>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10__ctor_mDA431E1365B30DA2F64F1E7875CD387F2231E138 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void VrModeController/<StartXR>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10_System_IDisposable_Dispose_m3DC1735AA5EC0D61A72803BB3B33B9499A373336 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean VrModeController/<StartXR>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartXRU3Ed__10_MoveNext_m9A6340456306ACFADD0D458946C82448A862E68B (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.Log("Initializing XR...");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral1690F87675D46404DB6EEBA8A4B18F2A7FD4611D, NULL);
		// yield return XRGeneralSettings.Instance.Manager.InitializeLoader();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_3;
		L_3 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_3);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_4;
		L_4 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = XRManagerSettings_InitializeLoader_m563761BAF04C04AC931D738AD9E4EBF7FD87E62B(L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (XRGeneralSettings.Instance.Manager.activeLoader == null)
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_6;
		L_6 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_6);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_7;
		L_7 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_6, NULL);
		NullCheck(L_7);
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_8;
		L_8 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		// Debug.LogError("Initializing XR Failed.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral747530FAD2C7DF5B08668539364CCC2CD2B5AFC2, NULL);
		goto IL_0096;
	}

IL_0069:
	{
		// Debug.Log("XR initialized.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral38396B3F6667C28970D73F84E06D0DCE797FDEB8, NULL);
		// Debug.Log("Starting XR...");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralAF171607C5CF88EC109EFE87AEB48F82DFCE3449, NULL);
		// XRGeneralSettings.Instance.Manager.StartSubsystems();
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_10;
		L_10 = XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline(NULL);
		NullCheck(L_10);
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_11;
		L_11 = XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline(L_10, NULL);
		NullCheck(L_11);
		XRManagerSettings_StartSubsystems_m94D89460222C083D6E25881C6825E44FEC98DDCC(L_11, NULL);
		// Debug.Log("XR started.");
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral61CFB84C83B441479C0A89B64CDD931B45CCA6ED, NULL);
	}

IL_0096:
	{
		// }
		return (bool)0;
	}
}
// System.Object VrModeController/<StartXR>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartXRU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD0B4CE8CBE980FD132B19F40FF2172502B1D0566 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void VrModeController/<StartXR>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600 (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartXRU3Ed__10_System_Collections_IEnumerator_Reset_mD99AEFDB38CFAC11731CDB371647891816288600_RuntimeMethod_var)));
	}
}
// System.Object VrModeController/<StartXR>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartXRU3Ed__10_System_Collections_IEnumerator_get_Current_mD84D9ACDB0A04C619509BA51590975DB84C30B0F (U3CStartXRU3Ed__10_t4223433AD52975410FE71459D78A6C0A5A85B6E6* __this, const RuntimeMethod* method) 
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
// System.Boolean GroundCheck::IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GroundCheck_IsGrounded_m2E68C51BBE946384E20897489ABD77DBBED161C0 (GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var position = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		V_0 = L_1;
		// Vector3 spherePosition = new Vector3(position.x, position.y + groundedOffset,
		//     position.z);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___y_3;
		float L_6 = __this->___groundedOffset_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		float L_8 = L_7.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_3, ((float)il2cpp_codegen_add(L_5, L_6)), L_8, /*hidden argument*/NULL);
		// return Physics.CheckSphere(spherePosition, groundRadius, groundMask);
		float L_10 = __this->___groundRadius_5;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_11 = __this->___groundMask_6;
		int32_t L_12;
		L_12 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_11, NULL);
		bool L_13;
		L_13 = Physics_CheckSphere_mD6F0027DBDECFA69245E99D8A4EE1DC8742A817F(L_9, L_10, L_12, NULL);
		return L_13;
	}
}
// System.Void GroundCheck::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GroundCheck__ctor_m0221EBF4D34C3F1345FC82BA872F8BD63C9FDE86 (GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* __this, const RuntimeMethod* method) 
{
	{
		// private float groundedOffset = -0.22f;
		__this->___groundedOffset_4 = (-0.219999999f);
		// private float groundRadius = 0.28f;
		__this->___groundRadius_5 = (0.280000001f);
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
// System.Void MouseCursorLock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseCursorLock_Start_mF6547D6812154BD1E745E9F64BB8F66A59C4E021 (MouseCursorLock_t292CEF568900532854722008B1471487CAF46558* __this, const RuntimeMethod* method) 
{
	{
		// if (applyOnStart)
		bool L_0 = __this->___applyOnStart_6;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Apply();
		MouseCursorLock_Apply_m16AE091CB6D60704D32A1274EEFA87284732843A(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void MouseCursorLock::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseCursorLock_Apply_m16AE091CB6D60704D32A1274EEFA87284732843A (MouseCursorLock_t292CEF568900532854722008B1471487CAF46558* __this, const RuntimeMethod* method) 
{
	{
		// Cursor.visible = hideCursor;
		bool L_0 = __this->___hideCursor_5;
		Cursor_set_visible_m612FCB2E86C15F91CE2E6148D1B556667954A2B7(L_0, NULL);
		// Cursor.lockState = cursorLockMode;
		int32_t L_1 = __this->___cursorLockMode_4;
		Cursor_set_lockState_mD81F6E5F3D86506FFB88567689A3A00A7AD242E9(L_1, NULL);
		// }
		return;
	}
}
// System.Void MouseCursorLock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseCursorLock__ctor_m125E0D80E72948325D6994C4B8AD80F6BAB92167 (MouseCursorLock_t292CEF568900532854722008B1471487CAF46558* __this, const RuntimeMethod* method) 
{
	{
		// private bool hideCursor = true;
		__this->___hideCursor_5 = (bool)1;
		// private bool applyOnStart = true;
		__this->___applyOnStart_6 = (bool)1;
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
// System.Void VrWalk::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrWalk_Start_m77E3CFEAC18405D4ED2C2D76321AFFF00C45BF24 (VrWalk_t8E5035BDCD1D4CF9BB31F1F8566C476662D3659B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cc = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0;
		L_0 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___cc_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cc_8), (void*)L_0);
		// }
		return;
	}
}
// System.Void VrWalk::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrWalk_Update_mB3FA7B0838C9BF1CBBD3808ECA4003B838A0B9C7 (VrWalk_t8E5035BDCD1D4CF9BB31F1F8566C476662D3659B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (vrCamera.eulerAngles.x >= toggleAngle && vrCamera.eulerAngles.x < 90.0f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___vrCamera_4;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		float L_2 = L_1.___x_2;
		float L_3 = __this->___toggleAngle_5;
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0038;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___vrCamera_4;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_4, NULL);
		float L_6 = L_5.___x_2;
		if ((!(((float)L_6) < ((float)(90.0f)))))
		{
			goto IL_0038;
		}
	}
	{
		// moveForward = true;
		__this->___moveForward_7 = (bool)1;
		goto IL_003f;
	}

IL_0038:
	{
		// moveForward = false;
		__this->___moveForward_7 = (bool)0;
	}

IL_003f:
	{
		// if (moveForward)
		bool L_7 = __this->___moveForward_7;
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		// Vector3 forward = vrCamera.TransformDirection(Vector3.forward);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___vrCamera_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_8, L_9, NULL);
		V_0 = L_10;
		// cc.SimpleMove(forward * speed);
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_11 = __this->___cc_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		float L_13 = __this->___speed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		NullCheck(L_11);
		bool L_15;
		L_15 = CharacterController_SimpleMove_mE32A48D439878B3241E8456F8EBFAAE264BD705C(L_11, L_14, NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void VrWalk::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VrWalk__ctor_mC25B36F8C079A61A3A038C9C292152FF4C23AC2D (VrWalk_t8E5035BDCD1D4CF9BB31F1F8566C476662D3659B* __this, const RuntimeMethod* method) 
{
	{
		// public float toggleAngle = 30.0f;
		__this->___toggleAngle_5 = (30.0f);
		// public float speed = 3.0f;
		__this->___speed_6 = (3.0f);
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
// System.Void ReadyPlayerMe.QuickStart.CameraFollow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_Start_m96563636353996F2D593F6DB78975253794A323F (CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5A07FE10EB68540AEDE50779D90B2C5AD5FF607);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (target == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// SDKLogger.LogWarning(TAG, TARGET_NOT_SET);
		String_t* L_2 = __this->___TAG_5;
		il2cpp_codegen_runtime_class_init_inline(SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var);
		SDKLogger_LogWarning_m296702240E8291BA9F9A9E2DB57D1CE8FCC79AC3(L_2, _stringLiteralC5A07FE10EB68540AEDE50779D90B2C5AD5FF607, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		return;
	}

IL_0026:
	{
		// if (followOnStart)
		bool L_3 = __this->___followOnStart_9;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// StartFollow();
		CameraFollow_StartFollow_m9F4070CE451A6443D518BE748D181A441AFEED22(__this, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.CameraFollow::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_LateUpdate_m39099E021E4C3C686DC76479238EADF921311D35 (CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8* __this, const RuntimeMethod* method) 
{
	{
		// if (isFollowing)
		bool L_0 = __this->___isFollowing_10;
		if (!L_0)
		{
			goto IL_0058;
		}
	}
	{
		// playerCamera.transform.localPosition = Vector3.forward * cameraDistance;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1 = __this->___playerCamera_6;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		float L_4 = __this->___cameraDistance_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		NullCheck(L_2);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_2, L_5, NULL);
		// playerCamera.transform.localRotation = Quaternion.Euler(Vector3.zero);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___playerCamera_6;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_8, NULL);
		NullCheck(L_7);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_7, L_9, NULL);
		// transform.position = target.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___target_7;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		NullCheck(L_10);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_12, NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.CameraFollow::StopFollow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_StopFollow_mDF2F48FB3940B50567775284B44AFCF5BD5F92C6 (CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8* __this, const RuntimeMethod* method) 
{
	{
		// isFollowing = false;
		__this->___isFollowing_10 = (bool)0;
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.CameraFollow::StartFollow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow_StartFollow_m9F4070CE451A6443D518BE748D181A441AFEED22 (CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8* __this, const RuntimeMethod* method) 
{
	{
		// isFollowing = true;
		__this->___isFollowing_10 = (bool)1;
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.CameraFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraFollow__ctor_mD5016100EFF7D9FA80C548CDDA4442E63F3EE07C (CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly string TAG = typeof(CameraFollow).ToString();
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (CameraFollow_t79A1ACFCAE395DA962E8903CE746AAB1874E69A8_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		__this->___TAG_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TAG_5), (void*)L_2);
		// private float cameraDistance = -2.4f;
		__this->___cameraDistance_8 = (-2.4000001f);
		// [SerializeField] private bool followOnStart = true;
		__this->___followOnStart_9 = (bool)1;
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
// System.Void ReadyPlayerMe.QuickStart.CameraOrbit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrbit_Start_m0D07353F8A3422D428B251704BC6DAB785B17019 (CameraOrbit_t63BBBB457CA29B5630401021DB03DB1CCF2AC8B5* __this, const RuntimeMethod* method) 
{
	{
		// rotation = transform.transform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_1, NULL);
		__this->___rotation_9 = L_2;
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.CameraOrbit::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrbit_LateUpdate_m3A3FF3C45DEC69660A07B672076B953AA0BA0B52 (CameraOrbit_t63BBBB457CA29B5630401021DB03DB1CCF2AC8B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (playerInput == null) return;
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_0 = __this->___playerInput_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// if (playerInput == null) return;
		return;
	}

IL_000f:
	{
		// yaw += playerInput.MouseAxisX ;
		float L_2 = __this->___yaw_12;
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_3 = __this->___playerInput_5;
		NullCheck(L_3);
		float L_4;
		L_4 = PlayerInput_get_MouseAxisX_m517553D7755EC539C395A87345206359C719C74D_inline(L_3, NULL);
		__this->___yaw_12 = ((float)il2cpp_codegen_add(L_2, L_4));
		// pitch -= playerInput.MouseAxisY ;
		float L_5 = __this->___pitch_11;
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_6 = __this->___playerInput_5;
		NullCheck(L_6);
		float L_7;
		L_7 = PlayerInput_get_MouseAxisY_m32B6331B6392DED8AF93AC744FDF868448C9C4E4_inline(L_6, NULL);
		__this->___pitch_11 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		// if (smoothDamp)
		bool L_8 = __this->___smoothDamp_8;
		if (!L_8)
		{
			goto IL_0076;
		}
	}
	{
		// rotation = Vector3.SmoothDamp(rotation, new Vector3(pitch, yaw), ref currentVelocity, SMOOTH_TIME);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___rotation_9;
		float L_10 = __this->___pitch_11;
		float L_11 = __this->___yaw_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline((&L_12), L_10, L_11, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (&__this->___currentVelocity_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline(L_9, L_12, L_13, (0.100000001f), NULL);
		__this->___rotation_9 = L_14;
		goto IL_0098;
	}

IL_0076:
	{
		// rotation = new Vector3(pitch,yaw, rotation.z);
		float L_15 = __this->___pitch_11;
		float L_16 = __this->___yaw_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (&__this->___rotation_9);
		float L_18 = L_17->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), L_15, L_16, L_18, /*hidden argument*/NULL);
		__this->___rotation_9 = L_19;
	}

IL_0098:
	{
		// rotation.x = ClampAngle(rotation.x, minRotationX, maxRotationX);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = (&__this->___rotation_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (&__this->___rotation_9);
		float L_22 = L_21->___x_2;
		float L_23 = __this->___minRotationX_6;
		float L_24 = __this->___maxRotationX_7;
		float L_25;
		L_25 = CameraOrbit_ClampAngle_m573D0906C085F32B35D0BA9D21F39067D99F5DFF(__this, L_22, L_23, L_24, NULL);
		L_20->___x_2 = L_25;
		// transform.transform.rotation = Quaternion.Euler(rotation);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_26);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = __this->___rotation_9;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_28, NULL);
		NullCheck(L_27);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_27, L_29, NULL);
		// }
		return;
	}
}
// System.Single ReadyPlayerMe.QuickStart.CameraOrbit::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CameraOrbit_ClampAngle_m573D0906C085F32B35D0BA9D21F39067D99F5DFF (CameraOrbit_t63BBBB457CA29B5630401021DB03DB1CCF2AC8B5* __this, float ___0_angle, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	{
		// if (angle < -360F)
		float L_0 = ___0_angle;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// angle += 360F;
		float L_1 = ___0_angle;
		___0_angle = ((float)il2cpp_codegen_add(L_1, (360.0f)));
	}

IL_0011:
	{
		// if (angle > 360F)
		float L_2 = ___0_angle;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// angle -= 360F;
		float L_3 = ___0_angle;
		___0_angle = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(angle, min, max);
		float L_4 = ___0_angle;
		float L_5 = ___1_min;
		float L_6 = ___2_max;
		float L_7;
		L_7 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void ReadyPlayerMe.QuickStart.CameraOrbit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraOrbit__ctor_m9D3EE17EEED278E591F06821D386C26C2EDBC21F (CameraOrbit_t63BBBB457CA29B5630401021DB03DB1CCF2AC8B5* __this, const RuntimeMethod* method) 
{
	{
		// private float minRotationX = -60f;
		__this->___minRotationX_6 = (-60.0f);
		// private float maxRotationX = 50f;
		__this->___maxRotationX_7 = (50.0f);
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
// System.Single ReadyPlayerMe.QuickStart.PlayerInput::get_AxisHorizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerInput_get_AxisHorizontal_m1D5B395A4B8E6B7859495693589F6951715DC2B4 (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public float AxisHorizontal { get; private set; }
		float L_0 = __this->___U3CAxisHorizontalU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::set_AxisHorizontal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_set_AxisHorizontal_mA698E8B72185C79CA74B278BAB54FD01DD487689 (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float AxisHorizontal { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CAxisHorizontalU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Single ReadyPlayerMe.QuickStart.PlayerInput::get_AxisVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerInput_get_AxisVertical_mCAB43AC24F874CE7348C141767F355EE3CA2D420 (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public float AxisVertical { get; private set; }
		float L_0 = __this->___U3CAxisVerticalU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::set_AxisVertical(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_set_AxisVertical_mDD8FF9AB5F1BFE53C69766EAB27C45F80CFEA553 (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float AxisVertical { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CAxisVerticalU3Ek__BackingField_11 = L_0;
		return;
	}
}
// System.Single ReadyPlayerMe.QuickStart.PlayerInput::get_MouseAxisX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerInput_get_MouseAxisX_m517553D7755EC539C395A87345206359C719C74D (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public float MouseAxisX { get; private set; }
		float L_0 = __this->___U3CMouseAxisXU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::set_MouseAxisX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_set_MouseAxisX_mFE9182A7A86366DD9BD4B83294FA2A0D12C7124C (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MouseAxisX { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CMouseAxisXU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Single ReadyPlayerMe.QuickStart.PlayerInput::get_MouseAxisY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerInput_get_MouseAxisY_m32B6331B6392DED8AF93AC744FDF868448C9C4E4 (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public float MouseAxisY { get; private set; }
		float L_0 = __this->___U3CMouseAxisYU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::set_MouseAxisY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_set_MouseAxisY_mB28D735655CB89CB9201A8F1283FF76DD54B2EBA (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MouseAxisY { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CMouseAxisYU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.Boolean ReadyPlayerMe.QuickStart.PlayerInput::get_IsHoldingLeftShift()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerInput_get_IsHoldingLeftShift_mE14D9A584A88EDB50C5D93164B5272927F6BBF7D (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsHoldingLeftShift => Input.GetKey(KeyCode.LeftShift);
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)304), NULL);
		return L_0;
	}
}
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::CheckInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput_CheckInput_m3C9F5E10CD9F719436FC1ADE0A0AFE9A61ABB039 (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	{
		// AxisHorizontal = Input.GetAxis(HORIZONTAL_AXIS);
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		PlayerInput_set_AxisHorizontal_mA698E8B72185C79CA74B278BAB54FD01DD487689_inline(__this, L_0, NULL);
		// AxisVertical = Input.GetAxis(VERTICAL_AXIS);
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		PlayerInput_set_AxisVertical_mDD8FF9AB5F1BFE53C69766EAB27C45F80CFEA553_inline(__this, L_1, NULL);
		// MouseAxisX = Input.GetAxis(MOUSE_AXIS_X) * mouseSensitivityX;
		float L_2;
		L_2 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_3 = __this->___mouseSensitivityX_14;
		PlayerInput_set_MouseAxisX_mFE9182A7A86366DD9BD4B83294FA2A0D12C7124C_inline(__this, ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		// MouseAxisY = Input.GetAxis(MOUSE_AXIS_Y) * mouseSensitivityY;
		float L_4;
		L_4 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		float L_5 = __this->___mouseSensitivityY_15;
		PlayerInput_set_MouseAxisY_mB28D735655CB89CB9201A8F1283FF76DD54B2EBA_inline(__this, ((float)il2cpp_codegen_multiply(L_4, L_5)), NULL);
		// if (Input.GetButtonDown(JUMP_BUTTON))
		bool L_6;
		L_6 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_6)
		{
			goto IL_006a;
		}
	}
	{
		// OnJumpPress?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = __this->___OnJumpPress_9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = L_7;
		G_B2_0 = L_8;
		if (L_8)
		{
			G_B3_0 = L_8;
			goto IL_0065;
		}
	}
	{
		return;
	}

IL_0065:
	{
		NullCheck(G_B3_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B3_0, NULL);
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.PlayerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerInput__ctor_m6264B15197D2B69EDC0C8DB81BB0546E60FC8077 (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// private float mouseSensitivityX = 1;
		__this->___mouseSensitivityX_14 = (1.0f);
		// private float mouseSensitivityY = 2;
		__this->___mouseSensitivityY_15 = (2.0f);
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
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Init_m6515F9CDF421D08BBBF185A67A9C2B08FA544B33 (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C_m1A0CAB9BA6FD5D086A1908CC3ABB0151F01C805A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28_m7AC9E938D2DE0CBDE4A45BD8BFD5FC99E97F2D1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThirdPersonController_OnJump_m3F89B0385F6CD86D90FEB4B0E9A5D95D4A4360BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// thirdPersonMovement = GetComponent<ThirdPersonMovement>();
		ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* L_0;
		L_0 = Component_GetComponent_TisThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28_m7AC9E938D2DE0CBDE4A45BD8BFD5FC99E97F2D1B(__this, Component_GetComponent_TisThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28_m7AC9E938D2DE0CBDE4A45BD8BFD5FC99E97F2D1B_RuntimeMethod_var);
		__this->___thirdPersonMovement_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thirdPersonMovement_14), (void*)L_0);
		// playerInput = GetComponent<PlayerInput>();
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_1;
		L_1 = Component_GetComponent_TisPlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C_m1A0CAB9BA6FD5D086A1908CC3ABB0151F01C805A(__this, Component_GetComponent_TisPlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C_m1A0CAB9BA6FD5D086A1908CC3ABB0151F01C805A_RuntimeMethod_var);
		__this->___playerInput_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerInput_15), (void*)L_1);
		// playerInput.OnJumpPress += OnJump;
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_2 = __this->___playerInput_15;
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_3 = L_2;
		NullCheck(L_3);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3->___OnJumpPress_9;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, __this, (intptr_t)((void*)ThirdPersonController_OnJump_m3F89B0385F6CD86D90FEB4B0E9A5D95D4A4360BE_RuntimeMethod_var), NULL);
		Delegate_t* L_6;
		L_6 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_4, L_5, NULL);
		NullCheck(L_3);
		L_3->___OnJumpPress_9 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_6, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___OnJumpPress_9), (void*)((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_6, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var)));
		// isInitialized = true;
		__this->___isInitialized_18 = (bool)1;
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::Setup(UnityEngine.GameObject,UnityEngine.RuntimeAnimatorController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Setup_m436496E9BE83F1489C20A2336B763F9BDBB1F4F5 (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* ___1_runtimeAnimatorController, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!isInitialized)
		bool L_0 = __this->___isInitialized_18;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Init();
		ThirdPersonController_Init_m6515F9CDF421D08BBBF185A67A9C2B08FA544B33(__this, NULL);
	}

IL_000e:
	{
		// avatar = target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_target;
		__this->___avatar_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___avatar_13), (void*)L_1);
		// thirdPersonMovement.Setup(avatar);
		ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* L_2 = __this->___thirdPersonMovement_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___avatar_13;
		NullCheck(L_2);
		ThirdPersonMovement_Setup_m847528711F11312D8BDD37BFAC61C7456945033F(L_2, L_3, NULL);
		// animator = avatar.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___avatar_13;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_4, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___animator_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_10), (void*)L_5);
		// animator.runtimeAnimatorController = runtimeAnimatorController;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___animator_10;
		RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* L_7 = ___1_runtimeAnimatorController;
		NullCheck(L_6);
		Animator_set_runtimeAnimatorController_m505ACBA1D2E59814239EF3760A9F537D03301311(L_6, L_7, NULL);
		// animator.applyRootMotion = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___animator_10;
		NullCheck(L_8);
		Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_Update_m42D91BFCA21FC4AE75727B52A5600FB6A789D0C0 (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (avatar == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___avatar_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (inputEnabled)
		bool L_2 = __this->___inputEnabled_17;
		if (!L_2)
		{
			goto IL_005d;
		}
	}
	{
		// playerInput.CheckInput();
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_3 = __this->___playerInput_15;
		NullCheck(L_3);
		PlayerInput_CheckInput_m3C9F5E10CD9F719436FC1ADE0A0AFE9A61ABB039(L_3, NULL);
		// var xAxisInput = playerInput.AxisHorizontal;
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_4 = __this->___playerInput_15;
		NullCheck(L_4);
		float L_5;
		L_5 = PlayerInput_get_AxisHorizontal_m1D5B395A4B8E6B7859495693589F6951715DC2B4_inline(L_4, NULL);
		V_0 = L_5;
		// var yAxisInput = playerInput.AxisVertical;
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_6 = __this->___playerInput_15;
		NullCheck(L_6);
		float L_7;
		L_7 = PlayerInput_get_AxisVertical_mCAB43AC24F874CE7348C141767F355EE3CA2D420_inline(L_6, NULL);
		V_1 = L_7;
		// thirdPersonMovement.Move(xAxisInput, yAxisInput);
		ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* L_8 = __this->___thirdPersonMovement_14;
		float L_9 = V_0;
		float L_10 = V_1;
		NullCheck(L_8);
		ThirdPersonMovement_Move_mFF8325693B81201831555283D77AC080A2258144(L_8, L_9, L_10, NULL);
		// thirdPersonMovement.SetIsRunning(playerInput.IsHoldingLeftShift);
		ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* L_11 = __this->___thirdPersonMovement_14;
		PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* L_12 = __this->___playerInput_15;
		NullCheck(L_12);
		bool L_13;
		L_13 = PlayerInput_get_IsHoldingLeftShift_mE14D9A584A88EDB50C5D93164B5272927F6BBF7D(L_12, NULL);
		NullCheck(L_11);
		ThirdPersonMovement_SetIsRunning_m5AD3B8466B6ECE622F8004C7DDD254A0FC3C023A_inline(L_11, L_13, NULL);
	}

IL_005d:
	{
		// UpdateAnimator();
		ThirdPersonController_UpdateAnimator_mB6E6A811F66C7622A5F742F0C1335C98FD95B94B(__this, NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::UpdateAnimator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_UpdateAnimator_mB6E6A811F66C7622A5F742F0C1335C98FD95B94B (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// var isGrounded = thirdPersonMovement.IsGrounded();
		ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* L_0 = __this->___thirdPersonMovement_14;
		NullCheck(L_0);
		bool L_1;
		L_1 = ThirdPersonMovement_IsGrounded_m6AF64A40D8733B384C53DF27234B3774D4CB7469(L_0, NULL);
		V_0 = L_1;
		// animator.SetFloat(MoveSpeedHash, thirdPersonMovement.CurrentMoveSpeed);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_10;
		il2cpp_codegen_runtime_class_init_inline(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var);
		int32_t L_3 = ((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___MoveSpeedHash_5;
		ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* L_4 = __this->___thirdPersonMovement_14;
		NullCheck(L_4);
		float L_5;
		L_5 = ThirdPersonMovement_get_CurrentMoveSpeed_m532FF9B2AE9D60DB17C48724C9FB9305F2A7E1D3_inline(L_4, NULL);
		NullCheck(L_2);
		Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5(L_2, L_3, L_5, NULL);
		// animator.SetBool(IsGroundedHash, isGrounded);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___animator_10;
		int32_t L_7 = ((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___IsGroundedHash_8;
		bool L_8 = V_0;
		NullCheck(L_6);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_6, L_7, L_8, NULL);
		// if (isGrounded)
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		// fallTimeoutDelta = FALL_TIMEOUT;
		__this->___fallTimeoutDelta_16 = (0.150000006f);
		// animator.SetBool(FreeFallHash, false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___animator_10;
		il2cpp_codegen_runtime_class_init_inline(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var);
		int32_t L_11 = ((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___FreeFallHash_7;
		NullCheck(L_10);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_10, L_11, (bool)0, NULL);
		return;
	}

IL_0058:
	{
		// if (fallTimeoutDelta >= 0.0f)
		float L_12 = __this->___fallTimeoutDelta_16;
		if ((!(((float)L_12) >= ((float)(0.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		// fallTimeoutDelta -= Time.deltaTime;
		float L_13 = __this->___fallTimeoutDelta_16;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___fallTimeoutDelta_16 = ((float)il2cpp_codegen_subtract(L_13, L_14));
		return;
	}

IL_0078:
	{
		// animator.SetBool(FreeFallHash, true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->___animator_10;
		il2cpp_codegen_runtime_class_init_inline(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var);
		int32_t L_16 = ((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___FreeFallHash_7;
		NullCheck(L_15);
		Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8(L_15, L_16, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::OnJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController_OnJump_m3F89B0385F6CD86D90FEB4B0E9A5D95D4A4360BE (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (thirdPersonMovement.TryJump())
		ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* L_0 = __this->___thirdPersonMovement_14;
		NullCheck(L_0);
		bool L_1;
		L_1 = ThirdPersonMovement_TryJump_mD0CEA19B8ED7DCE616D3558BCBF3575CC3010270(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// animator.SetTrigger(JumpHash);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___animator_10;
		il2cpp_codegen_runtime_class_init_inline(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var);
		int32_t L_3 = ((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___JumpHash_6;
		NullCheck(L_2);
		Animator_SetTrigger_m2D9CACEFDE11FF9DB99207B5CBD251C1EC047939(L_2, L_3, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController__ctor_mC9C7FDD560791D005FC064D9C340587F1882FD4F (ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* __this, const RuntimeMethod* method) 
{
	{
		// private bool inputEnabled = true;
		__this->___inputEnabled_17 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonController__cctor_m7DA9FB285E72CA1BBCBFEF6397875DBD371954B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral518BBC396C162E73FB3893CF18F79DBF36E165B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB546722AF594A8BDD41950B5C210E49FB115982);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA96601D79B410E78ED885E29D7A25794A833FD2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly int MoveSpeedHash = Animator.StringToHash("MoveSpeed");
		int32_t L_0;
		L_0 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteralDB546722AF594A8BDD41950B5C210E49FB115982, NULL);
		((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___MoveSpeedHash_5 = L_0;
		// private static readonly int JumpHash = Animator.StringToHash("JumpTrigger");
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteral518BBC396C162E73FB3893CF18F79DBF36E165B7, NULL);
		((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___JumpHash_6 = L_1;
		// private static readonly int FreeFallHash = Animator.StringToHash("FreeFall");
		int32_t L_2;
		L_2 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteral0B1BBFA44CAA416A6E13B3ADACB0CDB4EFF4AAB3, NULL);
		((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___FreeFallHash_7 = L_2;
		// private static readonly int IsGroundedHash = Animator.StringToHash("IsGrounded");
		int32_t L_3;
		L_3 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(_stringLiteralEA96601D79B410E78ED885E29D7A25794A833FD2, NULL);
		((ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_StaticFields*)il2cpp_codegen_static_fields_for(ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_il2cpp_TypeInfo_var))->___IsGroundedHash_8 = L_3;
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
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonLoader_Start_mD406EA3516723D12612725CB725004173F57AE4E (ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThirdPersonLoader_OnLoadCompleted_m4714CFBA3EDFA59DA815C95220553EBB2DE89160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThirdPersonLoader_OnLoadFailed_m3D28BF90D7C6FE48C624683DF5DD68C7A795214B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// avatarObjectLoader = new AvatarObjectLoader();
		AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* L_0 = (AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69*)il2cpp_codegen_object_new(AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AvatarObjectLoader__ctor_mAF29E478AD7B7A55BFFA4416F4F68F0AB2BA5B90(L_0, (bool)1, NULL);
		__this->___avatarObjectLoader_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___avatarObjectLoader_7), (void*)L_0);
		// avatarObjectLoader.OnCompleted += OnLoadCompleted;
		AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* L_1 = __this->___avatarObjectLoader_7;
		EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9* L_2 = (EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9*)il2cpp_codegen_object_new(EventHandler_1_t235B9E32ED47CD8D6B1715F24820F652EC2B91D9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventHandler_1__ctor_m434453DC77C1B72FE1935254DD7AB140A09BF956(L_2, __this, (intptr_t)((void*)ThirdPersonLoader_OnLoadCompleted_m4714CFBA3EDFA59DA815C95220553EBB2DE89160_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		AvatarObjectLoader_add_OnCompleted_mBA7FF229BA3DFFFA8ACD8FAC07B9985D45BA3D8D(L_1, L_2, NULL);
		// avatarObjectLoader.OnFailed += OnLoadFailed;
		AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* L_3 = __this->___avatarObjectLoader_7;
		EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A* L_4 = (EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A*)il2cpp_codegen_object_new(EventHandler_1_t8046010DF844ECA079CBA52A1C7E6AE6ACC5584A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EventHandler_1__ctor_m6BBDD641747A4C4E893A3A3A856AA2983FB943A2(L_4, __this, (intptr_t)((void*)ThirdPersonLoader_OnLoadFailed_m3D28BF90D7C6FE48C624683DF5DD68C7A795214B_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		AvatarObjectLoader_add_OnFailed_mBC2D17BC4C3D444D3A7515E08D15BFFA41734685(L_3, L_4, NULL);
		// if (previewAvatar != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___previewAvatar_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0054;
		}
	}
	{
		// SetupAvatar(previewAvatar);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___previewAvatar_10;
		ThirdPersonLoader_SetupAvatar_m336406DB78CD318A8215BF2C9D6CD51445559AD1(__this, L_7, NULL);
	}

IL_0054:
	{
		// if (loadOnStart)
		bool L_8 = __this->___loadOnStart_9;
		if (!L_8)
		{
			goto IL_0068;
		}
	}
	{
		// LoadAvatar(avatarUrl);
		String_t* L_9 = __this->___avatarUrl_5;
		ThirdPersonLoader_LoadAvatar_mBC2C9AE956C0E428CD9F47349444D90C7BF10222(__this, L_9, NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonLoader::OnLoadFailed(System.Object,ReadyPlayerMe.AvatarLoader.FailureEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonLoader_OnLoadFailed_m3D28BF90D7C6FE48C624683DF5DD68C7A795214B (ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4* __this, RuntimeObject* ___0_sender, FailureEventArgs_t2087FE370565AABC9CE48DD7810CF3E4757B571F* ___1_args, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonLoader::OnLoadCompleted(System.Object,ReadyPlayerMe.AvatarLoader.CompletionEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonLoader_OnLoadCompleted_m4714CFBA3EDFA59DA815C95220553EBB2DE89160 (ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4* __this, RuntimeObject* ___0_sender, CompletionEventArgs_tBF4A5164C04020BEF9A73E33EA6A6EA73E9E297C* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (previewAvatar != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___previewAvatar_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// Destroy(previewAvatar);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___previewAvatar_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// previewAvatar = null;
		__this->___previewAvatar_10 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___previewAvatar_10), (void*)(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL);
	}

IL_0020:
	{
		// SetupAvatar(args.Avatar);
		CompletionEventArgs_tBF4A5164C04020BEF9A73E33EA6A6EA73E9E297C* L_3 = ___1_args;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = CompletionEventArgs_get_Avatar_mD872C68004A3EE977C539011945268D61A9966EF_inline(L_3, NULL);
		ThirdPersonLoader_SetupAvatar_m336406DB78CD318A8215BF2C9D6CD51445559AD1(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonLoader::SetupAvatar(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonLoader_SetupAvatar_m336406DB78CD318A8215BF2C9D6CD51445559AD1 (ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_targetAvatar, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_mB4628DB9A699A47DAA8B46549B7E18E9855256A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* V_0 = NULL;
	{
		// if (avatar != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___avatar_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(avatar);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___avatar_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0019:
	{
		// avatar = targetAvatar;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_targetAvatar;
		__this->___avatar_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___avatar_6), (void*)L_3);
		// avatar.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___avatar_6;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_5, L_6, NULL);
		// avatar.transform.localPosition = avatarPositionOffset;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___avatar_6;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = __this->___avatarPositionOffset_4;
		NullCheck(L_8);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_8, L_9, NULL);
		// avatar.transform.localRotation = Quaternion.Euler(0, 0, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___avatar_6;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), (0.0f), NULL);
		NullCheck(L_11);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_11, L_12, NULL);
		// var controller = GetComponent<ThirdPersonController>();
		ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* L_13;
		L_13 = Component_GetComponent_TisThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_mB4628DB9A699A47DAA8B46549B7E18E9855256A6(__this, Component_GetComponent_TisThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3_mB4628DB9A699A47DAA8B46549B7E18E9855256A6_RuntimeMethod_var);
		V_0 = L_13;
		// if (controller != null)
		ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_0092;
		}
	}
	{
		// controller.Setup(avatar, animatorController);
		ThirdPersonController_tA4FEF2570EEB4992714BD62FD7A45257D745B7C3* L_16 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___avatar_6;
		RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254* L_18 = __this->___animatorController_8;
		NullCheck(L_16);
		ThirdPersonController_Setup_m436496E9BE83F1489C20A2336B763F9BDBB1F4F5(L_16, L_17, L_18, NULL);
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonLoader::LoadAvatar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonLoader_LoadAvatar_mBC2C9AE956C0E428CD9F47349444D90C7BF10222 (ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	{
		// avatarUrl = url.Trim(' ');
		String_t* L_0 = ___0_url;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_mF5081365E55C31B636F8145F42AEF61868175A5A(L_0, ((int32_t)32), NULL);
		__this->___avatarUrl_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___avatarUrl_5), (void*)L_1);
		// avatarObjectLoader.LoadAvatar(avatarUrl);
		AvatarObjectLoader_t167592F871890051BF9CD07458729A06C6127C69* L_2 = __this->___avatarObjectLoader_7;
		String_t* L_3 = __this->___avatarUrl_5;
		NullCheck(L_2);
		AvatarObjectLoader_LoadAvatar_m5EE260D9A70E45BFACCD0E45CA3F3EBE2D77C9DE(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonLoader__ctor_m7399C1D224CEEF86A28AF1CE6877C9A745D99033 (ThirdPersonLoader_t77DD7CFE2F862F7EC87B3879FE82FB4DFFA6C8B4* __this, const RuntimeMethod* method) 
{
	{
		// private readonly Vector3 avatarPositionOffset = new Vector3(0, -0.08f, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (-0.0799999982f), (0.0f), /*hidden argument*/NULL);
		__this->___avatarPositionOffset_4 = L_0;
		// private bool loadOnStart = true;
		__this->___loadOnStart_9 = (bool)1;
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
// System.Single ReadyPlayerMe.QuickStart.ThirdPersonMovement::get_CurrentMoveSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ThirdPersonMovement_get_CurrentMoveSpeed_m532FF9B2AE9D60DB17C48724C9FB9305F2A7E1D3 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) 
{
	{
		// public float CurrentMoveSpeed { get; private set; }
		float L_0 = __this->___U3CCurrentMoveSpeedU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::set_CurrentMoveSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_set_CurrentMoveSpeed_m13919F21BCB86E0864110BBDDC212DBAC3C2ADF4 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float CurrentMoveSpeed { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CCurrentMoveSpeedU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_Awake_mE6712B78ACD19D02A005374E9CE4447DB42F5B15 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m2EF5C398F98450FF07BD95E49F2CCC48B5C6698B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// controller = GetComponent<CharacterController>();
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0;
		L_0 = Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040(__this, Component_GetComponent_TisCharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A_m96B48A644EDC97C5C82F154D1FEA551B2E392040_RuntimeMethod_var);
		__this->___controller_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___controller_10), (void*)L_0);
		// groundCheck = GetComponent<GroundCheck>();
		GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* L_1;
		L_1 = Component_GetComponent_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m2EF5C398F98450FF07BD95E49F2CCC48B5C6698B(__this, Component_GetComponent_TisGroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44_m2EF5C398F98450FF07BD95E49F2CCC48B5C6698B_RuntimeMethod_var);
		__this->___groundCheck_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___groundCheck_17), (void*)L_1);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::Setup(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_Setup_m847528711F11312D8BDD37BFAC61C7456945033F (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// avatar = target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_target;
		__this->___avatar_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___avatar_11), (void*)L_0);
		// if (playerCamera == null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___playerCamera_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// playerCamera = Camera.main.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		__this->___playerCamera_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerCamera_5), (void*)L_4);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::Move(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_Move_mFF8325693B81201831555283D77AC080A2258144 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, float ___0_inputX, float ___1_inputY, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float G_B3_0 = 0.0f;
	ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* G_B5_0 = NULL;
	ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* G_B6_1 = NULL;
	{
		// var moveDirection = playerCamera.right * inputX + playerCamera.forward * inputY;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___playerCamera_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_0, NULL);
		float L_2 = ___0_inputX;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___playerCamera_5;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		float L_6 = ___1_inputY;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_7, NULL);
		V_0 = L_8;
		// var moveSpeed = isRunning ? runSpeed: walkSpeed;
		bool L_9 = __this->___isRunning_16;
		if (L_9)
		{
			goto IL_0038;
		}
	}
	{
		float L_10 = __this->___walkSpeed_6;
		G_B3_0 = L_10;
		goto IL_003e;
	}

IL_0038:
	{
		float L_11 = __this->___runSpeed_7;
		G_B3_0 = L_11;
	}

IL_003e:
	{
		V_1 = G_B3_0;
		// JumpAndGravity();
		ThirdPersonMovement_JumpAndGravity_m623E845494E355A79958FFE6E818F12698072C0B(__this, NULL);
		// controller.Move(moveDirection.normalized * (moveSpeed * Time.deltaTime) +  new Vector3(0.0f, verticalVelocity * Time.deltaTime, 0.0f));
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_12 = __this->___controller_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		float L_14 = V_1;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, ((float)il2cpp_codegen_multiply(L_14, L_15)), NULL);
		float L_17 = __this->___verticalVelocity_12;
		float L_18;
		L_18 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_19), (0.0f), ((float)il2cpp_codegen_multiply(L_17, L_18)), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_19, NULL);
		NullCheck(L_12);
		int32_t L_21;
		L_21 = CharacterController_Move_mE3F7AC1B4A2D6955980811C088B68ED3A31D2DA4(L_12, L_20, NULL);
		// var moveMagnitude = moveDirection.magnitude;
		float L_22;
		L_22 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		V_2 = L_22;
		// CurrentMoveSpeed = isRunning ? runSpeed * moveMagnitude : walkSpeed * moveMagnitude;
		bool L_23 = __this->___isRunning_16;
		G_B4_0 = __this;
		if (L_23)
		{
			G_B5_0 = __this;
			goto IL_009f;
		}
	}
	{
		float L_24 = __this->___walkSpeed_6;
		float L_25 = V_2;
		G_B6_0 = ((float)il2cpp_codegen_multiply(L_24, L_25));
		G_B6_1 = G_B4_0;
		goto IL_00a7;
	}

IL_009f:
	{
		float L_26 = __this->___runSpeed_7;
		float L_27 = V_2;
		G_B6_0 = ((float)il2cpp_codegen_multiply(L_26, L_27));
		G_B6_1 = G_B5_0;
	}

IL_00a7:
	{
		NullCheck(G_B6_1);
		ThirdPersonMovement_set_CurrentMoveSpeed_m13919F21BCB86E0864110BBDDC212DBAC3C2ADF4_inline(G_B6_1, G_B6_0, NULL);
		// if (moveMagnitude > 0)
		float L_28 = V_2;
		if ((!(((float)L_28) > ((float)(0.0f)))))
		{
			goto IL_00bb;
		}
	}
	{
		// RotateAvatarTowardsMoveDirection(moveDirection);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_0;
		ThirdPersonMovement_RotateAvatarTowardsMoveDirection_m18D407BE1E9F95B2EC7B143DBEB70D961306AA5D(__this, L_29, NULL);
	}

IL_00bb:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::RotateAvatarTowardsMoveDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_RotateAvatarTowardsMoveDirection_m18D407BE1E9F95B2EC7B143DBEB70D961306AA5D (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_moveDirection, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float targetAngle = Mathf.Atan2(moveDirection.x, moveDirection.z) * Mathf.Rad2Deg + transform.rotation.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_moveDirection;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_moveDirection;
		float L_3 = L_2.___z_4;
		float L_4;
		L_4 = atan2f(L_1, L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_4, (57.2957802f))), L_7));
		// float angle = Mathf.SmoothDampAngle(avatar.transform.eulerAngles.y, targetAngle, ref turnSmoothVelocity, TURN_SMOOTH_TIME);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___avatar_11;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_9, NULL);
		float L_11 = L_10.___y_3;
		float L_12 = V_0;
		float* L_13 = (&__this->___turnSmoothVelocity_13);
		float L_14;
		L_14 = Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline(L_11, L_12, L_13, (0.0500000007f), NULL);
		V_1 = L_14;
		// avatar.transform.rotation = Quaternion.Euler(0, angle, 0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___avatar_11;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		float L_17 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_17, (0.0f), NULL);
		NullCheck(L_16);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_16, L_18, NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::JumpAndGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_JumpAndGravity_m623E845494E355A79958FFE6E818F12698072C0B (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) 
{
	{
		// if (controller.isGrounded && verticalVelocity< 0)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0 = __this->___controller_10;
		NullCheck(L_0);
		bool L_1;
		L_1 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_0, NULL);
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		float L_2 = __this->___verticalVelocity_12;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0025;
		}
	}
	{
		// verticalVelocity = -2f;
		__this->___verticalVelocity_12 = (-2.0f);
	}

IL_0025:
	{
		// if (jumpTrigger && controller.isGrounded)
		bool L_3 = __this->___jumpTrigger_14;
		if (!L_3)
		{
			goto IL_005f;
		}
	}
	{
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_4 = __this->___controller_10;
		NullCheck(L_4);
		bool L_5;
		L_5 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_4, NULL);
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		// verticalVelocity = Mathf.Sqrt(jumpHeight * -2f * gravity);
		float L_6 = __this->___jumpHeight_9;
		float L_7 = __this->___gravity_8;
		float L_8;
		L_8 = sqrtf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_6, (-2.0f))), L_7)));
		__this->___verticalVelocity_12 = L_8;
		// jumpTrigger = false;
		__this->___jumpTrigger_14 = (bool)0;
	}

IL_005f:
	{
		// verticalVelocity += gravity * Time.deltaTime;
		float L_9 = __this->___verticalVelocity_12;
		float L_10 = __this->___gravity_8;
		float L_11;
		L_11 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___verticalVelocity_12 = ((float)il2cpp_codegen_add(L_9, ((float)il2cpp_codegen_multiply(L_10, L_11))));
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::SetIsRunning(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement_SetIsRunning_m5AD3B8466B6ECE622F8004C7DDD254A0FC3C023A (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, bool ___0_running, const RuntimeMethod* method) 
{
	{
		// isRunning = running;
		bool L_0 = ___0_running;
		__this->___isRunning_16 = L_0;
		// }
		return;
	}
}
// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonMovement::TryJump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThirdPersonMovement_TryJump_mD0CEA19B8ED7DCE616D3558BCBF3575CC3010270 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) 
{
	{
		// jumpTrigger = false;
		__this->___jumpTrigger_14 = (bool)0;
		// if (controller.isGrounded)
		CharacterController_t847C1A2719F60547D7D6077B648D6CE2D1EF3A6A* L_0 = __this->___controller_10;
		NullCheck(L_0);
		bool L_1;
		L_1 = CharacterController_get_isGrounded_m548072EC190878925C0F97595B6C307714EFDD67(L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// jumpTrigger = true;
		__this->___jumpTrigger_14 = (bool)1;
	}

IL_001b:
	{
		// return jumpTrigger;
		bool L_2 = __this->___jumpTrigger_14;
		return L_2;
	}
}
// System.Boolean ReadyPlayerMe.QuickStart.ThirdPersonMovement::IsGrounded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThirdPersonMovement_IsGrounded_m6AF64A40D8733B384C53DF27234B3774D4CB7469 (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) 
{
	{
		// if (verticalVelocity > 0)
		float L_0 = __this->___verticalVelocity_12;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_000f;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000f:
	{
		// return groundCheck.IsGrounded();
		GroundCheck_tD9F5EC450A9AE7916B1277C663AAD989F9031E44* L_1 = __this->___groundCheck_17;
		NullCheck(L_1);
		bool L_2;
		L_2 = GroundCheck_IsGrounded_m2E68C51BBE946384E20897489ABD77DBBED161C0(L_1, NULL);
		return L_2;
	}
}
// System.Void ReadyPlayerMe.QuickStart.ThirdPersonMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThirdPersonMovement__ctor_mDAC301F25ED7472903F7B65D02F7FAA21ED6ABFB (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) 
{
	{
		// private float walkSpeed = 3f;
		__this->___walkSpeed_6 = (3.0f);
		// private float runSpeed = 8f;
		__this->___runSpeed_7 = (8.0f);
		// private float gravity = -18f;
		__this->___gravity_8 = (-18.0f);
		// private float jumpHeight = 3f;
		__this->___jumpHeight_9 = (3.0f);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool GunAim_GetIsOutOfBounds_mF8AAF5F04C61EDCE7250D5F0E0E5E9FF91024873_inline (GunAim_t854DAB0F18D1C44C22107CBE7712D07D5A002B91* __this, const RuntimeMethod* method) 
{
	{
		// return isOutOfBounds;
		bool L_0 = __this->___isOutOfBounds_9;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* XRGeneralSettings_get_Instance_m9F222F982E62E066E119754858D8E73CFE42048C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_RuntimeSettingsInstance;
		il2cpp_codegen_runtime_class_init_inline(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var);
		XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* L_0 = ((XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_StaticFields*)il2cpp_codegen_static_fields_for(XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE_il2cpp_TypeInfo_var))->___s_RuntimeSettingsInstance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* XRGeneralSettings_get_Manager_m112FEB4E6DFB7B5F5C4A2DEC4E975CF2EBD51B42_inline (XRGeneralSettings_t8F8D096944606B5AD845D010706BF7094ADEC8CE* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_LoaderManagerInstance; }
		XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* L_0 = __this->___m_LoaderManagerInstance_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool XRManagerSettings_get_isInitializationComplete_m2F7E30B51DB12D34535BE7805A3CD490FFE12F68_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_InitializationComplete; }
		bool L_0 = __this->___m_InitializationComplete_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField_10;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerInput_get_MouseAxisX_m517553D7755EC539C395A87345206359C719C74D_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public float MouseAxisX { get; private set; }
		float L_0 = __this->___U3CMouseAxisXU3Ek__BackingField_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerInput_get_MouseAxisY_m32B6331B6392DED8AF93AC744FDF868448C9C4E4_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public float MouseAxisY { get; private set; }
		float L_0 = __this->___U3CMouseAxisYU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m5F87930F9B0828E5652E2D9D01ED907C01122C86_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		__this->___z_4 = (0.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mF673AC30464B7DF671A0556140EB6E9DD75827ED_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_current, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_target, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_current;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = ___2_currentVelocity;
		float L_4 = ___3_smoothTime;
		float L_5 = V_1;
		float L_6 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerInput_set_AxisHorizontal_mA698E8B72185C79CA74B278BAB54FD01DD487689_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float AxisHorizontal { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CAxisHorizontalU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerInput_set_AxisVertical_mDD8FF9AB5F1BFE53C69766EAB27C45F80CFEA553_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float AxisVertical { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CAxisVerticalU3Ek__BackingField_11 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerInput_set_MouseAxisX_mFE9182A7A86366DD9BD4B83294FA2A0D12C7124C_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MouseAxisX { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CMouseAxisXU3Ek__BackingField_12 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerInput_set_MouseAxisY_mB28D735655CB89CB9201A8F1283FF76DD54B2EBA_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MouseAxisY { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CMouseAxisYU3Ek__BackingField_13 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerInput_get_AxisHorizontal_m1D5B395A4B8E6B7859495693589F6951715DC2B4_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public float AxisHorizontal { get; private set; }
		float L_0 = __this->___U3CAxisHorizontalU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayerInput_get_AxisVertical_mCAB43AC24F874CE7348C141767F355EE3CA2D420_inline (PlayerInput_tD3CF8891A6FD05B6F8C0E37338904C9A42F6B75C* __this, const RuntimeMethod* method) 
{
	{
		// public float AxisVertical { get; private set; }
		float L_0 = __this->___U3CAxisVerticalU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThirdPersonMovement_SetIsRunning_m5AD3B8466B6ECE622F8004C7DDD254A0FC3C023A_inline (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, bool ___0_running, const RuntimeMethod* method) 
{
	{
		// isRunning = running;
		bool L_0 = ___0_running;
		__this->___isRunning_16 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ThirdPersonMovement_get_CurrentMoveSpeed_m532FF9B2AE9D60DB17C48724C9FB9305F2A7E1D3_inline (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, const RuntimeMethod* method) 
{
	{
		// public float CurrentMoveSpeed { get; private set; }
		float L_0 = __this->___U3CCurrentMoveSpeedU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* CompletionEventArgs_get_Avatar_mD872C68004A3EE977C539011945268D61A9966EF_inline (CompletionEventArgs_tBF4A5164C04020BEF9A73E33EA6A6EA73E9E297C* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject Avatar { get; set; }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___U3CAvatarU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ThirdPersonMovement_set_CurrentMoveSpeed_m13919F21BCB86E0864110BBDDC212DBAC3C2ADF4_inline (ThirdPersonMovement_tFA49F6E00B1968943DF9598492A144B01F5A2C28* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float CurrentMoveSpeed { get; private set; }
		float L_0 = ___0_value;
		__this->___U3CCurrentMoveSpeedU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_m81F8BEDEE653DBC7AEC560E21EA429B34AA2734D_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		float L_0;
		L_0 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		V_0 = L_0;
		V_1 = (std::numeric_limits<float>::infinity());
		float L_1 = ___0_current;
		float L_2 = ___1_target;
		float* L_3 = ___2_currentVelocity;
		float L_4 = ___3_smoothTime;
		float L_5 = V_1;
		float L_6 = V_0;
		float L_7;
		L_7 = Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline(L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		V_2 = L_7;
		goto IL_001b;
	}

IL_001b:
	{
		float L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_SmoothDampAngle_mA4C705CB9E2330AD5D98D7A9987DA64FD5AFFB3E_inline (float ___0_current, float ___1_target, float* ___2_currentVelocity, float ___3_smoothTime, float ___4_maxSpeed, float ___5_deltaTime, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_current;
		float L_1 = ___0_current;
		float L_2 = ___1_target;
		float L_3;
		L_3 = Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline(L_1, L_2, NULL);
		___1_target = ((float)il2cpp_codegen_add(L_0, L_3));
		float L_4 = ___0_current;
		float L_5 = ___1_target;
		float* L_6 = ___2_currentVelocity;
		float L_7 = ___3_smoothTime;
		float L_8 = ___4_maxSpeed;
		float L_9 = ___5_deltaTime;
		float L_10;
		L_10 = Mathf_SmoothDamp_mBE7ABB6B59D198BE8ABE42942452CC7B813A5248(L_4, L_5, L_6, L_7, L_8, L_9, NULL);
		V_0 = L_10;
		goto IL_001c;
	}

IL_001c:
	{
		float L_11 = V_0;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mCBA858CE5C1BEEBE375812325A50E434FF66D6D4_inline (float ___0_current, float ___1_target, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___1_target;
		float L_1 = ___0_current;
		float L_2;
		L_2 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)il2cpp_codegen_subtract(L_0, L_1)), (360.0f), NULL);
		V_0 = L_2;
		float L_3 = V_0;
		V_1 = (bool)((((float)L_3) > ((float)(180.0f)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		float L_5 = V_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_5, (360.0f)));
	}

IL_0023:
	{
		float L_6 = V_0;
		V_2 = L_6;
		goto IL_0027;
	}

IL_0027:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___0_t, float ___1_length, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_t;
		float L_1 = ___0_t;
		float L_2 = ___1_length;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___1_length;
		float L_5 = ___1_length;
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
