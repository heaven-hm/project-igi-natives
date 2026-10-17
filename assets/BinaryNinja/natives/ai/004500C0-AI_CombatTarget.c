// Original IGI.EXE function: AI_CombatTarget (VA 0x004500C0; static CFG gate PASS, CFG score 1.000).
#include "AI_CombatTarget.h"
int32_t* AI_CombatTarget(void* context)

{
    int32_t i_1 = 0x18;
    int32_t* context_val = context + 0x6f0;
    int32_t* result;
    int32_t i;

    do
    {
        result = *context_val;

        for (int32_t* j = *result; j; j = *j)
        {
            Env_TriggerAlarm_13(context, result);
            result = j;
        }

        context_val = &context_val[3];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    *(context + 0x8e0) = 0;
    return result;
}
