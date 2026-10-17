// Original IGI.EXE function: Render_SetupLighting_7 (VA 0x004D4690; static CFG gate PASS, CFG score 1.000).
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
