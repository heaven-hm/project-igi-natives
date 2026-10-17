// Original IGI.EXE function: Render_SetupLighting_11 (VA 0x004D74D0; static CFG gate PASS, CFG score 1.000).
#include "Render_SetupLighting_11.h"
long double Render_SetupLighting_11(int32_t context, int32_t param_2)

{
    return **(*(context * 0x28 + &g_a538f4) + (param_2 << 2)) * 0.000208333338f;
}
