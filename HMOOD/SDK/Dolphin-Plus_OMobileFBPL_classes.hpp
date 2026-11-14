#pragma once

// WE SUPPORT FUN  (4.7.0) SDKGen by @Dolphin-Plus | @T4_Q3 
// Send Message Me For SDKGen Tool  
// Generate on Thu Nov 12 21:01:40 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OMobileFBPL.OMobileFBPL
// 0x0000 (0x0028 - 0x0028)
class UOMobileFBPL : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class OMobileFBPL.OMobileFBPL");
		return pStaticClass;
	}


	static bool IsRunningOnBattery();
	static bool IsBatteryStateCharging();
	static int GetVolumeState();
	static struct FString GetDeviceName();
	static float GetBatteryTemperature();
	static int GetBatteryLevel();
	static bool AreHeadphonesPluggedIn();
};


}

