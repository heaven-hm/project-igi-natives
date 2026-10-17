// Original IGI.EXE function: Radio_LoadParameters (VA 0x0043AF90; static CFG gate PASS, CFG score 1.000).
#include "Radio_LoadParameters.h"
int32_t* Radio_LoadParameters(long double context , void* param_2)

{
    int32_t flagP = *(param_2 + 0x240);
    (*((FX_TrailUpdate() << 2) + &g_a970e0))(param_2);

    if (*(param_2 + 0x190))
        *(param_2 + 0x240) = 0;
    else if (Script_FormatString_6(param_2 + 0x244))
    {
        Script_SpawnNewTask_7(param_2 + 0x244, param_2);
        *(param_2 + 0x240) = context;
    }

    int32_t* result = *(param_2 + 0x238);

    if (!*(param_2 + 0x240))
    {
        if (result)
        {
            int32_t data_19 = *result;

            if (data_19)
                SoundSys_SetFrequency_7(data_19);

            result = Qtask_UpdateList(*(param_2 + 0x238));
            *(param_2 + 0x238) = 0;
        }

        if (flagP)
        {
            result = SoundSys_SetMasterVolume_7(param_2, param_2 + 0x2d4);

            if (result)
                return SoundSys_StopSoundSample_7(result, param_2 + 0x20);
        }
    }
    else if (!result)
    {
    label_43b02e:
        int32_t data_9 = *(param_2 + 0x23c);

        if (data_9)
        {
            *(param_2 + 0x23c) = data_9 - 1;
            return data_9 - 1;
        }

        struct status_msg* data_14 =
            SoundSys_SetMasterVolume_7(param_2, (Sys_FreeMemory_14(Level_SetMission_5(), 4) << 4) + param_2 + 0x294);
        result = Sys_FreeMemory_14(Level_SetMission_5(), 0x96) + 0x96;
        *(param_2 + 0x23c) = result;

        if (data_14)
        {
            *(param_2 + 0x238) = QTask_LinkEventHandler_2(data_14);
            return SoundSys_StopSoundSample_7(data_14, param_2 + 0x20);
        }
    }
    else if (!*result)
    {
        if (result)
        {
            Qtask_UpdateList(result);
            *(param_2 + 0x238) = 0;
        }

        goto label_43b02e;
    }

    return result;
}
