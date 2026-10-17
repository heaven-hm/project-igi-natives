// Original IGI.EXE function: Display_SetGammaRamp_3 (VA 0x00491980; static CFG gate PASS, CFG score 1.000).
#include "Display_SetGammaRamp_3.h"
int32_t Display_SetGammaRamp_3(void* context, char param_2, int32_t param_3)

{
    int32_t entity_val;
    int32_t item_4 = entity_val;
    int32_t result = 0;
    int32_t i = 0;
    int32_t result_1 = 0;

    if (g_c10384 <= 0)
        return 0;

    int32_t* source_val = &g_bcae28;

    do
    {
        int32_t data_1 = 1;

        if (!context)
        {
        label_4919f2:

            if (param_3)
            {
                param_3(&source_val[-2]);
                result = result_1;
            }

            result += 1;
            result_1 = result;
        }
        else
        {
            if (1 & param_2 && *(context + 4) != source_val[-1])
                data_1 = 0;

            if (param_2 & 2 && *(context + 8) != *source_val)
                data_1 = 0;

            if (param_2 & 4 && *(context + 0x10) != source_val[2])
                data_1 = 0;

            if ((!(param_2 & 8) || *(context + 0x18) == source_val[4]) && data_1)
                goto label_4919f2;
        }

        i += 1;
        source_val = &source_val[0x47];
    } while (i < g_c10384);

    return result;
}
