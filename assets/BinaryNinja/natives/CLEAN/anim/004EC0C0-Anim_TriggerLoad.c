// IGI native provenance: Anim_TriggerLoad - 0x004EC0C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EC0C0-Anim_TriggerLoad.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Anim_TriggerLoad.h"
int32_t Anim_TriggerLoad(void* context)

// Sig: void Anim_TriggerLoad(char *path)
// Note: Loads anim trigger objects from path, Params: Path 'LOCAL:animtrigger'
{
    return Sys_IllegalDeviceNameInP(context, SoundSysMicrophone_OnTick, nullptr);
}
