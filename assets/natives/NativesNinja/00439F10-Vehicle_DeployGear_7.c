#include "00439F10-Vehicle_DeployGear_7.h"
/* 0x00439f10 Vehicle_DeployGear_7 full linked: callers=1 callees=5 */
float Vehicle_DeployGear_7(float a1, float a2) __location("eax")

{
    float edi = a1;
    void* esi = *(edi + 0x130);
    double var_18;
    WeaponType_UpdateAnim(&var_18, edi, a2);
    var_18 = var_18 + *(edi + 0x20);
    double var_10;
    double var_10_1 = var_10 + *(edi + 0x28);
    double var_8;
    double var_8_1 = var_8 + *(edi + 0x30);
    float result = *(esi + 0x124);
    long double x87_r4_3 = (g_bcab18 - *(esi + 0x30)) * result
        + (g_bcab10 - *(esi + 0x28)) * *(esi + 0x118)
        + (g_bcab08 - *(esi + 0x20)) * *(esi + 0x10c);
    long double temp1 = 0.0;
    x87_r4_3 - temp1;
    bool c1;
    result = (x87_r4_3 < temp1 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (FCMP_UO(x87_r4_3, temp1) ? 1 : 0) << 0xa | (x87_r4_3 == temp1 ? 1 : 0) << 0xe | 0x3000;

    if (!(*(&result + 1) & 0x41))
    {
        float var_44;
        result = sub_497f20(&var_44, &a1, &var_18);
        long double x87_r7_8 = a1;
        long double temp2_1 = 0f;
        x87_r7_8 - temp2_1;
        result = (x87_r7_8 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == temp2_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            float ecx_1 = a1;
            float var_4c = 6144f;
            float var_48_1 = 6144f;
            sub_498040(&var_4c, &var_4c, ecx_1);
            *(edi + 0x138);
            sub_4a56da();
            long double x87_r6_4 = 3.1415926535897944 * 0.318309873f - 0.5f;
            long double temp3_1 = 0f;
            x87_r6_4 - temp3_1;

            if (*(&((x87_r6_4 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r6_4 == temp3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                x87_r6_4 = -(x87_r6_4);

            long double x87_r5_3 = var_44 - var_4c;
            float var_40;
            long double x87_r4_5 = var_40 - var_48_1;
            long double x87_r3_7 = var_44 + var_4c;
            a2 = x87_r3_7;
            float var_74_1 = a2;
            float var_3c_1 = a2;
            long double x87_r5_5 = var_40 + var_48_1;
            return Qsprite_Register4Az(g_57bea4 + 0x18, x87_r5_3, x87_r4_5, x87_r3_7, x87_r4_5,
                x87_r5_3, x87_r5_5, a2, x87_r5_5, (x87_r6_4 + x87_r6_4) * 128f, 0f, 0f, a1,
                0x3f000000, 0, 0x1040008, 0);
        }
    }

    return result;
}
