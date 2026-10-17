// Original IGI.EXE function: Script_ParseEnumString_31 (VA 0x004FE5E0; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumString_31.h"
int32_t Script_ParseEnumString_31(void* context, int32_t param_2)

{
    int32_t i = 0;

    if (*(context + 0xf0) > 0)
    {
        do
        {
            void* temp_2 = *(*(context + 0x6c) + (i << 2));
            i += 1;
            *(temp_2 + 0x30) = param_2;
        } while (i < *(context + 0xf0));
    }

    return i;
}
