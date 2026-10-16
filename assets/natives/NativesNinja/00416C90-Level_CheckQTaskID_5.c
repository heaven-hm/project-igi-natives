#include "00416C90-Level_CheckQTaskID_5.h"
/* 0x00416c90 Level_CheckQTaskID_5 full linked: callers=12 callees=1 */
long double Level_CheckQTaskID_5(float a1, double* a2 @ 0xc, float a3)

{
    float esi = a1;
    double* eax = *(esi + 4);
    double var_18 = *eax - *a2;
    double var_10 = eax[1] - a2[1];
    double var_8 = eax[2] - a2[2];
    long double x87_r7_8 = sub_4b3130(&var_18) - a3 - *(esi + 0xc);
    a1 = x87_r7_8;
    long double temp0 = 0f;
    x87_r7_8 - temp0;

    if (*(&((x87_r7_8 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp0) ? 1 : 0) << 0xa
            | (x87_r7_8 == temp0 ? 1 : 0) << 0xe) + 1) & 1)
        return *(esi + 8);

    long double x87_r7_10 = a1;
    long double temp1 = *(esi + 0x10);
    x87_r7_10 - temp1;

    if (!(*(&((x87_r7_10 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp1) ? 1 : 0) << 0xa
            | (x87_r7_10 == temp1 ? 1 : 0) << 0xe) + 1) & 1))
        return 0f;

    return (*(esi + 0x10) - a1) * *(esi + 8) / *(esi + 0x10);
}
