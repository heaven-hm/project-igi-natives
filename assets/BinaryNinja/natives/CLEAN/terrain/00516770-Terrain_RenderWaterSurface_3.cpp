// IGI native provenance: Terrain_RenderWaterSurface_3 - 0x00516770 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00516770-Terrain_RenderWaterSurface_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_RenderWaterSurface_3.h"
char* Terrain_RenderWaterSurface_3(char* context)

{
    int32_t entity_val;
    int32_t item_8 = entity_val;
    uint32_t data_val = g_9361e4;
    char* item_8_1 = nullptr;
    char* result;

    if (data_val)
    {
        int32_t data_1;
        char* entity_2;
        data_1 = Camera_UpdateViewCone_27(data_val, 0x100, context, 0xffffffff, nullptr, 0, 0, 1);

        if (data_1)
        {
            PSTR data_2 = Camera_ApplyHandiCam_20(data_1);
            entity_2 = data_1;
            item_8_1 = data_2;

            if (data_2)
            {
                int32_t data_3;
                data_3 = Camera_UpdateViewCone_27(g_9361e4, 0x100, context, 0xffffffff, data_2, data_1, 0, 1);

                if (data_3)
                {
                    Camera_ApplyLineFilter_20(context, item_8_1);
                    entity_2 = item_8_1;
                }
            }
        }

        char* item_18_3 = item_8_1;
        Camera_UpdateTransform_9(entity_2);
        result = context;
    }
    else
    {
        result = context;
        char* result_1 = result;

        if (*result)
        {
            do
            {
                char entity_1 = *result_1;

                if (entity_1 >= 0x41 && entity_1 <= 0x5a)
                    *result_1 = entity_1 + 0x20;

                result_1 = &result_1[1];
            } while (*result_1);
        }
    }

    return result;
}
