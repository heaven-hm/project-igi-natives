// Original IGI.EXE function: Render_ComputeNormals_12 (VA 0x004DA180; static CFG gate FAIL, CFG score 0.667).
#include "Render_ComputeNormals_12.h"
int32_t Render_ComputeNormals_12(void** context, int32_t* param_2)

{
    void* dest_val = (g_a5e300 << 2) + &g_a546bc;
    *context = dest_val;
    memcpy(dest_val, &g_a54694, g_a5e2fc << 2);
    *param_2 = g_a5e2fc;
    int32_t result = g_a5e300 + g_a5e2fc;
    g_a5e300 = result;
    return result;
}
