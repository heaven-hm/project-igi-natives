#include "004F7170-RainDynCubeObj_Setup.h"
/* 0x004f7170 RainDynCubeObj_Setup full linked: callers=0 callees=3 */
int32_t sub_4f7170(long double a1 @ st1, float a2)

{
    float esi = a2;
    long double x87_r0;
    sub_4f6d70(x87_r0, esi);
    sub_4f70b0(esi);
    *(esi + 0x2d0c) += 1;
    int32_t result = g_a76cc4;

    if (!result)
        return result;

    long double temp0_1;

    if (*(esi + 0x2cac))
    {
        sub_4f16e0(esi + 0x2cb8, esi);
        temp0_1 = 0.0;
        a1 - temp0_1;
        a2 = 1;
    }

    if (!*(esi + 0x2cac) || *(&((a1 < temp0_1 ? 1 : 0) << 8
            | (FCMP_UO(a1, temp0_1) ? 1 : 0) << 0xa | (a1 == temp0_1 ? 1 : 0) << 0xe | 0x1000) + 1)
            & 0x40)
        a2 = 0;

    *(&a2 + 1) = *(esi + 0x2d10);
    return g_a76cc4(&a2);
}
