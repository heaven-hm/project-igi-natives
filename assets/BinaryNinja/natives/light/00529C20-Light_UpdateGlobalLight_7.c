// Original IGI.EXE function: Light_UpdateGlobalLight_7 (VA 0x00529C20; static CFG gate PASS, CFG score 1.000).
#include "Light_UpdateGlobalLight_7.h"
int32_t* Light_UpdateGlobalLight_7(void* context, void** param_2)

{
    int32_t* result;
    result = g_c28c83;

    if (0x80 & result && !(g_c28d83 & 0x80))
    {
        int32_t data_val = *(context + 0x1bc);
        double item_90;
        double item_88;
        long double fpu_val_7_8;
        double item_80;

        if (data_val < 0)
            fpu_val_7_8 = item_80;
        else
        {
            void* data_1 = Script_ExecuteLevelScript_4(data_val);

            if (!data_1)
                fpu_val_7_8 = item_80;
            else
            {
                int32_t entity_1 = 0;
                int32_t item_10_1 = 0;
                entity_1 = *(data_1 + 0x1c);
                int32_t entity_2 = *((entity_1 << 2) + &g_a994e0);

                if (!entity_2)
                    fpu_val_7_8 = item_80;
                else
                {
                    double item_60;
                    entity_2(data_1, &item_60);
                    float item_3c;
                    float item_38;
                    item_90 = item_60 + item_38 * 204800.0 + item_3c * 40960.0;
                    double item_58;
                    float item_30;
                    float item_2c;
                    item_88 = item_58 + item_30 * 40960.0 + item_2c * 204800.0;
                    double item_50;
                    float item_24;
                    float item_20;
                    fpu_val_7_8 = item_50 + item_24 * 40960.0 + item_20 * 204800.0;
                }
            }
        }
        **param_2 = 0x40000000;
        *(*param_2 + 4) = 0xbf800000;
        *(*param_2 + 8) = *(context + 0x1bc);
        *(*param_2 + 0xc) = item_90;
        *(*param_2 + 0x10) = item_88;
        *(*param_2 + 0x14) = fpu_val_7_8;
        *(*param_2 + 0x18) = *(context + 0x1d8);
        *(*param_2 + 0x1c) = *(context + 0x1e0);
        *(*param_2 + 0x20) = *(context + 0x1e8);
        *(*param_2 + 0x48) = *(context + 0x214);
        result = *param_2;
        result[0x13] = *(context + 0x215);
        *(*param_2 + 0x50) = *(context + 0x216);
    }

    if (g_c28c90 & 0x80 && !(g_c28d90 & 0x80))
    {
        **param_2 = 0x3f800000;
        *(*param_2 + 4) = *(context + 0x1b8);
        *(*param_2 + 8) = *(context + 0x1bc);
        *(*param_2 + 0xc) = *(context + 0x1c0);
        *(*param_2 + 0x10) = *(context + 0x1c8);
        *(*param_2 + 0x14) = *(context + 0x1d0);
        *(*param_2 + 0x18) = *(context + 0x1d8);
        *(*param_2 + 0x1c) = *(context + 0x1e0);
        *(*param_2 + 0x20) = *(context + 0x1e8);
        *(*param_2 + 0x48) = *(context + 0x214);
        result = *param_2;
        result[0x13] = *(context + 0x215);
        *(*param_2 + 0x50) = *(context + 0x216);
    }

    if (g_c28c80 & 0x80 && !(g_c28d80 & 0x80))
    {
        **param_2 = 0x40000000;
        *(*param_2 + 4) = *(context + 0x1b8);
        *(*param_2 + 8) = *(context + 0x1bc);
        *(*param_2 + 0xc) = *(context + 0x1c0);
        *(*param_2 + 0x10) = *(context + 0x1c8);
        *(*param_2 + 0x14) = *(context + 0x1d0);
        *(*param_2 + 0x18) = *(context + 0x1d8);
        *(*param_2 + 0x1c) = *(context + 0x1e0);
        *(*param_2 + 0x20) = *(context + 0x1e8);
        *(*param_2 + 0x48) = *(context + 0x214);
        result = *param_2;
        result[0x13] = *(context + 0x215);
        *(*param_2 + 0x50) = *(context + 0x216);
    }

    if (g_c28c75 & 0x80 && !(g_c28d75 & 0x80))
    {
        **param_2 = 0x40400000;
        *(*param_2 + 4) = *(context + 0x1b8);
        *(*param_2 + 8) = *(context + 0x1bc);
        *(*param_2 + 0xc) = *(context + 0x1c0);
        *(*param_2 + 0x10) = *(context + 0x1c8);
        *(*param_2 + 0x14) = *(context + 0x1d0);
        *(*param_2 + 0x18) = *(context + 0x1d8);
        *(*param_2 + 0x1c) = *(context + 0x1e0);
        *(*param_2 + 0x20) = *(context + 0x1e8);
        *(*param_2 + 0x48) = *(context + 0x214);
        result = *param_2;
        result[0x13] = *(context + 0x215);
        *(*param_2 + 0x50) = *(context + 0x216);
    }

    if (g_c28c74 & 0x80)
    {
        result = *param_2;
        *result = 0x40800000;
    }

    return result;
}
