// Original IGI.EXE function: ConditionalContainer_LoadParameters (VA 0x004874A0; static CFG gate PASS, CFG score 1.000).
#include "ConditionalContainer_LoadParameters.h"
int32_t* ConditionalContainer_LoadParameters(void* a1)

{
    Script_ExecuteLevelScript_6(a1 + 0x20);
    Script_ExecuteLevelScript_6(a1 + 0x70);
    int32_t* result = Script_ExecuteLevelScript_6(a1 + 0xc0);
    result = 0;
    *(a1 + 0x110) = 0;
    *(a1 + 0x112) = 1;
    *(a1 + 0x111) = 0;
    return result;
}
