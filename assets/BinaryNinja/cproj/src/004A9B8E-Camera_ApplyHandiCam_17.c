#include "gi_platform.h"
#include "004A9B8E-Camera_ApplyHandiCam_17.h"
void __fastcall Camera_ApplyHandiCam_17(int16_t a1, void* a2 , long double a3 )

{
    long double fpu7 = fabsl(a3);
    long double fpu6 = g_54455e;
    fpu6 - fpu7;
    (*(int32_t*)(uintptr_t)(a2 - 0xa0)) = (fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
        | (fpu6 == fpu7 ? 1 : 0) << 0xe;

    if ((*(int32_t*)(uintptr_t)(a2 - 0x9f)) & 0x41)
    {
        long double f1 = 0;
        a3 - f1;
        (*(int32_t*)(uintptr_t)(a2 - 0xa0)) = (a3 < f1 ? 1 : 0) << 8 | (FCMP_UO(a3, f1) ? 1 : 0) << 0xa
            | (a3 == f1 ? 1 : 0) << 0xe;

        if ((*(int32_t*)(uintptr_t)(a2 - 0x9f)) & 1)
        {
            (*(int32_t*)(uintptr_t)(a2 - 0x90)) = 4;
            /* tailcall */
            return sub_4a8bd6();
        }

        g_544540;
        (*(int32_t*)(uintptr_t)(&a1 + 1)) = (*(int32_t*)(uintptr_t)(&a1 + 1));
        return;
    }

    long double x87_r7_2 = roundl(a3);
    long double f2 = 0;
    x87_r7_2 - f2;
    (*(int32_t*)(uintptr_t)(a2 - 0xa0)) = (x87_r7_2 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f2) ? 1 : 0) << 0xa
        | (x87_r7_2 == f2 ? 1 : 0) << 0xe | 0x3800;
    int32_t tmpD;
    tmpD = (*(int32_t*)(uintptr_t)(a2 - 0x9f));
    long double x87_r7_4 = a3 - x87_r7_2;
    long double f3 = 0;
    x87_r7_4 - f3;
    (*(int32_t*)(uintptr_t)(a2 - 0xa0)) = (x87_r7_4 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f3) ? 1 : 0) << 0xa
        | (x87_r7_4 == f3 ? 1 : 0) << 0xe | 0x3800;
    long double fp0;
    bool c1;
    fp0 = __f2xm1(fabsl(x87_r7_4));
}
