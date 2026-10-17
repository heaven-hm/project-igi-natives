// Original IGI.EXE function: Level_LoadObjects_8 (VA 0x00416FC0; static CFG gate PASS, CFG score 1.000).
#include "Level_LoadObjects_8.h"
int32_t Level_LoadObjects_8()

{
    void* objC = g_57babc;
    int32_t result = *(objC + 0xe4);
    *(objC + 0xe4) = result + 1;
    return result;
}
