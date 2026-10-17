// Original IGI.EXE function: AIAction_PlaySound_Run (VA 0x0048DF80; static CFG gate PASS, CFG score 1.000).
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
