// Original IGI.EXE function: Weapon_GrenadeBnc1 (VA 0x00476CC0; static CFG gate PASS, CFG score 1.000).
#include "Weapon_GrenadeBnc1.h"
uint32_t Weapon_GrenadeBnc1(void* context)

{
    int32_t data_val = *(context + 0x1b8);

    if (!data_val)
    {
        data_val = Frames_GetUpdateCounter() - *(context + 0x724);

        if (data_val > 0xa)
            *(context + 0x728) = 0;
    }
    else
    {
        data_val = *(context + 0x728);

        if (!data_val)
        {
            struct status_msg* data_2 = SoundSys_SetMasterVolume_7(Script_FormatString(), "grenade_bnc_1");

            if (data_2)
                SoundSys_StopSoundSample_7(data_2, context + 0x20);

            Weapon_UpdateZoom_4(context, 0x12, 2, 0x46a00000);
            *(context + 0x728) = 1;
            uint32_t data_3 = Frames_GetUpdateCounter();
            *(context + 0x724) = data_3;
            return data_3;
        }
    }

    return data_val;
}
