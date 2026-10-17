// Original IGI.EXE function: Script_SpawnNewTask_32 (VA 0x004FEAC0; static CFG gate PASS, CFG score 1.000).
#include "Script_SpawnNewTask_32.h"
void* Script_SpawnNewTask_32(void* a1, int32_t a2)

{
    *(a1 + 0x120) = a2;
    *(a1 + 0x20) = 0;
    return a1;
}
