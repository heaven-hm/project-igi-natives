// Original IGI.EXE function: Render_SetupLighting (VA 0x004D0970; static CFG gate PASS, CFG score 1.000).
#include "Render_SetupLighting.h"
void** Render_SetupLighting(void** context, void* param_2, int32_t param_3)

{
    void** result = *(param_2 + 0x6c);

    if (result)
    {
        result = *result;

        if (result)
        {
            int32_t* temp_3 = *(*(result[3] + 0xc) + 0x88) + (param_3 << 4);
            result = context;
            *result = *temp_3;
            result[1] = temp_3[1];
            result[2] = temp_3[2];
            *result = *(param_2 + 0x98) * *result;
            result[1] = *(param_2 + 0x9c) * result[1];
            result[2] = *(param_2 + 0xa0) * result[2];
        }
    }

    return result;
}
