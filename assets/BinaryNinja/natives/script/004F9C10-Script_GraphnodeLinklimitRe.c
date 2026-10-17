// Original IGI.EXE function: Script_GraphnodeLinklimitRe (VA 0x004F9C10; static CFG gate PASS, CFG score 1.000).
#include "Script_GraphnodeLinklimitRe.h"
int32_t Script_GraphnodeLinklimitRe(void* context, int32_t param_2)

{
    int32_t i = 0;
    int32_t* entity_val = context + 0x13c;

    do
    {
        if (!*entity_val)
        {
            *(context + (i << 2) + 0x13c) = param_2;
            return i;
        }

        i += 1;
        entity_val = &entity_val[1];
    } while (i < 0x40);

    return Warning_Show("GRAPHNODE - LINKLIMIT REACHED");
}
