// Original IGI.EXE function: ConditionalSound_LoadParameters (VA 0x00425050; static CFG gate FAIL, CFG score 0.833).
#include "ConditionalSound_LoadParameters.h"
int32_t ConditionalSound_LoadParameters(void* context)

{
    Script_ExecuteLevelScript_6(context + 0x20);
    memset(context + 0x90, 0, 0x1a);
    *(context + 0x70) = 0;
    *(context + 0xb0) = 0;
    *(context + 0xb1) = 0;
    *(context + 0xb2) = 0;
    *(context + 0xb4) = 0;
    *(context + 0xb3) = 0;
    *(context + 0xac) = 0xffffffff;
    *(context + 0x120) = 0;
    *(context + 0x124) = 0;
    return 0;
}
