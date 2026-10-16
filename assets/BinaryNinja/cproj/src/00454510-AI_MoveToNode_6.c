#include "gi_platform.h"
#include "00454510-AI_MoveToNode_6.h"
int32_t AI_MoveToNode_6(void* a1, void* a2)

{
    AI_FireWeapon_21(a2);
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (result & 0x10000)
    {
        void* objC1 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 9;
        int32_t valA1 = *(objC1 + 0x24);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA1;
        return valA1(a1, a2);
    }

    if (result & 0x20000)
    {
        void* valA3 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0xa;
        int32_t valA4 = *(valA3 + 0x28);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA4;
        return valA4(a1, a2);
    }

    if (!(result & 4))
        return result;

    void* valA6 = (*(int32_t*)(uintptr_t)(a2 + 0x6ec));

    if (valA6)
    {
        struct status_msg* valA9 = SoundSys_SetMasterVolume_7(Script_FormatString(), valA6 + 0x114);

        if (valA9)
            SoundSys_StopSoundSample_7(valA9, a2 + 0x6a8);
    }

    (*(int32_t*)(uintptr_t)(a2 + 0x664)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x668)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x66c)) = 0;
    int32_t* valA10 = (*(int32_t*)(uintptr_t)(a1 + 4));
    (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0;
    int32_t valA11 = *valA10;
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA11;
    return valA11(a1, a2);
}
