// Original IGI.EXE function: AI_EventBroadcast (VA 0x00450CE0; static CFG gate PASS, CFG score 1.000).
#include "AI_EventBroadcast.h"
int32_t* AI_EventBroadcast(int32_t context)

{
    int32_t i = 0;
    int32_t* result = AI_CombatTarget_18();

    if (*result > 0)
    {
        int32_t source_1 = 8;

        do
        {
            int32_t entity_1 = 0;
            entity_1 = *(*(AI_CombatTarget_18() + source_1) + 0x1c);
            uint32_t data_3 = AI_CheckHearing();
            (*(((entity_1 + data_3 * 0x180) << 2) + &g_a96ae0))(*(AI_CombatTarget_18() + source_1), context);
            i += 1;
            source_1 += 4;
            result = AI_CombatTarget_18();
        } while (i < *result);
    }

    return result;
}
