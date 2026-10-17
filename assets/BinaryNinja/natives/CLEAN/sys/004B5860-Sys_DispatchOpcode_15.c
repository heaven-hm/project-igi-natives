// IGI native provenance: Sys_DispatchOpcode_15 - 0x004B5860 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B5860-Sys_DispatchOpcode_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_DispatchOpcode_15.h"
float Sys_DispatchOpcode_15(float* context, float param_2, float param_3, float param_4, int32_t param_5, float param_6, float param_7, float param_8, int32_t param_9, float param_10, float param_11, float param_12, int32_t param_13, int32_t param_14) {
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fcos(param_10);
    float result = param_2;
    float item_8 = fp0;
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fsin(param_10);
    float item_c = fp0_1;

    if (result - 1 > 0)
    {
        float source_1 = param_8;
        float* data_val = &context[2];
        float dest_1 = param_7;
        context = data_val;
        float result_1 = result - 1;

        while (true)
        {
            long double fpu_val_7_5 = param_11 * data_val[-2];
            long double fpu_val_6_2 = param_12 * data_val[-1];
            param_2 = param_11 * *data_val;
            long double fpu_val_5_4 = param_12 * data_val[1];
            param_8 = fpu_val_5_4;
            long double fpu_val_4_1 = param_10;
            long double f1_1 = 0.0;
            fpu_val_4_1 - f1_1;

            if (!(*(&((fpu_val_4_1 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_4_1, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_4_1 == f1_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
            {
                param_7 = fpu_val_7_5 * item_c + fpu_val_6_2 * item_8;
                fpu_val_7_5 = -((fpu_val_6_2 * item_c - fpu_val_7_5 * item_8));
                fpu_val_6_2 = param_7;
                fpu_val_5_4 = param_2 * item_c + param_8 * item_8;
                param_2 = -((param_8 * item_c - param_2 * item_8));
            }

            int32_t item_48_1 = param_13;
            int32_t item_4c_1 = param_13;
            int32_t item_54_1 = param_13;
            int32_t item_58_1 = param_13;
            Sys_ExecuteBytecode_15(fpu_val_7_5 + param_3, fpu_val_6_2 + param_4, param_5, param_2 + param_3, fpu_val_5_4 + param_4, param_5,
                param_6, dest_1, source_1, param_6, dest_1, source_1, param_9, param_13, param_14);
            result = result_1 - 1;
            bool flag_1_1 = result_1 != 1;
            context = &context[2];
            result_1 = result;

            if (!flag_1_1)
                break;

            data_val = context;
        }
    }

    return result;
}
