// Original IGI.EXE function: Particle_EmitParticles_6 (VA 0x00532392; static CFG gate PASS, CFG score 1.000).
#include "Particle_EmitParticles_6.h"
char* Particle_EmitParticles_6(char* context, char* param_2, int32_t param_3)

{
    char* result = context;
    char* entity_val = param_2;

    if (result != entity_val && param_3)
    {
        int32_t context_val;
        int32_t item_8_1 = context_val;
        int32_t i_1 = param_3;
        int32_t i;

        do
        {
            char temp_3 = *result;
            *result = *entity_val;
            result = &result[1];
            *entity_val = temp_3;
            entity_val = &entity_val[1];
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
    }

    return result;
}
