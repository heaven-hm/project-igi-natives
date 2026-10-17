// Original IGI.EXE function: Render_BindTexture_11 (VA 0x004D74F0; static CFG gate PASS, CFG score 1.000).
#include "Render_BindTexture_11.h"
int32_t Render_BindTexture_11(int32_t* context, int32_t param_2, int32_t param_3)

{
    if (context)
    {
        int32_t data_1 = *context;

        if (context[2] && param_2 >= 0 && param_2 < *(data_1 * 0xc + &g_a542f0))
        {
            int32_t data_3 = data_1 * 0x28;
            int32_t entity_1 = *(data_3 + 0xa53914);

            if (entity_1 && param_3 < entity_1)
            {
                int32_t result = 0;
                result = *(*(data_3 + &g_a538f4) + (param_3 << 2));
                return result;
            }
        }
    }

    return 0;
}
