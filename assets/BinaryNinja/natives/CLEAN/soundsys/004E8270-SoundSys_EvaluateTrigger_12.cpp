// IGI native provenance: SoundSys_EvaluateTrigger_12 - 0x004E8270 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E8270-SoundSys_EvaluateTrigger_12.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_EvaluateTrigger_12.h"
int32_t SoundSys_EvaluateTrigger_12(void* context, int32_t param_2)

{
    *(context + 0xbc) = param_2;
    return param_2;
}
