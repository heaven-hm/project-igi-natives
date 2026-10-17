// Original IGI.EXE function: Level_LoadObjects_8 (VA 0x00416FC0; static CFG gate PASS, CFG score 1.000).
#include "Level_LoadObjects_8.h"
int32_t Level_LoadObjects_8()

{
    void* entity_val = g_57babc;
    int32_t result = *(entity_val + 0xe4);
    *(entity_val + 0xe4) = result + 1;
    return result;
}
