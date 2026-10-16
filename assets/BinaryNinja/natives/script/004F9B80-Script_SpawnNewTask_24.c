#include "Script_SpawnNewTask_24.h"
int32_t* Script_SpawnNewTask_24(void* a1, int32_t a2, int32_t a3, int32_t a4)

{
    Qhash_Init(1);
    int32_t* result = Mem_Alloc(0x18, 4);
    Qhash_Reset();
    result[2] = a2;
    result[3] = a3;
    result[4] = a4;
    result[5] = a1;
    result[1] = 0;
    *result = 0;
    Camera_SetFieldOfView_33(a1 + 0x70, result);
    Script_GraphnodeLinklimitRe(Script_ExecuteLevelScript_23(a1, result[2]), result);
    Script_GraphnodeLinklimitRe(Script_ExecuteLevelScript_23(a1, result[3]), result);
    *(a1 + 0x60) += 1;
    return result;
}
