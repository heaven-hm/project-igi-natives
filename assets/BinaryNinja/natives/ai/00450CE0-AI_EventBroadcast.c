#include "AI_EventBroadcast.h"
int32_t* AI_EventBroadcast(int32_t a1)

{
    int32_t i = 0;
    int32_t* result = AI_CombatTarget_18();

    if (*result > 0)
    {
        int32_t srcS1 = 8;

        do
        {
            int32_t objC1 = 0;
            objC1 = *(*(AI_CombatTarget_18() + srcS1) + 0x1c);
            uint32_t valA3 = AI_CheckHearing();
            (*(((objC1 + valA3 * 0x180) << 2) + &g_a96ae0))(*(AI_CombatTarget_18() + srcS1), a1);
            i += 1;
            srcS1 += 4;
            result = AI_CombatTarget_18();
        } while (i < *result);
    }

    return result;
}
