// Original IGI.EXE function: Particle_UpdateParticlePhysics_2 (VA 0x00530740; static CFG gate PASS, CFG score 1.000).
#include "Particle_UpdateParticlePhysics_2.h"
int32_t Particle_UpdateParticlePhysics_2(int32_t* context , int32_t* param_2)

{
    int32_t entity_val;
    int32_t item_4_1 = entity_val;
    char* dest_val = *param_2;
    char* data_1 = Mem_Alloc(0x800, 4);
    char* source_val = 1;

    while (true)
    {
        if (!Particle_FadeParticles_2(context))
        {
            int32_t flagP2 = Particle_ResetEmitters_2(context, 0xb);
            int32_t item_4 = flagP2;

            if (!flagP2)
                break;

            int32_t data_5 = Particle_ResetEmitters_2(context, 7);
            int32_t temp_1 = 0;

            if (data_5 + 2 >= 0)
            {
                while (true)
                {
                    dest_val = &dest_val[1];
                    char entity_3 = data_1[(flagP2 + temp_1) & 0x7ff];
                    dest_val[0xffffffff] = entity_3;
                    *(&source_val[1] + data_1 - 1) = entity_3;
                    source_val = &source_val[1] & 0x7ff;
                    temp_1 += 1;

                    if (temp_1 > data_5 + 2)
                        break;

                    flagP2 = item_4;
                }
            }
        }
        else
        {
            char data_3 = Particle_ResetEmitters_2(context, 8);
            *dest_val = data_3;
            dest_val = &dest_val[1];
            *(source_val + data_1) = data_3;
            source_val = &source_val[1] & 0x7ff;
        }
    }

    *param_2 = dest_val;
    return Sys_ExecuteBytecode_2(data_1);
}
