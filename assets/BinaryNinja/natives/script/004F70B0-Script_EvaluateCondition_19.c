// Original IGI.EXE function: Script_EvaluateCondition_19 (VA 0x004F70B0; static CFG gate PASS, CFG score 1.000).
#include "Script_EvaluateCondition_19.h"
int32_t Script_EvaluateCondition_19(void* context)

{
    int32_t dest_val = 0;
    int32_t result = *(context + 0x2ca8);

    if (result > 0)
    {
        int32_t* context_1 = context + 0x2b4c;

        do
        {
            float* data_val = *context_1;
            *data_val = data_val[3] + *data_val;
            data_val[1] = data_val[4] + data_val[1];
            long double fpu_val_7_6 = data_val[5] + data_val[2];
            data_val[2] = fpu_val_7_6;
            long double fpu_val_6_2 = *(context + 0x2c7c) * -0.5f;
            fpu_val_7_6 - fpu_val_6_2;

            if (*(&((fpu_val_7_6 < fpu_val_6_2 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_6, fpu_val_6_2) ? 1 : 0) << 0xa
                    | (fpu_val_7_6 == fpu_val_6_2 ? 1 : 0) << 0xe) + 1) & 1)
                Script_FormatString_19(context, dest_val);

            result = *(context + 0x2ca8);
            dest_val += 1;
            context_1 = &context_1[1];
        } while (dest_val < result);
    }

    return result;
}
