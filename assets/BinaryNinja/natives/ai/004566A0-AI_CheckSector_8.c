// Original IGI.EXE function: AI_CheckSector_8 (VA 0x004566A0; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_8.h"
int32_t AI_CheckSector_8(void* a1, void* a2)

{
    AI_FireWeapon_21(a2);
    int32_t valA = *(a1 + 8);

    if (!(valA & 4))
    {
        void* objC1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0xb;
        int32_t valA2 = *(objC1 + 0x2c);
        *(a1 + 0x14) = valA2;
        return valA2(a1, a2);
    }

    if (valA & 0x20000)
    {
        void* valA4 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0xd;
        int32_t valA5 = *(valA4 + 0x34);
        *(a1 + 0x14) = valA5;
        return valA5(a1, a2);
    }

    void* valA7 = *(a2 + 0x6ec);

    if (valA7)
    {
        struct status_msg* valA10 = SoundSys_SetMasterVolume_7(Script_FormatString(), valA7 + 0x114);

        if (valA10)
            SoundSys_StopSoundSample_7(valA10, a2 + 0x6a8);
    }

    *(a2 + 0x664) = 0;
    *(a2 + 0x668) = 0;
    *(a2 + 0x66c) = 0;
    int32_t* valA11 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t valA12 = *valA11;
    *(a1 + 0x14) = valA12;
    return valA12(a1, a2);
}
