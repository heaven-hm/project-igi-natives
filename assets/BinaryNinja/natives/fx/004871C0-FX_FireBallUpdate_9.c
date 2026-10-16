#include "FX_FireBallUpdate_9.h"
int32_t FX_FireBallUpdate_9(void* a1, int32_t a2)

{
    int32_t valA = g_c28b44;
    int32_t result = Display_GetActiveMode();
    int32_t* srcS = a2;
    int32_t objC = g_c28b48;

    if (!srcS)
        return result;

    int32_t valA2;
    int32_t tmpD1;
    tmpD1 = HIGHD(Sys_CloseFileStream_17(srcS));
    valA2 = LOWD(Sys_CloseFileStream_17(srcS));
    int32_t valA6;
    int32_t tmpD2;
    tmpD2 = HIGHD(Sys_ExecuteBytecode_17(srcS));
    valA6 = LOWD(Sys_ExecuteBytecode_17(srcS));
    long double x87_r7_9 = *(a1 + 0x4e8);
    long double f0_1 = 1f;
    x87_r7_9 - f0_1;
    long double x87_r7_10;

    if (!(*(&((x87_r7_9 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_9 == f0_1 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_10 = 2f - *(a1 + 0x4e8);
    else
        x87_r7_10 = *(a1 + 0x4e8);

    void* v_20_1 = a1;
    return Sys_AllocateMemory_15(srcS, valA * 0.5f - ((valA2 - tmpD1) >> 1),
        objC * 0.875f - ((valA6 - tmpD2) >> 1), 128f, 128f, 128f,
        x87_r7_10 * 0.699999988f + 0.300000012f, 0, 0, 0x80000, 0);
}
