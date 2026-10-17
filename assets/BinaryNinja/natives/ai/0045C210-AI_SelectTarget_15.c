// Original IGI.EXE function: AI_SelectTarget_15 (VA 0x0045C210; static CFG gate PASS, CFG score 1.000).
#include "AI_SelectTarget_15.h"
int32_t AI_SelectTarget_15(void* a1, void* a2)

{
    AI_FireWeapon_21(a2);
    int32_t result = *(a1 + 8);

    if (result & 0x10000)
    {
        void* objC1 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x1e;
        int32_t valA1 = *(objC1 + 0x78);
        *(a1 + 0x14) = valA1;
        return valA1(a1, a2);
    }

    if (result & 0x20000)
    {
        void* valA3 = *(a1 + 4);
        *(a1 + 0xc) = *(a1 + 0x10);
        *(a1 + 0x10) = 0x20;
        int32_t valA4 = *(valA3 + 0x80);
        *(a1 + 0x14) = valA4;
        return valA4(a1, a2);
    }

    if (!(result & 4))
        return result;

    void* valA6 = *(a2 + 0x6ec);

    if (valA6)
    {
        struct status_msg* valA9 = SoundSys_SetMasterVolume_7(Script_FormatString(), valA6 + 0x114);

        if (valA9)
            SoundSys_StopSoundSample_7(valA9, a2 + 0x6a8);
    }

    *(a2 + 0x664) = 0;
    *(a2 + 0x668) = 0;
    *(a2 + 0x66c) = 0;
    int32_t* valA10 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t valA11 = *valA10;
    *(a1 + 0x14) = valA11;
    return valA11(a1, a2);
}
