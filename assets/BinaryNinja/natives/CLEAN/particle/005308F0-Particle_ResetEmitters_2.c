// IGI native provenance: Particle_ResetEmitters_2 - 0x005308F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005308F0-Particle_ResetEmitters_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
