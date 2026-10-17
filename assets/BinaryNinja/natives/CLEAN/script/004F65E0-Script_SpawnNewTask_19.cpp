// IGI native provenance: Script_SpawnNewTask_19 - 0x004F65E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F65E0-Script_SpawnNewTask_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_SpawnNewTask_19.h"
double* Script_SpawnNewTask_19(void* context, float param_2)

{
    double* context_val = param_2;
    void* item_10 = nullptr;
    double* result_2 = context + 0x68;
    param_2 = *(context + 0x2c7c) * 0.5f;
    bool flag_0_1;

    do
    {
        int32_t i = 0;
        double* result_1 = result_2;

        do
        {
            int32_t j = 0;
            double* result = result_1;

            do
            {
                long double fpu_val_7_4 = fabsl(*result - *context_val);
                long double fpu_val_6_5 = param_2;
                fpu_val_6_5 - fpu_val_7_4;

                if (!(*(&((fpu_val_6_5 < fpu_val_7_4 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_5, fpu_val_7_4) ? 1 : 0) << 0xa
                    | (fpu_val_6_5 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double fpu_val_7_6 = fabsl(result[1] - context_val[1]);
                    long double fpu_val_6_6 = param_2;
                    fpu_val_6_6 - fpu_val_7_6;

                    if (!(*(&((fpu_val_6_6 < fpu_val_7_6 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_6, fpu_val_7_6) ? 1 : 0) << 0xa
                        | (fpu_val_6_6 == fpu_val_7_6 ? 1 : 0) << 0xe) + 1) & 1))
                    {
                        long double fpu_val_7_8 = fabsl(result[2] - context_val[2]);
                        long double fpu_val_6_7 = param_2;
                        fpu_val_6_7 - fpu_val_7_8;

                        if (!(*(&((fpu_val_6_7 < fpu_val_7_8 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_7, fpu_val_7_8) ? 1 : 0) << 0xa
                                | (fpu_val_6_7 == fpu_val_7_8 ? 1 : 0) << 0xe) + 1) & 1))
                            return result;
                    }
                }

                j += 1;
                result = &result[4];
            } while (j < 7);

            i += 1;
            result_1 = &result_1[0x1c];
        } while (i < 7);

        result_2 = &result_2[0xc4];
        flag_0_1 = item_10 + 1 < 7;
        item_10 += 1;
    } while (flag_0_1);
    return 0;
}
