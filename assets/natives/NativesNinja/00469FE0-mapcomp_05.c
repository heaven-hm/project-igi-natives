#include "00469FE0-mapcomp_05.h"
/* 0x00469fe0 mapcomp_05 full linked: callers=3 callees=7 */
int32_t sub_469fe0(void* a1, float a2)

{
    long double x87_r7 = a2;
    long double temp0 = *(a1 + 0x70);
    x87_r7 - temp0;
    int16_t result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x40)
        return result;

    *(a1 + 0x70) = a2;
    sub_46a080(a1, sub_4b4770(Level_SetMission_5()) * 0.0500000007f + 0.949999988f,
        sub_4b47c0(Level_SetMission_5(), 0x4b) + 0xf);
    int32_t var_20 = 0x3f800000;
    int32_t var_1c_1 = 0x3f800000;
    int32_t var_18_1 = 0;
    Sound_EventTrigger("mapcomp_05", 1, &var_20);
    return Sound_EventTrigger("mapcomp_03", 1, &var_20);
}
