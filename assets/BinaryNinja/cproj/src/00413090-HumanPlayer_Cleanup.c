#include "gi_platform.h"
#include "00413090-HumanPlayer_Cleanup.h"
int32_t HumanPlayer_Cleanup(void* a1, int32_t* a2)

{
    double v_30;
    AI_FireWeapon_23(&v_30, (*(int32_t*)(uintptr_t)(a1 + 0x4ec)));
    double* valA1 = *a2;
    double v_18 = *valA1 - v_30;
    double v_28;
    double v_10 = valA1[1] - v_28;
    double v_20;
    double v_8 = valA1[2] - v_20;
    long double fp0 = Sys_OpenFileStream_11(&v_18);
    long double f0 = 102400.0;
    fp0 - f0;

    if (*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
            | (fp0 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        (*(int32_t*)(uintptr_t)(a1 + 0xdc8)) = 0x3f800000;

    long double x87_r6_1 = fp0 - a2[1];
    long double f1 = 0.0;
    x87_r6_1 - f1;
    int16_t result = (x87_r6_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f1) ? 1 : 0) << 0xa
        | (x87_r6_1 == f1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
        (*(int32_t*)(uintptr_t)(a1 + 0xddc)) = 0x40000000;

    return result;
}
