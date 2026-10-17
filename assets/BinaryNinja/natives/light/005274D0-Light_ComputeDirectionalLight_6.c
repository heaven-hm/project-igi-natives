// Original IGI.EXE function: Light_ComputeDirectionalLight_6 (VA 0x005274D0; static CFG gate PASS, CFG score 1.000).
#include "Light_ComputeDirectionalLight_6.h"
int32_t Light_ComputeDirectionalLight_6(float context)

{
    int32_t result = g_ba1e08;
    int32_t source_val = 0;

    if (result > 0)
    {
        do
        {
            long double fpu_val_7_1 = context;
            float entity_3 = *(*(g_ba1e04 + (source_val << 2)) * g_ba1e10 + g_ba1e00);
            long double f0_1 = *(entity_3 + 0x5c);
            fpu_val_7_1 - f0_1;

            if (!(*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                *(entity_3 + 0x5c) = context;
                Light_CalculateAttenuation_5(entity_3);
            }

            result = g_ba1e08;
            source_val += 1;
        } while (source_val < result);
    }

    return result;
}
