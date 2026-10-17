// IGI native provenance: SoundSys_AttachLipsync_15 - 0x004EC160 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EC160-SoundSys_AttachLipsync_15.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_AttachLipsync_15.h"
int32_t SoundSys_AttachLipsync_15()

{
    char result = QTask_UnableToAllocateEvent(0);
    g_a5ef88 = result;
    g_a5ef90 = 0;
    return result;
}
