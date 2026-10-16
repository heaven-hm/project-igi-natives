#include "Script_SpawnNewTask_7.h"
int32_t Script_SpawnNewTask_7(int32_t* a1, void* a2)

{
    int32_t v_8 = 0;
    int32_t v_4 = 0;
    int32_t result;

    if (!a1[1])
        result = Script_Isexists(a1, a2);
    else
    {
        Script_ParseEnumInt32_7(a1);
        result = a1[1];

        if (!result)
            result = Script_Isexists(a1, a2);
    }

    int32_t srcS1 = a1[2];

    if (!srcS1)
        return result;

    long double fpu0;
    long double fpu1;
    return Sys_DispatchOpcode_24(fpu0, fpu1, srcS1);
}
