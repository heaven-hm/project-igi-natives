// IGI native provenance: SoundSys_StopSoundSample_13 - 0x004E9090 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E9090-SoundSys_StopSoundSample_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_StopSoundSample_13.h"
int32_t* SoundSys_StopSoundSample_13(void* context)

{
    *(context + 0x20) = 0;
    *(context + 0x24) = 0;
    *(context + 0x28) = 0;
    *(context + 0x2c) = 0xff;
    return Display_SyncVSync_13(context + 0x30, 1);
}
