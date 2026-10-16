#include "004260C0-Menu_RequestScreen_17.h"
/* 0x004260c0 Menu_RequestScreen_17 full linked: callers=2 callees=3 */
int32_t Menu_RequestScreen_17(void* a1, int32_t a2)

{
    double var_18;
    sub_4f9770(&var_18, sub_4f9720(*(a1 + 0x2c), a2));
    double* eax_1 = Menu_DrawWidget_16(a1);
    long double x87_r7_1 = var_18 - *eax_1;
    double var_10;
    long double x87_r6_1 = var_10 - eax_1[1];
    double var_8;
    long double x87_r5_1 = var_8 - eax_1[2];
    long double x87_r4_3 = x87_r5_1 * x87_r5_1 + x87_r6_1 * x87_r6_1 + x87_r7_1 * x87_r7_1;
    long double temp0 = 150994944.0;
    x87_r4_3 - temp0;
    bool c1;

    if (!(*(&((x87_r4_3 < temp0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
            | (FCMP_UO(x87_r4_3, temp0) ? 1 : 0) << 0xa | (x87_r4_3 == temp0 ? 1 : 0) << 0xe
            | 0x3000) + 1) & 1))
        return 0;

    return 1;
}
