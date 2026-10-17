// IGI native provenance: Render_DrawLightmapMesh_11 - 0x004D6FC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D6FC0-Render_DrawLightmapMesh_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_DrawLightmapMesh_11.h"
int32_t* Render_DrawLightmapMesh_11(int32_t* context, int32_t* param_2, int32_t* param_3, int32_t param_4, int32_t param_5)

{
    void* temp_1 = *(*(*param_3 * 0x28 + &g_a538f4) + (param_4 << 2));

    if (context)
    {
        int32_t* source_3 = *(*(temp_1 + 8) + 4) + param_5 * 0x28;
        *context = *source_3;
        context[1] = source_3[1];
        context[2] = source_3[2];
    }

    if (param_2)
        *param_2 = *(*(*(temp_1 + 8) + 4) + param_5 * 0x28 + 0xc);

    return param_2;
}
