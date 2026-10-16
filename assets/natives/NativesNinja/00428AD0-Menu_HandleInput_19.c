#include "00428AD0-Menu_HandleInput_19.h"
/* 0x00428ad0 Menu_HandleInput_19 full linked: callers=1 callees=4 */
int32_t Menu_HandleInput_19(void* a1, double* a2)

{
    double var_18;
    double* var_28 = &var_18;
    int32_t var_8 = 0;
    int32_t var_4 = 0;
    var_18 = *a2 - *(a1 + 0x20);
    double var_10 = a2[1] - *(a1 + 0x28);
    long double st0 = sub_4b3130(var_28);
    long double temp0 = 122880.0;
    st0 - temp0;
    memcpy(&var_18, a2, 0x18);

    if (*(&((st0 < temp0 ? 1 : 0) << 8 | (FCMP_UO(st0, temp0) ? 1 : 0) << 0xa
            | (st0 == temp0 ? 1 : 0) << 0xe) + 1) & 0x41)
        return Menu_DrawWidget_19(a1, &var_18);

    var_8 = var_8 + 102400.0;
    long double x87_r0;
    long double x87_r1;
    return Menu_RequestScreen_20(x87_r0, x87_r1, a1, &var_18);
}
