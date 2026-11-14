#pragma once

// WE SUPPORT FUN  (4.7.0) SDKGen by @Dolphin-Plus | @T4_Q3 
// Send Message Me For SDKGen Tool  
// Generate on Thu Nov 12 21:01:41 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CreativeLua.CreativeBridgeLuaVM
// 0x0030 (0x0470 - 0x0440)
class UCreativeBridgeLuaVM : public UCreativeLuaVM
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0440(0x0008) MISSED OFFSET
	class UObject*                                     LuaVMManager;                                             // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     RegisterUGCVMFunctionHandlerName;                         // 0x0450(0x0010) (ZeroConstructor)
	struct FString                                     UGCVMPostInitFunctionHandlerName;                         // 0x0460(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CreativeLua.CreativeBridgeLuaVM");
		return pStaticClass;
	}


	void UGCLuaError(int errCode);
	void SetUGCSuspendStateFix(bool bEnable);
	void RegisterSluaCallUgcluaEventHandler();
	void PostInit();
	bool GetUGCSuspendStateFix();
};


}

