// Original IGI.EXE function: PointlightDynCubeObj_Update (VA 0x005314F0; static CFG gate PASS, CFG score 1.000).
#include "PointlightDynCubeObj_Update.h"
uint32_t PointlightDynCubeObj_Update()

{
    Sys_OpenFileStream_2(&g_afa800);
    Sys_OpenFileStream_2(0xafa820);
    QTask_CloseEvent_2(g_54f800);
    int16_t objC = g_54f802;
    g_54f800 = 0x181;
    uint32_t result = QTask_CloseEvent_2(objC);
    g_54f802 = 0x181;
    return result;
}
