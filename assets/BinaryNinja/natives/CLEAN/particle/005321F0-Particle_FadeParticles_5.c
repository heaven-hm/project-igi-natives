// IGI native provenance: Particle_FadeParticles_5 - 0x005321F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005321F0-Particle_FadeParticles_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Particle_FadeParticles_5.h"
void Particle_FadeParticles_5(void** context, int32_t* param_2, void* param_3, int32_t param_4)

{
    if (param_2 < 2 || !param_3)
        return;

    int32_t item_8_1 = 0;
    char* context_1 = context;
    void item_84;
    context = &item_84;
    char* source_3 = (param_2 - 1) * param_3 + context_1;
    void item_fc;
    param_2 = &item_fc;

    while (true)
    {
        if (COMBINE(0, source_3 - context_1) / param_3 + 1 > 8)
        {
            Particle_EmitParticles_6(((COMBINE(0, source_3 - context_1) / param_3 + 1) >> 1) * param_3 + context_1, context_1, param_3);
            char* item_c_1 = context_1;
            char* dest_2 = param_3 + source_3;

            while (true)
            {
                char* data_11 = item_c_1 + param_3;
                item_c_1 = data_11;

                if (data_11 <= source_3 && param_4(data_11, context_1) <= 0)
                    continue;

                bool flag_2_1;

                do
                {
                    dest_2 -= param_3;

                    if (dest_2 <= context_1)
                        break;

                    flag_2_1 = param_4(dest_2, context_1) >= 0;
                } while (flag_2_1);

                if (dest_2 < item_c_1)
                    break;

                Particle_EmitParticles_6(item_c_1, dest_2, param_3);
            }

            Particle_EmitParticles_6(context_1, dest_2, param_3);

            if (dest_2 - context_1 - 1 < source_3 - item_c_1)
            {
                if (item_c_1 < source_3)
                {
                    int32_t* entity_8 = param_2;
                    item_8_1 += 1;
                    param_2 = &param_2[1];
                    *entity_8 = item_c_1;
                    void** data_14 = context;
                    context = &context[1];
                    *data_14 = source_3;
                }

                if (param_3 + context_1 < dest_2)
                {
                    source_3 = dest_2 - param_3;
                    continue;
                }
            }
            else
            {
                if (context_1 + param_3 < dest_2)
                {
                    int32_t* temp_6 = param_2;
                    param_2 = &param_2[1];
                    void** entity_7 = context;
                    item_8_1 += 1;
                    context = &context[1];
                    *temp_6 = context_1;
                    *entity_7 = dest_2 - param_3;
                }

                if (item_c_1 < source_3)
                {
                    context_1 = item_c_1;
                    continue;
                }
            }
        }
        else
            Particle_ResetEmitters_5(context_1, source_3, param_3, param_4);

        item_8_1 -= 1;
        param_2 -= 4;
        context -= 4;

        if (item_8_1 < 0)
            break;

        context_1 = *param_2;
        source_3 = *context;
    }
}
