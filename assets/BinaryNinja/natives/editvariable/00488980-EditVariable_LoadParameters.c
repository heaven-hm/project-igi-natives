// Original IGI.EXE function: EditVariable_LoadParameters (VA 0x00488980; static CFG gate PASS, CFG score 1.000).
#include "EditVariable_LoadParameters.h"
int32_t EditVariable_LoadParameters(void* context)

{
    Script_ExecuteLevelScript_6(context + 0x38);
    Script_ExecuteLevelScript_6(context + 0x88);
    *(context + 0xd8) = 0;
    *(context + 0xdc) = 0;
    return 0;
}
