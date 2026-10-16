#include "00482D70-FX_SmokeEmit_3.h"
/* 0x00482d70 FX_SmokeEmit_3 full linked: callers=1 callees=11 */
float sub_482d70(void* a1) __location("eax")

{
    long double x87_r7 = *(a1 + 0x110);
    long double temp0 = 0f;
    x87_r7 - temp0;
    int32_t var_c4;
    float result;
    double var_40;
    double var_38;
    double var_18;
    float var_9c;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        sub_4b38e0(&var_c4, *(a1 + 0x108), 0f, *(a1 + 0x10c));
        long double x87_r7_2 = -(*(a1 + 0x110));
        float var_c0;
        double var_70 = var_c0 * x87_r7_2;
        float var_b4;
        double var_68 = var_b4 * x87_r7_2;
        float var_a8;
        long double x87_r7_3 = x87_r7_2 * var_a8;
        var_40 = *(a1 + 0xbc) * x87_r7_3 + *(a1 + 0xb8) * var_68 + *(a1 + 0xb4) * var_70;
        var_38 = *(a1 + 0xc8) * x87_r7_3 + *(a1 + 0xc4) * var_68 + *(a1 + 0xc0) * var_70;
        long double x87_r7_5 = x87_r7_3 * *(a1 + 0xd4) + *(a1 + 0xd0) * var_68;
        long double x87_r6_16 = *(a1 + 0xcc) * var_70;
        memcpy(&var_70, a1 + 0x70, 0x18);
        int32_t edx_2 = var_70;
        int32_t var_58;
        memcpy(&var_58, a1 + 0xf0, 0x18);
        double var_60;
        double var_48;
        double var_48_1 = var_60 * 0.050000000000000003 + var_48 * 0.94999999999999996;
        long double x87_r6_21 = var_70 + var_40;
        int32_t ecx_1 = *(&var_70 + 4);
        var_58 = edx_2;
        var_18 = x87_r6_21;
        int32_t var_54_1 = ecx_1;
        int32_t var_50_1 = var_68;
        int32_t var_4c_1 = *(&var_68 + 4);
        double var_10_1 = var_68 + var_38;
        memcpy(a1 + 0xf0, &var_58, 0x18);
        double var_8_1 = var_48_1 + x87_r7_5 + x87_r6_16;
        sub_483100(&var_9c, &var_18, &var_58);
        long double st0_1;
        bool c1_1;
        bool c2_1;
        st0_1 = __fptan(0.78539818525314331);
🚫🚫🚫        /* unimplemented  {fstp st0, st0} */
        /* unimplemented  {fstp st0, st0} */
🚫🚫🚫        result = /* result = unimplemented  {fstp dword [esp+0x5c], st0} */;
        /* unimplemented  {fstp dword [esp+0x5c], st0} */
    }
    else
    {
        memcpy(&var_18, a1 + 0x70, 0x18);
        memcpy(&var_9c, a1 + 0x88, 0x28);
        result = *(a1 + 0xb0);
        memcpy(a1 + 0xf0, a1 + 0x70, 0x18);
    }
    sub_4b3b60(&var_c4, -1.57079637f);
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x44]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x2c]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x40]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x20]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x34]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0xc]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    var_40 = /* var_40.d = unimplemented  {fstp dword [esp+0x90], st0} */;
    /* unimplemented  {fstp dword [esp+0x90], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x3c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x28]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x38]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x1c]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x34]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x10]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    *(&var_40 + 4) = /* var_40:4.d = unimplemented  {fstp dword [esp+0x94], st0} */;
    /* unimplemented  {fstp dword [esp+0x94], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x3c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x2c]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x38]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x20]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x34]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x14]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    var_38 = /* var_38.d = unimplemented  {fstp dword [esp+0x98], st0} */;
    /* unimplemented  {fstp dword [esp+0x98], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x44]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x18]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x40]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0xc]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    *(&var_38 + 4) = /* var_38:4.d = unimplemented  {fstp dword [esp+0x9c], st0} */;
    /* unimplemented  {fstp dword [esp+0x9c], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x28]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x44]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x1c]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x40]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x10]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_30 = /* float var_30 = unimplemented  {fstp dword [esp+0xa0], st0} */;
    /* unimplemented  {fstp dword [esp+0xa0], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x48]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x2c]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x44]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x20]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x40]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x14]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_2c = /* float var_2c = unimplemented  {fstp dword [esp+0xa4], st0} */;
    /* unimplemented  {fstp dword [esp+0xa4], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x24]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x18]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x4c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0xc]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_28 = /* float var_28 = unimplemented  {fstp dword [esp+0xa8], st0} */;
    /* unimplemented  {fstp dword [esp+0xa8], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x28]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x1c]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x4c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x10]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
    int32_t var_a0;
    int32_t var_78;
    int32_t var_1c = var_a0 + var_78 + 1;
🚫🚫🚫    float var_24 = /* float var_24 = unimplemented  {fstp dword [esp+0xac], st0} */;
    /* unimplemented  {fstp dword [esp+0xac], st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x54]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x2c]} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x50]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x20]} */
    memcpy(a1 + 0x20, &var_18, 0x18);
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫    /* unimplemented  {fld st0, dword [esp+0x4c]} */
🚫🚫    /* unimplemented  {fmul st0, dword [esp+0x14]} */
🚫🚫🚫    /* unimplemented  {faddp st1, st0} */
    /* unimplemented  {faddp st1, st0} */
🚫🚫🚫    float var_20 = /* float var_20 = unimplemented  {fstp dword [esp+0xb0], st0} */;
    /* unimplemented  {fstp dword [esp+0xb0], st0} */
    *(a1 + 0x60) = result;
    memcpy(a1 + 0x38, &var_40, 0x28);
    return result;
}
