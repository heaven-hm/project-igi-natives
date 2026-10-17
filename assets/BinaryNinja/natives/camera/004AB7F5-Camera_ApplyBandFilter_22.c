// Original IGI.EXE function: Camera_ApplyBandFilter_22 (VA 0x004AB7F5; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyBandFilter_22.h"
int32_t Camera_ApplyBandFilter_22(int32_t context, void*** param_2, int32_t* param_3)

{
    void** i = &g_5446b0;

    do
    {
        if (context > i[4] && context < i[5])
        {
            if (context & 0xf || (context & 0xfff) < 0x100)
                break;

            *param_2 = i;
            int32_t entity_val = context;
            entity_val &= 0xf000;
            *param_3 = entity_val;
            return ((context - entity_val - 0x100) >> 4) + entity_val + 8;
        }

        i = *i;
    } while (i != &g_5446b0);

    return 0;
}
