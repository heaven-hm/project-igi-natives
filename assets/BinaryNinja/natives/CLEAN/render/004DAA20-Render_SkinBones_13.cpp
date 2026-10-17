// IGI native provenance: Render_SkinBones_13 - 0x004DAA20 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004DAA20-Render_SkinBones_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Render_SkinBones_13.h"
void* Render_SkinBones_13(int32_t* context)

{
    void* result = (g_b041d0 << 2) + &g_b01a00;
    memcpy(result, &g_b04200, g_b03df0 << 2);
    int32_t entity_1 = g_b03df0;
    g_b041d0 += entity_1;
    *context = entity_1;
    return result;
}
