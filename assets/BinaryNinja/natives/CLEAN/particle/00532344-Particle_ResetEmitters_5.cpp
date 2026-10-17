// IGI native provenance: Particle_ResetEmitters_5 - 0x00532344 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00532344-Particle_ResetEmitters_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Particle_ResetEmitters_5.h"
char* Particle_ResetEmitters_5(char* context, char* param_2, int32_t param_3, int32_t param_4)

{
    char* result = context;
    char* dest_val = param_2;

    if (dest_val > result)
    {
        do
        {
            char* i_1 = context;

            for (char* i = &result[param_3]; i <= dest_val; i = &i[param_3])
            {
                if (param_4(i, i_1) > 0)
                    i_1 = i;
            }

            result = Particle_EmitParticles_6(i_1, dest_val, param_3);
            dest_val -= param_3;
        } while (dest_val > context);
    }

    return result;
}
