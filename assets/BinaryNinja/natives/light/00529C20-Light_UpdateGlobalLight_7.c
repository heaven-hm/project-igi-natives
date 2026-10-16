#include "Light_UpdateGlobalLight_7.h"
int32_t* Light_UpdateGlobalLight_7(void* a1, void** a2)

{
    int32_t* result;
    result = g_c28c83;

    if (0x80 & result && !(g_c28d83 & 0x80))
    {
        int32_t valA = *(a1 + 0x1bc);
        double v_90;
        double v_88;
        long double x87_r7_8;
        double v_80;

        if (valA < 0)
            x87_r7_8 = v_80;
        else
        {
            void* valA1 = Script_ExecuteLevelScript_4(valA);

            if (!valA1)
                x87_r7_8 = v_80;
            else
            {
                int32_t objC1 = 0;
                int32_t v_10_1 = 0;
                objC1 = *(valA1 + 0x1c);
                int32_t objC2 = *((objC1 << 2) + &g_a994e0);

                if (!objC2)
                    x87_r7_8 = v_80;
                else
                {
                    double v_60;
                    objC2(valA1, &v_60);
                    float v_3c;
                    float v_38;
                    v_90 = v_60 + v_38 * 204800.0 + v_3c * 40960.0;
                    double v_58;
                    float v_30;
                    float v_2c;
                    v_88 = v_58 + v_30 * 40960.0 + v_2c * 204800.0;
                    double v_50;
                    float v_24;
                    float v_20;
                    x87_r7_8 = v_50 + v_24 * 40960.0 + v_20 * 204800.0;
                }
            }
        }
        **a2 = 0x40000000;
        *(*a2 + 4) = 0xbf800000;
        *(*a2 + 8) = *(a1 + 0x1bc);
        *(*a2 + 0xc) = v_90;
        *(*a2 + 0x10) = v_88;
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
