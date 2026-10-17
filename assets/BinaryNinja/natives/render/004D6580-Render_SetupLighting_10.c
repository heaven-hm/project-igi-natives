// Original IGI.EXE function: Render_SetupLighting_10 (VA 0x004D6580; static CFG gate PASS, CFG score 1.000).
#include "Render_SetupLighting_10.h"
int32_t Render_SetupLighting_10(void* context, int32_t param_2, float param_3)

{
    void* data_val = Render_DrawBoneMesh_10(context, param_2);
    *(data_val + 0x28) = g_a54658 * param_3;
    return Render_ComputeNormals_10(data_val);
}
