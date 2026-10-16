#include "gi_platform.h"
#include "0041E020-ToggleBox_LoadParameters.h"
int32_t ToggleBox_LoadParameters(void* a1)

{
    void* srcS = (*(int32_t*)(uintptr_t)(a1 + 0x94));
    void* objC = (*(int32_t*)(uintptr_t)(a1 + 0x24));
    int32_t tmpD = (*(int32_t*)(uintptr_t)(a1 + 0x20));
    int32_t valA = (*(int32_t*)(uintptr_t)(a1 + 0x28));
    int32_t flagP = (*(int32_t*)(uintptr_t)(a1 + 0x2c));
    void* dstD = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    (*(int32_t*)(uintptr_t)(srcS + 0x24)) = objC;
    int32_t objC2 = valA >> 1;
    (*(int32_t*)(uintptr_t)(srcS + 0x20)) = tmpD;
    (*(int32_t*)(uintptr_t)(srcS + 0x28)) = objC2;
    (*(int32_t*)(uintptr_t)(srcS + 0x2c)) = flagP;
    (*(int32_t*)(uintptr_t)(dstD + 0x20)) = tmpD + objC2;
    (*(int32_t*)(uintptr_t)(dstD + 0x24)) = objC;
    (*(int32_t*)(uintptr_t)(dstD + 0x28)) = valA - objC2;
    (*(int32_t*)(uintptr_t)(dstD + 0x2c)) = flagP;
    Menu_UpdateLanguage_14(srcS, (*(int32_t*)(uintptr_t)(srcS + 0x20)), (*(int32_t*)(uintptr_t)(srcS + 0x24)), (*(int32_t*)(uintptr_t)(srcS + 0x28)), (*(int32_t*)(uintptr_t)(srcS + 0x2c)),
        nullptr, nullptr);
    Menu_UpdateLanguage_14(dstD, (*(int32_t*)(uintptr_t)(dstD + 0x20)), (*(int32_t*)(uintptr_t)(dstD + 0x24)), (*(int32_t*)(uintptr_t)(dstD + 0x28)), (*(int32_t*)(uintptr_t)(dstD + 0x2c)),
        nullptr, nullptr);

    if (((*(int32_t*)(uintptr_t)(srcS + 0x4b)) || (*(int32_t*)(uintptr_t)(a1 + 0x50)) == 0xffffffff) && !(*(int32_t*)(uintptr_t)(a1 + 0xa4)))
    {
        SoundSys_AttachLipsync_8("menu_high", 0, 0);
        (*(int32_t*)(uintptr_t)(a1 + 0xa4)) = 1;
    }
    else if (((*(int32_t*)(uintptr_t)(dstD + 0x4b)) || (*(int32_t*)(uintptr_t)(a1 + 0x50)) == 0xfffffffe) && (*(int32_t*)(uintptr_t)(a1 + 0xa4)))
    {
        SoundSys_AttachLipsync_8("menu_high", 0, 0);
        (*(int32_t*)(uintptr_t)(a1 + 0xa4)) = 0;
    }

    return ((int(*)())(uintptr_t)(*((Menu_PlayMusic_13() << 2) + &g_a970e0)))(a1);
}
