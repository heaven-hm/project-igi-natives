// Original IGI.EXE function: Script_ParseEnumReal32_24 (VA 0x004F9CA0; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumReal32_24.h"
int32_t Script_ParseEnumReal32_24(void* context, int32_t param_2)

{
    int32_t i = 0;
    int32_t* entity_val = context + 0x13c;

    do
    {
        if (*entity_val == param_2)
        {
            *(context + (i << 2) + 0x13c) = 0;
            return i;
        }

        i += 1;
        entity_val = &entity_val[1];
    } while (i < 0x40);

    return i;
}
