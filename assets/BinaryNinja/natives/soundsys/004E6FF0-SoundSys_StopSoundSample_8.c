#include "SoundSys_StopSoundSample_8.h"
long double SoundSys_StopSoundSample_8(float* a1)

{
    long double fpu7 = *a1;
    long double f0 = 0f;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double result = *(a1 + 0x18);
        *a1 = 0f;
        return result;
    }

    long double x87_r7_1 = *a1;
    long double f1 = 1f;
    x87_r7_1 - f1;

    if (!(*(&((x87_r7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f1 ? 1 : 0) << 0xe) + 1) & 0x41))
        *a1 = 1f;

    return *(a1 + 0x18);
}
