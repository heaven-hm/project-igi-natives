#include "004513F0-AI_AFCaF.h"
/* 0x004513f0 AI_AFCaF full linked: callers=2 callees=2 */
int32_t sub_4513f0(long double a1 @ st0, float a2)

{
    int32_t __saved_esi_1;
    int32_t __saved_esi = __saved_esi_1;
    float esi = a2;
    void* var_8 = esi + 0x20;
    sub_451470();
    a2 = a1;
    long double x87_r7_1 = -(*(esi + 0x3ec8));
    long double x87_r6 = a2;
    x87_r6 - x87_r7_1;
    int16_t result = (x87_r6 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
        a2 = x87_r7_1;
    else
    {
        long double x87_r7_3 = *(esi + 0x3ec8);
        long double temp0_1 = a2;
        x87_r7_3 - temp0_1;
        result = (x87_r7_3 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp0_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
            a2 = *(esi + 0x3ec8);
    }

    double var_c_1 = a2;
    double var_14 = a1;
    char* var_18 = "A:  %f, CA: %f";
    int32_t var_1c = 0xffffffff;
    float var_20 = esi;
    *(esi + 0x3c78) = a2 * 0.318309873f;
    return result;
}
