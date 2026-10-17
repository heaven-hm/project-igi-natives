// Original IGI.EXE function: Particle_ResetEmitters_5 (VA 0x00532344; static CFG gate PASS, CFG score 1.000).
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
