// IGI native provenance: SoundSys_StopSoundSample_10 - 0x004E77D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E77D0-SoundSys_StopSoundSample_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_StopSoundSample_10.h"
char* SoundSys_StopSoundSample_10(int32_t* context)

{
    return Sys_FreeMemory_21(*context, 1);
}
