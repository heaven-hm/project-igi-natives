// IGI native provenance: SoundSys_PlaySoundSample_11 - 0x004E7BB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7BB0-SoundSys_PlaySoundSample_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_PlaySoundSample_11.h"
int32_t SoundSys_PlaySoundSample_11()

{
    char result = g_a5ea75;

    if (result)
        result = SoundSys_EvaluateTrigger_9(g_a5ebd0);

    return result;
}
