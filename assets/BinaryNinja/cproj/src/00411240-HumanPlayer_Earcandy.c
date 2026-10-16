#include "gi_platform.h"
#include "00411240-HumanPlayer_Earcandy.h"
void* HumanPlayer_Earcandy(void* a1)

{
    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0xdc8)) - 0.00666666683.0f;
    long double f0 = 0.0f;
    x87_r7_1 - f0;
    (*(int32_t*)(uintptr_t)(a1 + 0xdc8)) = x87_r7_1;
    bool c1 = /* bool c1 = unknown  {fst dword [srcS+0xdc8], fp0} */;

    if (!(*(&((x87_r7_1 < f0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa | (x87_r7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1)
        & 1))
    {
        long double f1_1 = 1.0f;
        x87_r7_1 - f1_1;

        if (!(*(&((x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            (*(int32_t*)(uintptr_t)(a1 + 0xdc8)) = 0x3f800000;
    }
    else
        (*(int32_t*)(uintptr_t)(a1 + 0xdc8)) = 0;

    long double x87_r7_3 = (*(int32_t*)(uintptr_t)(a1 + 0xdc8));
    long double f2 = 0.0f;
    x87_r7_3 - f2;
    void* valA1 = (*(int32_t*)(uintptr_t)(a1 + 0xdc4));

    if (*(&((x87_r7_3 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f2) ? 1 : 0) << 0xa
        | (x87_r7_3 == f2 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        if (valA1)
        {
            SoundSys_SetFrequency_7(valA1);
            (*(int32_t*)(uintptr_t)(a1 + 0xdc4)) = 0;
        }
    }
    else if (!valA1)
        (*(int32_t*)(uintptr_t)(a1 + 0xdc4)) = SoundSys_SetMasterVolume_7((*(int32_t*)(uintptr_t)(a1 + 0x4ec)), "earcandy");

    void* result = (*(int32_t*)(uintptr_t)(a1 + 0xdc4));

    if (!result)
        return result;

    return SoundSys_LoadSoundDef_7(result, 0xbf800000, (*(int32_t*)(uintptr_t)(a1 + 0xdc8)));
}
