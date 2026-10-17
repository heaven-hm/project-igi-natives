// Original IGI.EXE function: Render_DrawLightmapMesh_5 (VA 0x004D2EC0; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawLightmapMesh_5.h"
int32_t* Render_DrawLightmapMesh_5(void* context, int32_t param_2)

{
    int32_t entity_val;
    int32_t item_4 = entity_val;
    int32_t* result = g_a54638;
    void* context_val = nullptr;
    int32_t i = 0;

    if (*result > 0)
    {
        item_4 = 0;

        do
        {
            if (*(result[1] + (i << 2)) == param_2)
            {
                int32_t* source_1 = context_val + g_a5467c;
                Render_SkinBones_5(source_1, context);
                *source_1 = i;
                int32_t* entity_6 = *(g_a54638 + 8) + item_4;
                source_1[2] = *entity_6;
                source_1[3] = entity_6[1];
                source_1[4] = entity_6[2];
                long double fpu_val_7_1 = source_1[4];
                long double fpu_val_6_1 = source_1[3];
                long double fpu_val_5_1 = source_1[2];
                source_1[5] = sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_1 * fpu_val_7_1);
                Render_DrawLightmapMesh_5(source_1, i);
                result = g_a54638;
            }

            i += 1;
            context_val += 0x84;
            item_4 += 0xc;
        } while (i < *result);
    }

    return result;
}
