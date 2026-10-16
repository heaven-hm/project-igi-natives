#include "00531E10-Sprite3D_LoadParameters.h"
/* 0x00531e10 Sprite3D_LoadParameters full linked: callers=0 callees=4 */
int32_t sub_531e10(float a1)

{
    float esi = a1;
    int32_t ecx = *(esi + 0x6c);
    float var_8 = *(esi + 0x68);
    int32_t var_4 = ecx;
    float var_18;
    sub_497f20(&var_18, &a1, esi + 0x20);
    long double x87_r7 = a1;
    long double temp0 = 0f;
    x87_r7 - temp0;
    int16_t result = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x41)
        return result;

    float var_10;
    sub_498040(&var_10, &var_8, a1);
    float var_14;
    float var_c;
    float var_28_1 = var_c + var_14;
    float var_24_1 = var_10 + var_18;
    float var_20_1 = var_18 - var_10;
    float var_1c_1 = var_14 - var_c;
    uint32_t eax_1 = sub_499ff0(a1);
    return sub_4b51f0(*(esi + 0x80), var_20_1, var_1c_1, var_24_1, var_1c_1, var_20_1, var_28_1,
        var_24_1, var_28_1, 255f, 255f, 255f, *(esi + 0x7c), *(esi + 0x84), eax_1);
}
