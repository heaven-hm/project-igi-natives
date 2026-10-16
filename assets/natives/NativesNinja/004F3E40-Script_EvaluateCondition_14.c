#include "004F3E40-Script_EvaluateCondition_14.h"
/* 0x004f3e40 Script_EvaluateCondition_14 full linked: callers=1 callees=10 */
uint32_t sub_4f3e40()

{
    QTask_CloseEvent_2(g_54e1d8);
    int32_t ecx = g_54e1e4;
    g_54e1d8 = 0x181;
    sub_4f1a40(ecx);
    void* edx = g_a76c3c;
    g_54e1e4 = 0xffffffff;
    sub_4c1830(edx);
    QTask_InitContext(g_54e1da);
    QTask_InitContext(g_54e1db);
    QTask_InitContext(g_54e1dc);
    QTask_InitContext(g_54e1dd);
    QTask_InitContext(g_54e1de);
    QTask_InitContext(g_54e1df);
    uint32_t result = QTask_InitContext(g_54e1e0);
    result = 0xff;
    g_54e1da = 0xff;
    g_54e1db = 0xff;
    g_54e1dc = 0xff;
    g_54e1dd = 0xff;
    g_54e1de = 0xff;
    g_54e1df = 0xff;
    return result;
}
