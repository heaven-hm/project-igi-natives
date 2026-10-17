// Original IGI.EXE function: SoundSys_EvaluateTrigger_10 (VA 0x004E7830; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_EvaluateTrigger_10.h"
int32_t SoundSys_EvaluateTrigger_10(void* a1, char a2)

{
    int32_t result = a2;
    *(a1 + 4) = result;
    return result;
}
