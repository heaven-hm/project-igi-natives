// Original IGI.EXE function: SoundSys_EvaluateTrigger_5 (VA 0x004E6670; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_EvaluateTrigger_5.h"
int32_t SoundSys_EvaluateTrigger_5()

{
    char result = g_548816;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_548816 = result;
    }

    return result;
}
