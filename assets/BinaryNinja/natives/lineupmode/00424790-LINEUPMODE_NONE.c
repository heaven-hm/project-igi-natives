// Original IGI.EXE function: LINEUPMODE_NONE (VA 0x00424790; static CFG gate PASS, CFG score 1.000).
#include "LINEUPMODE_NONE.h"
uint32_t LINEUPMODE_NONE()

{
    Sys_CloseFileStream_23("LINEUPMODE_NONE");
    Sys_CloseFileStream_23("LINEUPMODE_VERT_TOP");
    Sys_CloseFileStream_23("LINEUPMODE_VERT_CENTRE");
    Sys_CloseFileStream_23("LINEUPMODE_VERT_BOTTOM");
    Sys_CloseFileStream_23("LINEUPMODE_VERT_FILLOUT");
    Sys_CloseFileStream_23("LINEUPMODE_HOR_LEFT");
    Sys_CloseFileStream_23("LINEUPMODE_HOR_CENTRE");
    Sys_CloseFileStream_23("LINEUPMODE_HOR_RIGHT");
    Sys_CloseFileStream_23("LINEUPMODE_HOR_FILLOUT");
    QTask_CreateTask_2(g_53b910);
    QTask_CreateTask_2(g_53b914);
    int32_t tmpD = g_53b918;
    QTask_CreateTask_2(tmpD);
    QTask_CreateTask_2(g_53b91c);
    QTask_InitContext(g_53b920);
    tmpD = g_53b921;
    QTask_InitContext(tmpD);
    uint32_t result = QTask_CloseEvent_2(g_53b90c);
    g_53b90c = 0x181;
    return result;
}
