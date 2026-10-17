// Original IGI.EXE function: Script_SpawnNewTask_24 (VA 0x004F9B80; static CFG gate PASS, CFG score 1.000).
#include "Script_SpawnNewTask_24.h"
int32_t* Script_SpawnNewTask_24(void* context, int32_t param_2, int32_t param_3, int32_t param_4)

{
    Qhash_Init(1);
    int32_t* result = Mem_Alloc(0x18, 4);
    Qhash_Reset();
    result[2] = param_2;
    result[3] = param_3;
    result[4] = param_4;
    result[5] = context;
    result[1] = 0;
    *result = 0;
    Camera_SetFieldOfView_33(context + 0x70, result);
    Script_GraphnodeLinklimitRe(Script_ExecuteLevelScript_23(context, result[2]), result);
    Script_GraphnodeLinklimitRe(Script_ExecuteLevelScript_23(context, result[3]), result);
    *(context + 0x60) += 1;
    return result;
}
