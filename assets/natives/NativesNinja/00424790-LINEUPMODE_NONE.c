#include "00424790-LINEUPMODE_NONE.h"
/* 0x00424790 LINEUPMODE_NONE full linked: callers=1 callees=16 */
uint32_t LINEUPMODE_NONE()

{
    sub_4b8920("LINEUPMODE_NONE");
    sub_4b8920("LINEUPMODE_VERT_TOP");
    sub_4b8920("LINEUPMODE_VERT_CENTRE");
    sub_4b8920("LINEUPMODE_VERT_BOTTOM");
    sub_4b8920("LINEUPMODE_VERT_FILLOUT");
    sub_4b8920("LINEUPMODE_HOR_LEFT");
    sub_4b8920("LINEUPMODE_HOR_CENTRE");
    sub_4b8920("LINEUPMODE_HOR_RIGHT");
    sub_4b8920("LINEUPMODE_HOR_FILLOUT");
    QTask_CreateTask_2(g_53b910);
    QTask_CreateTask_2(g_53b914);
    int32_t edx = g_53b918;
    QTask_CreateTask_2(edx);
    QTask_CreateTask_2(g_53b91c);
    QTask_InitContext(g_53b920);
    edx = g_53b921;
    QTask_InitContext(edx);
    uint32_t result = QTask_CloseEvent_2(g_53b90c);
    g_53b90c = 0x181;
    return result;
}
