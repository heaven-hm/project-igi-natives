// Original IGI.EXE function: Camera_ApplyHandiCam_17 (VA 0x004A9B8E; static CFG gate FAIL, CFG score 0.625).
#include "Camera_ApplyHandiCam_17.h"
void __fastcall Camera_ApplyHandiCam_17(int16_t a1, void* a2 @ flagP, long double a3 @ fp0)

{
    long double fpu7 = fabsl(a3);
    long double fpu6 = g_54455e;
    fpu6 - fpu7;
    *(a2 - 0xa0) = (fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
        | (fpu6 == fpu7 ? 1 : 0) << 0xe;

    if (*(a2 - 0x9f) & 0x41)
    {
        long double f1 = 0;
        a3 - f1;
        *(a2 - 0xa0) = (a3 < f1 ? 1 : 0) << 8 | (FCMP_UO(a3, f1) ? 1 : 0) << 0xa
            | (a3 == f1 ? 1 : 0) << 0xe;

        if (*(a2 - 0x9f) & 1)
        {
            *(a2 - 0x90) = 4;
            /* tailcall */
            return sub_4a8bd6();
        }

        g_544540;
        *(&a1 + 1) = *(&a1 + 1);
        return;
    }

    long double x87_r7_2 = roundl(a3);
    long double f2 = 0;
    x87_r7_2 - f2;
    *(a2 - 0xa0) = (x87_r7_2 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f2) ? 1 : 0) << 0xa
        | (x87_r7_2 == f2 ? 1 : 0) << 0xe | 0x3800;
    int32_t tmpD;
    tmpD = *(a2 - 0x9f);
    long double x87_r7_4 = a3 - x87_r7_2;
    long double f3 = 0;
    x87_r7_4 - f3;
    *(a2 - 0xa0) = (x87_r7_4 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f3) ? 1 : 0) << 0xa
        | (x87_r7_4 == f3 ? 1 : 0) << 0xe | 0x3800;
    long double fp0;
    bool c1;
    fp0 = __f2xm1(fabsl(x87_r7_4));
}
