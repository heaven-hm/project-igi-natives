// IGI native provenance: SoundSys_AttachLipsync_17 - 0x004EDCC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EDCC0-SoundSys_AttachLipsync_17.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_AttachLipsync_17.h"
int32_t SoundSys_AttachLipsync_17()

{
    int32_t result = g_a5efd4;

    if (!result)
        return result;

    int32_t data_val = Script_ParseEnumReal32_8();
    return QTask_ProcessQueue_2(g_a5efd4, data_val, 0);
}
