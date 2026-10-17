// Original IGI.EXE function: PatrolPath_OnTick (VA 0x00453730; static CFG gate PASS, CFG score 1.000).
#include "PatrolPath_OnTick.h"
int32_t* PatrolPath_OnTick(int32_t* context)

{
    int32_t* result = *context[1];

    if (!result || !*result || !result)
    {
        result = context[2];

        if (!result)
        {
            int32_t* entity_1 = *(*context + 8);
            int32_t data_1 = *entity_1;
            int32_t data_2 = -(data_1);
            return (data_2 - data_2) & entity_1;
        }
    }

    return result;
}
