// Original IGI.EXE function: Render_SkinBones_11 (VA 0x004D7020; static CFG gate PASS, CFG score 1.000).
#include "Render_SkinBones_11.h"
int32_t Render_SkinBones_11(int32_t context, int32_t param_2)

{
    return **(*(*(context * 0x28 + &g_a538f4) + (param_2 << 2)) + 8);
}
