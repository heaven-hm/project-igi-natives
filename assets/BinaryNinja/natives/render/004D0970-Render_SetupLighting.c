// Original IGI.EXE function: Render_SetupLighting (VA 0x004D0970; static CFG gate PASS, CFG score 1.000).
#include "Render_SetupLighting.h"
void** Render_SetupLighting(void** a1, void* a2, int32_t a3)

{
    void** result = *(a2 + 0x6c);

    if (result)
    {
        result = *result;

        if (result)
        {
            int32_t* tmpD3 = *(*(result[3] + 0xc) + 0x88) + (a3 << 4);
            result = a1;
            *result = *tmpD3;
            result[1] = tmpD3[1];
            result[2] = tmpD3[2];
            *result = *(a2 + 0x98) * *result;
            result[1] = *(a2 + 0x9c) * result[1];
            result[2] = *(a2 + 0xa0) * result[2];
        }
    }

    return result;
}
