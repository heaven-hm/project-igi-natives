// IGI native provenance: Physics_ObjLoad - 0x004EE030 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EE030-Physics_ObjLoad.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_ObjLoad.h"
int32_t Physics_ObjLoad(void* context)

// Sig: void Physics_ObjLoad(char *path)
// Note: Loads physics objects from path, Params: Path 'LOCAL:physicsobj'
{
    return Sys_IllegalDeviceNameInP(context, SoundSys_PlaySoundSample_18, nullptr);
}
