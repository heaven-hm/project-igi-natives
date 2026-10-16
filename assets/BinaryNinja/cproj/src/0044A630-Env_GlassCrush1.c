#include "gi_platform.h"
#include "0044A630-Env_GlassCrush1.h"
struct status_msg* Env_GlassCrush1(int32_t a1)

{
    char* valA3 = &g_53c880[Sys_FreeMemory_14(Level_SetMission_5(), 3) << 5];
    struct status_msg* result = SoundSys_SetMasterVolume_7(Script_FormatString(), valA3);

    if (!result)
        return result;

    return SoundSys_StopSoundSample_7(result, a1);
}
