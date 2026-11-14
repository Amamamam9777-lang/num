// WE SUPPORT FUN  (4.7.0) SDKGen by @Dolphin-Plus | @T4_Q3 
// Send Message Me For SDKGen Tool  
// Generate on Thu Nov 12 21:01:43 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SettingConfig.SettingConfig_C.ConditionSetFireGyroData
// (Public, BlueprintCallable, BlueprintEvent)

void USettingConfig_C::ConditionSetFireGyroData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SettingConfig.SettingConfig_C.ConditionSetFireGyroData");

	USettingConfig_C_ConditionSetFireGyroData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function SettingConfig.SettingConfig_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void USettingConfig_C::Init()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function SettingConfig.SettingConfig_C.Init");

	USettingConfig_C_Init_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

