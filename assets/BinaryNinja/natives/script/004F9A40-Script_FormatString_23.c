// Original IGI.EXE function: Script_FormatString_23 (VA 0x004F9A40; static CFG gate PASS, CFG score 1.000).
#include "Script_FormatString_23.h"
int32_t Script_FormatString_23(double* context, void* param_2, double param_3, char param_4)

{
    double item_40;
    Script_CallNativeHandler_23(&item_40, param_2);
    double* data_val = context;
    double item_58 = *data_val - item_40;
    double item_38;
    double item_50 = data_val[1] - item_38;
    long double fpu_val_7_4 = data_val[2];
    data_val = param_4;
    double item_30;
    long double fpu_val_7_5 = fpu_val_7_4 - item_30;

    if (data_val)
    {
        long double f0_1 = 0.0;
        fpu_val_7_5 - f0_1;
        data_val = (fpu_val_7_5 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_5 == f0_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&data_val + 1) & 1)
            fpu_val_7_5 = -(fpu_val_7_5);

        long double f1_1 = 4096.0;
        fpu_val_7_5 - f1_1;
        data_val = (fpu_val_7_5 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_5 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&data_val + 1) & 0x41))
        {
            data_val = 0;
            return data_val;
        }
    }

    int32_t item_48 = 0;
    int32_t item_44 = 0;
    int16_t data_1 = Sys_PopStack_11(&item_58);

    if (!data_1)
    {
        float item_28;
        Script_EvaluateCondition_23(&item_28, param_2, 1);
        float item_1c;
        float item_10;
        long double fpu_val_7_10 = item_10 * item_48 + item_1c * item_50 + item_28 * item_58;
        float item_24;
        float item_18;
        float item_c;
        double item_38_1 = item_c * item_48 + item_18 * item_50 + item_24 * item_58;
        long double fpu_val_6_10 = *(param_2 + 0x24) + param_3;
        param_3 = fpu_val_6_10 * -4096.0;
        long double f2_1 = param_3;
        fpu_val_7_10 - f2_1;
        data_1 = (fpu_val_7_10 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_10, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_10 == f2_1 ? 1 : 0) << 0xe | 0x3000;

        if (!(*(&data_1 + 1) & 1))
        {
            double item_60_1 = fpu_val_6_10 * 4096.0;
            long double f3_1 = item_60_1;
            fpu_val_7_10 - f3_1;
            data_1 = (fpu_val_7_10 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_10, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_10 == f3_1 ? 1 : 0) << 0xe;

            if (*(&data_1 + 1) & 0x41)
            {
                long double fpu_val_7_11 = item_38_1;
                long double f4_1 = param_3;
                fpu_val_7_11 - f4_1;
                data_1 = (fpu_val_7_11 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_11, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_11 == f4_1 ? 1 : 0) << 0xe;

                if (!(*(&data_1 + 1) & 1))
                {
                    long double fpu_val_7_12 = item_38_1;
                    long double f5_1 = item_60_1;
                    fpu_val_7_12 - f5_1;
                    data_1 = (fpu_val_7_12 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_12, f5_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_12 == f5_1 ? 1 : 0) << 0xe;

                    if (*(&data_1 + 1) & 0x41)
                    {
                        data_1 = 1;
                        return data_1;
                    }
                }
            }
        }
    }

    data_1 = 0;
    return data_1;
}
