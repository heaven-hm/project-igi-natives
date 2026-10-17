// Original IGI.EXE function: Weapon_FireBullet_7 (VA 0x0047C330; static CFG gate PASS, CFG score 1.000).
#include "Weapon_FireBullet_7.h"
int32_t Weapon_FireBullet_7(int32_t context)

{
    uint32_t data_3;
    int32_t result;
    uint32_t entity_1;

    if (g_540834 != 0xffffffff)
    {
        uint32_t data_1 = Frames_GetUpdateCounter();
        g_540834;

        if (data_1 - g_540834 >= 0)
        {
            entity_1 = Frames_GetUpdateCounter();
            data_3 = g_540834;
        }
        else
        {
            data_3 = Frames_GetUpdateCounter();
            entity_1 = g_540834;
        }

        result = g_5be3d4;
    }

    if (g_540834 == 0xffffffff || entity_1 - data_3 > result)
    {
        char* data_7 = (&g_54083c)[Sys_FreeMemory_14(Level_SetMission_5(), 4)];
        struct status_msg* data_9 = SoundSys_SetMasterVolume_7(Script_FormatString(), data_7);

        if (data_9)
            SoundSys_StopSoundSample_7(data_9, context);

        g_540834 = Frames_GetUpdateCounter();
        result = Sys_FreeMemory_14(Level_SetMission_5(), 6) + 6;
        g_5be3d4 = result;
    }

    return result;
}
