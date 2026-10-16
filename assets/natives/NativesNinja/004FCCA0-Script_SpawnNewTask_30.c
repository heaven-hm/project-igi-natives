#include "004FCCA0-Script_SpawnNewTask_30.h"
/* 0x004fcca0 Script_SpawnNewTask_30 full linked: callers=1 callees=1 */
int32_t sub_4fcca0(void* a1, float a2, float a3, float a4, float a5)

{
    float* ecx_5 = a2;
    long double x87_r7_1 = a3 * ecx_5[2];
    long double temp1 = 0f;
    x87_r7_1 - temp1;

    if (*(&((x87_r7_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_1 = -(x87_r7_1);

    long double temp2 = 0f;
    x87_r7_1 - temp2;
    int16_t result = (x87_r7_1 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp2 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 0x40)
        return result;

    long double x87_r7_2 = x87_r7_1 * a4;
    float edx = *(a1 + 0x24);
    float edx_1 = *(a1 + 0x28);
    float eax_1 = *(a1 + 0x2c);
    float var_c = edx_1 * ecx_5[2] - eax_1 * ecx_5[1];
    float var_8 = -((edx * ecx_5[2] - eax_1 * *ecx_5));
    float var_18_1 = var_c;
    float var_14_1 = var_8;
    float var_4 = edx * ecx_5[1] - edx_1 * *ecx_5;
    long double x87_r6_10 = var_c;
    long double x87_r5_6 = var_4;
    long double x87_r4 = var_8;
    a2 = sqrtl(x87_r4 * x87_r4 + x87_r5_6 * x87_r5_6 + x87_r6_10 * x87_r6_10);
    long double x87_r6_12 = a2;
    long double temp3 = 9.99999975e-06f;
    x87_r6_12 - temp3;
    float var_18_2;
    float var_14_2;
    float var_10_2;

    if (!(*(&((x87_r6_12 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, temp3) ? 1 : 0) << 0xa
        | (x87_r6_12 == temp3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double x87_r6_13 = var_c;
        long double temp4_1 = 0f;
        x87_r6_13 - temp4_1;
        long double x87_r6_18;

        if (!(*(&((x87_r6_13 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, temp4_1) ? 1 : 0) << 0xa
            | (x87_r6_13 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
        {
        label_4fcdd0:
            long double x87_r6_17 = 1.0 / a2;
            var_18_1 = var_c * x87_r6_17;
            var_14_1 = var_14_1 * x87_r6_17;
            x87_r6_18 = x87_r6_17 * var_4;
        }
        else
        {
            long double x87_r6_14 = var_8;
            long double temp5_1 = 0f;
            x87_r6_14 - temp5_1;

            if (!(*(&((x87_r6_14 < temp5_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_14, temp5_1) ? 1 : 0) << 0xa
                    | (x87_r6_14 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_4fcdd0;

            long double x87_r6_15 = var_4;
            long double temp7_1 = 0f;
            x87_r6_15 - temp7_1;

            if (!(*(&((x87_r6_15 < temp7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_15, temp7_1) ? 1 : 0) << 0xa
                    | (x87_r6_15 == temp7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                goto label_4fcdd0;

            x87_r6_18 = var_4;
        }

        var_18_2 = var_14_1 * ecx_5[2] - x87_r6_18 * ecx_5[1];
        var_14_2 = -((var_18_1 * ecx_5[2] - x87_r6_18 * *ecx_5));
        var_10_2 = var_18_1 * ecx_5[1] - var_14_1 * *ecx_5;
    }
    else
    {
        var_18_2 = 0f;
        var_14_2 = 0f;
        var_10_2 = 0f;
    }

    long double x87_r6_28 =
        var_18_2 * *(a1 + 0x18) + var_10_2 * *(a1 + 0x20) + var_14_2 * *(a1 + 0x1c);
    long double temp6 = 0f;
    x87_r6_28 - temp6;
    a2 = x87_r6_28;
    bool c1 = /* bool c1 = unknown  {fst dword [esp+0x24], st0} */;

    if (*(&((x87_r6_28 < temp6 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
            | (FCMP_UO(x87_r6_28, temp6) ? 1 : 0) << 0xa | (x87_r6_28 == temp6 ? 1 : 0) << 0xe
            | 0x3000) + 1) & 1)
        x87_r6_28 = -(x87_r6_28);

    x87_r7_2 - x87_r6_28;

    if (!(*(&((x87_r7_2 < x87_r6_28 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, x87_r6_28) ? 1 : 0) << 0xa
        | (x87_r7_2 == x87_r6_28 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
    {
        long double x87_r7_4 = a2;
        long double temp8_1 = 0f;
        x87_r7_4 - temp8_1;
        x87_r7_2 = a2;

        if (*(&((x87_r7_4 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp8_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_2 = -(x87_r7_2);
    }

    float var_8_2 = var_14_2 * x87_r7_2 + *(a1 + 0x1c);
    long double x87_r7_6 = x87_r7_2 * var_10_2 + *(a1 + 0x20);
    *(a1 + 0x18) = var_18_2 * x87_r7_2 + *(a1 + 0x18);
    *(a1 + 0x1c) = var_8_2;
    *(a1 + 0x20) = x87_r7_6;
    sub_4ecdb0(a1);
    float ecx_3 = *(a1 + 0x38);
    long double x87_r7_10 = *(a1 + 0x34) * a5;
    *(a1 + 0x30) = *(a1 + 0x30) * a5;
    *(a1 + 0x34) = x87_r7_10;
    *(a1 + 0x38) = ecx_3 * a5;
    return a1 + 0x30;
}
