#pragma once

// WE SUPPORT FUN  (4.7.0) SDKGen by @Dolphin-Plus | @T4_Q3 
// Send Message Me For SDKGen Tool  
// Generate on Thu Nov 12 21:01:42 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TApm.TApmSceneInfo
// 0x0020
struct FTApmSceneInfo
{
	int                                                PerfPriority;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ReportPriority;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ID;                                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFinished;                                               // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x000D(0x0013) MISSED OFFSET
};

}

