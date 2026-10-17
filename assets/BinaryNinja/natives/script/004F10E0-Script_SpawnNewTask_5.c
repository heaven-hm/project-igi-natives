// Original IGI.EXE function: Script_SpawnNewTask_5 (VA 0x004F10E0; static CFG gate PASS, CFG score 1.000).
#include "Script_SpawnNewTask_5.h"
int32_t Script_SpawnNewTask_5(int32_t context)

{
    int32_t result = Qtask_UpdateList(*((context << 2) + &g_a71890));
    *((context << 2) + &g_a71890) = 0;
    return result;
}
