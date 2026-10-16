#include "004D4F20-Render_SetupLighting_8.h"
/* 0x004d4f20 Render_SetupLighting_8 full linked: callers=1 callees=0 */
int32_t sub_4d4f20()

{
    int32_t ecx_2 = g_a54628;
    int32_t result = *(g_a54624 + (ecx_2 << 2)) * g_a54630 + g_a54620;
    *(g_a54634 + result) = ecx_2;
    g_a54628 += 1;
    return result;
}
