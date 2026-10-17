// IGI native provenance: SoundSys_EvaluateTrigger_5 - 0x004E6670 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E6670-SoundSys_EvaluateTrigger_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
