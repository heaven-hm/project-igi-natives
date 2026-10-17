// IGI native provenance: LINEUPMODE_NONE - 0x00424790 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00424790-LINEUPMODE_NONE.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
    int32_t temp_val = g_53b918;
    QTask_CreateTask_2(temp_val);
    QTask_CreateTask_2(g_53b91c);
    QTask_InitContext(g_53b920);
    temp_val = g_53b921;
    QTask_InitContext(temp_val);
    uint32_t result = QTask_CloseEvent_2(g_53b90c);
    g_53b90c = 0x181;
    return result;
}
