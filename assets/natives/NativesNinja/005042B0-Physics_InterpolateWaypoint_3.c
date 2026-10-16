#include "005042B0-Physics_InterpolateWaypoint_3.h"
/* 0x005042b0 Physics_InterpolateWaypoint_3 full linked: callers=3 callees=0 */
double* sub_5042b0(void* a1, double* a2)

{
    double* result = a2;
    long double x87_r7_1 = *result - *(a1 + 0x50);
    long double x87_r6_1 = result[1] - *(a1 + 0x58);
    long double x87_r5_1 = result[2] - *(a1 + 0x60);
    float var_c = x87_r5_1 * *(a1 + 0x80) + x87_r6_1 * *(a1 + 0x74) + x87_r7_1 * *(a1 + 0x68);
    float var_8 = x87_r5_1 * *(a1 + 0x84) + x87_r6_1 * *(a1 + 0x78) + x87_r7_1 * *(a1 + 0x6c);
    float var_4 = x87_r5_1 * *(a1 + 0x88) + x87_r6_1 * *(a1 + 0x7c) + x87_r7_1 * *(a1 + 0x70);
    long double x87_r7_4 = var_c;
    long double temp1 = *(a1 + 0x90);
    x87_r7_4 - temp1;
    result = (x87_r7_4 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp1) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp1 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        result = 0;
        return result;
    }

    long double x87_r7_5 = var_8;
    long double temp2 = *(a1 + 0x94);
    x87_r7_5 - temp2;
    result = (x87_r7_5 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp2) ? 1 : 0) << 0xa
        | (x87_r7_5 == temp2 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        result = 0;
        return result;
    }

    long double x87_r7_6 = var_4;
    long double temp3 = *(a1 + 0x98);
    x87_r7_6 - temp3;
    result = (x87_r7_6 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp3) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp3 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        result = 0;
        return result;
    }

    long double x87_r7_8 = -(*(a1 + 0x90));
    long double temp4 = var_c;
    x87_r7_8 - temp4;
    result = (x87_r7_8 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp4) ? 1 : 0) << 0xa
        | (x87_r7_8 == temp4 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        result = 0;
        return result;
    }

    long double x87_r7_10 = -(*(a1 + 0x94));
    long double temp5 = var_8;
    x87_r7_10 - temp5;
    result = (x87_r7_10 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp5) ? 1 : 0) << 0xa
        | (x87_r7_10 == temp5 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x41))
    {
        result = 0;
        return result;
    }

    long double x87_r7_12 = -(*(a1 + 0x98));
    long double temp6 = var_4;
    x87_r7_12 - temp6;
    result = (x87_r7_12 < temp6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, temp6) ? 1 : 0) << 0xa
        | (x87_r7_12 == temp6 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x41)
    {
        result = 1;
        return result;
    }

    result = 0;
    return result;
}
