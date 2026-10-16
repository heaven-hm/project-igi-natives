#include "00428930-Menu_FormatScreen_19.h"
/* 0x00428930 Menu_FormatScreen_19 full linked: callers=1 callees=3 */
int32_t Menu_FormatScreen_19(void* a1)

{
    long double x87_r7_1 = *(a1 + 0x20) - *(a1 + 0x828);
    int32_t var_54 = 0x40c80000;
    double var_30 = *(a1 + 0x28) - *(a1 + 0x830);
    long double x87_r6_3 = *(a1 + 0x30) - *(a1 + 0x838);
    double var_28 = x87_r6_3;
    long double x87_r6_6 =
        x87_r6_3 * *(a1 + 0x850) + var_30 * *(a1 + 0x848) + x87_r7_1 * *(a1 + 0x840);
    double var_40 = x87_r6_6;
    double var_38 = x87_r6_6 * x87_r7_1;
    double var_30_1 = var_40 * var_30;
    double var_28_1 = var_40 * var_28;
    double var_20;
    memcpy(&var_20, &var_38, 0x18);
    sub_4b30c0(&var_20, 0f);
    var_38 = var_20 + var_38;
    double var_18;
    double var_30_2 = var_18 + var_30_1;
    double var_10;
    double var_28_2 = var_10 + var_28_1;
    long double x87_r0;
    long double x87_r1;
    return Menu_RequestScreen_20(x87_r0, x87_r1, a1, &var_38);
}
