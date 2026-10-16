#include "Level_CheckQTaskID_5.h"
long double Level_CheckQTaskID_5(float a1, double* a2 @ 0xc, float a3)

{
    float srcS = a1;
    double* valA = *(srcS + 4);
    double v_18 = *valA - *a2;
    double v_10 = valA[1] - a2[1];
    double v_8 = valA[2] - a2[2];
    long double x87_r7_8 = Sys_OpenFileStream_11(&v_18) - a3 - *(srcS + 0xc);
    a1 = x87_r7_8;
    long double f0 = 0f;
    x87_r7_8 - f0;

    if (*(&((x87_r7_8 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f0) ? 1 : 0) << 0xa
            | (x87_r7_8 == f0 ? 1 : 0) << 0xe) + 1) & 1)
        return *(srcS + 8);

    long double x87_r7_10 = a1;
    long double f1 = *(srcS + 0x10);
    x87_r7_10 - f1;

    if (!(*(&((x87_r7_10 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f1) ? 1 : 0) << 0xa
            | (x87_r7_10 == f1 ? 1 : 0) << 0xe) + 1) & 1))
        return 0f;

    return (*(srcS + 0x10) - a1) * *(srcS + 8) / *(srcS + 0x10);
}
