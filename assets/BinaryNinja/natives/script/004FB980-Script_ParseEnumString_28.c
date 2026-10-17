// Original IGI.EXE function: Script_ParseEnumString_28 (VA 0x004FB980; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumString_28.h"
void* Script_ParseEnumString_28(void* a1)

{
    *(a1 + 0x1b4) = 0;
    return SoundSys_EvaluateTrigger_16(a1 + 0xf0);
}
