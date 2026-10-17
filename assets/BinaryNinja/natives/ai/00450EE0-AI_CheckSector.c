// Original IGI.EXE function: AI_CheckSector (VA 0x00450EE0; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector.h"
int32_t* AI_CheckSector(void* context)

{
    int32_t* result = *(context + 0x8fc);
    int32_t* result_1 = *result;

    if (result_1)
    {
        while (!(result[4] & 1))
        {
            AI_CombatTarget_2(context, result);
            result = result_1;
            result_1 = *result_1;

            if (!result_1)
                break;
        }
    }

    return result;
}
