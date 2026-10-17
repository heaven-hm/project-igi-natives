// IGI native provenance: Render_ComputeNormals_12 - 0x004DA180 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004DA180-Render_ComputeNormals_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
