#include "Weapon_GrenadeBnc1.h"
uint32_t Weapon_GrenadeBnc1(void* a1)

{
    int32_t valA = *(a1 + 0x1b8);

    if (!valA)
    {
        valA = Frames_GetUpdateCounter() - *(a1 + 0x724);

        if (valA > 0xa)
            *(a1 + 0x728) = 0;
    }
    else
    {
        valA = *(a1 + 0x728);

        if (!valA)
        {
            struct status_msg* valA2 = SoundSys_SetMasterVolume_7(Script_FormatString(), "grenade_bnc_1");

            if (valA2)
                SoundSys_StopSoundSample_7(valA2, a1 + 0x20);

            Weapon_UpdateZoom_4(a1, 0x12, 2, 0x46a00000);
            *(a1 + 0x728) = 1;
            uint32_t valA3 = Frames_GetUpdateCounter();
            *(a1 + 0x724) = valA3;
            return valA3;
        }
    }

    return valA;
}
