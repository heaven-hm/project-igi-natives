#include "AI_CombatTarget.h"
int32_t* AI_CombatTarget(void* a1)

{
    int32_t i_1 = 0x18;
    int32_t* ctxB = a1 + 0x6f0;
    int32_t* result;
    int32_t i;

    do
    {
        result = *ctxB;

        for (int32_t* j = *result; j; j = *j)
        {
            Env_TriggerAlarm_13(a1, result);
            result = j;
        }

        ctxB = &ctxB[3];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(a1 + 0x8e0) = 0;
    return result;
}
