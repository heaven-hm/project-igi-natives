// Original IGI.EXE function: Render_DrawBoneMesh_2 (VA 0x004D0CF0; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawBoneMesh_2.h"
int32_t Render_DrawBoneMesh_2(void* context, int32_t param_2)

{
    return *(*(*(context + 0xc) + 0xc) + 0x8c) + param_2 * 0x44;
}
