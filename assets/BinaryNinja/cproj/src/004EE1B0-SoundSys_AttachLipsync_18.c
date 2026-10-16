#include "gi_platform.h"
#include "004EE1B0-SoundSys_AttachLipsync_18.h"
void* SoundSys_AttachLipsync_18(void* a1)

{
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0xc));
    long double f0 = 0.0f;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40)
        SoundSys_InitSoundSys_19(a1);
    else
    {
        long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x10));
        long double f1_1 = 0.0f;
        x87_r7_1 - f1_1;

        if (*(&((x87_r7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            SoundSys_InitSoundSys_19(a1);
        else
        {
            long double x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0x14));
            long double f2_1 = 0.0f;
            x87_r7_2 - f2_1;

            if (*(&((x87_r7_2 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f2_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                SoundSys_InitSoundSys_19(a1);
        }
    }

    return a1 + 0xc;
}
