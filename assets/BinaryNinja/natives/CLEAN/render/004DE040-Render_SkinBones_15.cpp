// IGI native provenance: Render_SkinBones_15 - 0x004DE040 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DE040-Render_SkinBones_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_SkinBones_15.h"
void* Render_SkinBones_15(void* context)

{
    void* temp_val = context;
    int32_t entity_val = g_a5e31c;
    void* i = *(temp_val + 0x138);
    int32_t dest_val = g_a5e320;

    for (; i > 0; i = *(temp_val + 0x138))
    {
        int32_t source_1 = *(temp_val + 0x130);
        int32_t flagP1 = 0;
        int32_t item_c_1 = 0;
        int32_t* context_2 = **(temp_val + 0x134) * *(temp_val + 0x140);
        void* data_1 = *(context_2 + source_1);
        void* context_3 = context_2 + source_1;
        int32_t j = 0;
        void* item_8_1 = context_3;

        if (dest_val > 0)
        {
            while (!j)
            {
                int32_t* data_4 = *(entity_val + (flagP1 << 2)) * g_a5e328 + g_a5e318;
                int32_t temp_2 = *data_4;

                if (temp_2 == context_3)
                {
                    void* entity_1 = data_4[1];
                    int32_t dest_1 = *(*(entity_1 + 0x144) + temp_2);
                    *(entity_1 + 0x138) -= 1;
                    void* temp_3 = data_4[1];
                    int32_t entity_2 = *(temp_3 + 0x138);

                    if (dest_1 != entity_2)
                    {
                        int32_t source_3 = *(temp_3 + 0x134);
                        int32_t entity_5 =
                            *(source_3 + (entity_2 << 2)) * *(temp_3 + 0x140) + *(temp_3 + 0x130);
                        int32_t context_5 = *(source_3 + (dest_1 << 2));
                        int32_t temp_5 = *(*(temp_3 + 0x144) + entity_5);
                        *(source_3 + (dest_1 << 2)) = *(source_3 + (temp_5 << 2));
                        *(*(data_4[1] + 0x134) + (temp_5 << 2)) = context_5;
                        context_3 = item_8_1;
                        *(*(data_4[1] + 0x144) + entity_5) = dest_1;
                    }

                    int32_t* source_6 = g_a5e32c;
                    int32_t entity_7 = g_a5e320 - 1;
                    int32_t data_5 = *(source_6 + data_4);
                    g_a5e320 = entity_7;

                    if (data_5 != entity_7)
                    {
                        int32_t temp_8 = g_a5e31c;
                        int32_t entity_10 = *(temp_8 + (entity_7 << 2)) * g_a5e328 + g_a5e318;
                        int32_t dest_3 = *(temp_8 + (data_5 << 2));
                        int32_t source_7 = *(source_6 + entity_10);
                        *(temp_8 + (data_5 << 2)) = *(temp_8 + (source_7 << 2));
                        *(g_a5e31c + (source_7 << 2)) = dest_3;
                        *(g_a5e32c + entity_10) = data_5;
                    }

                    flagP1 = item_c_1;
                    j = 1;
                    *(data_1 + 0x60) = 0;
                    entity_val = g_a5e31c;
                    dest_val = g_a5e320;
                }

                temp_val = context;
                flagP1 += 1;
                item_c_1 = flagP1;

                if (flagP1 >= dest_val)
                    break;
            }
        }
    }

    int32_t context_6 = dest_val - 1;

    if (context_6 >= 0)
    {
        int32_t* source_8 = g_a5e32c;
        int32_t f0_1;

        do
        {
            int32_t flagP6 = g_a5e318;
            i = *(entity_val + (context_6 << 2)) * g_a5e328 + flagP6;

            if (*(i + 4) == temp_val)
            {
                int32_t temp_11 = *(source_8 + i);
                dest_val -= 1;
                g_a5e320 = dest_val;

                if (temp_11 != dest_val)
                {
                    int32_t dest_4 = *(entity_val + (temp_11 << 2));
                    i = *(entity_val + (dest_val << 2)) * g_a5e328 + flagP6;
                    int32_t source_9 = *(source_8 + i);
                    *(entity_val + (temp_11 << 2)) = *(entity_val + (source_9 << 2));
                    *(g_a5e31c + (source_9 << 2)) = dest_4;
                    *(g_a5e32c + i) = temp_11;
                    source_8 = g_a5e32c;
                    entity_val = g_a5e31c;
                    dest_val = g_a5e320;
                }

                temp_val = context;
            }

            f0_1 = context_6;
            context_6 -= 1;
        } while (f0_1 - 1 >= 0);
    }

    return i;
}
