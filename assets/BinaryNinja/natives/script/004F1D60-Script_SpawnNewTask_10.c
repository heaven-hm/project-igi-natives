// Original IGI.EXE function: Script_SpawnNewTask_10 (VA 0x004F1D60; static CFG gate PASS, CFG score 1.000).
#include "Script_SpawnNewTask_10.h"
int32_t** Script_SpawnNewTask_10(int32_t** context, int32_t param_2)

{
    context[3] = param_2;
    *context = &context[1];
    context[2] = context;
    context[1] = 0;
    return context;
}
