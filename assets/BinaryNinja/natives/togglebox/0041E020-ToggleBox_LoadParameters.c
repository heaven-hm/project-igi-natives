// Original IGI.EXE function: ToggleBox_LoadParameters (VA 0x0041E020; static CFG gate PASS, CFG score 1.000).
#include "ToggleBox_LoadParameters.h"
int32_t ToggleBox_LoadParameters(void* a1)

{
    void* srcS = *(a1 + 0x94);
    void* objC = *(a1 + 0x24);
    int32_t tmpD = *(a1 + 0x20);
    int32_t valA = *(a1 + 0x28);
    int32_t flagP = *(a1 + 0x2c);
    void* dstD = *(a1 + 0x98);
    *(srcS + 0x24) = objC;
    int32_t objC2 = valA >> 1;
    *(srcS + 0x20) = tmpD;
    *(srcS + 0x28) = objC2;
    *(srcS + 0x2c) = flagP;
    *(dstD + 0x20) = tmpD + objC2;
    *(dstD + 0x24) = objC;
    *(dstD + 0x28) = valA - objC2;
    *(dstD + 0x2c) = flagP;
    Menu_UpdateLanguage_14(srcS, *(srcS + 0x20), *(srcS + 0x24), *(srcS + 0x28), *(srcS + 0x2c),
        nullptr, nullptr);
    Menu_UpdateLanguage_14(dstD, *(dstD + 0x20), *(dstD + 0x24), *(dstD + 0x28), *(dstD + 0x2c),
        nullptr, nullptr);

    if ((*(srcS + 0x4b) || *(a1 + 0x50) == 0xffffffff) && !*(a1 + 0xa4))
    {
        SoundSys_AttachLipsync_8("menu_high", 0, 0);
        *(a1 + 0xa4) = 1;
    }
    else if ((*(dstD + 0x4b) || *(a1 + 0x50) == 0xfffffffe) && *(a1 + 0xa4))
    {
        SoundSys_AttachLipsync_8("menu_high", 0, 0);
        *(a1 + 0xa4) = 0;
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(a1);
}
