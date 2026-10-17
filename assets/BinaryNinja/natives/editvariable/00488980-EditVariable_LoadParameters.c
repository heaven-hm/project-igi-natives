// Original IGI.EXE function: EditVariable_LoadParameters (VA 0x00488980; static CFG gate PASS, CFG score 1.000).
#include "EditVariable_LoadParameters.h"
int32_t EditVariable_LoadParameters(void* a1)

{
    Script_ExecuteLevelScript_6(a1 + 0x38);
    Script_ExecuteLevelScript_6(a1 + 0x88);
    *(a1 + 0xd8) = 0;
    *(a1 + 0xdc) = 0;
    return 0;
}
