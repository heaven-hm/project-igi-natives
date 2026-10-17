// Original IGI.EXE function: Script_FormatString_17 (VA 0x004F4910; static CFG gate PASS, CFG score 1.000).
#include "Script_FormatString_17.h"
int32_t Script_FormatString_17(int32_t a1, int32_t a2, int32_t a3) __pure

{
    int32_t valA = a3;

    if (valA < 0)
        valA = 0;

    if (valA < a2)
        return a1 + (valA << 3);

    return a1 + (a2 << 3) - 8;
}
