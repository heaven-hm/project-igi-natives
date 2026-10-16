#include "SoundDefSound_Update.h"
int32_t SoundDefSound_Update(void* a1, float* a2)

{
    void* dstD = *(a1 + 0x14);
    int16_t result;

    if (dstD)
        result = SoundSys_InitSoundSys_15();

    long double x87_r7_1;

    if (!dstD || *(dstD + 0x1c) != result)
        x87_r7_1 = *(a1 + 0xd8);
    else
        x87_r7_1 = Sys_OpenFileStream_11(a1 + 0xa0) + *(a1 + 0xd8);

    long double f0 = *a2;
    x87_r7_1 - f0;
    result = (x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
        | (x87_r7_1 == f0 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 0x41)
        return result;

    *a2 = x87_r7_1;
    return result;
}
