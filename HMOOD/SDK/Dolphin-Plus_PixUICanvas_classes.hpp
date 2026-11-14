#pragma once

// WE SUPPORT FUN  (4.7.0) SDKGen by @Dolphin-Plus | @T4_Q3 
// Send Message Me For SDKGen Tool  
// Generate on Thu Nov 12 21:01:42 2026
 
namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PixUICanvas.PixCanvasMgr
// 0x0000 (0x0028 - 0x0028)
class UPixCanvasMgr : public UObject
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class PixUICanvas.PixCanvasMgr");
		return pStaticClass;
	}

};


}

