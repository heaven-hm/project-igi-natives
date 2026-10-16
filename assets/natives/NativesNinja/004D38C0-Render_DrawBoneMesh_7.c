#include "004D38C0-Render_DrawBoneMesh_7.h"
/* 0x004d38c0 Render_DrawBoneMesh_7 full linked: callers=9 callees=4 */
int32_t sub_4d38c0(int32_t a1, void* a2)

{
    float var_28;
    memcpy(&var_28, a1, 0x28);
    float var_18;
    float var_8;
    long double x87_r7_2 = var_8 + var_18 + var_28;
    long double temp0 = 0f;
    x87_r7_2 - temp0;
    float var_48;
    float var_3c;

    if (*(&((x87_r7_2 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp0) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_8 = var_18;
        long double temp1_1 = var_28;
        x87_r7_8 - temp1_1;
        int32_t ecx_1 = 0;
        var_48 = 1.40129846e-45f;
        int32_t var_44_1 = 2;
        int32_t var_40_1 = 0;

        if (!(*(&((x87_r7_8 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_8 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            ecx_1 = 1;

        long double x87_r7_9 = var_8;
        long double temp2_1 = (&var_28)[ecx_1 * 4];
        x87_r7_9 - temp2_1;

        if (!(*(&((x87_r7_9 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_9 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            ecx_1 = 2;

        int32_t edx_1 = (&var_48)[ecx_1];
        int32_t esi_1 = (&var_48)[edx_1];
        long double x87_r7_14 =
            sqrtl((&var_28)[ecx_1 * 4] - (&var_28)[edx_1 * 4] - (&var_28)[esi_1 * 4] + 1f);
        (&var_3c)[ecx_1] = x87_r7_14 * 0.5f;
        long double temp3_1 = 0f;
        x87_r7_14 - temp3_1;

        if (!(*(&((x87_r7_14 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, temp3_1) ? 1 : 0) << 0xa
                | (x87_r7_14 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            x87_r7_14 = 0.5f / x87_r7_14;

        int32_t edi_3 = edx_1 * 3;
        int32_t eax_9 = ecx_1 * 3;
        int32_t ebx_2 = esi_1 * 3;
        (&var_3c)[edx_1] = ((&var_28)[edi_3 + ecx_1] + (&var_28)[eax_9 + edx_1]) * x87_r7_14;
        (&var_3c)[esi_1] = ((&var_28)[ecx_1 + ebx_2] + (&var_28)[eax_9 + esi_1]) * x87_r7_14;
        float var_30_1 = -((((&var_28)[edi_3 + esi_1] - (&var_28)[ebx_2 + edx_1]) * x87_r7_14));
    }
    else
    {
        long double x87_r7_4 = sqrtl(x87_r7_2 + 1f);
        float var_30 = x87_r7_4 * 0.5f;
        long double x87_r7_5 = 0.5f / x87_r7_4;
        float var_14;
        float var_c;
        var_3c = -(((var_14 - var_c) * x87_r7_5));
        float var_20;
        float var_10;
        float var_38_1 = -(((var_10 - var_20) * x87_r7_5));
        float var_24;
        float var_1c;
        float var_34_1 = -(((var_24 - var_1c) * x87_r7_5));
    }

    int32_t var_4;
    int32_t var_2c = var_4;
    sub_4d38a0(&var_28, &var_3c);
    float esi_2 = *(a2 + 8);
    var_48 = 0f;
    int32_t var_44_2 = 0;
    int32_t var_40_2 = 0;
    sub_4d3a90(&var_28, &var_3c, &var_48, esi_2, 0f);
    *(esi_2 + 0x60) = 0;
    *(esi_2 + 0x64) = 0;
    *(esi_2 + 0x68) = 0;
    *(esi_2 + 0x6c) = 0x3f800000;
    *(esi_2 + 0x70) = 0;
    return sub_4d38a0(0, 0);
}
