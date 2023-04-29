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
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.IO.DirectoryInfo,System.Int64>
struct Func_2_t686A7D0152D3B6170FED254BEFF424719DE0DD34;
// System.Func`2<System.IO.FileInfo,System.Int64>
struct Func_2_tECA610381B947F66E961BDBB55BFF90ECBF0FB0E;
// System.Func`2<System.Object,System.Int64>
struct Func_2_t78D13C74B0F5A1DD640F8722F0AFB5F5144EAB97;
// System.Collections.Generic.IEnumerable`1<System.IO.DirectoryInfo>
struct IEnumerable_1_tC61234C675E197381ED0C6E05C543D07C5A595D6;
// System.Collections.Generic.IEnumerable`1<System.IO.FileInfo>
struct IEnumerable_1_t768DFB9B6219E03ADE076DED519B272E9BBF1580;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IO.DirectoryInfo[]
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953;
// System.IO.FileInfo[]
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// ReadyPlayerMe.Core.Context
struct Context_tC31585490FEB4D076A0C34DB4AF4F97F6E4D4431;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// ReadyPlayerMe.Core.Data.CoreSettings
struct CoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987;
// ReadyPlayerMe.Core.CustomLogHandler
struct CustomLogHandler_t68F4AB2646B10612D0328F12B703B1B4CA94A36E;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Exception
struct Exception_t;
// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C;
// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.ILogHandler
struct ILogHandler_tC139ADEB099E63CFA289F310D4BE306E16B5EAE1;
// UnityEngine.ILogger
struct ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42;
// UnityEngine.Logger
struct Logger_t608FFEA1E140B6BE2CCB01C86ACB219533C172A0;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E;
// ReadyPlayerMe.Core.Response
struct Response_tD890E74C8ADF0C3525BD7AACD01EFEADD4B451B5;
// ReadyPlayerMe.Core.ResponseFile
struct ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7;
// ReadyPlayerMe.Core.ResponseTexture
struct ResponseTexture_tBFA6BE3C82EED0B009EC64F1CD03BF1420C61AA9;
// ReadyPlayerMe.Core.RuntimeDebugPanel
struct RuntimeDebugPanel_t51E1F57EB2344DC77C5ABF810ACEA8A789DCFBFC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// ReadyPlayerMe.Core.WebRequestDispatcher
struct WebRequestDispatcher_t5F8CFBFA438101202578E0A7D67A7398F5C08A48;
// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413;
// ReadyPlayerMe.Core.DirectoryUtility/<>c
struct U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreSettingsHandler_tA6F472F8E8DA4AE7B85E6B843FEF370962F967B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomLogHandler_t68F4AB2646B10612D0328F12B703B1B4CA94A36E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t686A7D0152D3B6170FED254BEFF424719DE0DD34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tECA610381B947F66E961BDBB55BFF90ECBF0FB0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogHandler_tC139ADEB099E63CFA289F310D4BE306E16B5EAE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logger_t608FFEA1E140B6BE2CCB01C86ACB219533C172A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral01DB3F55FFDCCF88D625086C4E56A81D3561269B;
IL2CPP_EXTERN_C String_t* _stringLiteral06AE8FF65C95C6C753AEE4FF49E57BA9A977345C;
IL2CPP_EXTERN_C String_t* _stringLiteral10C7F3193FC6980EF107969D335A48101E6571B0;
IL2CPP_EXTERN_C String_t* _stringLiteral2F0F7027CE72E908C45686CFE540738521E8BC70;
IL2CPP_EXTERN_C String_t* _stringLiteral303EC951643C66936A76D74A320839BD5086F30B;
IL2CPP_EXTERN_C String_t* _stringLiteral47AA658FAF5802EC0B432E226517B7556408A861;
IL2CPP_EXTERN_C String_t* _stringLiteral5F05EEFC3B0A47CFAFAA4FA1D1C639FB83DE4FC0;
IL2CPP_EXTERN_C String_t* _stringLiteral6C16226522862D84ADEF33A5EECAA1EC73C4739B;
IL2CPP_EXTERN_C String_t* _stringLiteral835ED243945FBB19DD726B0EF7BB1DA88CB136BD;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8AD33D38D1C09E8EBFE8B002995497F1407B29F6;
IL2CPP_EXTERN_C String_t* _stringLiteral9A7C8DAFE9962F8553C59F15CFAE8A8D84DF034C;
IL2CPP_EXTERN_C String_t* _stringLiteral9BE8D3B98CAA0ADD3D8F1E19358198CC1CE555C4;
IL2CPP_EXTERN_C String_t* _stringLiteralB180D04A7BD569BEDDBACD727E3DB10937C35022;
IL2CPP_EXTERN_C String_t* _stringLiteralB2501285DA6895C43F81A426A8C28EF7BA40D44E;
IL2CPP_EXTERN_C String_t* _stringLiteralB5FBC620FB1B8DBDD5CB6C2BAB4E19350BE2C1F5;
IL2CPP_EXTERN_C String_t* _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2;
IL2CPP_EXTERN_C String_t* _stringLiteralD3D1CE8699582E73919090503E2BA67718C39EE1;
IL2CPP_EXTERN_C String_t* _stringLiteralDCE27EB9C94E5B3220A096FCCBFBD8435E3AC5A3;
IL2CPP_EXTERN_C String_t* _stringLiteralDE0A32654E5E1A4A07E385F8453C9576529E8B2D;
IL2CPP_EXTERN_C String_t* _stringLiteralE2A6DD8FD5A0AF06C4D0704AC095E9784CE2FED3;
IL2CPP_EXTERN_C String_t* _stringLiteralEAA5A7F71CEAF22FCCBE9ECEEBBD1FF99E220991;
IL2CPP_EXTERN_C String_t* _stringLiteralEDFB5040A941F0738AC3F929557E0C633CD42EB8;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084_mA29690A889B77E2C90970F88B2DEB0E28852F3F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084_m0B73DBB424E23E018F46D32AEF8A8B273880854D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m3760E34E543A1FBDA2C1A9B2839BC7C431B9D9CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mEA427FC769777823ABF038FF8E80D5F1F0F8B839_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DirectoryUtility_GetDirectorySize_m6A6FA469BC59794C29438EB6059FD3FF9408C5B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Sum_TisDirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_m89CE777F905BBC4B29548C3D6730DEA54B096B3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Sum_TisFileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_m060E16ED139D287E1011BD3FD15D212FD092EE3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisCoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987_mCC99FBD57E0BC58DFC5B44C4C64E85CA6C4470BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RuntimeDebugPanel_HandleLog_mB1A5627870CCA3400EBF2246D6B51014002D1B20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetDirectorySizeU3Eb__8_0_mE83DD6782357FFAE51E41EBF771CCD8F4931ADD5_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953;
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4F6ED639EED18A50FC43059BBF2B251296D5302E 
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// ReadyPlayerMe.Core.CommonHeaders
struct CommonHeaders_tD7857FDCC7972DF7A9AA30096E98E33D41275124  : public RuntimeObject
{
};

// ReadyPlayerMe.Core.Context
struct Context_tC31585490FEB4D076A0C34DB4AF4F97F6E4D4431  : public RuntimeObject
{
};

// ReadyPlayerMe.Core.CoreSettingsHandler
struct CoreSettingsHandler_tA6F472F8E8DA4AE7B85E6B843FEF370962F967B6  : public RuntimeObject
{
};

// ReadyPlayerMe.Core.CustomLogHandler
struct CustomLogHandler_t68F4AB2646B10612D0328F12B703B1B4CA94A36E  : public RuntimeObject
{
	// UnityEngine.ILogHandler ReadyPlayerMe.Core.CustomLogHandler::logHandler
	RuntimeObject* ___logHandler_1;
};

// UnityEngine.Debug
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F  : public RuntimeObject
{
};

// ReadyPlayerMe.Core.DirectoryUtility
struct DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A  : public RuntimeObject
{
};

// UnityEngine.Logger
struct Logger_t608FFEA1E140B6BE2CCB01C86ACB219533C172A0  : public RuntimeObject
{
	// UnityEngine.ILogHandler UnityEngine.Logger::<logHandler>k__BackingField
	RuntimeObject* ___U3ClogHandlerU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Logger::<logEnabled>k__BackingField
	bool ___U3ClogEnabledU3Ek__BackingField_1;
	// UnityEngine.LogType UnityEngine.Logger::<filterLogType>k__BackingField
	int32_t ___U3CfilterLogTypeU3Ek__BackingField_2;
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

// ReadyPlayerMe.Core.Response
struct Response_tD890E74C8ADF0C3525BD7AACD01EFEADD4B451B5  : public RuntimeObject
{
	// System.String ReadyPlayerMe.Core.Response::Text
	String_t* ___Text_0;
	// System.Byte[] ReadyPlayerMe.Core.Response::Data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Data_1;
	// System.Boolean ReadyPlayerMe.Core.Response::<IsSuccess>k__BackingField
	bool ___U3CIsSuccessU3Ek__BackingField_2;
	// System.String ReadyPlayerMe.Core.Response::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_3;
	// System.Int64 ReadyPlayerMe.Core.Response::<ResponseCode>k__BackingField
	int64_t ___U3CResponseCodeU3Ek__BackingField_4;
};

// ReadyPlayerMe.Core.ResponseFile
struct ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7  : public RuntimeObject
{
	// System.Boolean ReadyPlayerMe.Core.ResponseFile::<IsSuccess>k__BackingField
	bool ___U3CIsSuccessU3Ek__BackingField_0;
	// System.String ReadyPlayerMe.Core.ResponseFile::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_1;
	// System.Int64 ReadyPlayerMe.Core.ResponseFile::<ResponseCode>k__BackingField
	int64_t ___U3CResponseCodeU3Ek__BackingField_2;
	// System.Byte[] ReadyPlayerMe.Core.ResponseFile::<Data>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CDataU3Ek__BackingField_3;
	// System.UInt64 ReadyPlayerMe.Core.ResponseFile::length
	uint64_t ___length_4;
};

// ReadyPlayerMe.Core.ResponseTexture
struct ResponseTexture_tBFA6BE3C82EED0B009EC64F1CD03BF1420C61AA9  : public RuntimeObject
{
	// UnityEngine.Texture2D ReadyPlayerMe.Core.ResponseTexture::Texture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___Texture_0;
	// System.Boolean ReadyPlayerMe.Core.ResponseTexture::<IsSuccess>k__BackingField
	bool ___U3CIsSuccessU3Ek__BackingField_1;
	// System.String ReadyPlayerMe.Core.ResponseTexture::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_2;
	// System.Int64 ReadyPlayerMe.Core.ResponseTexture::<ResponseCode>k__BackingField
	int64_t ___U3CResponseCodeU3Ek__BackingField_3;
};

// ReadyPlayerMe.Core.SDKLogger
struct SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25  : public RuntimeObject
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_23;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_26;
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

// ReadyPlayerMe.Core.WebRequestDispatcher
struct WebRequestDispatcher_t5F8CFBFA438101202578E0A7D67A7398F5C08A48  : public RuntimeObject
{
	// System.Int32 ReadyPlayerMe.Core.WebRequestDispatcher::Timeout
	int32_t ___Timeout_0;
	// System.Action`1<System.Single> ReadyPlayerMe.Core.WebRequestDispatcher::ProgressChanged
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___ProgressChanged_1;
};

// ReadyPlayerMe.Core.DirectoryUtility/<>c
struct U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82  : public RuntimeObject
{
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// ReadyPlayerMe.Core.AppData
struct AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822 
{
	// System.String ReadyPlayerMe.Core.AppData::SDKVersion
	String_t* ___SDKVersion_0;
	// System.String ReadyPlayerMe.Core.AppData::PartnerName
	String_t* ___PartnerName_1;
	// System.String ReadyPlayerMe.Core.AppData::UnityVersion
	String_t* ___UnityVersion_2;
	// System.String ReadyPlayerMe.Core.AppData::UnityPlatform
	String_t* ___UnityPlatform_3;
	// System.String ReadyPlayerMe.Core.AppData::RenderPipeline
	String_t* ___RenderPipeline_4;
	// System.String ReadyPlayerMe.Core.AppData::BuildTarget
	String_t* ___BuildTarget_5;
};
// Native definition for P/Invoke marshalling of ReadyPlayerMe.Core.AppData
struct AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822_marshaled_pinvoke
{
	char* ___SDKVersion_0;
	char* ___PartnerName_1;
	char* ___UnityVersion_2;
	char* ___UnityPlatform_3;
	char* ___RenderPipeline_4;
	char* ___BuildTarget_5;
};
// Native definition for COM marshalling of ReadyPlayerMe.Core.AppData
struct AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822_marshaled_com
{
	Il2CppChar* ___SDKVersion_0;
	Il2CppChar* ___PartnerName_1;
	Il2CppChar* ___UnityVersion_2;
	Il2CppChar* ___UnityPlatform_3;
	Il2CppChar* ___RenderPipeline_4;
	Il2CppChar* ___BuildTarget_5;
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.Runtime.CompilerServices.YieldAwaitable
struct YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB__padding[1];
	};
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A 
{
	union
	{
		struct
		{
		};
		uint8_t YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A__padding[1];
	};
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// ReadyPlayerMe.Core.ApplicationData
struct ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17  : public RuntimeObject
{
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
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

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
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

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.DownloadHandlerFile
struct DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerFile
struct DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerFile
struct DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
};

// UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerTexture::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
	// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::mTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mTexture_2;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mHasTexture
	bool ___mHasTexture_3;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mNonReadable
	bool ___mNonReadable_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mTexture_2;
	int32_t ___mHasTexture_3;
	int32_t ___mNonReadable_4;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___mTexture_2;
	int32_t ___mHasTexture_3;
	int32_t ___mNonReadable_4;
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// System.Func`2<System.IO.DirectoryInfo,System.Int64>
struct Func_2_t686A7D0152D3B6170FED254BEFF424719DE0DD34  : public MulticastDelegate_t
{
};

// System.Func`2<System.IO.FileInfo,System.Int64>
struct Func_2_tECA610381B947F66E961BDBB55BFF90ECBF0FB0E  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// ReadyPlayerMe.Core.Data.CoreSettings
struct CoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String ReadyPlayerMe.Core.Data.CoreSettings::Subdomain
	String_t* ___Subdomain_4;
	// System.Boolean ReadyPlayerMe.Core.Data.CoreSettings::EnableLogging
	bool ___EnableLogging_5;
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.IO.FileInfo
struct FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// UnityEngine.Rendering.RenderPipelineAsset
struct RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Application/LogCallback
struct LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413  : public MulticastDelegate_t
{
};

// ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18
struct U3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084 
{
	// System.Int32 ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// ReadyPlayerMe.Core.ResponseFile ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18::<>4__this
	ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* ___U3CU3E4__this_2;
	// System.String ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18::path
	String_t* ___path_3;
	// System.Threading.CancellationToken ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18::token
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___token_4;
	// System.Int64 ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18::<byteLength>5__2
	int64_t ___U3CbyteLengthU3E5__2_5;
	// System.IO.FileInfo ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18::<info>5__3
	FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* ___U3CinfoU3E5__3_6;
	// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18::<>u__1
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A ___U3CU3Eu__1_7;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// ReadyPlayerMe.Core.RuntimeDebugPanel
struct RuntimeDebugPanel_t51E1F57EB2344DC77C5ABF810ACEA8A789DCFBFC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ReadyPlayerMe.Core.RuntimeDebugPanel::showDebugPanel
	bool ___showDebugPanel_4;
	// System.Boolean ReadyPlayerMe.Core.RuntimeDebugPanel::pauseLogOutput
	bool ___pauseLogOutput_5;
	// UnityEngine.UI.Text ReadyPlayerMe.Core.RuntimeDebugPanel::logTextUI
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___logTextUI_6;
	// UnityEngine.UI.ScrollRect ReadyPlayerMe.Core.RuntimeDebugPanel::logScrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___logScrollRect_7;
	// System.String ReadyPlayerMe.Core.RuntimeDebugPanel::currentLogOutput
	String_t* ___currentLogOutput_8;
	// System.Int32 ReadyPlayerMe.Core.RuntimeDebugPanel::logCount
	int32_t ___logCount_9;
	// System.Int32 ReadyPlayerMe.Core.RuntimeDebugPanel::maxLogs
	int32_t ___maxLogs_10;
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

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
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

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// ReadyPlayerMe.Core.CommonHeaders

// ReadyPlayerMe.Core.CommonHeaders

// ReadyPlayerMe.Core.Context

// ReadyPlayerMe.Core.Context

// ReadyPlayerMe.Core.CoreSettingsHandler
struct CoreSettingsHandler_tA6F472F8E8DA4AE7B85E6B843FEF370962F967B6_StaticFields
{
	// ReadyPlayerMe.Core.Data.CoreSettings ReadyPlayerMe.Core.CoreSettingsHandler::coreSettings
	CoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987* ___coreSettings_1;
};

// ReadyPlayerMe.Core.CoreSettingsHandler

// ReadyPlayerMe.Core.CustomLogHandler

// ReadyPlayerMe.Core.CustomLogHandler

// UnityEngine.Debug
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields
{
	// UnityEngine.ILogger UnityEngine.Debug::s_DefaultLogger
	RuntimeObject* ___s_DefaultLogger_0;
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_1;
};

// UnityEngine.Debug

// ReadyPlayerMe.Core.DirectoryUtility
struct DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_StaticFields
{
	// System.String ReadyPlayerMe.Core.DirectoryUtility::<DefaultAvatarFolder>k__BackingField
	String_t* ___U3CDefaultAvatarFolderU3Ek__BackingField_0;
};

// ReadyPlayerMe.Core.DirectoryUtility

// UnityEngine.Logger

// UnityEngine.Logger

// ReadyPlayerMe.Core.Response

// ReadyPlayerMe.Core.Response

// ReadyPlayerMe.Core.ResponseFile

// ReadyPlayerMe.Core.ResponseFile

// ReadyPlayerMe.Core.ResponseTexture

// ReadyPlayerMe.Core.ResponseTexture

// ReadyPlayerMe.Core.SDKLogger
struct SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_StaticFields
{
	// UnityEngine.Logger ReadyPlayerMe.Core.SDKLogger::AvatarLoaderLogger
	Logger_t608FFEA1E140B6BE2CCB01C86ACB219533C172A0* ___AvatarLoaderLogger_0;
	// System.Boolean ReadyPlayerMe.Core.SDKLogger::loggingEnabled
	bool ___loggingEnabled_1;
};

// ReadyPlayerMe.Core.SDKLogger

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_24;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_25;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_27;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_30;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_31;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_32;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_33;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_34;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_36;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_37;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_28;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_29;
};

// ReadyPlayerMe.Core.WebRequestDispatcher

// ReadyPlayerMe.Core.WebRequestDispatcher

// ReadyPlayerMe.Core.DirectoryUtility/<>c
struct U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_StaticFields
{
	// ReadyPlayerMe.Core.DirectoryUtility/<>c ReadyPlayerMe.Core.DirectoryUtility/<>c::<>9
	U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82* ___U3CU3E9_0;
	// System.Func`2<System.IO.FileInfo,System.Int64> ReadyPlayerMe.Core.DirectoryUtility/<>c::<>9__8_0
	Func_2_tECA610381B947F66E961BDBB55BFF90ECBF0FB0E* ___U3CU3E9__8_0_1;
};

// ReadyPlayerMe.Core.DirectoryUtility/<>c

// ReadyPlayerMe.Core.AppData

// ReadyPlayerMe.Core.AppData

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// System.Runtime.CompilerServices.YieldAwaitable

// System.Runtime.CompilerServices.YieldAwaitable

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
struct YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_StaticFields
{
	// System.Threading.WaitCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_waitCallbackRunAction
	WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___s_waitCallbackRunAction_0;
	// System.Threading.SendOrPostCallback System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::s_sendOrPostCallbackRunAction
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___s_sendOrPostCallbackRunAction_1;
};

// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter

// ReadyPlayerMe.Core.ApplicationData
struct ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields
{
	// ReadyPlayerMe.Core.AppData ReadyPlayerMe.Core.ApplicationData::Data
	AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822 ___Data_3;
};

// ReadyPlayerMe.Core.ApplicationData

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Networking.DownloadHandlerFile

// UnityEngine.Networking.DownloadHandlerFile

// UnityEngine.Networking.DownloadHandlerTexture

// UnityEngine.Networking.DownloadHandlerTexture

// System.IO.FileSystemInfo

// System.IO.FileSystemInfo

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// System.Func`2<System.IO.DirectoryInfo,System.Int64>

// System.Func`2<System.IO.DirectoryInfo,System.Int64>

// System.Func`2<System.IO.FileInfo,System.Int64>

// System.Func`2<System.IO.FileInfo,System.Int64>

// ReadyPlayerMe.Core.Data.CoreSettings

// ReadyPlayerMe.Core.Data.CoreSettings

// System.IO.DirectoryInfo

// System.IO.DirectoryInfo

// System.IO.FileInfo

// System.IO.FileInfo

// UnityEngine.Rendering.RenderPipelineAsset

// UnityEngine.Rendering.RenderPipelineAsset

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// UnityEngine.Application/LogCallback

// UnityEngine.Application/LogCallback

// ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18

// ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// ReadyPlayerMe.Core.RuntimeDebugPanel

// ReadyPlayerMe.Core.RuntimeDebugPanel

// UnityEngine.UI.ScrollRect

// UnityEngine.UI.ScrollRect

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
// System.IO.DirectoryInfo[]
struct DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953  : public RuntimeArray
{
	ALIGN_FIELD (8) DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* m_Items[1];

	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.IO.FileInfo[]
struct FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6  : public RuntimeArray
{
	ALIGN_FIELD (8) FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* m_Items[1];

	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084_m0B73DBB424E23E018F46D32AEF8A8B273880854D_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084_mA29690A889B77E2C90970F88B2DEB0E28852F3F9_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084* ___1_stateMachine, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_m831BC1785A9E9CB99F8D66BDFCF6D606622B5ADB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Int64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mD54790BA1BEF5C7D8025676612EB0FF0A97A87F6_gshared (Func_2_t78D13C74B0F5A1DD640F8722F0AFB5F5144EAB97* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Int64 System.Linq.Enumerable::Sum<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Enumerable_Sum_TisRuntimeObject_m87BB29FF3812B4C901E16AC00466E252ED6963BB_gshared (RuntimeObject* ___0_source, Func_2_t78D13C74B0F5A1DD640F8722F0AFB5F5144EAB97* ___1_selector, const RuntimeMethod* method) ;

// ReadyPlayerMe.Core.Data.CoreSettings ReadyPlayerMe.Core.CoreSettingsHandler::get_CoreSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987* CoreSettingsHandler_get_CoreSettings_mE40D4EC43702978F60275C450F26275DE0D5A2A8 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String ReadyPlayerMe.Core.ApplicationData::GetRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApplicationData_GetRenderPipeline_mADB81510A94C9EA2374DFB53287F458EDAC16A74 (const RuntimeMethod* method) ;
// UnityEngine.Rendering.RenderPipelineAsset UnityEngine.Rendering.GraphicsSettings::get_currentRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* GraphicsSettings_get_currentRenderPipeline_mEC94DC23DE4F901D6A629E2DE882982686AF75F1 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.Core.SDKLogger::Log(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKLogger_Log_m8ED1747BB3207EDDE7E5CB797CE23DA17B1A15F1 (String_t* ___0_tag, RuntimeObject* ___1_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// ReadyPlayerMe.Core.AppData ReadyPlayerMe.Core.ApplicationData::GetData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822 ApplicationData_GetData_mE33F99530E811BC0D85D33CE0CE24B7A5CD02E8B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<ReadyPlayerMe.Core.Data.CoreSettings>(System.String)
inline CoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987* Resources_Load_TisCoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987_mCC99FBD57E0BC58DFC5B44C4C64E85CA6C4470BA (String_t* ___0_path, const RuntimeMethod* method)
{
	return ((  CoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___0_path, method);
}
// System.Void ReadyPlayerMe.Core.CoreSettingsHandler::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreSettingsHandler_Save_m0375B4E5ABCA41C77358310AEBF4294A3DACE652 (const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.UInt64 UnityEngine.Networking.UnityWebRequest::get_downloadedBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnityWebRequest_get_downloadedBytes_m73E3EC726E417FC7F983FFEF9566CF380F322610 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084_m0B73DBB424E23E018F46D32AEF8A8B273880854D (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, U3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084_m0B73DBB424E23E018F46D32AEF8A8B273880854D_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void System.IO.FileInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, String_t* ___0_fileName, const RuntimeMethod* method) ;
// System.Void System.IO.FileSystemInfo::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileSystemInfo_Refresh_m9D62ECF4E68302D02B3F2060AD17C0D5572C8E99 (FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable System.Threading.Tasks.Task::Yield()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1 (const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter System.Runtime.CompilerServices.YieldAwaitable::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E (YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter,ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084_mA29690A889B77E2C90970F88B2DEB0E28852F3F9 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* ___0_awaiter, U3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A*, U3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084_mA29690A889B77E2C90970F88B2DEB0E28852F3F9_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07 (YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* __this, const RuntimeMethod* method) ;
// System.Int64 System.IO.FileInfo::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.Core.ResponseFile::set_Data(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResponseFile_set_Data_mCDCF8D7C25015879B6AC9E7613BF35FE37F99D4F_inline (ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFileU3Ed__18_MoveNext_mB23CAE221CF0F900EC78A41005E19023DE6317C7 (U3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFileU3Ed__18_SetStateMachine_m502AF3A0A6C2C1E61DC0A8E871539E48D28D97FE (U3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Boolean ReadyPlayerMe.Core.ResponseTexture::get_IsSuccess()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ResponseTexture_get_IsSuccess_mBE196F231C5932A84B591B6C491E4D5982BA0EDA_inline (ResponseTexture_tBFA6BE3C82EED0B009EC64F1CD03BF1420C61AA9* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* DownloadHandlerTexture_get_texture_m170B5539995EB5984E98E426F52983589F7BEB7C (DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C* __this, const RuntimeMethod* method) ;
// UnityEngine.ILogger UnityEngine.Debug::get_unityLogger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline (const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.Core.CustomLogHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomLogHandler__ctor_mA2732E37E77F9F89C189C869CB99AD62EF95B774 (CustomLogHandler_t68F4AB2646B10612D0328F12B703B1B4CA94A36E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Logger::.ctor(UnityEngine.ILogHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger__ctor_m3155E21A68AA616431A260A3FCBB4B074DF6FAA2 (Logger_t608FFEA1E140B6BE2CCB01C86ACB219533C172A0* __this, RuntimeObject* ___0_logHandler, const RuntimeMethod* method) ;
// System.Boolean ReadyPlayerMe.Core.SDKLogger::IsLoggingEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SDKLogger_IsLoggingEnabled_mE614033301F5BAD7C73729D1D915BD7C33D1BA5C (const RuntimeMethod* method) ;
// System.Void UnityEngine.Logger::Log(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_Log_m8C4EFCE792FEBE0C95EABB00055028FC7776C4DB (Logger_t608FFEA1E140B6BE2CCB01C86ACB219533C172A0* __this, String_t* ___0_tag, RuntimeObject* ___1_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Logger::LogWarning(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logger_LogWarning_mAB43EC8EC22367598AE47AA65848721310E4C21F (Logger_t608FFEA1E140B6BE2CCB01C86ACB219533C172A0* __this, String_t* ___0_tag, RuntimeObject* ___1_message, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.Core.RuntimeDebugPanel::InitialiseDebugPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeDebugPanel_InitialiseDebugPanel_mCE608F97CC7E431F5D00FE3308FFFDE415B87DAB (RuntimeDebugPanel_t51E1F57EB2344DC77C5ABF810ACEA8A789DCFBFC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application/LogCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::remove_logMessageReceived(UnityEngine.Application/LogCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_logMessageReceived_m559439A73DD283295DE44A21F6D3C92D157777CC (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.ScrollRect>(System.Boolean)
inline ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* Component_GetComponentInChildren_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m3760E34E543A1FBDA2C1A9B2839BC7C431B9D9CB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m831BC1785A9E9CB99F8D66BDFCF6D606622B5ADB_gshared)(__this, ___0_includeInactive, method);
}
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>(System.Boolean)
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mEA427FC769777823ABF038FF8E80D5F1F0F8B839 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m831BC1785A9E9CB99F8D66BDFCF6D606622B5ADB_gshared)(__this, ___0_includeInactive, method);
}
// System.Void ReadyPlayerMe.Core.RuntimeDebugPanel::UpdateDebugPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeDebugPanel_UpdateDebugPanel_m2DB01D3D950F5AA4E9DC41BA3198454571C85F3A (RuntimeDebugPanel_t51E1F57EB2344DC77C5ABF810ACEA8A789DCFBFC* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.Core.RuntimeDebugPanel::ScrollToBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeDebugPanel_ScrollToBottom_m2D53E2767099B5D3EC6862F917EA04ACC15CC5D4 (RuntimeDebugPanel_t51E1F57EB2344DC77C5ABF810ACEA8A789DCFBFC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String ReadyPlayerMe.Core.DirectoryUtility::GetAvatarSaveDirectory(System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DirectoryUtility_GetAvatarSaveDirectory_m3B2AB1E41CF3E1C698D763915C3F9D5ED0517D8F (String_t* ___0_guid, bool ___1_saveInProjectFolder, String_t* ___2_paramsHash, const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.Core.DirectoryUtility::ValidateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryUtility_ValidateDirectory_mCD5EF38682F1DF5EAE58F29ECA4917790ADF04D1 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___0_path, const RuntimeMethod* method) ;
// System.String ReadyPlayerMe.Core.DirectoryUtility::GetAvatarsDirectoryPath(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DirectoryUtility_GetAvatarsDirectoryPath_m2B702FD46DE6FA3D992806884428A52319DF599B (bool ___0_saveInProjectFolder, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.String ReadyPlayerMe.Core.DirectoryUtility::get_DefaultAvatarFolder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DirectoryUtility_get_DefaultAvatarFolder_mDDAC70F9E43E586283596BE7B68CA35D5C1DD50B_inline (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.IO.FileInfo[] System.IO.DirectoryInfo::GetFiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* DirectoryInfo_GetFiles_m998040748717954CDDCE273F61EEC0625069543F (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.IO.FileInfo,System.Int64>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m8D2D9B21C76F66D03CFA9835037236EA809A898F (Func_2_tECA610381B947F66E961BDBB55BFF90ECBF0FB0E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tECA610381B947F66E961BDBB55BFF90ECBF0FB0E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mD54790BA1BEF5C7D8025676612EB0FF0A97A87F6_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Int64 System.Linq.Enumerable::Sum<System.IO.FileInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int64>)
inline int64_t Enumerable_Sum_TisFileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_m060E16ED139D287E1011BD3FD15D212FD092EE3E (RuntimeObject* ___0_source, Func_2_tECA610381B947F66E961BDBB55BFF90ECBF0FB0E* ___1_selector, const RuntimeMethod* method)
{
	return ((  int64_t (*) (RuntimeObject*, Func_2_tECA610381B947F66E961BDBB55BFF90ECBF0FB0E*, const RuntimeMethod*))Enumerable_Sum_TisRuntimeObject_m87BB29FF3812B4C901E16AC00466E252ED6963BB_gshared)(___0_source, ___1_selector, method);
}
// System.IO.DirectoryInfo[] System.IO.DirectoryInfo::GetDirectories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* DirectoryInfo_GetDirectories_m2EC8498544C3A85EF92273330858E03B284C6901 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.IO.DirectoryInfo,System.Int64>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mC438F92D72E05E73355B5D5571B383F0CA925843 (Func_2_t686A7D0152D3B6170FED254BEFF424719DE0DD34* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t686A7D0152D3B6170FED254BEFF424719DE0DD34*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_mD54790BA1BEF5C7D8025676612EB0FF0A97A87F6_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Int64 System.Linq.Enumerable::Sum<System.IO.DirectoryInfo>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int64>)
inline int64_t Enumerable_Sum_TisDirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_m89CE777F905BBC4B29548C3D6730DEA54B096B3E (RuntimeObject* ___0_source, Func_2_t686A7D0152D3B6170FED254BEFF424719DE0DD34* ___1_selector, const RuntimeMethod* method)
{
	return ((  int64_t (*) (RuntimeObject*, Func_2_t686A7D0152D3B6170FED254BEFF424719DE0DD34*, const RuntimeMethod*))Enumerable_Sum_TisRuntimeObject_m87BB29FF3812B4C901E16AC00466E252ED6963BB_gshared)(___0_source, ___1_selector, method);
}
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7 (const RuntimeMethod* method) ;
// System.Void ReadyPlayerMe.Core.DirectoryUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBD6EE66F748CC56BD8AFCC6C862EE9606C6A782C (U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
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
// Conversion methods for marshalling of: ReadyPlayerMe.Core.AppData
IL2CPP_EXTERN_C void AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822_marshal_pinvoke(const AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822& unmarshaled, AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822_marshaled_pinvoke& marshaled)
{
	marshaled.___SDKVersion_0 = il2cpp_codegen_marshal_string(unmarshaled.___SDKVersion_0);
	marshaled.___PartnerName_1 = il2cpp_codegen_marshal_string(unmarshaled.___PartnerName_1);
	marshaled.___UnityVersion_2 = il2cpp_codegen_marshal_string(unmarshaled.___UnityVersion_2);
	marshaled.___UnityPlatform_3 = il2cpp_codegen_marshal_string(unmarshaled.___UnityPlatform_3);
	marshaled.___RenderPipeline_4 = il2cpp_codegen_marshal_string(unmarshaled.___RenderPipeline_4);
	marshaled.___BuildTarget_5 = il2cpp_codegen_marshal_string(unmarshaled.___BuildTarget_5);
}
IL2CPP_EXTERN_C void AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822_marshal_pinvoke_back(const AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822_marshaled_pinvoke& marshaled, AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822& unmarshaled)
{
	unmarshaled.___SDKVersion_0 = il2cpp_codegen_marshal_string_result(marshaled.___SDKVersion_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___SDKVersion_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___SDKVersion_0));
	unmarshaled.___PartnerName_1 = il2cpp_codegen_marshal_string_result(marshaled.___PartnerName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___PartnerName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___PartnerName_1));
	unmarshaled.___UnityVersion_2 = il2cpp_codegen_marshal_string_result(marshaled.___UnityVersion_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___UnityVersion_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___UnityVersion_2));
	unmarshaled.___UnityPlatform_3 = il2cpp_codegen_marshal_string_result(marshaled.___UnityPlatform_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___UnityPlatform_3), (void*)il2cpp_codegen_marshal_string_result(marshaled.___UnityPlatform_3));
	unmarshaled.___RenderPipeline_4 = il2cpp_codegen_marshal_string_result(marshaled.___RenderPipeline_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___RenderPipeline_4), (void*)il2cpp_codegen_marshal_string_result(marshaled.___RenderPipeline_4));
	unmarshaled.___BuildTarget_5 = il2cpp_codegen_marshal_string_result(marshaled.___BuildTarget_5);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___BuildTarget_5), (void*)il2cpp_codegen_marshal_string_result(marshaled.___BuildTarget_5));
}
// Conversion method for clean up from marshalling of: ReadyPlayerMe.Core.AppData
IL2CPP_EXTERN_C void AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822_marshal_pinvoke_cleanup(AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___SDKVersion_0);
	marshaled.___SDKVersion_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___PartnerName_1);
	marshaled.___PartnerName_1 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___UnityVersion_2);
	marshaled.___UnityVersion_2 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___UnityPlatform_3);
	marshaled.___UnityPlatform_3 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___RenderPipeline_4);
	marshaled.___RenderPipeline_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___BuildTarget_5);
	marshaled.___BuildTarget_5 = NULL;
}
// Conversion methods for marshalling of: ReadyPlayerMe.Core.AppData
IL2CPP_EXTERN_C void AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822_marshal_com(const AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822& unmarshaled, AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822_marshaled_com& marshaled)
{
	marshaled.___SDKVersion_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___SDKVersion_0);
	marshaled.___PartnerName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___PartnerName_1);
	marshaled.___UnityVersion_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___UnityVersion_2);
	marshaled.___UnityPlatform_3 = il2cpp_codegen_marshal_bstring(unmarshaled.___UnityPlatform_3);
	marshaled.___RenderPipeline_4 = il2cpp_codegen_marshal_bstring(unmarshaled.___RenderPipeline_4);
	marshaled.___BuildTarget_5 = il2cpp_codegen_marshal_bstring(unmarshaled.___BuildTarget_5);
}
IL2CPP_EXTERN_C void AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822_marshal_com_back(const AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822_marshaled_com& marshaled, AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822& unmarshaled)
{
	unmarshaled.___SDKVersion_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___SDKVersion_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___SDKVersion_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___SDKVersion_0));
	unmarshaled.___PartnerName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___PartnerName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___PartnerName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___PartnerName_1));
	unmarshaled.___UnityVersion_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___UnityVersion_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___UnityVersion_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___UnityVersion_2));
	unmarshaled.___UnityPlatform_3 = il2cpp_codegen_marshal_bstring_result(marshaled.___UnityPlatform_3);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___UnityPlatform_3), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___UnityPlatform_3));
	unmarshaled.___RenderPipeline_4 = il2cpp_codegen_marshal_bstring_result(marshaled.___RenderPipeline_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___RenderPipeline_4), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___RenderPipeline_4));
	unmarshaled.___BuildTarget_5 = il2cpp_codegen_marshal_bstring_result(marshaled.___BuildTarget_5);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___BuildTarget_5), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___BuildTarget_5));
}
// Conversion method for clean up from marshalling of: ReadyPlayerMe.Core.AppData
IL2CPP_EXTERN_C void AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822_marshal_com_cleanup(AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___SDKVersion_0);
	marshaled.___SDKVersion_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___PartnerName_1);
	marshaled.___PartnerName_1 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___UnityVersion_2);
	marshaled.___UnityVersion_2 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___UnityPlatform_3);
	marshaled.___UnityPlatform_3 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___RenderPipeline_4);
	marshaled.___RenderPipeline_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___BuildTarget_5);
	marshaled.___BuildTarget_5 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ReadyPlayerMe.Core.ApplicationData::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationData__cctor_m685C5172B9E09CE09D6D2753D1156B8A97B7DB3A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10C7F3193FC6980EF107969D335A48101E6571B0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Data.SDKVersion = SDK_VERSION;
		(&((ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var))->___Data_3)->___SDKVersion_0 = _stringLiteral10C7F3193FC6980EF107969D335A48101E6571B0;
		Il2CppCodeGenWriteBarrier((void**)(&(&((ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var))->___Data_3)->___SDKVersion_0), (void*)_stringLiteral10C7F3193FC6980EF107969D335A48101E6571B0);
		// Data.PartnerName = CoreSettingsHandler.CoreSettings.Subdomain;
		CoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987* L_0;
		L_0 = CoreSettingsHandler_get_CoreSettings_mE40D4EC43702978F60275C450F26275DE0D5A2A8(NULL);
		NullCheck(L_0);
		String_t* L_1 = L_0->___Subdomain_4;
		(&((ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var))->___Data_3)->___PartnerName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&((ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var))->___Data_3)->___PartnerName_1), (void*)L_1);
		// Data.UnityVersion = Application.unityVersion;
		String_t* L_2;
		L_2 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		(&((ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var))->___Data_3)->___UnityVersion_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&((ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var))->___Data_3)->___UnityVersion_2), (void*)L_2);
		// Data.UnityPlatform = Application.platform.ToString();
		int32_t L_3;
		L_3 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		V_0 = L_3;
		Il2CppFakeBox<int32_t> L_4(RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_5;
		L_5 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_4), NULL);
		(&((ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var))->___Data_3)->___UnityPlatform_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&(&((ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var))->___Data_3)->___UnityPlatform_3), (void*)L_5);
		// Data.RenderPipeline = GetRenderPipeline();
		String_t* L_6;
		L_6 = ApplicationData_GetRenderPipeline_mADB81510A94C9EA2374DFB53287F458EDAC16A74(NULL);
		(&((ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var))->___Data_3)->___RenderPipeline_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&(&((ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var))->___Data_3)->___RenderPipeline_4), (void*)L_6);
		// }
		return;
	}
}
// System.String ReadyPlayerMe.Core.ApplicationData::GetRenderPipeline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ApplicationData_GetRenderPipeline_mADB81510A94C9EA2374DFB53287F458EDAC16A74 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral303EC951643C66936A76D74A320839BD5086F30B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var renderPipeline = GraphicsSettings.currentRenderPipeline == null
		//     ? DEFAULT_RENDER_PIPELINE
		//     : GraphicsSettings.currentRenderPipeline.name;
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_0;
		L_0 = GraphicsSettings_get_currentRenderPipeline_mEC94DC23DE4F901D6A629E2DE882982686AF75F1(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		RenderPipelineAsset_t5F9BF815BF931E1314B184E7F9070FB649C7054E* L_2;
		L_2 = GraphicsSettings_get_currentRenderPipeline_mEC94DC23DE4F901D6A629E2DE882982686AF75F1(NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		return L_3;
	}

IL_0018:
	{
		// return renderPipeline;
		return _stringLiteral303EC951643C66936A76D74A320839BD5086F30B;
	}
}
// System.Void ReadyPlayerMe.Core.ApplicationData::Log()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationData_Log_mE6F209304D404FC1047853A193DA0AD11C5E5D97 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06AE8FF65C95C6C753AEE4FF49E57BA9A977345C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral835ED243945FBB19DD726B0EF7BB1DA88CB136BD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AD33D38D1C09E8EBFE8B002995497F1407B29F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A7C8DAFE9962F8553C59F15CFAE8A8D84DF034C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCE27EB9C94E5B3220A096FCCBFBD8435E3AC5A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDFB5040A941F0738AC3F929557E0C633CD42EB8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SDKLogger.Log(TAG, $"Partner Subdomain: <color=green>{Data.PartnerName}</color>");
		il2cpp_codegen_runtime_class_init_inline(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var);
		String_t* L_0 = (&((ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var))->___Data_3)->___PartnerName_1;
		String_t* L_1;
		L_1 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral835ED243945FBB19DD726B0EF7BB1DA88CB136BD, L_0, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var);
		SDKLogger_Log_m8ED1747BB3207EDDE7E5CB797CE23DA17B1A15F1(_stringLiteralEDFB5040A941F0738AC3F929557E0C633CD42EB8, L_1, NULL);
		// SDKLogger.Log(TAG, $"SDK Version: <color=green>{Data.SDKVersion}</color>");
		String_t* L_2 = (&((ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var))->___Data_3)->___SDKVersion_0;
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral9A7C8DAFE9962F8553C59F15CFAE8A8D84DF034C, L_2, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		SDKLogger_Log_m8ED1747BB3207EDDE7E5CB797CE23DA17B1A15F1(_stringLiteralEDFB5040A941F0738AC3F929557E0C633CD42EB8, L_3, NULL);
		// SDKLogger.Log(TAG, $"Unity Version: <color=green>{Data.UnityVersion}</color>");
		String_t* L_4 = (&((ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var))->___Data_3)->___UnityVersion_2;
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral06AE8FF65C95C6C753AEE4FF49E57BA9A977345C, L_4, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		SDKLogger_Log_m8ED1747BB3207EDDE7E5CB797CE23DA17B1A15F1(_stringLiteralEDFB5040A941F0738AC3F929557E0C633CD42EB8, L_5, NULL);
		// SDKLogger.Log(TAG, $"Unity Platform: <color=green>{Data.UnityPlatform}</color>");
		String_t* L_6 = (&((ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var))->___Data_3)->___UnityPlatform_3;
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8AD33D38D1C09E8EBFE8B002995497F1407B29F6, L_6, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		SDKLogger_Log_m8ED1747BB3207EDDE7E5CB797CE23DA17B1A15F1(_stringLiteralEDFB5040A941F0738AC3F929557E0C633CD42EB8, L_7, NULL);
		// SDKLogger.Log(TAG, $"Unity Render Pipeline: <color=green>{Data.RenderPipeline}</color>");
		String_t* L_8 = (&((ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var))->___Data_3)->___RenderPipeline_4;
		String_t* L_9;
		L_9 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralDCE27EB9C94E5B3220A096FCCBFBD8435E3AC5A3, L_8, _stringLiteralCBE844AF922BC0AC1AB4CA94466DC7FD7038D0E2, NULL);
		SDKLogger_Log_m8ED1747BB3207EDDE7E5CB797CE23DA17B1A15F1(_stringLiteralEDFB5040A941F0738AC3F929557E0C633CD42EB8, L_9, NULL);
		// }
		return;
	}
}
// ReadyPlayerMe.Core.AppData ReadyPlayerMe.Core.ApplicationData::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822 ApplicationData_GetData_mE33F99530E811BC0D85D33CE0CE24B7A5CD02E8B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Data;
		il2cpp_codegen_runtime_class_init_inline(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var);
		AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822 L_0 = ((ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var))->___Data_3;
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
// System.Collections.Generic.Dictionary`2<System.String,System.String> ReadyPlayerMe.Core.CommonHeaders::GetRequestHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* CommonHeaders_GetRequestHeaders_m8FE9ED83BE2E97D2C2A06C3C16AFA2D4429EB728 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01DB3F55FFDCCF88D625086C4E56A81D3561269B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F0F7027CE72E908C45686CFE540738521E8BC70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F05EEFC3B0A47CFAFAA4FA1D1C639FB83DE4FC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BE8D3B98CAA0ADD3D8F1E19358198CC1CE555C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB180D04A7BD569BEDDBACD727E3DB10937C35022);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2501285DA6895C43F81A426A8C28EF7BA40D44E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3D1CE8699582E73919090503E2BA67718C39EE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	String_t* G_B4_2 = NULL;
	{
		// var source = UNITY_PREFIX + SEPARATOR;
		V_0 = _stringLiteralB2501285DA6895C43F81A426A8C28EF7BA40D44E;
		// if (Application.isEditor)
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		// source += EDITOR + SEPARATOR + (Application.isPlaying ? PLAYMODE : EDITMODE);
		String_t* L_1 = V_0;
		bool L_2;
		L_2 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		G_B2_0 = _stringLiteral01DB3F55FFDCCF88D625086C4E56A81D3561269B;
		G_B2_1 = L_1;
		if (L_2)
		{
			G_B3_0 = _stringLiteral01DB3F55FFDCCF88D625086C4E56A81D3561269B;
			G_B3_1 = L_1;
			goto IL_0021;
		}
	}
	{
		G_B4_0 = _stringLiteral9BE8D3B98CAA0ADD3D8F1E19358198CC1CE555C4;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0026;
	}

IL_0021:
	{
		G_B4_0 = _stringLiteralD3D1CE8699582E73919090503E2BA67718C39EE1;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0026:
	{
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B4_2, G_B4_1, G_B4_0, NULL);
		V_0 = L_3;
		goto IL_003a;
	}

IL_002e:
	{
		// source += RUNTIME;
		String_t* L_4 = V_0;
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_4, _stringLiteral2F0F7027CE72E908C45686CFE540738521E8BC70, NULL);
		V_0 = L_5;
	}

IL_003a:
	{
		// return new Dictionary<string, string>
		// {
		//     { RPM_SOURCE, source },
		//     { RPM_SDK_VERSION, ApplicationData.GetData().SDKVersion }
		// };
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_6, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = L_6;
		String_t* L_8 = V_0;
		NullCheck(L_7);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_7, _stringLiteral5F05EEFC3B0A47CFAFAA4FA1D1C639FB83DE4FC0, L_8, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_9 = L_7;
		il2cpp_codegen_runtime_class_init_inline(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var);
		AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822 L_10;
		L_10 = ApplicationData_GetData_mE33F99530E811BC0D85D33CE0CE24B7A5CD02E8B_inline(NULL);
		String_t* L_11 = L_10.___SDKVersion_0;
		NullCheck(L_9);
		Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13(L_9, _stringLiteralB180D04A7BD569BEDDBACD727E3DB10937C35022, L_11, Dictionary_2_Add_mC78C20D5901C87AAC38F37C906FAB6946BDE5F13_RuntimeMethod_var);
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
// ReadyPlayerMe.Core.Data.CoreSettings ReadyPlayerMe.Core.CoreSettingsHandler::get_CoreSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987* CoreSettingsHandler_get_CoreSettings_mE40D4EC43702978F60275C450F26275DE0D5A2A8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreSettingsHandler_tA6F472F8E8DA4AE7B85E6B843FEF370962F967B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisCoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987_mCC99FBD57E0BC58DFC5B44C4C64E85CA6C4470BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE0A32654E5E1A4A07E385F8453C9576529E8B2D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (coreSettings == null)
		CoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987* L_0 = ((CoreSettingsHandler_tA6F472F8E8DA4AE7B85E6B843FEF370962F967B6_StaticFields*)il2cpp_codegen_static_fields_for(CoreSettingsHandler_tA6F472F8E8DA4AE7B85E6B843FEF370962F967B6_il2cpp_TypeInfo_var))->___coreSettings_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// coreSettings = Resources.Load<CoreSettings>(SETTINGS_PATH);
		CoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987* L_2;
		L_2 = Resources_Load_TisCoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987_mCC99FBD57E0BC58DFC5B44C4C64E85CA6C4470BA(_stringLiteralDE0A32654E5E1A4A07E385F8453C9576529E8B2D, Resources_Load_TisCoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987_mCC99FBD57E0BC58DFC5B44C4C64E85CA6C4470BA_RuntimeMethod_var);
		((CoreSettingsHandler_tA6F472F8E8DA4AE7B85E6B843FEF370962F967B6_StaticFields*)il2cpp_codegen_static_fields_for(CoreSettingsHandler_tA6F472F8E8DA4AE7B85E6B843FEF370962F967B6_il2cpp_TypeInfo_var))->___coreSettings_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((CoreSettingsHandler_tA6F472F8E8DA4AE7B85E6B843FEF370962F967B6_StaticFields*)il2cpp_codegen_static_fields_for(CoreSettingsHandler_tA6F472F8E8DA4AE7B85E6B843FEF370962F967B6_il2cpp_TypeInfo_var))->___coreSettings_1), (void*)L_2);
	}

IL_001c:
	{
		// return coreSettings;
		CoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987* L_3 = ((CoreSettingsHandler_tA6F472F8E8DA4AE7B85E6B843FEF370962F967B6_StaticFields*)il2cpp_codegen_static_fields_for(CoreSettingsHandler_tA6F472F8E8DA4AE7B85E6B843FEF370962F967B6_il2cpp_TypeInfo_var))->___coreSettings_1;
		return L_3;
	}
}
// System.Void ReadyPlayerMe.Core.CoreSettingsHandler::SaveSubDomain(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreSettingsHandler_SaveSubDomain_m5F4FBE1293A1A5F2E6E2891722AA30CDA8A96939 (String_t* ___0_subDomain, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreSettingsHandler_tA6F472F8E8DA4AE7B85E6B843FEF370962F967B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// coreSettings.Subdomain = subDomain;
		CoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987* L_0 = ((CoreSettingsHandler_tA6F472F8E8DA4AE7B85E6B843FEF370962F967B6_StaticFields*)il2cpp_codegen_static_fields_for(CoreSettingsHandler_tA6F472F8E8DA4AE7B85E6B843FEF370962F967B6_il2cpp_TypeInfo_var))->___coreSettings_1;
		String_t* L_1 = ___0_subDomain;
		NullCheck(L_0);
		L_0->___Subdomain_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___Subdomain_4), (void*)L_1);
		// Save();
		CoreSettingsHandler_Save_m0375B4E5ABCA41C77358310AEBF4294A3DACE652(NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.Core.CoreSettingsHandler::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreSettingsHandler_Save_m0375B4E5ABCA41C77358310AEBF4294A3DACE652 (const RuntimeMethod* method) 
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
// System.Boolean ReadyPlayerMe.Core.Response::get_IsSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Response_get_IsSuccess_m59B75AF843BFFB4FACE85643145DFA29580EBE7F (Response_tD890E74C8ADF0C3525BD7AACD01EFEADD4B451B5* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSuccess { get; set; }
		bool L_0 = __this->___U3CIsSuccessU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.Core.Response::set_IsSuccess(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Response_set_IsSuccess_m6ED44A8D71F5F0FB52651F168143A13952665965 (Response_tD890E74C8ADF0C3525BD7AACD01EFEADD4B451B5* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsSuccess { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CIsSuccessU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.String ReadyPlayerMe.Core.Response::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Response_get_Error_m74AAAD55D948F0AF9674F3A6ED4CC92861753BC6 (Response_tD890E74C8ADF0C3525BD7AACD01EFEADD4B451B5* __this, const RuntimeMethod* method) 
{
	{
		// public string Error { get;  set; }
		String_t* L_0 = __this->___U3CErrorU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.Core.Response::set_Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Response_set_Error_mAE9AE5B191FD2DD21BB5CCFC9D8DB401BFCD5DC7 (Response_tD890E74C8ADF0C3525BD7AACD01EFEADD4B451B5* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Error { get;  set; }
		String_t* L_0 = ___0_value;
		__this->___U3CErrorU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Int64 ReadyPlayerMe.Core.Response::get_ResponseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Response_get_ResponseCode_m9D8E615970578DB348CC961F4D3701C52F9403D7 (Response_tD890E74C8ADF0C3525BD7AACD01EFEADD4B451B5* __this, const RuntimeMethod* method) 
{
	{
		// public long ResponseCode { get; set; }
		int64_t L_0 = __this->___U3CResponseCodeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.Core.Response::set_ResponseCode(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Response_set_ResponseCode_m009926677C385469032E8B6A53E03D823A7A9C72 (Response_tD890E74C8ADF0C3525BD7AACD01EFEADD4B451B5* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public long ResponseCode { get; set; }
		int64_t L_0 = ___0_value;
		__this->___U3CResponseCodeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void ReadyPlayerMe.Core.Response::Parse(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Response_Parse_m93C02F462B9C8BBB9E6E858B9BCAD310D9C08166 (Response_tD890E74C8ADF0C3525BD7AACD01EFEADD4B451B5* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (request.downloadHandler is DownloadHandlerFile)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___0_request;
		NullCheck(L_0);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_1;
		L_1 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_0, NULL);
		if (!((DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902*)IsInstSealed((RuntimeObject*)L_1, DownloadHandlerFile_tD1342A7B8173C9ECC7B3BB9E1A7631D7AEFBD902_il2cpp_TypeInfo_var)))
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
		// Text = request.downloadHandler.text;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = ___0_request;
		NullCheck(L_2);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_3;
		L_3 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_3, NULL);
		__this->___Text_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Text_0), (void*)L_4);
		// Data = request.downloadHandler.data;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = ___0_request;
		NullCheck(L_5);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_6;
		L_6 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_5, NULL);
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = DownloadHandler_get_data_m1DC9B4514B12939B090028BF28C6BEF21DE9B6F3(L_6, NULL);
		__this->___Data_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_1), (void*)L_7);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.Core.Response::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Response__ctor_m3BB4C3CFAE0B70ABCB9AF30B8D03B088114F20C6 (Response_tD890E74C8ADF0C3525BD7AACD01EFEADD4B451B5* __this, const RuntimeMethod* method) 
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
// System.Boolean ReadyPlayerMe.Core.ResponseFile::get_IsSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResponseFile_get_IsSuccess_m279FC70AA01851C31EFD1E1C95C114681445FD57 (ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSuccess { get;  set; }
		bool L_0 = __this->___U3CIsSuccessU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.Core.ResponseFile::set_IsSuccess(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseFile_set_IsSuccess_m7A4059E97A833ACE0C8E183EAB27958E495F15F8 (ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsSuccess { get;  set; }
		bool L_0 = ___0_value;
		__this->___U3CIsSuccessU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.String ReadyPlayerMe.Core.ResponseFile::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseFile_get_Error_mD25B4F2283229A311660B8D911D684A4469BA570 (ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* __this, const RuntimeMethod* method) 
{
	{
		// public string Error { get;  set; }
		String_t* L_0 = __this->___U3CErrorU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.Core.ResponseFile::set_Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseFile_set_Error_m8D29F50E5BCC01552144E1EAEFB15F6E23ADAA12 (ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Error { get;  set; }
		String_t* L_0 = ___0_value;
		__this->___U3CErrorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Int64 ReadyPlayerMe.Core.ResponseFile::get_ResponseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ResponseFile_get_ResponseCode_mD1BF19AA2E013266C9AF6DDA0C6374A2C016C1A1 (ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* __this, const RuntimeMethod* method) 
{
	{
		// public long ResponseCode { get; set; }
		int64_t L_0 = __this->___U3CResponseCodeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.Core.ResponseFile::set_ResponseCode(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseFile_set_ResponseCode_m9BBDD8CEC2F322F839A1C732D4D155BFF3D7A124 (ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public long ResponseCode { get; set; }
		int64_t L_0 = ___0_value;
		__this->___U3CResponseCodeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Byte[] ReadyPlayerMe.Core.ResponseFile::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ResponseFile_get_Data_mB1B9755C6AC743C9440E159767C9A1BED07CEE9B (ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* __this, const RuntimeMethod* method) 
{
	{
		// public byte[] Data { get; private set; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CDataU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.Core.ResponseFile::set_Data(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseFile_set_Data_mCDCF8D7C25015879B6AC9E7613BF35FE37F99D4F (ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		// public byte[] Data { get; private set; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void ReadyPlayerMe.Core.ResponseFile::Parse(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseFile_Parse_m76BBD040C2BCF1D9AA29B2FA906D72BEC5F5A3A4 (ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_request, const RuntimeMethod* method) 
{
	{
		// length = request.downloadedBytes;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___0_request;
		NullCheck(L_0);
		uint64_t L_1;
		L_1 = UnityWebRequest_get_downloadedBytes_m73E3EC726E417FC7F983FFEF9566CF380F322610(L_0, NULL);
		__this->___length_4 = L_1;
		// }
		return;
	}
}
// System.Threading.Tasks.Task ReadyPlayerMe.Core.ResponseFile::ReadFile(System.String,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ResponseFile_ReadFile_mB7A4EECEA15765E2B2AA7E12CAE6F9F289F0ABBD (ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* __this, String_t* ___0_path, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_token, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084_m0B73DBB424E23E018F46D32AEF8A8B273880854D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_0;
		L_0 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		String_t* L_1 = ___0_path;
		(&V_0)->___path_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___path_3), (void*)L_1);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___1_token;
		(&V_0)->___token_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___token_4))->____source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_3 = (&(&V_0)->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084_m0B73DBB424E23E018F46D32AEF8A8B273880854D(L_3, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084_m0B73DBB424E23E018F46D32AEF8A8B273880854D_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_4 = (&(&V_0)->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_4, NULL);
		return L_5;
	}
}
// System.Void ReadyPlayerMe.Core.ResponseFile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseFile__ctor_m36260F6110115D2EB42DB6B80E344E0D9F7495BA (ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* __this, const RuntimeMethod* method) 
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
// System.Void ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFileU3Ed__18_MoveNext_mB23CAE221CF0F900EC78A41005E19023DE6317C7 (U3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084_mA29690A889B77E2C90970F88B2DEB0E28852F3F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* V_1 = NULL;
	YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A V_2;
	memset((&V_2), 0, sizeof(V_2));
	YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0075_1;
			}
		}
		{
			// var byteLength = (long) length;
			ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* L_3 = V_1;
			NullCheck(L_3);
			uint64_t L_4 = L_3->___length_4;
			__this->___U3CbyteLengthU3E5__2_5 = L_4;
			// var info = new FileInfo(path);
			String_t* L_5 = __this->___path_3;
			FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_6 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)il2cpp_codegen_object_new(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			FileInfo__ctor_m0A602529DFCFC44BB4EF4C530E6FBA765C44143F(L_6, L_5, NULL);
			__this->___U3CinfoU3E5__3_6 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinfoU3E5__3_6), (void*)L_6);
			goto IL_0098_1;
		}

IL_0030_1:
		{
			// info.Refresh();
			FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_7 = __this->___U3CinfoU3E5__3_6;
			NullCheck(L_7);
			FileSystemInfo_Refresh_m9D62ECF4E68302D02B3F2060AD17C0D5572C8E99(L_7, NULL);
			// await Task.Yield();
			il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
			YieldAwaitable_tFEA898DB9022A953958C3CF531E1477D135D3DAB L_8;
			L_8 = Task_Yield_m27EE257EF53788244C5B2E874C514C24C693F9B1(NULL);
			V_3 = L_8;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_9;
			L_9 = YieldAwaitable_GetAwaiter_m359A05B8C1B9F3F1E9CAE29AD231C0987718DE5E((&V_3), NULL);
			V_2 = L_9;
			bool L_10;
			L_10 = YieldAwaiter_get_IsCompleted_m783B6E67654FDBF490A65AC59972AF6B985A9286((&V_2), NULL);
			if (L_10)
			{
				goto IL_0091_1;
			}
		}
		{
			int32_t L_11 = 0;
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_12 = V_2;
			__this->___U3CU3Eu__1_7 = L_12;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_13 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084_mA29690A889B77E2C90970F88B2DEB0E28852F3F9(L_13, (&V_2), __this, AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisYieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A_TisU3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084_mA29690A889B77E2C90970F88B2DEB0E28852F3F9_RuntimeMethod_var);
			goto IL_0117;
		}

IL_0075_1:
		{
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A L_14 = __this->___U3CU3Eu__1_7;
			V_2 = L_14;
			YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A* L_15 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_15, sizeof(YieldAwaiter_t5F0A81DC85227C01FFC38D53139B5C19D920B52A));
			int32_t L_16 = (-1);
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
		}

IL_0091_1:
		{
			YieldAwaiter_GetResult_m83C9B35D4BBEB09AC5B560912436454D69794F07((&V_2), NULL);
		}

IL_0098_1:
		{
			// while (info.Length != byteLength && !token.IsCancellationRequested)
			FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_17 = __this->___U3CinfoU3E5__3_6;
			NullCheck(L_17);
			int64_t L_18;
			L_18 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_17, NULL);
			int64_t L_19 = __this->___U3CbyteLengthU3E5__2_5;
			if ((((int64_t)L_18) == ((int64_t)L_19)))
			{
				goto IL_00bb_1;
			}
		}
		{
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_20 = (&__this->___token_4);
			bool L_21;
			L_21 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_20, NULL);
			if (!L_21)
			{
				goto IL_0030_1;
			}
		}

IL_00bb_1:
		{
			// if (token.IsCancellationRequested)
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_22 = (&__this->___token_4);
			bool L_23;
			L_23 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_22, NULL);
			if (!L_23)
			{
				goto IL_00ca_1;
			}
		}
		{
			// return;
			goto IL_00fd;
		}

IL_00ca_1:
		{
			// Data = File.ReadAllBytes(path);
			ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* L_24 = V_1;
			String_t* L_25 = __this->___path_3;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
			L_26 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_25, NULL);
			NullCheck(L_24);
			ResponseFile_set_Data_mCDCF8D7C25015879B6AC9E7613BF35FE37F99D4F_inline(L_24, L_26, NULL);
			goto IL_00fd;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00dd;
		}
		throw e;
	}

CATCH_00dd:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CinfoU3E5__3_6 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinfoU3E5__3_6), (void*)(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_27 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_28 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_27, L_28, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0117;
	}// end catch (depth: 1)

IL_00fd:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CinfoU3E5__3_6 = (FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinfoU3E5__3_6), (void*)(FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_29 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_29, NULL);
	}

IL_0117:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadFileU3Ed__18_MoveNext_mB23CAE221CF0F900EC78A41005E19023DE6317C7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084*>(__this + _offset);
	U3CReadFileU3Ed__18_MoveNext_mB23CAE221CF0F900EC78A41005E19023DE6317C7(_thisAdjusted, method);
}
// System.Void ReadyPlayerMe.Core.ResponseFile/<ReadFile>d__18::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReadFileU3Ed__18_SetStateMachine_m502AF3A0A6C2C1E61DC0A8E871539E48D28D97FE (U3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_0 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncTaskMethodBuilder_SetStateMachine_mE52B5B6B076025592A7AB462E3D26FA434AEB795(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CReadFileU3Ed__18_SetStateMachine_m502AF3A0A6C2C1E61DC0A8E871539E48D28D97FE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CReadFileU3Ed__18_tA30DD7C6D6911EB65BB235F0F2BBF20C87188084*>(__this + _offset);
	U3CReadFileU3Ed__18_SetStateMachine_m502AF3A0A6C2C1E61DC0A8E871539E48D28D97FE(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean ReadyPlayerMe.Core.ResponseTexture::get_IsSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResponseTexture_get_IsSuccess_mBE196F231C5932A84B591B6C491E4D5982BA0EDA (ResponseTexture_tBFA6BE3C82EED0B009EC64F1CD03BF1420C61AA9* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSuccess { get; set; }
		bool L_0 = __this->___U3CIsSuccessU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.Core.ResponseTexture::set_IsSuccess(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseTexture_set_IsSuccess_m8ABB5BCA16E6C14018EFB3E2202B0A2EAD339A83 (ResponseTexture_tBFA6BE3C82EED0B009EC64F1CD03BF1420C61AA9* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsSuccess { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CIsSuccessU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String ReadyPlayerMe.Core.ResponseTexture::get_Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResponseTexture_get_Error_mFC5F2B83001CF4F7A5C9DD19145C785BEC3B5A05 (ResponseTexture_tBFA6BE3C82EED0B009EC64F1CD03BF1420C61AA9* __this, const RuntimeMethod* method) 
{
	{
		// public string Error { get; set; }
		String_t* L_0 = __this->___U3CErrorU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.Core.ResponseTexture::set_Error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseTexture_set_Error_m72B62455021E5FA4A62F60261D30C0080CC9BD6A (ResponseTexture_tBFA6BE3C82EED0B009EC64F1CD03BF1420C61AA9* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string Error { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CErrorU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CErrorU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Int64 ReadyPlayerMe.Core.ResponseTexture::get_ResponseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ResponseTexture_get_ResponseCode_m3A976E9FD15DA8F2185AD6336242A065A5AE2FA1 (ResponseTexture_tBFA6BE3C82EED0B009EC64F1CD03BF1420C61AA9* __this, const RuntimeMethod* method) 
{
	{
		// public long ResponseCode { get; set; }
		int64_t L_0 = __this->___U3CResponseCodeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.Core.ResponseTexture::set_ResponseCode(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseTexture_set_ResponseCode_m725280DA06FBE83648C2353AAF818147B943C546 (ResponseTexture_tBFA6BE3C82EED0B009EC64F1CD03BF1420C61AA9* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public long ResponseCode { get; set; }
		int64_t L_0 = ___0_value;
		__this->___U3CResponseCodeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Void ReadyPlayerMe.Core.ResponseTexture::Parse(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseTexture_Parse_m7EADB503006B64BD14E41A80D7462718DF55CEDB (ResponseTexture_tBFA6BE3C82EED0B009EC64F1CD03BF1420C61AA9* __this, UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_request, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (IsSuccess)
		bool L_0;
		L_0 = ResponseTexture_get_IsSuccess_mBE196F231C5932A84B591B6C491E4D5982BA0EDA_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// Texture = ((DownloadHandlerTexture) request.downloadHandler).texture;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_1 = ___0_request;
		NullCheck(L_1);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_2;
		L_2 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_1, NULL);
		NullCheck(((DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C*)CastclassSealed((RuntimeObject*)L_2, DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_il2cpp_TypeInfo_var)));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_3;
		L_3 = DownloadHandlerTexture_get_texture_m170B5539995EB5984E98E426F52983589F7BEB7C(((DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C*)CastclassSealed((RuntimeObject*)L_2, DownloadHandlerTexture_t45E2D719000AA1594E648810F0B57A77FA7C568C_il2cpp_TypeInfo_var)), NULL);
		__this->___Texture_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Texture_0), (void*)L_3);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.Core.ResponseTexture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponseTexture__ctor_mC5A625C2E2CFF7277238EADDEB4E6B549D0555BF (ResponseTexture_tBFA6BE3C82EED0B009EC64F1CD03BF1420C61AA9* __this, const RuntimeMethod* method) 
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
// System.Void ReadyPlayerMe.Core.Context::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Context__ctor_mCF092007614DB1529773D080FBBC6095E1843B75 (Context_tC31585490FEB4D076A0C34DB4AF4F97F6E4D4431* __this, const RuntimeMethod* method) 
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
// System.Void ReadyPlayerMe.Core.CustomLogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomLogHandler_LogFormat_mAB2F1B0F22EE83A40B958249231652452BB8273F (CustomLogHandler_t68F4AB2646B10612D0328F12B703B1B4CA94A36E* __this, int32_t ___0_logType, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, String_t* ___2_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___3_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogHandler_tC139ADEB099E63CFA289F310D4BE306E16B5EAE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C16226522862D84ADEF33A5EECAA1EC73C4739B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// logHandler.LogFormat(logType, context, $"[{CONTEXT}] {format}", args);
		RuntimeObject* L_0 = __this->___logHandler_1;
		int32_t L_1 = ___0_logType;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___1_context;
		String_t* L_3 = ___2_format;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral6C16226522862D84ADEF33A5EECAA1EC73C4739B, L_3, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ___3_args;
		NullCheck(L_0);
		InterfaceActionInvoker4< int32_t, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(0 /* System.Void UnityEngine.ILogHandler::LogFormat(UnityEngine.LogType,UnityEngine.Object,System.String,System.Object[]) */, ILogHandler_tC139ADEB099E63CFA289F310D4BE306E16B5EAE1_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_4, L_5);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.Core.CustomLogHandler::LogException(System.Exception,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomLogHandler_LogException_mDE538A31E54A73B85D5013209AD5BDE30C513D0C (CustomLogHandler_t68F4AB2646B10612D0328F12B703B1B4CA94A36E* __this, Exception_t* ___0_exception, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogHandler_tC139ADEB099E63CFA289F310D4BE306E16B5EAE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// logHandler.LogException(exception, context);
		RuntimeObject* L_0 = __this->___logHandler_1;
		Exception_t* L_1 = ___0_exception;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_2 = ___1_context;
		NullCheck(L_0);
		InterfaceActionInvoker2< Exception_t*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* >::Invoke(1 /* System.Void UnityEngine.ILogHandler::LogException(System.Exception,UnityEngine.Object) */, ILogHandler_tC139ADEB099E63CFA289F310D4BE306E16B5EAE1_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.Core.CustomLogHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomLogHandler__ctor_mA2732E37E77F9F89C189C869CB99AD62EF95B774 (CustomLogHandler_t68F4AB2646B10612D0328F12B703B1B4CA94A36E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly ILogHandler logHandler = Debug.unityLogger.logHandler;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.ILogHandler UnityEngine.ILogger::get_logHandler() */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0);
		__this->___logHandler_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___logHandler_1), (void*)L_1);
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
// System.Void ReadyPlayerMe.Core.SDKLogger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKLogger__cctor_mC8D0E68F8C0BDB4DF9826502205EC9F985ABC2F7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomLogHandler_t68F4AB2646B10612D0328F12B703B1B4CA94A36E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logger_t608FFEA1E140B6BE2CCB01C86ACB219533C172A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly Logger AvatarLoaderLogger = new Logger(new CustomLogHandler());
		CustomLogHandler_t68F4AB2646B10612D0328F12B703B1B4CA94A36E* L_0 = (CustomLogHandler_t68F4AB2646B10612D0328F12B703B1B4CA94A36E*)il2cpp_codegen_object_new(CustomLogHandler_t68F4AB2646B10612D0328F12B703B1B4CA94A36E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CustomLogHandler__ctor_mA2732E37E77F9F89C189C869CB99AD62EF95B774(L_0, NULL);
		Logger_t608FFEA1E140B6BE2CCB01C86ACB219533C172A0* L_1 = (Logger_t608FFEA1E140B6BE2CCB01C86ACB219533C172A0*)il2cpp_codegen_object_new(Logger_t608FFEA1E140B6BE2CCB01C86ACB219533C172A0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Logger__ctor_m3155E21A68AA616431A260A3FCBB4B074DF6FAA2(L_1, L_0, NULL);
		((SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_StaticFields*)il2cpp_codegen_static_fields_for(SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var))->___AvatarLoaderLogger_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_StaticFields*)il2cpp_codegen_static_fields_for(SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var))->___AvatarLoaderLogger_0), (void*)L_1);
		// loggingEnabled = IsLoggingEnabled();
		bool L_2;
		L_2 = SDKLogger_IsLoggingEnabled_mE614033301F5BAD7C73729D1D915BD7C33D1BA5C(NULL);
		((SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_StaticFields*)il2cpp_codegen_static_fields_for(SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var))->___loggingEnabled_1 = L_2;
		// }
		return;
	}
}
// System.Boolean ReadyPlayerMe.Core.SDKLogger::IsLoggingEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SDKLogger_IsLoggingEnabled_mE614033301F5BAD7C73729D1D915BD7C33D1BA5C (const RuntimeMethod* method) 
{
	{
		// return CoreSettingsHandler.CoreSettings.EnableLogging;
		CoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987* L_0;
		L_0 = CoreSettingsHandler_get_CoreSettings_mE40D4EC43702978F60275C450F26275DE0D5A2A8(NULL);
		NullCheck(L_0);
		bool L_1 = L_0->___EnableLogging_5;
		return L_1;
	}
}
// System.Void ReadyPlayerMe.Core.SDKLogger::EnableLogging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKLogger_EnableLogging_mACC30ED6B2C97D6C18BF92A8F7759A80C659454C (bool ___0_enabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// loggingEnabled = enabled;
		bool L_0 = ___0_enabled;
		il2cpp_codegen_runtime_class_init_inline(SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var);
		((SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_StaticFields*)il2cpp_codegen_static_fields_for(SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var))->___loggingEnabled_1 = L_0;
		// CoreSettingsHandler.CoreSettings.EnableLogging = loggingEnabled;
		CoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987* L_1;
		L_1 = CoreSettingsHandler_get_CoreSettings_mE40D4EC43702978F60275C450F26275DE0D5A2A8(NULL);
		bool L_2 = ((SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_StaticFields*)il2cpp_codegen_static_fields_for(SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var))->___loggingEnabled_1;
		NullCheck(L_1);
		L_1->___EnableLogging_5 = L_2;
		// CoreSettingsHandler.Save();
		CoreSettingsHandler_Save_m0375B4E5ABCA41C77358310AEBF4294A3DACE652(NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.Core.SDKLogger::Log(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKLogger_Log_m8ED1747BB3207EDDE7E5CB797CE23DA17B1A15F1 (String_t* ___0_tag, RuntimeObject* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (loggingEnabled)
		il2cpp_codegen_runtime_class_init_inline(SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var);
		bool L_0 = ((SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_StaticFields*)il2cpp_codegen_static_fields_for(SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var))->___loggingEnabled_1;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// AvatarLoaderLogger.Log(tag, message);
		il2cpp_codegen_runtime_class_init_inline(SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var);
		Logger_t608FFEA1E140B6BE2CCB01C86ACB219533C172A0* L_1 = ((SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_StaticFields*)il2cpp_codegen_static_fields_for(SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var))->___AvatarLoaderLogger_0;
		String_t* L_2 = ___0_tag;
		RuntimeObject* L_3 = ___1_message;
		NullCheck(L_1);
		Logger_Log_m8C4EFCE792FEBE0C95EABB00055028FC7776C4DB(L_1, L_2, L_3, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.Core.SDKLogger::LogWarning(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SDKLogger_LogWarning_m296702240E8291BA9F9A9E2DB57D1CE8FCC79AC3 (String_t* ___0_tag, RuntimeObject* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (loggingEnabled)
		il2cpp_codegen_runtime_class_init_inline(SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var);
		bool L_0 = ((SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_StaticFields*)il2cpp_codegen_static_fields_for(SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var))->___loggingEnabled_1;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// AvatarLoaderLogger.LogWarning(tag, message);
		il2cpp_codegen_runtime_class_init_inline(SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var);
		Logger_t608FFEA1E140B6BE2CCB01C86ACB219533C172A0* L_1 = ((SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_StaticFields*)il2cpp_codegen_static_fields_for(SDKLogger_tECB439798B2FE6F0CB174A13DDF03B9EFE9A0F25_il2cpp_TypeInfo_var))->___AvatarLoaderLogger_0;
		String_t* L_2 = ___0_tag;
		RuntimeObject* L_3 = ___1_message;
		NullCheck(L_1);
		Logger_LogWarning_mAB43EC8EC22367598AE47AA65848721310E4C21F(L_1, L_2, L_3, NULL);
	}

IL_0013:
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
// System.Void ReadyPlayerMe.Core.RuntimeDebugPanel::ToggleShowDebugPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeDebugPanel_ToggleShowDebugPanel_mB59BA4C35175B5D265AF21ABAD9ACAA38F6B4766 (RuntimeDebugPanel_t51E1F57EB2344DC77C5ABF810ACEA8A789DCFBFC* __this, const RuntimeMethod* method) 
{
	{
		// showDebugPanel = !showDebugPanel;
		bool L_0 = __this->___showDebugPanel_4;
		__this->___showDebugPanel_4 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.Core.RuntimeDebugPanel::TogglePauseLogOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeDebugPanel_TogglePauseLogOutput_m2C5A5778635B2A8CF144FF01138AB33143F51167 (RuntimeDebugPanel_t51E1F57EB2344DC77C5ABF810ACEA8A789DCFBFC* __this, const RuntimeMethod* method) 
{
	{
		// pauseLogOutput = !pauseLogOutput;
		bool L_0 = __this->___pauseLogOutput_5;
		__this->___pauseLogOutput_5 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.Core.RuntimeDebugPanel::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeDebugPanel_Awake_m27325AE10F682073BD25F011C486C24F3A67E858 (RuntimeDebugPanel_t51E1F57EB2344DC77C5ABF810ACEA8A789DCFBFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeDebugPanel_HandleLog_mB1A5627870CCA3400EBF2246D6B51014002D1B20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// InitialiseDebugPanel();
		RuntimeDebugPanel_InitialiseDebugPanel_mCE608F97CC7E431F5D00FE3308FFFDE415B87DAB(__this, NULL);
		// Application.logMessageReceived += HandleLog;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)RuntimeDebugPanel_HandleLog_mB1A5627870CCA3400EBF2246D6B51014002D1B20_RuntimeMethod_var), NULL);
		Application_add_logMessageReceived_mE45B1D93B44D26B8FE979595D5346FC8C7B8E38C(L_0, NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.Core.RuntimeDebugPanel::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeDebugPanel_OnDisable_mF44039F537F34F2927C84475D41876386A93A9ED (RuntimeDebugPanel_t51E1F57EB2344DC77C5ABF810ACEA8A789DCFBFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeDebugPanel_HandleLog_mB1A5627870CCA3400EBF2246D6B51014002D1B20_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.logMessageReceived -= HandleLog;
		LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413* L_0 = (LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413*)il2cpp_codegen_object_new(LogCallback_tCFFF3C009186124A6A83A1E6BB7E360C5674C413_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		LogCallback__ctor_m327A4C69691F8A4B01D405858E48B8A7D9D2A79D(L_0, __this, (intptr_t)((void*)RuntimeDebugPanel_HandleLog_mB1A5627870CCA3400EBF2246D6B51014002D1B20_RuntimeMethod_var), NULL);
		Application_remove_logMessageReceived_m559439A73DD283295DE44A21F6D3C92D157777CC(L_0, NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.Core.RuntimeDebugPanel::InitialiseDebugPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeDebugPanel_InitialiseDebugPanel_mCE608F97CC7E431F5D00FE3308FFFDE415B87DAB (RuntimeDebugPanel_t51E1F57EB2344DC77C5ABF810ACEA8A789DCFBFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m3760E34E543A1FBDA2C1A9B2839BC7C431B9D9CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mEA427FC769777823ABF038FF8E80D5F1F0F8B839_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// logScrollRect = GetComponentInChildren<ScrollRect>(true);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0;
		L_0 = Component_GetComponentInChildren_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m3760E34E543A1FBDA2C1A9B2839BC7C431B9D9CB(__this, (bool)1, Component_GetComponentInChildren_TisScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E_m3760E34E543A1FBDA2C1A9B2839BC7C431B9D9CB_RuntimeMethod_var);
		__this->___logScrollRect_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___logScrollRect_7), (void*)L_0);
		// logTextUI = GetComponentInChildren<Text>(true);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mEA427FC769777823ABF038FF8E80D5F1F0F8B839(__this, (bool)1, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mEA427FC769777823ABF038FF8E80D5F1F0F8B839_RuntimeMethod_var);
		__this->___logTextUI_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___logTextUI_6), (void*)L_1);
		// UpdateDebugPanel();
		RuntimeDebugPanel_UpdateDebugPanel_m2DB01D3D950F5AA4E9DC41BA3198454571C85F3A(__this, NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.Core.RuntimeDebugPanel::UpdateDebugPanel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeDebugPanel_UpdateDebugPanel_m2DB01D3D950F5AA4E9DC41BA3198454571C85F3A (RuntimeDebugPanel_t51E1F57EB2344DC77C5ABF810ACEA8A789DCFBFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (logTextUI) logTextUI.text = currentLogOutput;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___logTextUI_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if (logTextUI) logTextUI.text = currentLogOutput;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___logTextUI_6;
		String_t* L_3 = __this->___currentLogOutput_8;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
	}

IL_001e:
	{
		// logCount++;
		int32_t L_4 = __this->___logCount_9;
		__this->___logCount_9 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// ScrollToBottom();
		RuntimeDebugPanel_ScrollToBottom_m2D53E2767099B5D3EC6862F917EA04ACC15CC5D4(__this, NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.Core.RuntimeDebugPanel::HandleLog(System.String,System.String,UnityEngine.LogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeDebugPanel_HandleLog_mB1A5627870CCA3400EBF2246D6B51014002D1B20 (RuntimeDebugPanel_t51E1F57EB2344DC77C5ABF810ACEA8A789DCFBFC* __this, String_t* ___0_logString, String_t* ___1_stackTrace, int32_t ___2_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47AA658FAF5802EC0B432E226517B7556408A861);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (logCount <= maxLogs)
		int32_t L_0 = __this->___logCount_9;
		int32_t L_1 = __this->___maxLogs_10;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0027;
		}
	}
	{
		// currentLogOutput += $"{logString}\n";
		String_t* L_2 = __this->___currentLogOutput_8;
		String_t* L_3 = ___0_logString;
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_2, L_3, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		__this->___currentLogOutput_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentLogOutput_8), (void*)L_4);
		goto IL_0039;
	}

IL_0027:
	{
		// currentLogOutput = "<color=yellow>Maximum number of logs reached. Logging Reset.</color>\n";
		__this->___currentLogOutput_8 = _stringLiteral47AA658FAF5802EC0B432E226517B7556408A861;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentLogOutput_8), (void*)_stringLiteral47AA658FAF5802EC0B432E226517B7556408A861);
		// logCount = 0;
		__this->___logCount_9 = 0;
	}

IL_0039:
	{
		// if (showDebugPanel && !pauseLogOutput) UpdateDebugPanel();
		bool L_5 = __this->___showDebugPanel_4;
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		bool L_6 = __this->___pauseLogOutput_5;
		if (L_6)
		{
			goto IL_004f;
		}
	}
	{
		// if (showDebugPanel && !pauseLogOutput) UpdateDebugPanel();
		RuntimeDebugPanel_UpdateDebugPanel_m2DB01D3D950F5AA4E9DC41BA3198454571C85F3A(__this, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.Core.RuntimeDebugPanel::ScrollToBottom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeDebugPanel_ScrollToBottom_m2D53E2767099B5D3EC6862F917EA04ACC15CC5D4 (RuntimeDebugPanel_t51E1F57EB2344DC77C5ABF810ACEA8A789DCFBFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (logScrollRect) logScrollRect.verticalNormalizedPosition = 0f;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_0 = __this->___logScrollRect_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// if (logScrollRect) logScrollRect.verticalNormalizedPosition = 0f;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_2 = __this->___logScrollRect_7;
		NullCheck(L_2);
		ScrollRect_set_verticalNormalizedPosition_m4AF461113925E6710BF04F46A49CF1F856F7738C(L_2, (0.0f), NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.Core.RuntimeDebugPanel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeDebugPanel__ctor_mE85FB34BE77C01CC6D96E65EF52D4E141ECCC1DC (RuntimeDebugPanel_t51E1F57EB2344DC77C5ABF810ACEA8A789DCFBFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5FBC620FB1B8DBDD5CB6C2BAB4E19350BE2C1F5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool showDebugPanel = true;
		__this->___showDebugPanel_4 = (bool)1;
		// private string currentLogOutput = "<color=green>Log Output Started...</color>\n";
		__this->___currentLogOutput_8 = _stringLiteralB5FBC620FB1B8DBDD5CB6C2BAB4E19350BE2C1F5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentLogOutput_8), (void*)_stringLiteralB5FBC620FB1B8DBDD5CB6C2BAB4E19350BE2C1F5);
		// private readonly int maxLogs = 200;
		__this->___maxLogs_10 = ((int32_t)200);
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
// System.String ReadyPlayerMe.Core.DirectoryUtility::get_DefaultAvatarFolder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DirectoryUtility_get_DefaultAvatarFolder_mDDAC70F9E43E586283596BE7B68CA35D5C1DD50B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string DefaultAvatarFolder { get; set; } = "Ready Player Me/Avatars";
		il2cpp_codegen_runtime_class_init_inline(DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var);
		String_t* L_0 = ((DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_StaticFields*)il2cpp_codegen_static_fields_for(DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var))->___U3CDefaultAvatarFolderU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ReadyPlayerMe.Core.DirectoryUtility::set_DefaultAvatarFolder(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryUtility_set_DefaultAvatarFolder_m11CD8907D62B16C7DB630375ADA5937AC68C0B1B (String_t* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string DefaultAvatarFolder { get; set; } = "Ready Player Me/Avatars";
		String_t* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var);
		((DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_StaticFields*)il2cpp_codegen_static_fields_for(DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var))->___U3CDefaultAvatarFolderU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_StaticFields*)il2cpp_codegen_static_fields_for(DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var))->___U3CDefaultAvatarFolderU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void ReadyPlayerMe.Core.DirectoryUtility::ValidateAvatarSaveDirectory(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryUtility_ValidateAvatarSaveDirectory_m21D916BF7D97ADD116B70164BC0B6466FD32869C (String_t* ___0_guid, bool ___1_saveInProjectFolder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ValidateDirectory(GetAvatarSaveDirectory(guid, saveInProjectFolder));
		String_t* L_0 = ___0_guid;
		bool L_1 = ___1_saveInProjectFolder;
		il2cpp_codegen_runtime_class_init_inline(DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = DirectoryUtility_GetAvatarSaveDirectory_m3B2AB1E41CF3E1C698D763915C3F9D5ED0517D8F(L_0, L_1, (String_t*)NULL, NULL);
		DirectoryUtility_ValidateDirectory_mCD5EF38682F1DF5EAE58F29ECA4917790ADF04D1(L_2, NULL);
		// }
		return;
	}
}
// System.Void ReadyPlayerMe.Core.DirectoryUtility::ValidateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryUtility_ValidateDirectory_mCD5EF38682F1DF5EAE58F29ECA4917790ADF04D1 (String_t* ___0_path, const RuntimeMethod* method) 
{
	{
		// if (!Directory.Exists(path))
		String_t* L_0 = ___0_path;
		bool L_1;
		L_1 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_0, NULL);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// Directory.CreateDirectory(path);
		String_t* L_2 = ___0_path;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_3;
		L_3 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_2, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.String ReadyPlayerMe.Core.DirectoryUtility::GetAvatarSaveDirectory(System.String,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DirectoryUtility_GetAvatarSaveDirectory_m3B2AB1E41CF3E1C698D763915C3F9D5ED0517D8F (String_t* ___0_guid, bool ___1_saveInProjectFolder, String_t* ___2_paramsHash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return saveInProjectFolder ? $"{GetAvatarsDirectoryPath(true)}/{guid}" : $"{GetAvatarsDirectoryPath()}/{guid}/{paramsHash}";
		bool L_0 = ___1_saveInProjectFolder;
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_runtime_class_init_inline(DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = DirectoryUtility_GetAvatarsDirectoryPath_m2B702FD46DE6FA3D992806884428A52319DF599B((bool)0, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = ___0_guid;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		String_t* L_9 = ___2_paramsHash;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		String_t* L_10;
		L_10 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_8, NULL);
		return L_10;
	}

IL_0030:
	{
		il2cpp_codegen_runtime_class_init_inline(DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var);
		String_t* L_11;
		L_11 = DirectoryUtility_GetAvatarsDirectoryPath_m2B702FD46DE6FA3D992806884428A52319DF599B((bool)1, NULL);
		String_t* L_12 = ___0_guid;
		String_t* L_13;
		L_13 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_11, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_12, NULL);
		return L_13;
	}
}
// System.String ReadyPlayerMe.Core.DirectoryUtility::GetRelativeProjectPath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DirectoryUtility_GetRelativeProjectPath_mEC7372B5E385BAC643B4E522EF08DABD2A9236FE (String_t* ___0_guid, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAA5A7F71CEAF22FCCBE9ECEEBBD1FF99E220991);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"Assets/{DefaultAvatarFolder}/{guid}";
		il2cpp_codegen_runtime_class_init_inline(DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var);
		String_t* L_0;
		L_0 = DirectoryUtility_get_DefaultAvatarFolder_mDDAC70F9E43E586283596BE7B68CA35D5C1DD50B_inline(NULL);
		String_t* L_1 = ___0_guid;
		String_t* L_2;
		L_2 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralEAA5A7F71CEAF22FCCBE9ECEEBBD1FF99E220991, L_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_1, NULL);
		return L_2;
	}
}
// System.Int64 ReadyPlayerMe.Core.DirectoryUtility::GetDirectorySize(System.IO.DirectoryInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DirectoryUtility_GetDirectorySize_m6A6FA469BC59794C29438EB6059FD3FF9408C5B5 (DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* ___0_directoryInfo, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryUtility_GetDirectorySize_m6A6FA469BC59794C29438EB6059FD3FF9408C5B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Sum_TisDirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_m89CE777F905BBC4B29548C3D6730DEA54B096B3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Sum_TisFileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_m060E16ED139D287E1011BD3FD15D212FD092EE3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t686A7D0152D3B6170FED254BEFF424719DE0DD34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tECA610381B947F66E961BDBB55BFF90ECBF0FB0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetDirectorySizeU3Eb__8_0_mE83DD6782357FFAE51E41EBF771CCD8F4931ADD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* V_0 = NULL;
	Func_2_tECA610381B947F66E961BDBB55BFF90ECBF0FB0E* G_B2_0 = NULL;
	FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* G_B2_1 = NULL;
	Func_2_tECA610381B947F66E961BDBB55BFF90ECBF0FB0E* G_B1_0 = NULL;
	FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* G_B1_1 = NULL;
	{
		// FileInfo[] fileInfos = directoryInfo.GetFiles();
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_0 = ___0_directoryInfo;
		NullCheck(L_0);
		FileInfoU5BU5D_tCB74DD125A9220ABCF5F48549F2C71B74BBCD7E6* L_1;
		L_1 = DirectoryInfo_GetFiles_m998040748717954CDDCE273F61EEC0625069543F(L_0, NULL);
		// var size = fileInfos.Sum(fi => fi.Length);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_il2cpp_TypeInfo_var);
		Func_2_tECA610381B947F66E961BDBB55BFF90ECBF0FB0E* L_2 = ((U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1;
		Func_2_tECA610381B947F66E961BDBB55BFF90ECBF0FB0E* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_il2cpp_TypeInfo_var);
		U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82* L_4 = ((U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tECA610381B947F66E961BDBB55BFF90ECBF0FB0E* L_5 = (Func_2_tECA610381B947F66E961BDBB55BFF90ECBF0FB0E*)il2cpp_codegen_object_new(Func_2_tECA610381B947F66E961BDBB55BFF90ECBF0FB0E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m8D2D9B21C76F66D03CFA9835037236EA809A898F(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CGetDirectorySizeU3Eb__8_0_mE83DD6782357FFAE51E41EBF771CCD8F4931ADD5_RuntimeMethod_var), NULL);
		Func_2_tECA610381B947F66E961BDBB55BFF90ECBF0FB0E* L_6 = L_5;
		((U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_il2cpp_TypeInfo_var))->___U3CU3E9__8_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		int64_t L_7;
		L_7 = Enumerable_Sum_TisFileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_m060E16ED139D287E1011BD3FD15D212FD092EE3E((RuntimeObject*)G_B2_1, G_B2_0, Enumerable_Sum_TisFileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C_m060E16ED139D287E1011BD3FD15D212FD092EE3E_RuntimeMethod_var);
		// DirectoryInfo[] directoryInfos = directoryInfo.GetDirectories();
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_8 = ___0_directoryInfo;
		NullCheck(L_8);
		DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_9;
		L_9 = DirectoryInfo_GetDirectories_m2EC8498544C3A85EF92273330858E03B284C6901(L_8, NULL);
		V_0 = L_9;
		// size += directoryInfos.Sum(GetDirectorySize);
		DirectoryInfoU5BU5D_t5D09D46C6EBC15480AF7C63C54276B57A4287953* L_10 = V_0;
		Func_2_t686A7D0152D3B6170FED254BEFF424719DE0DD34* L_11 = (Func_2_t686A7D0152D3B6170FED254BEFF424719DE0DD34*)il2cpp_codegen_object_new(Func_2_t686A7D0152D3B6170FED254BEFF424719DE0DD34_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Func_2__ctor_mC438F92D72E05E73355B5D5571B383F0CA925843(L_11, NULL, (intptr_t)((void*)DirectoryUtility_GetDirectorySize_m6A6FA469BC59794C29438EB6059FD3FF9408C5B5_RuntimeMethod_var), NULL);
		int64_t L_12;
		L_12 = Enumerable_Sum_TisDirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_m89CE777F905BBC4B29548C3D6730DEA54B096B3E((RuntimeObject*)L_10, L_11, Enumerable_Sum_TisDirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2_m89CE777F905BBC4B29548C3D6730DEA54B096B3E_RuntimeMethod_var);
		// return size;
		return ((int64_t)il2cpp_codegen_add(L_7, L_12));
	}
}
// System.String ReadyPlayerMe.Core.DirectoryUtility::GetAvatarsDirectoryPath(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DirectoryUtility_GetAvatarsDirectoryPath_m2B702FD46DE6FA3D992806884428A52319DF599B (bool ___0_saveInProjectFolder, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		// var directory = saveInProjectFolder ? Application.dataPath : Application.persistentDataPath;
		bool L_0 = ___0_saveInProjectFolder;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1;
		L_1 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		G_B3_0 = L_1;
		goto IL_000f;
	}

IL_000a:
	{
		String_t* L_2;
		L_2 = Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7(NULL);
		G_B3_0 = L_2;
	}

IL_000f:
	{
		// return $"{directory}/{DefaultAvatarFolder}";
		il2cpp_codegen_runtime_class_init_inline(DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = DirectoryUtility_get_DefaultAvatarFolder_mDDAC70F9E43E586283596BE7B68CA35D5C1DD50B_inline(NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B3_0, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_3, NULL);
		return L_4;
	}
}
// System.Void ReadyPlayerMe.Core.DirectoryUtility::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectoryUtility__cctor_m8B63E1555F633100E19835E38513A138B7677419 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2A6DD8FD5A0AF06C4D0704AC095E9784CE2FED3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string DefaultAvatarFolder { get; set; } = "Ready Player Me/Avatars";
		((DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_StaticFields*)il2cpp_codegen_static_fields_for(DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var))->___U3CDefaultAvatarFolderU3Ek__BackingField_0 = _stringLiteralE2A6DD8FD5A0AF06C4D0704AC095E9784CE2FED3;
		Il2CppCodeGenWriteBarrier((void**)(&((DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_StaticFields*)il2cpp_codegen_static_fields_for(DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var))->___U3CDefaultAvatarFolderU3Ek__BackingField_0), (void*)_stringLiteralE2A6DD8FD5A0AF06C4D0704AC095E9784CE2FED3);
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
// System.Void ReadyPlayerMe.Core.DirectoryUtility/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m74FFCD9B6D4391B614AE8C6C1997ED43EC623216 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82* L_0 = (U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82*)il2cpp_codegen_object_new(U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mBD6EE66F748CC56BD8AFCC6C862EE9606C6A782C(L_0, NULL);
		((U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void ReadyPlayerMe.Core.DirectoryUtility/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mBD6EE66F748CC56BD8AFCC6C862EE9606C6A782C (U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int64 ReadyPlayerMe.Core.DirectoryUtility/<>c::<GetDirectorySize>b__8_0(System.IO.FileInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t U3CU3Ec_U3CGetDirectorySizeU3Eb__8_0_mE83DD6782357FFAE51E41EBF771CCD8F4931ADD5 (U3CU3Ec_t4028AF93C10AD73144FC51E50054ECAB05DC7A82* __this, FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* ___0_fi, const RuntimeMethod* method) 
{
	{
		// var size = fileInfos.Sum(fi => fi.Length);
		FileInfo_t62782BBAFA832A78724E4CF2EE96548B8466AB1C* L_0 = ___0_fi;
		NullCheck(L_0);
		int64_t L_1;
		L_1 = FileInfo_get_Length_m7FADCE0E3C88678C0A7BFA694786C02AD652A33B(L_0, NULL);
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
// System.Void ReadyPlayerMe.Core.WebRequestDispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestDispatcher__ctor_mD3D0D688DBC393E3457B32AFAE51D581078CC471 (WebRequestDispatcher_t5F8CFBFA438101202578E0A7D67A7398F5C08A48* __this, const RuntimeMethod* method) 
{
	{
		// public int Timeout = 240;
		__this->___Timeout_0 = ((int32_t)240);
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
// System.Void ReadyPlayerMe.Core.Data.CoreSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreSettings__ctor_m2FC7C37252E78C58613C914AA4E27B69BC4698AB (CoreSettings_t3B0FE58954C18CAA58A70CA842A14A99E9AEF987* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822 ApplicationData_GetData_mE33F99530E811BC0D85D33CE0CE24B7A5CD02E8B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Data;
		il2cpp_codegen_runtime_class_init_inline(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var);
		AppData_tF404C8AE6B665BF4B1D5D2806B7FFB6C3422B822 L_0 = ((ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_StaticFields*)il2cpp_codegen_static_fields_for(ApplicationData_tA2F8AB5682F2175AB19957B349F6AC1CBAE03E17_il2cpp_TypeInfo_var))->___Data_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ResponseFile_set_Data_mCDCF8D7C25015879B6AC9E7613BF35FE37F99D4F_inline (ResponseFile_t679DA3A96C5B3A5A911F6CB3444240D1F3948DD7* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		// public byte[] Data { get; private set; }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CDataU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDataU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ResponseTexture_get_IsSuccess_mBE196F231C5932A84B591B6C491E4D5982BA0EDA_inline (ResponseTexture_tBFA6BE3C82EED0B009EC64F1CD03BF1420C61AA9* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsSuccess { get; set; }
		bool L_0 = __this->___U3CIsSuccessU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields*)il2cpp_codegen_static_fields_for(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))->___s_Logger_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DirectoryUtility_get_DefaultAvatarFolder_mDDAC70F9E43E586283596BE7B68CA35D5C1DD50B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string DefaultAvatarFolder { get; set; } = "Ready Player Me/Avatars";
		il2cpp_codegen_runtime_class_init_inline(DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var);
		String_t* L_0 = ((DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_StaticFields*)il2cpp_codegen_static_fields_for(DirectoryUtility_tB08E562C882A56BEF6DF739E514654122F00342A_il2cpp_TypeInfo_var))->___U3CDefaultAvatarFolderU3Ek__BackingField_0;
		return L_0;
	}
}
