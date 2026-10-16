#include "AI_CheckSector.h"
int32_t* AI_CheckSector(void* a1)

{
    int32_t* result = *(a1 + 0x8fc);
    int32_t* result_1 = *result;

    if (result_1)
    {
        while (!(result[4] & 1))
        {
            AI_CombatTarget_2(a1, result);
            result = result_1;
            result_1 = *result_1;

            if (!result_1)
                break;
        }
    }

    return result;
}
