// Original IGI.EXE function: Render_SkinBones_11 (VA 0x004D7020; static CFG gate PASS, CFG score 1.000).
#include "Render_SkinBones_11.h"
int32_t Render_SkinBones_11(int32_t a1, int32_t a2)

{
    return **(*(*(a1 * 0x28 + &g_a538f4) + (a2 << 2)) + 8);
}
