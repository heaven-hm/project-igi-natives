#include "004E6FF0-SoundSys_StopSoundSample_8.h"
/* 0x004e6ff0 SoundSys_StopSoundSample_8 full linked: callers=3 callees=0 */
long double sub_4e6ff0(float* a1)

{
    long double x87_r7 = *a1;
    long double temp0 = 0f;
    x87_r7 - temp0;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double result = *(a1 + 0x18);
        *a1 = 0f;
        return result;
    }

    long double x87_r7_1 = *a1;
    long double temp1 = 1f;
    x87_r7_1 - temp1;

    if (!(*(&((x87_r7_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1 ? 1 : 0) << 0xe) + 1) & 0x41))
        *a1 = 1f;

    return *(a1 + 0x18);
}
