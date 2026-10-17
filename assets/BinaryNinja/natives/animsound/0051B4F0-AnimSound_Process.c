// IGI native provenance: AnimSound_Process - 0x0051B4F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051B4F0-AnimSound_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimSound_Process.h"
struct status_msg* AnimSound_Process(int32_t* context )

{
    char* data_val = context[1];

    if (data_val[0x20])
        return SoundSys_SetMasterVolume_7(*context, data_val);

    struct status_msg* result = SoundSys_SetMasterVolume_7(Script_FormatString(), data_val);

    if (!result)
        return result;

    return SoundSys_StopSoundSample_7(result, context[2]);
}
