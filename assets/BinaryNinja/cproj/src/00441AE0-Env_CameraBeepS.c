#include "gi_platform.h"
#include "00441AE0-Env_CameraBeepS.h"
struct status_msg* Env_CameraBeepS(void* a1)

{
    void* dstD = nullptr;
    int32_t* valA = (*(int32_t*)(uintptr_t)(a1 + 0x25c4));
    void* flagP = (*(int32_t*)(uintptr_t)(a1 + 0x25d0));

    if (valA)
    {
        dstD = *valA;

        if (!dstD)
        {
            Qtask_UpdateList(valA);
            (*(int32_t*)(uintptr_t)(a1 + 0x25c4)) = dstD;
        }
    }

    if (!*(flagP + 0x16c))
    {
        if (dstD)
        {
            SoundSys_SetFrequency_7(dstD);
            Qtask_UpdateList((*(int32_t*)(uintptr_t)(a1 + 0x25c4)));
            (*(int32_t*)(uintptr_t)(a1 + 0x25c4)) = 0;
        }
    }
    else if (!dstD)
    {
        struct status_msg* valA2 = SoundSys_SetMasterVolume_7(Script_FormatString(), "camera_beep_s");

        if (valA2)
        {
            SoundSys_StopSoundSample_7(valA2, a1 + 0x20);
            (*(int32_t*)(uintptr_t)(a1 + 0x25c4)) = QTask_LinkEventHandler_2(valA2);
        }
    }

    struct status_msg* result = (*(int32_t*)(uintptr_t)(a1 + 0x25c8));

    if (!*(flagP + 0x169))
    {
        if (result)
        {
            result = SoundSys_SetFrequency_7(result);
            (*(int32_t*)(uintptr_t)(a1 + 0x25c8)) = 0;
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
        (*(int32_t*)(uintptr_t)(a1 + 0x25c8)) = result;

        if (result)
            return SoundSys_StopSoundSample_7(result, a1 + 0x20);
    }

    return result;
}
