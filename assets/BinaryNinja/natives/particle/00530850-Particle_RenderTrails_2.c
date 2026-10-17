// Original IGI.EXE function: Particle_RenderTrails_2 (VA 0x00530850; static CFG gate PASS, CFG score 1.000).
#include "Particle_RenderTrails_2.h"
int32_t* Particle_RenderTrails_2(int32_t* context, int32_t param_2, int32_t* param_3)

{
    int32_t* result = param_3;
    int32_t i = 1 << ((result - 1) & 0x1f);

    if (i)
    {
        result = context;
        int32_t context_val;
        int32_t item_4_1 = context_val;

        do
        {
            if (param_2 & i)
                result[2] |= result[1];

            int32_t entity_3 = result[1] >> 1;
            result[1] = entity_3;

            if (!entity_3)
            {
                **result = result[2];
                int32_t entity_6 = *result + 1;
                result[2] = 0;
                *result = entity_6;
                result[1] = 0x80;
            }

            i u>>= 1;
        } while (i);
    }

    return result;
}
