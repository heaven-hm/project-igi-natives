// Original IGI.EXE function: Render_SetupLighting_2 (VA 0x004D0DA0; static CFG gate PASS, CFG score 1.000).
#include "Render_SetupLighting_2.h"
int32_t Render_SetupLighting_2(void* context, int32_t param_2)

{
    return *(*(*(context + 0xc) + 0x14) + param_2 * 0x14);
}
