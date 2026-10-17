// Original IGI.EXE function: LevelScript_OnEvent (VA 0x0052CA00; static CFG gate PASS, CFG score 1.000).
#include "LevelScript_OnEvent.h"
int32_t LevelScript_OnEvent()

{
    QTask_InitContext(g_54f6f2);
    int16_t objC = g_54f6f0;
    g_54f6f2 = 0xff;
    QTask_CloseEvent_2(objC);
    return DynObj_CreateMagicObject_4(g_a84564);
}
