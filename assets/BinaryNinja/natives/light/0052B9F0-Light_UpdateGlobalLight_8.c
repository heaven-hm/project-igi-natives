// Original IGI.EXE function: Light_UpdateGlobalLight_8 (VA 0x0052B9F0; static CFG gate PASS, CFG score 0.917).
#include "Light_UpdateGlobalLight_8.h"
void* Light_UpdateGlobalLight_8(void* context, int32_t param_2, int32_t param_3, void* param_4)

{
    void* result = context;

    if (param_2 <= *(result + 0x6c))
    {
        void* source_1 = param_4;

        if (Light_SetLightColor_8(result, param_3, source_1) == 1)
            return Light_RenderLensflare_9(context, source_1, param_2);

        long double fpu_val_7_1 = param_3;
        int32_t item_90 = 0;
        int32_t data_4;
        int32_t temp_1;
        temp_1 = HIGHD(param_3);
        data_4 = LOWD(param_3);
        double item_10_1 = fpu_val_7_1;
        int32_t item_8c_1 = 0x3fd00000;
        int32_t data_6 = (data_4 - temp_1) >> 1;
        int32_t item_88_1 = 0;
        double item_f8_1 = fpu_val_7_1 * 0.5;
        int32_t item_84_1 = 0x3fe80000;
        int32_t item_80_1 = 0;
        int32_t item_7c_1 = 0x3fd00000;
        int32_t item_78_1 = 0;
        int32_t item_74_1 = 0x3fe80000;
        int32_t item_70_1 = 0;
        int32_t item_6c_1 = 0x3fd00000;
        int32_t item_68_1 = 0;
        int32_t item_64_1 = 0x3fe80000;
        int32_t item_60_1 = 0;
        int32_t item_5c_1 = 0x3fd00000;
        int32_t item_58_1 = 0;
        int32_t item_54_1 = 0x3fe80000;
        int32_t item_50 = 0;
        int32_t item_4c_1 = 0x3fd00000;
        int32_t item_48_1 = 0;
        int32_t item_44_1 = 0x3fd00000;
        int32_t item_40_1 = 0;
        int32_t item_3c_1 = 0x3fe80000;
        int32_t item_38_1 = 0;
        int32_t item_34_1 = 0x3fe80000;
        int32_t item_30_1 = 0;
        int32_t item_2c_1 = 0x3fd00000;
        int32_t item_28_1 = 0;
        int32_t item_24_1 = 0x3fd00000;
        int32_t item_20_1 = 0;
        int32_t item_1c_1 = 0x3fe80000;
        int32_t item_18_1 = 0;
        int32_t item_14_1 = 0x3fe80000;
        int32_t item_d0 = 0;
        int32_t item_cc_1 = 0x3fd00000;
        int32_t item_c8_1 = 0;
        int32_t item_c4_1 = 0x3fd00000;
        int32_t item_c0_1 = 0;
        int32_t item_bc_1 = 0x3fd00000;
        int32_t item_b8_1 = 0;
        int32_t item_b4_1 = 0x3fd00000;
        int32_t item_b0_1 = 0;
        int32_t item_ac_1 = 0x3fe80000;
        int32_t item_a8_1 = 0;
        int32_t item_a4_1 = 0x3fe80000;
        int32_t item_a0_1 = 0;
        int32_t item_9c_1 = 0x3fe80000;
        int32_t item_98_1 = 0;
        int32_t item_94_1 = 0x3fe80000;
        int32_t item_fc_1 = data_6;
        int32_t context_2 = 0;

        while (true)
        {
            long double fpu_val_6_4 = fpu_val_7_1 * *(&item_90 + context_2);
            double item_e8;
            memcpy(&item_e8, source_1, 0x18);
            item_e8 = fpu_val_6_4 - item_f8_1 + item_e8;
            double item_e0 = fpu_val_7_1 * *(&item_50 + context_2) - item_f8_1 + item_e0;
            double item_d8 = fpu_val_7_1 * *(&item_d0 + context_2) - item_f8_1 + item_d8;
            result = Light_UpdateGlobalLight_8(context, param_2 + 1, data_6, &item_e8);
            context_2 += 8;

            if (context_2 >= 0x40)
                break;

            fpu_val_7_1 = item_10_1;
            data_6 = item_fc_1;
            source_1 = param_4;
        }
    }

    return result;
}
