// Original IGI.EXE function: Render_DrawBoneMesh_13 (VA 0x004DA8D0; static CFG gate FAIL, CFG score 0.667).
#include "Render_DrawBoneMesh_13.h"
int32_t Render_DrawBoneMesh_13(int32_t context, int32_t* param_2, int32_t param_3)

{
    int32_t result = g_b04260;
    int32_t temp_val = g_b03f90 + 1;
    g_b03f90 = temp_val;

    if (result < 0xa && temp_val <= 0x17)
    {
        void* temp_1 = result * 0x28 + &g_b03e00;
        int32_t entity_3 = g_b03df0;
        *((entity_3 << 2) + &g_b04200) = result + 0x10000;
        g_b03df0 = entity_3 + 1;
        g_b04260 = result + 1;
        memcpy(temp_1, context, 0x18);
        *(temp_1 + 0x18) = *param_2;
        *(temp_1 + 0x1c) = param_2[1];
        *(temp_1 + 0x20) = param_2[2];
        result = param_3;
        *(temp_1 + 0x24) = result;
    }

    return result;
}
