#include "Render_DrawBoneMesh_9.h"
int32_t Render_DrawBoneMesh_9()

{
    int32_t objC2 = g_a54610;
    int32_t result = *(g_a5460c + (objC2 << 2)) * g_a54618 + g_a54608;
    *(g_a5461c + result) = objC2;
    g_a54610 += 1;
    return result;
}
