// Original IGI.EXE function: Script_ParseEnumInt32_5 (VA 0x004F1110; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumInt32_5.h"
int32_t Script_ParseEnumInt32_5(void* a1)

{
    int32_t result = Script_EvaluateCondition_4(a1);

    if (result >= 0)
        result = Script_SpawnNewTask_5(result);

    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        do
        {
            result = Script_ParseEnumInt32_5(i);
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);
    }

    return result;
}
