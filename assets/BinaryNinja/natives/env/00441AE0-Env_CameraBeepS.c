// IGI native provenance: Env_CameraBeepS - 0x00441AE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00441AE0-Env_CameraBeepS.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_CameraBeepS.h"
struct status_msg* Env_CameraBeepS(void* context)

{
    void* dest_val = nullptr;
    int32_t* data_val = *(context + 0x25c4);
    void* flagP = *(context + 0x25d0);

    if (data_val)
    {
        dest_val = *data_val;

        if (!dest_val)
        {
            Qtask_UpdateList(data_val);
            *(context + 0x25c4) = dest_val;
        }
    }

    if (!*(flagP + 0x16c))
    {
        if (dest_val)
        {
            SoundSys_SetFrequency_7(dest_val);
            Qtask_UpdateList(*(context + 0x25c4));
            *(context + 0x25c4) = 0;
        }
    }
    else if (!dest_val)
    {
        struct status_msg* data_2 = SoundSys_SetMasterVolume_7(Script_FormatString(), "camera_beep_s");

        if (data_2)
        {
            SoundSys_StopSoundSample_7(data_2, context + 0x20);
            *(context + 0x25c4) = QTask_LinkEventHandler_2(data_2);
        }
    }

    struct status_msg* result = *(context + 0x25c8);

    if (!*(flagP + 0x169))
    {
        if (result)
        {
            result = SoundSys_SetFrequency_7(result);
            *(context + 0x25c8) = 0;
        }
    }
    else if (!result)
    {
        char* item_10_4;

        if (!*(flagP + 0x164))
            item_10_4 = "camera_beep_l";
        else
            item_10_4 = "camera_beep_al";

        result = SoundSys_SetMasterVolume_7(Script_FormatString(), item_10_4);
        *(context + 0x25c8) = result;

        if (result)
            return SoundSys_StopSoundSample_7(result, context + 0x20);
    }

    return result;
}
