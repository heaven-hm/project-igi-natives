#include "AnimSound_Process.h"
struct status_msg* AnimSound_Process(int32_t* a1 @ 0x8)

{
    char* valA = a1[1];

    if (valA[0x20])
        return SoundSys_SetMasterVolume_7(*a1, valA);

    struct status_msg* result = SoundSys_SetMasterVolume_7(Script_FormatString(), valA);

    if (!result)
        return result;

    return SoundSys_StopSoundSample_7(result, a1[2]);
}
