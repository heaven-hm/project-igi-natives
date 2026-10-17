// IGI native provenance: Sound_Load - 0x004E68D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E68D0-Sound_Load.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_Load.h"
int32_t Sound_Load(void* context)

// Sig: void Sound_Load(char *sound_dir)
// Note: Load all level sounds from path , Params: Path of sound like
// 'MISSION:sounds'
{
    return Sys_IllegalDeviceNameInP(context, SoundSys_AttachLipsync_6, nullptr);
}
