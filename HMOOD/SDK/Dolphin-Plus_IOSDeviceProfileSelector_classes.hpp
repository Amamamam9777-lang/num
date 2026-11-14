#pragma once

// WE SUPPORT FUN  (4.7.0) SDKGen by @Dolphin-Plus | @T4_Q3 
// Send Message Me For SDKGen Tool  
// Generate on Thu Nov 12 21:01:42 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class IOSDeviceProfileSelector.IOSDeviceProfileMatchingRules
// 0x0010 (0x0038 - 0x0028)
class UIOSDeviceProfileMatchingRules : public UObject
{
public:
	TArray<struct FProfileMatch>                       IOSMatchProfile;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class IOSDeviceProfileSelector.IOSDeviceProfileMatchingRules");
		return pStaticClass;
	}

};


}

