#include "00529C20-Light_UpdateGlobalLight_7.h"
/* 0x00529c20 Light_UpdateGlobalLight_7 full linked: callers=1 callees=1 */
int32_t* sub_529c20(void* a1, void** a2)

{
    int32_t* result;
    result = g_c28c83;

    if (0x80 & result && !(g_c28d83 & 0x80))
    {
        int32_t eax = *(a1 + 0x1bc);
        double var_90;
        double var_88;
        long double x87_r7_8;
        double var_80;

        if (eax < 0)
            x87_r7_8 = var_80;
        else
        {
            void* eax_1 = sub_4f1030(eax);

            if (!eax_1)
                x87_r7_8 = var_80;
            else
            {
                int32_t ecx_1 = 0;
                int32_t var_10_1 = 0;
                ecx_1 = *(eax_1 + 0x1c);
                int32_t ecx_2 = *((ecx_1 << 2) + &g_a994e0);

                if (!ecx_2)
                    x87_r7_8 = var_80;
                else
                {
                    double var_60;
                    ecx_2(eax_1, &var_60);
                    float var_3c;
                    float var_38;
                    var_90 = var_60 + var_38 * 204800.0 + var_3c * 40960.0;
                    double var_58;
                    float var_30;
                    float var_2c;
                    var_88 = var_58 + var_30 * 40960.0 + var_2c * 204800.0;
                    double var_50;
                    float var_24;
                    float var_20;
                    x87_r7_8 = var_50 + var_24 * 40960.0 + var_20 * 204800.0;
                }
            }
        }
        **a2 = 0x40000000;
        *(*a2 + 4) = 0xbf800000;
        *(*a2 + 8) = *(a1 + 0x1bc);
        *(*a2 + 0xc) = var_90;
        *(*a2 + 0x10) = var_88;
        *(*a2 + 0x14) = x87_r7_8;
        *(*a2 + 0x18) = *(a1 + 0x1d8);
        *(*a2 + 0x1c) = *(a1 + 0x1e0);
        *(*a2 + 0x20) = *(a1 + 0x1e8);
        *(*a2 + 0x48) = *(a1 + 0x214);
        result = *a2;
        result[0x13] = *(a1 + 0x215);
        *(*a2 + 0x50) = *(a1 + 0x216);
    }

    if (g_c28c90 & 0x80 && !(g_c28d90 & 0x80))
    {
        **a2 = 0x3f800000;
        *(*a2 + 4) = *(a1 + 0x1b8);
        *(*a2 + 8) = *(a1 + 0x1bc);
        *(*a2 + 0xc) = *(a1 + 0x1c0);
        *(*a2 + 0x10) = *(a1 + 0x1c8);
        *(*a2 + 0x14) = *(a1 + 0x1d0);
        *(*a2 + 0x18) = *(a1 + 0x1d8);
        *(*a2 + 0x1c) = *(a1 + 0x1e0);
        *(*a2 + 0x20) = *(a1 + 0x1e8);
        *(*a2 + 0x48) = *(a1 + 0x214);
        result = *a2;
        result[0x13] = *(a1 + 0x215);
        *(*a2 + 0x50) = *(a1 + 0x216);
    }

    if (g_c28c80 & 0x80 && !(g_c28d80 & 0x80))
    {
        **a2 = 0x40000000;
        *(*a2 + 4) = *(a1 + 0x1b8);
        *(*a2 + 8) = *(a1 + 0x1bc);
        *(*a2 + 0xc) = *(a1 + 0x1c0);
        *(*a2 + 0x10) = *(a1 + 0x1c8);
        *(*a2 + 0x14) = *(a1 + 0x1d0);
        *(*a2 + 0x18) = *(a1 + 0x1d8);
        *(*a2 + 0x1c) = *(a1 + 0x1e0);
        *(*a2 + 0x20) = *(a1 + 0x1e8);
        *(*a2 + 0x48) = *(a1 + 0x214);
        result = *a2;
        result[0x13] = *(a1 + 0x215);
        *(*a2 + 0x50) = *(a1 + 0x216);
    }

    if (g_c28c75 & 0x80 && !(g_c28d75 & 0x80))
    {
        **a2 = 0x40400000;
        *(*a2 + 4) = *(a1 + 0x1b8);
        *(*a2 + 8) = *(a1 + 0x1bc);
        *(*a2 + 0xc) = *(a1 + 0x1c0);
        *(*a2 + 0x10) = *(a1 + 0x1c8);
        *(*a2 + 0x14) = *(a1 + 0x1d0);
        *(*a2 + 0x18) = *(a1 + 0x1d8);
        *(*a2 + 0x1c) = *(a1 + 0x1e0);
        *(*a2 + 0x20) = *(a1 + 0x1e8);
        *(*a2 + 0x48) = *(a1 + 0x214);
        result = *a2;
        result[0x13] = *(a1 + 0x215);
        *(*a2 + 0x50) = *(a1 + 0x216);
    }

    if (g_c28c74 & 0x80)
    {
        result = *a2;
        *result = 0x40800000;
    }

    return result;
}
