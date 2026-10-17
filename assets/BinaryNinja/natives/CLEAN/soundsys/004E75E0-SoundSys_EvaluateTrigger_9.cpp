// IGI native provenance: SoundSys_EvaluateTrigger_9 - 0x004E75E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E75E0-SoundSys_EvaluateTrigger_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_EvaluateTrigger_9.h"
void* SoundSys_EvaluateTrigger_9(int32_t* context)

{
    void* result = *context;

    if (!result)
        return result;

    Sys_ExecuteBytecode_21(result);
    return SoundSys_LoadSoundDef_9(context, 0, 0);
}
