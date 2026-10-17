// Original IGI.EXE function: AI_AlertAllies_16 (VA 0x0045DAA0; static CFG gate PASS, CFG score 0.857).
#include "AI_AlertAllies_16.h"
int32_t AI_AlertAllies_16(long double a1 @ fp0, void* a2, double* a3)

{
    if (Sys_PopStack_11(a3))
        return 1;

    double v_18;
    memcpy(&v_18, a3, 0x18);
    Sys_FreeMemory_11(&v_18);
    double v_10;
    double v_8;
    long double x87_r4_3 =
        v_8 * *(a2 + 0x94) + v_10 * *(a2 + 0x88) + v_18 * *(a2 + 0x7c);
    long double f0 = 0.0;
    x87_r4_3 - f0;
    void v_40;
    bool c1;

    if (*(&((x87_r4_3 < f0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (FCMP_UO(x87_r4_3, f0) ? 1 : 0) << 0xa | (x87_r4_3 == f0 ? 1 : 0) << 0xe | 0x3000) + 1)
        & 0x41)
    {
        memcpy(&v_40, &v_18, 0x18);
        int32_t valA4 = WeaponType_GetConfig();
        valA4 = 1;
        *(a2 + 0x50c) = a1 + 3.14159274f;
        return valA4;
    }

    memcpy(&v_40, &v_18, 0x18);
    int32_t valA3 = WeaponType_GetConfig();
    *(a2 + 0x50c) = a1;
    valA3 = 0;
    return valA3;
}
