// IGI native provenance: Env_GlassCrush1 - 0x0044A630 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044A630-Env_GlassCrush1.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_GlassCrush1.h"
struct status_msg* Env_GlassCrush1(int32_t context)

{
    char* data_3 = &g_53c880[Sys_FreeMemory_14(Level_SetMission_5(), 3) << 5];
    struct status_msg* result = SoundSys_SetMasterVolume_7(Script_FormatString(), data_3);

    if (!result)
        return result;

    return SoundSys_StopSoundSample_7(result, context);
}
