#include "0052CA00-LevelScript_OnEvent.h"
/* 0x0052ca00 LevelScript_OnEvent full linked: callers=1 callees=3 */
int32_t sub_52ca00()

{
    QTask_InitContext(g_54f6f2);
    int16_t ecx = g_54f6f0;
    g_54f6f2 = 0xff;
    QTask_CloseEvent_2(ecx);
    return sub_4c1830(g_a84564);
}
