#include "004FC870-Script_EvaluateCondition_29.h"
/* 0x004fc870 Script_EvaluateCondition_29 full linked: callers=1 callees=1 */
int32_t sub_4fc870(float* a1, void* a2, float* a3, float* a4 @ 0x14)

{
    float var_c;
    sub_4ecf80(&var_c, a2, a3);
    float var_8;
    float var_4;
    long double x87_r7_3 = var_4 * a1[2] + var_8 * a1[1] + var_c * *a1;
    *a4 = x87_r7_3;
    long double temp0 = 1f;
    x87_r7_3 - temp0;

    if (!(*(&((x87_r7_3 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        return 0;

    long double temp1 = -1f;
    x87_r7_3 - temp1;

    if (!(*(&((x87_r7_3 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp1 ? 1 : 0) << 0xe) + 1) & 0x41))
        return 1;

    return 2;
}
