#include "004D1220-Render_SetupLighting_3.h"
/* 0x004d1220 Render_SetupLighting_3 full linked: callers=1 callees=3 */
int32_t sub_4d1220()

{
    for (int32_t* i = &g_b04358; i < 0xb12358; i = &i[7])
    {
        i[-2] = 0xffffffff;
        *i = 0;
    }

    sub_4b0b70(&g_b12b60);
    sub_4b0b70(&g_b12c40);
    return sub_4b0b70(&g_b16cc0);
}
