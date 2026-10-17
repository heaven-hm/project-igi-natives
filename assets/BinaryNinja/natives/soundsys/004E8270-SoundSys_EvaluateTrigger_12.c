// Original IGI.EXE function: SoundSys_EvaluateTrigger_12 (VA 0x004E8270; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_EvaluateTrigger_12.h"
int32_t SoundSys_EvaluateTrigger_12(void* context, int32_t param_2)

{
    *(context + 0xbc) = param_2;
    return param_2;
}
