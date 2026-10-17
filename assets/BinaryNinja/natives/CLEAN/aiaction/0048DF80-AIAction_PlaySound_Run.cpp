// IGI native provenance: AIAction_PlaySound_Run - 0x0048DF80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048DF80-AIAction_PlaySound_Run.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIAction_PlaySound_Run.h"
int32_t* AIAction_PlaySound_Run(void* context, int32_t* param_2)

{
    char* data_1 = param_2[0xa] + 8;

    if (data_1[0x20])
    {
        SoundSys_SetMasterVolume_7(*(context + 0x14), data_1);
        return AI_CombatTarget_2(context, param_2);
    }

    struct status_msg* data_5 = SoundSys_SetMasterVolume_7(Script_FormatString(), data_1);

    if (data_5)
        SoundSys_StopSoundSample_7(data_5, context + 0x20);

    return AI_CombatTarget_2(context, param_2);
}
