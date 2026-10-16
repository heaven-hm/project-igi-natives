#include "0045DAA0-AI_AlertAllies_16.h"
/* 0x0045daa0 AI_AlertAllies_16 full linked: callers=3 callees=7 */
int32_t sub_45daa0(long double a1 @ st0, void* a2, double* a3)

{
    if (sub_4b3320(a3))
        return 1;

    double var_18;
    memcpy(&var_18, a3, 0x18);
    sub_4b3100(&var_18);
    double var_10;
    double var_8;
    long double x87_r4_3 =
        var_8 * *(a2 + 0x94) + var_10 * *(a2 + 0x88) + var_18 * *(a2 + 0x7c);
    long double temp0 = 0.0;
    x87_r4_3 - temp0;
    void var_40;
    bool c1;

    if (*(&((x87_r4_3 < temp0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (FCMP_UO(x87_r4_3, temp0) ? 1 : 0) << 0xa | (x87_r4_3 == temp0 ? 1 : 0) << 0xe | 0x3000) + 1)
        & 0x41)
    {
        memcpy(&var_40, &var_18, 0x18);
        int32_t eax_4 = WeaponType_GetConfig();
        eax_4 = 1;
        *(a2 + 0x50c) = a1 + 3.14159274f;
        return eax_4;
    }

    memcpy(&var_40, &var_18, 0x18);
    int32_t eax_3 = WeaponType_GetConfig();
    *(a2 + 0x50c) = a1;
    eax_3 = 0;
    return eax_3;
}
