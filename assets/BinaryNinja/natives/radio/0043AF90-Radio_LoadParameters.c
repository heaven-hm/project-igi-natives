// Original IGI.EXE function: Radio_LoadParameters (VA 0x0043AF90; static CFG gate PASS, CFG score 1.000).
#include "Radio_LoadParameters.h"
int32_t* Radio_LoadParameters(int80_t a1 @ fp0, void* a2)

{
    int32_t flagP = *(a2 + 0x240);
    (*((FX_TrailUpdate() << 2) + &g_a970e0))(a2);

    if (*(a2 + 0x190))
        *(a2 + 0x240) = 0;
    else if (Script_FormatString_6(a2 + 0x244))
    {
        Script_SpawnNewTask_7(a2 + 0x244, a2);
        *(a2 + 0x240) = a1;
    }

    int32_t* result = *(a2 + 0x238);

    if (!*(a2 + 0x240))
    {
        if (result)
        {
            int32_t valA19 = *result;

            if (valA19)
                SoundSys_SetFrequency_7(valA19);

            result = Qtask_UpdateList(*(a2 + 0x238));
            *(a2 + 0x238) = 0;
        }

        if (flagP)
        {
            result = SoundSys_SetMasterVolume_7(a2, a2 + 0x2d4);

            if (result)
                return SoundSys_StopSoundSample_7(result, a2 + 0x20);
        }
    }
    else if (!result)
    {
    label_43b02e:
        int32_t valA9 = *(a2 + 0x23c);

        if (valA9)
        {
            *(a2 + 0x23c) = valA9 - 1;
            return valA9 - 1;
        }

        struct status_msg* valA14 =
            SoundSys_SetMasterVolume_7(a2, (Sys_FreeMemory_14(Level_SetMission_5(), 4) << 4) + a2 + 0x294);
        result = Sys_FreeMemory_14(Level_SetMission_5(), 0x96) + 0x96;
        *(a2 + 0x23c) = result;

        if (valA14)
        {
            *(a2 + 0x238) = QTask_LinkEventHandler_2(valA14);
            return SoundSys_StopSoundSample_7(valA14, a2 + 0x20);
        }
    }
    else if (!*result)
    {
        if (result)
        {
            Qtask_UpdateList(result);
            *(a2 + 0x238) = 0;
        }

        goto label_43b02e;
    }

    return result;
}
