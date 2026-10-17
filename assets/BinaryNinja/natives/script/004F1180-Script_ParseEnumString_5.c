// Original IGI.EXE function: Script_ParseEnumString_5 (VA 0x004F1180; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumString_5.h"
void* Script_ParseEnumString_5(int32_t a1)

{
    int32_t* valA = Script_ExecuteLevelScript_5(a1);

    if (!valA)
        return &g_567c74;

    return &valA[3];
}
