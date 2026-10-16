#include "AI_AFCaF.h"
int32_t AI_AFCaF(long double a1 @ fp0, float a2)

{
    int32_t __saved_esi_1;
    int32_t saved_src = __saved_esi_1;
    float srcS = a2;
    void* v_8 = srcS + 0x20;
    AI_CheckVisibility_3();
    a2 = a1;
    long double x87_r7_1 = -(*(srcS + 0x3ec8));
    long double fpu6 = a2;
    fpu6 - x87_r7_1;
    int16_t result = (fpu6 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu6, x87_r7_1) ? 1 : 0) << 0xa
        | (fpu6 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
        a2 = x87_r7_1;
    else
    {
        long double x87_r7_3 = *(srcS + 0x3ec8);
        long double f0_1 = a2;
        x87_r7_3 - f0_1;
        result = (x87_r7_3 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f0_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
            a2 = *(srcS + 0x3ec8);
    }

    double v_c_1 = a2;
    double v_14 = a1;
    char* v_18 = "A:  %f, CA: %f";
    int32_t v_1c = 0xffffffff;
    float v_20 = srcS;
    *(srcS + 0x3c78) = a2 * 0.318309873f;
    return result;
}
