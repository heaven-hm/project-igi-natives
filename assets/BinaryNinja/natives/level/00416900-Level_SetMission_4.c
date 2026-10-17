// Original IGI.EXE function: Level_SetMission_4 (VA 0x00416900; static CFG gate PASS, CFG score 1.000).
#include "Level_SetMission_4.h"
int32_t Level_SetMission_4(void* a1)

{
    int32_t kind;
    kind = g_57b1a2;
    QTask_HandleInput(a1, kind, 0);
    return g_57babc;
}
