// Original IGI.EXE function: GuardGenerator_LoadParameters (VA 0x00487EB0; static CFG gate PASS, CFG score 1.000).
#include "GuardGenerator_LoadParameters.h"
int32_t GuardGenerator_LoadParameters(void* a1)

{
    Script_ExecuteLevelScript_6(a1 + 0x20);
    *(a1 + 0x70) = 0;
    *(a1 + 0x71) = 0;
    *(a1 + 0x74) = 0;
    *(a1 + 0x78) = 0;
    *(a1 + 0x72) = 0;
    *(a1 + 0x7c) = 0;
    return 0;
}
