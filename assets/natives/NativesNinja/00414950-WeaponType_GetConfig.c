#include "00414950-WeaponType_GetConfig.h"
/* 0x00414950 WeaponType_GetConfig full linked: callers=28 callees=3 */
int32_t WeaponType_GetConfig(int32_t a1 @ 0xc, int32_t a2)

{
    int32_t arg_14 = 0;
    int32_t arg_18 = 0;
    double arg_4;
    char result = sub_4b3320(&arg_4);

    if (result)
        return result;

    sub_4b3100(&arg_4);
    int32_t var_8 = a2;
    sub_4b28a0(a1);
    long double x87_r7_1 = arg_4;
    long double temp0 = 0.0;
    x87_r7_1 - temp0;
    return (x87_r7_1 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp0) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp0 ? 1 : 0) << 0xe;
}
