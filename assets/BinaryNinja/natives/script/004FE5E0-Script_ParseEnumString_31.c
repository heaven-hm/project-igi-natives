// Original IGI.EXE function: Script_ParseEnumString_31 (VA 0x004FE5E0; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumString_31.h"
int32_t Script_ParseEnumString_31(void* a1, int32_t a2)

{
    int32_t i = 0;

    if (*(a1 + 0xf0) > 0)
    {
        do
        {
            void* tmpD2 = *(*(a1 + 0x6c) + (i << 2));
            i += 1;
            *(tmpD2 + 0x30) = a2;
        } while (i < *(a1 + 0xf0));
    }

    return i;
}
