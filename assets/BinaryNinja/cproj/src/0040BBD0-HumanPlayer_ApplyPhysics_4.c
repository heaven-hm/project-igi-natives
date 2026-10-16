#include "gi_platform.h"
#include "0040BBD0-HumanPlayer_ApplyPhysics_4.h"
int32_t HumanPlayer_ApplyPhysics_4(void* a1, float a2)

{
    int32_t result = FallLanding(a2);
    int16_t ctxB = (*(int32_t*)(uintptr_t)(a1 + 8));

    if (!(ctxB & 4))
        return result;

    void* valA = (*(int32_t*)(uintptr_t)(a2 + 0x6ec));

    if (valA)
    {
        struct status_msg* valA3 = SoundSys_SetMasterVolume_7(Script_FormatString(), valA + 0x114);

        if (valA3)
            SoundSys_StopSoundSample_7(valA3, a2 + 0x6a8);
    }

    __builtin_memset(a2 + 0x664, 0, 0x18);

    if (!((*(int32_t*)(uintptr_t)(a1 + 8)) & 0x40000))
    {
        if (ctxB & 0x80)
        {
            void* tmpD3 = (*(int32_t*)(uintptr_t)(a1 + 4));
            (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
            (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 1;
            int32_t valA15 = *(tmpD3 + 4);
            (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA15;
            return valA15(a1, a2);
        }

        if ((*(int32_t*)(uintptr_t)(&ctxB + 1)) & 1)
        {
            void* objC5 = (*(int32_t*)(uintptr_t)(a1 + 4));
            (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
            (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 4;
            int32_t valA18 = *(objC5 + 0x10);
            (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA18;
            return valA18(a1, a2);
        }

        if (ctxB & 0x40)
        {
            void* valA20 = (*(int32_t*)(uintptr_t)(a1 + 4));
            (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
            (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 7;
            int32_t valA21 = *(valA20 + 0x1c);
            (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA21;
            return valA21(a1, a2);
        }

        if (ctxB & 0x20)
        {
            void* tmpD5 = (*(int32_t*)(uintptr_t)(a1 + 4));
            (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
            (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 8;
            int32_t valA23 = *(tmpD5 + 0x20);
            (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA23;
            return valA23(a1, a2);
        }
    }
    else
    {
        if (ctxB & 0x80)
        {
            void* valA4 = (*(int32_t*)(uintptr_t)(a1 + 4));
            (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
            (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 9;
            int32_t valA5 = *(valA4 + 0x24);
            (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA5;
            return valA5(a1, a2);
        }

        if ((*(int32_t*)(uintptr_t)(&ctxB + 1)) & 1)
        {
            void* tmpD1 = (*(int32_t*)(uintptr_t)(a1 + 4));
            (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
            (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0xc;
            int32_t valA7 = *(tmpD1 + 0x30);
            (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA7;
            return valA7(a1, a2);
        }

        if (ctxB & 0x40)
        {
            void* objC3 = (*(int32_t*)(uintptr_t)(a1 + 4));
            (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
            (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0xf;
            int32_t valA10 = *(objC3 + 0x3c);
            (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA10;
            return valA10(a1, a2);
        }

        if (ctxB & 0x20)
        {
            void* valA12 = (*(int32_t*)(uintptr_t)(a1 + 4));
            (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
            (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0x10;
            int32_t valA13 = *(valA12 + 0x40);
            (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA13;
            return valA13(a1, a2);
        }
    }

    int32_t* objC7 = (*(int32_t*)(uintptr_t)(a1 + 4));
    (*(int32_t*)(uintptr_t)(a1 + 0xc)) = (*(int32_t*)(uintptr_t)(a1 + 0x10));
    (*(int32_t*)(uintptr_t)(a1 + 0x10)) = 0;
    int32_t valA26 = *objC7;
    (*(int32_t*)(uintptr_t)(a1 + 0x14)) = valA26;
    return valA26(a1, a2);
}
