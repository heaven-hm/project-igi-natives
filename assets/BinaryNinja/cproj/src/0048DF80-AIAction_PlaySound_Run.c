#include "gi_platform.h"
#include "0048DF80-AIAction_PlaySound_Run.h"
int32_t* AIAction_PlaySound_Run(void* a1, int32_t* a2)

{
    char* valA1 = a2[0xa] + 8;

    if (valA1[0x20])
    {
        SoundSys_SetMasterVolume_7((*(int32_t*)(uintptr_t)(a1 + 0x14)), valA1);
        return AI_CombatTarget_2(a1, a2);
    }

    struct status_msg* valA5 = SoundSys_SetMasterVolume_7(Script_FormatString(), valA1);

    if (valA5)
        SoundSys_StopSoundSample_7(valA5, a1 + 0x20);

    return AI_CombatTarget_2(a1, a2);
}
