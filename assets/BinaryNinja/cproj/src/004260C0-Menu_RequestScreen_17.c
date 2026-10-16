#include "gi_platform.h"
#include "004260C0-Menu_RequestScreen_17.h"
int32_t Menu_RequestScreen_17(void* a1, int32_t a2)

{
    double v_18;
    Script_CallNativeHandler_23(&v_18, Script_ExecuteLevelScript_23((*(int32_t*)(uintptr_t)(a1 + 0x2c)), a2));
    double* valA1 = Menu_DrawWidget_16(a1);
    long double x87_r7_1 = v_18 - *valA1;
    double v_10;
    long double x87_r6_1 = v_10 - valA1[1];
    double v_8;
    long double x87_r5_1 = v_8 - valA1[2];
    long double x87_r4_3 = x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_1 * x87_r7_1;
    long double f0 = 150994944.0;
    x87_r4_3 - f0;
    bool c1;

    if (!(*(&((x87_r4_3 < f0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
            | (FCMP_UO(x87_r4_3, f0) ? 1 : 0) << 0xa | (x87_r4_3 == f0 ? 1 : 0) << 0xe
            | 0x3000) + 1) & 1))
        return 0;

    return 1;
}
