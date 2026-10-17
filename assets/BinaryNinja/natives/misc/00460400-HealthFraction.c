// Original IGI.EXE function: HealthFraction (VA 0x00460400; static CFG gate PASS, CFG score 1.000).
#include "HealthFraction.h"
int32_t HealthFraction(int32_t context, int32_t* param_2)

{
    int32_t* context_val = param_2;
    void* flagP = *context_val;
    void* source_val = *(Level_LoadLevel_6() + 0x5c);
    int32_t data_1 = g_c28b44;
    int32_t entity_val = g_c28b48;
    int32_t result = *(source_val + 0xe8);

    if (result == 1)
    {
        void* source_1 = Table_GetAt(context + 0x4c4, 0);

        if (source_1)
        {
            uint32_t data_4 = FX_DebrisSpawn_8();
            int32_t entity_1 = 0;
            entity_1 = *(source_1 + 0x1c);
            void* data_2 = *(((data_4 * 0x180 + entity_1) << 2) + &g_a96ae0);

            if (data_2)
                data_2(source_1, context_val);
        }

        if (*(context + 0x7b8))
            FX_FragmentSimulate_9(*context_val);
        else if (!AI_CheckHearing_21(context))
            FX_FragmentSimulate_9(*context_val);
        else
        {
            param_2 = *context_val;
            int32_t entity_2 = 0;
            entity_2 = *(AI_CheckHearing_21(context) + 0x1c);
            int32_t source_4 = *(((entity_2 + Level_SetMission_2() * 0x180) << 2) + &g_a96ae0);

            if (source_4)
                source_4(AI_CheckHearing_21(context), &param_2);
        }

        long double fpu_val_7_3 = 1.0f - *(context + 0x254) / *(context + 0x258);
        float item_14_1 = fpu_val_7_3;
        long double f0_1 = 0.0f;
        fpu_val_7_3 - f0_1;

        if (*(&((fpu_val_7_3 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_3 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
            item_14_1 = 0.0f;

        float item_10_1 = data_1 * 0.0625f;
        param_2 = Sys_CloseFileStream_17(flagP + 0x8c);
        param_2 = item_10_1 - param_2 * 0.5f;
        float item_c_1 = entity_val * 0.895833313f;
        int32_t data_16 = Sys_ExecuteBytecode_17(flagP + 0x8c);
        result = Sys_ResolveSymbol_14(flagP + 0x8c, param_2, item_c_1 - data_16 * 0.5f, 128.0f, 128.0f, 128.0f, 0, 0, 0);
        long double fpu_val_7_14 = item_14_1;
        long double f1_1 = 0.0f;
        fpu_val_7_14 - f1_1;
        result = (fpu_val_7_14 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_14, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_14 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            param_2 = item_10_1 - 2.0f;
            context = item_c_1 - 2.0f;
            long double fpu_val_7_20 = Sys_CloseFileStream_17(flagP + 0xa4) * 0.5f;
            float item_4_1 = param_2 - fpu_val_7_20;
            float item_10_2 = context - Sys_ExecuteBytecode_17(flagP + 0xa4) * 0.5f;
            float item_c_2 = Sys_CloseFileStream_17(flagP + 0xa4) * 0.5f + param_2;
            param_2 = Sys_ExecuteBytecode_17(flagP + 0xa4);
            float item_8_4 = param_2 * 0.5f + context;
            param_2 = 1.0f - item_14_1;
            int32_t data_22 = Sys_ExecuteBytecode_17(flagP + 0xa4);
            int32_t* data_23 = param_2;
            float item_10_3 = data_22 * param_2 + item_10_2;
            return Sys_CloseFileStream_15(flagP + 0xa4, item_4_1, item_10_3, item_c_2, item_10_3, item_4_1, item_8_4,
                item_c_2, item_8_4, 0, data_23, 0x3f800000, data_23, 0, 0x3f800000, 0x3f800000,
                0x3f800000, 128.0f, 128.0f, 128.0f, 0, 0x3f800000, 0, 0x80000, 0);
        }
    }

    return result;
}
