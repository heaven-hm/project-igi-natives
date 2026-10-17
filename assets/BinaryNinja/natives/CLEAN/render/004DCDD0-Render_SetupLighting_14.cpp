// IGI native provenance: Render_SetupLighting_14 - 0x004DCDD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004DCDD0-Render_SetupLighting_14.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_SetupLighting_14.h"
int32_t Render_SetupLighting_14(void* context)

{
    void* context_val = context;
    int32_t data_val = *(context_val + 0x60);

    if (data_val)
    {
        data_val = g_a5e320;
        int32_t temp_1 = 0;

        if (data_val > 0)
        {
            int32_t* entity_1 = g_a5e31c;
            int32_t dest_1 = g_a5e318;
            int32_t* data_3;

            while (true)
            {
                int32_t** data_2 = *entity_1 * g_a5e328;
                data_3 = data_2 + dest_1;

                if (**(data_2 + dest_1) == context_val)
                    break;

                int32_t data_4 = g_a5e320;
                temp_1 += 1;
                entity_1 = &entity_1[1];

                if (temp_1 >= data_4)
                    return data_4;
            }

            void* entity_2 = data_3[1];
            int32_t dest_2 = *(*(entity_2 + 0x144) + *data_3);
            *(entity_2 + 0x138) -= 1;
            void* temp_3 = data_3[1];
            int32_t entity_3 = *(temp_3 + 0x138);

            if (dest_2 != entity_3)
            {
                int32_t source_3 = *(temp_3 + 0x134);
                int32_t entity_6 = *(source_3 + (entity_3 << 2)) * *(temp_3 + 0x140) + *(temp_3 + 0x130);
                int32_t context_2 = *(source_3 + (dest_2 << 2));
                int32_t temp_5 = *(*(temp_3 + 0x144) + entity_6);
                *(source_3 + (dest_2 << 2)) = *(source_3 + (temp_5 << 2));
                *(*(data_3[1] + 0x134) + (temp_5 << 2)) = context_2;
                context_val = context;
                *(*(data_3[1] + 0x144) + entity_6) = dest_2;
            }

            *data_3 = 0;
            int32_t* source_6 = g_a5e32c;
            data_val = *(source_6 + data_3);
            int32_t entity_8 = g_a5e320 - 1;
            g_a5e320 = entity_8;

            if (data_val != entity_8)
            {
                int32_t temp_8 = g_a5e31c;
                int32_t entity_11 = *(temp_8 + (entity_8 << 2)) * g_a5e328 + g_a5e318;
                int32_t dest_4 = *(temp_8 + (data_val << 2));
                int32_t source_7 = *(source_6 + entity_11);
                *(temp_8 + (data_val << 2)) = *(temp_8 + (source_7 << 2));
                *(g_a5e31c + (source_7 << 2)) = dest_4;
                *(g_a5e32c + entity_11) = data_val;
            }

            *(context_val + 0x60) = 0;
        }
    }

    return data_val;
}
