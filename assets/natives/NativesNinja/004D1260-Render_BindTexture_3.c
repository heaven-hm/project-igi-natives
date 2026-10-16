#include "004D1260-Render_BindTexture_3.h"
/* 0x004d1260 Render_BindTexture_3 full linked: callers=1 callees=9 */
int32_t sub_4d1260()

{
    QTask_CleanupEvents_2(0xf);
    QTask_CleanupEvents_2(0x10);
    QTask_InitContext(0xf);
    QTask_InitContext(0x10);
    QTask_InitContext(0x11);
    QTask_InitContext(0x12);
    QTask_InitContext(g_548441);
    QTask_InitContext(g_548440);
    int32_t result = sub_4b0d10(g_b16c98);
    g_b16c98 = 0;
    return result;
}
