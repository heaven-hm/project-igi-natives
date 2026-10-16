#include "00487130-FX_Statusscreen.h"
/* 0x00487130 FX_Statusscreen full linked: callers=1 callees=3 */
int32_t sub_487130()

{
    QTask_InitContext(g_540b5c);
    int16_t ecx = g_5c8a74;
    g_540b5c = 0xff;
    QTask_CloseEvent_2(ecx);
    return sub_4b13a0("STATUSSCREEN:");
}
