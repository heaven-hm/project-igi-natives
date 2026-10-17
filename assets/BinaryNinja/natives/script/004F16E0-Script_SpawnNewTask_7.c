// Original IGI.EXE function: Script_SpawnNewTask_7 (VA 0x004F16E0; static CFG gate PASS, CFG score 1.000).
#include "Script_SpawnNewTask_7.h"
int32_t Script_SpawnNewTask_7(int32_t* context, void* param_2)

{
    int32_t item_8 = 0;
    int32_t item_4 = 0;
    int32_t result;

    if (!context[1])
        result = Script_Isexists(context, param_2);
    else
    {
        Script_ParseEnumInt32_7(context);
        result = context[1];

        if (!result)
            result = Script_Isexists(context, param_2);
    }

    int32_t source_1 = context[2];

    if (!source_1)
        return result;

    long double fpu0;
    long double fpu1;
    return Sys_DispatchOpcode_24(fpu0, fpu1, source_1);
}
