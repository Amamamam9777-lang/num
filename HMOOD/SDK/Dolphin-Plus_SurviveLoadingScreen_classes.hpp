#pragma once

// WE SUPPORT FUN  (4.7.0) SDKGen by @Dolphin-Plus | @T4_Q3 
// Send Message Me For SDKGen Tool  
// Generate on Thu Nov 12 21:01:42 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SurviveLoadingScreen.SurviveLoadingSettings
// 0x0020 (0x0058 - 0x0038)
class USurviveLoadingSettings : public UDeveloperSettings
{
public:
	TArray<struct FSoftObjectPath>                     Images;                                                   // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FSoftObjectPath>                     Videos;                                                   // 0x0048(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class SurviveLoadingScreen.SurviveLoadingSettings");
		return pStaticClass;
	}

};


}

