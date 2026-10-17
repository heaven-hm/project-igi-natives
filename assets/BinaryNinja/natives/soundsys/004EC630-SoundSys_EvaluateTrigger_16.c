// IGI native provenance: SoundSys_EvaluateTrigger_16 - 0x004EC630 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004EC630-SoundSys_EvaluateTrigger_16.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_EvaluateTrigger_16.h"
void* SoundSys_EvaluateTrigger_16(void* context)

{
    void* result = *(context + 0x54);

    if (result)
    {
        Sys_ExecuteBytecode_2(result);
        result = nullptr;
        *(context + 0x54) = 0;
        memset(context, 0, 0x64);
    }

    return result;
}
