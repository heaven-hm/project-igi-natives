#include "005314F0-PointlightDynCubeObj_Update.h"
/* 0x005314f0 PointlightDynCubeObj_Update full linked: callers=1 callees=4 */
uint32_t sub_5314f0()

{
    sub_4b0b70(&g_afa800);
    sub_4b0b70(0xafa820);
    QTask_CloseEvent_2(g_54f800);
    int16_t ecx = g_54f802;
    g_54f800 = 0x181;
    uint32_t result = QTask_CloseEvent_2(ecx);
    g_54f802 = 0x181;
    return result;
}
