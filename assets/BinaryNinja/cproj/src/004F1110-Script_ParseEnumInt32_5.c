#include "gi_platform.h"
#include "004F1110-Script_ParseEnumInt32_5.h"
int32_t Script_ParseEnumInt32_5(void* a1)

{
    int32_t result = Script_EvaluateCondition_4(a1);

    if (result >= 0)
        result = Script_SpawnNewTask_5(result);

    int32_t* i = (*(int32_t*)(uintptr_t)(a1 + 8));

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
