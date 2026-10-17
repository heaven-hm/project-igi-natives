// Original IGI.EXE function: PatrolPath_OnEvent (VA 0x004536E0; static CFG gate PASS, CFG score 1.000).
#include "PatrolPath_OnEvent.h"
int32_t PatrolPath_OnEvent(void* context)

{
    int32_t* data_val = *(context + 8);
    int32_t entity_val = *data_val;
    int32_t entity_1 = -(entity_val);
    int32_t* i = (entity_1 - entity_1) & data_val;
    int32_t result = 0;

    while (i)
    {
        i = *i;
        result += 1;

        if (!i)
            break;

        if (!*i)
            break;
    }

    return result;
}
