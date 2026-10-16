#include "0043F8A0-Vehicle_UpdateCockpit_10.h"
/* 0x0043f8a0 Vehicle_UpdateCockpit_10 full linked: callers=1 callees=2 */
int32_t sub_43f8a0(float a1)

{
    float var_28[0xa];
    sub_43f820(&var_28, a1);
    float var_30;
    float var_2c;
    sub_4b3c50(&var_28, &a1, &var_2c, &var_30);
    long double x87_r7 = a1;
    long double temp0 = 0f;
    x87_r7 - temp0;
    long double x87_r7_1 = a1;

    if (*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
            | (x87_r7 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_1 = -(x87_r7_1);

    long double temp1 = 0.0349065848f;
    x87_r7_1 - temp1;
    int16_t result = (x87_r7_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp1 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x41)
    {
        result = 0;
        return result;
    }

    result = 1;
    return result;
}
