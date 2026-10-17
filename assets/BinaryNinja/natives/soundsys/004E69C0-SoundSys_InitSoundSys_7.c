// IGI native provenance: SoundSys_InitSoundSys_7 - 0x004E69C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E69C0-SoundSys_InitSoundSys_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_InitSoundSys_7.h"
int32_t SoundSys_InitSoundSys_7(void* context)

{
    return Sys_IllegalDeviceNameInP(context, SoundSys_PlaySoundSample_7, nullptr);
}
