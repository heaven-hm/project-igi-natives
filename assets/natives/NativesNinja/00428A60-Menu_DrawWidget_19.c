#include "00428A60-Menu_DrawWidget_19.h"
/* 0x00428a60 Menu_DrawWidget_19 full linked: callers=2 callees=3 */
int32_t Menu_DrawWidget_19(void* a1, double* a2)

{
    double var_18;
    double* var_28 = &var_18;
    var_18 = *a2 - *(a1 + 0x20);
    double var_10 = a2[1] - *(a1 + 0x28);
    double var_8 = a2[2] - *(a1 + 0x30);
    long double x87_r7_7 = sub_4b3130(var_28) * 0.125;
    memcpy(&var_18, a2, 0x18);
    double var_8_1 = x87_r7_7 + var_8;
    double* var_2c = &var_18;
    void* var_30 = a1;
    long double x87_r0;
    long double x87_r1;
    return Menu_RequestScreen_20(x87_r0, x87_r1, var_30, var_2c);
}
