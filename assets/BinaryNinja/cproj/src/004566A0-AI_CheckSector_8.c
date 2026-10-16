#include "gi_platform.h"
#include "004566A0-AI_CheckSector_8.h"
int32_t AI_CheckSector_8(void* a1, void* a2)

{
    AI_FireWeapon_21(a2);
    int32_t valA = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (!(valA & 4))
    {
        void* objC1 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0xb;
        int32_t valA2 = *(objC1 + 0x2c);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA2;
        return valA2(a1, a2);
    }

    if (valA & 0x20000)
    {
        void* valA4 = (*(int32_t*)(uintptr_t)(a1 + 4));
        (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0xd;
        int32_t valA5 = *(valA4 + 0x34);
        (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA5;
        return valA5(a1, a2);
    }

    void* valA7 = (*(int32_t*)(uintptr_t)(a2 + 0x6ec));

    if (valA7)
    {
        struct status_msg* valA10 = SoundSys_SetMasterVolume_7(Script_FormatString(), valA7 + 0x114);

        if (valA10)
            SoundSys_StopSoundSample_7(valA10, a2 + 0x6a8);
    }

    (*(int32_t*)(uintptr_t)(a2 + 0x664)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x668)) = 0;
    (*(int32_t*)(uintptr_t)(a2 + 0x66c)) = 0;
    int32_t* valA11 = (*(int32_t*)(uintptr_t)(a1 + 4));
    (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0;
    int32_t valA12 = *valA11;
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA12;
    return valA12(a1, a2);
}
