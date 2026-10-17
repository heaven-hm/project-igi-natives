// Original IGI.EXE function: Script_SpawnNewTask_32 (VA 0x004FEAC0; static CFG gate PASS, CFG score 1.000).
#include "Script_SpawnNewTask_32.h"
void* Script_SpawnNewTask_32(void* context, int32_t param_2)

{
    *(context + 0x120) = param_2;
    *(context + 0x20) = 0;
    return context;
}
