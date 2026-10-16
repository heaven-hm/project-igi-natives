#include "Env_CameraBeepS.h"
struct status_msg* Env_CameraBeepS(void* a1)

{
    void* dstD = nullptr;
    int32_t* valA = *(a1 + 0x25c4);
    void* flagP = *(a1 + 0x25d0);

    if (valA)
    {
        dstD = *valA;

        if (!dstD)
        {
            Qtask_UpdateList(valA);
            *(a1 + 0x25c4) = dstD;
        }
    }

    if (!*(flagP + 0x16c))
    {
        if (dstD)
        {
            SoundSys_SetFrequency_7(dstD);
            Qtask_UpdateList(*(a1 + 0x25c4));
            *(a1 + 0x25c4) = 0;
        }
    }
    else if (!dstD)
    {
        struct status_msg* valA2 = SoundSys_SetMasterVolume_7(Script_FormatString(), "camera_beep_s");

        if (valA2)
        {
            SoundSys_StopSoundSample_7(valA2, a1 + 0x20);
            *(a1 + 0x25c4) = QTask_LinkEventHandler_2(valA2);
        }
    }

    struct status_msg* result = *(a1 + 0x25c8);

    if (!*(flagP + 0x169))
    {
        if (result)
        {
            result = SoundSys_SetFrequency_7(result);
            *(a1 + 0x25c8) = 0;
        }
    }
    else if (!result)
    {
        char* v_10_4;

        if (!*(flagP + 0x164))
            v_10_4 = "camera_beep_l";
        else
            v_10_4 = "camera_beep_al";

        result = SoundSys_SetMasterVolume_7(Script_FormatString(), v_10_4);
        *(a1 + 0x25c8) = result;

        if (result)
            return SoundSys_StopSoundSample_7(result, a1 + 0x20);
    }

    return result;
}
