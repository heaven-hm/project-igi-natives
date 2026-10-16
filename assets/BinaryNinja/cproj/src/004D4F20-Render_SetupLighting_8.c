#include "gi_platform.h"
#include "004D4F20-Render_SetupLighting_8.h"
int32_t Render_SetupLighting_8()

{
    int32_t objC2 = g_a54628;
    int32_t result = *(g_a54624 + (objC2 << 2)) * g_a54630 + g_a54620;
    *(g_a54634 + result) = objC2;
    g_a54628 += 1;
    return result;
}
