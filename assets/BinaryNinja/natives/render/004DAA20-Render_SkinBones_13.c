// Original IGI.EXE function: Render_SkinBones_13 (VA 0x004DAA20; static CFG gate FAIL, CFG score 0.667).
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
