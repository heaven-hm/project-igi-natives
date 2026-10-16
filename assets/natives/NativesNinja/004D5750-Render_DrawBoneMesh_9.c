#include "004D5750-Render_DrawBoneMesh_9.h"
/* 0x004d5750 Render_DrawBoneMesh_9 full linked: callers=1 callees=0 */
int32_t sub_4d5750()

{
    int32_t ecx_2 = g_a54610;
    int32_t result = *(g_a5460c + (ecx_2 << 2)) * g_a54618 + g_a54608;
    *(g_a5461c + result) = ecx_2;
    g_a54610 += 1;
    return result;
}
