// IGI native provenance: SoundSys_EvaluateTrigger_10 - 0x004E7830 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7830-SoundSys_EvaluateTrigger_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_EvaluateTrigger_10.h"
int32_t SoundSys_EvaluateTrigger_10(void* context, char param_2)

{
    int32_t result = param_2;
    *(context + 4) = result;
    return result;
}
