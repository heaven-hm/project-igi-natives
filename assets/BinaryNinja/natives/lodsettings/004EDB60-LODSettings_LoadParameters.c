// Original IGI.EXE function: LODSettings_LoadParameters (VA 0x004EDB60; static CFG gate PASS, CFG score 1.000).
#include "LODSettings_LoadParameters.h"
float* LODSettings_LoadParameters(void* context)

{
    int32_t i = 0;
    float* temp_val = context + 0x30;

    do
    {
        if (i)
        {
            long double fpu_val_7_1 = *temp_val;
            long double f0_1 = temp_val[-1];
            fpu_val_7_1 - f0_1;

            if (*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
                *temp_val = temp_val[-1];
        }

        i += 1;
        temp_val = &temp_val[1];
    } while (i < 5);

    float* result = DynObj_Missing(context + 0x20);

    if (result)
    {
        result[9] = 1;
        void* entity_val = &result[0xa];
        result = context + 0x30;
        int32_t i_2 = 5;
        int32_t i_1;

        do
        {
            long double fpu_val_7_3 = *result * 4096.0f;
            result = &result[1];
            entity_val += 4;
            i_1 = i_2;
            i_2 -= 1;
            *(entity_val - 4) = fpu_val_7_3;
        } while (i_1 != 1);
    }

    return result;
}
