#include "EditCamera_LoadParameters.h"
int32_t* EditCamera_LoadParameters(void* a1)

{
    if (Script_EvaluateCondition_4(a1) >= 0)
    {
        int32_t valA1 = Script_SpawnNewTask_6();
        int32_t objC1 = 0;
        objC1 = *(a1 + 0x1c);
        int32_t valA5 = *(((valA1 * 0x180 + objC1) << 2) + &g_a96ae0);

        if (valA5)
            valA5(a1);
    }

    int32_t* valA6 = *(a1 + 0x9c);

    if (valA6)
    {
        int32_t* valA7 = *valA6;

        if (valA7)
            QTask_FindType(valA7);

        Qtask_UpdateList(*(a1 + 0x9c));
    }

    int32_t* valA8 = *(a1 + 0xa0);

    if (valA8)
    {
        int32_t* valA9 = *valA8;

        if (valA9)
            QTask_FindType(valA9);

        Qtask_UpdateList(*(a1 + 0xa0));
    }

    int32_t* result = *(a1 + 0xa4);

    if (!result)
        return result;

    int32_t* valA11 = *result;

    if (valA11)
        QTask_FindType(valA11);

    return Qtask_UpdateList(*(a1 + 0xa4));
}
