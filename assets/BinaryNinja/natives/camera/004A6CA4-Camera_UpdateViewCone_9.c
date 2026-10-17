// IGI native provenance: Camera_UpdateViewCone_9 - 0x004A6CA4 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A6CA4-Camera_UpdateViewCone_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_UpdateViewCone_9.h"
uint32_t Camera_UpdateViewCone_9(int32_t* context)

{
    int32_t data_val = context[3];

    if (data_val & 0x83 && !(data_val & 0x40))
    {
        if (!(data_val & 2))
        {
            data_val |= 1;
            context[3] = data_val;

            if (data_val & 0x10c)
                *context = context[2];
            else
                Camera_ResetMatrix_23(context);

            void* data_2 = Camera_UpdateViewCone_23(context[4], context[2], context[6]);
            context[1] = data_2;

            if (data_2 && data_2 != 0xffffffff)
            {
                int32_t temp_val = context[3];

                if (!(temp_val & 0x82))
                {
                    int32_t entity_2 = context[4];
                    void* dest_4;

                    if (entity_2 == 0xffffffff)
                        dest_4 = &g_543fb0;
                    else
                        dest_4 = (&g_c32440)[entity_2 >> 5] + ((entity_2 & 0x1f) << 3);

                    if ((*(dest_4 + 4) & 0x82) == 0x82)
                    {
                        *(&temp_val + 1) |= 0x20;
                        context[3] = temp_val;
                    }
                }

                if (context[6] == 0x200)
                {
                    int16_t entity_4 = context[3];

                    if (entity_4 & 8 && !(*(&entity_4 + 1) & 4))
                        context[6] = 0x1000;
                }

                char* entity_5 = *context;
                context[1] = data_2 - 1;
                uint32_t result = *entity_5;
                *context = &entity_5[1];
                return result;
            }

            int32_t data_4 = -(data_2);
            context[3] |= ((data_4 - data_4) & 0x10) + 0x10;
            context[1] = 0;
        }
        else
        {
            data_val |= 0x20;
            context[3] = data_val;
        }
    }

    return 0xffffffff;
}
