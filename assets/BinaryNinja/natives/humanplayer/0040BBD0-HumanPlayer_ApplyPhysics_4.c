// Original IGI.EXE function: HumanPlayer_ApplyPhysics_4 (VA 0x0040BBD0; static CFG gate PASS, CFG score 0.933).
#include "HumanPlayer_ApplyPhysics_4.h"
int32_t HumanPlayer_ApplyPhysics_4(void* a1, float a2)

{
    int32_t result = FallLanding(a2);
    int16_t ctxB = *(a1 + 8);

    if (!(ctxB & 4))
        return result;

    void* valA = *(a2 + 0x6ec);

    if (valA)
    {
        struct status_msg* valA3 = SoundSys_SetMasterVolume_7(Script_FormatString(), valA + 0x114);

        if (valA3)
            SoundSys_StopSoundSample_7(valA3, a2 + 0x6a8);
    }

    __builtin_memset(a2 + 0x664, 0, 0x18);

    if (!(*(a1 + 8) & 0x40000))
    {
        if (ctxB & 0x80)
        {
            void* tmpD3 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 1;
            int32_t valA15 = *(tmpD3 + 4);
            *(a1 + 0x14) = valA15;
            return valA15(a1, a2);
        }

        if (*(&ctxB + 1) & 1)
        {
            void* objC5 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 4;
            int32_t valA18 = *(objC5 + 0x10);
            *(a1 + 0x14) = valA18;
            return valA18(a1, a2);
        }

        if (ctxB & 0x40)
        {
            void* valA20 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 7;
            int32_t valA21 = *(valA20 + 0x1c);
            *(a1 + 0x14) = valA21;
            return valA21(a1, a2);
        }

        if (ctxB & 0x20)
        {
            void* tmpD5 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 8;
            int32_t valA23 = *(tmpD5 + 0x20);
            *(a1 + 0x14) = valA23;
            return valA23(a1, a2);
        }
    }
    else
    {
        if (ctxB & 0x80)
        {
            void* valA4 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 9;
            int32_t valA5 = *(valA4 + 0x24);
            *(a1 + 0x14) = valA5;
            return valA5(a1, a2);
        }

        if (*(&ctxB + 1) & 1)
        {
            void* tmpD1 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 0xc;
            int32_t valA7 = *(tmpD1 + 0x30);
            *(a1 + 0x14) = valA7;
            return valA7(a1, a2);
        }

        if (ctxB & 0x40)
        {
            void* objC3 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 0xf;
            int32_t valA10 = *(objC3 + 0x3c);
            *(a1 + 0x14) = valA10;
            return valA10(a1, a2);
        }

        if (ctxB & 0x20)
        {
            void* valA12 = *(a1 + 4);
            *(a1 + 0xc) = *(a1 + 0x10);
            *(a1 + 0x10) = 0x10;
            int32_t valA13 = *(valA12 + 0x40);
            *(a1 + 0x14) = valA13;
            return valA13(a1, a2);
        }
    }

    int32_t* objC7 = *(a1 + 4);
    *(a1 + 0xc) = *(a1 + 0x10);
    *(a1 + 0x10) = 0;
    int32_t valA26 = *objC7;
    *(a1 + 0x14) = valA26;
    return valA26(a1, a2);
}
