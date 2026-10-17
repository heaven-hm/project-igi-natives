// IGI native provenance: SoundSys_AttachLipsync_13 - 0x004E92B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E92B0-SoundSys_AttachLipsync_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_AttachLipsync_13.h"
int32_t SoundSys_AttachLipsync_13(void* context)

{
    return Display_SwapBuffers_13(context + 0x30);
}
