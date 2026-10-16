#include "0047E6B0-Weapon_CycleFireMode_8.h"
/* 0x0047e6b0 Weapon_CycleFireMode_8 full linked: callers=1 callees=4 */
uint32_t sub_47e6b0()

{
    sub_4b0b70(&g_5c1120);
    sub_4b0b70(&g_5c1108);
    QTask_CloseEvent_2(g_5c1138);
    uint32_t result = QTask_InitContext(g_540904);
    g_540904 = 0xff;
    return result;
}
