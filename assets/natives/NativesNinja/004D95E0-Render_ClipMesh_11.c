#include "004D95E0-Render_ClipMesh_11.h"
/* 0x004d95e0 Render_ClipMesh_11 full linked: callers=1 callees=2 */
uint32_t sub_4d95e0()

{
    QTask_CloseEvent_2(g_548618);
    char ecx = g_54861a;
    g_548618 = 0x181;
    uint32_t result = QTask_InitContext(ecx);
    g_54861a = 0xff;
    return result;
}
