// Original IGI.EXE function: Particle_ResetEmitters_2 (VA 0x005308F0; static CFG gate PASS, CFG score 1.000).
#include "Particle_ResetEmitters_2.h"
int32_t Particle_ResetEmitters_2(int32_t* context, char param_2)

{
    int32_t result = 0;
    int32_t i = 1 << ((param_2 - 1) & 0x1f);

    if (!i)
        return 0;

    do
    {
        int32_t temp_1 = context[1];

        if (temp_1 == 0x80)
        {
            char* dest_1 = *context;
            int32_t context_1 = 0;
            context_1 = *dest_1;
            context[2] = context_1;
            *context = &dest_1[1];
        }

        if (context[2] & temp_1)
            result |= i;

        i u>>= 1;
        int32_t temp_2 = temp_1 >> 1;
        context[1] = temp_2;

        if (!temp_2)
            context[1] = 0x80;
    } while (i);

    return result;
}
