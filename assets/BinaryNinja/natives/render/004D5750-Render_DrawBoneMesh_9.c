// Original IGI.EXE function: Render_DrawBoneMesh_9 (VA 0x004D5750; static CFG gate PASS, CFG score 1.000).
#include "Render_DrawBoneMesh_9.h"
int32_t Render_DrawBoneMesh_9()

{
    int32_t entity_2 = g_a54610;
    int32_t result = *(g_a5460c + (entity_2 << 2)) * g_a54618 + g_a54608;
    *(g_a5461c + result) = entity_2;
    g_a54610 += 1;
    return result;
}
