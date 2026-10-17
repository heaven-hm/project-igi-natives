// Original IGI.EXE function: Particle_EmitParticles_2 (VA 0x00530630; static CFG gate PASS, CFG score 1.000).
#include "Particle_EmitParticles_2.h"
int32_t Particle_EmitParticles_2(int32_t context, int32_t param_2, int16_t param_3, int16_t* param_4)

{
    if (!param_3)
        return 0;

    int32_t data_1 = context;
    int32_t entity_val = param_3;
    data_1 = *(data_1 + 0x3004);
    int32_t i_2 = 0;
    int16_t item_c = data_1;
    int16_t* entity_4;
    int16_t temp_2;
    int32_t i_1;
    int32_t source_1;

    while (true)
    {
        int32_t temp_1 = entity_val;
        int32_t i = 0;
        int32_t entity_1 = data_1;
        int32_t context_1;

        do
        {
            context_1 = 0;
            context_1 = (entity_1 & 0x7ff)[param_2];
            data_1 = nullptr;
            data_1 = (temp_1 & 0x7ff)[param_2];

            if (data_1 != context_1)
                break;

            i += 1;
            entity_1 += 1;
            temp_1 += 1;
        } while (i < 0x82);

        i_1 = i_2;

        if (i < i_1)
            temp_2 = item_c;
        else
        {
            temp_2 = item_c;
            i_1 = i;
            i_2 = i_1;
            *param_4 = temp_2;

            if (i >= 0x82)
            {
                Particle_FadeParticles(context, temp_2, param_3);
                return i;
            }
        }

        int32_t entity_3 = temp_2;

        if (data_1 - context_1 < 0)
        {
            source_1 = context;
            entity_4 = source_1 + entity_3 * 6 + 2;
        }
        else
        {
            source_1 = context;
            data_1 = entity_3 * 3;
            entity_4 = source_1 + (data_1 << 1) + 4;
        }

        data_1 = *entity_4;

        if (!data_1)
            break;

        item_c = data_1;
    }

    *entity_4 = param_3;
    int16_t* entity_8 = source_1 + entity_val * 6;
    *entity_8 = temp_2;
    entity_8[2] = 0;
    entity_8[1] = 0;
    return i_1;
}
