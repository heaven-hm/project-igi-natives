#include "004A2800-Camera_ApplyLineFilter_2.h"
/* 0x004a2800 Camera_ApplyLineFilter_2 full linked: callers=1 callees=0 */
int32_t sub_4a2800(void* a1, float a2, float a3, float a4)

{
    long double x87_r7 = 0f;
    long double temp0 = a2;
    x87_r7 - temp0;
    long double x87_r7_1;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_2 = 1f;
        long double temp1_1 = a2;
        x87_r7_2 - temp1_1;

        x87_r7_1 = !(*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1)
            & 1) ? a2 : 1f;
    }
    else
        x87_r7_1 = 0f;

    *(a1 + 0x64) = x87_r7_1;
    long double x87_r7_3 = 0f;
    long double temp2 = a3;
    x87_r7_3 - temp2;
    long double x87_r7_4;

    if (*(&((x87_r7_3 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp2) ? 1 : 0) << 0xa
        | (x87_r7_3 == temp2 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_5 = 1f;
        long double temp3_1 = a3;
        x87_r7_5 - temp3_1;

        x87_r7_4 = !(*(&((x87_r7_5 < temp3_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_5, temp3_1) ? 1 : 0) << 0xa | (x87_r7_5 == temp3_1 ? 1 : 0) << 0xe) + 1)
            & 1) ? a3 : 1f;
    }
    else
        x87_r7_4 = 0f;

    *(a1 + 0x68) = x87_r7_4;
    long double x87_r7_6 = 0f;
    long double temp4 = a4;
    x87_r7_6 - temp4;
    int16_t eax = (x87_r7_6 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp4) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp4 ? 1 : 0) << 0xe;

    if (!(*(&eax + 1) & 0x41))
    {
        *(a1 + 0x6c) = 0;
        return eax;
    }

    long double x87_r7_7 = 1f;
    long double temp5 = a4;
    x87_r7_7 - temp5;
    eax = (x87_r7_7 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp5) ? 1 : 0) << 0xa
        | (x87_r7_7 == temp5 ? 1 : 0) << 0xe;

    if (!(*(&eax + 1) & 1))
    {
        *(a1 + 0x6c) = a4;
        return a4;
    }

    *(a1 + 0x6c) = 0x3f800000;
    return eax;
}
