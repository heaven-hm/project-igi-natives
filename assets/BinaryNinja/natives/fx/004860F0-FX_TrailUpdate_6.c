#include "FX_TrailUpdate_6.h"
int32_t FX_TrailUpdate_6(int32_t a1, int32_t a2, float a3, float a4)

{
    float v_4 = a3;
    float v_8 = a4;
    int32_t tmpD = a2 * 0x40b;
    void* srcS = a1 + (tmpD << 2);
    int32_t* valA6 = *(a1 + (tmpD << 2) + 0x3c);

    if (valA6 && *(srcS + 0x24) > 9)
        Sys_ResolveSymbol_14(valA6, a3, a4, 128f, 128f, 128f, 0, 0, 0);

    void* valA7 = *(srcS + 0x3c);

    if (valA7)
        a3 = Sys_CloseFileStream_17(valA7) + a3;

    int32_t* srcS1 = srcS + 0x30;
    int32_t i_1 = 3;
    long double x87_r7_6 = a4 + 2f;
    a4 = x87_r7_6;
    int32_t i;

    do
    {
        *(*srcS1 + 0x14) = 0;
        *(*srcS1 + 0x18) = 0x42f00000;
        *(*srcS1 + 0x1c) = 0;
        *(*srcS1 + 4) = a3 + 3f;
        *(*srcS1 + 8) = x87_r7_6;
        Sys_CloseFileStream_18(*srcS1);
        long double x87_r7_7 = Sys_AllocateMemory_22(*srcS1);
        srcS1 = &srcS1[1];
        i = i_1;
        i_1 -= 1;
        x87_r7_6 = x87_r7_7 + a4;
        a4 = x87_r7_6;
    } while (i != 1);
    return FX_ExplosionSpawn_7(a1, a2, v_4, v_8, 0);
}
