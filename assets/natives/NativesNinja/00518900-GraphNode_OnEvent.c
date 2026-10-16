#include "00518900-GraphNode_OnEvent.h"
/* 0x00518900 GraphNode_OnEvent full linked: callers=1 callees=2 */
uint32_t sub_518900()

{
    sub_4c1830(g_a801fc);
    int16_t ecx = g_54ec9c;
    g_a801fc = 0;
    return QTask_CloseEvent_2(ecx);
}
