#include "gi_platform.h"
#include "0047C330-Weapon_FireBullet_7.h"
int32_t Weapon_FireBullet_7(int32_t a1)

{
    uint32_t valA3;
    int32_t result;
    uint32_t objC1;

    if (g_540834 != 0xffffffff)
    {
        uint32_t valA1 = Frames_GetUpdateCounter();
        g_540834;

        if (valA1 - g_540834 >= 0)
        {
            objC1 = Frames_GetUpdateCounter();
            valA3 = g_540834;
        }
        else
        {
            valA3 = Frames_GetUpdateCounter();
            objC1 = g_540834;
        }

        result = g_5be3d4;
    }

    if (g_540834 == 0xffffffff || objC1 - valA3 > result)
    {
        char* valA7 = (&g_54083c)[Sys_FreeMemory_14(Level_SetMission_5(), 4)];
        struct status_msg* valA9 = SoundSys_SetMasterVolume_7(Script_FormatString(), valA7);

        if (valA9)
            SoundSys_StopSoundSample_7(valA9, a1);

        g_540834 = Frames_GetUpdateCounter();
        result = Sys_FreeMemory_14(Level_SetMission_5(), 6) + 6;
        g_5be3d4 = result;
    }

    return result;
}
