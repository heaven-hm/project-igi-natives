// IGI native provenance: Render_SetupLighting_7 - 0x004D4690 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004D4690-Render_SetupLighting_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_SetupLighting_7.h"
float Render_SetupLighting_7(int32_t context, float param_2, int32_t* param_3) {
    int32_t temp_val = *param_3;

    if (temp_val == 1)
    {
        void* entity_val = param_3[1];
        int32_t temp_1 = *(entity_val + 4);

        if (temp_1)
            return temp_1(context, param_2, *(entity_val + 0x10));
    }
    else if (!temp_val)
    {
        int32_t item_c_2 = context;
        long double fpu6;
        return Render_DrawLightmapMesh_7(fpu6, param_2, param_3[1]);
    }

    return nanf;
}
