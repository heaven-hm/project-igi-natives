// IGI native provenance: SoundSys_PlaySoundSample_17 - 0x004ECEA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ECEA0-SoundSys_PlaySoundSample_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_PlaySoundSample_17.h"
void* SoundSys_PlaySoundSample_17(int32_t* context, float param_2, float param_3, float param_4, float param_5, int32_t param_6)

{
    SoundSys_Update3DPosition_17(context, param_2, param_3, param_4, param_5);
    return SoundSys_StopSoundSample_16(context, param_6);
}
